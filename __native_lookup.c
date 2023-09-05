#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef lookupmodule_methods[] = {
    {"lookup_fully_qualified", (PyCFunction)CPyPy_lookup___lookup_fully_qualified, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef lookupmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.lookup",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    lookupmodule_methods
};

PyObject *CPyInit_mypy___lookup(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___lookup_internal) {
        Py_INCREF(CPyModule_mypy___lookup_internal);
        return CPyModule_mypy___lookup_internal;
    }
    CPyModule_mypy___lookup_internal = PyModule_Create(&lookupmodule);
    if (unlikely(CPyModule_mypy___lookup_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___lookup_internal, "__name__");
    CPyStatic_lookup___globals = PyModule_GetDict(CPyModule_mypy___lookup_internal);
    if (unlikely(CPyStatic_lookup___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_lookup_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___lookup_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___lookup_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_lookup___lookup_fully_qualified(PyObject *cpy_r_name, PyObject *cpy_r_modules, char cpy_r_raise_on_missing) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_head;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_tail;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_names;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_key;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyPtr cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_stnode;
    CPyPtr cpy_r_r104;
    int64_t cpy_r_r105;
    CPyTagged cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    cpy_r_r0 = NULL;
    cpy_r_mod = cpy_r_r0;
    if (cpy_r_raise_on_missing != 2) goto CPyL2;
    cpy_r_raise_on_missing = 0;
CPyL2: ;
    CPy_INCREF(cpy_r_name);
    cpy_r_head = cpy_r_name;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 26, CPyStatic_lookup___globals);
        goto CPyL85;
    }
    cpy_r_rest = cpy_r_r1;
CPyL4: ;
    if (1) {
        goto CPyL86;
    } else
        goto CPyL87;
CPyL5: ;
    cpy_r_r2 = CPyStatics[224]; /* '.' */
    cpy_r_r3 = PySequence_Contains(cpy_r_head, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 29, CPyStatic_lookup___globals);
        goto CPyL88;
    }
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ^ 1;
    if (cpy_r_r6) {
        goto CPyL89;
    } else
        goto CPyL16;
CPyL7: ;
    if (!cpy_r_raise_on_missing) goto CPyL90;
    cpy_r_r7 = CPyStatics[224]; /* '.' */
    cpy_r_r8 = PySequence_Contains(cpy_r_head, cpy_r_r7);
    CPy_DECREF(cpy_r_head);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 31, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r10 = cpy_r_r8;
    if (cpy_r_r10) goto CPyL15;
    cpy_r_r11 = CPyStatics[2714]; /* 'Cannot find module for ' */
    cpy_r_r12 = CPyStr_Build(2, cpy_r_r11, cpy_r_name);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 31, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 31, CPyStatic_lookup___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 31, CPyStatic_lookup___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_Raise(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 31, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r19 = Py_None;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = CPyStatics[224]; /* '.' */
    cpy_r_r21 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r22 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r23[3] = {cpy_r_head, cpy_r_r20, cpy_r_r22};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r24, 9223372036854775810ULL, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 33, CPyStatic_lookup___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_head);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 33, CPyStatic_lookup___globals, "list", cpy_r_r26);
        goto CPyL92;
    }
    cpy_r_r28 = CPySequence_CheckUnpackCount(cpy_r_r27, 2);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 33, CPyStatic_lookup___globals);
        goto CPyL93;
    }
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r27, 0);
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_r27, 2);
    CPy_DECREF(cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r32 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 33, CPyStatic_lookup___globals, "str", cpy_r_r30);
        goto CPyL94;
    }
    cpy_r_head = cpy_r_r32;
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r33 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 33, CPyStatic_lookup___globals, "str", cpy_r_r31);
        goto CPyL88;
    }
    cpy_r_tail = cpy_r_r33;
    cpy_r_r34 = PyList_Append(cpy_r_rest, cpy_r_tail);
    CPy_DECREF(cpy_r_tail);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 34, CPyStatic_lookup___globals);
        goto CPyL88;
    }
    cpy_r_r36 = CPyDict_GetWithNone(cpy_r_modules, cpy_r_head);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 35, CPyStatic_lookup___globals);
        goto CPyL88;
    }
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___MypyFile)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL3104;
    if (cpy_r_r36 == Py_None)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL3104;
    CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 35, CPyStatic_lookup___globals, "mypy.nodes.MypyFile or None", cpy_r_r36);
    goto CPyL88;
__LL3104: ;
    cpy_r_mod = cpy_r_r37;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_mod != cpy_r_r38;
    if (cpy_r_r39) {
        goto CPyL87;
    } else
        goto CPyL4;
CPyL25: ;
    if (cpy_r_mod == NULL) {
        goto CPyL95;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"mod\" referenced before assignment");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 38, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL28: ;
    if (likely(cpy_r_mod != Py_None))
        cpy_r_r41 = cpy_r_mod;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 38, CPyStatic_lookup___globals, "mypy.nodes.MypyFile", cpy_r_mod);
        goto CPyL96;
    }
    cpy_r_r42 = ((mypy___nodes___MypyFileObject *)cpy_r_r41)->_names;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/lookup.py", "lookup_fully_qualified", "MypyFile", "names", 38, CPyStatic_lookup___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r42);
CPyL30: ;
    if (cpy_r_mod == NULL) {
        goto CPyL97;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"mod\" referenced before assignment");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", -1, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL33: ;
    CPy_XDECREF(cpy_r_mod);
    cpy_r_names = cpy_r_r42;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_rest)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = cpy_r_r46 != 0;
    if (cpy_r_r47) {
        goto CPyL42;
    } else
        goto CPyL98;
CPyL34: ;
    if (!cpy_r_raise_on_missing) goto CPyL99;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_rest)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    CPy_DECREF(cpy_r_rest);
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (cpy_r_r51) goto CPyL41;
    cpy_r_r52 = CPyStatics[2715]; /* 'Cannot find ' */
    cpy_r_r53 = CPyStatics[2716]; /* ', got a module symbol' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r52, cpy_r_name, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 43, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 43, CPyStatic_lookup___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r58[1] = {cpy_r_r54};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 43, CPyStatic_lookup___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r54);
    CPy_Raise(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 43, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r61 = Py_None;
    CPy_INCREF(cpy_r_r61);
    return cpy_r_r61;
CPyL42: ;
    if (!1) goto CPyL101;
    cpy_r_r62 = CPyList_PopLast(cpy_r_rest);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 46, CPyStatic_lookup___globals);
        goto CPyL102;
    }
    if (likely(PyUnicode_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 46, CPyStatic_lookup___globals, "str", cpy_r_r62);
        goto CPyL102;
    }
    cpy_r_key = cpy_r_r63;
    cpy_r_r64 = PyDict_Contains(cpy_r_names, cpy_r_key);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 47, CPyStatic_lookup___globals);
        goto CPyL103;
    }
    cpy_r_r66 = cpy_r_r64;
    cpy_r_r67 = cpy_r_r66 ^ 1;
    if (cpy_r_r67) {
        goto CPyL104;
    } else
        goto CPyL61;
CPyL47: ;
    if (!cpy_r_raise_on_missing) goto CPyL105;
    cpy_r_r68 = PyDict_Contains(cpy_r_names, cpy_r_key);
    CPy_DECREF(cpy_r_names);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL106;
    }
    cpy_r_r70 = cpy_r_r68;
    if (cpy_r_r70) goto CPyL107;
    cpy_r_r71 = CPyStatics[163]; /* '' */
    cpy_r_r72 = CPyStatics[2717]; /* 'Cannot find component ' */
    cpy_r_r73 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r74 = CPyStatics[163]; /* '' */
    cpy_r_r75 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r76[3] = {cpy_r_r73, cpy_r_key, cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_VectorcallMethod(cpy_r_r75, cpy_r_r77, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_key);
    if (likely(PyUnicode_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals, "str", cpy_r_r78);
        goto CPyL84;
    }
    cpy_r_r80 = CPyStatics[2718]; /* ' for ' */
    cpy_r_r81 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r82 = CPyStatics[163]; /* '' */
    cpy_r_r83 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r84[3] = {cpy_r_r81, cpy_r_name, cpy_r_r82};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_VectorcallMethod(cpy_r_r83, cpy_r_r85, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL108;
    }
    if (likely(PyUnicode_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals, "str", cpy_r_r86);
        goto CPyL108;
    }
    cpy_r_r88 = PyList_New(4);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL109;
    }
    cpy_r_r89 = (CPyPtr)&((PyListObject *)cpy_r_r88)->ob_item;
    cpy_r_r90 = *(CPyPtr *)cpy_r_r89;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r90 = cpy_r_r72;
    cpy_r_r91 = cpy_r_r90 + 8;
    *(PyObject * *)cpy_r_r91 = cpy_r_r79;
    cpy_r_r92 = cpy_r_r90 + 16;
    CPy_INCREF(cpy_r_r80);
    *(PyObject * *)cpy_r_r92 = cpy_r_r80;
    cpy_r_r93 = cpy_r_r90 + 24;
    *(PyObject * *)cpy_r_r93 = cpy_r_r87;
    cpy_r_r94 = PyUnicode_Join(cpy_r_r71, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r95 = CPyModule_builtins;
    cpy_r_r96 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL110;
    }
    PyObject *cpy_r_r98[1] = {cpy_r_r94};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r99, 1, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r94);
    CPy_Raise(cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 49, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r101 = Py_None;
    CPy_INCREF(cpy_r_r101);
    return cpy_r_r101;
CPyL61: ;
    cpy_r_r102 = CPyDict_GetItem(cpy_r_names, cpy_r_key);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 51, CPyStatic_lookup___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_nodes___SymbolTableNode))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 51, CPyStatic_lookup___globals, "mypy.nodes.SymbolTableNode", cpy_r_r102);
        goto CPyL92;
    }
    cpy_r_stnode = cpy_r_r103;
    cpy_r_r104 = (CPyPtr)&((PyVarObject *)cpy_r_rest)->ob_size;
    cpy_r_r105 = *(int64_t *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 << 1;
    cpy_r_r107 = cpy_r_r106 != 0;
    if (cpy_r_r107) {
        goto CPyL65;
    } else
        goto CPyL111;
CPyL64: ;
    return cpy_r_stnode;
CPyL65: ;
    cpy_r_r108 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_stnode)->_node;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_stnode);
    cpy_r_node = cpy_r_r108;
    cpy_r_r109 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r110 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r111 = *(PyObject * *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 == cpy_r_r109;
    if (!cpy_r_r112) goto CPyL67;
    cpy_r_r113 = cpy_r_r112;
    goto CPyL68;
CPyL67: ;
    cpy_r_r114 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    cpy_r_r113 = cpy_r_r117;
CPyL68: ;
    if (cpy_r_r113) {
        goto CPyL80;
    } else
        goto CPyL112;
CPyL69: ;
    if (!cpy_r_raise_on_missing) goto CPyL113;
    cpy_r_r118 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r119 = cpy_r_node != cpy_r_r118;
    if (!cpy_r_r119) goto CPyL114;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r120 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 54, CPyStatic_lookup___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL84;
    }
    cpy_r_r121 = PyObject_IsTrue(cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 54, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r123 = cpy_r_r121;
    if (cpy_r_r123) goto CPyL79;
CPyL74: ;
    cpy_r_r124 = CPyStatics[2715]; /* 'Cannot find ' */
    cpy_r_r125 = CPyStr_Build(2, cpy_r_r124, cpy_r_name);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 59, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    cpy_r_r126 = CPyModule_builtins;
    cpy_r_r127 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r128 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 59, CPyStatic_lookup___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r129[1] = {cpy_r_r125};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = _PyObject_Vectorcall(cpy_r_r128, cpy_r_r130, 1, 0);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 59, CPyStatic_lookup___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_r125);
    CPy_Raise(cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 59, CPyStatic_lookup___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r132 = Py_None;
    CPy_INCREF(cpy_r_r132);
    return cpy_r_r132;
CPyL80: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r133 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/lookup.py", "lookup_fully_qualified", 61, CPyStatic_lookup___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL116;
    }
    cpy_r_r134 = ((mypy___nodes___TypeInfoObject *)cpy_r_r133)->_names;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("mypy/lookup.py", "lookup_fully_qualified", "TypeInfo", "names", 61, CPyStatic_lookup___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r134);
CPyL82: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_names = cpy_r_r134;
    goto CPyL42;
CPyL83: ;
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r135 = NULL;
    return cpy_r_r135;
CPyL85: ;
    CPy_XDecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_head);
    goto CPyL84;
CPyL86: ;
    CPy_XDECREF(cpy_r_mod);
    goto CPyL5;
CPyL87: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL25;
CPyL88: ;
    CPy_DecRef(cpy_r_head);
    CPy_DecRef(cpy_r_rest);
    goto CPyL84;
CPyL89: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL7;
CPyL90: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL15;
CPyL91: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL84;
CPyL92: ;
    CPy_DecRef(cpy_r_rest);
    goto CPyL84;
CPyL93: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r27);
    goto CPyL84;
CPyL94: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r31);
    goto CPyL84;
CPyL95: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL26;
CPyL96: ;
    CPy_XDecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_rest);
    goto CPyL84;
CPyL97: ;
    CPy_DECREF(cpy_r_rest);
    CPy_DECREF(cpy_r_r42);
    goto CPyL31;
CPyL98: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL34;
CPyL99: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL41;
CPyL100: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL84;
CPyL101: ;
    CPy_DECREF(cpy_r_rest);
    CPy_DECREF(cpy_r_names);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_names);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_key);
    goto CPyL84;
CPyL104: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL47;
CPyL105: ;
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_key);
    goto CPyL60;
CPyL106: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL84;
CPyL107: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL60;
CPyL108: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL84;
CPyL109: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r87);
    goto CPyL84;
CPyL110: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL84;
CPyL111: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL64;
CPyL112: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL69;
CPyL113: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL79;
CPyL114: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL74;
CPyL115: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL84;
CPyL116: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_node);
    goto CPyL84;
}

PyObject *CPyPy_lookup___lookup_fully_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "modules", "raise_on_missing", 0};
    static CPyArg_Parser parser = {"OO|$O:lookup_fully_qualified", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_modules;
    PyObject *obj_raise_on_missing = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_modules, &obj_raise_on_missing)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char arg_raise_on_missing;
    if (obj_raise_on_missing == NULL) {
        arg_raise_on_missing = 2;
    } else if (unlikely(!PyBool_Check(obj_raise_on_missing))) {
        CPy_TypeError("bool", obj_raise_on_missing); goto fail;
    } else
        arg_raise_on_missing = obj_raise_on_missing == Py_True;
    PyObject *retval = CPyDef_lookup___lookup_fully_qualified(arg_name, arg_modules, arg_raise_on_missing);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/lookup.py", "lookup_fully_qualified", 13, CPyStatic_lookup___globals);
    return NULL;
}

char CPyDef_lookup_____top_level__(void) {
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
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "<module>", -1, CPyStatic_lookup___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_lookup___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "<module>", 6, CPyStatic_lookup___globals);
        goto CPyL6;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9454]; /* ('MypyFile', 'SymbolTableNode', 'TypeInfo') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_lookup___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/lookup.py", "<module>", 8, CPyStatic_lookup___globals);
        goto CPyL6;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}
