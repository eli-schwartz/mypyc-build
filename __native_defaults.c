#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef defaultsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef defaultsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.defaults",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    defaultsmodule_methods
};

PyObject *CPyInit_mypy___defaults(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___defaults_internal) {
        Py_INCREF(CPyModule_mypy___defaults_internal);
        return CPyModule_mypy___defaults_internal;
    }
    CPyModule_mypy___defaults_internal = PyModule_Create(&defaultsmodule);
    if (unlikely(CPyModule_mypy___defaults_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___defaults_internal, "__name__");
    CPyStatic_defaults___globals = PyModule_GetDict(CPyModule_mypy___defaults_internal);
    if (unlikely(CPyStatic_defaults___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_defaults_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___defaults_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___defaults_internal);
    Py_CLEAR(modname);
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON2_VERSION.f0);
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON2_VERSION.f1);
    CPyStatic_defaults___PYTHON2_VERSION = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON3_VERSION.f0);
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON3_VERSION.f1);
    CPyStatic_defaults___PYTHON3_VERSION = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON3_VERSION_MIN.f0);
    CPyTagged_XDECREF(CPyStatic_defaults___PYTHON3_VERSION_MIN.f1);
    CPyStatic_defaults___PYTHON3_VERSION_MIN = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    CPy_XDECREF(CPyStatic_defaults___CONFIG_FILE);
    CPyStatic_defaults___CONFIG_FILE = NULL;
    CPy_XDECREF(CPyStatic_defaults___PYPROJECT_CONFIG_FILES);
    CPyStatic_defaults___PYPROJECT_CONFIG_FILES = NULL;
    CPy_XDECREF(CPyStatic_defaults___SHARED_CONFIG_FILES);
    CPyStatic_defaults___SHARED_CONFIG_FILES = NULL;
    CPy_XDECREF(CPyStatic_defaults___USER_CONFIG_FILES);
    CPyStatic_defaults___USER_CONFIG_FILES = NULL;
    CPy_XDECREF(CPyStatic_defaults___CONFIG_FILES);
    CPyStatic_defaults___CONFIG_FILES = NULL;
    CPy_XDECREF(CPyStatic_defaults___REPORTER_NAMES);
    CPyStatic_defaults___REPORTER_NAMES = NULL;
    return NULL;
}

char CPyDef_defaults_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2II cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    tuple_T2II cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    tuple_T2II cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
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
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
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
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", -1, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_defaults___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 1, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9300]; /* (('os', 'os', 'os'),) */
    cpy_r_r15 = CPyStatic_defaults___globals;
    cpy_r_r16 = CPyStatics[1638]; /* 'mypy/defaults.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL58;
    cpy_r_r19 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_defaults___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 4, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23.f0 = 4;
    cpy_r_r23.f1 = 14;
    CPyTagged_INCREF(cpy_r_r23.f0);
    CPyTagged_INCREF(cpy_r_r23.f1);
    CPyStatic_defaults___PYTHON2_VERSION = cpy_r_r23;
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON2_VERSION.f0);
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON2_VERSION.f1);
    cpy_r_r24 = CPyStatic_defaults___globals;
    cpy_r_r25 = CPyStatics[1639]; /* 'PYTHON2_VERSION' */
    cpy_r_r26 = PyTuple_New(2);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1860 = CPyTagged_StealAsObject(cpy_r_r23.f0);
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp1860);
    PyObject *__tmp1861 = CPyTagged_StealAsObject(cpy_r_r23.f1);
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp1861);
    cpy_r_r27 = CPyDict_SetItem(cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 6, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r29.f0 = 6;
    cpy_r_r29.f1 = 16;
    CPyTagged_INCREF(cpy_r_r29.f0);
    CPyTagged_INCREF(cpy_r_r29.f1);
    CPyStatic_defaults___PYTHON3_VERSION = cpy_r_r29;
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON3_VERSION.f0);
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON3_VERSION.f1);
    cpy_r_r30 = CPyStatic_defaults___globals;
    cpy_r_r31 = CPyStatics[1640]; /* 'PYTHON3_VERSION' */
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1862 = CPyTagged_StealAsObject(cpy_r_r29.f0);
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp1862);
    PyObject *__tmp1863 = CPyTagged_StealAsObject(cpy_r_r29.f1);
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp1863);
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 11, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r35.f0 = 6;
    cpy_r_r35.f1 = 8;
    CPyTagged_INCREF(cpy_r_r35.f0);
    CPyTagged_INCREF(cpy_r_r35.f1);
    CPyStatic_defaults___PYTHON3_VERSION_MIN = cpy_r_r35;
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON3_VERSION_MIN.f0);
    CPyTagged_INCREF(CPyStatic_defaults___PYTHON3_VERSION_MIN.f1);
    cpy_r_r36 = CPyStatic_defaults___globals;
    cpy_r_r37 = CPyStatics[1641]; /* 'PYTHON3_VERSION_MIN' */
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1864 = CPyTagged_StealAsObject(cpy_r_r35.f0);
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp1864);
    PyObject *__tmp1865 = CPyTagged_StealAsObject(cpy_r_r35.f1);
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp1865);
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 15, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r41 = CPyStatics[1642]; /* '.mypy_cache' */
    cpy_r_r42 = CPyStatic_defaults___globals;
    cpy_r_r43 = CPyStatics[1643]; /* 'CACHE_DIR' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r41);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 17, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r46 = CPyStatics[1644]; /* 'mypy.ini' */
    cpy_r_r47 = CPyStatics[1645]; /* '.mypy.ini' */
    cpy_r_r48 = PyList_New(2);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 18, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    CPy_INCREF(cpy_r_r46);
    *(PyObject * *)cpy_r_r50 = cpy_r_r46;
    cpy_r_r51 = cpy_r_r50 + 8;
    CPy_INCREF(cpy_r_r47);
    *(PyObject * *)cpy_r_r51 = cpy_r_r47;
    CPyStatic_defaults___CONFIG_FILE = cpy_r_r48;
    CPy_INCREF(CPyStatic_defaults___CONFIG_FILE);
    cpy_r_r52 = CPyStatic_defaults___globals;
    cpy_r_r53 = CPyStatics[1646]; /* 'CONFIG_FILE' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 18, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r56 = CPyStatics[1647]; /* 'pyproject.toml' */
    cpy_r_r57 = PyList_New(1);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 19, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_r57)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    CPy_INCREF(cpy_r_r56);
    *(PyObject * *)cpy_r_r59 = cpy_r_r56;
    CPyStatic_defaults___PYPROJECT_CONFIG_FILES = cpy_r_r57;
    CPy_INCREF(CPyStatic_defaults___PYPROJECT_CONFIG_FILES);
    cpy_r_r60 = CPyStatic_defaults___globals;
    cpy_r_r61 = CPyStatics[1648]; /* 'PYPROJECT_CONFIG_FILES' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 19, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r64 = CPyStatics[1649]; /* 'setup.cfg' */
    cpy_r_r65 = PyList_New(1);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 20, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    CPy_INCREF(cpy_r_r64);
    *(PyObject * *)cpy_r_r67 = cpy_r_r64;
    CPyStatic_defaults___SHARED_CONFIG_FILES = cpy_r_r65;
    CPy_INCREF(CPyStatic_defaults___SHARED_CONFIG_FILES);
    cpy_r_r68 = CPyStatic_defaults___globals;
    cpy_r_r69 = CPyStatics[1650]; /* 'SHARED_CONFIG_FILES' */
    cpy_r_r70 = CPyDict_SetItem(cpy_r_r68, cpy_r_r69, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 20, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r72 = CPyStatics[1651]; /* '~/.config/mypy/config' */
    cpy_r_r73 = CPyStatics[1652]; /* '~/.mypy.ini' */
    cpy_r_r74 = PyList_New(2);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 21, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r76 = cpy_r_r72;
    cpy_r_r77 = cpy_r_r76 + 8;
    CPy_INCREF(cpy_r_r73);
    *(PyObject * *)cpy_r_r77 = cpy_r_r73;
    CPyStatic_defaults___USER_CONFIG_FILES = cpy_r_r74;
    CPy_INCREF(CPyStatic_defaults___USER_CONFIG_FILES);
    cpy_r_r78 = CPyStatic_defaults___globals;
    cpy_r_r79 = CPyStatics[1653]; /* 'USER_CONFIG_FILES' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 21, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r82 = CPyModule_os;
    cpy_r_r83 = CPyStatics[1504]; /* 'environ' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 22, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r85 = CPyStatics[1654]; /* 'XDG_CONFIG_HOME' */
    cpy_r_r86 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r87[2] = {cpy_r_r84, cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 22, CPyStatic_defaults___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r84);
    if (PyUnicode_Check(cpy_r_r89))
        cpy_r_r90 = cpy_r_r89;
    else {
        cpy_r_r90 = NULL;
    }
    if (cpy_r_r90 != NULL) goto __LL1866;
    if (cpy_r_r89 == Py_None)
        cpy_r_r90 = cpy_r_r89;
    else {
        cpy_r_r90 = NULL;
    }
    if (cpy_r_r90 != NULL) goto __LL1866;
    CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 22, CPyStatic_defaults___globals, "str or None", cpy_r_r89);
    goto CPyL58;
__LL1866: ;
    cpy_r_r91 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r92 = cpy_r_r90 != cpy_r_r91;
    if (!cpy_r_r92) goto CPyL60;
    if (likely(cpy_r_r90 != Py_None))
        cpy_r_r93 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 22, CPyStatic_defaults___globals, "str", cpy_r_r90);
        goto CPyL58;
    }
    cpy_r_r94 = CPyStr_IsTrue(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (!cpy_r_r94) goto CPyL35;
    cpy_r_r95 = CPyStatic_defaults___USER_CONFIG_FILES;
    if (likely(cpy_r_r95 != NULL)) goto CPyL27;
    PyErr_SetString(PyExc_NameError, "value for final name \"USER_CONFIG_FILES\" was not set");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r97 = CPyModule_os;
    cpy_r_r98 = CPyStatics[1504]; /* 'environ' */
    cpy_r_r99 = CPyObject_GetAttr(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r100 = CPyStatics[1654]; /* 'XDG_CONFIG_HOME' */
    cpy_r_r101 = PyObject_GetItem(cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    if (likely(PyUnicode_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals, "str", cpy_r_r101);
        goto CPyL58;
    }
    cpy_r_r103 = CPyStatics[1655]; /* 'mypy/config' */
    cpy_r_r104 = CPyModule_os;
    cpy_r_r105 = CPyStatics[142]; /* 'path' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL61;
    }
    cpy_r_r107 = CPyStatics[175]; /* 'join' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r109[2] = {cpy_r_r102, cpy_r_r103};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 2, 0);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r102);
    if (likely(PyUnicode_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals, "str", cpy_r_r111);
        goto CPyL58;
    }
    cpy_r_r113 = CPyList_Insert(cpy_r_r95, 0, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 23, CPyStatic_defaults___globals);
        goto CPyL58;
    }
CPyL35: ;
    cpy_r_r115 = CPyStatic_defaults___CONFIG_FILE;
    if (likely(cpy_r_r115 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONFIG_FILE\" was not set");
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r117 = CPyStatic_defaults___PYPROJECT_CONFIG_FILES;
    if (likely(cpy_r_r117 != NULL)) goto CPyL41;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYPROJECT_CONFIG_FILES\" was not set");
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r119 = PyNumber_Add(cpy_r_r115, cpy_r_r117);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals, "list", cpy_r_r119);
        goto CPyL58;
    }
    cpy_r_r121 = CPyStatic_defaults___SHARED_CONFIG_FILES;
    if (unlikely(cpy_r_r121 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"SHARED_CONFIG_FILES\" was not set");
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r123 = PyNumber_Add(cpy_r_r120, cpy_r_r121);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals, "list", cpy_r_r123);
        goto CPyL58;
    }
    cpy_r_r125 = CPyStatic_defaults___USER_CONFIG_FILES;
    if (unlikely(cpy_r_r125 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"USER_CONFIG_FILES\" was not set");
    cpy_r_r126 = 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r127 = PyNumber_Add(cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals, "list", cpy_r_r127);
        goto CPyL58;
    }
    CPyStatic_defaults___CONFIG_FILES = cpy_r_r128;
    CPy_INCREF(CPyStatic_defaults___CONFIG_FILES);
    cpy_r_r129 = CPyStatic_defaults___globals;
    cpy_r_r130 = CPyStatics[1656]; /* 'CONFIG_FILES' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 26, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r133 = CPyStatics[1657]; /* 'linecount' */
    cpy_r_r134 = CPyStatics[1658]; /* 'any-exprs' */
    cpy_r_r135 = CPyStatics[1659]; /* 'linecoverage' */
    cpy_r_r136 = CPyStatics[1660]; /* 'memory-xml' */
    cpy_r_r137 = CPyStatics[1661]; /* 'cobertura-xml' */
    cpy_r_r138 = CPyStatics[1662]; /* 'xml' */
    cpy_r_r139 = CPyStatics[1663]; /* 'xslt-html' */
    cpy_r_r140 = CPyStatics[1664]; /* 'xslt-txt' */
    cpy_r_r141 = CPyStatics[1665]; /* 'html' */
    cpy_r_r142 = CPyStatics[1666]; /* 'txt' */
    cpy_r_r143 = CPyStatics[1667]; /* 'lineprecision' */
    CPy_INCREF(cpy_r_r133);
    CPy_INCREF(cpy_r_r134);
    CPy_INCREF(cpy_r_r135);
    CPy_INCREF(cpy_r_r136);
    CPy_INCREF(cpy_r_r137);
    CPy_INCREF(cpy_r_r138);
    CPy_INCREF(cpy_r_r139);
    CPy_INCREF(cpy_r_r140);
    CPy_INCREF(cpy_r_r141);
    CPy_INCREF(cpy_r_r142);
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = CPyList_Build(11, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 32, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    CPyStatic_defaults___REPORTER_NAMES = cpy_r_r144;
    CPy_INCREF(CPyStatic_defaults___REPORTER_NAMES);
    cpy_r_r145 = CPyStatic_defaults___globals;
    cpy_r_r146 = CPyStatics[1668]; /* 'REPORTER_NAMES' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 32, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    cpy_r_r149 = CPyStatic_defaults___globals;
    cpy_r_r150 = CPyStatics[1669]; /* 'MANY_ERRORS_THRESHOLD' */
    cpy_r_r151 = CPyStatics[9017]; /* -1 */
    cpy_r_r152 = CPyDict_SetItem(cpy_r_r149, cpy_r_r150, cpy_r_r151);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/defaults.py", "<module>", 48, CPyStatic_defaults___globals);
        goto CPyL58;
    }
    return 1;
CPyL58: ;
    cpy_r_r154 = 2;
    return cpy_r_r154;
CPyL59: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL58;
CPyL60: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL35;
CPyL61: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL44;
CPyL63: ;
    CPy_DecRef(cpy_r_r124);
    goto CPyL49;
}
