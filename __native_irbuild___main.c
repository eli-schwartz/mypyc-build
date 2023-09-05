#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef irbuild___mainmodule_methods[] = {
    {"build_ir", (PyCFunction)CPyPy_irbuild___main___build_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_mypy_file", (PyCFunction)CPyPy_irbuild___main___transform_mypy_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef irbuild___mainmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    irbuild___mainmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___main_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___main_internal);
        return CPyModule_mypyc___irbuild___main_internal;
    }
    CPyModule_mypyc___irbuild___main_internal = PyModule_Create(&irbuild___mainmodule);
    if (unlikely(CPyModule_mypyc___irbuild___main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___main_internal, "__name__");
    CPyStatic_irbuild___main___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___main_internal);
    if (unlikely(CPyStatic_irbuild___main___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_irbuild___main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___main_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___main_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_irbuild___main___build_ir(PyObject *cpy_r_modules, PyObject *cpy_r_graph, PyObject *cpy_r_types, PyObject *cpy_r_mapper, PyObject *cpy_r_options, PyObject *cpy_r_errors) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_singledispatch_info;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_class_irs;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_pbv;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_visitor;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_builder;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_module_ir;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_cir;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = CPyDef_prepare___build_type_map(cpy_r_mapper, cpy_r_modules, cpy_r_graph, cpy_r_types, cpy_r_options, cpy_r_errors);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 66, CPyStatic_irbuild___main___globals);
        goto CPyL33;
    }
    cpy_r_r1 = CPyDef_prepare___find_singledispatch_register_impls(cpy_r_modules, cpy_r_errors);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 67, CPyStatic_irbuild___main___globals);
        goto CPyL33;
    }
    cpy_r_singledispatch_info = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 69, CPyStatic_irbuild___main___globals);
        goto CPyL34;
    }
    cpy_r_result = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 72, CPyStatic_irbuild___main___globals);
        goto CPyL35;
    }
    cpy_r_class_irs = cpy_r_r3;
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL36;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___MypyFile))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "build_ir", 74, CPyStatic_irbuild___main___globals, "mypy.nodes.MypyFile", cpy_r_r9);
        goto CPyL37;
    }
    cpy_r_module = cpy_r_r10;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_singledispatch_info, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 76, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "build_ir", 76, CPyStatic_irbuild___main___globals, "dict", cpy_r_r11);
        goto CPyL38;
    }
    cpy_r_r13 = CPyDef_prebuildvisitor___PreBuildVisitor(cpy_r_errors, cpy_r_module, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 76, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_pbv = cpy_r_r13;
    cpy_r_r14 = CPyDef_nodes___MypyFile___accept(cpy_r_module, cpy_r_pbv);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 77, CPyStatic_irbuild___main___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL11: ;
    cpy_r_r15 = CPyDef_irbuild___visitor___IRBuilderVisitor();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 80, CPyStatic_irbuild___main___globals);
        goto CPyL39;
    }
    cpy_r_visitor = cpy_r_r15;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 82, CPyStatic_irbuild___main___globals);
        goto CPyL41;
    }
CPyL13: ;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_singledispatch_info, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 90, CPyStatic_irbuild___main___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "build_ir", 90, CPyStatic_irbuild___main___globals, "dict", cpy_r_r17);
        goto CPyL42;
    }
    cpy_r_r19 = CPyDef_builder___IRBuilder(cpy_r_r16, cpy_r_types, cpy_r_graph, cpy_r_errors, cpy_r_mapper, cpy_r_pbv, cpy_r_visitor, cpy_r_options, cpy_r_r18);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_pbv);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 81, CPyStatic_irbuild___main___globals);
        goto CPyL43;
    }
    cpy_r_builder = cpy_r_r19;
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_visitor)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_visitor)->_builder);
    }
    ((mypyc___irbuild___visitor___IRBuilderVisitorObject *)cpy_r_visitor)->_builder = cpy_r_builder;
    cpy_r_r20 = 1;
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 92, CPyStatic_irbuild___main___globals);
        goto CPyL44;
    }
    cpy_r_r21 = CPyDef_irbuild___main___transform_mypy_file(cpy_r_builder, cpy_r_module);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 95, CPyStatic_irbuild___main___globals);
        goto CPyL44;
    }
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 97, CPyStatic_irbuild___main___globals);
        goto CPyL44;
    }
CPyL19: ;
    cpy_r_r23 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_imports;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PySequence_List(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 98, CPyStatic_irbuild___main___globals);
        goto CPyL45;
    }
    cpy_r_r25 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_final_names;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_module_ir___ModuleIR(cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 96, CPyStatic_irbuild___main___globals);
        goto CPyL44;
    }
    cpy_r_module_ir = cpy_r_r28;
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 103, CPyStatic_irbuild___main___globals);
        goto CPyL46;
    }
CPyL22: ;
    cpy_r_r30 = CPyDict_SetItem(cpy_r_result, cpy_r_r29, cpy_r_module_ir);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_module_ir);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 103, CPyStatic_irbuild___main___globals);
        goto CPyL47;
    }
    cpy_r_r32 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_builder);
    cpy_r_r33 = CPyList_Extend(cpy_r_class_irs, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 104, CPyStatic_irbuild___main___globals);
        goto CPyL37;
    } else
        goto CPyL48;
CPyL24: ;
    cpy_r_r34 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r34;
    goto CPyL5;
CPyL25: ;
    cpy_r_r35 = CPyDef_attrdefined___analyze_always_defined_attrs(cpy_r_class_irs);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 106, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r36 = 0;
CPyL27: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_class_irs)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL50;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_class_irs, cpy_r_r36);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_class_ir___ClassIR))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "build_ir", 109, CPyStatic_irbuild___main___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r41);
        goto CPyL49;
    }
    cpy_r_cir = cpy_r_r42;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cir)->_is_ext_class;
    if (!cpy_r_r43) goto CPyL51;
CPyL30: ;
    cpy_r_r44 = CPyDef_vtable___compute_vtable(cpy_r_cir);
    CPy_DECREF(cpy_r_cir);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 111, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL31: ;
    cpy_r_r45 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r45;
    goto CPyL27;
CPyL32: ;
    return cpy_r_result;
CPyL33: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL34: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_singledispatch_info);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_pbv);
    goto CPyL33;
CPyL40: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL11;
CPyL41: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_pbv);
    CPy_DecRef(cpy_r_visitor);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_pbv);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r16);
    goto CPyL33;
CPyL43: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_visitor);
    goto CPyL33;
CPyL44: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_builder);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_r22);
    goto CPyL33;
CPyL46: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_builder);
    CPy_DecRef(cpy_r_module_ir);
    goto CPyL33;
CPyL47: ;
    CPy_DecRef(cpy_r_singledispatch_info);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    CPy_DecRef(cpy_r_builder);
    goto CPyL33;
CPyL48: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL24;
CPyL49: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_class_irs);
    goto CPyL33;
CPyL50: ;
    CPy_DECREF(cpy_r_class_irs);
    goto CPyL32;
CPyL51: ;
    CPy_DECREF(cpy_r_cir);
    goto CPyL31;
}

PyObject *CPyPy_irbuild___main___build_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "graph", "types", "mapper", "options", "errors", 0};
    static CPyArg_Parser parser = {"OOOOOO:build_ir", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_graph;
    PyObject *obj_types;
    PyObject *obj_mapper;
    PyObject *obj_options;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_graph, &obj_types, &obj_mapper, &obj_options, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyDict_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("dict", obj_types); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypyc___options___CompilerOptions))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_options); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___main___build_ir(arg_modules, arg_graph, arg_types, arg_mapper, arg_options, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/main.py", "build_ir", 52, CPyStatic_irbuild___main___globals);
    return NULL;
}

char CPyDef_irbuild___main___transform_mypy_file(PyObject *cpy_r_builder, PyObject *cpy_r_mypyfile) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
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
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_classes;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_node_2;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    tuple_T5OOOOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r71;
    PyObject *cpy_r__;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_mypyfile, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 119, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL1: ;
    cpy_r_r1 = CPyStatics[21]; /* 'typing' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", -1, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL11;
CPyL6: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_mypyfile, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 119, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", -1, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    cpy_r_r8 = cpy_r_r16;
CPyL11: ;
    if (!cpy_r_r8) goto CPyL13;
    return 1;
CPyL13: ;
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_mypyfile, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 124, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
CPyL14: ;
    cpy_r_r18 = ((mypy___nodes___MypyFileObject *)cpy_r_mypyfile)->_path;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_builder___IRBuilder___set_module(cpy_r_builder, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 124, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 126, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r21 = ((mypy___nodes___MypyFileObject *)cpy_r_mypyfile)->_defs;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 0;
CPyL17: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL50;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Statement)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 126, CPyStatic_irbuild___main___globals, "mypy.nodes.Statement", cpy_r_r27);
        goto CPyL51;
    }
    cpy_r_node = cpy_r_r28;
    cpy_r_r29 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ClassDef))
        cpy_r_r33 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 126, CPyStatic_irbuild___main___globals, "mypy.nodes.ClassDef", cpy_r_node);
        goto CPyL51;
    }
    cpy_r_r34 = PyList_Append(cpy_r_r20, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 126, CPyStatic_irbuild___main___globals);
        goto CPyL51;
    }
CPyL22: ;
    cpy_r_r36 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r36;
    goto CPyL17;
CPyL23: ;
    cpy_r_classes = cpy_r_r20;
    cpy_r_r37 = 0;
CPyL24: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL53;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_nodes___ClassDef))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 129, CPyStatic_irbuild___main___globals, "mypy.nodes.ClassDef", cpy_r_r42);
        goto CPyL54;
    }
    cpy_r_cls = cpy_r_r43;
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r45 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r44)->_type_to_ir;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_cls);
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 130, CPyStatic_irbuild___main___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_class_ir___ClassIR))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 130, CPyStatic_irbuild___main___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r47);
        goto CPyL54;
    }
    cpy_r_ir = cpy_r_r48;
    cpy_r_r49 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = PyList_Append(cpy_r_r49, cpy_r_ir);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_ir);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 131, CPyStatic_irbuild___main___globals);
        goto CPyL54;
    }
    cpy_r_r52 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r52;
    goto CPyL24;
CPyL30: ;
    cpy_r_r53 = CPyStatics[17]; /* '<module>' */
    cpy_r_r54 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 133, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r55 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r56 = CPyDef_builder___IRBuilder___gen_import(cpy_r_builder, cpy_r_r55, -2);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 136, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r57 = ((mypy___nodes___MypyFileObject *)cpy_r_mypyfile)->_defs;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = 0;
CPyL33: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL55;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_r57, cpy_r_r58);
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_nodes___Statement)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 139, CPyStatic_irbuild___main___globals, "mypy.nodes.Statement", cpy_r_r63);
        goto CPyL56;
    }
    cpy_r_node_2 = cpy_r_r64;
    cpy_r_r65 = 2;
    cpy_r_r66 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_node_2, cpy_r_r65);
    CPy_DECREF(cpy_r_node_2);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 140, CPyStatic_irbuild___main___globals);
        goto CPyL56;
    } else
        goto CPyL57;
CPyL36: ;
    cpy_r_r67 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r67;
    goto CPyL33;
CPyL37: ;
    cpy_r_r68 = CPyDef_builder___IRBuilder___maybe_add_implicit_return(cpy_r_builder);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 142, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r69 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r69.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 145, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_r70 = cpy_r_r69.f0;
    CPy_INCREF(cpy_r_r70);
    cpy_r_args = cpy_r_r70;
    cpy_r_r71 = cpy_r_r69.f1;
    CPy_INCREF(cpy_r_r71);
    cpy_r__ = cpy_r_r71;
    CPy_DECREF(cpy_r__);
    cpy_r_r72 = cpy_r_r69.f2;
    CPy_INCREF(cpy_r_r72);
    cpy_r_blocks = cpy_r_r72;
    cpy_r_r73 = cpy_r_r69.f3;
    CPy_INCREF(cpy_r_r73);
    cpy_r_ret_type = cpy_r_r73;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r74 = cpy_r_r69.f4;
    CPy_INCREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r69.f0);
    CPy_DECREF(cpy_r_r69.f1);
    CPy_DECREF(cpy_r_r69.f2);
    CPy_DECREF(cpy_r_r69.f3);
    CPy_DECREF(cpy_r_r69.f4);
    cpy_r__ = cpy_r_r74;
    CPy_DECREF(cpy_r__);
    cpy_r_r75 = PyList_New(0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 146, CPyStatic_irbuild___main___globals);
        goto CPyL58;
    }
    cpy_r_r76 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r76 == NULL)) {
        goto CPyL59;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 146, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r78 = CPyDef_func_ir___FuncSignature(cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 146, CPyStatic_irbuild___main___globals);
        goto CPyL58;
    }
    cpy_r_sig = cpy_r_r78;
    cpy_r_r79 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r80 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/main.py", "transform_mypy_file", "IRBuilder", "module_name", 148, CPyStatic_irbuild___main___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r80);
CPyL45: ;
    cpy_r_r81 = Py_None;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = 2;
    cpy_r_r84 = 2;
    cpy_r_r85 = 2;
    cpy_r_r86 = CPyDef_func_ir___FuncDecl(cpy_r_r79, cpy_r_r81, cpy_r_r80, cpy_r_sig, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_sig);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 148, CPyStatic_irbuild___main___globals);
        goto CPyL58;
    }
    cpy_r_r87 = CPyStatics[17]; /* '<module>' */
    cpy_r_r88 = CPY_INT_TAG;
    cpy_r_r89 = CPyDef_func_ir___FuncIR(cpy_r_r86, cpy_r_args, cpy_r_blocks, cpy_r_r88, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 147, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    cpy_r_func_ir = cpy_r_r89;
    cpy_r_r90 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = PyList_Append(cpy_r_r90, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_func_ir);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 153, CPyStatic_irbuild___main___globals);
        goto CPyL49;
    }
    return 1;
CPyL49: ;
    cpy_r_r93 = 2;
    return cpy_r_r93;
CPyL50: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL23;
CPyL51: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL49;
CPyL52: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL22;
CPyL53: ;
    CPy_DECREF(cpy_r_classes);
    goto CPyL30;
CPyL54: ;
    CPy_DecRef(cpy_r_classes);
    goto CPyL49;
CPyL55: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL37;
CPyL56: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL49;
CPyL57: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL36;
CPyL58: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    goto CPyL49;
CPyL59: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_r75);
    goto CPyL41;
CPyL60: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_sig);
    goto CPyL49;
}

PyObject *CPyPy_irbuild___main___transform_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "mypyfile", 0};
    static CPyArg_Parser parser = {"OO:transform_mypy_file", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_mypyfile;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_mypyfile)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_mypyfile;
    if (likely(Py_TYPE(obj_mypyfile) == CPyType_nodes___MypyFile))
        arg_mypyfile = obj_mypyfile;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_mypyfile); 
        goto fail;
    }
    char retval = CPyDef_irbuild___main___transform_mypy_file(arg_builder, arg_mypyfile);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/main.py", "transform_mypy_file", 116, CPyStatic_irbuild___main___globals);
    return NULL;
}

char CPyDef_irbuild___main_____top_level__(void) {
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
    tuple_T2OO cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", -1, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_irbuild___main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 23, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10180]; /* ('Any', 'Callable', 'TypeVar', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_irbuild___main___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 25, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10036]; /* ('Graph',) */
    cpy_r_r14 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r15 = CPyStatic_irbuild___main___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 27, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypy___build = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10181]; /* ('ClassDef', 'Expression', 'MypyFile') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_irbuild___main___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 28, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r22 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r23 = CPyStatic_irbuild___main___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 29, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypy___state = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9157]; /* ('Type',) */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_irbuild___main___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 30, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10182]; /* ('analyze_always_defined_attrs',) */
    cpy_r_r30 = CPyStatics[6679]; /* 'mypyc.analysis.attrdefined' */
    cpy_r_r31 = CPyStatic_irbuild___main___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 31, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___analysis___attrdefined = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___analysis___attrdefined);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10183]; /* ('TOP_LEVEL_NAME',) */
    cpy_r_r34 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r35 = CPyStatic_irbuild___main___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 32, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___common = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r38 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r39 = CPyStatic_irbuild___main___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 33, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___errors = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10008]; /* ('FuncDecl', 'FuncIR', 'FuncSignature') */
    cpy_r_r42 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r43 = CPyStatic_irbuild___main___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 34, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10184]; /* ('ModuleIR', 'ModuleIRs') */
    cpy_r_r46 = CPyStatics[7557]; /* 'mypyc.ir.module_ir' */
    cpy_r_r47 = CPyStatic_irbuild___main___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 35, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___ir___module_ir = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___ir___module_ir);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10185]; /* ('none_rprimitive',) */
    cpy_r_r50 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r51 = CPyStatic_irbuild___main___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 36, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r54 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r55 = CPyStatic_irbuild___main___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 37, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[9984]; /* ('Mapper',) */
    cpy_r_r58 = CPyStatics[7560]; /* 'mypyc.irbuild.mapper' */
    cpy_r_r59 = CPyStatic_irbuild___main___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 38, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___mapper = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___irbuild___mapper);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[10049]; /* ('PreBuildVisitor',) */
    cpy_r_r62 = CPyStatics[8091]; /* 'mypyc.irbuild.prebuildvisitor' */
    cpy_r_r63 = CPyStatic_irbuild___main___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 39, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___prebuildvisitor = cpy_r_r64;
    CPy_INCREF(CPyModule_mypyc___irbuild___prebuildvisitor);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[10186]; /* ('build_type_map', 'find_singledispatch_register_impls') */
    cpy_r_r66 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r67 = CPyStatic_irbuild___main___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 40, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___prepare = cpy_r_r68;
    CPy_INCREF(CPyModule_mypyc___irbuild___prepare);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[10187]; /* ('IRBuilderVisitor',) */
    cpy_r_r70 = CPyStatics[8466]; /* 'mypyc.irbuild.visitor' */
    cpy_r_r71 = CPyStatic_irbuild___main___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 41, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___visitor = cpy_r_r72;
    CPy_INCREF(CPyModule_mypyc___irbuild___visitor);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[10188]; /* ('compute_vtable',) */
    cpy_r_r74 = CPyStatics[8468]; /* 'mypyc.irbuild.vtable' */
    cpy_r_r75 = CPyStatic_irbuild___main___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 42, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___irbuild___vtable = cpy_r_r76;
    CPy_INCREF(CPyModule_mypyc___irbuild___vtable);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[9929]; /* ('CompilerOptions',) */
    cpy_r_r78 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r79 = CPyStatic_irbuild___main___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 43, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPyModule_mypyc___options = cpy_r_r80;
    CPy_INCREF(CPyModule_mypyc___options);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatics[1467]; /* 'F' */
    cpy_r_r82 = CPyStatic_irbuild___main___globals;
    cpy_r_r83 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r85 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r86 = CPyStatic_irbuild___main___globals;
    cpy_r_r87 = CPyStatics[507]; /* 'Any' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL39;
    }
    cpy_r_r89.f0 = cpy_r_r85;
    cpy_r_r89.f1 = cpy_r_r88;
    CPy_INCREF(cpy_r_r89.f0);
    CPy_INCREF(cpy_r_r89.f1);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = PyTuple_New(2);
    if (unlikely(cpy_r_r90 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10366 = cpy_r_r89.f0;
    PyTuple_SET_ITEM(cpy_r_r90, 0, __tmp10366);
    PyObject *__tmp10367 = cpy_r_r89.f1;
    PyTuple_SET_ITEM(cpy_r_r90, 1, __tmp10367);
    cpy_r_r91 = PyObject_GetItem(cpy_r_r84, cpy_r_r90);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r92 = CPyStatic_irbuild___main___globals;
    cpy_r_r93 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r95[2] = {cpy_r_r81, cpy_r_r91};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r98 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, cpy_r_r97);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r91);
    cpy_r_r99 = CPyStatic_irbuild___main___globals;
    cpy_r_r100 = CPyStatics[1467]; /* 'F' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 47, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r103 = CPyStatic_state___state;
    if (likely(cpy_r_r103 != NULL)) goto CPyL31;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 48, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r105 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r106 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r107[2] = {cpy_r_r103, cpy_r_r106};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = PyObject_VectorcallMethod(cpy_r_r105, cpy_r_r108, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 48, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r110 = CPyStatic_irbuild___main___globals;
    cpy_r_r111 = CPyStatics[8469]; /* 'strict_optional_dec' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r110, cpy_r_r111, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 48, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r114 = CPyStatic_irbuild___main___globals;
    cpy_r_r115 = CPyStatics[7419]; /* 'build_ir' */
    cpy_r_r116 = CPyDict_GetItem(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 51, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    cpy_r_r117 = CPyStatic_irbuild___main___globals;
    cpy_r_r118 = CPyStatics[8469]; /* 'strict_optional_dec' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 51, CPyStatic_irbuild___main___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r120[1] = {cpy_r_r116};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_r119, cpy_r_r121, 1, 0);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 51, CPyStatic_irbuild___main___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_r116);
    cpy_r_r123 = CPyStatic_irbuild___main___globals;
    cpy_r_r124 = CPyStatics[7419]; /* 'build_ir' */
    cpy_r_r125 = CPyDict_SetItem(cpy_r_r123, cpy_r_r124, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/irbuild/main.py", "<module>", 51, CPyStatic_irbuild___main___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r127 = 2;
    return cpy_r_r127;
CPyL39: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL38;
}
