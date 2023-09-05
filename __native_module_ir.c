#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
module_ir___ModuleIR_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *module_ir___ModuleIR_setup(PyTypeObject *type);
PyObject *CPyDef_module_ir___ModuleIR(PyObject *cpy_r_fullname, PyObject *cpy_r_imports, PyObject *cpy_r_functions, PyObject *cpy_r_classes, PyObject *cpy_r_final_names);

static PyObject *
module_ir___ModuleIR_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_module_ir___ModuleIR) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = module_ir___ModuleIR_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_module_ir___ModuleIR_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
module_ir___ModuleIR_traverse(mypyc___ir___module_ir___ModuleIRObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_imports);
    Py_VISIT(self->_functions);
    Py_VISIT(self->_classes);
    Py_VISIT(self->_final_names);
    return 0;
}

static int
module_ir___ModuleIR_clear(mypyc___ir___module_ir___ModuleIRObject *self)
{
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_imports);
    Py_CLEAR(self->_functions);
    Py_CLEAR(self->_classes);
    Py_CLEAR(self->_final_names);
    return 0;
}

static void
module_ir___ModuleIR_dealloc(mypyc___ir___module_ir___ModuleIRObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, module_ir___ModuleIR_dealloc)
    module_ir___ModuleIR_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem module_ir___ModuleIR_vtable[3];
static bool
CPyDef_module_ir___ModuleIR_trait_vtable_setup(void)
{
    CPyVTableItem module_ir___ModuleIR_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_module_ir___ModuleIR_____init__,
        (CPyVTableItem)CPyDef_module_ir___ModuleIR___serialize,
        (CPyVTableItem)CPyDef_module_ir___ModuleIR___deserialize,
    };
    memcpy(module_ir___ModuleIR_vtable, module_ir___ModuleIR_vtable_scratch, sizeof(module_ir___ModuleIR_vtable));
    return 1;
}

static PyObject *
module_ir___ModuleIR_get_fullname(mypyc___ir___module_ir___ModuleIRObject *self, void *closure);
static int
module_ir___ModuleIR_set_fullname(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure);
static PyObject *
module_ir___ModuleIR_get_imports(mypyc___ir___module_ir___ModuleIRObject *self, void *closure);
static int
module_ir___ModuleIR_set_imports(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure);
static PyObject *
module_ir___ModuleIR_get_functions(mypyc___ir___module_ir___ModuleIRObject *self, void *closure);
static int
module_ir___ModuleIR_set_functions(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure);
static PyObject *
module_ir___ModuleIR_get_classes(mypyc___ir___module_ir___ModuleIRObject *self, void *closure);
static int
module_ir___ModuleIR_set_classes(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure);
static PyObject *
module_ir___ModuleIR_get_final_names(mypyc___ir___module_ir___ModuleIRObject *self, void *closure);
static int
module_ir___ModuleIR_set_final_names(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure);

static PyGetSetDef module_ir___ModuleIR_getseters[] = {
    {"fullname",
     (getter)module_ir___ModuleIR_get_fullname, (setter)module_ir___ModuleIR_set_fullname,
     NULL, NULL},
    {"imports",
     (getter)module_ir___ModuleIR_get_imports, (setter)module_ir___ModuleIR_set_imports,
     NULL, NULL},
    {"functions",
     (getter)module_ir___ModuleIR_get_functions, (setter)module_ir___ModuleIR_set_functions,
     NULL, NULL},
    {"classes",
     (getter)module_ir___ModuleIR_get_classes, (setter)module_ir___ModuleIR_set_classes,
     NULL, NULL},
    {"final_names",
     (getter)module_ir___ModuleIR_get_final_names, (setter)module_ir___ModuleIR_set_final_names,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef module_ir___ModuleIR_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_module_ir___ModuleIR_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_module_ir___ModuleIR___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_module_ir___ModuleIR___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_module_ir___ModuleIR_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ModuleIR",
    .tp_new = module_ir___ModuleIR_new,
    .tp_dealloc = (destructor)module_ir___ModuleIR_dealloc,
    .tp_traverse = (traverseproc)module_ir___ModuleIR_traverse,
    .tp_clear = (inquiry)module_ir___ModuleIR_clear,
    .tp_getset = module_ir___ModuleIR_getseters,
    .tp_methods = module_ir___ModuleIR_methods,
    .tp_init = module_ir___ModuleIR_init,
    .tp_basicsize = sizeof(mypyc___ir___module_ir___ModuleIRObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_module_ir___ModuleIR_template = &CPyType_module_ir___ModuleIR_template_;

static PyObject *
module_ir___ModuleIR_setup(PyTypeObject *type)
{
    mypyc___ir___module_ir___ModuleIRObject *self;
    self = (mypyc___ir___module_ir___ModuleIRObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = module_ir___ModuleIR_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_module_ir___ModuleIR(PyObject *cpy_r_fullname, PyObject *cpy_r_imports, PyObject *cpy_r_functions, PyObject *cpy_r_classes, PyObject *cpy_r_final_names)
{
    PyObject *self = module_ir___ModuleIR_setup(CPyType_module_ir___ModuleIR);
    if (self == NULL)
        return NULL;
    char res = CPyDef_module_ir___ModuleIR_____init__(self, cpy_r_fullname, cpy_r_imports, cpy_r_functions, cpy_r_classes, cpy_r_final_names);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
module_ir___ModuleIR_get_fullname(mypyc___ir___module_ir___ModuleIRObject *self, void *closure)
{
    if (unlikely(self->_fullname == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fullname' of 'ModuleIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fullname);
    PyObject *retval = self->_fullname;
    return retval;
}

static int
module_ir___ModuleIR_set_fullname(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleIR' object attribute 'fullname' cannot be deleted");
        return -1;
    }
    if (self->_fullname != NULL) {
        CPy_DECREF(self->_fullname);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fullname = tmp;
    return 0;
}

static PyObject *
module_ir___ModuleIR_get_imports(mypyc___ir___module_ir___ModuleIRObject *self, void *closure)
{
    if (unlikely(self->_imports == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'imports' of 'ModuleIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_imports);
    PyObject *retval = self->_imports;
    return retval;
}

static int
module_ir___ModuleIR_set_imports(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleIR' object attribute 'imports' cannot be deleted");
        return -1;
    }
    if (self->_imports != NULL) {
        CPy_DECREF(self->_imports);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_imports = tmp;
    return 0;
}

static PyObject *
module_ir___ModuleIR_get_functions(mypyc___ir___module_ir___ModuleIRObject *self, void *closure)
{
    if (unlikely(self->_functions == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'functions' of 'ModuleIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_functions);
    PyObject *retval = self->_functions;
    return retval;
}

static int
module_ir___ModuleIR_set_functions(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleIR' object attribute 'functions' cannot be deleted");
        return -1;
    }
    if (self->_functions != NULL) {
        CPy_DECREF(self->_functions);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_functions = tmp;
    return 0;
}

static PyObject *
module_ir___ModuleIR_get_classes(mypyc___ir___module_ir___ModuleIRObject *self, void *closure)
{
    if (unlikely(self->_classes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'classes' of 'ModuleIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_classes);
    PyObject *retval = self->_classes;
    return retval;
}

static int
module_ir___ModuleIR_set_classes(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleIR' object attribute 'classes' cannot be deleted");
        return -1;
    }
    if (self->_classes != NULL) {
        CPy_DECREF(self->_classes);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_classes = tmp;
    return 0;
}

static PyObject *
module_ir___ModuleIR_get_final_names(mypyc___ir___module_ir___ModuleIRObject *self, void *closure)
{
    if (unlikely(self->_final_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'final_names' of 'ModuleIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_final_names);
    PyObject *retval = self->_final_names;
    return retval;
}

static int
module_ir___ModuleIR_set_final_names(mypyc___ir___module_ir___ModuleIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleIR' object attribute 'final_names' cannot be deleted");
        return -1;
    }
    if (self->_final_names != NULL) {
        CPy_DECREF(self->_final_names);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_final_names = tmp;
    return 0;
}
static PyMethodDef module_irmodule_methods[] = {
    {"deserialize_modules", (PyCFunction)CPyPy_module_ir___deserialize_modules, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module_irmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.ir.module_ir",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_irmodule_methods
};

PyObject *CPyInit_mypyc___ir___module_ir(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___ir___module_ir_internal) {
        Py_INCREF(CPyModule_mypyc___ir___module_ir_internal);
        return CPyModule_mypyc___ir___module_ir_internal;
    }
    CPyModule_mypyc___ir___module_ir_internal = PyModule_Create(&module_irmodule);
    if (unlikely(CPyModule_mypyc___ir___module_ir_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___ir___module_ir_internal, "__name__");
    CPyStatic_module_ir___globals = PyModule_GetDict(CPyModule_mypyc___ir___module_ir_internal);
    if (unlikely(CPyStatic_module_ir___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_module_ir_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___ir___module_ir_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___ir___module_ir_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_module_ir___ModuleIR);
    return NULL;
}

char CPyDef_module_ir___ModuleIR_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_imports, PyObject *cpy_r_functions, PyObject *cpy_r_classes, PyObject *cpy_r_final_names) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    CPy_INCREF(cpy_r_fullname);
    ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_fullname = cpy_r_fullname;
    cpy_r_r0 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r1[1] = {cpy_r_imports};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "__init__", 26, CPyStatic_module_ir___globals);
        goto CPyL3;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "__init__", 26, CPyStatic_module_ir___globals, "list", cpy_r_r3);
        goto CPyL3;
    }
    ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_imports = cpy_r_r4;
    CPy_INCREF(cpy_r_functions);
    ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_functions = cpy_r_functions;
    CPy_INCREF(cpy_r_classes);
    ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_classes = cpy_r_classes;
    CPy_INCREF(cpy_r_final_names);
    ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_final_names = cpy_r_final_names;
    return 1;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_module_ir___ModuleIR_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", "imports", "functions", "classes", "final_names", 0};
    PyObject *obj_fullname;
    PyObject *obj_imports;
    PyObject *obj_functions;
    PyObject *obj_classes;
    PyObject *obj_final_names;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOO", "__init__", kwlist, &obj_fullname, &obj_imports, &obj_functions, &obj_classes, &obj_final_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_module_ir___ModuleIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.module_ir.ModuleIR", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_imports;
    if (likely(PyList_Check(obj_imports)))
        arg_imports = obj_imports;
    else {
        CPy_TypeError("list", obj_imports); 
        goto fail;
    }
    PyObject *arg_functions;
    if (likely(PyList_Check(obj_functions)))
        arg_functions = obj_functions;
    else {
        CPy_TypeError("list", obj_functions); 
        goto fail;
    }
    PyObject *arg_classes;
    if (likely(PyList_Check(obj_classes)))
        arg_classes = obj_classes;
    else {
        CPy_TypeError("list", obj_classes); 
        goto fail;
    }
    PyObject *arg_final_names;
    if (likely(PyList_Check(obj_final_names)))
        arg_final_names = obj_final_names;
    else {
        CPy_TypeError("list", obj_final_names); 
        goto fail;
    }
    char retval = CPyDef_module_ir___ModuleIR_____init__(arg_self, arg_fullname, arg_imports, arg_functions, arg_classes, arg_final_names);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/module_ir.py", "__init__", 17, CPyStatic_module_ir___globals);
    return NULL;
}

PyObject *CPyDef_module_ir___ModuleIR___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r48;
    tuple_T2OO cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = CPyStatics[3939]; /* 'fullname' */
    cpy_r_r1 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[2525]; /* 'imports' */
    cpy_r_r3 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_imports;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r5 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_functions;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = PyList_New(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 35, CPyStatic_module_ir___globals);
        goto CPyL24;
    }
    cpy_r_r9 = 0;
CPyL2: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL25;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_func_ir___FuncIR))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "serialize", 35, CPyStatic_module_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r14);
        goto CPyL26;
    }
    cpy_r_f = cpy_r_r15;
    cpy_r_r16 = CPyDef_func_ir___FuncIR___serialize(cpy_r_f);
    CPy_DECREF(cpy_r_f);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 35, CPyStatic_module_ir___globals);
        goto CPyL26;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r8, cpy_r_r9, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 35, CPyStatic_module_ir___globals);
        goto CPyL26;
    }
    cpy_r_r18 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r18;
    goto CPyL2;
CPyL7: ;
    cpy_r_r19 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r20 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = PyList_New(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 36, CPyStatic_module_ir___globals);
        goto CPyL27;
    }
    cpy_r_r24 = 0;
CPyL9: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL28;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r24);
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_class_ir___ClassIR))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "serialize", 36, CPyStatic_module_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r29);
        goto CPyL29;
    }
    cpy_r_c = cpy_r_r30;
    cpy_r_r31 = CPyDef_class_ir___ClassIR___serialize(cpy_r_c);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 36, CPyStatic_module_ir___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPyList_SetItemUnsafe(cpy_r_r23, cpy_r_r24, cpy_r_r31);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 36, CPyStatic_module_ir___globals);
        goto CPyL29;
    }
    cpy_r_r33 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r33;
    goto CPyL9;
CPyL14: ;
    cpy_r_r34 = CPyStatics[7802]; /* 'final_names' */
    cpy_r_r35 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_self)->_final_names;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = PyList_New(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 37, CPyStatic_module_ir___globals);
        goto CPyL30;
    }
    cpy_r_r39 = 0;
CPyL16: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL31;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r39);
    PyObject *__tmp9842;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp9842 = NULL;
        goto __LL9843;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r44, 0))))
        __tmp9842 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        __tmp9842 = NULL;
    }
    if (__tmp9842 == NULL) goto __LL9843;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r44, 1), CPyType_rtypes___RType)))
        __tmp9842 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp9842 = NULL;
    }
    if (__tmp9842 == NULL) goto __LL9843;
    __tmp9842 = cpy_r_r44;
__LL9843: ;
    if (unlikely(__tmp9842 == NULL)) {
        CPy_TypeError("tuple[str, mypyc.ir.rtypes.RType]", cpy_r_r44); cpy_r_r45 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9844 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPy_INCREF(__tmp9844);
        PyObject *__tmp9845;
        if (likely(PyUnicode_Check(__tmp9844)))
            __tmp9845 = __tmp9844;
        else {
            CPy_TypeError("str", __tmp9844); 
            __tmp9845 = NULL;
        }
        cpy_r_r45.f0 = __tmp9845;
        PyObject *__tmp9846 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp9846);
        PyObject *__tmp9847;
        if (likely(PyObject_TypeCheck(__tmp9846, CPyType_rtypes___RType)))
            __tmp9847 = __tmp9846;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp9846); 
            __tmp9847 = NULL;
        }
        cpy_r_r45.f1 = __tmp9847;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 37, CPyStatic_module_ir___globals);
        goto CPyL32;
    }
    cpy_r_r46 = cpy_r_r45.f0;
    CPy_INCREF(cpy_r_r46);
    cpy_r_k = cpy_r_r46;
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r_t = cpy_r_r47;
    cpy_r_r48 = CPY_GET_METHOD(cpy_r_t, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_t); /* serialize */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 37, CPyStatic_module_ir___globals);
        goto CPyL33;
    }
    cpy_r_r49.f0 = cpy_r_k;
    cpy_r_r49.f1 = cpy_r_r48;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9848 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp9848);
    PyObject *__tmp9849 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp9849);
    cpy_r_r51 = CPyList_SetItemUnsafe(cpy_r_r38, cpy_r_r39, cpy_r_r50);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 37, CPyStatic_module_ir___globals);
        goto CPyL32;
    }
    cpy_r_r52 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r52;
    goto CPyL16;
CPyL21: ;
    cpy_r_r53 = CPyDict_Build(5, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r8, cpy_r_r19, cpy_r_r23, cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 32, CPyStatic_module_ir___globals);
        goto CPyL23;
    }
    return cpy_r_r53;
CPyL23: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL24: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL7;
CPyL26: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL14;
CPyL29: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r35);
    goto CPyL23;
CPyL31: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL21;
CPyL32: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_k);
    goto CPyL23;
}

PyObject *CPyPy_module_ir___ModuleIR___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_module_ir___ModuleIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.module_ir.ModuleIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_module_ir___ModuleIR___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/module_ir.py", "serialize", 31, CPyStatic_module_ir___globals);
    return NULL;
}

PyObject *CPyDef_module_ir___ModuleIR___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T2OO cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    cpy_r_r0 = CPyStatics[3939]; /* 'fullname' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 43, CPyStatic_module_ir___globals);
        goto CPyL44;
    }
    cpy_r_r2 = CPyStatics[2525]; /* 'imports' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_data, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 44, CPyStatic_module_ir___globals);
        goto CPyL45;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL46;
    }
    cpy_r_r5 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_data, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL47;
    }
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL47;
    }
CPyL5: ;
    cpy_r_r8 = PyIter_Next(cpy_r_r7);
    if (cpy_r_r8 == NULL) goto CPyL48;
    cpy_r_f = cpy_r_r8;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL49;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals, "dict", cpy_r_r9);
        goto CPyL49;
    }
    if (likely(PyDict_Check(cpy_r_f)))
        cpy_r_r11 = cpy_r_f;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals, "dict", cpy_r_f);
        goto CPyL50;
    }
    cpy_r_r12 = CPyDef_func_ir___FuncDecl___get_id_from_json(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL50;
    }
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___FuncIR))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r13);
        goto CPyL51;
    }
    cpy_r_r15 = PyList_Append(cpy_r_r4, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL51;
    } else
        goto CPyL5;
CPyL13: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 45, CPyStatic_module_ir___globals);
        goto CPyL47;
    }
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL47;
    }
    cpy_r_r19 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_data, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL52;
    }
    cpy_r_r21 = PyObject_GetIter(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL52;
    }
CPyL17: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    if (cpy_r_r22 == NULL) goto CPyL53;
    cpy_r_c = cpy_r_r22;
    cpy_r_r23 = (PyObject *)CPyType_class_ir___ClassIR;
    if (likely(PyDict_Check(cpy_r_c)))
        cpy_r_r24 = cpy_r_c;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals, "dict", cpy_r_c);
        goto CPyL54;
    }
    cpy_r_r25 = CPyDef_class_ir___ClassIR___deserialize(cpy_r_r23, cpy_r_r24, cpy_r_ctx);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL54;
    }
    cpy_r_r26 = PyList_Append(cpy_r_r18, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL54;
    } else
        goto CPyL17;
CPyL21: ;
    cpy_r_r28 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 46, CPyStatic_module_ir___globals);
        goto CPyL52;
    }
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL52;
    }
    cpy_r_r30 = CPyStatics[7802]; /* 'final_names' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_data, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL55;
    }
    cpy_r_r32 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL55;
    }
CPyL25: ;
    cpy_r_r33 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r33 == NULL) goto CPyL56;
    cpy_r_r34 = PyObject_GetIter(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL57;
    }
    cpy_r_r35 = PyIter_Next(cpy_r_r34);
    if (cpy_r_r35 == NULL) {
        goto CPyL58;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_k = cpy_r_r35;
    cpy_r_r37 = PyIter_Next(cpy_r_r34);
    if (cpy_r_r37 == NULL) {
        goto CPyL59;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_t = cpy_r_r37;
    cpy_r_r39 = PyIter_Next(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (cpy_r_r39 == NULL) {
        goto CPyL36;
    } else
        goto CPyL60;
CPyL34: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL36: ;
    if (PyDict_Check(cpy_r_t))
        cpy_r_r41 = cpy_r_t;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL9850;
    if (PyUnicode_Check(cpy_r_t))
        cpy_r_r41 = cpy_r_t;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL9850;
    CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals, "union[dict, str]", cpy_r_t);
    goto CPyL61;
__LL9850: ;
    cpy_r_r42 = CPyDef_rtypes___deserialize_type(cpy_r_r41, cpy_r_ctx);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL61;
    }
    cpy_r_r43.f0 = cpy_r_k;
    cpy_r_r43.f1 = cpy_r_r42;
    CPy_INCREF(cpy_r_r43.f0);
    CPy_INCREF(cpy_r_r43.f1);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = PyTuple_New(2);
    if (unlikely(cpy_r_r44 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9851 = cpy_r_r43.f0;
    PyTuple_SET_ITEM(cpy_r_r44, 0, __tmp9851);
    PyObject *__tmp9852 = cpy_r_r43.f1;
    PyTuple_SET_ITEM(cpy_r_r44, 1, __tmp9852);
    cpy_r_r45 = PyList_Append(cpy_r_r29, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL57;
    } else
        goto CPyL25;
CPyL39: ;
    cpy_r_r47 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 47, CPyStatic_module_ir___globals);
        goto CPyL55;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r48 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 42, CPyStatic_module_ir___globals, "str", cpy_r_r1);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r49 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize", 42, CPyStatic_module_ir___globals, "list", cpy_r_r3);
        goto CPyL63;
    }
    cpy_r_r50 = CPyDef_module_ir___ModuleIR(cpy_r_r48, cpy_r_r49, cpy_r_r4, cpy_r_r18, cpy_r_r29);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 42, CPyStatic_module_ir___globals);
        goto CPyL44;
    }
    return cpy_r_r50;
CPyL44: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL45: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL44;
CPyL48: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL49: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_f);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    goto CPyL44;
CPyL53: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL21;
CPyL54: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r29);
    goto CPyL44;
CPyL56: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL39;
CPyL57: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL44;
CPyL58: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    goto CPyL28;
CPyL59: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_k);
    goto CPyL31;
CPyL60: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r39);
    goto CPyL34;
CPyL61: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_k);
    goto CPyL44;
CPyL62: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r29);
    goto CPyL44;
CPyL63: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r48);
    goto CPyL44;
}

PyObject *CPyPy_module_ir___ModuleIR___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_module_ir___ModuleIR___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize", 41, CPyStatic_module_ir___globals);
    return NULL;
}

PyObject *CPyDef_module_ir___deserialize_modules(PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3CIO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T3CIO cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    tuple_T4CIOO cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_data);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetValuesIter(cpy_r_data);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 66, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextValue(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL66;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4.f2);
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 66, CPyStatic_module_ir___globals, "dict", cpy_r_r7);
        goto CPyL67;
    }
    cpy_r_mod = cpy_r_r8;
    cpy_r_r9 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_mod, cpy_r_r9);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 68, CPyStatic_module_ir___globals);
        goto CPyL67;
    }
    cpy_r_r11 = PyObject_GetIter(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 68, CPyStatic_module_ir___globals);
        goto CPyL67;
    }
CPyL5: ;
    cpy_r_r12 = PyIter_Next(cpy_r_r11);
    if (cpy_r_r12 == NULL) goto CPyL68;
    cpy_r_cls = cpy_r_r12;
    cpy_r_r13 = CPyStatics[2329]; /* 'name' */
    cpy_r_r14 = PyObject_GetItem(cpy_r_cls, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 69, CPyStatic_module_ir___globals);
        goto CPyL69;
    }
    cpy_r_r15 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r16 = PyObject_GetItem(cpy_r_cls, cpy_r_r15);
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 69, CPyStatic_module_ir___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r17 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 69, CPyStatic_module_ir___globals, "str", cpy_r_r14);
        goto CPyL71;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r18 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 69, CPyStatic_module_ir___globals, "str", cpy_r_r16);
        goto CPyL72;
    }
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_class_ir___ClassIR(cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 69, CPyStatic_module_ir___globals);
        goto CPyL73;
    }
    cpy_r_ir = cpy_r_r23;
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_ir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL74;
    }
CPyL12: ;
    cpy_r_r25 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL75;
    }
    if (likely(PyDict_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals, "dict", cpy_r_r25);
        goto CPyL75;
    }
    cpy_r_r27 = PyDict_Contains(cpy_r_r26, cpy_r_r24);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL74;
    }
    cpy_r_r29 = cpy_r_r27;
    cpy_r_r30 = cpy_r_r29 ^ 1;
    if (cpy_r_r30) {
        goto CPyL22;
    } else
        goto CPyL76;
CPyL16: ;
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_ir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
CPyL17: ;
    cpy_r_r32 = CPyStatics[5153]; /* 'Class ' */
    cpy_r_r33 = CPyStatics[7803]; /* ' already in map' */
    cpy_r_r34 = CPyStr_Build(3, cpy_r_r32, cpy_r_r31, cpy_r_r33);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_r34};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r34);
    CPy_Raise(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 70, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r41 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 71, CPyStatic_module_ir___globals);
        goto CPyL74;
    }
    if (likely(PyDict_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 71, CPyStatic_module_ir___globals, "dict", cpy_r_r41);
        goto CPyL74;
    }
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_ir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 71, CPyStatic_module_ir___globals);
        goto CPyL78;
    }
CPyL25: ;
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_ir);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_ir);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 71, CPyStatic_module_ir___globals);
        goto CPyL73;
    } else
        goto CPyL5;
CPyL26: ;
    cpy_r_r46 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 68, CPyStatic_module_ir___globals);
        goto CPyL67;
    }
    cpy_r_r47 = CPyDict_CheckSize(cpy_r_data, cpy_r_r2);
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 66, CPyStatic_module_ir___globals);
        goto CPyL67;
    } else
        goto CPyL1;
CPyL28: ;
    cpy_r_r48 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 66, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    cpy_r_r49 = 0;
    cpy_r_r50 = PyDict_Size(cpy_r_data);
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = CPyDict_GetValuesIter(cpy_r_data);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 73, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
CPyL30: ;
    cpy_r_r53 = CPyDict_NextValue(cpy_r_r52, cpy_r_r49);
    cpy_r_r54 = cpy_r_r53.f1;
    cpy_r_r49 = cpy_r_r54;
    cpy_r_r55 = cpy_r_r53.f0;
    if (!cpy_r_r55) goto CPyL79;
    cpy_r_r56 = cpy_r_r53.f2;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r53.f2);
    if (likely(PyDict_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 73, CPyStatic_module_ir___globals, "dict", cpy_r_r56);
        goto CPyL80;
    }
    cpy_r_mod = cpy_r_r57;
    cpy_r_r58 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_mod, cpy_r_r58);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 76, CPyStatic_module_ir___globals);
        goto CPyL80;
    }
    cpy_r_r60 = PyObject_GetIter(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 76, CPyStatic_module_ir___globals);
        goto CPyL80;
    }
CPyL34: ;
    cpy_r_r61 = PyIter_Next(cpy_r_r60);
    if (cpy_r_r61 == NULL) goto CPyL81;
    cpy_r_method = cpy_r_r61;
    cpy_r_r62 = (PyObject *)CPyType_func_ir___FuncIR;
    if (likely(PyDict_Check(cpy_r_method)))
        cpy_r_r63 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 77, CPyStatic_module_ir___globals, "dict", cpy_r_method);
        goto CPyL82;
    }
    cpy_r_r64 = CPyDef_func_ir___FuncIR___deserialize(cpy_r_r62, cpy_r_r63, cpy_r_ctx);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 77, CPyStatic_module_ir___globals);
        goto CPyL82;
    }
    cpy_r_func = cpy_r_r64;
    cpy_r_r65 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func)->_decl;
    cpy_r_r66 = CPY_GET_ATTR(cpy_r_r65, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL83;
    }
CPyL38: ;
    cpy_r_r67 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL84;
    }
    if (likely(PyDict_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals, "dict", cpy_r_r67);
        goto CPyL84;
    }
    cpy_r_r69 = PyDict_Contains(cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL83;
    }
    cpy_r_r71 = cpy_r_r69;
    cpy_r_r72 = cpy_r_r71 ^ 1;
    if (cpy_r_r72) {
        goto CPyL48;
    } else
        goto CPyL85;
CPyL42: ;
    cpy_r_r73 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func)->_decl;
    cpy_r_r74 = CPY_GET_ATTR(cpy_r_r73, CPyType_func_ir___FuncDecl, 6, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 79, CPyStatic_module_ir___globals);
        goto CPyL86;
    }
CPyL43: ;
    CPy_DECREF(cpy_r_func);
    cpy_r_r75 = CPyStatics[4874]; /* 'Method ' */
    cpy_r_r76 = CPyStatics[7803]; /* ' already in map' */
    cpy_r_r77 = CPyStr_Build(3, cpy_r_r75, cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 79, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    cpy_r_r78 = CPyModule_builtins;
    cpy_r_r79 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_r77};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r77);
    CPy_Raise(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 78, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r84 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 81, CPyStatic_module_ir___globals);
        goto CPyL83;
    }
    if (likely(PyDict_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 81, CPyStatic_module_ir___globals, "dict", cpy_r_r84);
        goto CPyL83;
    }
    cpy_r_r86 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func)->_decl;
    cpy_r_r87 = CPY_GET_ATTR(cpy_r_r86, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 81, CPyStatic_module_ir___globals);
        goto CPyL88;
    }
CPyL51: ;
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r85, cpy_r_r87, cpy_r_func);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_func);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 81, CPyStatic_module_ir___globals);
        goto CPyL82;
    } else
        goto CPyL34;
CPyL52: ;
    cpy_r_r90 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 76, CPyStatic_module_ir___globals);
        goto CPyL80;
    }
    cpy_r_r91 = CPyDict_CheckSize(cpy_r_data, cpy_r_r51);
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 73, CPyStatic_module_ir___globals);
        goto CPyL80;
    } else
        goto CPyL30;
CPyL54: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 73, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    cpy_r_r93 = PyDict_New();
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL65;
    }
    cpy_r_r94 = 0;
    cpy_r_r95 = PyDict_Size(cpy_r_data);
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = CPyDict_GetItemsIter(cpy_r_data);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL89;
    }
CPyL57: ;
    cpy_r_r98 = CPyDict_NextItem(cpy_r_r97, cpy_r_r94);
    cpy_r_r99 = cpy_r_r98.f1;
    cpy_r_r94 = cpy_r_r99;
    cpy_r_r100 = cpy_r_r98.f0;
    if (!cpy_r_r100) goto CPyL90;
    cpy_r_r101 = cpy_r_r98.f2;
    CPy_INCREF(cpy_r_r101);
    cpy_r_r102 = cpy_r_r98.f3;
    CPy_INCREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r98.f2);
    CPy_DECREF(cpy_r_r98.f3);
    if (likely(PyUnicode_Check(cpy_r_r101)))
        cpy_r_r103 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals, "str", cpy_r_r101);
        goto CPyL91;
    }
    if (likely(PyDict_Check(cpy_r_r102)))
        cpy_r_r104 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals, "dict", cpy_r_r102);
        goto CPyL92;
    }
    cpy_r_k = cpy_r_r103;
    cpy_r_v = cpy_r_r104;
    cpy_r_r105 = (PyObject *)CPyType_module_ir___ModuleIR;
    cpy_r_r106 = CPyDef_module_ir___ModuleIR___deserialize(cpy_r_r105, cpy_r_v, cpy_r_ctx);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL93;
    }
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r93, cpy_r_k, cpy_r_r106);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL94;
    }
    cpy_r_r109 = CPyDict_CheckSize(cpy_r_data, cpy_r_r96);
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL94;
    } else
        goto CPyL57;
CPyL63: ;
    cpy_r_r110 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 83, CPyStatic_module_ir___globals);
        goto CPyL89;
    }
    return cpy_r_r93;
CPyL65: ;
    cpy_r_r111 = NULL;
    return cpy_r_r111;
CPyL66: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    goto CPyL28;
CPyL67: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL26;
CPyL69: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL65;
CPyL71: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    goto CPyL65;
CPyL73: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    goto CPyL65;
CPyL74: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_ir);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r24);
    goto CPyL65;
CPyL76: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r11);
    goto CPyL16;
CPyL77: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL65;
CPyL78: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r42);
    goto CPyL65;
CPyL79: ;
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53.f2);
    goto CPyL54;
CPyL80: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL65;
CPyL81: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL52;
CPyL82: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r60);
    goto CPyL65;
CPyL83: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_func);
    goto CPyL65;
CPyL84: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r66);
    goto CPyL65;
CPyL85: ;
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r60);
    goto CPyL42;
CPyL86: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL65;
CPyL87: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL65;
CPyL88: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r85);
    goto CPyL65;
CPyL89: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL65;
CPyL90: ;
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r98.f2);
    CPy_DECREF(cpy_r_r98.f3);
    goto CPyL63;
CPyL91: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r102);
    goto CPyL65;
CPyL92: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r103);
    goto CPyL65;
CPyL93: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_k);
    goto CPyL65;
CPyL94: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r97);
    goto CPyL65;
}

PyObject *CPyPy_module_ir___deserialize_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize_modules", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_module_ir___deserialize_modules(arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/module_ir.py", "deserialize_modules", 51, CPyStatic_module_ir___globals);
    return NULL;
}

char CPyDef_module_ir_____top_level__(void) {
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
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T2OO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", -1, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_module_ir___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 3, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10015]; /* ('Dict',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_module_ir___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 5, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10016]; /* ('JsonDict',) */
    cpy_r_r14 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r15 = CPyStatic_module_ir___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 7, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___common = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r18 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r19 = CPyStatic_module_ir___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 8, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10017]; /* ('FuncDecl', 'FuncIR') */
    cpy_r_r22 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r23 = CPyStatic_module_ir___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 9, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10018]; /* ('DeserMaps',) */
    cpy_r_r26 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r27 = CPyStatic_module_ir___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 10, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10019]; /* ('RType', 'deserialize_type') */
    cpy_r_r30 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r31 = CPyStatic_module_ir___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 11, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyStatics[7557]; /* 'mypyc.ir.module_ir' */
    cpy_r_r35 = (PyObject *)CPyType_module_ir___ModuleIR_template;
    cpy_r_r36 = CPyType_FromTemplate(cpy_r_r35, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 14, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    cpy_r_r37 = CPyDef_module_ir___ModuleIR_trait_vtable_setup();
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", -1, CPyStatic_module_ir___globals);
        goto CPyL20;
    }
    cpy_r_r38 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r39 = CPyStatics[3939]; /* 'fullname' */
    cpy_r_r40 = CPyStatics[2525]; /* 'imports' */
    cpy_r_r41 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r42 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r43 = CPyStatics[7802]; /* 'final_names' */
    cpy_r_r44 = PyTuple_Pack(5, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 14, CPyStatic_module_ir___globals);
        goto CPyL20;
    }
    cpy_r_r45 = PyObject_SetAttr(cpy_r_r36, cpy_r_r38, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 14, CPyStatic_module_ir___globals);
        goto CPyL20;
    }
    CPyType_module_ir___ModuleIR = (PyTypeObject *)cpy_r_r36;
    CPy_INCREF(CPyType_module_ir___ModuleIR);
    cpy_r_r47 = CPyStatic_module_ir___globals;
    cpy_r_r48 = CPyStatics[7554]; /* 'ModuleIR' */
    cpy_r_r49 = CPyDict_SetItem(cpy_r_r47, cpy_r_r48, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 14, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    cpy_r_r51 = CPyStatic_module_ir___globals;
    cpy_r_r52 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 88, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    cpy_r_r54 = (PyObject *)&PyUnicode_Type;
    cpy_r_r55 = (PyObject *)CPyType_module_ir___ModuleIR;
    cpy_r_r56.f0 = cpy_r_r54;
    cpy_r_r56.f1 = cpy_r_r55;
    CPy_INCREF(cpy_r_r56.f0);
    CPy_INCREF(cpy_r_r56.f1);
    cpy_r_r57 = PyTuple_New(2);
    if (unlikely(cpy_r_r57 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9853 = cpy_r_r56.f0;
    PyTuple_SET_ITEM(cpy_r_r57, 0, __tmp9853);
    PyObject *__tmp9854 = cpy_r_r56.f1;
    PyTuple_SET_ITEM(cpy_r_r57, 1, __tmp9854);
    cpy_r_r58 = PyObject_GetItem(cpy_r_r53, cpy_r_r57);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 88, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    cpy_r_r59 = CPyStatic_module_ir___globals;
    cpy_r_r60 = CPyStatics[7555]; /* 'ModuleIRs' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/ir/module_ir.py", "<module>", 88, CPyStatic_module_ir___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
CPyL20: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL19;
}
