#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
semanal_enum___EnumCallAnalyzer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *semanal_enum___EnumCallAnalyzer_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_enum___EnumCallAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api);

static PyObject *
semanal_enum___EnumCallAnalyzer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_enum___EnumCallAnalyzer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_enum___EnumCallAnalyzer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_enum___EnumCallAnalyzer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_enum___EnumCallAnalyzer_traverse(mypy___semanal_enum___EnumCallAnalyzerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_api);
    return 0;
}

static int
semanal_enum___EnumCallAnalyzer_clear(mypy___semanal_enum___EnumCallAnalyzerObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_api);
    return 0;
}

static void
semanal_enum___EnumCallAnalyzer_dealloc(mypy___semanal_enum___EnumCallAnalyzerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_enum___EnumCallAnalyzer_dealloc)
    semanal_enum___EnumCallAnalyzer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_enum___EnumCallAnalyzer_vtable[7];
static bool
CPyDef_semanal_enum___EnumCallAnalyzer_trait_vtable_setup(void)
{
    CPyVTableItem semanal_enum___EnumCallAnalyzer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___process_enum_call,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___check_enum_call,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___parse_enum_call_args,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg,
        (CPyVTableItem)CPyDef_semanal_enum___EnumCallAnalyzer___fail,
    };
    memcpy(semanal_enum___EnumCallAnalyzer_vtable, semanal_enum___EnumCallAnalyzer_vtable_scratch, sizeof(semanal_enum___EnumCallAnalyzer_vtable));
    return 1;
}

static PyObject *
semanal_enum___EnumCallAnalyzer_get_options(mypy___semanal_enum___EnumCallAnalyzerObject *self, void *closure);
static int
semanal_enum___EnumCallAnalyzer_set_options(mypy___semanal_enum___EnumCallAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_enum___EnumCallAnalyzer_get_api(mypy___semanal_enum___EnumCallAnalyzerObject *self, void *closure);
static int
semanal_enum___EnumCallAnalyzer_set_api(mypy___semanal_enum___EnumCallAnalyzerObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_enum___EnumCallAnalyzer_getseters[] = {
    {"options",
     (getter)semanal_enum___EnumCallAnalyzer_get_options, (setter)semanal_enum___EnumCallAnalyzer_set_options,
     NULL, NULL},
    {"api",
     (getter)semanal_enum___EnumCallAnalyzer_get_api, (setter)semanal_enum___EnumCallAnalyzer_set_api,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_enum___EnumCallAnalyzer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_enum_call",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___process_enum_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_enum_call",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___check_enum_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_enum_call_typeinfo",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_enum_call_args",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___parse_enum_call_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail_enum_call_arg",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_enum___EnumCallAnalyzer___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_enum___EnumCallAnalyzer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "EnumCallAnalyzer",
    .tp_new = semanal_enum___EnumCallAnalyzer_new,
    .tp_dealloc = (destructor)semanal_enum___EnumCallAnalyzer_dealloc,
    .tp_traverse = (traverseproc)semanal_enum___EnumCallAnalyzer_traverse,
    .tp_clear = (inquiry)semanal_enum___EnumCallAnalyzer_clear,
    .tp_getset = semanal_enum___EnumCallAnalyzer_getseters,
    .tp_methods = semanal_enum___EnumCallAnalyzer_methods,
    .tp_init = semanal_enum___EnumCallAnalyzer_init,
    .tp_basicsize = sizeof(mypy___semanal_enum___EnumCallAnalyzerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_enum___EnumCallAnalyzer_template = &CPyType_semanal_enum___EnumCallAnalyzer_template_;

static PyObject *
semanal_enum___EnumCallAnalyzer_setup(PyTypeObject *type)
{
    mypy___semanal_enum___EnumCallAnalyzerObject *self;
    self = (mypy___semanal_enum___EnumCallAnalyzerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_enum___EnumCallAnalyzer_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_enum___EnumCallAnalyzer(PyObject *cpy_r_options, PyObject *cpy_r_api)
{
    PyObject *self = semanal_enum___EnumCallAnalyzer_setup(CPyType_semanal_enum___EnumCallAnalyzer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_enum___EnumCallAnalyzer_____init__(self, cpy_r_options, cpy_r_api);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_enum___EnumCallAnalyzer_get_options(mypy___semanal_enum___EnumCallAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'EnumCallAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_enum___EnumCallAnalyzer_set_options(mypy___semanal_enum___EnumCallAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EnumCallAnalyzer' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___options___Options))
        tmp = value;
    else {
        CPy_TypeError("mypy.options.Options", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
semanal_enum___EnumCallAnalyzer_get_api(mypy___semanal_enum___EnumCallAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api' of 'EnumCallAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api);
    PyObject *retval = self->_api;
    return retval;
}

static int
semanal_enum___EnumCallAnalyzer_set_api(mypy___semanal_enum___EnumCallAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EnumCallAnalyzer' object attribute 'api' cannot be deleted");
        return -1;
    }
    if (self->_api != NULL) {
        CPy_DECREF(self->_api);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_semanal___SemanticAnalyzer))
        tmp = value;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_api = tmp;
    return 0;
}
static PyMethodDef semanal_enummodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_enummodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_enum",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_enummodule_methods
};

PyObject *CPyInit_mypy___semanal_enum(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_enum_internal) {
        Py_INCREF(CPyModule_mypy___semanal_enum_internal);
        return CPyModule_mypy___semanal_enum_internal;
    }
    CPyModule_mypy___semanal_enum_internal = PyModule_Create(&semanal_enummodule);
    if (unlikely(CPyModule_mypy___semanal_enum_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_enum_internal, "__name__");
    CPyStatic_semanal_enum___globals = PyModule_GetDict(CPyModule_mypy___semanal_enum_internal);
    if (unlikely(CPyStatic_semanal_enum___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_enum_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_enum_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_enum_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_semanal_enum___ENUM_BASES);
    CPyStatic_semanal_enum___ENUM_BASES = NULL;
    CPy_XDECREF(CPyStatic_semanal_enum___ENUM_SPECIAL_PROPS);
    CPyStatic_semanal_enum___ENUM_SPECIAL_PROPS = NULL;
    Py_CLEAR(CPyType_semanal_enum___EnumCallAnalyzer);
    return NULL;
}

char CPyDef_semanal_enum___EnumCallAnalyzer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_api) {
    CPy_INCREF(cpy_r_options);
    ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_options = cpy_r_options;
    CPy_INCREF(cpy_r_api);
    ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api = cpy_r_api;
    return 1;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "api", 0};
    PyObject *obj_options;
    PyObject *obj_api;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_options, &obj_api)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_api); 
        goto fail;
    }
    char retval = CPyDef_semanal_enum___EnumCallAnalyzer_____init__(arg_self, arg_options, arg_api);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "__init__", 58, CPyStatic_semanal_enum___globals);
    return NULL;
}

char CPyDef_semanal_enum___EnumCallAnalyzer___process_enum_call(PyObject *cpy_r_self, PyObject *cpy_r_s, char cpy_r_is_func_scope) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_enum_call;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 2;
    if (cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r6 = CPyList_GetItemShortBorrow(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 68, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    cpy_r_r7 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL4;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL5;
CPyL4: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    cpy_r_r11 = cpy_r_r15;
CPyL5: ;
    if (cpy_r_r11) goto CPyL7;
CPyL6: ;
    return 0;
CPyL7: ;
    cpy_r_r16 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 70, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    if (Py_TYPE(cpy_r_r17) == CPyType_nodes___NameExpr)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL5786;
    if (Py_TYPE(cpy_r_r17) == CPyType_nodes___MemberExpr)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL5786;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "process_enum_call", 70, CPyStatic_semanal_enum___globals, "union[mypy.nodes.NameExpr, mypy.nodes.MemberExpr]", cpy_r_r17);
    goto CPyL24;
__LL5786: ;
    cpy_r_lvalue = cpy_r_r18;
    cpy_r_r19 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL12;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r23 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "process_enum_call", 71, CPyStatic_semanal_enum___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL25;
    }
    cpy_r_r24 = ((mypy___nodes___NameExprObject *)cpy_r_r23)->_name;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL14;
CPyL12: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r26 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "process_enum_call", 71, CPyStatic_semanal_enum___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL25;
    }
    cpy_r_r27 = ((mypy___nodes___MemberExprObject *)cpy_r_r26)->_name;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r25 = cpy_r_r27;
CPyL14: ;
    cpy_r_name = cpy_r_r25;
    cpy_r_r28 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_semanal_enum___EnumCallAnalyzer___check_enum_call(cpy_r_self, cpy_r_r28, cpy_r_name, cpy_r_is_func_scope);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 72, CPyStatic_semanal_enum___globals);
        goto CPyL26;
    }
    cpy_r_enum_call = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_enum_call == cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL27;
    } else
        goto CPyL17;
CPyL16: ;
    return 0;
CPyL17: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (cpy_r_r35) {
        goto CPyL28;
    } else
        goto CPyL29;
CPyL18: ;
    cpy_r_r36 = CPyStatics[5162]; /* 'Enum type as attribute is not supported' */
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___MemberExpr))
        cpy_r_r37 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "process_enum_call", 76, CPyStatic_semanal_enum___globals, "mypy.nodes.MemberExpr", cpy_r_lvalue);
        goto CPyL24;
    }
    cpy_r_r38 = CPyDef_semanal_enum___EnumCallAnalyzer___fail(cpy_r_self, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 76, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    return 0;
CPyL21: ;
    cpy_r_r39 = ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r39);
    if (likely(cpy_r_enum_call != Py_None))
        cpy_r_r40 = cpy_r_enum_call;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "process_enum_call", 79, CPyStatic_semanal_enum___globals, "mypy.nodes.TypeInfo", cpy_r_enum_call);
        goto CPyL30;
    }
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPY_GET_METHOD_TRAIT(cpy_r_r39, CPyType_semanal_shared___SemanticAnalyzerInterface, 10, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *, char, char, char))(cpy_r_r39, cpy_r_name, cpy_r_r40, cpy_r_s, cpy_r_r41, cpy_r_r42, cpy_r_r43); /* add_symbol */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 79, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL25: ;
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_lvalue);
    CPy_DecRef(cpy_r_name);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_lvalue);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_enum_call);
    goto CPyL16;
CPyL28: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_enum_call);
    goto CPyL18;
CPyL29: ;
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r39);
    goto CPyL24;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___process_enum_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", "is_func_scope", 0};
    static CPyArg_Parser parser = {"OO:process_enum_call", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_is_func_scope;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_is_func_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    char arg_is_func_scope;
    if (unlikely(!PyBool_Check(obj_is_func_scope))) {
        CPy_TypeError("bool", obj_is_func_scope); goto fail;
    } else
        arg_is_func_scope = obj_is_func_scope == Py_True;
    char retval = CPyDef_semanal_enum___EnumCallAnalyzer___process_enum_call(arg_self, arg_s, arg_is_func_scope);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "process_enum_call", 62, CPyStatic_semanal_enum___globals);
    return NULL;
}

PyObject *CPyDef_semanal_enum___EnumCallAnalyzer___check_enum_call(PyObject *cpy_r_self, PyObject *cpy_r_node, PyObject *cpy_r_var_name, char cpy_r_is_func_scope) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    tuple_T3OOC cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_values;
    char cpy_r_r38;
    char cpy_r_ok;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_name;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL2: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r5 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 99, CPyStatic_semanal_enum___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL53;
    }
    cpy_r_call = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    CPy_INCREF(cpy_r_r6);
    cpy_r_callee = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL5;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL6;
CPyL5: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    cpy_r_r11 = cpy_r_r15;
CPyL6: ;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r16 = cpy_r_r11;
    goto CPyL9;
CPyL8: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL9: ;
    if (cpy_r_r16) {
        goto CPyL11;
    } else
        goto CPyL54;
CPyL10: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL11: ;
    if (likely((Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_callee) == CPyType_nodes___RefExpr)))
        cpy_r_r22 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 103, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_callee);
        goto CPyL55;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 103, CPyStatic_semanal_enum___globals);
        goto CPyL55;
    }
CPyL13: ;
    cpy_r_fullname = cpy_r_r23;
    cpy_r_r24 = CPyStatic_semanal_enum___ENUM_BASES;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_BASES\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 104, CPyStatic_semanal_enum___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r26 = PySequence_Contains(cpy_r_r24, cpy_r_fullname);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 104, CPyStatic_semanal_enum___globals);
        goto CPyL57;
    }
    cpy_r_r28 = cpy_r_r26;
    cpy_r_r29 = cpy_r_r28 ^ 1;
    if (cpy_r_r29) {
        goto CPyL58;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r30 = Py_None;
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL19: ;
    cpy_r_r31 = CPyStatics[224]; /* '.' */
    cpy_r_r32 = PyUnicode_Split(cpy_r_fullname, cpy_r_r31, -1);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 106, CPyStatic_semanal_enum___globals);
        goto CPyL57;
    }
    cpy_r_r33 = CPyList_GetItemShort(cpy_r_r32, -2);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 106, CPyStatic_semanal_enum___globals);
        goto CPyL57;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 106, CPyStatic_semanal_enum___globals, "str", cpy_r_r33);
        goto CPyL57;
    }
    cpy_r_r35 = CPyDef_semanal_enum___EnumCallAnalyzer___parse_enum_call_args(cpy_r_self, cpy_r_call, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 106, CPyStatic_semanal_enum___globals);
        goto CPyL57;
    }
    cpy_r_r36 = cpy_r_r35.f0;
    CPy_INCREF(cpy_r_r36);
    cpy_r_items = cpy_r_r36;
    cpy_r_r37 = cpy_r_r35.f1;
    CPy_INCREF(cpy_r_r37);
    cpy_r_values = cpy_r_r37;
    cpy_r_r38 = cpy_r_r35.f2;
    CPy_DECREF(cpy_r_r35.f0);
    CPy_DECREF(cpy_r_r35.f1);
    cpy_r_ok = cpy_r_r38;
    if (cpy_r_ok) goto CPyL28;
    cpy_r_r39 = PyList_New(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 109, CPyStatic_semanal_enum___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r40 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 109, CPyStatic_semanal_enum___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL60;
    }
    cpy_r_r41 = ((mypy___nodes___CallExprObject *)cpy_r_r40)->_line;
    CPyTagged_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo(cpy_r_self, cpy_r_var_name, cpy_r_r39, cpy_r_fullname, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_fullname);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 109, CPyStatic_semanal_enum___globals);
        goto CPyL61;
    }
    cpy_r_info = cpy_r_r42;
    goto CPyL47;
CPyL28: ;
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    cpy_r_r44 = CPyList_GetItemShort(cpy_r_r43, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 111, CPyStatic_semanal_enum___globals);
        goto CPyL59;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r44, CPyType_nodes___Expression)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 111, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r44);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_nodes___StrExpr))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 111, CPyStatic_semanal_enum___globals, "mypy.nodes.StrExpr", cpy_r_r45);
        goto CPyL62;
    }
    cpy_r_r47 = ((mypy___nodes___StrExprObject *)cpy_r_r46)->_value;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    cpy_r_name = cpy_r_r47;
    cpy_r_r48 = PyUnicode_Compare(cpy_r_name, cpy_r_var_name);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL34;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL34;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 112, CPyStatic_semanal_enum___globals);
        goto CPyL63;
    }
CPyL34: ;
    cpy_r_r53 = cpy_r_r48 != 0;
    if (cpy_r_r53) goto CPyL36;
    if (!cpy_r_is_func_scope) goto CPyL40;
CPyL36: ;
    cpy_r_r54 = CPyStatics[1784]; /* '@' */
    cpy_r_r55 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyTagged_Str(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 114, CPyStatic_semanal_enum___globals);
        goto CPyL63;
    }
    cpy_r_r57 = PyUnicode_Concat(cpy_r_r54, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 114, CPyStatic_semanal_enum___globals);
        goto CPyL63;
    }
    cpy_r_r58 = CPyStr_Append(cpy_r_name, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 114, CPyStatic_semanal_enum___globals);
        goto CPyL59;
    }
    cpy_r_name = cpy_r_r58;
CPyL40: ;
    cpy_r_r59 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_line;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo(cpy_r_self, cpy_r_name, cpy_r_items, cpy_r_fullname, cpy_r_r59);
    CPy_DECREF(cpy_r_fullname);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 115, CPyStatic_semanal_enum___globals);
        goto CPyL64;
    }
    cpy_r_info = cpy_r_r60;
    cpy_r_r61 = PyUnicode_Compare(cpy_r_name, cpy_r_var_name);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL44;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL44;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 117, CPyStatic_semanal_enum___globals);
        goto CPyL65;
    }
CPyL44: ;
    cpy_r_r66 = cpy_r_r61 != 0;
    if (cpy_r_r66) goto CPyL46;
    if (!cpy_r_is_func_scope) goto CPyL66;
CPyL46: ;
    cpy_r_r67 = ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPY_GET_METHOD_TRAIT(cpy_r_r67, CPyType_semanal_shared___SemanticAnalyzerInterface, 11, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r67, cpy_r_name, cpy_r_info); /* add_symbol_skip_local */
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 118, CPyStatic_semanal_enum___globals);
        goto CPyL67;
    }
CPyL47: ;
    cpy_r_r69 = CPyDef_nodes___EnumCallExpr(cpy_r_info, cpy_r_items, cpy_r_values);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 119, CPyStatic_semanal_enum___globals);
        goto CPyL68;
    }
    CPy_DECREF(((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed);
    ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed = cpy_r_r69;
    cpy_r_r71 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_analyzed;
    CPy_INCREF(cpy_r_r71);
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_nodes___EnumCallExpr))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 120, CPyStatic_semanal_enum___globals, "mypy.nodes.EnumCallExpr", cpy_r_r71);
        goto CPyL68;
    }
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPyDef_nodes___Context___set_line(cpy_r_r72, cpy_r_call, cpy_r_r73, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 120, CPyStatic_semanal_enum___globals);
        goto CPyL69;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r77 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "check_enum_call", 121, CPyStatic_semanal_enum___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL69;
    }
    cpy_r_r78 = ((mypy___nodes___CallExprObject *)cpy_r_r77)->_line;
    CPyTagged_INCREF(cpy_r_r78);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_line = cpy_r_r78;
    cpy_r_r79 = 1;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 121, CPyStatic_semanal_enum___globals);
        goto CPyL69;
    }
    return cpy_r_info;
CPyL53: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL54: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_callee);
    goto CPyL10;
CPyL55: ;
    CPy_DecRef(cpy_r_call);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL14;
CPyL57: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL53;
CPyL58: ;
    CPy_DECREF(cpy_r_call);
    CPy_DECREF(cpy_r_fullname);
    goto CPyL18;
CPyL59: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    goto CPyL53;
CPyL60: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r39);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r45);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_name);
    goto CPyL53;
CPyL64: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_name);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_name);
    goto CPyL53;
CPyL66: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL47;
CPyL67: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_info);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_call);
    CPy_DecRef(cpy_r_info);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL53;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___check_enum_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", "var_name", "is_func_scope", 0};
    static CPyArg_Parser parser = {"OOO:check_enum_call", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_var_name;
    PyObject *obj_is_func_scope;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_var_name, &obj_is_func_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    PyObject *arg_var_name;
    if (likely(PyUnicode_Check(obj_var_name)))
        arg_var_name = obj_var_name;
    else {
        CPy_TypeError("str", obj_var_name); 
        goto fail;
    }
    char arg_is_func_scope;
    if (unlikely(!PyBool_Check(obj_is_func_scope))) {
        CPy_TypeError("bool", obj_is_func_scope); goto fail;
    } else
        arg_is_func_scope = obj_is_func_scope == Py_True;
    PyObject *retval = CPyDef_semanal_enum___EnumCallAnalyzer___check_enum_call(arg_self, arg_node, arg_var_name, arg_is_func_scope);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "check_enum_call", 82, CPyStatic_semanal_enum___globals);
    return NULL;
}

PyObject *CPyDef_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_items, PyObject *cpy_r_fullname, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_var;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 2, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r0, cpy_r_fullname, cpy_r_r1); /* named_type_or_none */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 127, CPyStatic_semanal_enum___globals);
        goto CPyL20;
    }
    cpy_r_base = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_base != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL4;
    } else
        goto CPyL21;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 128, CPyStatic_semanal_enum___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_base != Py_None))
        cpy_r_r7 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 129, CPyStatic_semanal_enum___globals, "mypy.types.Instance", cpy_r_base);
        goto CPyL22;
    }
    cpy_r_r8 = CPY_GET_METHOD_TRAIT(cpy_r_r6, CPyType_semanal_shared___SemanticAnalyzerInterface, 6, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r6, cpy_r_name, cpy_r_r7, cpy_r_line); /* basic_new_typeinfo */
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 129, CPyStatic_semanal_enum___globals);
        goto CPyL20;
    }
    cpy_r_info = cpy_r_r8;
    cpy_r_r9 = CPyDef_nodes___TypeInfo___calculate_metaclass_type(cpy_r_info);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 130, CPyStatic_semanal_enum___globals);
        goto CPyL23;
    }
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 130, CPyStatic_semanal_enum___globals);
        goto CPyL23;
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_enum = 1;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 131, CPyStatic_semanal_enum___globals);
        goto CPyL23;
    }
    cpy_r_r12 = 0;
CPyL10: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL19;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 132, CPyStatic_semanal_enum___globals, "str", cpy_r_r17);
        goto CPyL23;
    }
    cpy_r_item = cpy_r_r18;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_nodes___Var(cpy_r_item, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 133, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    cpy_r_var = cpy_r_r20;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_info;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_property = 1;
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 136, CPyStatic_semanal_enum___globals);
        goto CPyL25;
    }
CPyL14: ;
    cpy_r_r24 = CPyStatics[224]; /* '.' */
    cpy_r_r25 = CPyStr_Build(3, cpy_r_r23, cpy_r_r24, cpy_r_item);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 136, CPyStatic_semanal_enum___globals);
        goto CPyL25;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_r25;
    cpy_r_r27 = 2;
    cpy_r_r28 = 2;
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_var);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 137, CPyStatic_semanal_enum___globals);
        goto CPyL24;
    }
    cpy_r_r33 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/semanal_enum.py", "build_enum_call_typeinfo", "TypeInfo", "names", 137, CPyStatic_semanal_enum___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r33);
CPyL17: ;
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r33, cpy_r_item, cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 137, CPyStatic_semanal_enum___globals);
        goto CPyL23;
    }
    cpy_r_r36 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r36;
    goto CPyL10;
CPyL19: ;
    return cpy_r_info;
CPyL20: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL21: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL2;
CPyL22: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_item);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_var);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "items", "fullname", "line", 0};
    static CPyArg_Parser parser = {"OOOO:build_enum_call_typeinfo", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_items;
    PyObject *obj_fullname;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_items, &obj_fullname, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_items;
    if (likely(PyList_Check(obj_items)))
        arg_items = obj_items;
    else {
        CPy_TypeError("list", obj_items); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_semanal_enum___EnumCallAnalyzer___build_enum_call_typeinfo(arg_self, arg_name, arg_items, arg_fullname, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "build_enum_call_typeinfo", 124, CPyStatic_semanal_enum___globals);
    return NULL;
}

tuple_T3OOC CPyDef_semanal_enum___EnumCallAnalyzer___parse_enum_call_args(PyObject *cpy_r_self, PyObject *cpy_r_call, PyObject *cpy_r_class_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_arg_kind;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T3OOC cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T3OOC cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T3OOC cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_valid_name;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_arg_name;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T3OOC cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    tuple_T3OOC cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyTagged cpy_r_r137;
    CPyPtr cpy_r_r138;
    int64_t cpy_r_r139;
    CPyTagged cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_field;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    CPyTagged cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyPtr cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyPtr cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyPtr cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_seq_items;
    char cpy_r_r166;
    CPyPtr cpy_r_r167;
    int64_t cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyPtr cpy_r_r171;
    int64_t cpy_r_r172;
    CPyTagged cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_seq_item;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    CPyTagged cpy_r_r179;
    char cpy_r_r180;
    CPyTagged cpy_r_r181;
    CPyPtr cpy_r_r182;
    int64_t cpy_r_r183;
    CPyTagged cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_seq_item_2;
    PyObject *cpy_r_r188;
    CPyPtr cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    CPyPtr cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    int64_t cpy_r_r209;
    CPyTagged cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyPtr cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    CPyPtr cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    char cpy_r_r228;
    CPyTagged cpy_r_r229;
    CPyTagged cpy_r_r230;
    CPyPtr cpy_r_r231;
    int64_t cpy_r_r232;
    CPyTagged cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_seq_item_3;
    PyObject *cpy_r_r237;
    CPyPtr cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    CPyPtr cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    CPyPtr cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    CPyPtr cpy_r_r264;
    PyObject *cpy_r_r265;
    char cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    CPyTagged cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    tuple_T3OOC cpy_r_r278;
    PyObject *cpy_r_r279;
    CPyPtr cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    CPyTagged cpy_r_r285;
    CPyPtr cpy_r_r286;
    int64_t cpy_r_r287;
    CPyTagged cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    tuple_T2OO cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    CPyPtr cpy_r_r295;
    PyObject *cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    tuple_T3OOC cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    int32_t cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    int32_t cpy_r_r306;
    char cpy_r_r307;
    CPyTagged cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    CPyPtr cpy_r_r311;
    PyObject *cpy_r_r312;
    char cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    CPyPtr cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    CPyPtr cpy_r_r321;
    PyObject *cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    CPyPtr cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    CPyPtr cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    int32_t cpy_r_r346;
    char cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    CPyTagged cpy_r_r356;
    CPyPtr cpy_r_r357;
    int64_t cpy_r_r358;
    CPyTagged cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    int32_t cpy_r_r363;
    char cpy_r_r364;
    CPyTagged cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    int32_t cpy_r_r377;
    char cpy_r_r378;
    char cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    CPyTagged cpy_r_r390;
    CPyPtr cpy_r_r391;
    int64_t cpy_r_r392;
    CPyTagged cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    int32_t cpy_r_r397;
    char cpy_r_r398;
    CPyTagged cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    tuple_T3OOC cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    tuple_T3OOC cpy_r_r407;
    CPyPtr cpy_r_r408;
    int64_t cpy_r_r409;
    CPyTagged cpy_r_r410;
    char cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    tuple_T3OOC cpy_r_r414;
    CPyPtr cpy_r_r415;
    int64_t cpy_r_r416;
    CPyTagged cpy_r_r417;
    char cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    CPyPtr cpy_r_r421;
    CPyPtr cpy_r_r422;
    CPyPtr cpy_r_r423;
    int64_t cpy_r_r424;
    CPyTagged cpy_r_r425;
    PyObject *cpy_r_r426;
    CPyPtr cpy_r_r427;
    int64_t cpy_r_r428;
    CPyTagged cpy_r_r429;
    CPyPtr cpy_r_r430;
    int64_t cpy_r_r431;
    CPyTagged cpy_r_r432;
    char cpy_r_r433;
    char cpy_r_r434;
    tuple_T3OOC cpy_r_r435;
    tuple_T3OOC cpy_r_r436;
    cpy_r_r0 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL236;
    }
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL237;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___ArgKind))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals, "mypy.nodes.ArgKind", cpy_r_r10);
        goto CPyL238;
    }
    cpy_r_arg_kind = cpy_r_r11;
    cpy_r_r12 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL239;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r14 = cpy_r_arg_kind == cpy_r_r12;
    if (cpy_r_r14) {
        goto CPyL240;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL13;
CPyL9: ;
    cpy_r_r16 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL241;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r18 = cpy_r_arg_kind == cpy_r_r16;
    CPy_DECREF(cpy_r_arg_kind);
    cpy_r_r15 = cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = cpy_r_r15 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL238;
    }
    cpy_r_r21 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r21;
    goto CPyL2;
CPyL15: ;
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[761]; /* 'all' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL242;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r4};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL242;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 148, CPyStatic_semanal_enum___globals);
        goto CPyL243;
    }
    if (cpy_r_r28) {
        goto CPyL22;
    } else
        goto CPyL244;
CPyL19: ;
    cpy_r_r29 = CPyStatics[5163]; /* 'Unexpected arguments to ' */
    cpy_r_r30 = CPyStatics[4970]; /* '()' */
    cpy_r_r31 = CPyStr_Build(3, cpy_r_r29, cpy_r_class_name, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 149, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r32 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r31, cpy_r_call);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 149, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r32;
CPyL22: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)4;
    if (cpy_r_r36) {
        goto CPyL245;
    } else
        goto CPyL26;
CPyL23: ;
    cpy_r_r37 = CPyStatics[4969]; /* 'Too few arguments for ' */
    cpy_r_r38 = CPyStatics[4970]; /* '()' */
    cpy_r_r39 = CPyStr_Build(3, cpy_r_r37, cpy_r_class_name, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 151, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r40 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r39, cpy_r_call);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 151, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r40;
CPyL26: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r43 > (Py_ssize_t)12;
    if (cpy_r_r44) {
        goto CPyL246;
    } else
        goto CPyL30;
CPyL27: ;
    cpy_r_r45 = CPyStatics[5164]; /* 'Too many arguments for ' */
    cpy_r_r46 = CPyStatics[4970]; /* '()' */
    cpy_r_r47 = CPyStr_Build(3, cpy_r_r45, cpy_r_class_name, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 153, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r48 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r47, cpy_r_call);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 153, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r48;
CPyL30: ;
    cpy_r_r49 = CPyStatics[2242]; /* 'value' */
    cpy_r_r50 = CPyStatics[2403]; /* 'names' */
    cpy_r_r51 = CPyStatics[408]; /* 'module' */
    cpy_r_r52 = CPyStatics[5165]; /* 'qualname' */
    cpy_r_r53 = CPyStatics[802]; /* 'type' */
    cpy_r_r54 = CPyStatics[1402]; /* 'start' */
    cpy_r_r55 = PyList_New(7);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 154, CPyStatic_semanal_enum___globals);
        goto CPyL243;
    }
    cpy_r_r56 = Py_None;
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    CPy_INCREF(cpy_r_r56);
    *(PyObject * *)cpy_r_r58 = cpy_r_r56;
    cpy_r_r59 = cpy_r_r58 + 8;
    CPy_INCREF(cpy_r_r49);
    *(PyObject * *)cpy_r_r59 = cpy_r_r49;
    cpy_r_r60 = cpy_r_r58 + 16;
    CPy_INCREF(cpy_r_r50);
    *(PyObject * *)cpy_r_r60 = cpy_r_r50;
    cpy_r_r61 = cpy_r_r58 + 24;
    CPy_INCREF(cpy_r_r51);
    *(PyObject * *)cpy_r_r61 = cpy_r_r51;
    cpy_r_r62 = cpy_r_r58 + 32;
    CPy_INCREF(cpy_r_r52);
    *(PyObject * *)cpy_r_r62 = cpy_r_r52;
    cpy_r_r63 = cpy_r_r58 + 40;
    CPy_INCREF(cpy_r_r53);
    *(PyObject * *)cpy_r_r63 = cpy_r_r53;
    cpy_r_r64 = cpy_r_r58 + 48;
    CPy_INCREF(cpy_r_r54);
    *(PyObject * *)cpy_r_r64 = cpy_r_r54;
    cpy_r_valid_name = cpy_r_r55;
    cpy_r_r65 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = 0;
CPyL32: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_r65)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = (Py_ssize_t)cpy_r_r66 < (Py_ssize_t)cpy_r_r69;
    if (!cpy_r_r70) goto CPyL247;
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_r65, cpy_r_r66);
    if (PyUnicode_Check(cpy_r_r71))
        cpy_r_r72 = cpy_r_r71;
    else {
        cpy_r_r72 = NULL;
    }
    if (cpy_r_r72 != NULL) goto __LL5787;
    if (cpy_r_r71 == Py_None)
        cpy_r_r72 = cpy_r_r71;
    else {
        cpy_r_r72 = NULL;
    }
    if (cpy_r_r72 != NULL) goto __LL5787;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 155, CPyStatic_semanal_enum___globals, "str or None", cpy_r_r71);
    goto CPyL248;
__LL5787: ;
    cpy_r_arg_name = cpy_r_r72;
    cpy_r_r73 = PySequence_Contains(cpy_r_valid_name, cpy_r_arg_name);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 156, CPyStatic_semanal_enum___globals);
        goto CPyL249;
    }
    cpy_r_r75 = cpy_r_r73;
    cpy_r_r76 = cpy_r_r75 ^ 1;
    if (!cpy_r_r76) goto CPyL250;
    cpy_r_r77 = CPyStatics[3433]; /* 'Unexpected keyword argument "' */
    cpy_r_r78 = PyObject_Str(cpy_r_arg_name);
    CPy_DECREF(cpy_r_arg_name);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 157, CPyStatic_semanal_enum___globals);
        goto CPyL248;
    }
    cpy_r_r79 = CPyStatics[178]; /* '"' */
    cpy_r_r80 = CPyStr_Build(3, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 157, CPyStatic_semanal_enum___globals);
        goto CPyL248;
    }
    cpy_r_r81 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r80, cpy_r_call);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 157, CPyStatic_semanal_enum___globals);
        goto CPyL248;
    } else
        goto CPyL251;
CPyL39: ;
    cpy_r_r82 = cpy_r_r66 + 2;
    cpy_r_r66 = cpy_r_r82;
    goto CPyL32;
CPyL40: ;
    cpy_r_r83 = 1;
    cpy_r_r84 = 1;
    cpy_r_r85 = Py_None;
    CPy_INCREF(cpy_r_r85);
    cpy_r_value = cpy_r_r85;
    cpy_r_r86 = Py_None;
    CPy_INCREF(cpy_r_r86);
    cpy_r_names = cpy_r_r86;
    cpy_r_r87 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = 0;
    cpy_r_r89 = 0;
CPyL41: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_r87)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = (Py_ssize_t)cpy_r_r88 < (Py_ssize_t)cpy_r_r92;
    if (!cpy_r_r93) goto CPyL252;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r89 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL252;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_r87, cpy_r_r88);
    if (PyUnicode_Check(cpy_r_r98))
        cpy_r_r99 = cpy_r_r98;
    else {
        cpy_r_r99 = NULL;
    }
    if (cpy_r_r99 != NULL) goto __LL5788;
    if (cpy_r_r98 == Py_None)
        cpy_r_r99 = cpy_r_r98;
    else {
        cpy_r_r99 = NULL;
    }
    if (cpy_r_r99 != NULL) goto __LL5788;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 159, CPyStatic_semanal_enum___globals, "str or None", cpy_r_r98);
    goto CPyL253;
__LL5788: ;
    cpy_r_arg_name = cpy_r_r99;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r89);
    if (likely(PyObject_TypeCheck(cpy_r_r100, CPyType_nodes___Expression)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 159, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r100);
        goto CPyL254;
    }
    cpy_r_arg = cpy_r_r101;
    cpy_r_r102 = CPyStatics[2242]; /* 'value' */
    cpy_r_r103 = PyObject_RichCompare(cpy_r_arg_name, cpy_r_r102, 2);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 160, CPyStatic_semanal_enum___globals);
        goto CPyL255;
    }
    if (unlikely(!PyBool_Check(cpy_r_r103))) {
        CPy_TypeError("bool", cpy_r_r103); cpy_r_r104 = 2;
    } else
        cpy_r_r104 = cpy_r_r103 == Py_True;
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 160, CPyStatic_semanal_enum___globals);
        goto CPyL255;
    }
    if (cpy_r_r104) {
        goto CPyL256;
    } else
        goto CPyL49;
CPyL48: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_value = cpy_r_arg;
CPyL49: ;
    cpy_r_r105 = CPyStatics[2403]; /* 'names' */
    cpy_r_r106 = PyObject_RichCompare(cpy_r_arg_name, cpy_r_r105, 2);
    CPy_DECREF(cpy_r_arg_name);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 162, CPyStatic_semanal_enum___globals);
        goto CPyL257;
    }
    if (unlikely(!PyBool_Check(cpy_r_r106))) {
        CPy_TypeError("bool", cpy_r_r106); cpy_r_r107 = 2;
    } else
        cpy_r_r107 = cpy_r_r106 == Py_True;
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 162, CPyStatic_semanal_enum___globals);
        goto CPyL257;
    }
    if (cpy_r_r107) {
        goto CPyL258;
    } else
        goto CPyL259;
CPyL52: ;
    cpy_r_names = cpy_r_arg;
CPyL53: ;
    cpy_r_r108 = cpy_r_r88 + 2;
    cpy_r_r88 = cpy_r_r108;
    cpy_r_r109 = cpy_r_r89 + 2;
    cpy_r_r89 = cpy_r_r109;
    goto CPyL41;
CPyL54: ;
    cpy_r_r110 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r111 = cpy_r_value == cpy_r_r110;
    if (cpy_r_r111) {
        goto CPyL260;
    } else
        goto CPyL58;
CPyL55: ;
    cpy_r_r112 = CPyList_GetItemShort(cpy_r_args, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 165, CPyStatic_semanal_enum___globals);
        goto CPyL261;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r112, CPyType_nodes___Expression)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 165, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r112);
        goto CPyL261;
    }
    cpy_r_value = cpy_r_r113;
CPyL58: ;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_names == cpy_r_r114;
    if (cpy_r_r115) {
        goto CPyL262;
    } else
        goto CPyL62;
CPyL59: ;
    cpy_r_r116 = CPyList_GetItemShort(cpy_r_args, 2);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 167, CPyStatic_semanal_enum___globals);
        goto CPyL263;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r116, CPyType_nodes___Expression)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 167, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r116);
        goto CPyL263;
    }
    cpy_r_names = cpy_r_r117;
CPyL62: ;
    cpy_r_r118 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_value)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    CPy_DECREF(cpy_r_value);
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    if (cpy_r_r121) {
        goto CPyL66;
    } else
        goto CPyL264;
CPyL63: ;
    cpy_r_r122 = CPyStatics[5166]; /* '() expects a string literal as the first argument' */
    cpy_r_r123 = CPyStr_Build(2, cpy_r_class_name, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 170, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r124 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r123, cpy_r_call);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 169, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r124;
CPyL66: ;
    cpy_r_r125 = PyList_New(0);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 172, CPyStatic_semanal_enum___globals);
        goto CPyL261;
    }
    cpy_r_items = cpy_r_r125;
    cpy_r_r126 = PyList_New(0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 173, CPyStatic_semanal_enum___globals);
        goto CPyL265;
    }
    cpy_r_values = cpy_r_r126;
    cpy_r_r127 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_names)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (cpy_r_r130) {
        goto CPyL266;
    } else
        goto CPyL77;
CPyL69: ;
    if (likely(Py_TYPE(cpy_r_names) == CPyType_nodes___StrExpr))
        cpy_r_r131 = cpy_r_names;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 175, CPyStatic_semanal_enum___globals, "mypy.nodes.StrExpr", cpy_r_names);
        goto CPyL267;
    }
    cpy_r_r132 = ((mypy___nodes___StrExprObject *)cpy_r_r131)->_value;
    CPy_INCREF(cpy_r_r132);
    CPy_DECREF(cpy_r_names);
    cpy_r_fields = cpy_r_r132;
    cpy_r_r133 = CPyStatics[242]; /* ',' */
    cpy_r_r134 = CPyStatics[295]; /* ' ' */
    cpy_r_r135 = PyUnicode_Replace(cpy_r_fields, cpy_r_r133, cpy_r_r134, -1);
    CPy_DECREF(cpy_r_fields);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 176, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r136 = PyUnicode_Split(cpy_r_r135, NULL, -1);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 176, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r137 = 0;
CPyL73: ;
    cpy_r_r138 = (CPyPtr)&((PyVarObject *)cpy_r_r136)->ob_size;
    cpy_r_r139 = *(int64_t *)cpy_r_r138;
    cpy_r_r140 = cpy_r_r139 << 1;
    cpy_r_r141 = (Py_ssize_t)cpy_r_r137 < (Py_ssize_t)cpy_r_r140;
    if (!cpy_r_r141) goto CPyL269;
    cpy_r_r142 = CPyList_GetItemUnsafe(cpy_r_r136, cpy_r_r137);
    if (likely(PyUnicode_Check(cpy_r_r142)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 176, CPyStatic_semanal_enum___globals, "str", cpy_r_r142);
        goto CPyL270;
    }
    cpy_r_field = cpy_r_r143;
    cpy_r_r144 = PyList_Append(cpy_r_items, cpy_r_field);
    CPy_DECREF(cpy_r_field);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 177, CPyStatic_semanal_enum___globals);
        goto CPyL270;
    }
    cpy_r_r146 = cpy_r_r137 + 2;
    cpy_r_r137 = cpy_r_r146;
    goto CPyL73;
CPyL77: ;
    cpy_r_r147 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r148 = (CPyPtr)&((PyObject *)cpy_r_names)->ob_type;
    cpy_r_r149 = *(PyObject * *)cpy_r_r148;
    cpy_r_r150 = cpy_r_r149 == cpy_r_r147;
    if (!cpy_r_r150) goto CPyL79;
    cpy_r_r151 = cpy_r_r150;
    goto CPyL80;
CPyL79: ;
    cpy_r_r152 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r153 = (CPyPtr)&((PyObject *)cpy_r_names)->ob_type;
    cpy_r_r154 = *(PyObject * *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r154 == cpy_r_r152;
    cpy_r_r151 = cpy_r_r155;
CPyL80: ;
    if (cpy_r_r151) {
        goto CPyL271;
    } else
        goto CPyL154;
CPyL81: ;
    if (Py_TYPE(cpy_r_names) == CPyType_nodes___TupleExpr)
        cpy_r_r156 = cpy_r_names;
    else {
        cpy_r_r156 = NULL;
    }
    if (cpy_r_r156 != NULL) goto __LL5789;
    if (Py_TYPE(cpy_r_names) == CPyType_nodes___ListExpr)
        cpy_r_r156 = cpy_r_names;
    else {
        cpy_r_r156 = NULL;
    }
    if (cpy_r_r156 != NULL) goto __LL5789;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 179, CPyStatic_semanal_enum___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_names);
    goto CPyL268;
__LL5789: ;
    cpy_r_r157 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r158 = (CPyPtr)&((PyObject *)cpy_r_r156)->ob_type;
    cpy_r_r159 = *(PyObject * *)cpy_r_r158;
    cpy_r_r160 = cpy_r_r159 == cpy_r_r157;
    if (!cpy_r_r160) goto CPyL85;
    if (likely(Py_TYPE(cpy_r_r156) == CPyType_nodes___TupleExpr))
        cpy_r_r161 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 179, CPyStatic_semanal_enum___globals, "mypy.nodes.TupleExpr", cpy_r_r156);
        goto CPyL268;
    }
    cpy_r_r162 = ((mypy___nodes___TupleExprObject *)cpy_r_r161)->_items;
    CPy_INCREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r163 = cpy_r_r162;
    goto CPyL87;
CPyL85: ;
    if (likely(Py_TYPE(cpy_r_r156) == CPyType_nodes___ListExpr))
        cpy_r_r164 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 179, CPyStatic_semanal_enum___globals, "mypy.nodes.ListExpr", cpy_r_r156);
        goto CPyL268;
    }
    cpy_r_r165 = ((mypy___nodes___ListExprObject *)cpy_r_r164)->_items;
    CPy_INCREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r164);
    cpy_r_r163 = cpy_r_r165;
CPyL87: ;
    cpy_r_seq_items = cpy_r_r163;
    cpy_r_r166 = CPyDef_nodes___is_StrExpr_list(cpy_r_seq_items);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 180, CPyStatic_semanal_enum___globals);
        goto CPyL272;
    }
    if (cpy_r_r166) {
        goto CPyL273;
    } else
        goto CPyL96;
CPyL89: ;
    cpy_r_r167 = (CPyPtr)&((PyVarObject *)cpy_r_seq_items)->ob_size;
    cpy_r_r168 = *(int64_t *)cpy_r_r167;
    cpy_r_r169 = PyList_New(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 181, CPyStatic_semanal_enum___globals);
        goto CPyL274;
    }
    cpy_r_r170 = 0;
CPyL91: ;
    cpy_r_r171 = (CPyPtr)&((PyVarObject *)cpy_r_seq_items)->ob_size;
    cpy_r_r172 = *(int64_t *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 << 1;
    cpy_r_r174 = (Py_ssize_t)cpy_r_r170 < (Py_ssize_t)cpy_r_r173;
    if (!cpy_r_r174) goto CPyL275;
    cpy_r_r175 = CPyList_GetItemUnsafe(cpy_r_seq_items, cpy_r_r170);
    if (likely(Py_TYPE(cpy_r_r175) == CPyType_nodes___StrExpr))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 181, CPyStatic_semanal_enum___globals, "mypy.nodes.StrExpr", cpy_r_r175);
        goto CPyL276;
    }
    cpy_r_seq_item = cpy_r_r176;
    cpy_r_r177 = ((mypy___nodes___StrExprObject *)cpy_r_seq_item)->_value;
    CPy_INCREF(cpy_r_r177);
    CPy_DECREF(cpy_r_seq_item);
    cpy_r_r178 = CPyList_SetItemUnsafe(cpy_r_r169, cpy_r_r170, cpy_r_r177);
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 181, CPyStatic_semanal_enum___globals);
        goto CPyL276;
    }
    cpy_r_r179 = cpy_r_r170 + 2;
    cpy_r_r170 = cpy_r_r179;
    goto CPyL91;
CPyL95: ;
    cpy_r_items = cpy_r_r169;
    goto CPyL223;
CPyL96: ;
    cpy_r_r180 = 1;
    cpy_r_r181 = 0;
CPyL97: ;
    cpy_r_r182 = (CPyPtr)&((PyVarObject *)cpy_r_seq_items)->ob_size;
    cpy_r_r183 = *(int64_t *)cpy_r_r182;
    cpy_r_r184 = cpy_r_r183 << 1;
    cpy_r_r185 = (Py_ssize_t)cpy_r_r181 < (Py_ssize_t)cpy_r_r184;
    if (!cpy_r_r185) goto CPyL124;
    cpy_r_r186 = CPyList_GetItemUnsafe(cpy_r_seq_items, cpy_r_r181);
    if (likely(PyObject_TypeCheck(cpy_r_r186, CPyType_nodes___Expression)))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 182, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r186);
        goto CPyL272;
    }
    cpy_r_seq_item_2 = cpy_r_r187;
    cpy_r_r188 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r189 = (CPyPtr)&((PyObject *)cpy_r_seq_item_2)->ob_type;
    cpy_r_r190 = *(PyObject * *)cpy_r_r189;
    cpy_r_r191 = cpy_r_r190 == cpy_r_r188;
    if (!cpy_r_r191) goto CPyL101;
    cpy_r_r192 = cpy_r_r191;
    goto CPyL102;
CPyL101: ;
    cpy_r_r193 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r194 = (CPyPtr)&((PyObject *)cpy_r_seq_item_2)->ob_type;
    cpy_r_r195 = *(PyObject * *)cpy_r_r194;
    cpy_r_r196 = cpy_r_r195 == cpy_r_r193;
    cpy_r_r192 = cpy_r_r196;
CPyL102: ;
    if (cpy_r_r192) {
        goto CPyL104;
    } else
        goto CPyL277;
CPyL103: ;
    cpy_r_r197 = cpy_r_r192;
    goto CPyL121;
CPyL104: ;
    CPy_INCREF(cpy_r_seq_item_2);
    if (Py_TYPE(cpy_r_seq_item_2) == CPyType_nodes___TupleExpr)
        cpy_r_r198 = cpy_r_seq_item_2;
    else {
        cpy_r_r198 = NULL;
    }
    if (cpy_r_r198 != NULL) goto __LL5790;
    if (Py_TYPE(cpy_r_seq_item_2) == CPyType_nodes___ListExpr)
        cpy_r_r198 = cpy_r_seq_item_2;
    else {
        cpy_r_r198 = NULL;
    }
    if (cpy_r_r198 != NULL) goto __LL5790;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 184, CPyStatic_semanal_enum___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_seq_item_2);
    goto CPyL278;
__LL5790: ;
    cpy_r_r199 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r200 = (CPyPtr)&((PyObject *)cpy_r_r198)->ob_type;
    cpy_r_r201 = *(PyObject * *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 == cpy_r_r199;
    if (!cpy_r_r202) goto CPyL108;
    if (likely(Py_TYPE(cpy_r_r198) == CPyType_nodes___TupleExpr))
        cpy_r_r203 = cpy_r_r198;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 184, CPyStatic_semanal_enum___globals, "mypy.nodes.TupleExpr", cpy_r_r198);
        goto CPyL278;
    }
    cpy_r_r204 = ((mypy___nodes___TupleExprObject *)cpy_r_r203)->_items;
    CPy_INCREF(cpy_r_r204);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r205 = cpy_r_r204;
    goto CPyL110;
CPyL108: ;
    if (likely(Py_TYPE(cpy_r_r198) == CPyType_nodes___ListExpr))
        cpy_r_r206 = cpy_r_r198;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 184, CPyStatic_semanal_enum___globals, "mypy.nodes.ListExpr", cpy_r_r198);
        goto CPyL278;
    }
    cpy_r_r207 = ((mypy___nodes___ListExprObject *)cpy_r_r206)->_items;
    CPy_INCREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r206);
    cpy_r_r205 = cpy_r_r207;
CPyL110: ;
    cpy_r_r208 = (CPyPtr)&((PyVarObject *)cpy_r_r205)->ob_size;
    cpy_r_r209 = *(int64_t *)cpy_r_r208;
    CPy_DECREF(cpy_r_r205);
    cpy_r_r210 = cpy_r_r209 << 1;
    cpy_r_r211 = cpy_r_r210 == 4;
    if (cpy_r_r211) {
        goto CPyL112;
    } else
        goto CPyL279;
CPyL111: ;
    cpy_r_r212 = cpy_r_r211;
    goto CPyL120;
CPyL112: ;
    if (Py_TYPE(cpy_r_seq_item_2) == CPyType_nodes___TupleExpr)
        cpy_r_r213 = cpy_r_seq_item_2;
    else {
        cpy_r_r213 = NULL;
    }
    if (cpy_r_r213 != NULL) goto __LL5791;
    if (Py_TYPE(cpy_r_seq_item_2) == CPyType_nodes___ListExpr)
        cpy_r_r213 = cpy_r_seq_item_2;
    else {
        cpy_r_r213 = NULL;
    }
    if (cpy_r_r213 != NULL) goto __LL5791;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 185, CPyStatic_semanal_enum___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_seq_item_2);
    goto CPyL272;
__LL5791: ;
    cpy_r_r214 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r215 = (CPyPtr)&((PyObject *)cpy_r_r213)->ob_type;
    cpy_r_r216 = *(PyObject * *)cpy_r_r215;
    cpy_r_r217 = cpy_r_r216 == cpy_r_r214;
    if (!cpy_r_r217) goto CPyL116;
    if (likely(Py_TYPE(cpy_r_r213) == CPyType_nodes___TupleExpr))
        cpy_r_r218 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 185, CPyStatic_semanal_enum___globals, "mypy.nodes.TupleExpr", cpy_r_r213);
        goto CPyL272;
    }
    cpy_r_r219 = ((mypy___nodes___TupleExprObject *)cpy_r_r218)->_items;
    CPy_INCREF(cpy_r_r219);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r220 = cpy_r_r219;
    goto CPyL118;
CPyL116: ;
    if (likely(Py_TYPE(cpy_r_r213) == CPyType_nodes___ListExpr))
        cpy_r_r221 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 185, CPyStatic_semanal_enum___globals, "mypy.nodes.ListExpr", cpy_r_r213);
        goto CPyL272;
    }
    cpy_r_r222 = ((mypy___nodes___ListExprObject *)cpy_r_r221)->_items;
    CPy_INCREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r220 = cpy_r_r222;
CPyL118: ;
    cpy_r_r223 = CPyList_GetItemShortBorrow(cpy_r_r220, 0);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 185, CPyStatic_semanal_enum___globals);
        goto CPyL280;
    }
    cpy_r_r224 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r225 = (CPyPtr)&((PyObject *)cpy_r_r223)->ob_type;
    cpy_r_r226 = *(PyObject * *)cpy_r_r225;
    cpy_r_r227 = cpy_r_r226 == cpy_r_r224;
    CPy_DECREF(cpy_r_r220);
    cpy_r_r212 = cpy_r_r227;
CPyL120: ;
    cpy_r_r197 = cpy_r_r212;
CPyL121: ;
    cpy_r_r228 = cpy_r_r197 ^ 1;
    if (!cpy_r_r228) goto CPyL123;
    cpy_r_r180 = 0;
    goto CPyL124;
CPyL123: ;
    cpy_r_r229 = cpy_r_r181 + 2;
    cpy_r_r181 = cpy_r_r229;
    goto CPyL97;
CPyL124: ;
    if (!cpy_r_r180) goto CPyL281;
    cpy_r_r230 = 0;
CPyL126: ;
    cpy_r_r231 = (CPyPtr)&((PyVarObject *)cpy_r_seq_items)->ob_size;
    cpy_r_r232 = *(int64_t *)cpy_r_r231;
    cpy_r_r233 = cpy_r_r232 << 1;
    cpy_r_r234 = (Py_ssize_t)cpy_r_r230 < (Py_ssize_t)cpy_r_r233;
    if (!cpy_r_r234) goto CPyL282;
    cpy_r_r235 = CPyList_GetItemUnsafe(cpy_r_seq_items, cpy_r_r230);
    if (likely(PyObject_TypeCheck(cpy_r_r235, CPyType_nodes___Expression)))
        cpy_r_r236 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 188, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r235);
        goto CPyL272;
    }
    cpy_r_seq_item_3 = cpy_r_r236;
    cpy_r_r237 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r238 = (CPyPtr)&((PyObject *)cpy_r_seq_item_3)->ob_type;
    cpy_r_r239 = *(PyObject * *)cpy_r_r238;
    cpy_r_r240 = cpy_r_r239 == cpy_r_r237;
    if (!cpy_r_r240) goto CPyL130;
    cpy_r_r241 = cpy_r_r240;
    goto CPyL131;
CPyL130: ;
    cpy_r_r242 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r243 = (CPyPtr)&((PyObject *)cpy_r_seq_item_3)->ob_type;
    cpy_r_r244 = *(PyObject * *)cpy_r_r243;
    cpy_r_r245 = cpy_r_r244 == cpy_r_r242;
    cpy_r_r241 = cpy_r_r245;
CPyL131: ;
    if (cpy_r_r241) {
        goto CPyL134;
    } else
        goto CPyL283;
CPyL132: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r246 = 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 189, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    CPy_Unreachable();
CPyL134: ;
    if (Py_TYPE(cpy_r_seq_item_3) == CPyType_nodes___TupleExpr)
        cpy_r_r247 = cpy_r_seq_item_3;
    else {
        cpy_r_r247 = NULL;
    }
    if (cpy_r_r247 != NULL) goto __LL5792;
    if (Py_TYPE(cpy_r_seq_item_3) == CPyType_nodes___ListExpr)
        cpy_r_r247 = cpy_r_seq_item_3;
    else {
        cpy_r_r247 = NULL;
    }
    if (cpy_r_r247 != NULL) goto __LL5792;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_seq_item_3);
    goto CPyL272;
__LL5792: ;
    cpy_r_r248 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r249 = (CPyPtr)&((PyObject *)cpy_r_r247)->ob_type;
    cpy_r_r250 = *(PyObject * *)cpy_r_r249;
    cpy_r_r251 = cpy_r_r250 == cpy_r_r248;
    if (!cpy_r_r251) goto CPyL138;
    if (likely(Py_TYPE(cpy_r_r247) == CPyType_nodes___TupleExpr))
        cpy_r_r252 = cpy_r_r247;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals, "mypy.nodes.TupleExpr", cpy_r_r247);
        goto CPyL272;
    }
    cpy_r_r253 = ((mypy___nodes___TupleExprObject *)cpy_r_r252)->_items;
    CPy_INCREF(cpy_r_r253);
    CPy_DECREF(cpy_r_r252);
    cpy_r_r254 = cpy_r_r253;
    goto CPyL140;
CPyL138: ;
    if (likely(Py_TYPE(cpy_r_r247) == CPyType_nodes___ListExpr))
        cpy_r_r255 = cpy_r_r247;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals, "mypy.nodes.ListExpr", cpy_r_r247);
        goto CPyL272;
    }
    cpy_r_r256 = ((mypy___nodes___ListExprObject *)cpy_r_r255)->_items;
    CPy_INCREF(cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    cpy_r_r254 = cpy_r_r256;
CPyL140: ;
    cpy_r_r257 = CPySequence_CheckUnpackCount(cpy_r_r254, 2);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals);
        goto CPyL284;
    }
    cpy_r_r259 = CPyList_GetItemUnsafe(cpy_r_r254, 0);
    cpy_r_r260 = CPyList_GetItemUnsafe(cpy_r_r254, 2);
    CPy_DECREF(cpy_r_r254);
    if (likely(PyObject_TypeCheck(cpy_r_r259, CPyType_nodes___Expression)))
        cpy_r_r261 = cpy_r_r259;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_r259);
        goto CPyL285;
    }
    cpy_r_name = cpy_r_r261;
    if (PyObject_TypeCheck(cpy_r_r260, CPyType_nodes___Expression))
        cpy_r_r262 = cpy_r_r260;
    else {
        cpy_r_r262 = NULL;
    }
    if (cpy_r_r262 != NULL) goto __LL5793;
    if (cpy_r_r260 == Py_None)
        cpy_r_r262 = cpy_r_r260;
    else {
        cpy_r_r262 = NULL;
    }
    if (cpy_r_r262 != NULL) goto __LL5793;
    CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 190, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression or None", cpy_r_r260);
    goto CPyL286;
__LL5793: ;
    cpy_r_value = cpy_r_r262;
    cpy_r_r263 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r264 = (CPyPtr)&((PyObject *)cpy_r_name)->ob_type;
    cpy_r_r265 = *(PyObject * *)cpy_r_r264;
    cpy_r_r266 = cpy_r_r265 == cpy_r_r263;
    if (cpy_r_r266) {
        goto CPyL146;
    } else
        goto CPyL287;
CPyL144: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r267 = 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 191, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    CPy_Unreachable();
CPyL146: ;
    if (likely(Py_TYPE(cpy_r_name) == CPyType_nodes___StrExpr))
        cpy_r_r268 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 192, CPyStatic_semanal_enum___globals, "mypy.nodes.StrExpr", cpy_r_name);
        goto CPyL288;
    }
    cpy_r_r269 = ((mypy___nodes___StrExprObject *)cpy_r_r268)->_value;
    CPy_INCREF(cpy_r_r269);
    CPy_DECREF(cpy_r_name);
    cpy_r_r270 = PyList_Append(cpy_r_items, cpy_r_r269);
    CPy_DECREF(cpy_r_r269);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 192, CPyStatic_semanal_enum___globals);
        goto CPyL289;
    }
    if (likely(cpy_r_value != Py_None))
        cpy_r_r272 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 193, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_value);
        goto CPyL272;
    }
    cpy_r_r273 = PyList_Append(cpy_r_values, cpy_r_r272);
    CPy_DECREF(cpy_r_r272);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 193, CPyStatic_semanal_enum___globals);
        goto CPyL272;
    }
    cpy_r_r275 = cpy_r_r230 + 2;
    cpy_r_r230 = cpy_r_r275;
    goto CPyL126;
CPyL151: ;
    cpy_r_r276 = CPyStatics[5167]; /* ('() with tuple or list expects strings or (name, '
                                      'value) pairs') */
    cpy_r_r277 = CPyStr_Build(2, cpy_r_class_name, cpy_r_r276);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 196, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r278 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r277, cpy_r_call);
    CPy_DECREF(cpy_r_r277);
    if (unlikely(cpy_r_r278.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 195, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r278;
CPyL154: ;
    cpy_r_r279 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r280 = (CPyPtr)&((PyObject *)cpy_r_names)->ob_type;
    cpy_r_r281 = *(PyObject * *)cpy_r_r280;
    cpy_r_r282 = cpy_r_r281 == cpy_r_r279;
    if (cpy_r_r282) {
        goto CPyL290;
    } else
        goto CPyL291;
CPyL155: ;
    if (likely(Py_TYPE(cpy_r_names) == CPyType_nodes___DictExpr))
        cpy_r_r283 = cpy_r_names;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 200, CPyStatic_semanal_enum___globals, "mypy.nodes.DictExpr", cpy_r_names);
        goto CPyL267;
    }
    cpy_r_r284 = ((mypy___nodes___DictExprObject *)cpy_r_r283)->_items;
    CPy_INCREF(cpy_r_r284);
    CPy_DECREF(cpy_r_names);
    cpy_r_r285 = 0;
CPyL157: ;
    cpy_r_r286 = (CPyPtr)&((PyVarObject *)cpy_r_r284)->ob_size;
    cpy_r_r287 = *(int64_t *)cpy_r_r286;
    cpy_r_r288 = cpy_r_r287 << 1;
    cpy_r_r289 = (Py_ssize_t)cpy_r_r285 < (Py_ssize_t)cpy_r_r288;
    if (!cpy_r_r289) goto CPyL292;
    cpy_r_r290 = CPyList_GetItemUnsafe(cpy_r_r284, cpy_r_r285);
    PyObject *__tmp5794;
    if (unlikely(!(PyTuple_Check(cpy_r_r290) && PyTuple_GET_SIZE(cpy_r_r290) == 2))) {
        __tmp5794 = NULL;
        goto __LL5795;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r290, 0), CPyType_nodes___Expression))
        __tmp5794 = PyTuple_GET_ITEM(cpy_r_r290, 0);
    else {
        __tmp5794 = NULL;
    }
    if (__tmp5794 != NULL) goto __LL5796;
    if (PyTuple_GET_ITEM(cpy_r_r290, 0) == Py_None)
        __tmp5794 = PyTuple_GET_ITEM(cpy_r_r290, 0);
    else {
        __tmp5794 = NULL;
    }
    if (__tmp5794 != NULL) goto __LL5796;
    __tmp5794 = NULL;
__LL5796: ;
    if (__tmp5794 == NULL) goto __LL5795;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r290, 1), CPyType_nodes___Expression)))
        __tmp5794 = PyTuple_GET_ITEM(cpy_r_r290, 1);
    else {
        __tmp5794 = NULL;
    }
    if (__tmp5794 == NULL) goto __LL5795;
    __tmp5794 = cpy_r_r290;
__LL5795: ;
    if (unlikely(__tmp5794 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r290); cpy_r_r291 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp5797 = PyTuple_GET_ITEM(cpy_r_r290, 0);
        CPy_INCREF(__tmp5797);
        PyObject *__tmp5798;
        if (PyObject_TypeCheck(__tmp5797, CPyType_nodes___Expression))
            __tmp5798 = __tmp5797;
        else {
            __tmp5798 = NULL;
        }
        if (__tmp5798 != NULL) goto __LL5799;
        if (__tmp5797 == Py_None)
            __tmp5798 = __tmp5797;
        else {
            __tmp5798 = NULL;
        }
        if (__tmp5798 != NULL) goto __LL5799;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp5797); 
        __tmp5798 = NULL;
__LL5799: ;
        cpy_r_r291.f0 = __tmp5798;
        PyObject *__tmp5800 = PyTuple_GET_ITEM(cpy_r_r290, 1);
        CPy_INCREF(__tmp5800);
        PyObject *__tmp5801;
        if (likely(PyObject_TypeCheck(__tmp5800, CPyType_nodes___Expression)))
            __tmp5801 = __tmp5800;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp5800); 
            __tmp5801 = NULL;
        }
        cpy_r_r291.f1 = __tmp5801;
    }
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r291.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 200, CPyStatic_semanal_enum___globals);
        goto CPyL293;
    }
    cpy_r_r292 = cpy_r_r291.f0;
    CPy_INCREF(cpy_r_r292);
    cpy_r_key = cpy_r_r292;
    cpy_r_r293 = cpy_r_r291.f1;
    CPy_INCREF(cpy_r_r293);
    CPy_DECREF(cpy_r_r291.f0);
    CPy_DECREF(cpy_r_r291.f1);
    cpy_r_value = cpy_r_r293;
    cpy_r_r294 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r295 = (CPyPtr)&((PyObject *)cpy_r_key)->ob_type;
    cpy_r_r296 = *(PyObject * *)cpy_r_r295;
    cpy_r_r297 = cpy_r_r296 == cpy_r_r294;
    if (cpy_r_r297) {
        goto CPyL163;
    } else
        goto CPyL294;
CPyL160: ;
    cpy_r_r298 = CPyStatics[5168]; /* '() with dict literal requires string literals' */
    cpy_r_r299 = CPyStr_Build(2, cpy_r_class_name, cpy_r_r298);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 203, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r300 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r299, cpy_r_call);
    CPy_DECREF(cpy_r_r299);
    if (unlikely(cpy_r_r300.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 202, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r300;
CPyL163: ;
    if (likely(Py_TYPE(cpy_r_key) == CPyType_nodes___StrExpr))
        cpy_r_r301 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 205, CPyStatic_semanal_enum___globals, "mypy.nodes.StrExpr", cpy_r_key);
        goto CPyL295;
    }
    cpy_r_r302 = ((mypy___nodes___StrExprObject *)cpy_r_r301)->_value;
    CPy_INCREF(cpy_r_r302);
    CPy_DECREF(cpy_r_key);
    cpy_r_r303 = PyList_Append(cpy_r_items, cpy_r_r302);
    CPy_DECREF(cpy_r_r302);
    cpy_r_r304 = cpy_r_r303 >= 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 205, CPyStatic_semanal_enum___globals);
        goto CPyL296;
    }
    if (likely(cpy_r_value != Py_None))
        cpy_r_r305 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 206, CPyStatic_semanal_enum___globals, "mypy.nodes.Expression", cpy_r_value);
        goto CPyL293;
    }
    cpy_r_r306 = PyList_Append(cpy_r_values, cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r307 = cpy_r_r306 >= 0;
    if (unlikely(!cpy_r_r307)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 206, CPyStatic_semanal_enum___globals);
        goto CPyL293;
    }
    cpy_r_r308 = cpy_r_r285 + 2;
    cpy_r_r285 = cpy_r_r308;
    goto CPyL157;
CPyL168: ;
    cpy_r_r309 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 207, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    cpy_r_r310 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r311 = (CPyPtr)&((PyObject *)cpy_r_r309)->ob_type;
    cpy_r_r312 = *(PyObject * *)cpy_r_r311;
    cpy_r_r313 = cpy_r_r312 == cpy_r_r310;
    if (!cpy_r_r313) goto CPyL171;
    cpy_r_r314 = cpy_r_r313;
    goto CPyL172;
CPyL171: ;
    cpy_r_r315 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r316 = (CPyPtr)&((PyObject *)cpy_r_r309)->ob_type;
    cpy_r_r317 = *(PyObject * *)cpy_r_r316;
    cpy_r_r318 = cpy_r_r317 == cpy_r_r315;
    cpy_r_r314 = cpy_r_r318;
CPyL172: ;
    if (!cpy_r_r314) goto CPyL174;
    cpy_r_r319 = cpy_r_r314;
    goto CPyL175;
CPyL174: ;
    cpy_r_r320 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r321 = (CPyPtr)&((PyObject *)cpy_r_r309)->ob_type;
    cpy_r_r322 = *(PyObject * *)cpy_r_r321;
    cpy_r_r323 = cpy_r_r322 == cpy_r_r320;
    cpy_r_r319 = cpy_r_r323;
CPyL175: ;
    if (!cpy_r_r319) goto CPyL298;
    cpy_r_r324 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 207, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    if (likely((Py_TYPE(cpy_r_r324) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r324) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r324) == CPyType_nodes___RefExpr)))
        cpy_r_r325 = cpy_r_r324;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 207, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_r324);
        goto CPyL297;
    }
    cpy_r_r326 = ((mypy___nodes___RefExprObject *)cpy_r_r325)->_node;
    cpy_r_r327 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r328 = (CPyPtr)&((PyObject *)cpy_r_r326)->ob_type;
    cpy_r_r329 = *(PyObject * *)cpy_r_r328;
    cpy_r_r330 = cpy_r_r329 == cpy_r_r327;
    if (!cpy_r_r330) goto CPyL298;
    cpy_r_r331 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 208, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    if (likely((Py_TYPE(cpy_r_r331) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r331) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r331) == CPyType_nodes___RefExpr)))
        cpy_r_r332 = cpy_r_r331;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 208, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_r331);
        goto CPyL297;
    }
    cpy_r_r333 = ((mypy___nodes___RefExprObject *)cpy_r_r332)->_node;
    if (likely(Py_TYPE(cpy_r_r333) == CPyType_nodes___Var))
        cpy_r_r334 = cpy_r_r333;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 208, CPyStatic_semanal_enum___globals, "mypy.nodes.Var", cpy_r_r333);
        goto CPyL297;
    }
    cpy_r_r335 = ((mypy___nodes___VarObject *)cpy_r_r334)->_type;
    CPy_INCREF(cpy_r_r335);
    cpy_r_r336 = CPyDef_types___get_proper_type(cpy_r_r335);
    CPy_DECREF(cpy_r_r335);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 208, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    cpy_r_proper_type = cpy_r_r336;
    cpy_r_r337 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r338 = cpy_r_proper_type != cpy_r_r337;
    if (!cpy_r_r338) goto CPyL299;
    cpy_r_r339 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r340 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r341 = *(PyObject * *)cpy_r_r340;
    cpy_r_r342 = cpy_r_r341 == cpy_r_r339;
    if (!cpy_r_r342) goto CPyL299;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___LiteralType))
        cpy_r_r343 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 212, CPyStatic_semanal_enum___globals, "mypy.types.LiteralType", cpy_r_proper_type);
        goto CPyL300;
    }
    cpy_r_r344 = ((mypy___types___LiteralTypeObject *)cpy_r_r343)->_value;
    CPy_INCREF(cpy_r_r344);
    cpy_r_r345 = (PyObject *)&PyUnicode_Type;
    cpy_r_r346 = PyObject_IsInstance(cpy_r_r344, cpy_r_r345);
    CPy_DECREF(cpy_r_r344);
    cpy_r_r347 = cpy_r_r346 >= 0;
    if (unlikely(!cpy_r_r347)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 212, CPyStatic_semanal_enum___globals);
        goto CPyL300;
    }
    cpy_r_r348 = cpy_r_r346;
    if (cpy_r_r348) {
        goto CPyL301;
    } else
        goto CPyL299;
CPyL188: ;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___LiteralType))
        cpy_r_r349 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 214, CPyStatic_semanal_enum___globals, "mypy.types.LiteralType", cpy_r_proper_type);
        goto CPyL302;
    }
    cpy_r_r350 = ((mypy___types___LiteralTypeObject *)cpy_r_r349)->_value;
    CPy_INCREF(cpy_r_r350);
    if (likely(PyUnicode_Check(cpy_r_r350)))
        cpy_r_r351 = cpy_r_r350;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 214, CPyStatic_semanal_enum___globals, "str", cpy_r_r350);
        goto CPyL302;
    }
    CPy_DECREF(cpy_r_proper_type);
    cpy_r_fields = cpy_r_r351;
    cpy_r_r352 = CPyStatics[242]; /* ',' */
    cpy_r_r353 = CPyStatics[295]; /* ' ' */
    cpy_r_r354 = PyUnicode_Replace(cpy_r_fields, cpy_r_r352, cpy_r_r353, -1);
    CPy_DECREF(cpy_r_fields);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 215, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r355 = PyUnicode_Split(cpy_r_r354, NULL, -1);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 215, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r356 = 0;
CPyL193: ;
    cpy_r_r357 = (CPyPtr)&((PyVarObject *)cpy_r_r355)->ob_size;
    cpy_r_r358 = *(int64_t *)cpy_r_r357;
    cpy_r_r359 = cpy_r_r358 << 1;
    cpy_r_r360 = (Py_ssize_t)cpy_r_r356 < (Py_ssize_t)cpy_r_r359;
    if (!cpy_r_r360) goto CPyL303;
    cpy_r_r361 = CPyList_GetItemUnsafe(cpy_r_r355, cpy_r_r356);
    if (likely(PyUnicode_Check(cpy_r_r361)))
        cpy_r_r362 = cpy_r_r361;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 215, CPyStatic_semanal_enum___globals, "str", cpy_r_r361);
        goto CPyL304;
    }
    cpy_r_field = cpy_r_r362;
    cpy_r_r363 = PyList_Append(cpy_r_items, cpy_r_field);
    CPy_DECREF(cpy_r_field);
    cpy_r_r364 = cpy_r_r363 >= 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 216, CPyStatic_semanal_enum___globals);
        goto CPyL304;
    }
    cpy_r_r365 = cpy_r_r356 + 2;
    cpy_r_r356 = cpy_r_r365;
    goto CPyL193;
CPyL197: ;
    cpy_r_r366 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    if (likely((Py_TYPE(cpy_r_r366) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r366) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r366) == CPyType_nodes___RefExpr)))
        cpy_r_r367 = cpy_r_r366;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_r366);
        goto CPyL297;
    }
    cpy_r_r368 = ((mypy___nodes___RefExprObject *)cpy_r_r367)->_node;
    if (likely(Py_TYPE(cpy_r_r368) == CPyType_nodes___Var))
        cpy_r_r369 = cpy_r_r368;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals, "mypy.nodes.Var", cpy_r_r368);
        goto CPyL297;
    }
    cpy_r_r370 = ((mypy___nodes___VarObject *)cpy_r_r369)->_is_final;
    if (!cpy_r_r370) goto CPyL305;
CPyL201: ;
    cpy_r_r371 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    if (likely((Py_TYPE(cpy_r_r371) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r371) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r371) == CPyType_nodes___RefExpr)))
        cpy_r_r372 = cpy_r_r371;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_r371);
        goto CPyL297;
    }
    cpy_r_r373 = ((mypy___nodes___RefExprObject *)cpy_r_r372)->_node;
    if (likely(Py_TYPE(cpy_r_r373) == CPyType_nodes___Var))
        cpy_r_r374 = cpy_r_r373;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals, "mypy.nodes.Var", cpy_r_r373);
        goto CPyL297;
    }
    cpy_r_r375 = ((mypy___nodes___VarObject *)cpy_r_r374)->_final_value;
    CPy_INCREF(cpy_r_r375);
    cpy_r_r376 = (PyObject *)&PyUnicode_Type;
    cpy_r_r377 = PyObject_IsInstance(cpy_r_r375, cpy_r_r376);
    CPy_DECREF(cpy_r_r375);
    cpy_r_r378 = cpy_r_r377 >= 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 217, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    cpy_r_r379 = cpy_r_r377;
    if (!cpy_r_r379) goto CPyL305;
    cpy_r_r380 = CPyList_GetItemShortBorrow(cpy_r_args, 2);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 218, CPyStatic_semanal_enum___globals);
        goto CPyL297;
    }
    if (likely((Py_TYPE(cpy_r_r380) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r380) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r380) == CPyType_nodes___RefExpr)))
        cpy_r_r381 = cpy_r_r380;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 218, CPyStatic_semanal_enum___globals, "mypy.nodes.RefExpr", cpy_r_r380);
        goto CPyL297;
    }
    cpy_r_r382 = ((mypy___nodes___RefExprObject *)cpy_r_r381)->_node;
    if (likely(Py_TYPE(cpy_r_r382) == CPyType_nodes___Var))
        cpy_r_r383 = cpy_r_r382;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 218, CPyStatic_semanal_enum___globals, "mypy.nodes.Var", cpy_r_r382);
        goto CPyL297;
    }
    cpy_r_r384 = ((mypy___nodes___VarObject *)cpy_r_r383)->_final_value;
    CPy_INCREF(cpy_r_r384);
    if (likely(PyUnicode_Check(cpy_r_r384)))
        cpy_r_r385 = cpy_r_r384;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 218, CPyStatic_semanal_enum___globals, "str", cpy_r_r384);
        goto CPyL297;
    }
    CPy_DECREF(cpy_r_args);
    cpy_r_fields = cpy_r_r385;
    cpy_r_r386 = CPyStatics[242]; /* ',' */
    cpy_r_r387 = CPyStatics[295]; /* ' ' */
    cpy_r_r388 = PyUnicode_Replace(cpy_r_fields, cpy_r_r386, cpy_r_r387, -1);
    CPy_DECREF(cpy_r_fields);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 219, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r389 = PyUnicode_Split(cpy_r_r388, NULL, -1);
    CPy_DECREF(cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 219, CPyStatic_semanal_enum___globals);
        goto CPyL268;
    }
    cpy_r_r390 = 0;
CPyL213: ;
    cpy_r_r391 = (CPyPtr)&((PyVarObject *)cpy_r_r389)->ob_size;
    cpy_r_r392 = *(int64_t *)cpy_r_r391;
    cpy_r_r393 = cpy_r_r392 << 1;
    cpy_r_r394 = (Py_ssize_t)cpy_r_r390 < (Py_ssize_t)cpy_r_r393;
    if (!cpy_r_r394) goto CPyL306;
    cpy_r_r395 = CPyList_GetItemUnsafe(cpy_r_r389, cpy_r_r390);
    if (likely(PyUnicode_Check(cpy_r_r395)))
        cpy_r_r396 = cpy_r_r395;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 219, CPyStatic_semanal_enum___globals, "str", cpy_r_r395);
        goto CPyL307;
    }
    cpy_r_field = cpy_r_r396;
    cpy_r_r397 = PyList_Append(cpy_r_items, cpy_r_field);
    CPy_DECREF(cpy_r_field);
    cpy_r_r398 = cpy_r_r397 >= 0;
    if (unlikely(!cpy_r_r398)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 220, CPyStatic_semanal_enum___globals);
        goto CPyL307;
    }
    cpy_r_r399 = cpy_r_r390 + 2;
    cpy_r_r390 = cpy_r_r399;
    goto CPyL213;
CPyL217: ;
    cpy_r_r400 = CPyStatics[5169]; /* 'Second argument of ' */
    cpy_r_r401 = CPyStatics[5170]; /* ('() must be string, tuple, list or dict literal for '
                                      'mypy to determine Enum members') */
    cpy_r_r402 = CPyStr_Build(3, cpy_r_r400, cpy_r_class_name, cpy_r_r401);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 223, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r403 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r402, cpy_r_call);
    CPy_DECREF(cpy_r_r402);
    if (unlikely(cpy_r_r403.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 222, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r403;
CPyL220: ;
    cpy_r_r404 = CPyStatics[5169]; /* 'Second argument of ' */
    cpy_r_r405 = CPyStatics[5170]; /* ('() must be string, tuple, list or dict literal for '
                                      'mypy to determine Enum members') */
    cpy_r_r406 = CPyStr_Build(3, cpy_r_r404, cpy_r_class_name, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 230, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r407 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r406, cpy_r_call);
    CPy_DECREF(cpy_r_r406);
    if (unlikely(cpy_r_r407.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 229, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r407;
CPyL223: ;
    cpy_r_r408 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r409 = *(int64_t *)cpy_r_r408;
    cpy_r_r410 = cpy_r_r409 << 1;
    cpy_r_r411 = cpy_r_r410 != 0;
    if (cpy_r_r411) {
        goto CPyL227;
    } else
        goto CPyL308;
CPyL224: ;
    cpy_r_r412 = CPyStatics[5171]; /* '() needs at least one item' */
    cpy_r_r413 = CPyStr_Build(2, cpy_r_class_name, cpy_r_r412);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 235, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    cpy_r_r414 = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(cpy_r_self, cpy_r_r413, cpy_r_call);
    CPy_DECREF(cpy_r_r413);
    if (unlikely(cpy_r_r414.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 235, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    return cpy_r_r414;
CPyL227: ;
    cpy_r_r415 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r416 = *(int64_t *)cpy_r_r415;
    cpy_r_r417 = cpy_r_r416 << 1;
    cpy_r_r418 = cpy_r_r417 != 0;
    if (cpy_r_r418) {
        goto CPyL231;
    } else
        goto CPyL309;
CPyL228: ;
    cpy_r_r419 = PyList_New(1);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 237, CPyStatic_semanal_enum___globals);
        goto CPyL310;
    }
    cpy_r_r420 = Py_None;
    cpy_r_r421 = (CPyPtr)&((PyListObject *)cpy_r_r419)->ob_item;
    cpy_r_r422 = *(CPyPtr *)cpy_r_r421;
    CPy_INCREF(cpy_r_r420);
    *(PyObject * *)cpy_r_r422 = cpy_r_r420;
    cpy_r_r423 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r424 = *(int64_t *)cpy_r_r423;
    cpy_r_r425 = cpy_r_r424 << 1;
    cpy_r_r426 = CPySequence_Multiply(cpy_r_r419, cpy_r_r425);
    CPy_DECREF(cpy_r_r419);
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 237, CPyStatic_semanal_enum___globals);
        goto CPyL310;
    }
    cpy_r_values = cpy_r_r426;
CPyL231: ;
    cpy_r_r427 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r428 = *(int64_t *)cpy_r_r427;
    cpy_r_r429 = cpy_r_r428 << 1;
    cpy_r_r430 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r431 = *(int64_t *)cpy_r_r430;
    cpy_r_r432 = cpy_r_r431 << 1;
    cpy_r_r433 = cpy_r_r429 == cpy_r_r432;
    if (cpy_r_r433) {
        goto CPyL234;
    } else
        goto CPyL311;
CPyL232: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r434 = 0;
    if (unlikely(!cpy_r_r434)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 238, CPyStatic_semanal_enum___globals);
        goto CPyL235;
    }
    CPy_Unreachable();
CPyL234: ;
    cpy_r_r435.f0 = cpy_r_items;
    cpy_r_r435.f1 = cpy_r_values;
    cpy_r_r435.f2 = 1;
    CPy_INCREF(cpy_r_r435.f0);
    CPy_INCREF(cpy_r_r435.f1);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    return cpy_r_r435;
CPyL235: ;
    tuple_T3OOC __tmp5802 = { NULL, NULL, 2 };
    cpy_r_r436 = __tmp5802;
    return cpy_r_r436;
CPyL236: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    goto CPyL235;
CPyL237: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL15;
CPyL238: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL235;
CPyL239: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_arg_kind);
    goto CPyL5;
CPyL240: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL8;
CPyL241: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_arg_kind);
    goto CPyL10;
CPyL242: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r4);
    goto CPyL235;
CPyL243: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL235;
CPyL244: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL19;
CPyL245: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL23;
CPyL246: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL27;
CPyL247: ;
    CPy_DECREF(cpy_r_valid_name);
    CPy_DECREF(cpy_r_r65);
    goto CPyL40;
CPyL248: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_valid_name);
    CPy_DecRef(cpy_r_r65);
    goto CPyL235;
CPyL249: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_valid_name);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_arg_name);
    goto CPyL235;
CPyL250: ;
    CPy_DECREF(cpy_r_arg_name);
    goto CPyL39;
CPyL251: ;
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    goto CPyL39;
CPyL252: ;
    CPy_DECREF(cpy_r_r87);
    goto CPyL54;
CPyL253: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r87);
    goto CPyL235;
CPyL254: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r87);
    goto CPyL235;
CPyL255: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_arg);
    goto CPyL235;
CPyL256: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL48;
CPyL257: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_arg);
    goto CPyL235;
CPyL258: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL52;
CPyL259: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL53;
CPyL260: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL55;
CPyL261: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_names);
    goto CPyL235;
CPyL262: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL59;
CPyL263: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_value);
    goto CPyL235;
CPyL264: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_names);
    goto CPyL63;
CPyL265: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_items);
    goto CPyL235;
CPyL266: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL69;
CPyL267: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    goto CPyL235;
CPyL268: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    goto CPyL235;
CPyL269: ;
    CPy_DECREF(cpy_r_r136);
    goto CPyL223;
CPyL270: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r136);
    goto CPyL235;
CPyL271: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL81;
CPyL272: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    goto CPyL235;
CPyL273: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL89;
CPyL274: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    goto CPyL235;
CPyL275: ;
    CPy_DECREF(cpy_r_seq_items);
    goto CPyL95;
CPyL276: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_r169);
    goto CPyL235;
CPyL277: ;
    CPy_DECREF(cpy_r_seq_item_2);
    goto CPyL103;
CPyL278: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_seq_item_2);
    goto CPyL235;
CPyL279: ;
    CPy_DECREF(cpy_r_seq_item_2);
    goto CPyL111;
CPyL280: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_r220);
    goto CPyL235;
CPyL281: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_seq_items);
    goto CPyL151;
CPyL282: ;
    CPy_DECREF(cpy_r_seq_items);
    goto CPyL223;
CPyL283: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_seq_items);
    CPy_DECREF(cpy_r_seq_item_3);
    goto CPyL132;
CPyL284: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_r254);
    goto CPyL235;
CPyL285: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_r260);
    goto CPyL235;
CPyL286: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_name);
    goto CPyL235;
CPyL287: ;
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_seq_items);
    CPy_DECREF(cpy_r_name);
    goto CPyL144;
CPyL288: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    CPy_DecRef(cpy_r_name);
    goto CPyL235;
CPyL289: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seq_items);
    goto CPyL235;
CPyL290: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL155;
CPyL291: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL168;
CPyL292: ;
    CPy_DECREF(cpy_r_r284);
    goto CPyL223;
CPyL293: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r284);
    goto CPyL235;
CPyL294: ;
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_r284);
    CPy_DECREF(cpy_r_key);
    goto CPyL160;
CPyL295: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r284);
    CPy_DecRef(cpy_r_key);
    goto CPyL235;
CPyL296: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r284);
    goto CPyL235;
CPyL297: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    goto CPyL235;
CPyL298: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    goto CPyL220;
CPyL299: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL197;
CPyL300: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL235;
CPyL301: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL188;
CPyL302: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL235;
CPyL303: ;
    CPy_DECREF(cpy_r_r355);
    goto CPyL223;
CPyL304: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r355);
    goto CPyL235;
CPyL305: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    goto CPyL217;
CPyL306: ;
    CPy_DECREF(cpy_r_r389);
    goto CPyL223;
CPyL307: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r389);
    goto CPyL235;
CPyL308: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    goto CPyL224;
CPyL309: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL228;
CPyL310: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL235;
CPyL311: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_values);
    goto CPyL232;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___parse_enum_call_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", "class_name", 0};
    static CPyArg_Parser parser = {"OO:parse_enum_call_args", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_class_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_class_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (likely(PyUnicode_Check(obj_class_name)))
        arg_class_name = obj_class_name;
    else {
        CPy_TypeError("str", obj_class_name); 
        goto fail;
    }
    tuple_T3OOC retval = CPyDef_semanal_enum___EnumCallAnalyzer___parse_enum_call_args(arg_self, arg_call, arg_class_name);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5803 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp5803);
    PyObject *__tmp5804 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp5804);
    PyObject *__tmp5805 = retval.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp5805);
    PyTuple_SET_ITEM(retbox, 2, __tmp5805);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "parse_enum_call_args", 140, CPyStatic_semanal_enum___globals);
    return NULL;
}

tuple_T3OOC CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(PyObject *cpy_r_self, PyObject *cpy_r_message, PyObject *cpy_r_context) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T3OOC cpy_r_r3;
    tuple_T3OOC cpy_r_r4;
    cpy_r_r0 = CPyDef_semanal_enum___EnumCallAnalyzer___fail(cpy_r_self, cpy_r_message, cpy_r_context);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "fail_enum_call_arg", 244, CPyStatic_semanal_enum___globals);
        goto CPyL4;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "fail_enum_call_arg", 245, CPyStatic_semanal_enum___globals);
        goto CPyL4;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "fail_enum_call_arg", 245, CPyStatic_semanal_enum___globals);
        goto CPyL5;
    }
    cpy_r_r3.f0 = cpy_r_r1;
    cpy_r_r3.f1 = cpy_r_r2;
    cpy_r_r3.f2 = 0;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    return cpy_r_r3;
CPyL4: ;
    tuple_T3OOC __tmp5806 = { NULL, NULL, 2 };
    cpy_r_r4 = __tmp5806;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"message", "context", 0};
    static CPyArg_Parser parser = {"OO:fail_enum_call_arg", kwlist, 0};
    PyObject *obj_message;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_message, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    tuple_T3OOC retval = CPyDef_semanal_enum___EnumCallAnalyzer___fail_enum_call_arg(arg_self, arg_message, arg_context);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5807 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp5807);
    PyObject *__tmp5808 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp5808);
    PyObject *__tmp5809 = retval.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp5809);
    PyTuple_SET_ITEM(retbox, 2, __tmp5809);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "fail_enum_call_arg", 241, CPyStatic_semanal_enum___globals);
    return NULL;
}

char CPyDef_semanal_enum___EnumCallAnalyzer___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___semanal_enum___EnumCallAnalyzerObject *)cpy_r_self)->_api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = 2;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_semanal_shared___SemanticAnalyzerInterface, 19, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r0, cpy_r_msg, cpy_r_ctx, cpy_r_r1, cpy_r_r2, cpy_r_r3); /* fail */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "fail", 250, CPyStatic_semanal_enum___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_semanal_enum___EnumCallAnalyzer___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", 0};
    static CPyArg_Parser parser = {"OO:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_enum___EnumCallAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_enum.EnumCallAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_enum___EnumCallAnalyzer___fail(arg_self, arg_msg, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_enum.py", "fail", 249, CPyStatic_semanal_enum___globals);
    return NULL;
}

char CPyDef_semanal_enum_____top_level__(void) {
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
    tuple_T5OOOOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
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
    PyObject *cpy_r_r70;
    tuple_T12OOOOOOOOOOOO cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", -1, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_enum___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 6, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9690]; /* ('Final', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_semanal_enum___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 8, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9691]; /* ('ARG_NAMED', 'ARG_POS', 'MDEF', 'AssignmentStmt',
                                     'CallExpr', 'Context', 'DictExpr', 'EnumCallExpr',
                                     'Expression', 'ListExpr', 'MemberExpr', 'NameExpr',
                                     'RefExpr', 'StrExpr', 'SymbolTableNode', 'TupleExpr',
                                     'TypeInfo', 'Var', 'is_StrExpr_list') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_semanal_enum___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 10, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r18 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r19 = CPyStatic_semanal_enum___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 31, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_mypy___options = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9692]; /* ('SemanticAnalyzerInterface',) */
    cpy_r_r22 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r23 = CPyStatic_semanal_enum___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 32, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9693]; /* ('ENUM_REMOVED_PROPS', 'LiteralType', 'get_proper_type') */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_semanal_enum___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 33, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[4609]; /* 'enum.Enum' */
    cpy_r_r30 = CPyStatics[4610]; /* 'enum.IntEnum' */
    cpy_r_r31 = CPyStatics[5173]; /* 'enum.Flag' */
    cpy_r_r32 = CPyStatics[5174]; /* 'enum.IntFlag' */
    cpy_r_r33 = CPyStatics[4611]; /* 'enum.StrEnum' */
    cpy_r_r34.f0 = cpy_r_r29;
    cpy_r_r34.f1 = cpy_r_r30;
    cpy_r_r34.f2 = cpy_r_r31;
    cpy_r_r34.f3 = cpy_r_r32;
    cpy_r_r34.f4 = cpy_r_r33;
    CPy_INCREF(cpy_r_r34.f0);
    CPy_INCREF(cpy_r_r34.f1);
    CPy_INCREF(cpy_r_r34.f2);
    CPy_INCREF(cpy_r_r34.f3);
    CPy_INCREF(cpy_r_r34.f4);
    cpy_r_r35 = PyTuple_New(5);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5810 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp5810);
    PyObject *__tmp5811 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp5811);
    PyObject *__tmp5812 = cpy_r_r34.f2;
    PyTuple_SET_ITEM(cpy_r_r35, 2, __tmp5812);
    PyObject *__tmp5813 = cpy_r_r34.f3;
    PyTuple_SET_ITEM(cpy_r_r35, 3, __tmp5813);
    PyObject *__tmp5814 = cpy_r_r34.f4;
    PyTuple_SET_ITEM(cpy_r_r35, 4, __tmp5814);
    cpy_r_r36 = PyFrozenSet_New(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 37, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyStatic_semanal_enum___ENUM_BASES = cpy_r_r36;
    CPy_INCREF(CPyStatic_semanal_enum___ENUM_BASES);
    cpy_r_r37 = CPyStatic_semanal_enum___globals;
    cpy_r_r38 = CPyStatics[1014]; /* 'ENUM_BASES' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 37, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    cpy_r_r41 = CPyStatics[2329]; /* 'name' */
    cpy_r_r42 = CPyStatics[2242]; /* 'value' */
    cpy_r_r43 = CPyStatics[5175]; /* '_name_' */
    cpy_r_r44 = CPyStatics[5176]; /* '_value_' */
    cpy_r_r45 = CPyStatic_types___ENUM_REMOVED_PROPS;
    if (likely(cpy_r_r45.f0 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_REMOVED_PROPS\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 46, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r47 = CPyStatics[619]; /* '__module__' */
    cpy_r_r48 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r49 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r50 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r51 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r52 = PyList_New(4);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    CPy_INCREF(cpy_r_r41);
    *(PyObject * *)cpy_r_r54 = cpy_r_r41;
    cpy_r_r55 = cpy_r_r54 + 8;
    CPy_INCREF(cpy_r_r42);
    *(PyObject * *)cpy_r_r55 = cpy_r_r42;
    cpy_r_r56 = cpy_r_r54 + 16;
    CPy_INCREF(cpy_r_r43);
    *(PyObject * *)cpy_r_r56 = cpy_r_r43;
    cpy_r_r57 = cpy_r_r54 + 24;
    CPy_INCREF(cpy_r_r44);
    *(PyObject * *)cpy_r_r57 = cpy_r_r44;
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    CPy_INCREF(cpy_r_r45.f2);
    cpy_r_r58 = PyTuple_New(3);
    if (unlikely(cpy_r_r58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5815 = cpy_r_r45.f0;
    PyTuple_SET_ITEM(cpy_r_r58, 0, __tmp5815);
    PyObject *__tmp5816 = cpy_r_r45.f1;
    PyTuple_SET_ITEM(cpy_r_r58, 1, __tmp5816);
    PyObject *__tmp5817 = cpy_r_r45.f2;
    PyTuple_SET_ITEM(cpy_r_r58, 2, __tmp5817);
    cpy_r_r59 = CPyList_Extend(cpy_r_r52, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    } else
        goto CPyL33;
CPyL16: ;
    cpy_r_r60 = PyList_Append(cpy_r_r52, cpy_r_r47);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r52, cpy_r_r48);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    }
    cpy_r_r64 = PyList_Append(cpy_r_r52, cpy_r_r49);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    }
    cpy_r_r66 = PyList_Append(cpy_r_r52, cpy_r_r50);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    }
    cpy_r_r68 = PyList_Append(cpy_r_r52, cpy_r_r51);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL32;
    }
    cpy_r_r70 = PyList_AsTuple(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    PyObject *__tmp5818;
    if (unlikely(!(PyTuple_Check(cpy_r_r70) && PyTuple_GET_SIZE(cpy_r_r70) == 12))) {
        __tmp5818 = NULL;
        goto __LL5819;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 0))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 0);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 1))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 1);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 2))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 2);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 3))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 3);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 4))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 4);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 5))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 5);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 6))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 6);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 7))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 7);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 8))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 8);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 9))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 9);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 10))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 10);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 11))))
        __tmp5818 = PyTuple_GET_ITEM(cpy_r_r70, 11);
    else {
        __tmp5818 = NULL;
    }
    if (__tmp5818 == NULL) goto __LL5819;
    __tmp5818 = cpy_r_r70;
__LL5819: ;
    if (unlikely(__tmp5818 == NULL)) {
        CPy_TypeError("tuple[str, str, str, str, str, str, str, str, str, str, str, str]", cpy_r_r70); cpy_r_r71 = (tuple_T12OOOOOOOOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp5820 = PyTuple_GET_ITEM(cpy_r_r70, 0);
        CPy_INCREF(__tmp5820);
        PyObject *__tmp5821;
        if (likely(PyUnicode_Check(__tmp5820)))
            __tmp5821 = __tmp5820;
        else {
            CPy_TypeError("str", __tmp5820); 
            __tmp5821 = NULL;
        }
        cpy_r_r71.f0 = __tmp5821;
        PyObject *__tmp5822 = PyTuple_GET_ITEM(cpy_r_r70, 1);
        CPy_INCREF(__tmp5822);
        PyObject *__tmp5823;
        if (likely(PyUnicode_Check(__tmp5822)))
            __tmp5823 = __tmp5822;
        else {
            CPy_TypeError("str", __tmp5822); 
            __tmp5823 = NULL;
        }
        cpy_r_r71.f1 = __tmp5823;
        PyObject *__tmp5824 = PyTuple_GET_ITEM(cpy_r_r70, 2);
        CPy_INCREF(__tmp5824);
        PyObject *__tmp5825;
        if (likely(PyUnicode_Check(__tmp5824)))
            __tmp5825 = __tmp5824;
        else {
            CPy_TypeError("str", __tmp5824); 
            __tmp5825 = NULL;
        }
        cpy_r_r71.f2 = __tmp5825;
        PyObject *__tmp5826 = PyTuple_GET_ITEM(cpy_r_r70, 3);
        CPy_INCREF(__tmp5826);
        PyObject *__tmp5827;
        if (likely(PyUnicode_Check(__tmp5826)))
            __tmp5827 = __tmp5826;
        else {
            CPy_TypeError("str", __tmp5826); 
            __tmp5827 = NULL;
        }
        cpy_r_r71.f3 = __tmp5827;
        PyObject *__tmp5828 = PyTuple_GET_ITEM(cpy_r_r70, 4);
        CPy_INCREF(__tmp5828);
        PyObject *__tmp5829;
        if (likely(PyUnicode_Check(__tmp5828)))
            __tmp5829 = __tmp5828;
        else {
            CPy_TypeError("str", __tmp5828); 
            __tmp5829 = NULL;
        }
        cpy_r_r71.f4 = __tmp5829;
        PyObject *__tmp5830 = PyTuple_GET_ITEM(cpy_r_r70, 5);
        CPy_INCREF(__tmp5830);
        PyObject *__tmp5831;
        if (likely(PyUnicode_Check(__tmp5830)))
            __tmp5831 = __tmp5830;
        else {
            CPy_TypeError("str", __tmp5830); 
            __tmp5831 = NULL;
        }
        cpy_r_r71.f5 = __tmp5831;
        PyObject *__tmp5832 = PyTuple_GET_ITEM(cpy_r_r70, 6);
        CPy_INCREF(__tmp5832);
        PyObject *__tmp5833;
        if (likely(PyUnicode_Check(__tmp5832)))
            __tmp5833 = __tmp5832;
        else {
            CPy_TypeError("str", __tmp5832); 
            __tmp5833 = NULL;
        }
        cpy_r_r71.f6 = __tmp5833;
        PyObject *__tmp5834 = PyTuple_GET_ITEM(cpy_r_r70, 7);
        CPy_INCREF(__tmp5834);
        PyObject *__tmp5835;
        if (likely(PyUnicode_Check(__tmp5834)))
            __tmp5835 = __tmp5834;
        else {
            CPy_TypeError("str", __tmp5834); 
            __tmp5835 = NULL;
        }
        cpy_r_r71.f7 = __tmp5835;
        PyObject *__tmp5836 = PyTuple_GET_ITEM(cpy_r_r70, 8);
        CPy_INCREF(__tmp5836);
        PyObject *__tmp5837;
        if (likely(PyUnicode_Check(__tmp5836)))
            __tmp5837 = __tmp5836;
        else {
            CPy_TypeError("str", __tmp5836); 
            __tmp5837 = NULL;
        }
        cpy_r_r71.f8 = __tmp5837;
        PyObject *__tmp5838 = PyTuple_GET_ITEM(cpy_r_r70, 9);
        CPy_INCREF(__tmp5838);
        PyObject *__tmp5839;
        if (likely(PyUnicode_Check(__tmp5838)))
            __tmp5839 = __tmp5838;
        else {
            CPy_TypeError("str", __tmp5838); 
            __tmp5839 = NULL;
        }
        cpy_r_r71.f9 = __tmp5839;
        PyObject *__tmp5840 = PyTuple_GET_ITEM(cpy_r_r70, 10);
        CPy_INCREF(__tmp5840);
        PyObject *__tmp5841;
        if (likely(PyUnicode_Check(__tmp5840)))
            __tmp5841 = __tmp5840;
        else {
            CPy_TypeError("str", __tmp5840); 
            __tmp5841 = NULL;
        }
        cpy_r_r71.f10 = __tmp5841;
        PyObject *__tmp5842 = PyTuple_GET_ITEM(cpy_r_r70, 11);
        CPy_INCREF(__tmp5842);
        PyObject *__tmp5843;
        if (likely(PyUnicode_Check(__tmp5842)))
            __tmp5843 = __tmp5842;
        else {
            CPy_TypeError("str", __tmp5842); 
            __tmp5843 = NULL;
        }
        cpy_r_r71.f11 = __tmp5843;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 41, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    cpy_r_r72 = PyTuple_New(12);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5844 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp5844);
    PyObject *__tmp5845 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp5845);
    PyObject *__tmp5846 = cpy_r_r71.f2;
    PyTuple_SET_ITEM(cpy_r_r72, 2, __tmp5846);
    PyObject *__tmp5847 = cpy_r_r71.f3;
    PyTuple_SET_ITEM(cpy_r_r72, 3, __tmp5847);
    PyObject *__tmp5848 = cpy_r_r71.f4;
    PyTuple_SET_ITEM(cpy_r_r72, 4, __tmp5848);
    PyObject *__tmp5849 = cpy_r_r71.f5;
    PyTuple_SET_ITEM(cpy_r_r72, 5, __tmp5849);
    PyObject *__tmp5850 = cpy_r_r71.f6;
    PyTuple_SET_ITEM(cpy_r_r72, 6, __tmp5850);
    PyObject *__tmp5851 = cpy_r_r71.f7;
    PyTuple_SET_ITEM(cpy_r_r72, 7, __tmp5851);
    PyObject *__tmp5852 = cpy_r_r71.f8;
    PyTuple_SET_ITEM(cpy_r_r72, 8, __tmp5852);
    PyObject *__tmp5853 = cpy_r_r71.f9;
    PyTuple_SET_ITEM(cpy_r_r72, 9, __tmp5853);
    PyObject *__tmp5854 = cpy_r_r71.f10;
    PyTuple_SET_ITEM(cpy_r_r72, 10, __tmp5854);
    PyObject *__tmp5855 = cpy_r_r71.f11;
    PyTuple_SET_ITEM(cpy_r_r72, 11, __tmp5855);
    cpy_r_r73 = PyFrozenSet_New(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 40, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    CPyStatic_semanal_enum___ENUM_SPECIAL_PROPS = cpy_r_r73;
    CPy_INCREF(CPyStatic_semanal_enum___ENUM_SPECIAL_PROPS);
    cpy_r_r74 = CPyStatic_semanal_enum___globals;
    cpy_r_r75 = CPyStatics[1015]; /* 'ENUM_SPECIAL_PROPS' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 40, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPyStatics[1016]; /* 'mypy.semanal_enum' */
    cpy_r_r80 = (PyObject *)CPyType_semanal_enum___EnumCallAnalyzer_template;
    cpy_r_r81 = CPyType_FromTemplate(cpy_r_r80, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 57, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    cpy_r_r82 = CPyDef_semanal_enum___EnumCallAnalyzer_trait_vtable_setup();
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", -1, CPyStatic_semanal_enum___globals);
        goto CPyL34;
    }
    cpy_r_r83 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r84 = CPyStatics[159]; /* 'options' */
    cpy_r_r85 = CPyStatics[4369]; /* 'api' */
    cpy_r_r86 = PyTuple_Pack(2, cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 57, CPyStatic_semanal_enum___globals);
        goto CPyL34;
    }
    cpy_r_r87 = PyObject_SetAttr(cpy_r_r81, cpy_r_r83, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 57, CPyStatic_semanal_enum___globals);
        goto CPyL34;
    }
    CPyType_semanal_enum___EnumCallAnalyzer = (PyTypeObject *)cpy_r_r81;
    CPy_INCREF(CPyType_semanal_enum___EnumCallAnalyzer);
    cpy_r_r89 = CPyStatic_semanal_enum___globals;
    cpy_r_r90 = CPyStatics[5064]; /* 'EnumCallAnalyzer' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r89, cpy_r_r90, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/semanal_enum.py", "<module>", 57, CPyStatic_semanal_enum___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r93 = 2;
    return cpy_r_r93;
CPyL32: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL16;
CPyL34: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL31;
}
