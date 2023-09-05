#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
subtype___SubtypeVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef subtype___SubtypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___subtype___SubtypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___subtype___SubtypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *subtype___SubtypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_subtype___SubtypeVisitor(PyObject *cpy_r_right);

static PyObject *
subtype___SubtypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_subtype___SubtypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = subtype___SubtypeVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_subtype___SubtypeVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
subtype___SubtypeVisitor_traverse(mypyc___subtype___SubtypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_right);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___subtype___SubtypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___subtype___SubtypeVisitorObject))));
    return 0;
}

static int
subtype___SubtypeVisitor_clear(mypyc___subtype___SubtypeVisitorObject *self)
{
    Py_CLEAR(self->_right);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___subtype___SubtypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___subtype___SubtypeVisitorObject))));
    return 0;
}

static void
subtype___SubtypeVisitor_dealloc(mypyc___subtype___SubtypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, subtype___SubtypeVisitor_dealloc)
    subtype___SubtypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem subtype___SubtypeVisitor_vtable[15];
static bool
CPyDef_subtype___SubtypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem subtype___SubtypeVisitor_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rprimitive__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rinstance__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_runion__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rtuple__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rstruct__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rarray__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rvoid__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor_____init__,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rinstance,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_runion,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rprimitive,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rtuple,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rstruct,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rarray,
        (CPyVTableItem)CPyDef_subtype___SubtypeVisitor___visit_rvoid,
    };
    memcpy(subtype___SubtypeVisitor_vtable, subtype___SubtypeVisitor_vtable_scratch, sizeof(subtype___SubtypeVisitor_vtable));
    return 1;
}

static PyObject *
subtype___SubtypeVisitor_get_right(mypyc___subtype___SubtypeVisitorObject *self, void *closure);
static int
subtype___SubtypeVisitor_set_right(mypyc___subtype___SubtypeVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef subtype___SubtypeVisitor_getseters[] = {
    {"right",
     (getter)subtype___SubtypeVisitor_get_right, (setter)subtype___SubtypeVisitor_set_right,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef subtype___SubtypeVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rinstance",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rinstance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_runion",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_runion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rprimitive",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rprimitive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rtuple",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rstruct",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rstruct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rarray",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rarray,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rvoid",
     (PyCFunction)CPyPy_subtype___SubtypeVisitor___visit_rvoid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_subtype___SubtypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SubtypeVisitor",
    .tp_new = subtype___SubtypeVisitor_new,
    .tp_dealloc = (destructor)subtype___SubtypeVisitor_dealloc,
    .tp_traverse = (traverseproc)subtype___SubtypeVisitor_traverse,
    .tp_clear = (inquiry)subtype___SubtypeVisitor_clear,
    .tp_getset = subtype___SubtypeVisitor_getseters,
    .tp_methods = subtype___SubtypeVisitor_methods,
    .tp_init = subtype___SubtypeVisitor_init,
    .tp_members = subtype___SubtypeVisitor_members,
    .tp_basicsize = sizeof(mypyc___subtype___SubtypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___subtype___SubtypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___subtype___SubtypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_subtype___SubtypeVisitor_template = &CPyType_subtype___SubtypeVisitor_template_;

static PyObject *
subtype___SubtypeVisitor_setup(PyTypeObject *type)
{
    mypyc___subtype___SubtypeVisitorObject *self;
    self = (mypyc___subtype___SubtypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = subtype___SubtypeVisitor_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_subtype___SubtypeVisitor(PyObject *cpy_r_right)
{
    PyObject *self = subtype___SubtypeVisitor_setup(CPyType_subtype___SubtypeVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_subtype___SubtypeVisitor_____init__(self, cpy_r_right);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
subtype___SubtypeVisitor_get_right(mypyc___subtype___SubtypeVisitorObject *self, void *closure)
{
    if (unlikely(self->_right == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'right' of 'SubtypeVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_right);
    PyObject *retval = self->_right;
    return retval;
}

static int
subtype___SubtypeVisitor_set_right(mypyc___subtype___SubtypeVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SubtypeVisitor' object attribute 'right' cannot be deleted");
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
static PyMethodDef subtypemodule_methods[] = {
    {"is_subtype", (PyCFunction)CPyPy_subtype___is_subtype, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef subtypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.subtype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    subtypemodule_methods
};

PyObject *CPyInit_mypyc___subtype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___subtype_internal) {
        Py_INCREF(CPyModule_mypyc___subtype_internal);
        return CPyModule_mypyc___subtype_internal;
    }
    CPyModule_mypyc___subtype_internal = PyModule_Create(&subtypemodule);
    if (unlikely(CPyModule_mypyc___subtype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___subtype_internal, "__name__");
    CPyStatic_subtype___globals = PyModule_GetDict(CPyModule_mypyc___subtype_internal);
    if (unlikely(CPyStatic_subtype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_subtype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___subtype_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___subtype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_subtype___SubtypeVisitor);
    return NULL;
}

char CPyDef_subtype___is_subtype(PyObject *cpy_r_left, PyObject *cpy_r_right) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_left_item;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_right_item;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_item;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyDef_rtypes___is_object_rprimitive(cpy_r_right);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 27, CPyStatic_subtype___globals);
        goto CPyL34;
    }
    if (!cpy_r_r0) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL30;
    cpy_r_r5 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_left)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_left) == CPyType_rtypes___RUnion))
        cpy_r_r9 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 31, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RUnion", cpy_r_left);
        goto CPyL34;
    }
    cpy_r_r10 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r9)->_items;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = 0;
CPyL7: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL35;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_rtypes___RType)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 31, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r16);
        goto CPyL36;
    }
    cpy_r_left_item = cpy_r_r17;
    cpy_r_r18 = 0;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_rtypes___RUnion))
        cpy_r_r19 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 32, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RUnion", cpy_r_right);
        goto CPyL37;
    }
    cpy_r_r20 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r19)->_items;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = 0;
CPyL11: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL38;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_rtypes___RType)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 32, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r26);
        goto CPyL39;
    }
    cpy_r_right_item = cpy_r_r27;
    cpy_r_r28 = CPyDef_subtype___is_subtype(cpy_r_left_item, cpy_r_right_item);
    CPy_DECREF(cpy_r_right_item);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 32, CPyStatic_subtype___globals);
        goto CPyL39;
    }
    if (cpy_r_r28) {
        goto CPyL40;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r18 = 1;
    goto CPyL17;
CPyL16: ;
    cpy_r_r29 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r29;
    goto CPyL11;
CPyL17: ;
    if (cpy_r_r18) {
        goto CPyL19;
    } else
        goto CPyL41;
CPyL18: ;
    return 0;
CPyL19: ;
    cpy_r_r30 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r30;
    goto CPyL7;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r31 = 0;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_rtypes___RUnion))
        cpy_r_r32 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 36, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RUnion", cpy_r_right);
        goto CPyL34;
    }
    cpy_r_r33 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_r32)->_items;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = 0;
CPyL23: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL42;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r34);
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_rtypes___RType)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "is_subtype", 36, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r39);
        goto CPyL43;
    }
    cpy_r_item = cpy_r_r40;
    cpy_r_r41 = CPyDef_subtype___is_subtype(cpy_r_left, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 36, CPyStatic_subtype___globals);
        goto CPyL43;
    }
    if (cpy_r_r41) {
        goto CPyL44;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r31 = 1;
    goto CPyL29;
CPyL28: ;
    cpy_r_r42 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r42;
    goto CPyL23;
CPyL29: ;
    return cpy_r_r31;
CPyL30: ;
    cpy_r_r43 = CPyDef_subtype___SubtypeVisitor(cpy_r_right);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 37, CPyStatic_subtype___globals);
        goto CPyL34;
    }
    cpy_r_r44 = CPY_GET_METHOD(cpy_r_left, CPyType_rtypes___RType, 0, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_left, cpy_r_r43); /* accept */
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 37, CPyStatic_subtype___globals);
        goto CPyL34;
    }
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 37, CPyStatic_subtype___globals);
        goto CPyL34;
    }
    return cpy_r_r45;
CPyL34: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL35: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL20;
CPyL36: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_left_item);
    goto CPyL34;
CPyL38: ;
    CPy_DECREF(cpy_r_left_item);
    CPy_DECREF(cpy_r_r20);
    goto CPyL17;
CPyL39: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_left_item);
    CPy_DecRef(cpy_r_r20);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_left_item);
    CPy_DECREF(cpy_r_r20);
    goto CPyL15;
CPyL41: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL18;
CPyL42: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL34;
CPyL44: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL27;
}

PyObject *CPyPy_subtype___is_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:is_subtype", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_rtypes___RType)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_rtypes___RType)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_right); 
        goto fail;
    }
    char retval = CPyDef_subtype___is_subtype(arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "is_subtype", 26, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_right) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_right);
    if (((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right != NULL) {
        CPy_DECREF(((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right);
    }
    ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right = cpy_r_right;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/subtype.py", "__init__", 48, CPyStatic_subtype___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_subtype___SubtypeVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"right", 0};
    PyObject *obj_right;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_rtypes___RType)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_right); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor_____init__(arg_self, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "__init__", 47, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rinstance(PyObject *cpy_r_self, PyObject *cpy_r_left) {
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
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rinstance", "SubtypeVisitor", "right", 51, CPyStatic_subtype___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL3;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL8;
CPyL3: ;
    cpy_r_r6 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rinstance", "SubtypeVisitor", "right", 51, CPyStatic_subtype___globals);
        goto CPyL9;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RInstance))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rinstance", 51, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r7)->_class_ir;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_left)->_class_ir;
    cpy_r_r10 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r9)->_mro;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rinstance", "ClassIR", "mro", 51, CPyStatic_subtype___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = PySequence_Contains(cpy_r_r10, cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rinstance", 51, CPyStatic_subtype___globals);
        goto CPyL9;
    }
    cpy_r_r13 = cpy_r_r11;
    cpy_r_r5 = cpy_r_r13;
CPyL8: ;
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RInstance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rinstance(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rinstance", 50, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rinstance(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RInstance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rinstance__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rinstance__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_runion(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = 1;
    cpy_r_r1 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_left)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL10;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_rtypes___RType)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_runion", 54, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r7);
        goto CPyL11;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_runion", "SubtypeVisitor", "right", 54, CPyStatic_subtype___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r9);
CPyL4: ;
    cpy_r_r10 = CPyDef_subtype___is_subtype(cpy_r_item, cpy_r_r9);
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_runion", 54, CPyStatic_subtype___globals);
        goto CPyL11;
    }
    cpy_r_r11 = cpy_r_r10 ^ 1;
    if (cpy_r_r11) {
        goto CPyL13;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r0 = 0;
    goto CPyL8;
CPyL7: ;
    cpy_r_r12 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r12;
    goto CPyL1;
CPyL8: ;
    return cpy_r_r0;
CPyL9: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL10: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_item);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_runion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_runion", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RUnion))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_runion(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_runion", 53, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_runion(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_runion__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_runion__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_runion__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rprimitive(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_right;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rprimitive", "SubtypeVisitor", "right", 57, CPyStatic_subtype___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_right = cpy_r_r0;
    cpy_r_r1 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_left);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 58, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (!cpy_r_r1) goto CPyL8;
    cpy_r_r2 = CPyDef_rtypes___is_tagged(cpy_r_right);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 59, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r2) goto CPyL30;
    cpy_r_r3 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_right);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 59, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r3) {
        goto CPyL30;
    } else
        goto CPyL27;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r4 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_left);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 61, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (!cpy_r_r4) goto CPyL17;
    cpy_r_r5 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_right);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 62, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r5) goto CPyL31;
    cpy_r_r6 = CPyDef_rtypes___is_tagged(cpy_r_right);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 62, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r6) goto CPyL31;
    cpy_r_r7 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_right);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 62, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r7) {
        goto CPyL31;
    } else
        goto CPyL27;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r8 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_left);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 64, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (!cpy_r_r8) goto CPyL22;
    cpy_r_r9 = CPyDef_rtypes___is_int_rprimitive(cpy_r_right);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 65, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r9) {
        goto CPyL32;
    } else
        goto CPyL27;
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r10 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_left);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 67, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (!cpy_r_r10) goto CPyL27;
    cpy_r_r11 = CPyDef_rtypes___is_int_rprimitive(cpy_r_right);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 68, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (cpy_r_r11) {
        goto CPyL33;
    } else
        goto CPyL27;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r12 = cpy_r_left == cpy_r_right;
    CPy_DECREF(cpy_r_right);
    return cpy_r_r12;
CPyL28: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL29: ;
    CPy_DecRef(cpy_r_right);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL7;
CPyL31: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL16;
CPyL32: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL21;
CPyL33: ;
    CPy_DECREF(cpy_r_right);
    goto CPyL26;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RPrimitive))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rprimitive(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive", 56, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rprimitive(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RPrimitive))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rprimitive__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rtuple(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_t1;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_t2;
    char cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rtuple", "SubtypeVisitor", "right", 73, CPyStatic_subtype___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_rtypes___is_tuple_rprimitive(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple", 73, CPyStatic_subtype___globals);
        goto CPyL26;
    }
    if (!cpy_r_r1) goto CPyL4;
    return 1;
CPyL4: ;
    cpy_r_r2 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rtuple", "SubtypeVisitor", "right", 75, CPyStatic_subtype___globals);
        goto CPyL26;
    }
CPyL5: ;
    cpy_r_r3 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL25;
    cpy_r_r7 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rtuple", "SubtypeVisitor", "right", 76, CPyStatic_subtype___globals);
        goto CPyL26;
    }
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_rtypes___RTuple))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rtuple", 76, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r7);
        goto CPyL26;
    }
    cpy_r_r9 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r8)->_types;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r12 == cpy_r_r16;
    if (cpy_r_r17) goto CPyL10;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL24;
CPyL10: ;
    cpy_r_r19 = 1;
    cpy_r_r20 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = 0;
    cpy_r_r22 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rtuple", "SubtypeVisitor", "right", 77, CPyStatic_subtype___globals);
        goto CPyL27;
    }
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_rtypes___RTuple))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rtuple", 77, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r22);
        goto CPyL27;
    }
    cpy_r_r24 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r23)->_types;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = 0;
CPyL13: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL28;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL28;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple", 76, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_rtypes___RType)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rtuple", 76, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r34);
        goto CPyL29;
    }
    cpy_r_t1 = cpy_r_r35;
    cpy_r_r36 = CPySequenceTuple_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple", 76, CPyStatic_subtype___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_rtypes___RType)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rtuple", 76, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r36);
        goto CPyL30;
    }
    cpy_r_t2 = cpy_r_r37;
    cpy_r_r38 = CPyDef_subtype___is_subtype(cpy_r_t1, cpy_r_t2);
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple", 77, CPyStatic_subtype___globals);
        goto CPyL29;
    }
    cpy_r_r39 = cpy_r_r38 ^ 1;
    if (cpy_r_r39) {
        goto CPyL31;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r19 = 0;
    goto CPyL23;
CPyL22: ;
    cpy_r_r40 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r40;
    cpy_r_r41 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r41;
    goto CPyL13;
CPyL23: ;
    cpy_r_r18 = cpy_r_r19;
CPyL24: ;
    return cpy_r_r18;
CPyL25: ;
    return 0;
CPyL26: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL27: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL26;
CPyL28: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_t1);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    goto CPyL21;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RTuple))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rtuple(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple", 72, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rtuple(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rtuple__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rtuple__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rstruct(PyObject *cpy_r_self, PyObject *cpy_r_left) {
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
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rstruct", "SubtypeVisitor", "right", 82, CPyStatic_subtype___globals);
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
    cpy_r_r6 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rstruct", "SubtypeVisitor", "right", 82, CPyStatic_subtype___globals);
        goto CPyL10;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RStruct))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/subtype.py", "visit_rstruct", 82, CPyStatic_subtype___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r6);
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
        CPy_AddTraceback("mypyc/subtype.py", "visit_rstruct", 82, CPyStatic_subtype___globals);
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

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rstruct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RStruct))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rstruct(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rstruct", 81, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rstruct(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RStruct))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rstruct__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rstruct__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rarray(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rarray", "SubtypeVisitor", "right", 85, CPyStatic_subtype___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_left, cpy_r_r0, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rarray", 85, CPyStatic_subtype___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "visit_rarray", 85, CPyStatic_subtype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rarray(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rarray", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RArray))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rarray(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rarray", 84, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rarray(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rarray__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RArray))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rarray__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rarray__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype___SubtypeVisitor___visit_rvoid(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___subtype___SubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/subtype.py", "visit_rvoid", "SubtypeVisitor", "right", 88, CPyStatic_subtype___globals);
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

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rvoid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RVoid))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_left); 
        goto fail;
    }
    char retval = CPyDef_subtype___SubtypeVisitor___visit_rvoid(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rvoid", 87, CPyStatic_subtype___globals);
    return NULL;
}

PyObject *CPyDef_subtype___SubtypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_subtype___SubtypeVisitor___visit_rvoid(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_subtype___SubtypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_subtype___SubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.subtype.SubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RVoid))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_subtype___SubtypeVisitor___visit_rvoid__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/subtype.py", "visit_rvoid__RTypeVisitor_glue", -1, CPyStatic_subtype___globals);
    return NULL;
}

char CPyDef_subtype_____top_level__(void) {
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
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", -1, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_subtype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 3, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10289]; /* ('RArray', 'RInstance', 'RPrimitive', 'RStruct',
                                     'RTuple', 'RType', 'RTypeVisitor', 'RUnion', 'RVoid',
                                     'is_bit_rprimitive', 'is_bool_rprimitive',
                                     'is_fixed_width_rtype', 'is_int_rprimitive',
                                     'is_object_rprimitive', 'is_short_int_rprimitive',
                                     'is_tagged', 'is_tuple_rprimitive') */
    cpy_r_r10 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r11 = CPyStatic_subtype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 5, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject *)CPyType_rtypes___RTypeVisitor;
    cpy_r_r14 = (PyObject *)&PyBool_Type;
    cpy_r_r15 = PyObject_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    cpy_r_r16 = PyTuple_Pack(1, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    cpy_r_r17 = CPyStatics[8445]; /* 'mypyc.subtype' */
    cpy_r_r18 = (PyObject *)CPyType_subtype___SubtypeVisitor_template;
    cpy_r_r19 = CPyType_FromTemplate(cpy_r_r18, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    cpy_r_r20 = CPyDef_subtype___SubtypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", -1, CPyStatic_subtype___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r22 = CPyStatics[2412]; /* 'right' */
    cpy_r_r23 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r24 = PyTuple_Pack(2, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL14;
    }
    cpy_r_r25 = PyObject_SetAttr(cpy_r_r19, cpy_r_r21, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL14;
    }
    CPyType_subtype___SubtypeVisitor = (PyTypeObject *)cpy_r_r19;
    CPy_INCREF(CPyType_subtype___SubtypeVisitor);
    cpy_r_r27 = CPyStatic_subtype___globals;
    cpy_r_r28 = CPyStatics[6066]; /* 'SubtypeVisitor' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/subtype.py", "<module>", 40, CPyStatic_subtype___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL14: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL13;
}
