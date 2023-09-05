#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef vtablemodule_methods[] = {
    {"compute_vtable", (PyCFunction)CPyPy_vtable___compute_vtable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"specialize_parent_vtable", (PyCFunction)CPyPy_vtable___specialize_parent_vtable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef vtablemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.vtable",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    vtablemodule_methods
};

PyObject *CPyInit_mypyc___irbuild___vtable(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___vtable_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___vtable_internal);
        return CPyModule_mypyc___irbuild___vtable_internal;
    }
    CPyModule_mypyc___irbuild___vtable_internal = PyModule_Create(&vtablemodule);
    if (unlikely(CPyModule_mypyc___irbuild___vtable_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___vtable_internal, "__name__");
    CPyStatic_vtable___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___vtable_internal);
    if (unlikely(CPyStatic_vtable___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_vtable_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___vtable_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___vtable_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_vtable___compute_vtable(PyObject *cpy_r_cls) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_x;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_t;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T4CIOO cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_name;
    PyObject *cpy_r_typ;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_entries;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyPtr cpy_r_r88;
    int64_t cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_t_2;
    char cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_all_traits;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyPtr cpy_r_r105;
    int64_t cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    tuple_T2OO cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_shadow;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    CPyTagged cpy_r_r154;
    CPyPtr cpy_r_r155;
    int64_t cpy_r_r156;
    CPyTagged cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_trait;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    CPyTagged cpy_r_r166;
    char cpy_r_r167;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable", 13, CPyStatic_vtable___globals);
        goto CPyL115;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_is_generated;
    if (cpy_r_r3) goto CPyL12;
CPyL4: ;
    cpy_r_r4 = 0;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_mro;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "mro", 17, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL116;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_class_ir___ClassIR))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 17, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r11);
        goto CPyL117;
    }
    cpy_r_x = cpy_r_r12;
    cpy_r_r13 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_x)->_inherits_python;
    CPy_DECREF(cpy_r_x);
    if (cpy_r_r13) {
        goto CPyL118;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r4 = 1;
    goto CPyL11;
CPyL10: ;
    cpy_r_r14 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r14;
    goto CPyL6;
CPyL11: ;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_has_dict = cpy_r_r4;
CPyL12: ;
    cpy_r_r16 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_mro;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "mro", 19, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r17 = CPyList_GetSlice(cpy_r_r16, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 19, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 19, CPyStatic_vtable___globals, "list", cpy_r_r17);
        goto CPyL115;
    }
    cpy_r_r19 = 0;
CPyL16: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL119;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_class_ir___ClassIR))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 19, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r24);
        goto CPyL120;
    }
    cpy_r_t = cpy_r_r25;
    cpy_r_r26 = CPyDef_vtable___compute_vtable(cpy_r_t);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 21, CPyStatic_vtable___globals);
        goto CPyL121;
    }
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_t)->_is_trait;
    if (!cpy_r_r27) goto CPyL122;
CPyL20: ;
    cpy_r_r28 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_t)->_attributes;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals);
        goto CPyL120;
    }
CPyL21: ;
    cpy_r_r29 = 0;
    cpy_r_r30 = PyDict_Size(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = CPyDict_GetItemsIter(cpy_r_r28);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals);
        goto CPyL123;
    }
CPyL22: ;
    cpy_r_r33 = CPyDict_NextItem(cpy_r_r32, cpy_r_r29);
    cpy_r_r34 = cpy_r_r33.f1;
    cpy_r_r29 = cpy_r_r34;
    cpy_r_r35 = cpy_r_r33.f0;
    if (!cpy_r_r35) goto CPyL124;
    cpy_r_r36 = cpy_r_r33.f2;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = cpy_r_r33.f3;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r33.f2);
    CPy_DECREF(cpy_r_r33.f3);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r38 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals, "str", cpy_r_r36);
        goto CPyL125;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_rtypes___RType)))
        cpy_r_r39 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals, "mypyc.ir.rtypes.RType", cpy_r_r37);
        goto CPyL126;
    }
    cpy_r_name = cpy_r_r38;
    cpy_r_typ = cpy_r_r39;
    cpy_r_r40 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_is_trait;
    if (cpy_r_r40) goto CPyL127;
CPyL26: ;
    cpy_r_r41 = 0;
    cpy_r_r42 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_base_mro;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "base_mro", 26, CPyStatic_vtable___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r42);
CPyL27: ;
    cpy_r_r43 = 0;
CPyL28: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL129;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_r42, cpy_r_r43);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_class_ir___ClassIR))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 26, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r48);
        goto CPyL130;
    }
    cpy_r_b = cpy_r_r49;
    cpy_r_r50 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_b)->_attributes;
    if (unlikely(cpy_r_r50 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r50);
    }
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 26, CPyStatic_vtable___globals);
        goto CPyL130;
    }
CPyL31: ;
    cpy_r_r51 = PyDict_Contains(cpy_r_r50, cpy_r_name);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 26, CPyStatic_vtable___globals);
        goto CPyL130;
    }
    cpy_r_r53 = cpy_r_r51;
    if (cpy_r_r53) {
        goto CPyL131;
    } else
        goto CPyL34;
CPyL33: ;
    cpy_r_r41 = 1;
    goto CPyL35;
CPyL34: ;
    cpy_r_r54 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r54;
    goto CPyL28;
CPyL35: ;
    if (cpy_r_r41) goto CPyL127;
    cpy_r_r55 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_attributes;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "attributes", 27, CPyStatic_vtable___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r55);
CPyL37: ;
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r55, cpy_r_name, cpy_r_typ);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 27, CPyStatic_vtable___globals);
        goto CPyL132;
    }
CPyL38: ;
    cpy_r_r58 = CPyDict_CheckSize(cpy_r_r28, cpy_r_r31);
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals);
        goto CPyL132;
    } else
        goto CPyL22;
CPyL39: ;
    cpy_r_r59 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 25, CPyStatic_vtable___globals);
        goto CPyL120;
    }
CPyL40: ;
    cpy_r_r60 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r60;
    goto CPyL16;
CPyL41: ;
    cpy_r_r61 = PyDict_New();
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 29, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 29, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    cpy_r_r63 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_base;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "base", 30, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r63);
CPyL44: ;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_r63 != cpy_r_r64;
    CPy_DECREF(cpy_r_r63);
    if (!cpy_r_r65) goto CPyL62;
    cpy_r_r66 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_base;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "base", 31, CPyStatic_vtable___globals);
        goto CPyL115;
    }
CPyL46: ;
    if (likely(cpy_r_r66 != Py_None))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 31, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r66);
        goto CPyL115;
    }
    cpy_r_r68 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r67)->_vtable;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable", 31, CPyStatic_vtable___globals);
        goto CPyL115;
    }
CPyL48: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_r68 != cpy_r_r69;
    if (cpy_r_r70) goto CPyL51;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 31, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r72 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable", 32, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r72);
CPyL52: ;
    if (likely(cpy_r_r72 != Py_None))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 32, CPyStatic_vtable___globals, "dict", cpy_r_r72);
        goto CPyL115;
    }
    cpy_r_r74 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_base;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "base", 32, CPyStatic_vtable___globals);
        goto CPyL133;
    }
CPyL54: ;
    if (likely(cpy_r_r74 != Py_None))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 32, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r74);
        goto CPyL133;
    }
    cpy_r_r76 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r75)->_vtable;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable", 32, CPyStatic_vtable___globals);
        goto CPyL133;
    }
    CPy_INCREF(cpy_r_r76);
CPyL56: ;
    if (likely(cpy_r_r76 != Py_None))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 32, CPyStatic_vtable___globals, "dict", cpy_r_r76);
        goto CPyL133;
    }
    cpy_r_r78 = CPyDict_Update(cpy_r_r73, cpy_r_r77);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 32, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    cpy_r_r80 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_base;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "base", 33, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r80);
CPyL59: ;
    if (likely(cpy_r_r80 != Py_None))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 33, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r80);
        goto CPyL115;
    }
    cpy_r_r82 = CPyDef_vtable___specialize_parent_vtable(cpy_r_cls, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 33, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable_entries != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable_entries);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable_entries = cpy_r_r82;
    cpy_r_r83 = 1;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 33, CPyStatic_vtable___globals);
        goto CPyL115;
    }
CPyL62: ;
    cpy_r_r84 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable_entries;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable_entries", 36, CPyStatic_vtable___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r84);
CPyL63: ;
    cpy_r_entries = cpy_r_r84;
    cpy_r_r85 = PyList_New(0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 38, CPyStatic_vtable___globals);
        goto CPyL134;
    }
    cpy_r_r86 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_mro;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "mro", 38, CPyStatic_vtable___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r86);
CPyL65: ;
    cpy_r_r87 = 0;
CPyL66: ;
    cpy_r_r88 = (CPyPtr)&((PyVarObject *)cpy_r_r86)->ob_size;
    cpy_r_r89 = *(int64_t *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 << 1;
    cpy_r_r91 = (Py_ssize_t)cpy_r_r87 < (Py_ssize_t)cpy_r_r90;
    if (!cpy_r_r91) goto CPyL136;
    cpy_r_r92 = CPyList_GetItemUnsafe(cpy_r_r86, cpy_r_r87);
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_class_ir___ClassIR))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 38, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r92);
        goto CPyL137;
    }
    cpy_r_t_2 = cpy_r_r93;
    cpy_r_r94 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_t_2)->_is_trait;
    if (!cpy_r_r94) goto CPyL138;
CPyL69: ;
    cpy_r_r95 = PyList_Append(cpy_r_r85, cpy_r_t_2);
    CPy_DECREF(cpy_r_t_2);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 38, CPyStatic_vtable___globals);
        goto CPyL137;
    }
CPyL70: ;
    cpy_r_r97 = cpy_r_r87 + 2;
    cpy_r_r87 = cpy_r_r97;
    goto CPyL66;
CPyL71: ;
    cpy_r_all_traits = cpy_r_r85;
    cpy_r_r98 = PyList_New(1);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 40, CPyStatic_vtable___globals);
        goto CPyL139;
    }
    cpy_r_r99 = (CPyPtr)&((PyListObject *)cpy_r_r98)->ob_item;
    cpy_r_r100 = *(CPyPtr *)cpy_r_r99;
    CPy_INCREF(cpy_r_cls);
    *(PyObject * *)cpy_r_r100 = cpy_r_cls;
    cpy_r_r101 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_traits;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "traits", 40, CPyStatic_vtable___globals);
        goto CPyL140;
    }
    CPy_INCREF(cpy_r_r101);
CPyL73: ;
    cpy_r_r102 = PyNumber_Add(cpy_r_r98, cpy_r_r101);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 40, CPyStatic_vtable___globals);
        goto CPyL139;
    }
    if (likely(PyList_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 40, CPyStatic_vtable___globals, "list", cpy_r_r102);
        goto CPyL139;
    }
    cpy_r_r104 = 0;
CPyL76: ;
    cpy_r_r105 = (CPyPtr)&((PyVarObject *)cpy_r_r103)->ob_size;
    cpy_r_r106 = *(int64_t *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 << 1;
    cpy_r_r108 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r107;
    if (!cpy_r_r108) goto CPyL141;
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_r103, cpy_r_r104);
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_class_ir___ClassIR))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 40, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r109);
        goto CPyL142;
    }
    cpy_r_t = cpy_r_r110;
    cpy_r_r111 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_t)->_methods;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "methods", 41, CPyStatic_vtable___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r111);
CPyL79: ;
    cpy_r_r112 = CPyDict_ValuesView(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals);
        goto CPyL143;
    }
    cpy_r_r113 = CPyModule_itertools;
    cpy_r_r114 = CPyStatics[3356]; /* 'chain' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals);
        goto CPyL144;
    }
    PyObject *cpy_r_r116[1] = {cpy_r_r112};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r115, cpy_r_r117, 1, 0);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals);
        goto CPyL144;
    }
    CPy_DECREF(cpy_r_r112);
    cpy_r_r119 = PyObject_GetIter(cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals);
        goto CPyL143;
    }
CPyL83: ;
    cpy_r_r120 = PyIter_Next(cpy_r_r119);
    if (cpy_r_r120 == NULL) goto CPyL145;
    if (likely(Py_TYPE(cpy_r_r120) == CPyType_func_ir___FuncIR))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r120);
        goto CPyL146;
    }
    cpy_r_fn = cpy_r_r121;
    cpy_r_r122 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 43, CPyStatic_vtable___globals);
        goto CPyL147;
    }
CPyL86: ;
    cpy_r_r123 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cls, cpy_r_r122, 1);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 43, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    cpy_r_r124 = PyObject_RichCompare(cpy_r_fn, cpy_r_r123, 2);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 43, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    if (unlikely(!PyBool_Check(cpy_r_r124))) {
        CPy_TypeError("bool", cpy_r_r124); cpy_r_r125 = 2;
    } else
        cpy_r_r125 = cpy_r_r124 == Py_True;
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 43, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    if (!cpy_r_r125) goto CPyL148;
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_vtable;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "vtable", 44, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r129);
CPyL91: ;
    if (likely(cpy_r_r129 != Py_None))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 44, CPyStatic_vtable___globals, "dict", cpy_r_r129);
        goto CPyL147;
    }
    cpy_r_r131 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 44, CPyStatic_vtable___globals);
        goto CPyL149;
    }
CPyL93: ;
    cpy_r_r132 = CPyTagged_StealAsObject(cpy_r_r128);
    cpy_r_r133 = CPyDict_SetItem(cpy_r_r130, cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 44, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    cpy_r_r135 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_glue_methods;
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "glue_methods", 47, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r135);
CPyL95: ;
    cpy_r_r136 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 47, CPyStatic_vtable___globals);
        goto CPyL150;
    }
CPyL96: ;
    cpy_r_r137.f0 = cpy_r_cls;
    cpy_r_r137.f1 = cpy_r_r136;
    CPy_INCREF(cpy_r_r137.f0);
    CPy_INCREF(cpy_r_r137.f1);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r138 = PyTuple_New(2);
    if (unlikely(cpy_r_r138 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10592 = cpy_r_r137.f0;
    PyTuple_SET_ITEM(cpy_r_r138, 0, __tmp10592);
    PyObject *__tmp10593 = cpy_r_r137.f1;
    PyTuple_SET_ITEM(cpy_r_r138, 1, __tmp10593);
    cpy_r_r139 = CPyDict_GetWithNone(cpy_r_r135, cpy_r_r138);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 47, CPyStatic_vtable___globals);
        goto CPyL147;
    }
    if (Py_TYPE(cpy_r_r139) == CPyType_func_ir___FuncIR)
        cpy_r_r140 = cpy_r_r139;
    else {
        cpy_r_r140 = NULL;
    }
    if (cpy_r_r140 != NULL) goto __LL10594;
    if (cpy_r_r139 == Py_None)
        cpy_r_r140 = cpy_r_r139;
    else {
        cpy_r_r140 = NULL;
    }
    if (cpy_r_r140 != NULL) goto __LL10594;
    CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 47, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r139);
    goto CPyL147;
__LL10594: ;
    cpy_r_shadow = cpy_r_r140;
    cpy_r_r141 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 48, CPyStatic_vtable___globals);
        goto CPyL151;
    }
CPyL99: ;
    cpy_r_r142 = CPyStatic_vtable___globals;
    cpy_r_r143 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r144 = CPyDict_GetItem(cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 48, CPyStatic_vtable___globals);
        goto CPyL152;
    }
    PyObject *cpy_r_r145[4] = {cpy_r_t, cpy_r_r141, cpy_r_fn, cpy_r_shadow};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = _PyObject_Vectorcall(cpy_r_r144, cpy_r_r146, 4, 0);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 48, CPyStatic_vtable___globals);
        goto CPyL152;
    }
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_shadow);
    if (likely(PyTuple_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 48, CPyStatic_vtable___globals, "tuple", cpy_r_r147);
        goto CPyL146;
    }
    cpy_r_r149 = PyList_Append(cpy_r_entries, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 48, CPyStatic_vtable___globals);
        goto CPyL146;
    } else
        goto CPyL83;
CPyL103: ;
    cpy_r_r151 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 41, CPyStatic_vtable___globals);
        goto CPyL142;
    }
    cpy_r_r152 = cpy_r_r104 + 2;
    cpy_r_r104 = cpy_r_r152;
    goto CPyL76;
CPyL105: ;
    cpy_r_r153 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_is_trait;
    if (cpy_r_r153) goto CPyL153;
CPyL106: ;
    cpy_r_r154 = 0;
CPyL107: ;
    cpy_r_r155 = (CPyPtr)&((PyVarObject *)cpy_r_all_traits)->ob_size;
    cpy_r_r156 = *(int64_t *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 << 1;
    cpy_r_r158 = (Py_ssize_t)cpy_r_r154 < (Py_ssize_t)cpy_r_r157;
    if (!cpy_r_r158) goto CPyL153;
    cpy_r_r159 = CPyList_GetItemUnsafe(cpy_r_all_traits, cpy_r_r154);
    if (likely(Py_TYPE(cpy_r_r159) == CPyType_class_ir___ClassIR))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 52, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r159);
        goto CPyL154;
    }
    cpy_r_trait = cpy_r_r160;
    cpy_r_r161 = CPyDef_vtable___compute_vtable(cpy_r_trait);
    if (unlikely(cpy_r_r161 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 53, CPyStatic_vtable___globals);
        goto CPyL155;
    }
    cpy_r_r162 = CPyDef_vtable___specialize_parent_vtable(cpy_r_cls, cpy_r_trait);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 54, CPyStatic_vtable___globals);
        goto CPyL155;
    }
    cpy_r_r163 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_trait_vtables;
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "compute_vtable", "ClassIR", "trait_vtables", 54, CPyStatic_vtable___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r163);
CPyL112: ;
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r163, cpy_r_trait, cpy_r_r162);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_trait);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 54, CPyStatic_vtable___globals);
        goto CPyL154;
    }
    cpy_r_r166 = cpy_r_r154 + 2;
    cpy_r_r154 = cpy_r_r166;
    goto CPyL107;
CPyL114: ;
    return 1;
CPyL115: ;
    cpy_r_r167 = 2;
    return cpy_r_r167;
CPyL116: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL117: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL115;
CPyL118: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL119: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL41;
CPyL120: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL115;
CPyL121: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_t);
    goto CPyL115;
CPyL122: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL40;
CPyL123: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    goto CPyL115;
CPyL124: ;
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33.f2);
    CPy_DECREF(cpy_r_r33.f3);
    goto CPyL39;
CPyL125: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r37);
    goto CPyL115;
CPyL126: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r38);
    goto CPyL115;
CPyL127: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_typ);
    goto CPyL38;
CPyL128: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    goto CPyL115;
CPyL129: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL35;
CPyL130: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r42);
    goto CPyL115;
CPyL131: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL33;
CPyL132: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    goto CPyL115;
CPyL133: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL115;
CPyL134: ;
    CPy_DecRef(cpy_r_entries);
    goto CPyL115;
CPyL135: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_r85);
    goto CPyL115;
CPyL136: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL71;
CPyL137: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL115;
CPyL138: ;
    CPy_DECREF(cpy_r_t_2);
    goto CPyL70;
CPyL139: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    goto CPyL115;
CPyL140: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r98);
    goto CPyL115;
CPyL141: ;
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_r103);
    goto CPyL105;
CPyL142: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    goto CPyL115;
CPyL143: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    goto CPyL115;
CPyL144: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r112);
    goto CPyL115;
CPyL145: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r119);
    goto CPyL103;
CPyL146: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    goto CPyL115;
CPyL147: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_fn);
    goto CPyL115;
CPyL148: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL83;
CPyL149: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r130);
    goto CPyL115;
CPyL150: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r135);
    goto CPyL115;
CPyL151: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_shadow);
    goto CPyL115;
CPyL152: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_shadow);
    CPy_DecRef(cpy_r_r141);
    goto CPyL115;
CPyL153: ;
    CPy_DECREF(cpy_r_all_traits);
    goto CPyL114;
CPyL154: ;
    CPy_DecRef(cpy_r_all_traits);
    goto CPyL115;
CPyL155: ;
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_trait);
    goto CPyL115;
CPyL156: ;
    CPy_DecRef(cpy_r_all_traits);
    CPy_DecRef(cpy_r_trait);
    CPy_DecRef(cpy_r_r162);
    goto CPyL115;
}

PyObject *CPyPy_vtable___compute_vtable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cls", 0};
    static CPyArg_Parser parser = {"O:compute_vtable", kwlist, 0};
    PyObject *obj_cls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cls)) {
        return NULL;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    char retval = CPyDef_vtable___compute_vtable(arg_cls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/vtable.py", "compute_vtable", 11, CPyStatic_vtable___globals);
    return NULL;
}

PyObject *CPyDef_vtable___specialize_parent_vtable(PyObject *cpy_r_cls, PyObject *cpy_r_parent) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_updated;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_entry;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_orig_parent_method;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_method_cls;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    tuple_T2OO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_child_method;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_defining_cls;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
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
    tuple_T2OO cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 59, CPyStatic_vtable___globals);
        goto CPyL62;
    }
    cpy_r_updated = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_parent)->_vtable_entries;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/vtable.py", "specialize_parent_vtable", "ClassIR", "vtable_entries", 60, CPyStatic_vtable___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL64;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 60, CPyStatic_vtable___globals, "tuple", cpy_r_r7);
        goto CPyL65;
    }
    cpy_r_entry = cpy_r_r8;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_entry, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 63, CPyStatic_vtable___globals);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_class_ir___ClassIR))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 63, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r9);
        goto CPyL66;
    }
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 63, CPyStatic_vtable___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 63, CPyStatic_vtable___globals, "str", cpy_r_r11);
        goto CPyL67;
    }
    cpy_r_r13 = CPyDef_class_ir___ClassIR___get_method(cpy_r_r10, cpy_r_r12, 1);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 63, CPyStatic_vtable___globals);
        goto CPyL66;
    }
    cpy_r_orig_parent_method = cpy_r_r13;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_orig_parent_method != cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL13;
    } else
        goto CPyL68;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 64, CPyStatic_vtable___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 65, CPyStatic_vtable___globals);
        goto CPyL69;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 65, CPyStatic_vtable___globals, "str", cpy_r_r17);
        goto CPyL69;
    }
    cpy_r_r19 = CPyDef_class_ir___ClassIR___get_method_and_class(cpy_r_cls, cpy_r_r18, 1);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 65, CPyStatic_vtable___globals);
        goto CPyL69;
    }
    cpy_r_method_cls = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_method_cls != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL70;
    PyObject *__tmp10595;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp10595 = NULL;
        goto __LL10596;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp10595 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp10595 = NULL;
    }
    if (__tmp10595 == NULL) goto __LL10596;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp10595 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp10595 = NULL;
    }
    if (__tmp10595 == NULL) goto __LL10596;
    __tmp10595 = cpy_r_method_cls;
__LL10596: ;
    if (unlikely(__tmp10595 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r22 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10597 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp10597);
        PyObject *__tmp10598;
        if (likely(Py_TYPE(__tmp10597) == CPyType_func_ir___FuncIR))
            __tmp10598 = __tmp10597;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp10597); 
            __tmp10598 = NULL;
        }
        cpy_r_r22.f0 = __tmp10598;
        PyObject *__tmp10599 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp10599);
        PyObject *__tmp10600;
        if (likely(Py_TYPE(__tmp10599) == CPyType_class_ir___ClassIR))
            __tmp10600 = __tmp10599;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp10599); 
            __tmp10600 = NULL;
        }
        cpy_r_r22.f1 = __tmp10600;
    }
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 65, CPyStatic_vtable___globals);
        goto CPyL71;
    }
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10601 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp10601);
    PyObject *__tmp10602 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp10602);
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 65, CPyStatic_vtable___globals);
        goto CPyL71;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL70;
    PyObject *__tmp10603;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp10603 = NULL;
        goto __LL10604;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp10603 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp10603 = NULL;
    }
    if (__tmp10603 == NULL) goto __LL10604;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp10603 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp10603 = NULL;
    }
    if (__tmp10603 == NULL) goto __LL10604;
    __tmp10603 = cpy_r_method_cls;
__LL10604: ;
    if (unlikely(__tmp10603 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r27 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10605 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp10605);
        PyObject *__tmp10606;
        if (likely(Py_TYPE(__tmp10605) == CPyType_func_ir___FuncIR))
            __tmp10606 = __tmp10605;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp10605); 
            __tmp10606 = NULL;
        }
        cpy_r_r27.f0 = __tmp10606;
        PyObject *__tmp10607 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp10607);
        PyObject *__tmp10608;
        if (likely(Py_TYPE(__tmp10607) == CPyType_class_ir___ClassIR))
            __tmp10608 = __tmp10607;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp10607); 
            __tmp10608 = NULL;
        }
        cpy_r_r27.f1 = __tmp10608;
    }
    CPy_DECREF(cpy_r_method_cls);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 67, CPyStatic_vtable___globals);
        goto CPyL69;
    }
    cpy_r_r28 = cpy_r_r27.f0;
    CPy_INCREF(cpy_r_r28);
    cpy_r_child_method = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f1;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r27.f0);
    CPy_DECREF(cpy_r_r27.f1);
    cpy_r_defining_cls = cpy_r_r29;
    CPy_INCREF(cpy_r_orig_parent_method);
    if (likely(cpy_r_orig_parent_method != Py_None))
        cpy_r_r30 = cpy_r_orig_parent_method;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 70, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_orig_parent_method);
        goto CPyL72;
    }
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 70, CPyStatic_vtable___globals);
        goto CPyL72;
    }
CPyL23: ;
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_child_method, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 70, CPyStatic_vtable___globals);
        goto CPyL73;
    }
CPyL24: ;
    cpy_r_r33 = CPyDef_sametype___is_same_method_signature(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 70, CPyStatic_vtable___globals);
        goto CPyL72;
    }
    if (cpy_r_r33) goto CPyL74;
    if (likely(cpy_r_orig_parent_method != Py_None))
        cpy_r_r34 = cpy_r_orig_parent_method;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 71, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_orig_parent_method);
        goto CPyL75;
    }
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_r34, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 71, CPyStatic_vtable___globals);
        goto CPyL75;
    }
CPyL28: ;
    cpy_r_r36 = CPyStatics[288]; /* '__init__' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL31;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL31;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 71, CPyStatic_vtable___globals);
        goto CPyL75;
    }
CPyL31: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    if (cpy_r_r42) {
        goto CPyL76;
    } else
        goto CPyL77;
CPyL32: ;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_entry, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals);
        goto CPyL78;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_class_ir___ClassIR))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r43);
        goto CPyL78;
    }
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals, "str", cpy_r_r45);
        goto CPyL79;
    }
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals);
        goto CPyL80;
    }
    if (Py_TYPE(cpy_r_r47) == CPyType_func_ir___FuncIR)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10609;
    if (cpy_r_r47 == Py_None)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10609;
    CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r47);
    goto CPyL80;
__LL10609: ;
    cpy_r_r49 = CPyStatic_vtable___globals;
    cpy_r_r50 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals);
        goto CPyL81;
    }
    PyObject *cpy_r_r52[4] = {cpy_r_r44, cpy_r_r46, cpy_r_child_method, cpy_r_r48};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 4, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals);
        goto CPyL81;
    }
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_child_method);
    CPy_DECREF(cpy_r_r48);
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 73, CPyStatic_vtable___globals, "tuple", cpy_r_r54);
        goto CPyL65;
    }
    cpy_r_entry = cpy_r_r55;
    goto CPyL59;
CPyL42: ;
    cpy_r_r56 = CPySequenceTuple_GetItem(cpy_r_entry, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 76, CPyStatic_vtable___globals);
        goto CPyL82;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_class_ir___ClassIR))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 76, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r56);
        goto CPyL82;
    }
    cpy_r_r58 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 77, CPyStatic_vtable___globals);
        goto CPyL83;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 77, CPyStatic_vtable___globals, "str", cpy_r_r58);
        goto CPyL83;
    }
    cpy_r_r60 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_defining_cls)->_glue_methods;
    if (unlikely(cpy_r_r60 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'glue_methods' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r60);
    }
    CPy_DECREF(cpy_r_defining_cls);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals);
        goto CPyL84;
    }
CPyL47: ;
    cpy_r_r61 = CPySequenceTuple_GetItem(cpy_r_entry, 0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_class_ir___ClassIR))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r61);
        goto CPyL85;
    }
    cpy_r_r63 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals, "str", cpy_r_r63);
        goto CPyL86;
    }
    cpy_r_r65.f0 = cpy_r_r62;
    cpy_r_r65.f1 = cpy_r_r64;
    CPy_INCREF(cpy_r_r65.f0);
    CPy_INCREF(cpy_r_r65.f1);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = PyTuple_New(2);
    if (unlikely(cpy_r_r66 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10610 = cpy_r_r65.f0;
    PyTuple_SET_ITEM(cpy_r_r66, 0, __tmp10610);
    PyObject *__tmp10611 = cpy_r_r65.f1;
    PyTuple_SET_ITEM(cpy_r_r66, 1, __tmp10611);
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r60, cpy_r_r66);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_func_ir___FuncIR))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 78, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r67);
        goto CPyL84;
    }
    cpy_r_r69 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 79, CPyStatic_vtable___globals);
        goto CPyL87;
    }
    if (Py_TYPE(cpy_r_r69) == CPyType_func_ir___FuncIR)
        cpy_r_r70 = cpy_r_r69;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL10612;
    if (cpy_r_r69 == Py_None)
        cpy_r_r70 = cpy_r_r69;
    else {
        cpy_r_r70 = NULL;
    }
    if (cpy_r_r70 != NULL) goto __LL10612;
    CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 79, CPyStatic_vtable___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r69);
    goto CPyL87;
__LL10612: ;
    cpy_r_r71 = CPyStatic_vtable___globals;
    cpy_r_r72 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 75, CPyStatic_vtable___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r74[4] = {cpy_r_r57, cpy_r_r59, cpy_r_r68, cpy_r_r70};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 4, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 75, CPyStatic_vtable___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r70);
    if (likely(PyTuple_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 75, CPyStatic_vtable___globals, "tuple", cpy_r_r76);
        goto CPyL65;
    }
    cpy_r_entry = cpy_r_r77;
CPyL59: ;
    cpy_r_r78 = PyList_Append(cpy_r_updated, cpy_r_entry);
    CPy_DECREF(cpy_r_entry);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 81, CPyStatic_vtable___globals);
        goto CPyL65;
    }
    cpy_r_r80 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r80;
    goto CPyL3;
CPyL61: ;
    return cpy_r_updated;
CPyL62: ;
    cpy_r_r81 = NULL;
    return cpy_r_r81;
CPyL63: ;
    CPy_DecRef(cpy_r_updated);
    goto CPyL62;
CPyL64: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL61;
CPyL65: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_r10);
    goto CPyL62;
CPyL68: ;
    CPy_DECREF(cpy_r_updated);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_entry);
    CPy_DECREF(cpy_r_orig_parent_method);
    goto CPyL11;
CPyL69: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_orig_parent_method);
    goto CPyL62;
CPyL70: ;
    CPy_DECREF(cpy_r_orig_parent_method);
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL59;
CPyL71: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_orig_parent_method);
    CPy_DecRef(cpy_r_method_cls);
    goto CPyL62;
CPyL72: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_orig_parent_method);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_defining_cls);
    goto CPyL62;
CPyL73: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_orig_parent_method);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_defining_cls);
    CPy_DecRef(cpy_r_r31);
    goto CPyL62;
CPyL74: ;
    CPy_DECREF(cpy_r_orig_parent_method);
    CPy_DECREF(cpy_r_defining_cls);
    goto CPyL32;
CPyL75: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_defining_cls);
    goto CPyL62;
CPyL76: ;
    CPy_DECREF(cpy_r_defining_cls);
    goto CPyL32;
CPyL77: ;
    CPy_DECREF(cpy_r_child_method);
    goto CPyL42;
CPyL78: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_child_method);
    goto CPyL62;
CPyL79: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_r44);
    goto CPyL62;
CPyL80: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    goto CPyL62;
CPyL81: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_child_method);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r48);
    goto CPyL62;
CPyL82: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_defining_cls);
    goto CPyL62;
CPyL83: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_defining_cls);
    CPy_DecRef(cpy_r_r57);
    goto CPyL62;
CPyL84: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    goto CPyL62;
CPyL85: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    goto CPyL62;
CPyL86: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_entry);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r62);
    goto CPyL62;
CPyL87: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r68);
    goto CPyL62;
CPyL88: ;
    CPy_DecRef(cpy_r_updated);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r70);
    goto CPyL62;
}

PyObject *CPyPy_vtable___specialize_parent_vtable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cls", "parent", 0};
    static CPyArg_Parser parser = {"OO:specialize_parent_vtable", kwlist, 0};
    PyObject *obj_cls;
    PyObject *obj_parent;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cls, &obj_parent)) {
        return NULL;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    PyObject *arg_parent;
    if (likely(Py_TYPE(obj_parent) == CPyType_class_ir___ClassIR))
        arg_parent = obj_parent;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_parent); 
        goto fail;
    }
    PyObject *retval = CPyDef_vtable___specialize_parent_vtable(arg_cls, arg_parent);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/vtable.py", "specialize_parent_vtable", 57, CPyStatic_vtable___globals);
    return NULL;
}

char CPyDef_vtable_____top_level__(void) {
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
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "<module>", -1, CPyStatic_vtable___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_vtable___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "<module>", 3, CPyStatic_vtable___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_itertools;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {5};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9171]; /* (('itertools', 'itertools', 'itertools'),) */
    cpy_r_r15 = CPyStatic_vtable___globals;
    cpy_r_r16 = CPyStatics[8662]; /* 'mypyc/irbuild/vtable.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = CPyStatics[10247]; /* ('ClassIR', 'VTableEntries', 'VTableMethod') */
    cpy_r_r20 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r21 = CPyStatic_vtable___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "<module>", 7, CPyStatic_vtable___globals);
        goto CPyL8;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r22;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[10248]; /* ('is_same_method_signature',) */
    cpy_r_r24 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r25 = CPyStatic_vtable___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/vtable.py", "<module>", 8, CPyStatic_vtable___globals);
        goto CPyL8;
    }
    CPyModule_mypyc___sametype = cpy_r_r26;
    CPy_INCREF(CPyModule_mypyc___sametype);
    CPy_DECREF(cpy_r_r26);
    return 1;
CPyL8: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
}
