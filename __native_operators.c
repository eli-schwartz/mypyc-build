#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef operatorsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef operatorsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.operators",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    operatorsmodule_methods
};

PyObject *CPyInit_mypy___operators(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___operators_internal) {
        Py_INCREF(CPyModule_mypy___operators_internal);
        return CPyModule_mypy___operators_internal;
    }
    CPyModule_mypy___operators_internal = PyModule_Create(&operatorsmodule);
    if (unlikely(CPyModule_mypy___operators_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___operators_internal, "__name__");
    CPyStatic_operators___globals = PyModule_GetDict(CPyModule_mypy___operators_internal);
    if (unlikely(CPyStatic_operators___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_operators_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___operators_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___operators_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_operators___op_methods);
    CPyStatic_operators___op_methods = NULL;
    CPy_XDECREF(CPyStatic_operators___op_methods_to_symbols);
    CPyStatic_operators___op_methods_to_symbols = NULL;
    CPy_XDECREF(CPyStatic_operators___ops_falling_back_to_cmp);
    CPyStatic_operators___ops_falling_back_to_cmp = NULL;
    CPy_XDECREF(CPyStatic_operators___ops_with_inplace_method);
    CPyStatic_operators___ops_with_inplace_method = NULL;
    CPy_XDECREF(CPyStatic_operators___inplace_operator_methods);
    CPyStatic_operators___inplace_operator_methods = NULL;
    CPy_XDECREF(CPyStatic_operators___reverse_op_methods);
    CPyStatic_operators___reverse_op_methods = NULL;
    CPy_XDECREF(CPyStatic_operators___reverse_op_method_names);
    CPyStatic_operators___reverse_op_method_names = NULL;
    CPy_XDECREF(CPyStatic_operators___op_methods_that_shortcut);
    CPyStatic_operators___op_methods_that_shortcut = NULL;
    CPy_XDECREF(CPyStatic_operators___normal_from_reverse_op);
    CPyStatic_operators___normal_from_reverse_op = NULL;
    CPy_XDECREF(CPyStatic_operators___reverse_op_method_set);
    CPyStatic_operators___reverse_op_method_set = NULL;
    CPy_XDECREF(CPyStatic_operators___unary_op_methods);
    CPyStatic_operators___unary_op_methods = NULL;
    return NULL;
}

char CPyDef_operators_____top_level__(void) {
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
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T4CIOO cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
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
    int32_t cpy_r_r119;
    char cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
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
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
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
    int32_t cpy_r_r238;
    char cpy_r_r239;
    int32_t cpy_r_r240;
    char cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    int32_t cpy_r_r260;
    char cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    int32_t cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    int32_t cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    char cpy_r_r272;
    CPyTagged cpy_r_r273;
    int64_t cpy_r_r274;
    CPyTagged cpy_r_r275;
    PyObject *cpy_r_r276;
    tuple_T4CIOO cpy_r_r277;
    CPyTagged cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_n;
    PyObject *cpy_r_m;
    int32_t cpy_r_r284;
    char cpy_r_r285;
    char cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    int32_t cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    int32_t cpy_r_r309;
    char cpy_r_r310;
    char cpy_r_r311;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", -1, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_operators___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 3, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_operators___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 5, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[886]; /* '+' */
    cpy_r_r14 = CPyStatics[1184]; /* '__add__' */
    cpy_r_r15 = CPyStatics[1198]; /* '-' */
    cpy_r_r16 = CPyStatics[4183]; /* '__sub__' */
    cpy_r_r17 = CPyStatics[282]; /* '*' */
    cpy_r_r18 = CPyStatics[1196]; /* '__mul__' */
    cpy_r_r19 = CPyStatics[1594]; /* '/' */
    cpy_r_r20 = CPyStatics[4184]; /* '__truediv__' */
    cpy_r_r21 = CPyStatics[1183]; /* '%' */
    cpy_r_r22 = CPyStatics[4185]; /* '__mod__' */
    cpy_r_r23 = CPyStatics[4186]; /* 'divmod' */
    cpy_r_r24 = CPyStatics[4187]; /* '__divmod__' */
    cpy_r_r25 = CPyStatics[1595]; /* '//' */
    cpy_r_r26 = CPyStatics[4188]; /* '__floordiv__' */
    cpy_r_r27 = CPyStatics[1600]; /* '**' */
    cpy_r_r28 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r29 = CPyStatics[1784]; /* '@' */
    cpy_r_r30 = CPyStatics[4190]; /* '__matmul__' */
    cpy_r_r31 = CPyStatics[1596]; /* '&' */
    cpy_r_r32 = CPyStatics[4191]; /* '__and__' */
    cpy_r_r33 = CPyStatics[885]; /* '|' */
    cpy_r_r34 = CPyStatics[4192]; /* '__or__' */
    cpy_r_r35 = CPyStatics[1597]; /* '^' */
    cpy_r_r36 = CPyStatics[4193]; /* '__xor__' */
    cpy_r_r37 = CPyStatics[1598]; /* '<<' */
    cpy_r_r38 = CPyStatics[4194]; /* '__lshift__' */
    cpy_r_r39 = CPyStatics[1599]; /* '>>' */
    cpy_r_r40 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r41 = CPyStatics[860]; /* '==' */
    cpy_r_r42 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r43 = CPyStatics[863]; /* '!=' */
    cpy_r_r44 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r45 = CPyStatics[2465]; /* '<' */
    cpy_r_r46 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r47 = CPyStatics[2468]; /* '>=' */
    cpy_r_r48 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r49 = CPyStatics[840]; /* '>' */
    cpy_r_r50 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r51 = CPyStatics[2470]; /* '<=' */
    cpy_r_r52 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r53 = CPyStatics[867]; /* 'in' */
    cpy_r_r54 = CPyStatics[1188]; /* '__contains__' */
    cpy_r_r55 = CPyDict_Build(21, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 8, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyStatic_operators___op_methods = cpy_r_r55;
    CPy_INCREF(CPyStatic_operators___op_methods);
    cpy_r_r56 = CPyStatic_operators___globals;
    cpy_r_r57 = CPyStatics[3742]; /* 'op_methods' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 8, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r60 = PyDict_New();
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r61 = CPyStatic_operators___op_methods;
    if (unlikely(cpy_r_r61 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_methods\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r63 = 0;
    cpy_r_r64 = PyDict_Size(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = CPyDict_GetItemsIter(cpy_r_r61);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL107;
    }
CPyL12: ;
    cpy_r_r67 = CPyDict_NextItem(cpy_r_r66, cpy_r_r63);
    cpy_r_r68 = cpy_r_r67.f1;
    cpy_r_r63 = cpy_r_r68;
    cpy_r_r69 = cpy_r_r67.f0;
    if (!cpy_r_r69) goto CPyL108;
    cpy_r_r70 = cpy_r_r67.f2;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = cpy_r_r67.f3;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r67.f2);
    CPy_DECREF(cpy_r_r67.f3);
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r72 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals, "str", cpy_r_r70);
        goto CPyL109;
    }
    if (likely(PyUnicode_Check(cpy_r_r71)))
        cpy_r_r73 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals, "str", cpy_r_r71);
        goto CPyL110;
    }
    cpy_r_k = cpy_r_r72;
    cpy_r_v = cpy_r_r73;
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r60, cpy_r_v, cpy_r_k);
    CPy_DECREF(cpy_r_v);
    CPy_DECREF(cpy_r_k);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL111;
    }
    cpy_r_r76 = CPyDict_CheckSize(cpy_r_r61, cpy_r_r65);
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL111;
    } else
        goto CPyL12;
CPyL17: ;
    cpy_r_r77 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL107;
    }
    CPyStatic_operators___op_methods_to_symbols = cpy_r_r60;
    CPy_INCREF(CPyStatic_operators___op_methods_to_symbols);
    cpy_r_r78 = CPyStatic_operators___globals;
    cpy_r_r79 = CPyStatics[3743]; /* 'op_methods_to_symbols' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 32, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r82 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r83 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r84 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r85 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r86 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r87 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r88 = PySet_New(NULL);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r89 = PySet_Add(cpy_r_r88, cpy_r_r82);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    cpy_r_r91 = PySet_Add(cpy_r_r88, cpy_r_r83);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    cpy_r_r93 = PySet_Add(cpy_r_r88, cpy_r_r84);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    cpy_r_r95 = PySet_Add(cpy_r_r88, cpy_r_r85);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    cpy_r_r97 = PySet_Add(cpy_r_r88, cpy_r_r86);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    cpy_r_r99 = PySet_Add(cpy_r_r88, cpy_r_r87);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL112;
    }
    CPyStatic_operators___ops_falling_back_to_cmp = cpy_r_r88;
    CPy_INCREF(CPyStatic_operators___ops_falling_back_to_cmp);
    cpy_r_r101 = CPyStatic_operators___globals;
    cpy_r_r102 = CPyStatics[4200]; /* 'ops_falling_back_to_cmp' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 34, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r105 = CPyStatics[886]; /* '+' */
    cpy_r_r106 = CPyStatics[1198]; /* '-' */
    cpy_r_r107 = CPyStatics[282]; /* '*' */
    cpy_r_r108 = CPyStatics[1594]; /* '/' */
    cpy_r_r109 = CPyStatics[1183]; /* '%' */
    cpy_r_r110 = CPyStatics[1595]; /* '//' */
    cpy_r_r111 = CPyStatics[1600]; /* '**' */
    cpy_r_r112 = CPyStatics[1784]; /* '@' */
    cpy_r_r113 = CPyStatics[1596]; /* '&' */
    cpy_r_r114 = CPyStatics[885]; /* '|' */
    cpy_r_r115 = CPyStatics[1597]; /* '^' */
    cpy_r_r116 = CPyStatics[1598]; /* '<<' */
    cpy_r_r117 = CPyStatics[1599]; /* '>>' */
    cpy_r_r118 = PySet_New(NULL);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r119 = PySet_Add(cpy_r_r118, cpy_r_r105);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r121 = PySet_Add(cpy_r_r118, cpy_r_r106);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r123 = PySet_Add(cpy_r_r118, cpy_r_r107);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r125 = PySet_Add(cpy_r_r118, cpy_r_r108);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r127 = PySet_Add(cpy_r_r118, cpy_r_r109);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r129 = PySet_Add(cpy_r_r118, cpy_r_r110);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r131 = PySet_Add(cpy_r_r118, cpy_r_r111);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r133 = PySet_Add(cpy_r_r118, cpy_r_r112);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r135 = PySet_Add(cpy_r_r118, cpy_r_r113);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r137 = PySet_Add(cpy_r_r118, cpy_r_r114);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r139 = PySet_Add(cpy_r_r118, cpy_r_r115);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r141 = PySet_Add(cpy_r_r118, cpy_r_r116);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    cpy_r_r143 = PySet_Add(cpy_r_r118, cpy_r_r117);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL113;
    }
    CPyStatic_operators___ops_with_inplace_method = cpy_r_r118;
    CPy_INCREF(CPyStatic_operators___ops_with_inplace_method);
    cpy_r_r145 = CPyStatic_operators___globals;
    cpy_r_r146 = CPyStatics[4201]; /* 'ops_with_inplace_method' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 37, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r149 = PySet_New(NULL);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r150 = CPyStatic_operators___ops_with_inplace_method;
    if (unlikely(cpy_r_r150 == NULL)) {
        goto CPyL114;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ops_with_inplace_method\" was not set");
    cpy_r_r151 = 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r152 = PyObject_GetIter(cpy_r_r150);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL115;
    }
CPyL47: ;
    cpy_r_r153 = PyIter_Next(cpy_r_r152);
    if (cpy_r_r153 == NULL) goto CPyL116;
    if (likely(PyUnicode_Check(cpy_r_r153)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals, "str", cpy_r_r153);
        goto CPyL117;
    }
    cpy_r_op = cpy_r_r154;
    cpy_r_r155 = CPyStatics[896]; /* '__i' */
    cpy_r_r156 = CPyStatic_operators___op_methods;
    if (unlikely(cpy_r_r156 == NULL)) {
        goto CPyL118;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_methods\" was not set");
    cpy_r_r157 = 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL117;
    }
    if (likely(PyUnicode_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals, "str", cpy_r_r158);
        goto CPyL117;
    }
    cpy_r_r160 = CPyStr_GetSlice(cpy_r_r159, 4, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL117;
    }
    if (likely(PyUnicode_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals, "str", cpy_r_r160);
        goto CPyL117;
    }
    cpy_r_r162 = PyUnicode_Concat(cpy_r_r155, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL117;
    }
    cpy_r_r163 = PySet_Add(cpy_r_r149, cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL117;
    } else
        goto CPyL47;
CPyL58: ;
    cpy_r_r165 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL115;
    }
    CPyStatic_operators___inplace_operator_methods = cpy_r_r149;
    CPy_INCREF(CPyStatic_operators___inplace_operator_methods);
    cpy_r_r166 = CPyStatic_operators___globals;
    cpy_r_r167 = CPyStatics[4202]; /* 'inplace_operator_methods' */
    cpy_r_r168 = CPyDict_SetItem(cpy_r_r166, cpy_r_r167, cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 53, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r170 = CPyStatics[1184]; /* '__add__' */
    cpy_r_r171 = CPyStatics[1186]; /* '__radd__' */
    cpy_r_r172 = CPyStatics[4183]; /* '__sub__' */
    cpy_r_r173 = CPyStatics[4203]; /* '__rsub__' */
    cpy_r_r174 = CPyStatics[1196]; /* '__mul__' */
    cpy_r_r175 = CPyStatics[4204]; /* '__rmul__' */
    cpy_r_r176 = CPyStatics[4184]; /* '__truediv__' */
    cpy_r_r177 = CPyStatics[4205]; /* '__rtruediv__' */
    cpy_r_r178 = CPyStatics[4185]; /* '__mod__' */
    cpy_r_r179 = CPyStatics[4206]; /* '__rmod__' */
    cpy_r_r180 = CPyStatics[4187]; /* '__divmod__' */
    cpy_r_r181 = CPyStatics[4207]; /* '__rdivmod__' */
    cpy_r_r182 = CPyStatics[4188]; /* '__floordiv__' */
    cpy_r_r183 = CPyStatics[4208]; /* '__rfloordiv__' */
    cpy_r_r184 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r185 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r186 = CPyStatics[4190]; /* '__matmul__' */
    cpy_r_r187 = CPyStatics[4210]; /* '__rmatmul__' */
    cpy_r_r188 = CPyStatics[4191]; /* '__and__' */
    cpy_r_r189 = CPyStatics[4211]; /* '__rand__' */
    cpy_r_r190 = CPyStatics[4192]; /* '__or__' */
    cpy_r_r191 = CPyStatics[4212]; /* '__ror__' */
    cpy_r_r192 = CPyStatics[4193]; /* '__xor__' */
    cpy_r_r193 = CPyStatics[4213]; /* '__rxor__' */
    cpy_r_r194 = CPyStatics[4194]; /* '__lshift__' */
    cpy_r_r195 = CPyStatics[4214]; /* '__rlshift__' */
    cpy_r_r196 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r197 = CPyStatics[4215]; /* '__rrshift__' */
    cpy_r_r198 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r199 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r200 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r201 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r202 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r203 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r204 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r205 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r206 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r207 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r208 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r209 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r210 = CPyDict_Build(20, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188, cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192, cpy_r_r193, cpy_r_r194, cpy_r_r195, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 55, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyStatic_operators___reverse_op_methods = cpy_r_r210;
    CPy_INCREF(CPyStatic_operators___reverse_op_methods);
    cpy_r_r211 = CPyStatic_operators___globals;
    cpy_r_r212 = CPyStatics[4216]; /* 'reverse_op_methods' */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_r211, cpy_r_r212, cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 55, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r215 = CPyStatic_operators___reverse_op_methods;
    if (likely(cpy_r_r215 != NULL)) goto CPyL65;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 78, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r217 = CPyDict_ValuesView(cpy_r_r215);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 78, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r218 = PySet_New(cpy_r_r217);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 78, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyStatic_operators___reverse_op_method_names = cpy_r_r218;
    CPy_INCREF(CPyStatic_operators___reverse_op_method_names);
    cpy_r_r219 = CPyStatic_operators___globals;
    cpy_r_r220 = CPyStatics[4217]; /* 'reverse_op_method_names' */
    cpy_r_r221 = CPyDict_SetItem(cpy_r_r219, cpy_r_r220, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 78, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r223 = CPyStatics[1184]; /* '__add__' */
    cpy_r_r224 = CPyStatics[4183]; /* '__sub__' */
    cpy_r_r225 = CPyStatics[1196]; /* '__mul__' */
    cpy_r_r226 = CPyStatics[4184]; /* '__truediv__' */
    cpy_r_r227 = CPyStatics[4185]; /* '__mod__' */
    cpy_r_r228 = CPyStatics[4187]; /* '__divmod__' */
    cpy_r_r229 = CPyStatics[4188]; /* '__floordiv__' */
    cpy_r_r230 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r231 = CPyStatics[4190]; /* '__matmul__' */
    cpy_r_r232 = CPyStatics[4191]; /* '__and__' */
    cpy_r_r233 = CPyStatics[4192]; /* '__or__' */
    cpy_r_r234 = CPyStatics[4193]; /* '__xor__' */
    cpy_r_r235 = CPyStatics[4194]; /* '__lshift__' */
    cpy_r_r236 = CPyStatics[4195]; /* '__rshift__' */
    cpy_r_r237 = PySet_New(NULL);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r238 = PySet_Add(cpy_r_r237, cpy_r_r223);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r240 = PySet_Add(cpy_r_r237, cpy_r_r224);
    cpy_r_r241 = cpy_r_r240 >= 0;
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r242 = PySet_Add(cpy_r_r237, cpy_r_r225);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r244 = PySet_Add(cpy_r_r237, cpy_r_r226);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r246 = PySet_Add(cpy_r_r237, cpy_r_r227);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r248 = PySet_Add(cpy_r_r237, cpy_r_r228);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r250 = PySet_Add(cpy_r_r237, cpy_r_r229);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r252 = PySet_Add(cpy_r_r237, cpy_r_r230);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r254 = PySet_Add(cpy_r_r237, cpy_r_r231);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r256 = PySet_Add(cpy_r_r237, cpy_r_r232);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r258 = PySet_Add(cpy_r_r237, cpy_r_r233);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r260 = PySet_Add(cpy_r_r237, cpy_r_r234);
    cpy_r_r261 = cpy_r_r260 >= 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r262 = PySet_Add(cpy_r_r237, cpy_r_r235);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    cpy_r_r264 = PySet_Add(cpy_r_r237, cpy_r_r236);
    cpy_r_r265 = cpy_r_r264 >= 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL119;
    }
    CPyStatic_operators___op_methods_that_shortcut = cpy_r_r237;
    CPy_INCREF(CPyStatic_operators___op_methods_that_shortcut);
    cpy_r_r266 = CPyStatic_operators___globals;
    cpy_r_r267 = CPyStatics[4218]; /* 'op_methods_that_shortcut' */
    cpy_r_r268 = CPyDict_SetItem(cpy_r_r266, cpy_r_r267, cpy_r_r237);
    CPy_DECREF(cpy_r_r237);
    cpy_r_r269 = cpy_r_r268 >= 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 83, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r270 = PyDict_New();
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r271 = CPyStatic_operators___reverse_op_methods;
    if (unlikely(cpy_r_r271 == NULL)) {
        goto CPyL120;
    } else
        goto CPyL88;
CPyL86: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r272 = 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL88: ;
    cpy_r_r273 = 0;
    cpy_r_r274 = PyDict_Size(cpy_r_r271);
    cpy_r_r275 = cpy_r_r274 << 1;
    cpy_r_r276 = CPyDict_GetItemsIter(cpy_r_r271);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL121;
    }
CPyL89: ;
    cpy_r_r277 = CPyDict_NextItem(cpy_r_r276, cpy_r_r273);
    cpy_r_r278 = cpy_r_r277.f1;
    cpy_r_r273 = cpy_r_r278;
    cpy_r_r279 = cpy_r_r277.f0;
    if (!cpy_r_r279) goto CPyL122;
    cpy_r_r280 = cpy_r_r277.f2;
    CPy_INCREF(cpy_r_r280);
    cpy_r_r281 = cpy_r_r277.f3;
    CPy_INCREF(cpy_r_r281);
    CPy_DECREF(cpy_r_r277.f2);
    CPy_DECREF(cpy_r_r277.f3);
    if (likely(PyUnicode_Check(cpy_r_r280)))
        cpy_r_r282 = cpy_r_r280;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals, "str", cpy_r_r280);
        goto CPyL123;
    }
    if (likely(PyUnicode_Check(cpy_r_r281)))
        cpy_r_r283 = cpy_r_r281;
    else {
        CPy_TypeErrorTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals, "str", cpy_r_r281);
        goto CPyL124;
    }
    cpy_r_n = cpy_r_r282;
    cpy_r_m = cpy_r_r283;
    cpy_r_r284 = CPyDict_SetItem(cpy_r_r270, cpy_r_m, cpy_r_n);
    CPy_DECREF(cpy_r_m);
    CPy_DECREF(cpy_r_n);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL125;
    }
    cpy_r_r286 = CPyDict_CheckSize(cpy_r_r271, cpy_r_r275);
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL125;
    } else
        goto CPyL89;
CPyL94: ;
    cpy_r_r287 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL121;
    }
    CPyStatic_operators___normal_from_reverse_op = cpy_r_r270;
    CPy_INCREF(CPyStatic_operators___normal_from_reverse_op);
    cpy_r_r288 = CPyStatic_operators___globals;
    cpy_r_r289 = CPyStatics[4219]; /* 'normal_from_reverse_op' */
    cpy_r_r290 = CPyDict_SetItem(cpy_r_r288, cpy_r_r289, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r291 = cpy_r_r290 >= 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 100, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r292 = CPyStatic_operators___reverse_op_methods;
    if (likely(cpy_r_r292 != NULL)) goto CPyL99;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r293 = 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 101, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPy_Unreachable();
CPyL99: ;
    cpy_r_r294 = CPyDict_ValuesView(cpy_r_r292);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 101, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r295 = PySet_New(cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 101, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyStatic_operators___reverse_op_method_set = cpy_r_r295;
    CPy_INCREF(CPyStatic_operators___reverse_op_method_set);
    cpy_r_r296 = CPyStatic_operators___globals;
    cpy_r_r297 = CPyStatics[4220]; /* 'reverse_op_method_set' */
    cpy_r_r298 = CPyDict_SetItem(cpy_r_r296, cpy_r_r297, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 101, CPyStatic_operators___globals);
        goto CPyL105;
    }
    cpy_r_r300 = CPyStatics[1198]; /* '-' */
    cpy_r_r301 = CPyStatics[3359]; /* '__neg__' */
    cpy_r_r302 = CPyStatics[886]; /* '+' */
    cpy_r_r303 = CPyStatics[3361]; /* '__pos__' */
    cpy_r_r304 = CPyStatics[1602]; /* '~' */
    cpy_r_r305 = CPyStatics[3363]; /* '__invert__' */
    cpy_r_r306 = CPyDict_Build(3, cpy_r_r300, cpy_r_r301, cpy_r_r302, cpy_r_r303, cpy_r_r304, cpy_r_r305);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 103, CPyStatic_operators___globals);
        goto CPyL105;
    }
    CPyStatic_operators___unary_op_methods = cpy_r_r306;
    CPy_INCREF(CPyStatic_operators___unary_op_methods);
    cpy_r_r307 = CPyStatic_operators___globals;
    cpy_r_r308 = CPyStatics[4221]; /* 'unary_op_methods' */
    cpy_r_r309 = CPyDict_SetItem(cpy_r_r307, cpy_r_r308, cpy_r_r306);
    CPy_DECREF(cpy_r_r306);
    cpy_r_r310 = cpy_r_r309 >= 0;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("mypy/operators.py", "<module>", 103, CPyStatic_operators___globals);
        goto CPyL105;
    }
    return 1;
CPyL105: ;
    cpy_r_r311 = 2;
    return cpy_r_r311;
CPyL106: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL9;
CPyL107: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL105;
CPyL108: ;
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67.f2);
    CPy_DECREF(cpy_r_r67.f3);
    goto CPyL17;
CPyL109: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r71);
    goto CPyL105;
CPyL110: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r72);
    goto CPyL105;
CPyL111: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r66);
    goto CPyL105;
CPyL112: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL105;
CPyL113: ;
    CPy_DecRef(cpy_r_r118);
    goto CPyL105;
CPyL114: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL44;
CPyL115: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL105;
CPyL116: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL58;
CPyL117: ;
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r152);
    goto CPyL105;
CPyL118: ;
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_op);
    goto CPyL50;
CPyL119: ;
    CPy_DecRef(cpy_r_r237);
    goto CPyL105;
CPyL120: ;
    CPy_DecRef(cpy_r_r270);
    goto CPyL86;
CPyL121: ;
    CPy_DecRef(cpy_r_r270);
    goto CPyL105;
CPyL122: ;
    CPy_DECREF(cpy_r_r276);
    CPy_DECREF(cpy_r_r277.f2);
    CPy_DECREF(cpy_r_r277.f3);
    goto CPyL94;
CPyL123: ;
    CPy_DecRef(cpy_r_r270);
    CPy_DecRef(cpy_r_r276);
    CPy_DecRef(cpy_r_r281);
    goto CPyL105;
CPyL124: ;
    CPy_DecRef(cpy_r_r270);
    CPy_DecRef(cpy_r_r276);
    CPy_DecRef(cpy_r_r282);
    goto CPyL105;
CPyL125: ;
    CPy_DecRef(cpy_r_r270);
    CPy_DecRef(cpy_r_r276);
    goto CPyL105;
}
