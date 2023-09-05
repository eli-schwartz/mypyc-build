#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef int_opsmodule_methods[] = {
    {"int_binary_op", (PyCFunction)CPyPy_int_ops___int_binary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"int_unary_op", (PyCFunction)CPyPy_int_ops___int_unary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef int_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.int_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    int_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___int_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___int_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___int_ops_internal);
        return CPyModule_mypyc___primitives___int_ops_internal;
    }
    CPyModule_mypyc___primitives___int_ops_internal = PyModule_Create(&int_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___int_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___int_ops_internal, "__name__");
    CPyStatic_int_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___int_ops_internal);
    if (unlikely(CPyStatic_int_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_int_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___int_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___int_ops_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_int_ops___IntComparisonOpDescription);
    return NULL;
}

char CPyDef_int_ops___int_binary_op(PyObject *cpy_r_name, PyObject *cpy_r_c_function_name, PyObject *cpy_r_return_type, CPyTagged cpy_r_error_kind) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    if (cpy_r_return_type != NULL) goto CPyL17;
    cpy_r_r0 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 107, CPyStatic_int_ops___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_return_type = cpy_r_r0;
CPyL5: ;
    if (cpy_r_error_kind != CPY_INT_TAG) goto CPyL18;
    cpy_r_error_kind = 0;
CPyL7: ;
    cpy_r_r2 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL19;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 112, CPyStatic_int_ops___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r4 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 112, CPyStatic_int_ops___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r6 = PyList_New(2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 112, CPyStatic_int_ops___globals);
        goto CPyL21;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r8 = cpy_r_r2;
    cpy_r_r9 = cpy_r_r8 + 8;
    CPy_INCREF(cpy_r_r4);
    *(PyObject * *)cpy_r_r9 = cpy_r_r4;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_registry___binary_op(cpy_r_name, cpy_r_r6, cpy_r_return_type, cpy_r_c_function_name, cpy_r_error_kind, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_return_type);
    CPyTagged_DECREF(cpy_r_error_kind);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 110, CPyStatic_int_ops___globals);
        goto CPyL16;
    } else
        goto CPyL22;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL17: ;
    CPy_INCREF(cpy_r_return_type);
    goto CPyL5;
CPyL18: ;
    CPyTagged_INCREF(cpy_r_error_kind);
    goto CPyL7;
CPyL19: ;
    CPy_DecRef(cpy_r_return_type);
    CPyTagged_DecRef(cpy_r_error_kind);
    goto CPyL8;
CPyL20: ;
    CPy_DecRef(cpy_r_return_type);
    CPyTagged_DecRef(cpy_r_error_kind);
    goto CPyL11;
CPyL21: ;
    CPy_DecRef(cpy_r_return_type);
    CPyTagged_DecRef(cpy_r_error_kind);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL15;
}

PyObject *CPyPy_int_ops___int_binary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "c_function_name", "return_type", "error_kind", 0};
    static CPyArg_Parser parser = {"OO|OO:int_binary_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_c_function_name;
    PyObject *obj_return_type = NULL;
    PyObject *obj_error_kind = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_c_function_name, &obj_return_type, &obj_error_kind)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (obj_return_type == NULL) {
        arg_return_type = NULL;
    } else if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (obj_error_kind == NULL) {
        arg_error_kind = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    char retval = CPyDef_int_ops___int_binary_op(arg_name, arg_c_function_name, arg_return_type, arg_error_kind);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_binary_op", 104, CPyStatic_int_ops___globals);
    return NULL;
}

PyObject *CPyDef_int_ops___int_unary_op(PyObject *cpy_r_name, PyObject *cpy_r_c_function_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_unary_op", 158, CPyStatic_int_ops___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r2 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_unary_op", 159, CPyStatic_int_ops___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_registry___unary_op(cpy_r_name, cpy_r_r0, cpy_r_r2, cpy_r_c_function_name, 0, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_unary_op", 156, CPyStatic_int_ops___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_int_ops___int_unary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "c_function_name", 0};
    static CPyArg_Parser parser = {"OO:int_unary_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_c_function_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_c_function_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_int_ops___int_unary_op(arg_name, arg_c_function_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/int_ops.py", "int_unary_op", 155, CPyStatic_int_ops___globals);
    return NULL;
}

char CPyDef_int_ops_____top_level__(void) {
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
    tuple_T5OOOOO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    CPyPtr cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyPtr cpy_r_r135;
    CPyPtr cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyTagged cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyTagged cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyTagged cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyTagged cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    CPyTagged cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    CPyTagged cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    CPyTagged cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyTagged cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    CPyTagged cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    int32_t cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
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
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject **cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    int32_t cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    int32_t cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    int32_t cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    int32_t cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    int32_t cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    int32_t cpy_r_r317;
    char cpy_r_r318;
    PyObject **cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    int32_t cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    char cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    CPyPtr cpy_r_r332;
    CPyPtr cpy_r_r333;
    CPyPtr cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    char cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    char cpy_r_r350;
    PyObject *cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    CPyPtr cpy_r_r354;
    CPyPtr cpy_r_r355;
    CPyPtr cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    char cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    int32_t cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject **cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject **cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject **cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject **cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject **cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject **cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    int32_t cpy_r_r464;
    char cpy_r_r465;
    PyObject *cpy_r_r466;
    char cpy_r_r467;
    PyObject *cpy_r_r468;
    char cpy_r_r469;
    PyObject *cpy_r_r470;
    CPyPtr cpy_r_r471;
    CPyPtr cpy_r_r472;
    CPyPtr cpy_r_r473;
    PyObject *cpy_r_r474;
    char cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    char cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    int32_t cpy_r_r486;
    char cpy_r_r487;
    PyObject *cpy_r_r488;
    char cpy_r_r489;
    PyObject *cpy_r_r490;
    char cpy_r_r491;
    PyObject *cpy_r_r492;
    CPyPtr cpy_r_r493;
    CPyPtr cpy_r_r494;
    CPyPtr cpy_r_r495;
    PyObject *cpy_r_r496;
    char cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    char cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    int32_t cpy_r_r508;
    char cpy_r_r509;
    PyObject *cpy_r_r510;
    char cpy_r_r511;
    PyObject *cpy_r_r512;
    char cpy_r_r513;
    PyObject *cpy_r_r514;
    CPyPtr cpy_r_r515;
    CPyPtr cpy_r_r516;
    CPyPtr cpy_r_r517;
    PyObject *cpy_r_r518;
    char cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    char cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    int32_t cpy_r_r530;
    char cpy_r_r531;
    PyObject *cpy_r_r532;
    char cpy_r_r533;
    PyObject *cpy_r_r534;
    char cpy_r_r535;
    PyObject *cpy_r_r536;
    CPyPtr cpy_r_r537;
    CPyPtr cpy_r_r538;
    CPyPtr cpy_r_r539;
    PyObject *cpy_r_r540;
    char cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    char cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    int32_t cpy_r_r552;
    char cpy_r_r553;
    PyObject *cpy_r_r554;
    char cpy_r_r555;
    PyObject *cpy_r_r556;
    char cpy_r_r557;
    PyObject *cpy_r_r558;
    CPyPtr cpy_r_r559;
    CPyPtr cpy_r_r560;
    CPyPtr cpy_r_r561;
    PyObject *cpy_r_r562;
    char cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    char cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    int32_t cpy_r_r574;
    char cpy_r_r575;
    PyObject *cpy_r_r576;
    char cpy_r_r577;
    PyObject *cpy_r_r578;
    char cpy_r_r579;
    PyObject *cpy_r_r580;
    CPyPtr cpy_r_r581;
    CPyPtr cpy_r_r582;
    CPyPtr cpy_r_r583;
    PyObject *cpy_r_r584;
    char cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    char cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    int32_t cpy_r_r596;
    char cpy_r_r597;
    PyObject *cpy_r_r598;
    char cpy_r_r599;
    PyObject *cpy_r_r600;
    CPyPtr cpy_r_r601;
    CPyPtr cpy_r_r602;
    PyObject *cpy_r_r603;
    char cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    char cpy_r_r611;
    PyObject *cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject *cpy_r_r614;
    int32_t cpy_r_r615;
    char cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    CPyPtr cpy_r_r622;
    CPyPtr cpy_r_r623;
    PyObject *cpy_r_r624;
    char cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    char cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    int32_t cpy_r_r636;
    char cpy_r_r637;
    PyObject *cpy_r_r638;
    char cpy_r_r639;
    PyObject *cpy_r_r640;
    CPyPtr cpy_r_r641;
    CPyPtr cpy_r_r642;
    PyObject *cpy_r_r643;
    char cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    char cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    int32_t cpy_r_r655;
    char cpy_r_r656;
    PyObject *cpy_r_r657;
    char cpy_r_r658;
    PyObject *cpy_r_r659;
    CPyPtr cpy_r_r660;
    CPyPtr cpy_r_r661;
    PyObject *cpy_r_r662;
    char cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    char cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    int32_t cpy_r_r674;
    char cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    char cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    char cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    int32_t cpy_r_r689;
    char cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    char cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    char cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    int32_t cpy_r_r704;
    char cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    char cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    char cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    PyObject *cpy_r_r718;
    int32_t cpy_r_r719;
    char cpy_r_r720;
    char cpy_r_r721;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", -1, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_int_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 11, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10263]; /* ('NamedTuple',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_int_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 13, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10264]; /* ('ERR_ALWAYS', 'ERR_MAGIC', 'ERR_MAGIC_OVERLAPPING',
                                      'ERR_NEVER', 'ComparisonOp') */
    cpy_r_r14 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r15 = CPyStatic_int_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 15, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10265]; /* ('RType', 'bit_rprimitive', 'bool_rprimitive',
                                      'c_pyssize_t_rprimitive', 'float_rprimitive',
                                      'int16_rprimitive', 'int32_rprimitive',
                                      'int64_rprimitive', 'int_rprimitive',
                                      'object_rprimitive', 'str_rprimitive', 'void_rtype') */
    cpy_r_r18 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r19 = CPyStatic_int_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 16, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10266]; /* ('CFunctionDescription', 'binary_op', 'custom_op',
                                      'function_op', 'load_address_op', 'unary_op') */
    cpy_r_r22 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r23 = CPyStatic_int_ops___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 30, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r26 = CPyStatics[6454]; /* 'mypy_extensions.i64' */
    cpy_r_r27 = CPyStatics[6455]; /* 'mypy_extensions.i32' */
    cpy_r_r28 = CPyStatics[6456]; /* 'mypy_extensions.i16' */
    cpy_r_r29 = CPyStatics[6457]; /* 'mypy_extensions.u8' */
    cpy_r_r30.f0 = cpy_r_r25;
    cpy_r_r30.f1 = cpy_r_r26;
    cpy_r_r30.f2 = cpy_r_r27;
    cpy_r_r30.f3 = cpy_r_r28;
    cpy_r_r30.f4 = cpy_r_r29;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_INCREF(cpy_r_r30.f2);
    CPy_INCREF(cpy_r_r30.f3);
    CPy_INCREF(cpy_r_r30.f4);
    cpy_r_r31 = PyTuple_New(5);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10776 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp10776);
    PyObject *__tmp10777 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp10777);
    PyObject *__tmp10778 = cpy_r_r30.f2;
    PyTuple_SET_ITEM(cpy_r_r31, 2, __tmp10778);
    PyObject *__tmp10779 = cpy_r_r30.f3;
    PyTuple_SET_ITEM(cpy_r_r31, 3, __tmp10779);
    PyObject *__tmp10780 = cpy_r_r30.f4;
    PyTuple_SET_ITEM(cpy_r_r31, 4, __tmp10780);
    cpy_r_r32 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 41, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
CPyL9: ;
    cpy_r_r33 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r33 == NULL) goto CPyL308;
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 41, CPyStatic_int_ops___globals, "str", cpy_r_r33);
        goto CPyL309;
    }
    cpy_r_r35 = CPyStatic_int_ops___globals;
    cpy_r_r36 = CPyStatics[8838]; /* 'int_name' */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 41, CPyStatic_int_ops___globals);
        goto CPyL309;
    }
    cpy_r_r39 = CPyStatic_int_ops___globals;
    cpy_r_r40 = CPyStatics[8838]; /* 'int_name' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 54, CPyStatic_int_ops___globals);
        goto CPyL309;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 54, CPyStatic_int_ops___globals, "str", cpy_r_r41);
        goto CPyL309;
    }
    cpy_r_r43 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL310;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 54, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r45 = CPyStatics[8839]; /* 'PyLong_Type' */
    cpy_r_r46 = CPyDef_registry___load_address_op(cpy_r_r42, cpy_r_r43, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 54, CPyStatic_int_ops___globals);
        goto CPyL309;
    } else
        goto CPyL311;
CPyL18: ;
    cpy_r_r47 = CPyStatic_int_ops___globals;
    cpy_r_r48 = CPyStatics[8838]; /* 'int_name' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 58, CPyStatic_int_ops___globals);
        goto CPyL309;
    }
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 58, CPyStatic_int_ops___globals, "str", cpy_r_r49);
        goto CPyL309;
    }
    cpy_r_r51 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r51 == NULL)) {
        goto CPyL312;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 59, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r53 = PyList_New(1);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 59, CPyStatic_int_ops___globals);
        goto CPyL313;
    }
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    CPy_INCREF(cpy_r_r51);
    *(PyObject * *)cpy_r_r55 = cpy_r_r51;
    cpy_r_r56 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r56 == NULL)) {
        goto CPyL314;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 60, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r58 = CPyStatics[8840]; /* 'CPyTagged_FromFloat' */
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = 2;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_registry___function_op(cpy_r_r50, cpy_r_r53, cpy_r_r56, cpy_r_r58, 2, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 57, CPyStatic_int_ops___globals);
        goto CPyL309;
    } else
        goto CPyL315;
CPyL28: ;
    cpy_r_r67 = CPyStatic_int_ops___globals;
    cpy_r_r68 = CPyStatics[8838]; /* 'int_name' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 67, CPyStatic_int_ops___globals);
        goto CPyL309;
    }
    if (likely(PyUnicode_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 67, CPyStatic_int_ops___globals, "str", cpy_r_r69);
        goto CPyL309;
    }
    cpy_r_r71 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL316;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 68, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r73 = PyList_New(1);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 68, CPyStatic_int_ops___globals);
        goto CPyL317;
    }
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r73)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    CPy_INCREF(cpy_r_r71);
    *(PyObject * *)cpy_r_r75 = cpy_r_r71;
    cpy_r_r76 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r76 == NULL)) {
        goto CPyL318;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 69, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r78 = CPyStatics[8841]; /* 'CPyLong_FromStr' */
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = NULL;
    cpy_r_r83 = NULL;
    cpy_r_r84 = 2;
    cpy_r_r85 = CPY_INT_TAG;
    cpy_r_r86 = CPyDef_registry___function_op(cpy_r_r70, cpy_r_r73, cpy_r_r76, cpy_r_r78, 2, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 66, CPyStatic_int_ops___globals);
        goto CPyL309;
    } else
        goto CPyL319;
CPyL38: ;
    cpy_r_r87 = CPyStatic_int_ops___globals;
    cpy_r_r88 = CPyStatics[8838]; /* 'int_name' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 76, CPyStatic_int_ops___globals);
        goto CPyL309;
    }
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 76, CPyStatic_int_ops___globals, "str", cpy_r_r89);
        goto CPyL309;
    }
    cpy_r_r91 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r91 == NULL)) {
        goto CPyL320;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 77, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r93 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r93 == NULL)) {
        goto CPyL321;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 77, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r95 = PyList_New(2);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 77, CPyStatic_int_ops___globals);
        goto CPyL322;
    }
    cpy_r_r96 = (CPyPtr)&((PyListObject *)cpy_r_r95)->ob_item;
    cpy_r_r97 = *(CPyPtr *)cpy_r_r96;
    CPy_INCREF(cpy_r_r91);
    *(PyObject * *)cpy_r_r97 = cpy_r_r91;
    cpy_r_r98 = cpy_r_r97 + 8;
    CPy_INCREF(cpy_r_r93);
    *(PyObject * *)cpy_r_r98 = cpy_r_r93;
    cpy_r_r99 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r99 == NULL)) {
        goto CPyL323;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 78, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r101 = CPyStatics[8842]; /* 'CPyLong_FromStrWithBase' */
    cpy_r_r102 = NULL;
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = 2;
    cpy_r_r108 = CPY_INT_TAG;
    cpy_r_r109 = CPyDef_registry___function_op(cpy_r_r90, cpy_r_r95, cpy_r_r99, cpy_r_r101, 2, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 75, CPyStatic_int_ops___globals);
        goto CPyL309;
    } else
        goto CPyL324;
CPyL51: ;
    cpy_r_r110 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 41, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r111 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r112 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r112 != NULL)) goto CPyL55;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 86, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r114 = PyList_New(1);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 86, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r115 = (CPyPtr)&((PyListObject *)cpy_r_r114)->ob_item;
    cpy_r_r116 = *(CPyPtr *)cpy_r_r115;
    CPy_INCREF(cpy_r_r112);
    *(PyObject * *)cpy_r_r116 = cpy_r_r112;
    cpy_r_r117 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r117 == NULL)) {
        goto CPyL325;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 87, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r119 = CPyStatics[8843]; /* 'CPyTagged_Str' */
    cpy_r_r120 = NULL;
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = 2;
    cpy_r_r126 = CPyDef_registry___function_op(cpy_r_r111, cpy_r_r114, cpy_r_r117, cpy_r_r119, 2, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, 4);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 84, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r127 = CPyStatic_int_ops___globals;
    cpy_r_r128 = CPyStatics[8325]; /* 'int_to_str_op' */
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r127, cpy_r_r128, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 84, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r131 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r132 = CPyStatic_rtypes___bool_rprimitive;
    if (likely(cpy_r_r132 != NULL)) goto CPyL64;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 96, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r134 = PyList_New(1);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 96, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r135 = (CPyPtr)&((PyListObject *)cpy_r_r134)->ob_item;
    cpy_r_r136 = *(CPyPtr *)cpy_r_r135;
    CPy_INCREF(cpy_r_r132);
    *(PyObject * *)cpy_r_r136 = cpy_r_r132;
    cpy_r_r137 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r137 == NULL)) {
        goto CPyL326;
    } else
        goto CPyL68;
CPyL66: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 97, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r139 = CPyStatics[8844]; /* 'CPyBool_Str' */
    cpy_r_r140 = NULL;
    cpy_r_r141 = NULL;
    cpy_r_r142 = NULL;
    cpy_r_r143 = NULL;
    cpy_r_r144 = NULL;
    cpy_r_r145 = 2;
    cpy_r_r146 = CPyDef_registry___function_op(cpy_r_r131, cpy_r_r134, cpy_r_r137, cpy_r_r139, 2, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143, cpy_r_r144, cpy_r_r145, 6);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 94, CPyStatic_int_ops___globals);
        goto CPyL307;
    } else
        goto CPyL327;
CPyL69: ;
    cpy_r_r147 = CPyStatics[886]; /* '+' */
    cpy_r_r148 = CPyStatics[8845]; /* 'CPyTagged_Add' */
    cpy_r_r149 = NULL;
    cpy_r_r150 = CPY_INT_TAG;
    cpy_r_r151 = CPyDef_int_ops___int_binary_op(cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 122, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r152 = CPyStatics[1198]; /* '-' */
    cpy_r_r153 = CPyStatics[8846]; /* 'CPyTagged_Subtract' */
    cpy_r_r154 = NULL;
    cpy_r_r155 = CPY_INT_TAG;
    cpy_r_r156 = CPyDef_int_ops___int_binary_op(cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 123, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r157 = CPyStatics[282]; /* '*' */
    cpy_r_r158 = CPyStatics[8847]; /* 'CPyTagged_Multiply' */
    cpy_r_r159 = NULL;
    cpy_r_r160 = CPY_INT_TAG;
    cpy_r_r161 = CPyDef_int_ops___int_binary_op(cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 124, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r162 = CPyStatics[1596]; /* '&' */
    cpy_r_r163 = CPyStatics[8848]; /* 'CPyTagged_And' */
    cpy_r_r164 = NULL;
    cpy_r_r165 = CPY_INT_TAG;
    cpy_r_r166 = CPyDef_int_ops___int_binary_op(cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 125, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r167 = CPyStatics[885]; /* '|' */
    cpy_r_r168 = CPyStatics[8849]; /* 'CPyTagged_Or' */
    cpy_r_r169 = NULL;
    cpy_r_r170 = CPY_INT_TAG;
    cpy_r_r171 = CPyDef_int_ops___int_binary_op(cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170);
    if (unlikely(cpy_r_r171 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 126, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r172 = CPyStatics[1597]; /* '^' */
    cpy_r_r173 = CPyStatics[8850]; /* 'CPyTagged_Xor' */
    cpy_r_r174 = NULL;
    cpy_r_r175 = CPY_INT_TAG;
    cpy_r_r176 = CPyDef_int_ops___int_binary_op(cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175);
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 127, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r177 = CPyStatics[1595]; /* '//' */
    cpy_r_r178 = CPyStatics[8851]; /* 'CPyTagged_FloorDivide' */
    cpy_r_r179 = NULL;
    cpy_r_r180 = CPyDef_int_ops___int_binary_op(cpy_r_r177, cpy_r_r178, cpy_r_r179, 2);
    if (unlikely(cpy_r_r180 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 130, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r181 = CPyStatics[1183]; /* '%' */
    cpy_r_r182 = CPyStatics[8852]; /* 'CPyTagged_Remainder' */
    cpy_r_r183 = NULL;
    cpy_r_r184 = CPyDef_int_ops___int_binary_op(cpy_r_r181, cpy_r_r182, cpy_r_r183, 2);
    if (unlikely(cpy_r_r184 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 131, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r185 = CPyStatics[1599]; /* '>>' */
    cpy_r_r186 = CPyStatics[8853]; /* 'CPyTagged_Rshift' */
    cpy_r_r187 = NULL;
    cpy_r_r188 = CPyDef_int_ops___int_binary_op(cpy_r_r185, cpy_r_r186, cpy_r_r187, 2);
    if (unlikely(cpy_r_r188 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 133, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r189 = CPyStatics[1598]; /* '<<' */
    cpy_r_r190 = CPyStatics[8854]; /* 'CPyTagged_Lshift' */
    cpy_r_r191 = NULL;
    cpy_r_r192 = CPyDef_int_ops___int_binary_op(cpy_r_r189, cpy_r_r190, cpy_r_r191, 2);
    if (unlikely(cpy_r_r192 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 134, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r193 = CPyStatics[1594]; /* '/' */
    cpy_r_r194 = CPyStatics[8855]; /* 'CPyTagged_TrueDivide' */
    cpy_r_r195 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r195 != NULL)) goto CPyL82;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r196 = 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 137, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r197 = CPyDef_int_ops___int_binary_op(cpy_r_r193, cpy_r_r194, cpy_r_r195, 8);
    if (unlikely(cpy_r_r197 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 136, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r198 = CPyStatics[8448]; /* '+=' */
    cpy_r_r199 = CPyStatics[8845]; /* 'CPyTagged_Add' */
    cpy_r_r200 = NULL;
    cpy_r_r201 = CPY_INT_TAG;
    cpy_r_r202 = CPyDef_int_ops___int_binary_op(cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 143, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r203 = CPyStatics[8449]; /* '-=' */
    cpy_r_r204 = CPyStatics[8846]; /* 'CPyTagged_Subtract' */
    cpy_r_r205 = NULL;
    cpy_r_r206 = CPY_INT_TAG;
    cpy_r_r207 = CPyDef_int_ops___int_binary_op(cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 144, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r208 = CPyStatics[8450]; /* '*=' */
    cpy_r_r209 = CPyStatics[8847]; /* 'CPyTagged_Multiply' */
    cpy_r_r210 = NULL;
    cpy_r_r211 = CPY_INT_TAG;
    cpy_r_r212 = CPyDef_int_ops___int_binary_op(cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 145, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r213 = CPyStatics[8453]; /* '&=' */
    cpy_r_r214 = CPyStatics[8848]; /* 'CPyTagged_And' */
    cpy_r_r215 = NULL;
    cpy_r_r216 = CPY_INT_TAG;
    cpy_r_r217 = CPyDef_int_ops___int_binary_op(cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 146, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r218 = CPyStatics[8454]; /* '|=' */
    cpy_r_r219 = CPyStatics[8849]; /* 'CPyTagged_Or' */
    cpy_r_r220 = NULL;
    cpy_r_r221 = CPY_INT_TAG;
    cpy_r_r222 = CPyDef_int_ops___int_binary_op(cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 147, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r223 = CPyStatics[8455]; /* '^=' */
    cpy_r_r224 = CPyStatics[8850]; /* 'CPyTagged_Xor' */
    cpy_r_r225 = NULL;
    cpy_r_r226 = CPY_INT_TAG;
    cpy_r_r227 = CPyDef_int_ops___int_binary_op(cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r227 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 148, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r228 = CPyStatics[8451]; /* '//=' */
    cpy_r_r229 = CPyStatics[8851]; /* 'CPyTagged_FloorDivide' */
    cpy_r_r230 = NULL;
    cpy_r_r231 = CPyDef_int_ops___int_binary_op(cpy_r_r228, cpy_r_r229, cpy_r_r230, 2);
    if (unlikely(cpy_r_r231 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 149, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r232 = CPyStatics[8452]; /* '%=' */
    cpy_r_r233 = CPyStatics[8852]; /* 'CPyTagged_Remainder' */
    cpy_r_r234 = NULL;
    cpy_r_r235 = CPyDef_int_ops___int_binary_op(cpy_r_r232, cpy_r_r233, cpy_r_r234, 2);
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 150, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r236 = CPyStatics[8457]; /* '>>=' */
    cpy_r_r237 = CPyStatics[8853]; /* 'CPyTagged_Rshift' */
    cpy_r_r238 = NULL;
    cpy_r_r239 = CPyDef_int_ops___int_binary_op(cpy_r_r236, cpy_r_r237, cpy_r_r238, 2);
    if (unlikely(cpy_r_r239 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 151, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r240 = CPyStatics[8456]; /* '<<=' */
    cpy_r_r241 = CPyStatics[8854]; /* 'CPyTagged_Lshift' */
    cpy_r_r242 = NULL;
    cpy_r_r243 = CPyDef_int_ops___int_binary_op(cpy_r_r240, cpy_r_r241, cpy_r_r242, 2);
    if (unlikely(cpy_r_r243 == 2)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 152, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r244 = CPyStatics[1198]; /* '-' */
    cpy_r_r245 = CPyStatics[8856]; /* 'CPyTagged_Negate' */
    cpy_r_r246 = CPyDef_int_ops___int_unary_op(cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 165, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r247 = CPyStatic_int_ops___globals;
    cpy_r_r248 = CPyStatics[8857]; /* 'int_neg_op' */
    cpy_r_r249 = CPyDict_SetItem(cpy_r_r247, cpy_r_r248, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r250 = cpy_r_r249 >= 0;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 165, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r251 = CPyStatics[1602]; /* '~' */
    cpy_r_r252 = CPyStatics[8858]; /* 'CPyTagged_Invert' */
    cpy_r_r253 = CPyDef_int_ops___int_unary_op(cpy_r_r251, cpy_r_r252);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 166, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r254 = CPyStatic_int_ops___globals;
    cpy_r_r255 = CPyStatics[8859]; /* 'int_invert_op' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r254, cpy_r_r255, cpy_r_r253);
    CPy_DECREF(cpy_r_r253);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 166, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r258 = CPyModule_typing;
    cpy_r_r259 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r260 = cpy_r_r258 != cpy_r_r259;
    if (cpy_r_r260) goto CPyL100;
    cpy_r_r261 = CPyStatics[21]; /* 'typing' */
    cpy_r_r262 = PyImport_Import(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPyModule_typing = cpy_r_r262;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r262);
CPyL100: ;
    cpy_r_r263 = PyImport_GetModuleDict();
    cpy_r_r264 = CPyStatics[21]; /* 'typing' */
    cpy_r_r265 = CPyDict_GetItem(cpy_r_r263, cpy_r_r264);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r266 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r267 = CPyObject_GetAttr(cpy_r_r265, cpy_r_r266);
    CPy_DECREF(cpy_r_r265);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r268 = PyTuple_Pack(1, cpy_r_r267);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r269 = CPyModule_typing;
    cpy_r_r270 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r271 = cpy_r_r269 != cpy_r_r270;
    if (cpy_r_r271) goto CPyL106;
    cpy_r_r272 = CPyStatics[21]; /* 'typing' */
    cpy_r_r273 = PyImport_Import(cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL328;
    }
    CPyModule_typing = cpy_r_r273;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r273);
CPyL106: ;
    cpy_r_r274 = PyImport_GetModuleDict();
    cpy_r_r275 = CPyStatics[21]; /* 'typing' */
    cpy_r_r276 = CPyDict_GetItem(cpy_r_r274, cpy_r_r275);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL328;
    }
    cpy_r_r277 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r278 = CPyObject_GetAttr(cpy_r_r276, cpy_r_r277);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL328;
    }
    cpy_r_r279 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r280 = PyObject_HasAttr(cpy_r_r278, cpy_r_r279);
    if (!cpy_r_r280) goto CPyL113;
    cpy_r_r281 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r282 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r283 = CPyObject_GetAttr(cpy_r_r278, cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL329;
    }
    PyObject *cpy_r_r284[2] = {cpy_r_r281, cpy_r_r268};
    cpy_r_r285 = (PyObject **)&cpy_r_r284;
    cpy_r_r286 = _PyObject_Vectorcall(cpy_r_r283, cpy_r_r285, 2, 0);
    CPy_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL329;
    }
    if (likely(PyDict_Check(cpy_r_r286)))
        cpy_r_r287 = cpy_r_r286;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals, "dict", cpy_r_r286);
        goto CPyL329;
    }
    cpy_r_r288 = cpy_r_r287;
    goto CPyL115;
CPyL113: ;
    cpy_r_r289 = PyDict_New();
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL329;
    }
    cpy_r_r288 = cpy_r_r289;
CPyL115: ;
    cpy_r_r290 = PyDict_New();
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL330;
    }
    cpy_r_r291 = (PyObject *)&PyLong_Type;
    cpy_r_r292 = CPyStatics[8861]; /* 'binary_op_variant' */
    cpy_r_r293 = CPyDict_SetItem(cpy_r_r290, cpy_r_r292, cpy_r_r291);
    cpy_r_r294 = cpy_r_r293 >= 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 180, CPyStatic_int_ops___globals);
        goto CPyL331;
    }
    cpy_r_r295 = (PyObject *)&PyType_Type;
    cpy_r_r296 = CPyStatics[8862]; /* 'c_func_description' */
    cpy_r_r297 = CPyDict_SetItem(cpy_r_r290, cpy_r_r296, cpy_r_r295);
    cpy_r_r298 = cpy_r_r297 >= 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 181, CPyStatic_int_ops___globals);
        goto CPyL331;
    }
    cpy_r_r299 = (PyObject *)&PyBool_Type;
    cpy_r_r300 = CPyStatics[8863]; /* 'c_func_negated' */
    cpy_r_r301 = CPyDict_SetItem(cpy_r_r290, cpy_r_r300, cpy_r_r299);
    cpy_r_r302 = cpy_r_r301 >= 0;
    if (unlikely(!cpy_r_r302)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 182, CPyStatic_int_ops___globals);
        goto CPyL331;
    }
    cpy_r_r303 = (PyObject *)&PyBool_Type;
    cpy_r_r304 = CPyStatics[8864]; /* 'c_func_swap_operands' */
    cpy_r_r305 = CPyDict_SetItem(cpy_r_r290, cpy_r_r304, cpy_r_r303);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 183, CPyStatic_int_ops___globals);
        goto CPyL331;
    }
    cpy_r_r307 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r308 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r309 = CPyDict_SetItem(cpy_r_r288, cpy_r_r308, cpy_r_r290);
    CPy_DECREF(cpy_r_r290);
    cpy_r_r310 = cpy_r_r309 >= 0;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL330;
    }
    cpy_r_r311 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r312 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r313 = CPyDict_SetItem(cpy_r_r288, cpy_r_r312, cpy_r_r311);
    cpy_r_r314 = cpy_r_r313 >= 0;
    if (unlikely(!cpy_r_r314)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL330;
    }
    cpy_r_r315 = CPyStatics[8259]; /* 'mypyc.primitives.int_ops' */
    cpy_r_r316 = CPyStatics[619]; /* '__module__' */
    cpy_r_r317 = CPyDict_SetItem(cpy_r_r288, cpy_r_r316, cpy_r_r315);
    cpy_r_r318 = cpy_r_r317 >= 0;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL330;
    }
    PyObject *cpy_r_r319[3] = {cpy_r_r307, cpy_r_r268, cpy_r_r288};
    cpy_r_r320 = (PyObject **)&cpy_r_r319;
    cpy_r_r321 = _PyObject_Vectorcall(cpy_r_r278, cpy_r_r320, 3, 0);
    CPy_DECREF(cpy_r_r278);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL332;
    }
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r288);
    CPyType_int_ops___IntComparisonOpDescription = (PyTypeObject *)cpy_r_r321;
    CPy_INCREF(CPyType_int_ops___IntComparisonOpDescription);
    cpy_r_r322 = CPyStatic_int_ops___globals;
    cpy_r_r323 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r324 = CPyDict_SetItem(cpy_r_r322, cpy_r_r323, cpy_r_r321);
    CPy_DECREF(cpy_r_r321);
    cpy_r_r325 = cpy_r_r324 >= 0;
    if (unlikely(!cpy_r_r325)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 179, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r326 = (PyObject *)CPyType_int_ops___IntComparisonOpDescription;
    cpy_r_r327 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r327 != NULL)) goto CPyL128;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r328 = 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 188, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r329 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r329 != NULL)) goto CPyL131;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r330 = 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 188, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r331 = PyList_New(2);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 188, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r332 = (CPyPtr)&((PyListObject *)cpy_r_r331)->ob_item;
    cpy_r_r333 = *(CPyPtr *)cpy_r_r332;
    CPy_INCREF(cpy_r_r327);
    *(PyObject * *)cpy_r_r333 = cpy_r_r327;
    cpy_r_r334 = cpy_r_r333 + 8;
    CPy_INCREF(cpy_r_r329);
    *(PyObject * *)cpy_r_r334 = cpy_r_r329;
    cpy_r_r335 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r335 == NULL)) {
        goto CPyL333;
    } else
        goto CPyL135;
CPyL133: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r336 = 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 189, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r337 = CPyStatics[8865]; /* 'CPyTagged_IsEq_' */
    cpy_r_r338 = NULL;
    cpy_r_r339 = NULL;
    cpy_r_r340 = NULL;
    cpy_r_r341 = NULL;
    cpy_r_r342 = NULL;
    cpy_r_r343 = 2;
    cpy_r_r344 = CPyDef_registry___custom_op(cpy_r_r331, cpy_r_r335, cpy_r_r337, 0, cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342, cpy_r_r343);
    CPy_DECREF(cpy_r_r331);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 187, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r345 = CPyStatic_int_ops___globals;
    cpy_r_r346 = CPyStatics[8866]; /* 'int_equal_' */
    cpy_r_r347 = CPyDict_SetItem(cpy_r_r345, cpy_r_r346, cpy_r_r344);
    CPy_DECREF(cpy_r_r344);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 187, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r349 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r349 != NULL)) goto CPyL140;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r350 = 0;
    if (unlikely(!cpy_r_r350)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 196, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r351 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r351 != NULL)) goto CPyL143;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r352 = 0;
    if (unlikely(!cpy_r_r352)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 196, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL143: ;
    cpy_r_r353 = PyList_New(2);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 196, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r354 = (CPyPtr)&((PyListObject *)cpy_r_r353)->ob_item;
    cpy_r_r355 = *(CPyPtr *)cpy_r_r354;
    CPy_INCREF(cpy_r_r349);
    *(PyObject * *)cpy_r_r355 = cpy_r_r349;
    cpy_r_r356 = cpy_r_r355 + 8;
    CPy_INCREF(cpy_r_r351);
    *(PyObject * *)cpy_r_r356 = cpy_r_r351;
    cpy_r_r357 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r357 == NULL)) {
        goto CPyL334;
    } else
        goto CPyL147;
CPyL145: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r358 = 0;
    if (unlikely(!cpy_r_r358)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 197, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL147: ;
    cpy_r_r359 = CPyStatics[8867]; /* 'CPyTagged_IsLt_' */
    cpy_r_r360 = NULL;
    cpy_r_r361 = NULL;
    cpy_r_r362 = NULL;
    cpy_r_r363 = NULL;
    cpy_r_r364 = NULL;
    cpy_r_r365 = 2;
    cpy_r_r366 = CPyDef_registry___custom_op(cpy_r_r353, cpy_r_r357, cpy_r_r359, 0, cpy_r_r360, cpy_r_r361, cpy_r_r362, cpy_r_r363, cpy_r_r364, cpy_r_r365);
    CPy_DECREF(cpy_r_r353);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 195, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r367 = CPyStatic_int_ops___globals;
    cpy_r_r368 = CPyStatics[8868]; /* 'int_less_than_' */
    cpy_r_r369 = CPyDict_SetItem(cpy_r_r367, cpy_r_r368, cpy_r_r366);
    CPy_DECREF(cpy_r_r366);
    cpy_r_r370 = cpy_r_r369 >= 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 195, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r371 = CPyStatics[860]; /* '==' */
    cpy_r_r372 = CPyStatic_int_ops___globals;
    cpy_r_r373 = CPyStatics[8866]; /* 'int_equal_' */
    cpy_r_r374 = CPyDict_GetItem(cpy_r_r372, cpy_r_r373);
    if (unlikely(cpy_r_r374 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 205, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    if (likely(PyTuple_Check(cpy_r_r374)))
        cpy_r_r375 = cpy_r_r374;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 205, CPyStatic_int_ops___globals, "tuple", cpy_r_r374);
        goto CPyL307;
    }
    cpy_r_r376 = CPyStatic_int_ops___globals;
    cpy_r_r377 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r378 = CPyDict_GetItem(cpy_r_r376, cpy_r_r377);
    if (unlikely(cpy_r_r378 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 205, CPyStatic_int_ops___globals);
        goto CPyL335;
    }
    cpy_r_r379 = CPyStatics[9029]; /* 100 */
    cpy_r_r380 = 0 ? Py_True : Py_False;
    cpy_r_r381 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r382[4] = {cpy_r_r379, cpy_r_r375, cpy_r_r380, cpy_r_r381};
    cpy_r_r383 = (PyObject **)&cpy_r_r382;
    cpy_r_r384 = _PyObject_Vectorcall(cpy_r_r378, cpy_r_r383, 4, 0);
    CPy_DECREF(cpy_r_r378);
    if (unlikely(cpy_r_r384 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 205, CPyStatic_int_ops___globals);
        goto CPyL335;
    }
    CPy_DECREF(cpy_r_r375);
    if (likely(PyTuple_Check(cpy_r_r384)))
        cpy_r_r385 = cpy_r_r384;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 205, CPyStatic_int_ops___globals, "tuple", cpy_r_r384);
        goto CPyL307;
    }
    cpy_r_r386 = CPyStatics[863]; /* '!=' */
    cpy_r_r387 = CPyStatic_int_ops___globals;
    cpy_r_r388 = CPyStatics[8866]; /* 'int_equal_' */
    cpy_r_r389 = CPyDict_GetItem(cpy_r_r387, cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 206, CPyStatic_int_ops___globals);
        goto CPyL336;
    }
    if (likely(PyTuple_Check(cpy_r_r389)))
        cpy_r_r390 = cpy_r_r389;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 206, CPyStatic_int_ops___globals, "tuple", cpy_r_r389);
        goto CPyL336;
    }
    cpy_r_r391 = CPyStatic_int_ops___globals;
    cpy_r_r392 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r393 = CPyDict_GetItem(cpy_r_r391, cpy_r_r392);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 206, CPyStatic_int_ops___globals);
        goto CPyL337;
    }
    cpy_r_r394 = CPyStatics[9053]; /* 101 */
    cpy_r_r395 = 1 ? Py_True : Py_False;
    cpy_r_r396 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r397[4] = {cpy_r_r394, cpy_r_r390, cpy_r_r395, cpy_r_r396};
    cpy_r_r398 = (PyObject **)&cpy_r_r397;
    cpy_r_r399 = _PyObject_Vectorcall(cpy_r_r393, cpy_r_r398, 4, 0);
    CPy_DECREF(cpy_r_r393);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 206, CPyStatic_int_ops___globals);
        goto CPyL337;
    }
    CPy_DECREF(cpy_r_r390);
    if (likely(PyTuple_Check(cpy_r_r399)))
        cpy_r_r400 = cpy_r_r399;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 206, CPyStatic_int_ops___globals, "tuple", cpy_r_r399);
        goto CPyL336;
    }
    cpy_r_r401 = CPyStatics[2465]; /* '<' */
    cpy_r_r402 = CPyStatic_int_ops___globals;
    cpy_r_r403 = CPyStatics[8868]; /* 'int_less_than_' */
    cpy_r_r404 = CPyDict_GetItem(cpy_r_r402, cpy_r_r403);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 207, CPyStatic_int_ops___globals);
        goto CPyL338;
    }
    if (likely(PyTuple_Check(cpy_r_r404)))
        cpy_r_r405 = cpy_r_r404;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 207, CPyStatic_int_ops___globals, "tuple", cpy_r_r404);
        goto CPyL338;
    }
    cpy_r_r406 = CPyStatic_int_ops___globals;
    cpy_r_r407 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r408 = CPyDict_GetItem(cpy_r_r406, cpy_r_r407);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 207, CPyStatic_int_ops___globals);
        goto CPyL339;
    }
    cpy_r_r409 = CPyStatics[9054]; /* 102 */
    cpy_r_r410 = 0 ? Py_True : Py_False;
    cpy_r_r411 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r412[4] = {cpy_r_r409, cpy_r_r405, cpy_r_r410, cpy_r_r411};
    cpy_r_r413 = (PyObject **)&cpy_r_r412;
    cpy_r_r414 = _PyObject_Vectorcall(cpy_r_r408, cpy_r_r413, 4, 0);
    CPy_DECREF(cpy_r_r408);
    if (unlikely(cpy_r_r414 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 207, CPyStatic_int_ops___globals);
        goto CPyL339;
    }
    CPy_DECREF(cpy_r_r405);
    if (likely(PyTuple_Check(cpy_r_r414)))
        cpy_r_r415 = cpy_r_r414;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 207, CPyStatic_int_ops___globals, "tuple", cpy_r_r414);
        goto CPyL338;
    }
    cpy_r_r416 = CPyStatics[2470]; /* '<=' */
    cpy_r_r417 = CPyStatic_int_ops___globals;
    cpy_r_r418 = CPyStatics[8868]; /* 'int_less_than_' */
    cpy_r_r419 = CPyDict_GetItem(cpy_r_r417, cpy_r_r418);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 208, CPyStatic_int_ops___globals);
        goto CPyL340;
    }
    if (likely(PyTuple_Check(cpy_r_r419)))
        cpy_r_r420 = cpy_r_r419;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 208, CPyStatic_int_ops___globals, "tuple", cpy_r_r419);
        goto CPyL340;
    }
    cpy_r_r421 = CPyStatic_int_ops___globals;
    cpy_r_r422 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r423 = CPyDict_GetItem(cpy_r_r421, cpy_r_r422);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 208, CPyStatic_int_ops___globals);
        goto CPyL341;
    }
    cpy_r_r424 = CPyStatics[9056]; /* 104 */
    cpy_r_r425 = 1 ? Py_True : Py_False;
    cpy_r_r426 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r427[4] = {cpy_r_r424, cpy_r_r420, cpy_r_r425, cpy_r_r426};
    cpy_r_r428 = (PyObject **)&cpy_r_r427;
    cpy_r_r429 = _PyObject_Vectorcall(cpy_r_r423, cpy_r_r428, 4, 0);
    CPy_DECREF(cpy_r_r423);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 208, CPyStatic_int_ops___globals);
        goto CPyL341;
    }
    CPy_DECREF(cpy_r_r420);
    if (likely(PyTuple_Check(cpy_r_r429)))
        cpy_r_r430 = cpy_r_r429;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 208, CPyStatic_int_ops___globals, "tuple", cpy_r_r429);
        goto CPyL340;
    }
    cpy_r_r431 = CPyStatics[840]; /* '>' */
    cpy_r_r432 = CPyStatic_int_ops___globals;
    cpy_r_r433 = CPyStatics[8868]; /* 'int_less_than_' */
    cpy_r_r434 = CPyDict_GetItem(cpy_r_r432, cpy_r_r433);
    if (unlikely(cpy_r_r434 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 209, CPyStatic_int_ops___globals);
        goto CPyL342;
    }
    if (likely(PyTuple_Check(cpy_r_r434)))
        cpy_r_r435 = cpy_r_r434;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 209, CPyStatic_int_ops___globals, "tuple", cpy_r_r434);
        goto CPyL342;
    }
    cpy_r_r436 = CPyStatic_int_ops___globals;
    cpy_r_r437 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r438 = CPyDict_GetItem(cpy_r_r436, cpy_r_r437);
    if (unlikely(cpy_r_r438 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 209, CPyStatic_int_ops___globals);
        goto CPyL343;
    }
    cpy_r_r439 = CPyStatics[9055]; /* 103 */
    cpy_r_r440 = 0 ? Py_True : Py_False;
    cpy_r_r441 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r442[4] = {cpy_r_r439, cpy_r_r435, cpy_r_r440, cpy_r_r441};
    cpy_r_r443 = (PyObject **)&cpy_r_r442;
    cpy_r_r444 = _PyObject_Vectorcall(cpy_r_r438, cpy_r_r443, 4, 0);
    CPy_DECREF(cpy_r_r438);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 209, CPyStatic_int_ops___globals);
        goto CPyL343;
    }
    CPy_DECREF(cpy_r_r435);
    if (likely(PyTuple_Check(cpy_r_r444)))
        cpy_r_r445 = cpy_r_r444;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 209, CPyStatic_int_ops___globals, "tuple", cpy_r_r444);
        goto CPyL342;
    }
    cpy_r_r446 = CPyStatics[2468]; /* '>=' */
    cpy_r_r447 = CPyStatic_int_ops___globals;
    cpy_r_r448 = CPyStatics[8868]; /* 'int_less_than_' */
    cpy_r_r449 = CPyDict_GetItem(cpy_r_r447, cpy_r_r448);
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 210, CPyStatic_int_ops___globals);
        goto CPyL344;
    }
    if (likely(PyTuple_Check(cpy_r_r449)))
        cpy_r_r450 = cpy_r_r449;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 210, CPyStatic_int_ops___globals, "tuple", cpy_r_r449);
        goto CPyL344;
    }
    cpy_r_r451 = CPyStatic_int_ops___globals;
    cpy_r_r452 = CPyStatics[8860]; /* 'IntComparisonOpDescription' */
    cpy_r_r453 = CPyDict_GetItem(cpy_r_r451, cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 210, CPyStatic_int_ops___globals);
        goto CPyL345;
    }
    cpy_r_r454 = CPyStatics[9057]; /* 105 */
    cpy_r_r455 = 1 ? Py_True : Py_False;
    cpy_r_r456 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r457[4] = {cpy_r_r454, cpy_r_r450, cpy_r_r455, cpy_r_r456};
    cpy_r_r458 = (PyObject **)&cpy_r_r457;
    cpy_r_r459 = _PyObject_Vectorcall(cpy_r_r453, cpy_r_r458, 4, 0);
    CPy_DECREF(cpy_r_r453);
    if (unlikely(cpy_r_r459 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 210, CPyStatic_int_ops___globals);
        goto CPyL345;
    }
    CPy_DECREF(cpy_r_r450);
    if (likely(PyTuple_Check(cpy_r_r459)))
        cpy_r_r460 = cpy_r_r459;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 210, CPyStatic_int_ops___globals, "tuple", cpy_r_r459);
        goto CPyL344;
    }
    cpy_r_r461 = CPyDict_Build(6, cpy_r_r371, cpy_r_r385, cpy_r_r386, cpy_r_r400, cpy_r_r401, cpy_r_r415, cpy_r_r416, cpy_r_r430, cpy_r_r431, cpy_r_r445, cpy_r_r446, cpy_r_r460);
    CPy_DECREF(cpy_r_r385);
    CPy_DECREF(cpy_r_r400);
    CPy_DECREF(cpy_r_r415);
    CPy_DECREF(cpy_r_r430);
    CPy_DECREF(cpy_r_r445);
    CPy_DECREF(cpy_r_r460);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 204, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r462 = CPyStatic_int_ops___globals;
    cpy_r_r463 = CPyStatics[8224]; /* 'int_comparison_op_mapping' */
    cpy_r_r464 = CPyDict_SetItem(cpy_r_r462, cpy_r_r463, cpy_r_r461);
    CPy_DECREF(cpy_r_r461);
    cpy_r_r465 = cpy_r_r464 >= 0;
    if (unlikely(!cpy_r_r465)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 204, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r466 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r466 != NULL)) goto CPyL184;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r467 = 0;
    if (unlikely(!cpy_r_r467)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 214, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL184: ;
    cpy_r_r468 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r468 != NULL)) goto CPyL187;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r469 = 0;
    if (unlikely(!cpy_r_r469)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 214, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL187: ;
    cpy_r_r470 = PyList_New(2);
    if (unlikely(cpy_r_r470 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 214, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r471 = (CPyPtr)&((PyListObject *)cpy_r_r470)->ob_item;
    cpy_r_r472 = *(CPyPtr *)cpy_r_r471;
    CPy_INCREF(cpy_r_r466);
    *(PyObject * *)cpy_r_r472 = cpy_r_r466;
    cpy_r_r473 = cpy_r_r472 + 8;
    CPy_INCREF(cpy_r_r468);
    *(PyObject * *)cpy_r_r473 = cpy_r_r468;
    cpy_r_r474 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r474 == NULL)) {
        goto CPyL346;
    } else
        goto CPyL191;
CPyL189: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r475 = 0;
    if (unlikely(!cpy_r_r475)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 215, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL191: ;
    cpy_r_r476 = CPyStatics[8869]; /* 'CPyInt64_Divide' */
    cpy_r_r477 = NULL;
    cpy_r_r478 = NULL;
    cpy_r_r479 = NULL;
    cpy_r_r480 = NULL;
    cpy_r_r481 = NULL;
    cpy_r_r482 = 2;
    cpy_r_r483 = CPyDef_registry___custom_op(cpy_r_r470, cpy_r_r474, cpy_r_r476, 8, cpy_r_r477, cpy_r_r478, cpy_r_r479, cpy_r_r480, cpy_r_r481, cpy_r_r482);
    CPy_DECREF(cpy_r_r470);
    if (unlikely(cpy_r_r483 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 213, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r484 = CPyStatic_int_ops___globals;
    cpy_r_r485 = CPyStatics[8421]; /* 'int64_divide_op' */
    cpy_r_r486 = CPyDict_SetItem(cpy_r_r484, cpy_r_r485, cpy_r_r483);
    CPy_DECREF(cpy_r_r483);
    cpy_r_r487 = cpy_r_r486 >= 0;
    if (unlikely(!cpy_r_r487)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 213, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r488 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r488 != NULL)) goto CPyL196;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r489 = 0;
    if (unlikely(!cpy_r_r489)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 221, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL196: ;
    cpy_r_r490 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r490 != NULL)) goto CPyL199;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r491 = 0;
    if (unlikely(!cpy_r_r491)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 221, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL199: ;
    cpy_r_r492 = PyList_New(2);
    if (unlikely(cpy_r_r492 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 221, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r493 = (CPyPtr)&((PyListObject *)cpy_r_r492)->ob_item;
    cpy_r_r494 = *(CPyPtr *)cpy_r_r493;
    CPy_INCREF(cpy_r_r488);
    *(PyObject * *)cpy_r_r494 = cpy_r_r488;
    cpy_r_r495 = cpy_r_r494 + 8;
    CPy_INCREF(cpy_r_r490);
    *(PyObject * *)cpy_r_r495 = cpy_r_r490;
    cpy_r_r496 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r496 == NULL)) {
        goto CPyL347;
    } else
        goto CPyL203;
CPyL201: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r497 = 0;
    if (unlikely(!cpy_r_r497)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 222, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL203: ;
    cpy_r_r498 = CPyStatics[8870]; /* 'CPyInt64_Remainder' */
    cpy_r_r499 = NULL;
    cpy_r_r500 = NULL;
    cpy_r_r501 = NULL;
    cpy_r_r502 = NULL;
    cpy_r_r503 = NULL;
    cpy_r_r504 = 2;
    cpy_r_r505 = CPyDef_registry___custom_op(cpy_r_r492, cpy_r_r496, cpy_r_r498, 8, cpy_r_r499, cpy_r_r500, cpy_r_r501, cpy_r_r502, cpy_r_r503, cpy_r_r504);
    CPy_DECREF(cpy_r_r492);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 220, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r506 = CPyStatic_int_ops___globals;
    cpy_r_r507 = CPyStatics[8424]; /* 'int64_mod_op' */
    cpy_r_r508 = CPyDict_SetItem(cpy_r_r506, cpy_r_r507, cpy_r_r505);
    CPy_DECREF(cpy_r_r505);
    cpy_r_r509 = cpy_r_r508 >= 0;
    if (unlikely(!cpy_r_r509)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 220, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r510 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r510 != NULL)) goto CPyL208;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r511 = 0;
    if (unlikely(!cpy_r_r511)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 228, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL208: ;
    cpy_r_r512 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r512 != NULL)) goto CPyL211;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r513 = 0;
    if (unlikely(!cpy_r_r513)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 228, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL211: ;
    cpy_r_r514 = PyList_New(2);
    if (unlikely(cpy_r_r514 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 228, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r515 = (CPyPtr)&((PyListObject *)cpy_r_r514)->ob_item;
    cpy_r_r516 = *(CPyPtr *)cpy_r_r515;
    CPy_INCREF(cpy_r_r510);
    *(PyObject * *)cpy_r_r516 = cpy_r_r510;
    cpy_r_r517 = cpy_r_r516 + 8;
    CPy_INCREF(cpy_r_r512);
    *(PyObject * *)cpy_r_r517 = cpy_r_r512;
    cpy_r_r518 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r518 == NULL)) {
        goto CPyL348;
    } else
        goto CPyL215;
CPyL213: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r519 = 0;
    if (unlikely(!cpy_r_r519)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 229, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL215: ;
    cpy_r_r520 = CPyStatics[8871]; /* 'CPyInt32_Divide' */
    cpy_r_r521 = NULL;
    cpy_r_r522 = NULL;
    cpy_r_r523 = NULL;
    cpy_r_r524 = NULL;
    cpy_r_r525 = NULL;
    cpy_r_r526 = 2;
    cpy_r_r527 = CPyDef_registry___custom_op(cpy_r_r514, cpy_r_r518, cpy_r_r520, 8, cpy_r_r521, cpy_r_r522, cpy_r_r523, cpy_r_r524, cpy_r_r525, cpy_r_r526);
    CPy_DECREF(cpy_r_r514);
    if (unlikely(cpy_r_r527 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 227, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r528 = CPyStatic_int_ops___globals;
    cpy_r_r529 = CPyStatics[8422]; /* 'int32_divide_op' */
    cpy_r_r530 = CPyDict_SetItem(cpy_r_r528, cpy_r_r529, cpy_r_r527);
    CPy_DECREF(cpy_r_r527);
    cpy_r_r531 = cpy_r_r530 >= 0;
    if (unlikely(!cpy_r_r531)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 227, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r532 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r532 != NULL)) goto CPyL220;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r533 = 0;
    if (unlikely(!cpy_r_r533)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 235, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL220: ;
    cpy_r_r534 = CPyStatic_rtypes___int32_rprimitive;
    if (likely(cpy_r_r534 != NULL)) goto CPyL223;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r535 = 0;
    if (unlikely(!cpy_r_r535)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 235, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL223: ;
    cpy_r_r536 = PyList_New(2);
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 235, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r537 = (CPyPtr)&((PyListObject *)cpy_r_r536)->ob_item;
    cpy_r_r538 = *(CPyPtr *)cpy_r_r537;
    CPy_INCREF(cpy_r_r532);
    *(PyObject * *)cpy_r_r538 = cpy_r_r532;
    cpy_r_r539 = cpy_r_r538 + 8;
    CPy_INCREF(cpy_r_r534);
    *(PyObject * *)cpy_r_r539 = cpy_r_r534;
    cpy_r_r540 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r540 == NULL)) {
        goto CPyL349;
    } else
        goto CPyL227;
CPyL225: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r541 = 0;
    if (unlikely(!cpy_r_r541)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 236, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL227: ;
    cpy_r_r542 = CPyStatics[8872]; /* 'CPyInt32_Remainder' */
    cpy_r_r543 = NULL;
    cpy_r_r544 = NULL;
    cpy_r_r545 = NULL;
    cpy_r_r546 = NULL;
    cpy_r_r547 = NULL;
    cpy_r_r548 = 2;
    cpy_r_r549 = CPyDef_registry___custom_op(cpy_r_r536, cpy_r_r540, cpy_r_r542, 8, cpy_r_r543, cpy_r_r544, cpy_r_r545, cpy_r_r546, cpy_r_r547, cpy_r_r548);
    CPy_DECREF(cpy_r_r536);
    if (unlikely(cpy_r_r549 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 234, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r550 = CPyStatic_int_ops___globals;
    cpy_r_r551 = CPyStatics[8425]; /* 'int32_mod_op' */
    cpy_r_r552 = CPyDict_SetItem(cpy_r_r550, cpy_r_r551, cpy_r_r549);
    CPy_DECREF(cpy_r_r549);
    cpy_r_r553 = cpy_r_r552 >= 0;
    if (unlikely(!cpy_r_r553)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 234, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r554 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r554 != NULL)) goto CPyL232;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r555 = 0;
    if (unlikely(!cpy_r_r555)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 242, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL232: ;
    cpy_r_r556 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r556 != NULL)) goto CPyL235;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r557 = 0;
    if (unlikely(!cpy_r_r557)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 242, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL235: ;
    cpy_r_r558 = PyList_New(2);
    if (unlikely(cpy_r_r558 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 242, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r559 = (CPyPtr)&((PyListObject *)cpy_r_r558)->ob_item;
    cpy_r_r560 = *(CPyPtr *)cpy_r_r559;
    CPy_INCREF(cpy_r_r554);
    *(PyObject * *)cpy_r_r560 = cpy_r_r554;
    cpy_r_r561 = cpy_r_r560 + 8;
    CPy_INCREF(cpy_r_r556);
    *(PyObject * *)cpy_r_r561 = cpy_r_r556;
    cpy_r_r562 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r562 == NULL)) {
        goto CPyL350;
    } else
        goto CPyL239;
CPyL237: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r563 = 0;
    if (unlikely(!cpy_r_r563)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 243, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL239: ;
    cpy_r_r564 = CPyStatics[8873]; /* 'CPyInt16_Divide' */
    cpy_r_r565 = NULL;
    cpy_r_r566 = NULL;
    cpy_r_r567 = NULL;
    cpy_r_r568 = NULL;
    cpy_r_r569 = NULL;
    cpy_r_r570 = 2;
    cpy_r_r571 = CPyDef_registry___custom_op(cpy_r_r558, cpy_r_r562, cpy_r_r564, 8, cpy_r_r565, cpy_r_r566, cpy_r_r567, cpy_r_r568, cpy_r_r569, cpy_r_r570);
    CPy_DECREF(cpy_r_r558);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 241, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r572 = CPyStatic_int_ops___globals;
    cpy_r_r573 = CPyStatics[8423]; /* 'int16_divide_op' */
    cpy_r_r574 = CPyDict_SetItem(cpy_r_r572, cpy_r_r573, cpy_r_r571);
    CPy_DECREF(cpy_r_r571);
    cpy_r_r575 = cpy_r_r574 >= 0;
    if (unlikely(!cpy_r_r575)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 241, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r576 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r576 != NULL)) goto CPyL244;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r577 = 0;
    if (unlikely(!cpy_r_r577)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 249, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r578 = CPyStatic_rtypes___int16_rprimitive;
    if (likely(cpy_r_r578 != NULL)) goto CPyL247;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r579 = 0;
    if (unlikely(!cpy_r_r579)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 249, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r580 = PyList_New(2);
    if (unlikely(cpy_r_r580 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 249, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r581 = (CPyPtr)&((PyListObject *)cpy_r_r580)->ob_item;
    cpy_r_r582 = *(CPyPtr *)cpy_r_r581;
    CPy_INCREF(cpy_r_r576);
    *(PyObject * *)cpy_r_r582 = cpy_r_r576;
    cpy_r_r583 = cpy_r_r582 + 8;
    CPy_INCREF(cpy_r_r578);
    *(PyObject * *)cpy_r_r583 = cpy_r_r578;
    cpy_r_r584 = CPyStatic_rtypes___int16_rprimitive;
    if (unlikely(cpy_r_r584 == NULL)) {
        goto CPyL351;
    } else
        goto CPyL251;
CPyL249: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int16_rprimitive\" was not set");
    cpy_r_r585 = 0;
    if (unlikely(!cpy_r_r585)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 250, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL251: ;
    cpy_r_r586 = CPyStatics[8874]; /* 'CPyInt16_Remainder' */
    cpy_r_r587 = NULL;
    cpy_r_r588 = NULL;
    cpy_r_r589 = NULL;
    cpy_r_r590 = NULL;
    cpy_r_r591 = NULL;
    cpy_r_r592 = 2;
    cpy_r_r593 = CPyDef_registry___custom_op(cpy_r_r580, cpy_r_r584, cpy_r_r586, 8, cpy_r_r587, cpy_r_r588, cpy_r_r589, cpy_r_r590, cpy_r_r591, cpy_r_r592);
    CPy_DECREF(cpy_r_r580);
    if (unlikely(cpy_r_r593 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 248, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r594 = CPyStatic_int_ops___globals;
    cpy_r_r595 = CPyStatics[8426]; /* 'int16_mod_op' */
    cpy_r_r596 = CPyDict_SetItem(cpy_r_r594, cpy_r_r595, cpy_r_r593);
    CPy_DECREF(cpy_r_r593);
    cpy_r_r597 = cpy_r_r596 >= 0;
    if (unlikely(!cpy_r_r597)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 248, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r598 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r598 != NULL)) goto CPyL256;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r599 = 0;
    if (unlikely(!cpy_r_r599)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 257, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL256: ;
    cpy_r_r600 = PyList_New(1);
    if (unlikely(cpy_r_r600 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 257, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r601 = (CPyPtr)&((PyListObject *)cpy_r_r600)->ob_item;
    cpy_r_r602 = *(CPyPtr *)cpy_r_r601;
    CPy_INCREF(cpy_r_r598);
    *(PyObject * *)cpy_r_r602 = cpy_r_r598;
    cpy_r_r603 = CPyStatic_rtypes___int64_rprimitive;
    if (unlikely(cpy_r_r603 == NULL)) {
        goto CPyL352;
    } else
        goto CPyL260;
CPyL258: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r604 = 0;
    if (unlikely(!cpy_r_r604)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 258, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL260: ;
    cpy_r_r605 = CPyStatics[8875]; /* 'CPyLong_AsInt64' */
    cpy_r_r606 = NULL;
    cpy_r_r607 = NULL;
    cpy_r_r608 = NULL;
    cpy_r_r609 = NULL;
    cpy_r_r610 = NULL;
    cpy_r_r611 = 2;
    cpy_r_r612 = CPyDef_registry___custom_op(cpy_r_r600, cpy_r_r603, cpy_r_r605, 8, cpy_r_r606, cpy_r_r607, cpy_r_r608, cpy_r_r609, cpy_r_r610, cpy_r_r611);
    CPy_DECREF(cpy_r_r600);
    if (unlikely(cpy_r_r612 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 256, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r613 = CPyStatic_int_ops___globals;
    cpy_r_r614 = CPyStatics[8387]; /* 'int_to_int64_op' */
    cpy_r_r615 = CPyDict_SetItem(cpy_r_r613, cpy_r_r614, cpy_r_r612);
    CPy_DECREF(cpy_r_r612);
    cpy_r_r616 = cpy_r_r615 >= 0;
    if (unlikely(!cpy_r_r616)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 256, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r617 = CPyStatic_int_ops___globals;
    cpy_r_r618 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r619 = CPyDict_GetItem(cpy_r_r617, cpy_r_r618);
    if (unlikely(cpy_r_r619 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 264, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    if (likely(Py_TYPE(cpy_r_r619) == CPyType_rtypes___RPrimitive))
        cpy_r_r620 = cpy_r_r619;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/int_ops.py", "<module>", 264, CPyStatic_int_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r619);
        goto CPyL307;
    }
    cpy_r_r621 = PyList_New(1);
    if (unlikely(cpy_r_r621 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 264, CPyStatic_int_ops___globals);
        goto CPyL353;
    }
    cpy_r_r622 = (CPyPtr)&((PyListObject *)cpy_r_r621)->ob_item;
    cpy_r_r623 = *(CPyPtr *)cpy_r_r622;
    *(PyObject * *)cpy_r_r623 = cpy_r_r620;
    cpy_r_r624 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r624 == NULL)) {
        goto CPyL354;
    } else
        goto CPyL268;
CPyL266: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r625 = 0;
    if (unlikely(!cpy_r_r625)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 265, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL268: ;
    cpy_r_r626 = CPyStatics[8876]; /* 'CPyTagged_FromSsize_t' */
    cpy_r_r627 = NULL;
    cpy_r_r628 = NULL;
    cpy_r_r629 = NULL;
    cpy_r_r630 = NULL;
    cpy_r_r631 = NULL;
    cpy_r_r632 = 2;
    cpy_r_r633 = CPyDef_registry___custom_op(cpy_r_r621, cpy_r_r624, cpy_r_r626, 2, cpy_r_r627, cpy_r_r628, cpy_r_r629, cpy_r_r630, cpy_r_r631, cpy_r_r632);
    CPy_DECREF(cpy_r_r621);
    if (unlikely(cpy_r_r633 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 263, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r634 = CPyStatic_int_ops___globals;
    cpy_r_r635 = CPyStatics[8393]; /* 'ssize_t_to_int_op' */
    cpy_r_r636 = CPyDict_SetItem(cpy_r_r634, cpy_r_r635, cpy_r_r633);
    CPy_DECREF(cpy_r_r633);
    cpy_r_r637 = cpy_r_r636 >= 0;
    if (unlikely(!cpy_r_r637)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 263, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r638 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r638 != NULL)) goto CPyL273;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r639 = 0;
    if (unlikely(!cpy_r_r639)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 271, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL273: ;
    cpy_r_r640 = PyList_New(1);
    if (unlikely(cpy_r_r640 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 271, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r641 = (CPyPtr)&((PyListObject *)cpy_r_r640)->ob_item;
    cpy_r_r642 = *(CPyPtr *)cpy_r_r641;
    CPy_INCREF(cpy_r_r638);
    *(PyObject * *)cpy_r_r642 = cpy_r_r638;
    cpy_r_r643 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r643 == NULL)) {
        goto CPyL355;
    } else
        goto CPyL277;
CPyL275: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r644 = 0;
    if (unlikely(!cpy_r_r644)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 272, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL277: ;
    cpy_r_r645 = CPyStatics[8877]; /* 'CPyTagged_FromInt64' */
    cpy_r_r646 = NULL;
    cpy_r_r647 = NULL;
    cpy_r_r648 = NULL;
    cpy_r_r649 = NULL;
    cpy_r_r650 = NULL;
    cpy_r_r651 = 2;
    cpy_r_r652 = CPyDef_registry___custom_op(cpy_r_r640, cpy_r_r643, cpy_r_r645, 2, cpy_r_r646, cpy_r_r647, cpy_r_r648, cpy_r_r649, cpy_r_r650, cpy_r_r651);
    CPy_DECREF(cpy_r_r640);
    if (unlikely(cpy_r_r652 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 270, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r653 = CPyStatic_int_ops___globals;
    cpy_r_r654 = CPyStatics[8392]; /* 'int64_to_int_op' */
    cpy_r_r655 = CPyDict_SetItem(cpy_r_r653, cpy_r_r654, cpy_r_r652);
    CPy_DECREF(cpy_r_r652);
    cpy_r_r656 = cpy_r_r655 >= 0;
    if (unlikely(!cpy_r_r656)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 270, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r657 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r657 != NULL)) goto CPyL282;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r658 = 0;
    if (unlikely(!cpy_r_r658)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 279, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL282: ;
    cpy_r_r659 = PyList_New(1);
    if (unlikely(cpy_r_r659 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 279, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r660 = (CPyPtr)&((PyListObject *)cpy_r_r659)->ob_item;
    cpy_r_r661 = *(CPyPtr *)cpy_r_r660;
    CPy_INCREF(cpy_r_r657);
    *(PyObject * *)cpy_r_r661 = cpy_r_r657;
    cpy_r_r662 = CPyStatic_rtypes___int32_rprimitive;
    if (unlikely(cpy_r_r662 == NULL)) {
        goto CPyL356;
    } else
        goto CPyL286;
CPyL284: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int32_rprimitive\" was not set");
    cpy_r_r663 = 0;
    if (unlikely(!cpy_r_r663)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 280, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL286: ;
    cpy_r_r664 = CPyStatics[8878]; /* 'CPyLong_AsInt32' */
    cpy_r_r665 = NULL;
    cpy_r_r666 = NULL;
    cpy_r_r667 = NULL;
    cpy_r_r668 = NULL;
    cpy_r_r669 = NULL;
    cpy_r_r670 = 2;
    cpy_r_r671 = CPyDef_registry___custom_op(cpy_r_r659, cpy_r_r662, cpy_r_r664, 8, cpy_r_r665, cpy_r_r666, cpy_r_r667, cpy_r_r668, cpy_r_r669, cpy_r_r670);
    CPy_DECREF(cpy_r_r659);
    if (unlikely(cpy_r_r671 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 278, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r672 = CPyStatic_int_ops___globals;
    cpy_r_r673 = CPyStatics[8388]; /* 'int_to_int32_op' */
    cpy_r_r674 = CPyDict_SetItem(cpy_r_r672, cpy_r_r673, cpy_r_r671);
    CPy_DECREF(cpy_r_r671);
    cpy_r_r675 = cpy_r_r674 >= 0;
    if (unlikely(!cpy_r_r675)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 278, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r676 = PyList_New(0);
    if (unlikely(cpy_r_r676 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 286, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r677 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r677 == NULL)) {
        goto CPyL357;
    } else
        goto CPyL292;
CPyL290: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r678 = 0;
    if (unlikely(!cpy_r_r678)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 287, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL292: ;
    cpy_r_r679 = CPyStatics[8879]; /* 'CPyInt32_Overflow' */
    cpy_r_r680 = NULL;
    cpy_r_r681 = NULL;
    cpy_r_r682 = NULL;
    cpy_r_r683 = NULL;
    cpy_r_r684 = NULL;
    cpy_r_r685 = 2;
    cpy_r_r686 = CPyDef_registry___custom_op(cpy_r_r676, cpy_r_r677, cpy_r_r679, 6, cpy_r_r680, cpy_r_r681, cpy_r_r682, cpy_r_r683, cpy_r_r684, cpy_r_r685);
    CPy_DECREF(cpy_r_r676);
    if (unlikely(cpy_r_r686 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 285, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r687 = CPyStatic_int_ops___globals;
    cpy_r_r688 = CPyStatics[8389]; /* 'int32_overflow' */
    cpy_r_r689 = CPyDict_SetItem(cpy_r_r687, cpy_r_r688, cpy_r_r686);
    CPy_DECREF(cpy_r_r686);
    cpy_r_r690 = cpy_r_r689 >= 0;
    if (unlikely(!cpy_r_r690)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 285, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r691 = PyList_New(0);
    if (unlikely(cpy_r_r691 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 293, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r692 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r692 == NULL)) {
        goto CPyL358;
    } else
        goto CPyL298;
CPyL296: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r693 = 0;
    if (unlikely(!cpy_r_r693)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 294, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL298: ;
    cpy_r_r694 = CPyStatics[8880]; /* 'CPyInt16_Overflow' */
    cpy_r_r695 = NULL;
    cpy_r_r696 = NULL;
    cpy_r_r697 = NULL;
    cpy_r_r698 = NULL;
    cpy_r_r699 = NULL;
    cpy_r_r700 = 2;
    cpy_r_r701 = CPyDef_registry___custom_op(cpy_r_r691, cpy_r_r692, cpy_r_r694, 6, cpy_r_r695, cpy_r_r696, cpy_r_r697, cpy_r_r698, cpy_r_r699, cpy_r_r700);
    CPy_DECREF(cpy_r_r691);
    if (unlikely(cpy_r_r701 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 292, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r702 = CPyStatic_int_ops___globals;
    cpy_r_r703 = CPyStatics[8390]; /* 'int16_overflow' */
    cpy_r_r704 = CPyDict_SetItem(cpy_r_r702, cpy_r_r703, cpy_r_r701);
    CPy_DECREF(cpy_r_r701);
    cpy_r_r705 = cpy_r_r704 >= 0;
    if (unlikely(!cpy_r_r705)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 292, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r706 = PyList_New(0);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 300, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r707 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r707 == NULL)) {
        goto CPyL359;
    } else
        goto CPyL304;
CPyL302: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r708 = 0;
    if (unlikely(!cpy_r_r708)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 301, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    CPy_Unreachable();
CPyL304: ;
    cpy_r_r709 = CPyStatics[8881]; /* 'CPyUInt8_Overflow' */
    cpy_r_r710 = NULL;
    cpy_r_r711 = NULL;
    cpy_r_r712 = NULL;
    cpy_r_r713 = NULL;
    cpy_r_r714 = NULL;
    cpy_r_r715 = 2;
    cpy_r_r716 = CPyDef_registry___custom_op(cpy_r_r706, cpy_r_r707, cpy_r_r709, 6, cpy_r_r710, cpy_r_r711, cpy_r_r712, cpy_r_r713, cpy_r_r714, cpy_r_r715);
    CPy_DECREF(cpy_r_r706);
    if (unlikely(cpy_r_r716 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 299, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    cpy_r_r717 = CPyStatic_int_ops___globals;
    cpy_r_r718 = CPyStatics[8391]; /* 'uint8_overflow' */
    cpy_r_r719 = CPyDict_SetItem(cpy_r_r717, cpy_r_r718, cpy_r_r716);
    CPy_DECREF(cpy_r_r716);
    cpy_r_r720 = cpy_r_r719 >= 0;
    if (unlikely(!cpy_r_r720)) {
        CPy_AddTraceback("mypyc/primitives/int_ops.py", "<module>", 299, CPyStatic_int_ops___globals);
        goto CPyL307;
    }
    return 1;
CPyL307: ;
    cpy_r_r721 = 2;
    return cpy_r_r721;
CPyL308: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL51;
CPyL309: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL307;
CPyL310: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r42);
    goto CPyL15;
CPyL311: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL18;
CPyL312: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r50);
    goto CPyL21;
CPyL313: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r50);
    goto CPyL307;
CPyL314: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL25;
CPyL315: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL28;
CPyL316: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r70);
    goto CPyL31;
CPyL317: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r70);
    goto CPyL307;
CPyL318: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    goto CPyL35;
CPyL319: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL38;
CPyL320: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r90);
    goto CPyL41;
CPyL321: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r90);
    goto CPyL44;
CPyL322: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r90);
    goto CPyL307;
CPyL323: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r95);
    goto CPyL48;
CPyL324: ;
    CPy_DECREF(cpy_r_r109);
    goto CPyL9;
CPyL325: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL57;
CPyL326: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL66;
CPyL327: ;
    CPy_DECREF(cpy_r_r146);
    goto CPyL69;
CPyL328: ;
    CPy_DecRef(cpy_r_r268);
    goto CPyL307;
CPyL329: ;
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r278);
    goto CPyL307;
CPyL330: ;
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r288);
    goto CPyL307;
CPyL331: ;
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r288);
    CPy_DecRef(cpy_r_r290);
    goto CPyL307;
CPyL332: ;
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r288);
    goto CPyL307;
CPyL333: ;
    CPy_DecRef(cpy_r_r331);
    goto CPyL133;
CPyL334: ;
    CPy_DecRef(cpy_r_r353);
    goto CPyL145;
CPyL335: ;
    CPy_DecRef(cpy_r_r375);
    goto CPyL307;
CPyL336: ;
    CPy_DecRef(cpy_r_r385);
    goto CPyL307;
CPyL337: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r390);
    goto CPyL307;
CPyL338: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    goto CPyL307;
CPyL339: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r405);
    goto CPyL307;
CPyL340: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    goto CPyL307;
CPyL341: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r420);
    goto CPyL307;
CPyL342: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r430);
    goto CPyL307;
CPyL343: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r430);
    CPy_DecRef(cpy_r_r435);
    goto CPyL307;
CPyL344: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r430);
    CPy_DecRef(cpy_r_r445);
    goto CPyL307;
CPyL345: ;
    CPy_DecRef(cpy_r_r385);
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r430);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r450);
    goto CPyL307;
CPyL346: ;
    CPy_DecRef(cpy_r_r470);
    goto CPyL189;
CPyL347: ;
    CPy_DecRef(cpy_r_r492);
    goto CPyL201;
CPyL348: ;
    CPy_DecRef(cpy_r_r514);
    goto CPyL213;
CPyL349: ;
    CPy_DecRef(cpy_r_r536);
    goto CPyL225;
CPyL350: ;
    CPy_DecRef(cpy_r_r558);
    goto CPyL237;
CPyL351: ;
    CPy_DecRef(cpy_r_r580);
    goto CPyL249;
CPyL352: ;
    CPy_DecRef(cpy_r_r600);
    goto CPyL258;
CPyL353: ;
    CPy_DecRef(cpy_r_r620);
    goto CPyL307;
CPyL354: ;
    CPy_DecRef(cpy_r_r621);
    goto CPyL266;
CPyL355: ;
    CPy_DecRef(cpy_r_r640);
    goto CPyL275;
CPyL356: ;
    CPy_DecRef(cpy_r_r659);
    goto CPyL284;
CPyL357: ;
    CPy_DecRef(cpy_r_r676);
    goto CPyL290;
CPyL358: ;
    CPy_DecRef(cpy_r_r691);
    goto CPyL296;
CPyL359: ;
    CPy_DecRef(cpy_r_r706);
    goto CPyL302;
}
