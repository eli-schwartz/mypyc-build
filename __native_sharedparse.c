#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef sharedparsemodule_methods[] = {
    {"special_function_elide_names", (PyCFunction)CPyPy_sharedparse___special_function_elide_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"argument_elide_name", (PyCFunction)CPyPy_sharedparse___argument_elide_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef sharedparsemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.sharedparse",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    sharedparsemodule_methods
};

PyObject *CPyInit_mypy___sharedparse(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___sharedparse_internal) {
        Py_INCREF(CPyModule_mypy___sharedparse_internal);
        return CPyModule_mypy___sharedparse_internal;
    }
    CPyModule_mypy___sharedparse_internal = PyModule_Create(&sharedparsemodule);
    if (unlikely(CPyModule_mypy___sharedparse_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___sharedparse_internal, "__name__");
    CPyStatic_sharedparse___globals = PyModule_GetDict(CPyModule_mypy___sharedparse_internal);
    if (unlikely(CPyStatic_sharedparse___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_sharedparse_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___sharedparse_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___sharedparse_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS);
    CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS = NULL;
    CPy_XDECREF(CPyStatic_sharedparse___MAGIC_METHODS_ALLOWING_KWARGS);
    CPyStatic_sharedparse___MAGIC_METHODS_ALLOWING_KWARGS = NULL;
    CPy_XDECREF(CPyStatic_sharedparse___BINARY_MAGIC_METHODS);
    CPyStatic_sharedparse___BINARY_MAGIC_METHODS = NULL;
    CPy_XDECREF(CPyStatic_sharedparse___MAGIC_METHODS);
    CPyStatic_sharedparse___MAGIC_METHODS = NULL;
    CPy_XDECREF(CPyStatic_sharedparse___MAGIC_METHODS_POS_ARGS_ONLY);
    CPyStatic_sharedparse___MAGIC_METHODS_POS_ARGS_ONLY = NULL;
    return NULL;
}

char CPyDef_sharedparse___special_function_elide_names(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatic_sharedparse___MAGIC_METHODS_POS_ARGS_ONLY;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAGIC_METHODS_POS_ARGS_ONLY\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/sharedparse.py", "special_function_elide_names", 108, CPyStatic_sharedparse___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r0, cpy_r_name);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/sharedparse.py", "special_function_elide_names", 108, CPyStatic_sharedparse___globals);
        goto CPyL5;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_sharedparse___special_function_elide_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:special_function_elide_names", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_sharedparse___special_function_elide_names(arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/sharedparse.py", "special_function_elide_names", 107, CPyStatic_sharedparse___globals);
    return NULL;
}

char CPyDef_sharedparse___argument_elide_name(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_name != cpy_r_r0;
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL8;
CPyL2: ;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r3 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/sharedparse.py", "argument_elide_name", 112, CPyStatic_sharedparse___globals, "str", cpy_r_name);
        goto CPyL9;
    }
    cpy_r_r4 = CPyStatics[756]; /* '__' */
    cpy_r_r5 = CPyStr_Startswith(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r5) goto CPyL5;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL5: ;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r7 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/sharedparse.py", "argument_elide_name", 112, CPyStatic_sharedparse___globals, "str", cpy_r_name);
        goto CPyL9;
    }
    cpy_r_r8 = CPyStatics[756]; /* '__' */
    cpy_r_r9 = CPyStr_Endswith(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 ^ 1;
    cpy_r_r6 = cpy_r_r10;
CPyL7: ;
    cpy_r_r2 = cpy_r_r6;
CPyL8: ;
    return cpy_r_r2;
CPyL9: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_sharedparse___argument_elide_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:argument_elide_name", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (PyUnicode_Check(obj_name))
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL6829;
    if (obj_name == Py_None)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL6829;
    CPy_TypeError("str or None", obj_name); 
    goto fail;
__LL6829: ;
    char retval = CPyDef_sharedparse___argument_elide_name(arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/sharedparse.py", "argument_elide_name", 111, CPyStatic_sharedparse___globals);
    return NULL;
}

char CPyDef_sharedparse_____top_level__(void) {
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
    int32_t cpy_r_r44;
    char cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
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
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
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
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    int32_t cpy_r_r211;
    char cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    int32_t cpy_r_r227;
    char cpy_r_r228;
    int32_t cpy_r_r229;
    char cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    int32_t cpy_r_r233;
    char cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    int32_t cpy_r_r237;
    char cpy_r_r238;
    int32_t cpy_r_r239;
    char cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    int32_t cpy_r_r243;
    char cpy_r_r244;
    int32_t cpy_r_r245;
    char cpy_r_r246;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    int32_t cpy_r_r249;
    char cpy_r_r250;
    int32_t cpy_r_r251;
    char cpy_r_r252;
    int32_t cpy_r_r253;
    char cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    int32_t cpy_r_r259;
    char cpy_r_r260;
    int32_t cpy_r_r261;
    char cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    int32_t cpy_r_r265;
    char cpy_r_r266;
    int32_t cpy_r_r267;
    char cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    int32_t cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    int32_t cpy_r_r283;
    char cpy_r_r284;
    char cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    char cpy_r_r307;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", -1, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_sharedparse___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 1, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_sharedparse___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 3, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[5421]; /* '__abs__' */
    cpy_r_r14 = CPyStatics[706]; /* '__call__' */
    cpy_r_r15 = CPyStatics[5422]; /* '__complex__' */
    cpy_r_r16 = CPyStatics[1188]; /* '__contains__' */
    cpy_r_r17 = CPyStatics[5423]; /* '__del__' */
    cpy_r_r18 = CPyStatics[5424]; /* '__delattr__' */
    cpy_r_r19 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r20 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r21 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r22 = CPyStatics[5425]; /* '__float__' */
    cpy_r_r23 = CPyStatics[725]; /* '__getattr__' */
    cpy_r_r24 = CPyStatics[726]; /* '__getattribute__' */
    cpy_r_r25 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r26 = CPyStatics[5426]; /* '__hex__' */
    cpy_r_r27 = CPyStatics[288]; /* '__init__' */
    cpy_r_r28 = CPyStatics[720]; /* '__init_subclass__' */
    cpy_r_r29 = CPyStatics[5427]; /* '__int__' */
    cpy_r_r30 = CPyStatics[3363]; /* '__invert__' */
    cpy_r_r31 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r32 = CPyStatics[848]; /* '__len__' */
    cpy_r_r33 = CPyStatics[5428]; /* '__long__' */
    cpy_r_r34 = CPyStatics[3359]; /* '__neg__' */
    cpy_r_r35 = CPyStatics[721]; /* '__new__' */
    cpy_r_r36 = CPyStatics[5429]; /* '__oct__' */
    cpy_r_r37 = CPyStatics[3361]; /* '__pos__' */
    cpy_r_r38 = CPyStatics[5430]; /* '__repr__' */
    cpy_r_r39 = CPyStatics[5431]; /* '__reversed__' */
    cpy_r_r40 = CPyStatics[727]; /* '__setattr__' */
    cpy_r_r41 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r42 = CPyStatics[1418]; /* '__str__' */
    cpy_r_r43 = PySet_New(NULL);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r44 = PySet_Add(cpy_r_r43, cpy_r_r13);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r46 = PySet_Add(cpy_r_r43, cpy_r_r14);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r48 = PySet_Add(cpy_r_r43, cpy_r_r15);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r50 = PySet_Add(cpy_r_r43, cpy_r_r16);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r52 = PySet_Add(cpy_r_r43, cpy_r_r17);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r54 = PySet_Add(cpy_r_r43, cpy_r_r18);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r56 = PySet_Add(cpy_r_r43, cpy_r_r19);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r58 = PySet_Add(cpy_r_r43, cpy_r_r20);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r60 = PySet_Add(cpy_r_r43, cpy_r_r21);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r62 = PySet_Add(cpy_r_r43, cpy_r_r22);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r64 = PySet_Add(cpy_r_r43, cpy_r_r23);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r66 = PySet_Add(cpy_r_r43, cpy_r_r24);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r68 = PySet_Add(cpy_r_r43, cpy_r_r25);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r70 = PySet_Add(cpy_r_r43, cpy_r_r26);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r72 = PySet_Add(cpy_r_r43, cpy_r_r27);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r74 = PySet_Add(cpy_r_r43, cpy_r_r28);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r76 = PySet_Add(cpy_r_r43, cpy_r_r29);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r78 = PySet_Add(cpy_r_r43, cpy_r_r30);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r80 = PySet_Add(cpy_r_r43, cpy_r_r31);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r82 = PySet_Add(cpy_r_r43, cpy_r_r32);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r84 = PySet_Add(cpy_r_r43, cpy_r_r33);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r86 = PySet_Add(cpy_r_r43, cpy_r_r34);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r88 = PySet_Add(cpy_r_r43, cpy_r_r35);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r90 = PySet_Add(cpy_r_r43, cpy_r_r36);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r92 = PySet_Add(cpy_r_r43, cpy_r_r37);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r94 = PySet_Add(cpy_r_r43, cpy_r_r38);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r96 = PySet_Add(cpy_r_r43, cpy_r_r39);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r98 = PySet_Add(cpy_r_r43, cpy_r_r40);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r100 = PySet_Add(cpy_r_r43, cpy_r_r41);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    cpy_r_r102 = PySet_Add(cpy_r_r43, cpy_r_r42);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL126;
    }
    CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS = cpy_r_r43;
    CPy_INCREF(CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS);
    cpy_r_r104 = CPyStatic_sharedparse___globals;
    cpy_r_r105 = CPyStatics[5432]; /* '_NON_BINARY_MAGIC_METHODS' */
    cpy_r_r106 = CPyDict_SetItem(cpy_r_r104, cpy_r_r105, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 8, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r108 = CPyStatics[288]; /* '__init__' */
    cpy_r_r109 = CPyStatics[720]; /* '__init_subclass__' */
    cpy_r_r110 = CPyStatics[721]; /* '__new__' */
    cpy_r_r111 = CPyStatics[706]; /* '__call__' */
    cpy_r_r112 = CPyStatics[727]; /* '__setattr__' */
    cpy_r_r113 = PySet_New(NULL);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r114 = PySet_Add(cpy_r_r113, cpy_r_r108);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL127;
    }
    cpy_r_r116 = PySet_Add(cpy_r_r113, cpy_r_r109);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL127;
    }
    cpy_r_r118 = PySet_Add(cpy_r_r113, cpy_r_r110);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL127;
    }
    cpy_r_r120 = PySet_Add(cpy_r_r113, cpy_r_r111);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL127;
    }
    cpy_r_r122 = PySet_Add(cpy_r_r113, cpy_r_r112);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL127;
    }
    CPyStatic_sharedparse___MAGIC_METHODS_ALLOWING_KWARGS = cpy_r_r113;
    CPy_INCREF(CPyStatic_sharedparse___MAGIC_METHODS_ALLOWING_KWARGS);
    cpy_r_r124 = CPyStatic_sharedparse___globals;
    cpy_r_r125 = CPyStatics[5433]; /* 'MAGIC_METHODS_ALLOWING_KWARGS' */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r124, cpy_r_r125, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 41, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r128 = CPyStatics[1184]; /* '__add__' */
    cpy_r_r129 = CPyStatics[4191]; /* '__and__' */
    cpy_r_r130 = CPyStatics[4187]; /* '__divmod__' */
    cpy_r_r131 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r132 = CPyStatics[4188]; /* '__floordiv__' */
    cpy_r_r133 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r134 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r135 = CPyStatics[5434]; /* '__iadd__' */
    cpy_r_r136 = CPyStatics[5435]; /* '__iand__' */
    cpy_r_r137 = CPyStatics[5436]; /* '__idiv__' */
    cpy_r_r138 = CPyStatics[5437]; /* '__ifloordiv__' */
    cpy_r_r139 = CPyStatics[5438]; /* '__ilshift__' */
    cpy_r_r140 = CPyStatics[5439]; /* '__imatmul__' */
    cpy_r_r141 = CPyStatics[5440]; /* '__imod__' */
    cpy_r_r142 = CPyStatics[5441]; /* '__imul__' */
    cpy_r_r143 = CPyStatics[5442]; /* '__ior__' */
    cpy_r_r144 = CPyStatics[5443]; /* '__ipow__' */
    cpy_r_r145 = CPyStatics[5444]; /* '__irshift__' */
    cpy_r_r146 = CPyStatics[5445]; /* '__isub__' */
    cpy_r_r147 = CPyStatics[5446]; /* '__itruediv__' */
    cpy_r_r148 = CPyStatics[5447]; /* '__ixor__' */
    cpy_r_r149 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r150 = CPyStatics[4194]; /* '__lshift__' */
    cpy_r_r151 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r152 = CPyStatics[4190]; /* '__matmul__' */
    cpy_r_r153 = CPyStatics[4185]; /* '__mod__' */
    cpy_r_r154 = CPyStatics[1196]; /* '__mul__' */
    cpy_r_r155 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r156 = CPyStatics[4192]; /* '__or__' */
    cpy_r_r157 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r158 = CPyStatics[1186]; /* '__radd__' */
    cpy_r_r159 = CPyStatics[4211]; /* '__rand__' */
    cpy_r_r160 = CPyStatics[5448]; /* '__rdiv__' */
    cpy_r_r161 = CPyStatics[4208]; /* '__rfloordiv__' */
    cpy_r_r162 = CPyStatics[4214]; /* '__rlshift__' */
    cpy_r_r163 = CPyStatics[4210]; /* '__rmatmul__' */
    cpy_r_r164 = CPyStatics[4206]; /* '__rmod__' */
    cpy_r_r165 = CPyStatics[4204]; /* '__rmul__' */
    cpy_r_r166 = CPyStatics[4212]; /* '__ror__' */
    cpy_r_r167 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r168 = CPyStatics[4215]; /* '__rrshift__' */
    cpy_r_r169 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r170 = CPyStatics[4203]; /* '__rsub__' */
    cpy_r_r171 = CPyStatics[4205]; /* '__rtruediv__' */
    cpy_r_r172 = CPyStatics[4213]; /* '__rxor__' */
    cpy_r_r173 = CPyStatics[4183]; /* '__sub__' */
    cpy_r_r174 = CPyStatics[4184]; /* '__truediv__' */
    cpy_r_r175 = CPyStatics[4193]; /* '__xor__' */
    cpy_r_r176 = PySet_New(NULL);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r177 = PySet_Add(cpy_r_r176, cpy_r_r128);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r179 = PySet_Add(cpy_r_r176, cpy_r_r129);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r181 = PySet_Add(cpy_r_r176, cpy_r_r130);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r183 = PySet_Add(cpy_r_r176, cpy_r_r131);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r185 = PySet_Add(cpy_r_r176, cpy_r_r132);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r187 = PySet_Add(cpy_r_r176, cpy_r_r133);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r189 = PySet_Add(cpy_r_r176, cpy_r_r134);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r191 = PySet_Add(cpy_r_r176, cpy_r_r135);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r193 = PySet_Add(cpy_r_r176, cpy_r_r136);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r195 = PySet_Add(cpy_r_r176, cpy_r_r137);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r197 = PySet_Add(cpy_r_r176, cpy_r_r138);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r199 = PySet_Add(cpy_r_r176, cpy_r_r139);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r201 = PySet_Add(cpy_r_r176, cpy_r_r140);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r203 = PySet_Add(cpy_r_r176, cpy_r_r141);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r205 = PySet_Add(cpy_r_r176, cpy_r_r142);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r207 = PySet_Add(cpy_r_r176, cpy_r_r143);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r209 = PySet_Add(cpy_r_r176, cpy_r_r144);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r211 = PySet_Add(cpy_r_r176, cpy_r_r145);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r213 = PySet_Add(cpy_r_r176, cpy_r_r146);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r215 = PySet_Add(cpy_r_r176, cpy_r_r147);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r217 = PySet_Add(cpy_r_r176, cpy_r_r148);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r219 = PySet_Add(cpy_r_r176, cpy_r_r149);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r221 = PySet_Add(cpy_r_r176, cpy_r_r150);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r223 = PySet_Add(cpy_r_r176, cpy_r_r151);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r225 = PySet_Add(cpy_r_r176, cpy_r_r152);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r227 = PySet_Add(cpy_r_r176, cpy_r_r153);
    cpy_r_r228 = cpy_r_r227 >= 0;
    if (unlikely(!cpy_r_r228)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r229 = PySet_Add(cpy_r_r176, cpy_r_r154);
    cpy_r_r230 = cpy_r_r229 >= 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r231 = PySet_Add(cpy_r_r176, cpy_r_r155);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r233 = PySet_Add(cpy_r_r176, cpy_r_r156);
    cpy_r_r234 = cpy_r_r233 >= 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r235 = PySet_Add(cpy_r_r176, cpy_r_r157);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r237 = PySet_Add(cpy_r_r176, cpy_r_r158);
    cpy_r_r238 = cpy_r_r237 >= 0;
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r239 = PySet_Add(cpy_r_r176, cpy_r_r159);
    cpy_r_r240 = cpy_r_r239 >= 0;
    if (unlikely(!cpy_r_r240)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r241 = PySet_Add(cpy_r_r176, cpy_r_r160);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r243 = PySet_Add(cpy_r_r176, cpy_r_r161);
    cpy_r_r244 = cpy_r_r243 >= 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r245 = PySet_Add(cpy_r_r176, cpy_r_r162);
    cpy_r_r246 = cpy_r_r245 >= 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r247 = PySet_Add(cpy_r_r176, cpy_r_r163);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r249 = PySet_Add(cpy_r_r176, cpy_r_r164);
    cpy_r_r250 = cpy_r_r249 >= 0;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r251 = PySet_Add(cpy_r_r176, cpy_r_r165);
    cpy_r_r252 = cpy_r_r251 >= 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r253 = PySet_Add(cpy_r_r176, cpy_r_r166);
    cpy_r_r254 = cpy_r_r253 >= 0;
    if (unlikely(!cpy_r_r254)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r255 = PySet_Add(cpy_r_r176, cpy_r_r167);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r257 = PySet_Add(cpy_r_r176, cpy_r_r168);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r259 = PySet_Add(cpy_r_r176, cpy_r_r169);
    cpy_r_r260 = cpy_r_r259 >= 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r261 = PySet_Add(cpy_r_r176, cpy_r_r170);
    cpy_r_r262 = cpy_r_r261 >= 0;
    if (unlikely(!cpy_r_r262)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r263 = PySet_Add(cpy_r_r176, cpy_r_r171);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r265 = PySet_Add(cpy_r_r176, cpy_r_r172);
    cpy_r_r266 = cpy_r_r265 >= 0;
    if (unlikely(!cpy_r_r266)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r267 = PySet_Add(cpy_r_r176, cpy_r_r173);
    cpy_r_r268 = cpy_r_r267 >= 0;
    if (unlikely(!cpy_r_r268)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r269 = PySet_Add(cpy_r_r176, cpy_r_r174);
    cpy_r_r270 = cpy_r_r269 >= 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    cpy_r_r271 = PySet_Add(cpy_r_r176, cpy_r_r175);
    cpy_r_r272 = cpy_r_r271 >= 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL128;
    }
    CPyStatic_sharedparse___BINARY_MAGIC_METHODS = cpy_r_r176;
    CPy_INCREF(CPyStatic_sharedparse___BINARY_MAGIC_METHODS);
    cpy_r_r273 = CPyStatic_sharedparse___globals;
    cpy_r_r274 = CPyStatics[1017]; /* 'BINARY_MAGIC_METHODS' */
    cpy_r_r275 = CPyDict_SetItem(cpy_r_r273, cpy_r_r274, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 49, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r277 = CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS;
    if (likely(cpy_r_r277 != NULL)) goto CPyL97;
    PyErr_SetString(PyExc_NameError, "value for final name \"_NON_BINARY_MAGIC_METHODS\" was not set");
    cpy_r_r278 = 0;
    if (unlikely(!cpy_r_r278)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r279 = CPyStatic_sharedparse___BINARY_MAGIC_METHODS;
    if (likely(cpy_r_r279 != NULL)) goto CPyL100;
    PyErr_SetString(PyExc_NameError, "value for final name \"BINARY_MAGIC_METHODS\" was not set");
    cpy_r_r280 = 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r281 = PyNumber_And(cpy_r_r277, cpy_r_r279);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    if (likely(PySet_Check(cpy_r_r281)))
        cpy_r_r282 = cpy_r_r281;
    else {
        CPy_TypeErrorTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals, "set", cpy_r_r281);
        goto CPyL125;
    }
    cpy_r_r283 = PyObject_Not(cpy_r_r282);
    CPy_DECREF(cpy_r_r282);
    cpy_r_r284 = cpy_r_r283 >= 0;
    if (unlikely(!cpy_r_r284)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r285 = cpy_r_r283;
    if (cpy_r_r285) goto CPyL106;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r286 = 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 100, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r287 = CPyStatic_sharedparse____NON_BINARY_MAGIC_METHODS;
    if (likely(cpy_r_r287 != NULL)) goto CPyL109;
    PyErr_SetString(PyExc_NameError, "value for final name \"_NON_BINARY_MAGIC_METHODS\" was not set");
    cpy_r_r288 = 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 102, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r289 = CPyStatic_sharedparse___BINARY_MAGIC_METHODS;
    if (likely(cpy_r_r289 != NULL)) goto CPyL112;
    PyErr_SetString(PyExc_NameError, "value for final name \"BINARY_MAGIC_METHODS\" was not set");
    cpy_r_r290 = 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 102, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL112: ;
    cpy_r_r291 = PyNumber_Or(cpy_r_r287, cpy_r_r289);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 102, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    if (likely(PySet_Check(cpy_r_r291)))
        cpy_r_r292 = cpy_r_r291;
    else {
        CPy_TypeErrorTraceback("mypy/sharedparse.py", "<module>", 102, CPyStatic_sharedparse___globals, "set", cpy_r_r291);
        goto CPyL125;
    }
    CPyStatic_sharedparse___MAGIC_METHODS = cpy_r_r292;
    CPy_INCREF(CPyStatic_sharedparse___MAGIC_METHODS);
    cpy_r_r293 = CPyStatic_sharedparse___globals;
    cpy_r_r294 = CPyStatics[5449]; /* 'MAGIC_METHODS' */
    cpy_r_r295 = CPyDict_SetItem(cpy_r_r293, cpy_r_r294, cpy_r_r292);
    CPy_DECREF(cpy_r_r292);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 102, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    cpy_r_r297 = CPyStatic_sharedparse___MAGIC_METHODS;
    if (likely(cpy_r_r297 != NULL)) goto CPyL118;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAGIC_METHODS\" was not set");
    cpy_r_r298 = 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 104, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r299 = CPyStatic_sharedparse___MAGIC_METHODS_ALLOWING_KWARGS;
    if (likely(cpy_r_r299 != NULL)) goto CPyL121;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAGIC_METHODS_ALLOWING_KWARGS\" was not set");
    cpy_r_r300 = 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 104, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL121: ;
    cpy_r_r301 = PyNumber_Subtract(cpy_r_r297, cpy_r_r299);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 104, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    if (likely(PySet_Check(cpy_r_r301)))
        cpy_r_r302 = cpy_r_r301;
    else {
        CPy_TypeErrorTraceback("mypy/sharedparse.py", "<module>", 104, CPyStatic_sharedparse___globals, "set", cpy_r_r301);
        goto CPyL125;
    }
    CPyStatic_sharedparse___MAGIC_METHODS_POS_ARGS_ONLY = cpy_r_r302;
    CPy_INCREF(CPyStatic_sharedparse___MAGIC_METHODS_POS_ARGS_ONLY);
    cpy_r_r303 = CPyStatic_sharedparse___globals;
    cpy_r_r304 = CPyStatics[5450]; /* 'MAGIC_METHODS_POS_ARGS_ONLY' */
    cpy_r_r305 = CPyDict_SetItem(cpy_r_r303, cpy_r_r304, cpy_r_r302);
    CPy_DECREF(cpy_r_r302);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypy/sharedparse.py", "<module>", 104, CPyStatic_sharedparse___globals);
        goto CPyL125;
    }
    return 1;
CPyL125: ;
    cpy_r_r307 = 2;
    return cpy_r_r307;
CPyL126: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL125;
CPyL127: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL125;
CPyL128: ;
    CPy_DecRef(cpy_r_r176);
    goto CPyL125;
}
