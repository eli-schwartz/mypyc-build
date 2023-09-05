#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
rt_subtype___RTSubtypeVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef rt_subtype___RTSubtypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *rt_subtype___RTSubtypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_rt_subtype___RTSubtypeVisitor(PyObject *cpy_r_right);

static PyObject *
rt_subtype___RTSubtypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_rt_subtype___RTSubtypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = rt_subtype___RTSubtypeVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_rt_subtype___RTSubtypeVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
rt_subtype___RTSubtypeVisitor_traverse(mypyc___rt_subtype___RTSubtypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_right);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject))));
    return 0;
}

static int
rt_subtype___RTSubtypeVisitor_clear(mypyc___rt_subtype___RTSubtypeVisitorObject *self)
{
    Py_CLEAR(self->_right);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject))));
    return 0;
}

static void
rt_subtype___RTSubtypeVisitor_dealloc(mypyc___rt_subtype___RTSubtypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, rt_subtype___RTSubtypeVisitor_dealloc)
    rt_subtype___RTSubtypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem rt_subtype___RTSubtypeVisitor_vtable[15];
static bool
CPyDef_rt_subtype___RTSubtypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem rt_subtype___RTSubtypeVisitor_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid__RTypeVisitor_glue,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor_____init__,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray,
        (CPyVTableItem)CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid,
    };
    memcpy(rt_subtype___RTSubtypeVisitor_vtable, rt_subtype___RTSubtypeVisitor_vtable_scratch, sizeof(rt_subtype___RTSubtypeVisitor_vtable));
    return 1;
}

static PyObject *
rt_subtype___RTSubtypeVisitor_get_right(mypyc___rt_subtype___RTSubtypeVisitorObject *self, void *closure);
static int
rt_subtype___RTSubtypeVisitor_set_right(mypyc___rt_subtype___RTSubtypeVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef rt_subtype___RTSubtypeVisitor_getseters[] = {
    {"right",
     (getter)rt_subtype___RTSubtypeVisitor_get_right, (setter)rt_subtype___RTSubtypeVisitor_set_right,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef rt_subtype___RTSubtypeVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rinstance",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rinstance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_runion",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_runion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rprimitive",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rprimitive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rtuple",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rtuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rstruct",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rstruct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rarray",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rarray,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_rvoid",
     (PyCFunction)CPyPy_rt_subtype___RTSubtypeVisitor___visit_rvoid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_rt_subtype___RTSubtypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RTSubtypeVisitor",
    .tp_new = rt_subtype___RTSubtypeVisitor_new,
    .tp_dealloc = (destructor)rt_subtype___RTSubtypeVisitor_dealloc,
    .tp_traverse = (traverseproc)rt_subtype___RTSubtypeVisitor_traverse,
    .tp_clear = (inquiry)rt_subtype___RTSubtypeVisitor_clear,
    .tp_getset = rt_subtype___RTSubtypeVisitor_getseters,
    .tp_methods = rt_subtype___RTSubtypeVisitor_methods,
    .tp_init = rt_subtype___RTSubtypeVisitor_init,
    .tp_members = rt_subtype___RTSubtypeVisitor_members,
    .tp_basicsize = sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___rt_subtype___RTSubtypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_rt_subtype___RTSubtypeVisitor_template = &CPyType_rt_subtype___RTSubtypeVisitor_template_;

static PyObject *
rt_subtype___RTSubtypeVisitor_setup(PyTypeObject *type)
{
    mypyc___rt_subtype___RTSubtypeVisitorObject *self;
    self = (mypyc___rt_subtype___RTSubtypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = rt_subtype___RTSubtypeVisitor_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor(PyObject *cpy_r_right)
{
    PyObject *self = rt_subtype___RTSubtypeVisitor_setup(CPyType_rt_subtype___RTSubtypeVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_rt_subtype___RTSubtypeVisitor_____init__(self, cpy_r_right);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
rt_subtype___RTSubtypeVisitor_get_right(mypyc___rt_subtype___RTSubtypeVisitorObject *self, void *closure)
{
    if (unlikely(self->_right == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'right' of 'RTSubtypeVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_right);
    PyObject *retval = self->_right;
    return retval;
}

static int
rt_subtype___RTSubtypeVisitor_set_right(mypyc___rt_subtype___RTSubtypeVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RTSubtypeVisitor' object attribute 'right' cannot be deleted");
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
static PyMethodDef rt_subtypemodule_methods[] = {
    {"is_runtime_subtype", (PyCFunction)CPyPy_rt_subtype___is_runtime_subtype, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef rt_subtypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.rt_subtype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    rt_subtypemodule_methods
};

PyObject *CPyInit_mypyc___rt_subtype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___rt_subtype_internal) {
        Py_INCREF(CPyModule_mypyc___rt_subtype_internal);
        return CPyModule_mypyc___rt_subtype_internal;
    }
    CPyModule_mypyc___rt_subtype_internal = PyModule_Create(&rt_subtypemodule);
    if (unlikely(CPyModule_mypyc___rt_subtype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___rt_subtype_internal, "__name__");
    CPyStatic_rt_subtype___globals = PyModule_GetDict(CPyModule_mypyc___rt_subtype_internal);
    if (unlikely(CPyStatic_rt_subtype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_rt_subtype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___rt_subtype_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___rt_subtype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_rt_subtype___RTSubtypeVisitor);
    return NULL;
}

char CPyDef_rt_subtype___is_runtime_subtype(PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor(cpy_r_right);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "is_runtime_subtype", 37, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_left, CPyType_rtypes___RType, 0, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_left, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "is_runtime_subtype", 37, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "is_runtime_subtype", 37, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rt_subtype___is_runtime_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:is_runtime_subtype", kwlist, 0};
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
    char retval = CPyDef_rt_subtype___is_runtime_subtype(arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "is_runtime_subtype", 36, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_right) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_right);
    if (((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right != NULL) {
        CPy_DECREF(((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right);
    }
    ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right = cpy_r_right;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "__init__", 48, CPyStatic_rt_subtype___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"right", 0};
    PyObject *obj_right;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_rtypes___RType)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_right); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor_____init__(arg_self, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "__init__", 47, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rinstance", "RTSubtypeVisitor", "right", 51, CPyStatic_rt_subtype___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_subtype___is_subtype(cpy_r_left, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rinstance", 51, CPyStatic_rt_subtype___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rinstance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RInstance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rinstance", 50, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rinstance__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rinstance__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RInstance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RInstance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rinstance__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rinstance__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_runion", "RTSubtypeVisitor", "right", 54, CPyStatic_rt_subtype___globals);
        goto CPyL7;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r0)->_is_unboxed;
    cpy_r_r2 = cpy_r_r1 ^ 1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL6;
CPyL3: ;
    cpy_r_r4 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_runion", "RTSubtypeVisitor", "right", 54, CPyStatic_rt_subtype___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDef_subtype___is_subtype(cpy_r_left, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_runion", 54, CPyStatic_rt_subtype___globals);
        goto CPyL7;
    }
    cpy_r_r3 = cpy_r_r5;
CPyL6: ;
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_runion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_runion", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RUnion))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_runion", 53, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_runion__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_runion__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_runion__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_runion__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_left);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive", 57, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    if (!cpy_r_r0) goto CPyL6;
    cpy_r_r1 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rprimitive", "RTSubtypeVisitor", "right", 57, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive", 57, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    if (!cpy_r_r2) goto CPyL6;
    return 1;
CPyL6: ;
    cpy_r_r3 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_left);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive", 59, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    if (!cpy_r_r3) goto CPyL12;
    cpy_r_r4 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rprimitive", "RTSubtypeVisitor", "right", 59, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r4);
CPyL9: ;
    cpy_r_r5 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive", 59, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    if (!cpy_r_r5) goto CPyL12;
    return 1;
CPyL12: ;
    cpy_r_r6 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rprimitive", "RTSubtypeVisitor", "right", 61, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r6);
CPyL13: ;
    cpy_r_r7 = cpy_r_left == cpy_r_r6;
    CPy_DECREF(cpy_r_r6);
    return cpy_r_r7;
CPyL14: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rprimitive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RPrimitive))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive", 56, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rprimitive__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RPrimitive))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RPrimitive", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rprimitive__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rprimitive__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_t1;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_t2;
    char cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rtuple", "RTSubtypeVisitor", "right", 64, CPyStatic_rt_subtype___globals);
        goto CPyL22;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL21;
    cpy_r_r5 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rtuple", "RTSubtypeVisitor", "right", 65, CPyStatic_rt_subtype___globals);
        goto CPyL22;
    }
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_rtypes___RTuple))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/rt_subtype.py", "visit_rtuple", 65, CPyStatic_rt_subtype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r5);
        goto CPyL22;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r6)->_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r10 == cpy_r_r14;
    if (cpy_r_r15) goto CPyL6;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL20;
CPyL6: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_left)->_types;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = 0;
    cpy_r_r20 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rtuple", "RTSubtypeVisitor", "right", 66, CPyStatic_rt_subtype___globals);
        goto CPyL23;
    }
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_rtypes___RTuple))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/rt_subtype.py", "visit_rtuple", 66, CPyStatic_rt_subtype___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r20);
        goto CPyL23;
    }
    cpy_r_r22 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r21)->_types;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
CPyL9: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL24;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rtuple", 65, CPyStatic_rt_subtype___globals);
        goto CPyL25;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_rtypes___RType)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/rt_subtype.py", "visit_rtuple", 65, CPyStatic_rt_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r32);
        goto CPyL25;
    }
    cpy_r_t1 = cpy_r_r33;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rtuple", 65, CPyStatic_rt_subtype___globals);
        goto CPyL26;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_rtypes___RType)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/rt_subtype.py", "visit_rtuple", 65, CPyStatic_rt_subtype___globals, "mypyc.ir.rtypes.RType", cpy_r_r34);
        goto CPyL26;
    }
    cpy_r_t2 = cpy_r_r35;
    cpy_r_r36 = CPyDef_rt_subtype___is_runtime_subtype(cpy_r_t1, cpy_r_t2);
    CPy_DECREF(cpy_r_t1);
    CPy_DECREF(cpy_r_t2);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rtuple", 66, CPyStatic_rt_subtype___globals);
        goto CPyL25;
    }
    cpy_r_r37 = cpy_r_r36 ^ 1;
    if (cpy_r_r37) {
        goto CPyL27;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r17 = 0;
    goto CPyL19;
CPyL18: ;
    cpy_r_r38 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r38;
    cpy_r_r39 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r39;
    goto CPyL9;
CPyL19: ;
    cpy_r_r16 = cpy_r_r17;
CPyL20: ;
    return cpy_r_r16;
CPyL21: ;
    return 0;
CPyL22: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL23: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL22;
CPyL24: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r22);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_t1);
    goto CPyL22;
CPyL27: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r22);
    goto CPyL17;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rtuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RTuple))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rtuple", 63, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rtuple__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rtuple__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rtuple__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rtuple__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct(PyObject *cpy_r_self, PyObject *cpy_r_left) {
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
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rstruct", "RTSubtypeVisitor", "right", 71, CPyStatic_rt_subtype___globals);
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
    cpy_r_r6 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rstruct", "RTSubtypeVisitor", "right", 71, CPyStatic_rt_subtype___globals);
        goto CPyL10;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_rtypes___RStruct))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/rt_subtype.py", "visit_rstruct", 71, CPyStatic_rt_subtype___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r6);
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
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rstruct", 71, CPyStatic_rt_subtype___globals);
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

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rstruct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RStruct))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rstruct", 70, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rstruct__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rstruct__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RStruct))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RStruct", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rstruct__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rstruct__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rarray", "RTSubtypeVisitor", "right", 74, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_RichCompare(cpy_r_left, cpy_r_r0, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rarray", 74, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rarray", 74, CPyStatic_rt_subtype___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rarray(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rarray", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RArray))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rarray", 73, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rarray__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rarray__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RArray))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RArray", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rarray__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rarray__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid(PyObject *cpy_r_self, PyObject *cpy_r_left) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___rt_subtype___RTSubtypeVisitorObject *)cpy_r_self)->_right;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/rt_subtype.py", "visit_rvoid", "RTSubtypeVisitor", "right", 77, CPyStatic_rt_subtype___globals);
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

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rvoid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid", kwlist, 0};
    PyObject *obj_left;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_left)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_rtypes___RVoid))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_left); 
        goto fail;
    }
    char retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid(arg_self, arg_left);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rvoid", 76, CPyStatic_rt_subtype___globals);
    return NULL;
}

PyObject *CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid(cpy_r_self, cpy_r_typ);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_rt_subtype___RTSubtypeVisitor___visit_rvoid__RTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_rvoid__RTypeVisitor_glue", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_rt_subtype___RTSubtypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.rt_subtype.RTSubtypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RVoid))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RVoid", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_rt_subtype___RTSubtypeVisitor___visit_rvoid__RTypeVisitor_glue(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/rt_subtype.py", "visit_rvoid__RTypeVisitor_glue", -1, CPyStatic_rt_subtype___globals);
    return NULL;
}

char CPyDef_rt_subtype_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", -1, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_rt_subtype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 16, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10286]; /* ('RArray', 'RInstance', 'RPrimitive', 'RStruct',
                                     'RTuple', 'RType', 'RTypeVisitor', 'RUnion', 'RVoid',
                                     'is_bit_rprimitive', 'is_bool_rprimitive',
                                     'is_int_rprimitive', 'is_short_int_rprimitive') */
    cpy_r_r10 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r11 = CPyStatic_rt_subtype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 18, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r14 = CPyStatics[8445]; /* 'mypyc.subtype' */
    cpy_r_r15 = CPyStatic_rt_subtype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 33, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    CPyModule_mypyc___subtype = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___subtype);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject *)CPyType_rtypes___RTypeVisitor;
    cpy_r_r18 = (PyObject *)&PyBool_Type;
    cpy_r_r19 = PyObject_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    cpy_r_r20 = PyTuple_Pack(1, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[8444]; /* 'mypyc.rt_subtype' */
    cpy_r_r22 = (PyObject *)CPyType_rt_subtype___RTSubtypeVisitor_template;
    cpy_r_r23 = CPyType_FromTemplate(cpy_r_r22, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
        goto CPyL14;
    }
    cpy_r_r24 = CPyDef_rt_subtype___RTSubtypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", -1, CPyStatic_rt_subtype___globals);
        goto CPyL15;
    }
    cpy_r_r25 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r26 = CPyStatics[2412]; /* 'right' */
    cpy_r_r27 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r28 = PyTuple_Pack(2, cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
        goto CPyL15;
    }
    cpy_r_r29 = PyObject_SetAttr(cpy_r_r23, cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
        goto CPyL15;
    }
    CPyType_rt_subtype___RTSubtypeVisitor = (PyTypeObject *)cpy_r_r23;
    CPy_INCREF(CPyType_rt_subtype___RTSubtypeVisitor);
    cpy_r_r31 = CPyStatic_rt_subtype___globals;
    cpy_r_r32 = CPyStatics[8996]; /* 'RTSubtypeVisitor' */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r31, cpy_r_r32, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/rt_subtype.py", "<module>", 40, CPyStatic_rt_subtype___globals);
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
