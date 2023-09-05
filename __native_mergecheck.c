#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef mergecheckmodule_methods[] = {
    {"check_consistency", (PyCFunction)CPyPy_mergecheck___check_consistency, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"path_to_str", (PyCFunction)CPyPy_mergecheck___path_to_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mergecheckmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.mergecheck",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mergecheckmodule_methods
};

PyObject *CPyInit_mypy___server___mergecheck(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___mergecheck_internal) {
        Py_INCREF(CPyModule_mypy___server___mergecheck_internal);
        return CPyModule_mypy___server___mergecheck_internal;
    }
    CPyModule_mypy___server___mergecheck_internal = PyModule_Create(&mergecheckmodule);
    if (unlikely(CPyModule_mypy___server___mergecheck_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___mergecheck_internal, "__name__");
    CPyStatic_mergecheck___globals = PyModule_GetDict(CPyModule_mypy___server___mergecheck_internal);
    if (unlikely(CPyStatic_mergecheck___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mergecheck_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___mergecheck_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___mergecheck_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_mergecheck___check_consistency(PyObject *cpy_r_o) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_parents;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_reachable;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_syms;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_m;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_sym1;
    PyObject *cpy_r_sym2;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_path1;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_path2;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
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
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject **cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyTagged cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject **cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    char cpy_r_r167;
    cpy_r_r0 = CPyDef_objgraph___get_reachable_graph(cpy_r_o);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 19, CPyStatic_mergecheck___globals);
        goto CPyL74;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_seen = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    cpy_r_parents = cpy_r_r2;
    cpy_r_r3 = CPyDict_Values(cpy_r_seen);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 20, CPyStatic_mergecheck___globals);
        goto CPyL75;
    }
    cpy_r_reachable = cpy_r_r3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 21, CPyStatic_mergecheck___globals);
        goto CPyL76;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_reachable)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL77;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_reachable, cpy_r_r5);
    cpy_r_x = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r12 = CPy_TypeCheck(cpy_r_x, cpy_r_r11);
    if (!cpy_r_r12) goto CPyL78;
    if (likely(PyObject_TypeCheck(cpy_r_x, CPyType_nodes___SymbolNode)))
        cpy_r_r13 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 21, CPyStatic_mergecheck___globals, "mypy.nodes.SymbolNode", cpy_r_x);
        goto CPyL79;
    }
    cpy_r_r14 = PyList_Append(cpy_r_r4, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 21, CPyStatic_mergecheck___globals);
        goto CPyL79;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r16;
    goto CPyL4;
CPyL9: ;
    cpy_r_syms = cpy_r_r4;
    cpy_r_r17 = PyDict_New();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 23, CPyStatic_mergecheck___globals);
        goto CPyL80;
    }
    cpy_r_m = cpy_r_r17;
    cpy_r_r18 = 0;
CPyL11: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_syms)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL81;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_syms, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_nodes___SymbolNode)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 24, CPyStatic_mergecheck___globals, "mypy.nodes.SymbolNode", cpy_r_r23);
        goto CPyL82;
    }
    cpy_r_sym = cpy_r_r24;
    cpy_r_r25 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_sym)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) goto CPyL83;
    cpy_r_r29 = CPY_GET_ATTR_TRAIT(cpy_r_sym, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 28, CPyStatic_mergecheck___globals);
        goto CPyL84;
    }
CPyL15: ;
    cpy_r_fn = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_fn == cpy_r_r30;
    if (cpy_r_r31) goto CPyL85;
    cpy_r_r32 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_sym)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL18;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL19;
CPyL18: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_sym)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    cpy_r_r36 = cpy_r_r40;
CPyL19: ;
    if (cpy_r_r36) goto CPyL85;
    cpy_r_r41 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_sym)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_sym) == CPyType_nodes___FuncDef))
        cpy_r_r45 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 36, CPyStatic_mergecheck___globals, "mypy.nodes.FuncDef", cpy_r_sym);
        goto CPyL86;
    }
    cpy_r_r46 = ((mypy___nodes___FuncDefObject *)cpy_r_r45)->_is_overload;
    if (cpy_r_r46) goto CPyL85;
CPyL23: ;
    cpy_r_r47 = PyDict_Contains(cpy_r_m, cpy_r_fn);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 39, CPyStatic_mergecheck___globals);
        goto CPyL86;
    }
    cpy_r_r49 = cpy_r_r47;
    cpy_r_r50 = cpy_r_r49 ^ 1;
    if (cpy_r_r50) {
        goto CPyL87;
    } else
        goto CPyL27;
CPyL25: ;
    cpy_r_r51 = CPY_GET_ATTR_TRAIT(cpy_r_sym, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 40, CPyStatic_mergecheck___globals);
        goto CPyL84;
    }
CPyL26: ;
    cpy_r_r52 = CPyDict_SetItem(cpy_r_m, cpy_r_r51, cpy_r_sym);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 40, CPyStatic_mergecheck___globals);
        goto CPyL82;
    } else
        goto CPyL72;
CPyL27: ;
    CPy_INCREF(cpy_r_sym);
    cpy_r_r54 = cpy_r_sym;
    cpy_r_r55 = CPyDict_GetItem(cpy_r_m, cpy_r_fn);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 44, CPyStatic_mergecheck___globals);
        goto CPyL88;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_nodes___SymbolNode)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 44, CPyStatic_mergecheck___globals, "mypy.nodes.SymbolNode", cpy_r_r55);
        goto CPyL88;
    }
    cpy_r_r57 = cpy_r_r56;
    cpy_r_sym1 = cpy_r_r54;
    cpy_r_sym2 = cpy_r_r57;
    cpy_r_r58 = PyObject_Type(cpy_r_sym1);
    cpy_r_r59 = PyObject_Type(cpy_r_sym2);
    cpy_r_r60 = cpy_r_r58 == cpy_r_r59;
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 ^ 1;
    if (cpy_r_r61) goto CPyL89;
    cpy_r_r62 = CPyDef_objgraph___get_path(cpy_r_sym1, cpy_r_seen, cpy_r_parents);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 50, CPyStatic_mergecheck___globals);
        goto CPyL90;
    }
    cpy_r_path1 = cpy_r_r62;
    cpy_r_r63 = CPyDef_objgraph___get_path(cpy_r_sym2, cpy_r_seen, cpy_r_parents);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 51, CPyStatic_mergecheck___globals);
        goto CPyL91;
    }
    cpy_r_path2 = cpy_r_r63;
    cpy_r_r64 = PyDict_Contains(cpy_r_m, cpy_r_fn);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 53, CPyStatic_mergecheck___globals);
        goto CPyL92;
    }
    cpy_r_r66 = cpy_r_r64;
    if (!cpy_r_r66) goto CPyL93;
    cpy_r_r67 = CPyStatics[163]; /* '' */
    cpy_r_r68 = CPyStatics[5327]; /* '\nDuplicate ' */
    cpy_r_r69 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r70 = PyObject_Type(cpy_r_sym);
    cpy_r_r71 = CPyStatics[197]; /* '__name__' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL92;
    }
    if (likely(PyUnicode_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals, "str", cpy_r_r72);
        goto CPyL92;
    }
    cpy_r_r74 = CPyStatics[163]; /* '' */
    cpy_r_r75 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r76[3] = {cpy_r_r69, cpy_r_r73, cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_VectorcallMethod(cpy_r_r75, cpy_r_r77, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL94;
    }
    CPy_DECREF(cpy_r_r73);
    if (likely(PyUnicode_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals, "str", cpy_r_r78);
        goto CPyL92;
    }
    cpy_r_r80 = CPyStatics[5328]; /* ' nodes with fullname ' */
    cpy_r_r81 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r82 = CPyStatics[163]; /* '' */
    cpy_r_r83 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r84[3] = {cpy_r_r81, cpy_r_fn, cpy_r_r82};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_VectorcallMethod(cpy_r_r83, cpy_r_r85, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL95;
    }
    if (likely(PyUnicode_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals, "str", cpy_r_r86);
        goto CPyL95;
    }
    cpy_r_r88 = CPyStatics[5329]; /* ' found:' */
    cpy_r_r89 = PyList_New(5);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL96;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    CPy_INCREF(cpy_r_r68);
    *(PyObject * *)cpy_r_r91 = cpy_r_r68;
    cpy_r_r92 = cpy_r_r91 + 8;
    *(PyObject * *)cpy_r_r92 = cpy_r_r79;
    cpy_r_r93 = cpy_r_r91 + 16;
    CPy_INCREF(cpy_r_r80);
    *(PyObject * *)cpy_r_r93 = cpy_r_r80;
    cpy_r_r94 = cpy_r_r91 + 24;
    *(PyObject * *)cpy_r_r94 = cpy_r_r87;
    cpy_r_r95 = cpy_r_r91 + 32;
    CPy_INCREF(cpy_r_r88);
    *(PyObject * *)cpy_r_r95 = cpy_r_r88;
    cpy_r_r96 = PyUnicode_Join(cpy_r_r67, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL92;
    }
    cpy_r_r97 = CPyModule_builtins;
    cpy_r_r98 = CPyStatics[190]; /* 'print' */
    cpy_r_r99 = CPyObject_GetAttr(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r100[1] = {cpy_r_r96};
    cpy_r_r101 = (PyObject **)&cpy_r_r100;
    cpy_r_r102 = _PyObject_Vectorcall(cpy_r_r99, cpy_r_r101, 1, 0);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 54, CPyStatic_mergecheck___globals);
        goto CPyL97;
    } else
        goto CPyL98;
CPyL44: ;
    CPy_DECREF(cpy_r_r96);
    cpy_r_r103 = CPyTagged_Id(cpy_r_sym1);
    cpy_r_r104 = CPyTagged_Str(cpy_r_r103);
    CPyTagged_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 55, CPyStatic_mergecheck___globals);
        goto CPyL92;
    }
    cpy_r_r105 = CPyDef_mergecheck___path_to_str(cpy_r_path1);
    CPy_DECREF(cpy_r_path1);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 55, CPyStatic_mergecheck___globals);
        goto CPyL99;
    }
    cpy_r_r106 = CPyStatics[5330]; /* '[1] ' */
    cpy_r_r107 = CPyStatics[297]; /* ': ' */
    cpy_r_r108 = CPyStr_Build(4, cpy_r_r106, cpy_r_r104, cpy_r_r107, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 55, CPyStatic_mergecheck___globals);
        goto CPyL100;
    }
    cpy_r_r109 = CPyModule_builtins;
    cpy_r_r110 = CPyStatics[190]; /* 'print' */
    cpy_r_r111 = CPyObject_GetAttr(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 55, CPyStatic_mergecheck___globals);
        goto CPyL101;
    }
    PyObject *cpy_r_r112[1] = {cpy_r_r108};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 55, CPyStatic_mergecheck___globals);
        goto CPyL101;
    } else
        goto CPyL102;
CPyL49: ;
    CPy_DECREF(cpy_r_r108);
    cpy_r_r115 = CPyTagged_Id(cpy_r_sym2);
    cpy_r_r116 = CPyTagged_Str(cpy_r_r115);
    CPyTagged_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 56, CPyStatic_mergecheck___globals);
        goto CPyL100;
    }
    cpy_r_r117 = CPyDef_mergecheck___path_to_str(cpy_r_path2);
    CPy_DECREF(cpy_r_path2);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 56, CPyStatic_mergecheck___globals);
        goto CPyL103;
    }
    cpy_r_r118 = CPyStatics[5331]; /* '[2] ' */
    cpy_r_r119 = CPyStatics[297]; /* ': ' */
    cpy_r_r120 = CPyStr_Build(4, cpy_r_r118, cpy_r_r116, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 56, CPyStatic_mergecheck___globals);
        goto CPyL90;
    }
    cpy_r_r121 = CPyModule_builtins;
    cpy_r_r122 = CPyStatics[190]; /* 'print' */
    cpy_r_r123 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 56, CPyStatic_mergecheck___globals);
        goto CPyL104;
    }
    PyObject *cpy_r_r124[1] = {cpy_r_r120};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r123, cpy_r_r125, 1, 0);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 56, CPyStatic_mergecheck___globals);
        goto CPyL104;
    } else
        goto CPyL105;
CPyL54: ;
    CPy_DECREF(cpy_r_r120);
CPyL55: ;
    if (!0) goto CPyL106;
    cpy_r_r127 = PyDict_Contains(cpy_r_m, cpy_r_fn);
    CPy_DECREF(cpy_r_fn);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 58, CPyStatic_mergecheck___globals);
        goto CPyL107;
    }
    cpy_r_r129 = cpy_r_r127;
    if (!cpy_r_r129) goto CPyL108;
    cpy_r_r130 = CPyStatics[5332]; /* '---' */
    cpy_r_r131 = CPyModule_builtins;
    cpy_r_r132 = CPyStatics[190]; /* 'print' */
    cpy_r_r133 = CPyObject_GetAttr(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 60, CPyStatic_mergecheck___globals);
        goto CPyL107;
    }
    PyObject *cpy_r_r134[1] = {cpy_r_r130};
    cpy_r_r135 = (PyObject **)&cpy_r_r134;
    cpy_r_r136 = _PyObject_Vectorcall(cpy_r_r133, cpy_r_r135, 1, 0);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 60, CPyStatic_mergecheck___globals);
        goto CPyL107;
    } else
        goto CPyL109;
CPyL60: ;
    cpy_r_r137 = CPyTagged_Id(cpy_r_sym1);
    cpy_r_r138 = CPyModule_builtins;
    cpy_r_r139 = CPyStatics[190]; /* 'print' */
    cpy_r_r140 = CPyObject_GetAttr(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 61, CPyStatic_mergecheck___globals);
        goto CPyL110;
    }
    cpy_r_r141 = CPyTagged_StealAsObject(cpy_r_r137);
    PyObject *cpy_r_r142[2] = {cpy_r_r141, cpy_r_sym1};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = _PyObject_Vectorcall(cpy_r_r140, cpy_r_r143, 2, 0);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 61, CPyStatic_mergecheck___globals);
        goto CPyL111;
    } else
        goto CPyL112;
CPyL62: ;
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_sym1);
    cpy_r_r145 = CPyStatics[5332]; /* '---' */
    cpy_r_r146 = CPyModule_builtins;
    cpy_r_r147 = CPyStatics[190]; /* 'print' */
    cpy_r_r148 = CPyObject_GetAttr(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 62, CPyStatic_mergecheck___globals);
        goto CPyL113;
    }
    PyObject *cpy_r_r149[1] = {cpy_r_r145};
    cpy_r_r150 = (PyObject **)&cpy_r_r149;
    cpy_r_r151 = _PyObject_Vectorcall(cpy_r_r148, cpy_r_r150, 1, 0);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 62, CPyStatic_mergecheck___globals);
        goto CPyL113;
    } else
        goto CPyL114;
CPyL64: ;
    cpy_r_r152 = CPyTagged_Id(cpy_r_sym2);
    cpy_r_r153 = CPyModule_builtins;
    cpy_r_r154 = CPyStatics[190]; /* 'print' */
    cpy_r_r155 = CPyObject_GetAttr(cpy_r_r153, cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 63, CPyStatic_mergecheck___globals);
        goto CPyL115;
    }
    cpy_r_r156 = CPyTagged_StealAsObject(cpy_r_r152);
    PyObject *cpy_r_r157[2] = {cpy_r_r156, cpy_r_sym2};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = _PyObject_Vectorcall(cpy_r_r155, cpy_r_r158, 2, 0);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 63, CPyStatic_mergecheck___globals);
        goto CPyL116;
    } else
        goto CPyL117;
CPyL66: ;
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_sym2);
CPyL67: ;
    cpy_r_r160 = CPY_GET_ATTR_TRAIT(cpy_r_sym, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_sym);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 65, CPyStatic_mergecheck___globals);
        goto CPyL82;
    }
CPyL68: ;
    cpy_r_r161 = PyDict_Contains(cpy_r_m, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 65, CPyStatic_mergecheck___globals);
        goto CPyL82;
    }
    cpy_r_r163 = cpy_r_r161;
    cpy_r_r164 = cpy_r_r163 ^ 1;
    if (cpy_r_r164) {
        goto CPyL72;
    } else
        goto CPyL118;
CPyL70: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 65, CPyStatic_mergecheck___globals);
        goto CPyL74;
    }
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r166 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r166;
    goto CPyL11;
CPyL73: ;
    return 1;
CPyL74: ;
    cpy_r_r167 = 2;
    return cpy_r_r167;
CPyL75: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    goto CPyL74;
CPyL76: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_reachable);
    goto CPyL74;
CPyL77: ;
    CPy_DECREF(cpy_r_reachable);
    goto CPyL9;
CPyL78: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL8;
CPyL79: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_reachable);
    CPy_DecRef(cpy_r_r4);
    goto CPyL74;
CPyL80: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    goto CPyL74;
CPyL81: ;
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_parents);
    CPy_DECREF(cpy_r_syms);
    CPy_DECREF(cpy_r_m);
    goto CPyL73;
CPyL82: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    goto CPyL74;
CPyL83: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL72;
CPyL84: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    goto CPyL74;
CPyL85: ;
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_fn);
    goto CPyL72;
CPyL86: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    goto CPyL74;
CPyL87: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL25;
CPyL88: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r54);
    goto CPyL74;
CPyL89: ;
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_sym1);
    CPy_DECREF(cpy_r_sym2);
    goto CPyL72;
CPyL90: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    goto CPyL74;
CPyL91: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    goto CPyL74;
CPyL92: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    CPy_DecRef(cpy_r_path2);
    goto CPyL74;
CPyL93: ;
    CPy_DECREF(cpy_r_path1);
    CPy_DECREF(cpy_r_path2);
    goto CPyL55;
CPyL94: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r73);
    goto CPyL74;
CPyL95: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r79);
    goto CPyL74;
CPyL96: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r87);
    goto CPyL74;
CPyL97: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path1);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r96);
    goto CPyL74;
CPyL98: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL44;
CPyL99: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r104);
    goto CPyL74;
CPyL100: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path2);
    goto CPyL74;
CPyL101: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_path2);
    CPy_DecRef(cpy_r_r108);
    goto CPyL74;
CPyL102: ;
    CPy_DECREF(cpy_r_r114);
    goto CPyL49;
CPyL103: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_r116);
    goto CPyL74;
CPyL104: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_r120);
    goto CPyL74;
CPyL105: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL54;
CPyL106: ;
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_sym1);
    CPy_DECREF(cpy_r_sym2);
    goto CPyL67;
CPyL107: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    goto CPyL74;
CPyL108: ;
    CPy_DECREF(cpy_r_sym1);
    CPy_DECREF(cpy_r_sym2);
    goto CPyL67;
CPyL109: ;
    CPy_DECREF(cpy_r_r136);
    goto CPyL60;
CPyL110: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPyTagged_DecRef(cpy_r_r137);
    goto CPyL74;
CPyL111: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym1);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_r141);
    goto CPyL74;
CPyL112: ;
    CPy_DECREF(cpy_r_r144);
    goto CPyL62;
CPyL113: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym2);
    goto CPyL74;
CPyL114: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL64;
CPyL115: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym2);
    CPyTagged_DecRef(cpy_r_r152);
    goto CPyL74;
CPyL116: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_syms);
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_sym2);
    CPy_DecRef(cpy_r_r156);
    goto CPyL74;
CPyL117: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL66;
CPyL118: ;
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_parents);
    CPy_DECREF(cpy_r_syms);
    CPy_DECREF(cpy_r_m);
    goto CPyL70;
}

PyObject *CPyPy_mergecheck___check_consistency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:check_consistency", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_o = obj_o;
    char retval = CPyDef_mergecheck___check_consistency(arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/mergecheck.py", "check_consistency", 14, CPyStatic_mergecheck___globals);
    return NULL;
}

PyObject *CPyDef_mergecheck___path_to_str(PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
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
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
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
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    cpy_r_r0 = CPyStatics[5333]; /* '<root>' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_path)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL59;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_path, cpy_r_r1);
    PyObject *__tmp6560;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp6560 = NULL;
        goto __LL6561;
    }
    __tmp6560 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    if (__tmp6560 == NULL) goto __LL6561;
    __tmp6560 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    if (__tmp6560 == NULL) goto __LL6561;
    __tmp6560 = cpy_r_r6;
__LL6561: ;
    if (unlikely(__tmp6560 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6562 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp6562);
        PyObject *__tmp6563;
        __tmp6563 = __tmp6562;
        cpy_r_r7.f0 = __tmp6563;
        PyObject *__tmp6564 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp6564);
        PyObject *__tmp6565;
        __tmp6565 = __tmp6564;
        cpy_r_r7.f1 = __tmp6565;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 70, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_attr = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_obj = cpy_r_r9;
    cpy_r_r10 = PyObject_Type(cpy_r_obj);
    cpy_r_r11 = CPyStatics[197]; /* '__name__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 71, CPyStatic_mergecheck___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "path_to_str", 71, CPyStatic_mergecheck___globals, "str", cpy_r_r12);
        goto CPyL62;
    }
    cpy_r_t = cpy_r_r13;
    cpy_r_r14 = CPyStatics[1164]; /* 'dict' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_t, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL8;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL63;
    }
CPyL8: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL10;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL14;
CPyL10: ;
    cpy_r_r22 = CPyStatics[3659]; /* 'tuple' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_t, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL13;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL63;
    }
CPyL13: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    cpy_r_r21 = cpy_r_r28;
CPyL14: ;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r29 = cpy_r_r21;
    goto CPyL20;
CPyL16: ;
    cpy_r_r30 = CPyStatics[536]; /* 'SymbolTable' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_t, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL19;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL19;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL63;
    }
CPyL19: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    cpy_r_r29 = cpy_r_r36;
CPyL20: ;
    if (!cpy_r_r29) goto CPyL22;
    cpy_r_r37 = cpy_r_r29;
    goto CPyL26;
CPyL22: ;
    cpy_r_r38 = CPyStatics[5334]; /* 'list' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_t, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL25;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL25;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL63;
    }
CPyL25: ;
    cpy_r_r44 = cpy_r_r39 == 0;
    cpy_r_r37 = cpy_r_r44;
CPyL26: ;
    if (cpy_r_r37) {
        goto CPyL64;
    } else
        goto CPyL33;
CPyL27: ;
    cpy_r_r45 = CPyStatics[207]; /* '[' */
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[146]; /* 'repr' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 73, CPyStatic_mergecheck___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_attr};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 73, CPyStatic_mergecheck___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_attr);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "path_to_str", 73, CPyStatic_mergecheck___globals, "str", cpy_r_r51);
        goto CPyL61;
    }
    cpy_r_r53 = CPyStatics[208]; /* ']' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r45, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 73, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r55 = CPyStr_Append(cpy_r_result, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 73, CPyStatic_mergecheck___globals);
        goto CPyL60;
    }
    cpy_r_result = cpy_r_r55;
    goto CPyL58;
CPyL33: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_obj)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL66;
    cpy_r_r60 = CPyStatics[224]; /* '.' */
    cpy_r_r61 = PyObject_Str(cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 76, CPyStatic_mergecheck___globals);
        goto CPyL67;
    }
    cpy_r_r62 = CPyStatics[2381]; /* '(' */
    cpy_r_r63 = CPyStatics[171]; /* ':' */
    if (likely(Py_TYPE(cpy_r_obj) == CPyType_nodes___Var))
        cpy_r_r64 = cpy_r_obj;
    else {
        CPy_TypeErrorTraceback("mypy/server/mergecheck.py", "path_to_str", 76, CPyStatic_mergecheck___globals, "mypy.nodes.Var", cpy_r_obj);
        goto CPyL68;
    }
    cpy_r_r65 = CPY_GET_ATTR(cpy_r_r64, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 76, CPyStatic_mergecheck___globals);
        goto CPyL68;
    }
CPyL37: ;
    CPy_DECREF(cpy_r_obj);
    cpy_r_r66 = CPyStatics[72]; /* ')' */
    cpy_r_r67 = CPyStr_Build(7, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_t, cpy_r_r63, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 76, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r68 = CPyStr_Append(cpy_r_result, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 76, CPyStatic_mergecheck___globals);
        goto CPyL60;
    }
    cpy_r_result = cpy_r_r68;
    goto CPyL58;
CPyL40: ;
    cpy_r_r69 = CPyStatics[658]; /* 'BuildManager' */
    cpy_r_r70 = PyUnicode_Compare(cpy_r_t, cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 == -1;
    if (!cpy_r_r71) goto CPyL43;
    cpy_r_r72 = PyErr_Occurred();
    cpy_r_r73 = cpy_r_r72 != NULL;
    if (!cpy_r_r73) goto CPyL43;
    cpy_r_r74 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL69;
    }
CPyL43: ;
    cpy_r_r75 = cpy_r_r70 == 0;
    if (!cpy_r_r75) goto CPyL45;
    cpy_r_r76 = cpy_r_r75;
    goto CPyL49;
CPyL45: ;
    cpy_r_r77 = CPyStatics[1997]; /* 'FineGrainedBuildManager' */
    cpy_r_r78 = PyUnicode_Compare(cpy_r_t, cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 == -1;
    if (!cpy_r_r79) goto CPyL48;
    cpy_r_r80 = PyErr_Occurred();
    cpy_r_r81 = cpy_r_r80 != NULL;
    if (!cpy_r_r81) goto CPyL48;
    cpy_r_r82 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", -1, CPyStatic_mergecheck___globals);
        goto CPyL69;
    }
CPyL48: ;
    cpy_r_r83 = cpy_r_r78 == 0;
    cpy_r_r76 = cpy_r_r83;
CPyL49: ;
    if (cpy_r_r76) {
        goto CPyL70;
    } else
        goto CPyL54;
CPyL50: ;
    cpy_r_r84 = CPyStatics[224]; /* '.' */
    cpy_r_r85 = PyObject_Str(cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 80, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r86 = CPyStr_Build(2, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 80, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r87 = CPyStr_Append(cpy_r_result, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 80, CPyStatic_mergecheck___globals);
        goto CPyL60;
    }
    cpy_r_result = cpy_r_r87;
    goto CPyL58;
CPyL54: ;
    cpy_r_r88 = CPyStatics[224]; /* '.' */
    cpy_r_r89 = PyObject_Str(cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 82, CPyStatic_mergecheck___globals);
        goto CPyL71;
    }
    cpy_r_r90 = CPyStatics[2381]; /* '(' */
    cpy_r_r91 = CPyStatics[72]; /* ')' */
    cpy_r_r92 = CPyStr_Build(5, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_t, cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 82, CPyStatic_mergecheck___globals);
        goto CPyL61;
    }
    cpy_r_r93 = CPyStr_Append(cpy_r_result, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 82, CPyStatic_mergecheck___globals);
        goto CPyL60;
    }
    cpy_r_result = cpy_r_r93;
CPyL58: ;
    cpy_r_r94 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r94;
    goto CPyL1;
CPyL59: ;
    return cpy_r_result;
CPyL60: ;
    cpy_r_r95 = NULL;
    return cpy_r_r95;
CPyL61: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL60;
CPyL62: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_obj);
    goto CPyL60;
CPyL63: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_t);
    goto CPyL60;
CPyL64: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_t);
    goto CPyL27;
CPyL65: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_attr);
    goto CPyL60;
CPyL66: ;
    CPy_DECREF(cpy_r_obj);
    goto CPyL40;
CPyL67: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_t);
    goto CPyL60;
CPyL68: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r61);
    goto CPyL60;
CPyL69: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_t);
    goto CPyL60;
CPyL70: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL50;
CPyL71: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_t);
    goto CPyL60;
}

PyObject *CPyPy_mergecheck___path_to_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:path_to_str", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyList_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("list", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_mergecheck___path_to_str(arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/mergecheck.py", "path_to_str", 68, CPyStatic_mergecheck___globals);
    return NULL;
}

char CPyDef_mergecheck_____top_level__(void) {
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
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", -1, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mergecheck___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", 3, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_mergecheck___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", 5, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9762]; /* ('Decorator', 'FakeInfo', 'FuncDef', 'SymbolNode', 'Var') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_mergecheck___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", 7, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9763]; /* ('get_path', 'get_reachable_graph') */
    cpy_r_r18 = CPyStatics[5337]; /* 'mypy.server.objgraph' */
    cpy_r_r19 = CPyStatic_mergecheck___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", 8, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    CPyModule_mypy___server___objgraph = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___server___objgraph);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_mergecheck___globals;
    cpy_r_r22 = CPyStatics[5338]; /* 'DUMP_MISMATCH_NODES' */
    cpy_r_r23 = 0 ? Py_True : Py_False;
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/server/mergecheck.py", "<module>", 11, CPyStatic_mergecheck___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
}
