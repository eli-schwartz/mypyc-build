#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
sametype___SameTypeVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef sametype___SameTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___sametype___SameTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___sametype___SameTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *sametype___SameTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_sametype___SameTypeVisitor(PyObject *cpy_r_right);

static PyObject *
sametype___SameTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_sametype___SameTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = sametype___SameTypeVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_sametype___SameTypeVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
sametype___SameTypeVisitor_traverse(mypyc___sametype___SameTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_right);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___sametype___SameTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___sametype___SameTypeVisitorObject))));
    return 0;
}

static int
sametype___SameTypeVisitor_clear(mypyc___sametype___SameTypeVisitorObject *self)
{
    Py_CLEAR(self->_right);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___sametype___SameTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___sametype___SameTypeVisitorObject))));
    return 0;
}

static void
sametype___SameTypeVisitor_dealloc(mypyc___sametype___SameTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, sametype___SameTypeVisitor_dealloc)
    sametype___SameTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem sametype___SameTypeVisitor_vtable[15];
static bool
CPyDef_sametype___SameTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem sametype___SameTypeVisitor_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rprimitive__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rinstance__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_runion__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rtuple__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rstruct__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rarray__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rvoid__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor_____init__,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rinstance,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_runion,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rprimitive,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rtuple,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rstruct,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rarray,
        (CPyVTableItem)CPyDef_sametype___SameTypeVisitor___visit_rvoid,
    };
    memcpy(sametype___SameTypeVisitor_vtable, sametype___SameTypeVisitor_vtable_scratch, sizeof(sametype___SameTypeVisitor_vtable));
    return 1;
}

static PyObject *
sametype___SameTypeVisitor_get_right(mypyc___sametype___SameTypeVisitorObject *self, void *closure);
static int
sametype___SameTypeVisitor_set_right(mypyc___sametype___SameTypeVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef sametype___SameTypeVisitor_getseters[] = {
    {"right",
     (getter)sametype___SameTypeVisitor_get_right, (setter)sametype___SameTypeVisitor_set_right,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef sametype___SameTypeVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rinstance",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rinstance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_runion",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_runion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rprimitive",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rprimitive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rtuple",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rstruct",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rstruct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rarray",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rarray,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rvoid",
     (PyCFunction)CPyPy_sametype___SameTypeVisitor___visit_rvoid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_sametype___SameTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SameTypeVisitor",
    .tp_new = sametype___SameTypeVisitor_new,
    .tp_dealloc = (destructor)sametype___SameTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)sametype___SameTypeVisitor_traverse,
    .tp_clear = (inquiry)sametype___SameTypeVisitor_clear,
    .tp_getset = sametype___SameTypeVisitor_getseters,
    .tp_methods = sametype___SameTypeVisitor_methods,
    .tp_init = sametype___SameTypeVisitor_init,
    .tp_members = sametype___SameTypeVisitor_members,
    .tp_basicsize = sizeof(mypyc___sametype___SameTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___sametype___SameTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___sametype___SameTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_sametype___SameTypeVisitor_template = &CPyType_sametype___SameTypeVisitor_template_;

static PyObject *
sametype___SameTypeVisitor_setup(PyTypeObject *type)
{
    mypyc___sametype___SameTypeVisitorObject *self;
    self = (mypyc___sametype___SameTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = sametype___SameTypeVisitor_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_sametype___SameTypeVisitor(PyObject *cpy_r_right)
{
    PyObject *self = sametype___SameTypeVisitor_setup(CPyType_sametype___SameTypeVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_sametype___SameTypeVisitor_____init__(self, cpy_r_right);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
sametype___SameTypeVisitor_get_right(mypyc___sametype___SameTypeVisitorObject *self, void *closure)
{
    if (unlikely(self->_right == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'right' of 'SameTypeVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_right);
    PyObject *retval = self->_right;
    return retval;
}

static int
sametype___SameTypeVisitor_set_right(mypyc___sametype___SameTypeVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SameTypeVisitor' object attribute 'right' cannot be deleted");
        return -1;
    }
    if (self->_right != NULL) {
        CPy_DECREF(self->_right);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_rtypes___RType)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_right = tmp;
    return 0;
}
static PyMethodDef sametypemodule_methods[] = {
    {"is_same_type", (PyCFunction)CPyPy_sametype___is_same_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_same_signature", (PyCFunction)CPyPy_sametype___is_same_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_same_method_signature", (PyCFunction)CPyPy_sametype___is_same_method_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef sametypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.sametype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    sametypemodule_methods
};

PyObject *CPyInit_mypyc___sametype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___sametype_internal) {
        Py_INCREF(CPyModule_mypyc___sametype_internal);
        return CPyModule_mypyc___sametype_internal;
    }
    CPyModule_mypyc___sametype_internal = PyModule_Create(&sametypemodule);
    if (unlikely(CPyModule_mypyc___sametype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___sametype_internal, "__name__");
    CPyStatic_sametype___globals = PyModule_GetDict(CPyModule_mypyc___sametype_internal);
    if (unlikely(CPyStatic_sametype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_sametype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___sametype_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___sametype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_sametype___SameTypeVisitor);
    return NULL;
}

char CPyDef_sametype___is_same_type(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor(cpy_r_b);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_type", 20, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_a, CPyType_rtypes___RType, 0, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_type", 20, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_type", 20, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_sametype___is_same_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:is_same_type", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a;
    if (likely(PyObject_TypeCheck(obj_a, CPyType_rtypes___RType)))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_a); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(PyObject_TypeCheck(obj_b, CPyType_rtypes___RType)))
        arg_b = obj_b;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_b); 
        goto fail;
    }
    char retval = CPyDef_sametype___is_same_type(arg_a, arg_b);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "is_same_type", 19, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___is_same_signature(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_t1;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_t2;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r3 == cpy_r_r7;
    if (cpy_r_r8) goto CPyL2;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL24;
CPyL2: ;
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_ret_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_ret_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_sametype___is_same_type(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 26, CPyStatic_sametype___globals);
        goto CPyL25;
    }
    if (cpy_r_r12) goto CPyL5;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL23;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_args;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = 0;
    cpy_r_r17 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_args;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 0;
CPyL6: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL26;
    cpy_r_r27 = CPySequenceTuple_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 27, CPyStatic_sametype___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_func_ir___RuntimeArg))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_signature", 27, CPyStatic_sametype___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r27);
        goto CPyL27;
    }
    cpy_r_t1 = cpy_r_r28;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 27, CPyStatic_sametype___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_func_ir___RuntimeArg))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_signature", 27, CPyStatic_sametype___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r29);
        goto CPyL28;
    }
    cpy_r_t2 = cpy_r_r30;
    cpy_r_r31 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t1)->_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t2)->_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_sametype___is_same_type(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 28, CPyStatic_sametype___globals);
        goto CPyL29;
    }
    if (cpy_r_r33) {
        goto CPyL15;
    } else
        goto CPyL30;
CPyL14: ;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL19;
CPyL15: ;
    cpy_r_r35 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t1)->_name;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_t1);
    cpy_r_r36 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t2)->_name;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_t2);
    cpy_r_r37 = PyUnicode_Compare(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL18;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL18;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 28, CPyStatic_sametype___globals);
        goto CPyL27;
    }
CPyL18: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    cpy_r_r34 = cpy_r_r42;
CPyL19: ;
    cpy_r_r43 = cpy_r_r34 ^ 1;
    if (cpy_r_r43) {
        goto CPyL31;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r14 = 0;
    goto CPyL22;
CPyL21: ;
    cpy_r_r44 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r44;
    cpy_r_r45 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r45;
    goto CPyL6;
CPyL22: ;
    cpy_r_r13 = cpy_r_r14;
CPyL23: ;
    cpy_r_r9 = cpy_r_r13;
CPyL24: ;
    return cpy_r_r9;
CPyL25: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL26: ;
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_t1);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_t1);
    CPy_DecRef(cpy_r_t2);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    goto CPyL14;
CPyL31: ;
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    goto CPyL20;
}

PyObject *CPyPy_sametype___is_same_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:is_same_signature", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a;
    if (likely(Py_TYPE(obj_a) == CPyType_func_ir___FuncSignature))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_a); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(Py_TYPE(obj_b) == CPyType_func_ir___FuncSignature))
        arg_b = obj_b;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_b); 
        goto fail;
    }
    char retval = CPyDef_sametype___is_same_signature(arg_a, arg_b);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "is_same_signature", 23, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___is_same_method_signature(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_t1;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_t2;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r3 == cpy_r_r7;
    if (cpy_r_r8) goto CPyL2;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL39;
CPyL2: ;
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_ret_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_ret_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_sametype___is_same_type(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 36, CPyStatic_sametype___globals);
        goto CPyL40;
    }
    if (cpy_r_r12) goto CPyL5;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL38;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_a)->_args;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPySequenceTuple_GetSlice(cpy_r_r15, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 41, CPyStatic_sametype___globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_method_signature", 41, CPyStatic_sametype___globals, "tuple", cpy_r_r16);
        goto CPyL40;
    }
    cpy_r_r18 = 0;
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_b)->_args;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPySequenceTuple_GetSlice(cpy_r_r19, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 41, CPyStatic_sametype___globals);
        goto CPyL41;
    }
    if (likely(PyTuple_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_method_signature", 41, CPyStatic_sametype___globals, "tuple", cpy_r_r20);
        goto CPyL41;
    }
    cpy_r_r22 = 0;
CPyL10: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL42;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL42;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 37, CPyStatic_sametype___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_func_ir___RuntimeArg))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_method_signature", 37, CPyStatic_sametype___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r31);
        goto CPyL43;
    }
    cpy_r_t1 = cpy_r_r32;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 37, CPyStatic_sametype___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_func_ir___RuntimeArg))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "is_same_method_signature", 37, CPyStatic_sametype___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r33);
        goto CPyL44;
    }
    cpy_r_t2 = cpy_r_r34;
    cpy_r_r35 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t1)->_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t2)->_type;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_sametype___is_same_type(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 38, CPyStatic_sametype___globals);
        goto CPyL45;
    }
    if (cpy_r_r37) {
        goto CPyL19;
    } else
        goto CPyL46;
CPyL18: ;
    cpy_r_r38 = cpy_r_r37;
    goto CPyL34;
CPyL19: ;
    cpy_r_r39 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t1)->_pos_only;
    if (cpy_r_r39) goto CPyL21;
CPyL20: ;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL22;
CPyL21: ;
    cpy_r_r41 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t2)->_pos_only;
    cpy_r_r40 = cpy_r_r41;
CPyL22: ;
    if (!cpy_r_r40) goto CPyL24;
    cpy_r_r42 = cpy_r_r40;
    goto CPyL28;
CPyL24: ;
    cpy_r_r43 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t1)->_name;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_t2)->_name;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyUnicode_Compare(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL27;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL27;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 39, CPyStatic_sametype___globals);
        goto CPyL45;
    }
CPyL27: ;
    cpy_r_r50 = cpy_r_r45 == 0;
    cpy_r_r42 = cpy_r_r50;
CPyL28: ;
    if (cpy_r_r42) {
        goto CPyL30;
    } else
        goto CPyL47;
CPyL29: ;
    cpy_r_r51 = cpy_r_r42;
    goto CPyL33;
CPyL30: ;
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_t1, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    CPy_DECREF(cpy_r_t1);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 40, CPyStatic_sametype___globals);
        goto CPyL48;
    }
CPyL31: ;
    cpy_r_r53 = CPY_GET_ATTR(cpy_r_t2, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    CPy_DECREF(cpy_r_t2);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 40, CPyStatic_sametype___globals);
        goto CPyL43;
    }
CPyL32: ;
    cpy_r_r54 = cpy_r_r52 == cpy_r_r53;
    cpy_r_r51 = cpy_r_r54;
CPyL33: ;
    cpy_r_r38 = cpy_r_r51;
CPyL34: ;
    cpy_r_r55 = cpy_r_r38 ^ 1;
    if (cpy_r_r55) {
        goto CPyL49;
    } else
        goto CPyL36;
CPyL35: ;
    cpy_r_r14 = 0;
    goto CPyL37;
CPyL36: ;
    cpy_r_r56 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r56;
    cpy_r_r57 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r57;
    goto CPyL10;
CPyL37: ;
    cpy_r_r13 = cpy_r_r14;
CPyL38: ;
    cpy_r_r9 = cpy_r_r13;
CPyL39: ;
    return cpy_r_r9;
CPyL40: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL41: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r21);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_t1);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_t1);
    CPy_DecRef(cpy_r_t2);
    goto CPyL40;
CPyL46: ;
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    goto CPyL18;
CPyL47: ;
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    goto CPyL29;
CPyL48: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_t2);
    goto CPyL40;
CPyL49: ;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r21);
    goto CPyL35;
}

PyObject *CPyPy_sametype___is_same_method_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:is_same_method_signature", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a;
    if (likely(Py_TYPE(obj_a) == CPyType_func_ir___FuncSignature))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_a); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(Py_TYPE(obj_b) == CPyType_func_ir___FuncSignature))
        arg_b = obj_b;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_b); 
        goto fail;
    }
    char retval = CPyDef_sametype___is_same_method_signature(arg_a, arg_b);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "is_same_method_signature", 33, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_right) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_right);
    if (((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right != NULL) {
        CPy_DECREF(((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right);
    }
    ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right = cpy_r_right;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/sametype.py", "__init__", 48, CPyStatic_sametype___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_sametype___SameTypeVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"right", 0};
    PyObject *obj_right;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_rtypes___RType)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_right); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor_____init__(arg_self, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "__init__", 47, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rinstance(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rinstance", "SameTypeVisitor", "right", 51, CPyStatic_sametype___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL9;
CPyL3: ;
    cpy_r_r6 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_left)->_name;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rinstance", "SameTypeVisitor", "right", 51, CPyStatic_sametype___globals);
        goto CPyL11;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_rtypes___RInstance))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rinstance", 51, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r7);
        goto CPyL11;
    }
    cpy_r_r9 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r8)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rinstance", 51, CPyStatic_sametype___globals);
        goto CPyL10;
    }
CPyL8: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    cpy_r_r5 = cpy_r_r15;
CPyL9: ;
    return cpy_r_r5;
CPyL10: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RInstance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rinstance(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rinstance", 50, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rinstance(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RInstance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rinstance__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rinstance__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_runion(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_left_item;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_j;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_right_item;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_runion", "SameTypeVisitor", "right", 54, CPyStatic_sametype___globals);
        goto CPyL20;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL19;
    cpy_r_r5 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_runion", "SameTypeVisitor", "right", 55, CPyStatic_sametype___globals);
        goto CPyL20;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_rtypes___RUnion))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_runion", 55, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RUnion", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PySequence_List(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_runion", 55, CPyStatic_sametype___globals);
        goto CPyL20;
    }
    cpy_r_items = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_left)->_items;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL21;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_rtypes___RType)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_runion", 56, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RType", cpy_r_r15);
        goto CPyL22;
    }
    cpy_r_left_item = cpy_r_r16;
    cpy_r_r17 = 0;
    cpy_r_j = 0;
    cpy_r_r18 = 0;
CPyL9: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL23;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_rtypes___RType)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_runion", 57, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RType", cpy_r_r23);
        goto CPyL24;
    }
    cpy_r_right_item = cpy_r_r24;
    cpy_r_r25 = CPyDef_sametype___is_same_type(cpy_r_left_item, cpy_r_right_item);
    CPy_DECREF(cpy_r_right_item);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_runion", 58, CPyStatic_sametype___globals);
        goto CPyL24;
    }
    if (cpy_r_r25) {
        goto CPyL25;
    } else
        goto CPyL26;
CPyL13: ;
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_j);
    cpy_r_r27 = PyObject_DelItem(cpy_r_items, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_runion", 59, CPyStatic_sametype___globals);
        goto CPyL22;
    } else
        goto CPyL16;
CPyL14: ;
    cpy_r_r29 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r29;
    cpy_r_j = cpy_r_r29;
    cpy_r_r30 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r30;
    goto CPyL9;
CPyL15: ;
    return 0;
CPyL16: ;
    cpy_r_r31 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r31;
    goto CPyL6;
CPyL17: ;
    cpy_r_r32 = PyObject_Not(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_runion", 63, CPyStatic_sametype___globals);
        goto CPyL20;
    }
    cpy_r_r34 = cpy_r_r32;
    return cpy_r_r34;
CPyL19: ;
    return 0;
CPyL20: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL21: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r9);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_left_item);
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_left_item);
    CPyTagged_DecRef(cpy_r_j);
    goto CPyL20;
CPyL25: ;
    CPy_DECREF(cpy_r_left_item);
    goto CPyL13;
CPyL26: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL14;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_runion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_runion", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RUnion))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_runion(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_runion", 53, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_runion(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_runion__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_runion__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_runion__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rprimitive(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rprimitive", "SameTypeVisitor", "right", 67, CPyStatic_sametype___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = cpy_r_left == cpy_r_r0;
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RPrimitive))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rprimitive(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rprimitive", 66, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rprimitive(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RPrimitive))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rprimitive__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rprimitive__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rtuple(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_t1;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_t2;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rtuple", "SameTypeVisitor", "right", 71, CPyStatic_sametype___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL22;
CPyL3: ;
    cpy_r_r6 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rtuple", "SameTypeVisitor", "right", 72, CPyStatic_sametype___globals);
        goto CPyL23;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RTuple))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rtuple", 72, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r6);
        goto CPyL23;
    }
    cpy_r_r8 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r7)->_types;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r11 == cpy_r_r15;
    if (cpy_r_r16) goto CPyL7;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL21;
CPyL7: ;
    cpy_r_r18 = 1;
    cpy_r_r19 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
    cpy_r_r21 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rtuple", "SameTypeVisitor", "right", 73, CPyStatic_sametype___globals);
        goto CPyL24;
    }
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_rtypes___RTuple))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r21);
        goto CPyL24;
    }
    cpy_r_r23 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r22)->_types;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = 0;
CPyL10: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL25;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL25;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals);
        goto CPyL26;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_rtypes___RType)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RType", cpy_r_r33);
        goto CPyL26;
    }
    cpy_r_t1 = cpy_r_r34;
    cpy_r_r35 = CPySequenceTuple_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_rtypes___RType)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RType", cpy_r_r35);
        goto CPyL27;
    }
    cpy_r_t2 = cpy_r_r36;
    cpy_r_r37 = CPyDef_sametype___is_same_type(cpy_r_t1, cpy_r_t2);
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rtuple", 73, CPyStatic_sametype___globals);
        goto CPyL26;
    }
    cpy_r_r38 = cpy_r_r37 ^ 1;
    if (cpy_r_r38) {
        goto CPyL28;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r18 = 0;
    goto CPyL20;
CPyL19: ;
    cpy_r_r39 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r39;
    cpy_r_r40 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r40;
    goto CPyL10;
CPyL20: ;
    cpy_r_r17 = cpy_r_r18;
CPyL21: ;
    cpy_r_r5 = cpy_r_r17;
CPyL22: ;
    return cpy_r_r5;
CPyL23: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL24: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r23);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r23);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_t1);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r23);
    goto CPyL18;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RTuple))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rtuple(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rtuple", 69, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rtuple(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rtuple__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rtuple__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rstruct(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rstruct", "SameTypeVisitor", "right", 77, CPyStatic_sametype___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RStruct;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL9;
CPyL3: ;
    cpy_r_r6 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rstruct", "SameTypeVisitor", "right", 77, CPyStatic_sametype___globals);
        goto CPyL10;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RStruct))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/sametype.py", "visit_rstruct", 77, CPyStatic_sametype___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r6);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r7)->_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_left)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rstruct", 77, CPyStatic_sametype___globals);
        goto CPyL10;
    }
CPyL8: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    cpy_r_r5 = cpy_r_r15;
CPyL9: ;
    return cpy_r_r5;
CPyL10: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rstruct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RStruct))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rstruct(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rstruct", 76, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rstruct(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RStruct))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rstruct__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rstruct__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rarray(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rarray", "SameTypeVisitor", "right", 80, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_left, cpy_r_r0, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rarray", 80, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "visit_rarray", 80, CPyStatic_sametype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rarray(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rarray", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RArray))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rarray(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rarray", 79, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rarray(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rarray__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RArray))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rarray__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rarray__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype___SameTypeVisitor___visit_rvoid(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___sametype___SameTypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/sametype.py", "visit_rvoid", "SameTypeVisitor", "right", 83, CPyStatic_sametype___globals);
        goto CPyL2;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RVoid;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rvoid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RVoid))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_left); 
        goto fail;
    }
    char retval = CPyDef_sametype___SameTypeVisitor___visit_rvoid(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rvoid", 82, CPyStatic_sametype___globals);
    return NULL;
}

PyObject *CPyDef_sametype___SameTypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_sametype___SameTypeVisitor___visit_rvoid(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_sametype___SameTypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_sametype___SameTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.sametype.SameTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RVoid))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_sametype___SameTypeVisitor___visit_rvoid__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/sametype.py", "visit_rvoid__RTypeVisitor_glue", -1, CPyStatic_sametype___globals);
    return NULL;
}

char CPyDef_sametype_____top_level__(void) {
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
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", -1, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_sametype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 3, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10287]; /* ('FuncSignature',) */
    cpy_r_r10 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r11 = CPyStatic_sametype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 5, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10288]; /* ('RArray', 'RInstance', 'RPrimitive', 'RStruct',
                                      'RTuple', 'RType', 'RTypeVisitor', 'RUnion', 'RVoid') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_sametype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 6, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject *)CPyType_rtypes___RTypeVisitor;
    cpy_r_r18 = (PyObject *)&PyBool_Type;
    cpy_r_r19 = PyObject_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    cpy_r_r20 = PyTuple_Pack(1, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r22 = (PyObject *)CPyType_sametype___SameTypeVisitor_template;
    cpy_r_r23 = CPyType_FromTemplate(cpy_r_r22, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    cpy_r_r24 = CPyDef_sametype___SameTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", -1, CPyStatic_sametype___globals);
        goto CPyL15;
    }
    cpy_r_r25 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r26 = CPyStatics[2412]; /* 'right' */
    cpy_r_r27 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r28 = PyTuple_Pack(2, cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL15;
    }
    cpy_r_r29 = PyObject_SetAttr(cpy_r_r23, cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL15;
    }
    CPyType_sametype___SameTypeVisitor = (PyTypeObject *)cpy_r_r23;
    CPy_INCREF(CPyType_sametype___SameTypeVisitor);
    cpy_r_r31 = CPyStatic_sametype___globals;
    cpy_r_r32 = CPyStatics[8997]; /* 'SameTypeVisitor' */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r31, cpy_r_r32, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/sametype.py", "<module>", 46, CPyStatic_sametype___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL15: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL14;
}
