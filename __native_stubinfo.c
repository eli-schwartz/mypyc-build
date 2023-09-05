#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef stubinfomodule_methods[] = {
    {"is_legacy_bundled_package", (PyCFunction)CPyPy_stubinfo___is_legacy_bundled_package, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"approved_stub_package_exists", (PyCFunction)CPyPy_stubinfo___approved_stub_package_exists, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"stub_package_name", (PyCFunction)CPyPy_stubinfo___stub_package_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef stubinfomodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.stubinfo",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    stubinfomodule_methods
};

PyObject *CPyInit_mypy___stubinfo(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___stubinfo_internal) {
        Py_INCREF(CPyModule_mypy___stubinfo_internal);
        return CPyModule_mypy___stubinfo_internal;
    }
    CPyModule_mypy___stubinfo_internal = PyModule_Create(&stubinfomodule);
    if (unlikely(CPyModule_mypy___stubinfo_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___stubinfo_internal, "__name__");
    CPyStatic_stubinfo___globals = PyModule_GetDict(CPyModule_mypy___stubinfo_internal);
    if (unlikely(CPyStatic_stubinfo___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_stubinfo_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___stubinfo_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___stubinfo_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_stubinfo___is_legacy_bundled_package(PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatic_stubinfo___globals;
    cpy_r_r1 = CPyStatics[409]; /* 'legacy_bundled_packages' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "is_legacy_bundled_package", 5, CPyStatic_stubinfo___globals);
        goto CPyL4;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "is_legacy_bundled_package", 5, CPyStatic_stubinfo___globals, "dict", cpy_r_r2);
        goto CPyL4;
    }
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_prefix);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/stubinfo.py", "is_legacy_bundled_package", 5, CPyStatic_stubinfo___globals);
        goto CPyL4;
    }
    cpy_r_r6 = cpy_r_r4;
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_stubinfo___is_legacy_bundled_package(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prefix", 0};
    static CPyArg_Parser parser = {"O:is_legacy_bundled_package", kwlist, 0};
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_stubinfo___is_legacy_bundled_package(arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stubinfo.py", "is_legacy_bundled_package", 4, CPyStatic_stubinfo___globals);
    return NULL;
}

char CPyDef_stubinfo___approved_stub_package_exists(PyObject *cpy_r_prefix) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_stubinfo___is_legacy_bundled_package(cpy_r_prefix);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/stubinfo.py", "approved_stub_package_exists", 9, CPyStatic_stubinfo___globals);
        goto CPyL8;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL7;
CPyL3: ;
    cpy_r_r2 = CPyStatic_stubinfo___globals;
    cpy_r_r3 = CPyStatics[410]; /* 'non_bundled_packages' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "approved_stub_package_exists", 9, CPyStatic_stubinfo___globals);
        goto CPyL8;
    }
    if (likely(PyDict_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "approved_stub_package_exists", 9, CPyStatic_stubinfo___globals, "dict", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_prefix);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/stubinfo.py", "approved_stub_package_exists", 9, CPyStatic_stubinfo___globals);
        goto CPyL8;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r1 = cpy_r_r8;
CPyL7: ;
    return cpy_r_r1;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_stubinfo___approved_stub_package_exists(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prefix", 0};
    static CPyArg_Parser parser = {"O:approved_stub_package_exists", kwlist, 0};
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_stubinfo___approved_stub_package_exists(arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/stubinfo.py", "approved_stub_package_exists", 8, CPyStatic_stubinfo___globals);
    return NULL;
}

PyObject *CPyDef_stubinfo___stub_package_name(PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatic_stubinfo___globals;
    cpy_r_r1 = CPyStatics[409]; /* 'legacy_bundled_packages' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals);
        goto CPyL15;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "dict", cpy_r_r2);
        goto CPyL15;
    }
    cpy_r_r4 = CPyDict_GetWithNone(cpy_r_r3, cpy_r_prefix);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals);
        goto CPyL15;
    }
    if (PyUnicode_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL7291;
    if (cpy_r_r4 == Py_None)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL7291;
    CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "str or None", cpy_r_r4);
    goto CPyL15;
__LL7291: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL16;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r8 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "str", cpy_r_r5);
        goto CPyL17;
    }
    cpy_r_r9 = CPyStr_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (!cpy_r_r9) goto CPyL16;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r10 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "str", cpy_r_r5);
        goto CPyL15;
    }
    cpy_r_r11 = cpy_r_r10;
    goto CPyL14;
CPyL9: ;
    cpy_r_r12 = CPyStatic_stubinfo___globals;
    cpy_r_r13 = CPyStatics[410]; /* 'non_bundled_packages' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals);
        goto CPyL15;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "dict", cpy_r_r14);
        goto CPyL15;
    }
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r15, cpy_r_prefix);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/stubinfo.py", "stub_package_name", 13, CPyStatic_stubinfo___globals, "str", cpy_r_r16);
        goto CPyL15;
    }
    cpy_r_r11 = cpy_r_r17;
CPyL14: ;
    return cpy_r_r11;
CPyL15: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL16: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
}

PyObject *CPyPy_stubinfo___stub_package_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prefix", 0};
    static CPyArg_Parser parser = {"O:stub_package_name", kwlist, 0};
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *retval = CPyDef_stubinfo___stub_package_name(arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/stubinfo.py", "stub_package_name", 12, CPyStatic_stubinfo___globals);
    return NULL;
}

char CPyDef_stubinfo_____top_level__(void) {
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
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
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
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
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
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
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
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    char cpy_r_r309;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", -1, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_stubinfo___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", 1, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[5761]; /* 'aiofiles' */
    cpy_r_r10 = CPyStatics[5762]; /* 'types-aiofiles' */
    cpy_r_r11 = CPyStatics[5763]; /* 'bleach' */
    cpy_r_r12 = CPyStatics[5764]; /* 'types-bleach' */
    cpy_r_r13 = CPyStatics[5765]; /* 'boto' */
    cpy_r_r14 = CPyStatics[5766]; /* 'types-boto' */
    cpy_r_r15 = CPyStatics[5767]; /* 'cachetools' */
    cpy_r_r16 = CPyStatics[5768]; /* 'types-cachetools' */
    cpy_r_r17 = CPyStatics[5769]; /* 'click_spinner' */
    cpy_r_r18 = CPyStatics[5770]; /* 'types-click-spinner' */
    cpy_r_r19 = CPyStatics[5771]; /* 'contextvars' */
    cpy_r_r20 = CPyStatics[5772]; /* 'types-contextvars' */
    cpy_r_r21 = CPyStatics[5773]; /* 'croniter' */
    cpy_r_r22 = CPyStatics[5774]; /* 'types-croniter' */
    cpy_r_r23 = CPyStatics[1006]; /* 'dataclasses' */
    cpy_r_r24 = CPyStatics[5775]; /* 'types-dataclasses' */
    cpy_r_r25 = CPyStatics[5776]; /* 'dateparser' */
    cpy_r_r26 = CPyStatics[5777]; /* 'types-dateparser' */
    cpy_r_r27 = CPyStatics[5778]; /* 'datetimerange' */
    cpy_r_r28 = CPyStatics[5779]; /* 'types-DateTimeRange' */
    cpy_r_r29 = CPyStatics[5780]; /* 'dateutil' */
    cpy_r_r30 = CPyStatics[5781]; /* 'types-python-dateutil' */
    cpy_r_r31 = CPyStatics[5782]; /* 'decorator' */
    cpy_r_r32 = CPyStatics[5783]; /* 'types-decorator' */
    cpy_r_r33 = CPyStatics[5784]; /* 'deprecated' */
    cpy_r_r34 = CPyStatics[5785]; /* 'types-Deprecated' */
    cpy_r_r35 = CPyStatics[5786]; /* 'docutils' */
    cpy_r_r36 = CPyStatics[5787]; /* 'types-docutils' */
    cpy_r_r37 = CPyStatics[5788]; /* 'first' */
    cpy_r_r38 = CPyStatics[5789]; /* 'types-first' */
    cpy_r_r39 = CPyStatics[5790]; /* 'geoip2' */
    cpy_r_r40 = CPyStatics[5791]; /* 'types-geoip2' */
    cpy_r_r41 = CPyStatics[5792]; /* 'gflags' */
    cpy_r_r42 = CPyStatics[5793]; /* 'types-python-gflags' */
    cpy_r_r43 = CPyStatics[5794]; /* 'google.protobuf' */
    cpy_r_r44 = CPyStatics[5795]; /* 'types-protobuf' */
    cpy_r_r45 = CPyStatics[5796]; /* 'markdown' */
    cpy_r_r46 = CPyStatics[5797]; /* 'types-Markdown' */
    cpy_r_r47 = CPyStatics[5798]; /* 'maxminddb' */
    cpy_r_r48 = CPyStatics[5799]; /* 'types-maxminddb' */
    cpy_r_r49 = CPyStatics[5800]; /* 'mock' */
    cpy_r_r50 = CPyStatics[5801]; /* 'types-mock' */
    cpy_r_r51 = CPyStatics[5802]; /* 'OpenSSL' */
    cpy_r_r52 = CPyStatics[5803]; /* 'types-pyOpenSSL' */
    cpy_r_r53 = CPyStatics[5804]; /* 'paramiko' */
    cpy_r_r54 = CPyStatics[5805]; /* 'types-paramiko' */
    cpy_r_r55 = CPyStatics[5806]; /* 'pkg_resources' */
    cpy_r_r56 = CPyStatics[5807]; /* 'types-setuptools' */
    cpy_r_r57 = CPyStatics[5808]; /* 'polib' */
    cpy_r_r58 = CPyStatics[5809]; /* 'types-polib' */
    cpy_r_r59 = CPyStatics[5810]; /* 'pycurl' */
    cpy_r_r60 = CPyStatics[5811]; /* 'types-pycurl' */
    cpy_r_r61 = CPyStatics[5812]; /* 'pymysql' */
    cpy_r_r62 = CPyStatics[5813]; /* 'types-PyMySQL' */
    cpy_r_r63 = CPyStatics[5814]; /* 'pyrfc3339' */
    cpy_r_r64 = CPyStatics[5815]; /* 'types-pyRFC3339' */
    cpy_r_r65 = CPyStatics[5816]; /* 'python2' */
    cpy_r_r66 = CPyStatics[5817]; /* 'types-six' */
    cpy_r_r67 = CPyStatics[5818]; /* 'pytz' */
    cpy_r_r68 = CPyStatics[5819]; /* 'types-pytz' */
    cpy_r_r69 = CPyStatics[5820]; /* 'pyVmomi' */
    cpy_r_r70 = CPyStatics[5821]; /* 'types-pyvmomi' */
    cpy_r_r71 = CPyStatics[5822]; /* 'redis' */
    cpy_r_r72 = CPyStatics[5823]; /* 'types-redis' */
    cpy_r_r73 = CPyStatics[5824]; /* 'requests' */
    cpy_r_r74 = CPyStatics[5825]; /* 'types-requests' */
    cpy_r_r75 = CPyStatics[5826]; /* 'retry' */
    cpy_r_r76 = CPyStatics[5827]; /* 'types-retry' */
    cpy_r_r77 = CPyStatics[5828]; /* 'simplejson' */
    cpy_r_r78 = CPyStatics[5829]; /* 'types-simplejson' */
    cpy_r_r79 = CPyStatics[4547]; /* 'singledispatch' */
    cpy_r_r80 = CPyStatics[5830]; /* 'types-singledispatch' */
    cpy_r_r81 = CPyStatics[5605]; /* 'six' */
    cpy_r_r82 = CPyStatics[5817]; /* 'types-six' */
    cpy_r_r83 = CPyStatics[5831]; /* 'slugify' */
    cpy_r_r84 = CPyStatics[5832]; /* 'types-python-slugify' */
    cpy_r_r85 = CPyStatics[5833]; /* 'tabulate' */
    cpy_r_r86 = CPyStatics[5834]; /* 'types-tabulate' */
    cpy_r_r87 = CPyStatics[5835]; /* 'toml' */
    cpy_r_r88 = CPyStatics[5836]; /* 'types-toml' */
    cpy_r_r89 = CPyStatics[5837]; /* 'typed_ast' */
    cpy_r_r90 = CPyStatics[5838]; /* 'types-typed-ast' */
    cpy_r_r91 = CPyStatics[5839]; /* 'tzlocal' */
    cpy_r_r92 = CPyStatics[5840]; /* 'types-tzlocal' */
    cpy_r_r93 = CPyStatics[5841]; /* 'ujson' */
    cpy_r_r94 = CPyStatics[5842]; /* 'types-ujson' */
    cpy_r_r95 = CPyStatics[5843]; /* 'waitress' */
    cpy_r_r96 = CPyStatics[5844]; /* 'types-waitress' */
    cpy_r_r97 = CPyStatics[5845]; /* 'yaml' */
    cpy_r_r98 = CPyStatics[5846]; /* 'types-PyYAML' */
    cpy_r_r99 = CPyDict_Build(45, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", 21, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    cpy_r_r100 = CPyStatic_stubinfo___globals;
    cpy_r_r101 = CPyStatics[409]; /* 'legacy_bundled_packages' */
    cpy_r_r102 = CPyDict_SetItem(cpy_r_r100, cpy_r_r101, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", 21, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    cpy_r_r104 = CPyStatics[5847]; /* 'MySQLdb' */
    cpy_r_r105 = CPyStatics[5848]; /* 'types-mysqlclient' */
    cpy_r_r106 = CPyStatics[5849]; /* 'PIL' */
    cpy_r_r107 = CPyStatics[5850]; /* 'types-Pillow' */
    cpy_r_r108 = CPyStatics[5851]; /* 'PyInstaller' */
    cpy_r_r109 = CPyStatics[5852]; /* 'types-pyinstaller' */
    cpy_r_r110 = CPyStatics[5853]; /* 'Xlib' */
    cpy_r_r111 = CPyStatics[5854]; /* 'types-python-xlib' */
    cpy_r_r112 = CPyStatics[5855]; /* 'annoy' */
    cpy_r_r113 = CPyStatics[5856]; /* 'types-annoy' */
    cpy_r_r114 = CPyStatics[5857]; /* 'appdirs' */
    cpy_r_r115 = CPyStatics[5858]; /* 'types-appdirs' */
    cpy_r_r116 = CPyStatics[5859]; /* 'aws_xray_sdk' */
    cpy_r_r117 = CPyStatics[5860]; /* 'types-aws-xray-sdk' */
    cpy_r_r118 = CPyStatics[5861]; /* 'babel' */
    cpy_r_r119 = CPyStatics[5862]; /* 'types-babel' */
    cpy_r_r120 = CPyStatics[5863]; /* 'backports.ssl_match_hostname' */
    cpy_r_r121 = CPyStatics[5864]; /* 'types-backports.ssl_match_hostname' */
    cpy_r_r122 = CPyStatics[5865]; /* 'braintree' */
    cpy_r_r123 = CPyStatics[5866]; /* 'types-braintree' */
    cpy_r_r124 = CPyStatics[5867]; /* 'bs4' */
    cpy_r_r125 = CPyStatics[5868]; /* 'types-beautifulsoup4' */
    cpy_r_r126 = CPyStatics[5869]; /* 'bugbear' */
    cpy_r_r127 = CPyStatics[5870]; /* 'types-flake8-bugbear' */
    cpy_r_r128 = CPyStatics[5871]; /* 'caldav' */
    cpy_r_r129 = CPyStatics[5872]; /* 'types-caldav' */
    cpy_r_r130 = CPyStatics[5873]; /* 'cffi' */
    cpy_r_r131 = CPyStatics[5874]; /* 'types-cffi' */
    cpy_r_r132 = CPyStatics[5875]; /* 'chevron' */
    cpy_r_r133 = CPyStatics[5876]; /* 'types-chevron' */
    cpy_r_r134 = CPyStatics[5877]; /* 'colorama' */
    cpy_r_r135 = CPyStatics[5878]; /* 'types-colorama' */
    cpy_r_r136 = CPyStatics[5879]; /* 'commonmark' */
    cpy_r_r137 = CPyStatics[5880]; /* 'types-commonmark' */
    cpy_r_r138 = CPyStatics[5881]; /* 'consolemenu' */
    cpy_r_r139 = CPyStatics[5882]; /* 'types-console-menu' */
    cpy_r_r140 = CPyStatics[5883]; /* 'crontab' */
    cpy_r_r141 = CPyStatics[5884]; /* 'types-python-crontab' */
    cpy_r_r142 = CPyStatics[5885]; /* 'd3dshot' */
    cpy_r_r143 = CPyStatics[5886]; /* 'types-D3DShot' */
    cpy_r_r144 = CPyStatics[5887]; /* 'dj_database_url' */
    cpy_r_r145 = CPyStatics[5888]; /* 'types-dj-database-url' */
    cpy_r_r146 = CPyStatics[5889]; /* 'dockerfile_parse' */
    cpy_r_r147 = CPyStatics[5890]; /* 'types-dockerfile-parse' */
    cpy_r_r148 = CPyStatics[5891]; /* 'docopt' */
    cpy_r_r149 = CPyStatics[5892]; /* 'types-docopt' */
    cpy_r_r150 = CPyStatics[5893]; /* 'editdistance' */
    cpy_r_r151 = CPyStatics[5894]; /* 'types-editdistance' */
    cpy_r_r152 = CPyStatics[5895]; /* 'entrypoints' */
    cpy_r_r153 = CPyStatics[5896]; /* 'types-entrypoints' */
    cpy_r_r154 = CPyStatics[5897]; /* 'farmhash' */
    cpy_r_r155 = CPyStatics[5898]; /* 'types-pyfarmhash' */
    cpy_r_r156 = CPyStatics[5899]; /* 'flake8_2020' */
    cpy_r_r157 = CPyStatics[5900]; /* 'types-flake8-2020' */
    cpy_r_r158 = CPyStatics[5901]; /* 'flake8_builtins' */
    cpy_r_r159 = CPyStatics[5902]; /* 'types-flake8-builtins' */
    cpy_r_r160 = CPyStatics[5903]; /* 'flake8_docstrings' */
    cpy_r_r161 = CPyStatics[5904]; /* 'types-flake8-docstrings' */
    cpy_r_r162 = CPyStatics[5905]; /* 'flake8_plugin_utils' */
    cpy_r_r163 = CPyStatics[5906]; /* 'types-flake8-plugin-utils' */
    cpy_r_r164 = CPyStatics[5907]; /* 'flake8_rst_docstrings' */
    cpy_r_r165 = CPyStatics[5908]; /* 'types-flake8-rst-docstrings' */
    cpy_r_r166 = CPyStatics[5909]; /* 'flake8_simplify' */
    cpy_r_r167 = CPyStatics[5910]; /* 'types-flake8-simplify' */
    cpy_r_r168 = CPyStatics[5911]; /* 'flake8_typing_imports' */
    cpy_r_r169 = CPyStatics[5912]; /* 'types-flake8-typing-imports' */
    cpy_r_r170 = CPyStatics[5913]; /* 'flask_cors' */
    cpy_r_r171 = CPyStatics[5914]; /* 'types-Flask-Cors' */
    cpy_r_r172 = CPyStatics[5915]; /* 'flask_migrate' */
    cpy_r_r173 = CPyStatics[5916]; /* 'types-Flask-Migrate' */
    cpy_r_r174 = CPyStatics[5917]; /* 'flask_sqlalchemy' */
    cpy_r_r175 = CPyStatics[5918]; /* 'types-Flask-SQLAlchemy' */
    cpy_r_r176 = CPyStatics[5919]; /* 'fpdf' */
    cpy_r_r177 = CPyStatics[5920]; /* 'types-fpdf2' */
    cpy_r_r178 = CPyStatics[5921]; /* 'gdb' */
    cpy_r_r179 = CPyStatics[5922]; /* 'types-gdb' */
    cpy_r_r180 = CPyStatics[5923]; /* 'google.cloud' */
    cpy_r_r181 = CPyStatics[5924]; /* 'types-google-cloud-ndb' */
    cpy_r_r182 = CPyStatics[5925]; /* 'hdbcli' */
    cpy_r_r183 = CPyStatics[5926]; /* 'types-hdbcli' */
    cpy_r_r184 = CPyStatics[5927]; /* 'html5lib' */
    cpy_r_r185 = CPyStatics[5928]; /* 'types-html5lib' */
    cpy_r_r186 = CPyStatics[5929]; /* 'httplib2' */
    cpy_r_r187 = CPyStatics[5930]; /* 'types-httplib2' */
    cpy_r_r188 = CPyStatics[5931]; /* 'humanfriendly' */
    cpy_r_r189 = CPyStatics[5932]; /* 'types-humanfriendly' */
    cpy_r_r190 = CPyStatics[5933]; /* 'invoke' */
    cpy_r_r191 = CPyStatics[5934]; /* 'types-invoke' */
    cpy_r_r192 = CPyStatics[5935]; /* 'jack' */
    cpy_r_r193 = CPyStatics[5936]; /* 'types-JACK-Client' */
    cpy_r_r194 = CPyStatics[5937]; /* 'jmespath' */
    cpy_r_r195 = CPyStatics[5938]; /* 'types-jmespath' */
    cpy_r_r196 = CPyStatics[5939]; /* 'jose' */
    cpy_r_r197 = CPyStatics[5940]; /* 'types-python-jose' */
    cpy_r_r198 = CPyStatics[5941]; /* 'jsonschema' */
    cpy_r_r199 = CPyStatics[5942]; /* 'types-jsonschema' */
    cpy_r_r200 = CPyStatics[5943]; /* 'keyboard' */
    cpy_r_r201 = CPyStatics[5944]; /* 'types-keyboard' */
    cpy_r_r202 = CPyStatics[5945]; /* 'ldap3' */
    cpy_r_r203 = CPyStatics[5946]; /* 'types-ldap3' */
    cpy_r_r204 = CPyStatics[5947]; /* 'nmap' */
    cpy_r_r205 = CPyStatics[5948]; /* 'types-python-nmap' */
    cpy_r_r206 = CPyStatics[5949]; /* 'oauthlib' */
    cpy_r_r207 = CPyStatics[5950]; /* 'types-oauthlib' */
    cpy_r_r208 = CPyStatics[5951]; /* 'openpyxl' */
    cpy_r_r209 = CPyStatics[5952]; /* 'types-openpyxl' */
    cpy_r_r210 = CPyStatics[5953]; /* 'opentracing' */
    cpy_r_r211 = CPyStatics[5954]; /* 'types-opentracing' */
    cpy_r_r212 = CPyStatics[5955]; /* 'paho.mqtt' */
    cpy_r_r213 = CPyStatics[5956]; /* 'types-paho-mqtt' */
    cpy_r_r214 = CPyStatics[5957]; /* 'parsimonious' */
    cpy_r_r215 = CPyStatics[5958]; /* 'types-parsimonious' */
    cpy_r_r216 = CPyStatics[5959]; /* 'passlib' */
    cpy_r_r217 = CPyStatics[5960]; /* 'types-passlib' */
    cpy_r_r218 = CPyStatics[5961]; /* 'passpy' */
    cpy_r_r219 = CPyStatics[5962]; /* 'types-passpy' */
    cpy_r_r220 = CPyStatics[5963]; /* 'peewee' */
    cpy_r_r221 = CPyStatics[5964]; /* 'types-peewee' */
    cpy_r_r222 = CPyStatics[5965]; /* 'pep8ext_naming' */
    cpy_r_r223 = CPyStatics[5966]; /* 'types-pep8-naming' */
    cpy_r_r224 = CPyStatics[5967]; /* 'playsound' */
    cpy_r_r225 = CPyStatics[5968]; /* 'types-playsound' */
    cpy_r_r226 = CPyStatics[1972]; /* 'psutil' */
    cpy_r_r227 = CPyStatics[5969]; /* 'types-psutil' */
    cpy_r_r228 = CPyStatics[5970]; /* 'psycopg2' */
    cpy_r_r229 = CPyStatics[5971]; /* 'types-psycopg2' */
    cpy_r_r230 = CPyStatics[5972]; /* 'pyaudio' */
    cpy_r_r231 = CPyStatics[5973]; /* 'types-pyaudio' */
    cpy_r_r232 = CPyStatics[5974]; /* 'pyautogui' */
    cpy_r_r233 = CPyStatics[5975]; /* 'types-PyAutoGUI' */
    cpy_r_r234 = CPyStatics[5976]; /* 'pycocotools' */
    cpy_r_r235 = CPyStatics[5977]; /* 'types-pycocotools' */
    cpy_r_r236 = CPyStatics[5978]; /* 'pyflakes' */
    cpy_r_r237 = CPyStatics[5979]; /* 'types-pyflakes' */
    cpy_r_r238 = CPyStatics[5980]; /* 'pygments' */
    cpy_r_r239 = CPyStatics[5981]; /* 'types-Pygments' */
    cpy_r_r240 = CPyStatics[5982]; /* 'pyi_splash' */
    cpy_r_r241 = CPyStatics[5852]; /* 'types-pyinstaller' */
    cpy_r_r242 = CPyStatics[5983]; /* 'pynput' */
    cpy_r_r243 = CPyStatics[5984]; /* 'types-pynput' */
    cpy_r_r244 = CPyStatics[5985]; /* 'pythoncom' */
    cpy_r_r245 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r246 = CPyStatics[5987]; /* 'pythonwin' */
    cpy_r_r247 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r248 = CPyStatics[5988]; /* 'pyscreeze' */
    cpy_r_r249 = CPyStatics[5989]; /* 'types-PyScreeze' */
    cpy_r_r250 = CPyStatics[5990]; /* 'pysftp' */
    cpy_r_r251 = CPyStatics[5991]; /* 'types-pysftp' */
    cpy_r_r252 = CPyStatics[5992]; /* 'pytest_lazyfixture' */
    cpy_r_r253 = CPyStatics[5993]; /* 'types-pytest-lazy-fixture' */
    cpy_r_r254 = CPyStatics[5994]; /* 'pywintypes' */
    cpy_r_r255 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r256 = CPyStatics[5995]; /* 'regex' */
    cpy_r_r257 = CPyStatics[5996]; /* 'types-regex' */
    cpy_r_r258 = CPyStatics[5997]; /* 'send2trash' */
    cpy_r_r259 = CPyStatics[5998]; /* 'types-Send2Trash' */
    cpy_r_r260 = CPyStatics[5999]; /* 'slumber' */
    cpy_r_r261 = CPyStatics[6000]; /* 'types-slumber' */
    cpy_r_r262 = CPyStatics[6001]; /* 'stdlib_list' */
    cpy_r_r263 = CPyStatics[6002]; /* 'types-stdlib-list' */
    cpy_r_r264 = CPyStatics[6003]; /* 'stripe' */
    cpy_r_r265 = CPyStatics[6004]; /* 'types-stripe' */
    cpy_r_r266 = CPyStatics[6005]; /* 'toposort' */
    cpy_r_r267 = CPyStatics[6006]; /* 'types-toposort' */
    cpy_r_r268 = CPyStatics[6007]; /* 'tqdm' */
    cpy_r_r269 = CPyStatics[6008]; /* 'types-tqdm' */
    cpy_r_r270 = CPyStatics[6009]; /* 'tree_sitter' */
    cpy_r_r271 = CPyStatics[6010]; /* 'types-tree-sitter' */
    cpy_r_r272 = CPyStatics[6011]; /* 'tree_sitter_languages' */
    cpy_r_r273 = CPyStatics[6012]; /* 'types-tree-sitter-languages' */
    cpy_r_r274 = CPyStatics[6013]; /* 'ttkthemes' */
    cpy_r_r275 = CPyStatics[6014]; /* 'types-ttkthemes' */
    cpy_r_r276 = CPyStatics[6015]; /* 'urllib3' */
    cpy_r_r277 = CPyStatics[6016]; /* 'types-urllib3' */
    cpy_r_r278 = CPyStatics[6017]; /* 'vobject' */
    cpy_r_r279 = CPyStatics[6018]; /* 'types-vobject' */
    cpy_r_r280 = CPyStatics[6019]; /* 'whatthepatch' */
    cpy_r_r281 = CPyStatics[6020]; /* 'types-whatthepatch' */
    cpy_r_r282 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r283 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r284 = CPyStatics[6021]; /* 'win32api' */
    cpy_r_r285 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r286 = CPyStatics[6022]; /* 'win32con' */
    cpy_r_r287 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r288 = CPyStatics[6023]; /* 'win32com' */
    cpy_r_r289 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r290 = CPyStatics[6024]; /* 'win32comext' */
    cpy_r_r291 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r292 = CPyStatics[6025]; /* 'win32gui' */
    cpy_r_r293 = CPyStatics[5986]; /* 'types-pywin32' */
    cpy_r_r294 = CPyStatics[6026]; /* 'xmltodict' */
    cpy_r_r295 = CPyStatics[6027]; /* 'types-xmltodict' */
    cpy_r_r296 = CPyStatics[6028]; /* 'xxhash' */
    cpy_r_r297 = CPyStatics[6029]; /* 'types-xxhash' */
    cpy_r_r298 = CPyStatics[6030]; /* 'zxcvbn' */
    cpy_r_r299 = CPyStatics[6031]; /* 'types-zxcvbn' */
    cpy_r_r300 = CPyStatics[6032]; /* 'pandas' */
    cpy_r_r301 = CPyStatics[6033]; /* 'pandas-stubs' */
    cpy_r_r302 = CPyStatics[4772]; /* 'lxml' */
    cpy_r_r303 = CPyStatics[6034]; /* 'lxml-stubs' */
    cpy_r_r304 = CPyDict_Build(100, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188, cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192, cpy_r_r193, cpy_r_r194, cpy_r_r195, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211, cpy_r_r212, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r231, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252, cpy_r_r253, cpy_r_r254, cpy_r_r255, cpy_r_r256, cpy_r_r257, cpy_r_r258, cpy_r_r259, cpy_r_r260, cpy_r_r261, cpy_r_r262, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283, cpy_r_r284, cpy_r_r285, cpy_r_r286, cpy_r_r287, cpy_r_r288, cpy_r_r289, cpy_r_r290, cpy_r_r291, cpy_r_r292, cpy_r_r293, cpy_r_r294, cpy_r_r295, cpy_r_r296, cpy_r_r297, cpy_r_r298, cpy_r_r299, cpy_r_r300, cpy_r_r301, cpy_r_r302, cpy_r_r303);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", 80, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    cpy_r_r305 = CPyStatic_stubinfo___globals;
    cpy_r_r306 = CPyStatics[410]; /* 'non_bundled_packages' */
    cpy_r_r307 = CPyDict_SetItem(cpy_r_r305, cpy_r_r306, cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("mypy/stubinfo.py", "<module>", 80, CPyStatic_stubinfo___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r309 = 2;
    return cpy_r_r309;
}
