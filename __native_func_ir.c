#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
func_ir___RuntimeArg_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *func_ir___RuntimeArg_setup(PyTypeObject *type);
PyObject *CPyDef_func_ir___RuntimeArg(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_kind, char cpy_r_pos_only);

static PyObject *
func_ir___RuntimeArg_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_func_ir___RuntimeArg) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = func_ir___RuntimeArg_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_func_ir___RuntimeArg_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
func_ir___RuntimeArg_traverse(mypyc___ir___func_ir___RuntimeArgObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_type);
    Py_VISIT(self->_kind);
    return 0;
}

static int
func_ir___RuntimeArg_clear(mypyc___ir___func_ir___RuntimeArgObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_kind);
    return 0;
}

static void
func_ir___RuntimeArg_dealloc(mypyc___ir___func_ir___RuntimeArgObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, func_ir___RuntimeArg_dealloc)
    func_ir___RuntimeArg_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem func_ir___RuntimeArg_vtable[5];
static bool
CPyDef_func_ir___RuntimeArg_trait_vtable_setup(void)
{
    CPyVTableItem func_ir___RuntimeArg_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_func_ir___RuntimeArg_____init__,
        (CPyVTableItem)CPyDef_func_ir___RuntimeArg___optional,
        (CPyVTableItem)CPyDef_func_ir___RuntimeArg_____repr__,
        (CPyVTableItem)CPyDef_func_ir___RuntimeArg___serialize,
        (CPyVTableItem)CPyDef_func_ir___RuntimeArg___deserialize,
    };
    memcpy(func_ir___RuntimeArg_vtable, func_ir___RuntimeArg_vtable_scratch, sizeof(func_ir___RuntimeArg_vtable));
    return 1;
}

static PyObject *
func_ir___RuntimeArg_get_name(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure);
static int
func_ir___RuntimeArg_set_name(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___RuntimeArg_get_type(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure);
static int
func_ir___RuntimeArg_set_type(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___RuntimeArg_get_kind(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure);
static int
func_ir___RuntimeArg_set_kind(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___RuntimeArg_get_pos_only(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure);
static int
func_ir___RuntimeArg_set_pos_only(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___RuntimeArg_get_optional(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure);

static PyGetSetDef func_ir___RuntimeArg_getseters[] = {
    {"name",
     (getter)func_ir___RuntimeArg_get_name, (setter)func_ir___RuntimeArg_set_name,
     NULL, NULL},
    {"type",
     (getter)func_ir___RuntimeArg_get_type, (setter)func_ir___RuntimeArg_set_type,
     NULL, NULL},
    {"kind",
     (getter)func_ir___RuntimeArg_get_kind, (setter)func_ir___RuntimeArg_set_kind,
     NULL, NULL},
    {"pos_only",
     (getter)func_ir___RuntimeArg_get_pos_only, (setter)func_ir___RuntimeArg_set_pos_only,
     NULL, NULL},
    {"optional",
     (getter)func_ir___RuntimeArg_get_optional,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef func_ir___RuntimeArg_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_func_ir___RuntimeArg_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_func_ir___RuntimeArg_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_func_ir___RuntimeArg___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_func_ir___RuntimeArg___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_func_ir___RuntimeArg_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RuntimeArg",
    .tp_new = func_ir___RuntimeArg_new,
    .tp_dealloc = (destructor)func_ir___RuntimeArg_dealloc,
    .tp_traverse = (traverseproc)func_ir___RuntimeArg_traverse,
    .tp_clear = (inquiry)func_ir___RuntimeArg_clear,
    .tp_getset = func_ir___RuntimeArg_getseters,
    .tp_methods = func_ir___RuntimeArg_methods,
    .tp_init = func_ir___RuntimeArg_init,
    .tp_repr = CPyDef_func_ir___RuntimeArg_____repr__,
    .tp_basicsize = sizeof(mypyc___ir___func_ir___RuntimeArgObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_func_ir___RuntimeArg_template = &CPyType_func_ir___RuntimeArg_template_;

static PyObject *
func_ir___RuntimeArg_setup(PyTypeObject *type)
{
    mypyc___ir___func_ir___RuntimeArgObject *self;
    self = (mypyc___ir___func_ir___RuntimeArgObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = func_ir___RuntimeArg_vtable;
    self->_pos_only = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_func_ir___RuntimeArg(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_kind, char cpy_r_pos_only)
{
    PyObject *self = func_ir___RuntimeArg_setup(CPyType_func_ir___RuntimeArg);
    if (self == NULL)
        return NULL;
    char res = CPyDef_func_ir___RuntimeArg_____init__(self, cpy_r_name, cpy_r_typ, cpy_r_kind, cpy_r_pos_only);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
func_ir___RuntimeArg_get_name(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'RuntimeArg' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
func_ir___RuntimeArg_set_name(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RuntimeArg' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
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
    self->_name = tmp;
    return 0;
}

static PyObject *
func_ir___RuntimeArg_get_type(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure)
{
    if (unlikely(self->_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type' of 'RuntimeArg' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type);
    PyObject *retval = self->_type;
    return retval;
}

static int
func_ir___RuntimeArg_set_type(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RuntimeArg' object attribute 'type' cannot be deleted");
        return -1;
    }
    if (self->_type != NULL) {
        CPy_DECREF(self->_type);
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
    self->_type = tmp;
    return 0;
}

static PyObject *
func_ir___RuntimeArg_get_kind(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure)
{
    if (unlikely(self->_kind == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'kind' of 'RuntimeArg' undefined");
        return NULL;
    }
    CPy_INCREF(self->_kind);
    PyObject *retval = self->_kind;
    return retval;
}

static int
func_ir___RuntimeArg_set_kind(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RuntimeArg' object attribute 'kind' cannot be deleted");
        return -1;
    }
    if (self->_kind != NULL) {
        CPy_DECREF(self->_kind);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___ArgKind))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_kind = tmp;
    return 0;
}

static PyObject *
func_ir___RuntimeArg_get_pos_only(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure)
{
    PyObject *retval = self->_pos_only ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
func_ir___RuntimeArg_set_pos_only(mypyc___ir___func_ir___RuntimeArgObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RuntimeArg' object attribute 'pos_only' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_pos_only = tmp;
    return 0;
}

static PyObject *
func_ir___RuntimeArg_get_optional(mypyc___ir___func_ir___RuntimeArgObject *self, void *closure)
{
    char retval = CPyDef_func_ir___RuntimeArg___optional((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static int
func_ir___FuncSignature_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *func_ir___FuncSignature_setup(PyTypeObject *type);
PyObject *CPyDef_func_ir___FuncSignature(PyObject *cpy_r_args, PyObject *cpy_r_ret_type);

static PyObject *
func_ir___FuncSignature_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_func_ir___FuncSignature) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = func_ir___FuncSignature_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_func_ir___FuncSignature_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
func_ir___FuncSignature_traverse(mypyc___ir___func_ir___FuncSignatureObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_args);
    Py_VISIT(self->_ret_type);
    if (CPyTagged_CheckLong(self->_num_bitmap_args)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_bitmap_args));
    }
    return 0;
}

static int
func_ir___FuncSignature_clear(mypyc___ir___func_ir___FuncSignatureObject *self)
{
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_ret_type);
    if (CPyTagged_CheckLong(self->_num_bitmap_args)) {
        CPyTagged __tmp = self->_num_bitmap_args;
        self->_num_bitmap_args = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
func_ir___FuncSignature_dealloc(mypyc___ir___func_ir___FuncSignatureObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, func_ir___FuncSignature_dealloc)
    func_ir___FuncSignature_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem func_ir___FuncSignature_vtable[6];
static bool
CPyDef_func_ir___FuncSignature_trait_vtable_setup(void)
{
    CPyVTableItem func_ir___FuncSignature_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_func_ir___FuncSignature_____init__,
        (CPyVTableItem)CPyDef_func_ir___FuncSignature___real_args,
        (CPyVTableItem)CPyDef_func_ir___FuncSignature___bound_sig,
        (CPyVTableItem)CPyDef_func_ir___FuncSignature_____repr__,
        (CPyVTableItem)CPyDef_func_ir___FuncSignature___serialize,
        (CPyVTableItem)CPyDef_func_ir___FuncSignature___deserialize,
    };
    memcpy(func_ir___FuncSignature_vtable, func_ir___FuncSignature_vtable_scratch, sizeof(func_ir___FuncSignature_vtable));
    return 1;
}

static PyObject *
func_ir___FuncSignature_get_args(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure);
static int
func_ir___FuncSignature_set_args(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncSignature_get_ret_type(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure);
static int
func_ir___FuncSignature_set_ret_type(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncSignature_get_num_bitmap_args(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure);
static int
func_ir___FuncSignature_set_num_bitmap_args(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure);

static PyGetSetDef func_ir___FuncSignature_getseters[] = {
    {"args",
     (getter)func_ir___FuncSignature_get_args, (setter)func_ir___FuncSignature_set_args,
     NULL, NULL},
    {"ret_type",
     (getter)func_ir___FuncSignature_get_ret_type, (setter)func_ir___FuncSignature_set_ret_type,
     NULL, NULL},
    {"num_bitmap_args",
     (getter)func_ir___FuncSignature_get_num_bitmap_args, (setter)func_ir___FuncSignature_set_num_bitmap_args,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef func_ir___FuncSignature_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_func_ir___FuncSignature_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"real_args",
     (PyCFunction)CPyPy_func_ir___FuncSignature___real_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bound_sig",
     (PyCFunction)CPyPy_func_ir___FuncSignature___bound_sig,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_func_ir___FuncSignature_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_func_ir___FuncSignature___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_func_ir___FuncSignature___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_func_ir___FuncSignature_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FuncSignature",
    .tp_new = func_ir___FuncSignature_new,
    .tp_dealloc = (destructor)func_ir___FuncSignature_dealloc,
    .tp_traverse = (traverseproc)func_ir___FuncSignature_traverse,
    .tp_clear = (inquiry)func_ir___FuncSignature_clear,
    .tp_getset = func_ir___FuncSignature_getseters,
    .tp_methods = func_ir___FuncSignature_methods,
    .tp_init = func_ir___FuncSignature_init,
    .tp_repr = CPyDef_func_ir___FuncSignature_____repr__,
    .tp_basicsize = sizeof(mypyc___ir___func_ir___FuncSignatureObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_func_ir___FuncSignature_template = &CPyType_func_ir___FuncSignature_template_;

static PyObject *
func_ir___FuncSignature_setup(PyTypeObject *type)
{
    mypyc___ir___func_ir___FuncSignatureObject *self;
    self = (mypyc___ir___func_ir___FuncSignatureObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = func_ir___FuncSignature_vtable;
    self->_num_bitmap_args = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_func_ir___FuncSignature(PyObject *cpy_r_args, PyObject *cpy_r_ret_type)
{
    PyObject *self = func_ir___FuncSignature_setup(CPyType_func_ir___FuncSignature);
    if (self == NULL)
        return NULL;
    char res = CPyDef_func_ir___FuncSignature_____init__(self, cpy_r_args, cpy_r_ret_type);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
func_ir___FuncSignature_get_args(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure)
{
    if (unlikely(self->_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'args' of 'FuncSignature' undefined");
        return NULL;
    }
    CPy_INCREF(self->_args);
    PyObject *retval = self->_args;
    return retval;
}

static int
func_ir___FuncSignature_set_args(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncSignature' object attribute 'args' cannot be deleted");
        return -1;
    }
    if (self->_args != NULL) {
        CPy_DECREF(self->_args);
    }
    PyObject * tmp;
    if (likely(PyTuple_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("tuple", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_args = tmp;
    return 0;
}

static PyObject *
func_ir___FuncSignature_get_ret_type(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure)
{
    if (unlikely(self->_ret_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ret_type' of 'FuncSignature' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ret_type);
    PyObject *retval = self->_ret_type;
    return retval;
}

static int
func_ir___FuncSignature_set_ret_type(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncSignature' object attribute 'ret_type' cannot be deleted");
        return -1;
    }
    if (self->_ret_type != NULL) {
        CPy_DECREF(self->_ret_type);
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
    self->_ret_type = tmp;
    return 0;
}

static PyObject *
func_ir___FuncSignature_get_num_bitmap_args(mypyc___ir___func_ir___FuncSignatureObject *self, void *closure)
{
    if (unlikely(self->_num_bitmap_args == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_bitmap_args' of 'FuncSignature' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_bitmap_args);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_bitmap_args);
    return retval;
}

static int
func_ir___FuncSignature_set_num_bitmap_args(mypyc___ir___func_ir___FuncSignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncSignature' object attribute 'num_bitmap_args' cannot be deleted");
        return -1;
    }
    if (self->_num_bitmap_args != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_bitmap_args);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_bitmap_args = tmp;
    return 0;
}

static int
func_ir___FuncDecl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *func_ir___FuncDecl_setup(PyTypeObject *type);
PyObject *CPyDef_func_ir___FuncDecl(PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_module_name, PyObject *cpy_r_sig, CPyTagged cpy_r_kind, char cpy_r_is_prop_setter, char cpy_r_is_prop_getter, char cpy_r_implicit);

static PyObject *
func_ir___FuncDecl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_func_ir___FuncDecl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = func_ir___FuncDecl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_func_ir___FuncDecl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
func_ir___FuncDecl_traverse(mypyc___ir___func_ir___FuncDeclObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_class_name);
    Py_VISIT(self->_module_name);
    Py_VISIT(self->_sig);
    if (CPyTagged_CheckLong(self->_kind)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_kind));
    }
    Py_VISIT(self->_bound_sig);
    Py_VISIT(self->__line);
    return 0;
}

static int
func_ir___FuncDecl_clear(mypyc___ir___func_ir___FuncDeclObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_class_name);
    Py_CLEAR(self->_module_name);
    Py_CLEAR(self->_sig);
    if (CPyTagged_CheckLong(self->_kind)) {
        CPyTagged __tmp = self->_kind;
        self->_kind = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_bound_sig);
    Py_CLEAR(self->__line);
    return 0;
}

static void
func_ir___FuncDecl_dealloc(mypyc___ir___func_ir___FuncDeclObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, func_ir___FuncDecl_dealloc)
    func_ir___FuncDecl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem func_ir___FuncDecl_vtable[11];
static bool
CPyDef_func_ir___FuncDecl_trait_vtable_setup(void)
{
    CPyVTableItem func_ir___FuncDecl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_func_ir___FuncDecl_____init__,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___line,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl_____mypyc_setter__line,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___id,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___compute_shortname,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___shortname,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___fullname,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___cname,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___serialize,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___get_id_from_json,
        (CPyVTableItem)CPyDef_func_ir___FuncDecl___deserialize,
    };
    memcpy(func_ir___FuncDecl_vtable, func_ir___FuncDecl_vtable_scratch, sizeof(func_ir___FuncDecl_vtable));
    return 1;
}

static PyObject *
func_ir___FuncDecl_get_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_class_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_class_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_module_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_module_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_sig(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_sig(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_kind(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_kind(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_is_prop_setter(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_is_prop_setter(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_is_prop_getter(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_is_prop_getter(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_bound_sig(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_bound_sig(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_implicit(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_implicit(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get__line(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set__line(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_line(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static int
func_ir___FuncDecl_set_line(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncDecl_get_id(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static PyObject *
func_ir___FuncDecl_get_shortname(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);
static PyObject *
func_ir___FuncDecl_get_fullname(mypyc___ir___func_ir___FuncDeclObject *self, void *closure);

static PyGetSetDef func_ir___FuncDecl_getseters[] = {
    {"name",
     (getter)func_ir___FuncDecl_get_name, (setter)func_ir___FuncDecl_set_name,
     NULL, NULL},
    {"class_name",
     (getter)func_ir___FuncDecl_get_class_name, (setter)func_ir___FuncDecl_set_class_name,
     NULL, NULL},
    {"module_name",
     (getter)func_ir___FuncDecl_get_module_name, (setter)func_ir___FuncDecl_set_module_name,
     NULL, NULL},
    {"sig",
     (getter)func_ir___FuncDecl_get_sig, (setter)func_ir___FuncDecl_set_sig,
     NULL, NULL},
    {"kind",
     (getter)func_ir___FuncDecl_get_kind, (setter)func_ir___FuncDecl_set_kind,
     NULL, NULL},
    {"is_prop_setter",
     (getter)func_ir___FuncDecl_get_is_prop_setter, (setter)func_ir___FuncDecl_set_is_prop_setter,
     NULL, NULL},
    {"is_prop_getter",
     (getter)func_ir___FuncDecl_get_is_prop_getter, (setter)func_ir___FuncDecl_set_is_prop_getter,
     NULL, NULL},
    {"bound_sig",
     (getter)func_ir___FuncDecl_get_bound_sig, (setter)func_ir___FuncDecl_set_bound_sig,
     NULL, NULL},
    {"implicit",
     (getter)func_ir___FuncDecl_get_implicit, (setter)func_ir___FuncDecl_set_implicit,
     NULL, NULL},
    {"_line",
     (getter)func_ir___FuncDecl_get__line, (setter)func_ir___FuncDecl_set__line,
     NULL, NULL},
    {"line",
     (getter)func_ir___FuncDecl_get_line,
     (setter)func_ir___FuncDecl_set_line,
    NULL, NULL},
    {"id",
     (getter)func_ir___FuncDecl_get_id,
    NULL, NULL, NULL},
    {"shortname",
     (getter)func_ir___FuncDecl_get_shortname,
    NULL, NULL, NULL},
    {"fullname",
     (getter)func_ir___FuncDecl_get_fullname,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef func_ir___FuncDecl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_func_ir___FuncDecl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"compute_shortname",
     (PyCFunction)CPyPy_func_ir___FuncDecl___compute_shortname,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, NULL},
    {"cname",
     (PyCFunction)CPyPy_func_ir___FuncDecl___cname,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_func_ir___FuncDecl___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_id_from_json",
     (PyCFunction)CPyPy_func_ir___FuncDecl___get_id_from_json,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_func_ir___FuncDecl___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_func_ir___FuncDecl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FuncDecl",
    .tp_new = func_ir___FuncDecl_new,
    .tp_dealloc = (destructor)func_ir___FuncDecl_dealloc,
    .tp_traverse = (traverseproc)func_ir___FuncDecl_traverse,
    .tp_clear = (inquiry)func_ir___FuncDecl_clear,
    .tp_getset = func_ir___FuncDecl_getseters,
    .tp_methods = func_ir___FuncDecl_methods,
    .tp_init = func_ir___FuncDecl_init,
    .tp_basicsize = sizeof(mypyc___ir___func_ir___FuncDeclObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_func_ir___FuncDecl_template = &CPyType_func_ir___FuncDecl_template_;

static PyObject *
func_ir___FuncDecl_setup(PyTypeObject *type)
{
    mypyc___ir___func_ir___FuncDeclObject *self;
    self = (mypyc___ir___func_ir___FuncDeclObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = func_ir___FuncDecl_vtable;
    self->_kind = CPY_INT_TAG;
    self->_is_prop_setter = 2;
    self->_is_prop_getter = 2;
    self->_implicit = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_func_ir___FuncDecl(PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_module_name, PyObject *cpy_r_sig, CPyTagged cpy_r_kind, char cpy_r_is_prop_setter, char cpy_r_is_prop_getter, char cpy_r_implicit)
{
    PyObject *self = func_ir___FuncDecl_setup(CPyType_func_ir___FuncDecl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_func_ir___FuncDecl_____init__(self, cpy_r_name, cpy_r_class_name, cpy_r_module_name, cpy_r_sig, cpy_r_kind, cpy_r_is_prop_setter, cpy_r_is_prop_getter, cpy_r_implicit);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
func_ir___FuncDecl_get_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
func_ir___FuncDecl_set_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
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
    self->_name = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_class_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_class_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_name' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_class_name);
    PyObject *retval = self->_class_name;
    return retval;
}

static int
func_ir___FuncDecl_set_class_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'class_name' cannot be deleted");
        return -1;
    }
    if (self->_class_name != NULL) {
        CPy_DECREF(self->_class_name);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9824;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9824;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL9824: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_class_name = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_module_name(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_module_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_name' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_name);
    PyObject *retval = self->_module_name;
    return retval;
}

static int
func_ir___FuncDecl_set_module_name(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'module_name' cannot be deleted");
        return -1;
    }
    if (self->_module_name != NULL) {
        CPy_DECREF(self->_module_name);
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
    self->_module_name = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_sig(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_sig == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'sig' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_sig);
    PyObject *retval = self->_sig;
    return retval;
}

static int
func_ir___FuncDecl_set_sig(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'sig' cannot be deleted");
        return -1;
    }
    if (self->_sig != NULL) {
        CPy_DECREF(self->_sig);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_func_ir___FuncSignature))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_sig = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_kind(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_kind == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'kind' of 'FuncDecl' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_kind);
    PyObject *retval = CPyTagged_StealAsObject(self->_kind);
    return retval;
}

static int
func_ir___FuncDecl_set_kind(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'kind' cannot be deleted");
        return -1;
    }
    if (self->_kind != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_kind);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_kind = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_is_prop_setter(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    PyObject *retval = self->_is_prop_setter ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
func_ir___FuncDecl_set_is_prop_setter(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'is_prop_setter' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_prop_setter = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_is_prop_getter(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    PyObject *retval = self->_is_prop_getter ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
func_ir___FuncDecl_set_is_prop_getter(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'is_prop_getter' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_prop_getter = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_bound_sig(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->_bound_sig == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bound_sig' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_bound_sig);
    PyObject *retval = self->_bound_sig;
    return retval;
}

static int
func_ir___FuncDecl_set_bound_sig(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'bound_sig' cannot be deleted");
        return -1;
    }
    if (self->_bound_sig != NULL) {
        CPy_DECREF(self->_bound_sig);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_func_ir___FuncSignature)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9825;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9825;
    CPy_TypeError("mypyc.ir.func_ir.FuncSignature or None", value); 
    tmp = NULL;
__LL9825: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_bound_sig = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_implicit(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    PyObject *retval = self->_implicit ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
func_ir___FuncDecl_set_implicit(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute 'implicit' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_implicit = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get__line(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    if (unlikely(self->__line == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_line' of 'FuncDecl' undefined");
        return NULL;
    }
    CPy_INCREF(self->__line);
    PyObject *retval = self->__line;
    return retval;
}

static int
func_ir___FuncDecl_set__line(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncDecl' object attribute '_line' cannot be deleted");
        return -1;
    }
    if (self->__line != NULL) {
        CPy_DECREF(self->__line);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9826;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9826;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL9826: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__line = tmp;
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_line(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    CPyTagged retval = CPyDef_func_ir___FuncDecl___line((PyObject *) self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
}

static int
func_ir___FuncDecl_set_line(mypyc___ir___func_ir___FuncDeclObject *self, PyObject *value, void *closure)
{
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyDef_func_ir___FuncDecl_____mypyc_setter__line((PyObject *) self, tmp);
    return 0;
}

static PyObject *
func_ir___FuncDecl_get_id(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    return CPyDef_func_ir___FuncDecl___id((PyObject *) self);
}

static PyObject *
func_ir___FuncDecl_get_shortname(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    return CPyDef_func_ir___FuncDecl___shortname((PyObject *) self);
}

static PyObject *
func_ir___FuncDecl_get_fullname(mypyc___ir___func_ir___FuncDeclObject *self, void *closure)
{
    return CPyDef_func_ir___FuncDecl___fullname((PyObject *) self);
}

static int
func_ir___FuncIR_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *func_ir___FuncIR_setup(PyTypeObject *type);
PyObject *CPyDef_func_ir___FuncIR(PyObject *cpy_r_decl, PyObject *cpy_r_arg_regs, PyObject *cpy_r_blocks, CPyTagged cpy_r_line, PyObject *cpy_r_traceback_name);

static PyObject *
func_ir___FuncIR_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_func_ir___FuncIR) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = func_ir___FuncIR_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_func_ir___FuncIR_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
func_ir___FuncIR_traverse(mypyc___ir___func_ir___FuncIRObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_decl);
    Py_VISIT(self->_arg_regs);
    Py_VISIT(self->_blocks);
    Py_VISIT(self->_traceback_name);
    return 0;
}

static int
func_ir___FuncIR_clear(mypyc___ir___func_ir___FuncIRObject *self)
{
    Py_CLEAR(self->_decl);
    Py_CLEAR(self->_arg_regs);
    Py_CLEAR(self->_blocks);
    Py_CLEAR(self->_traceback_name);
    return 0;
}

static void
func_ir___FuncIR_dealloc(mypyc___ir___func_ir___FuncIRObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, func_ir___FuncIR_dealloc)
    func_ir___FuncIR_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem func_ir___FuncIR_vtable[13];
static bool
CPyDef_func_ir___FuncIR_trait_vtable_setup(void)
{
    CPyVTableItem func_ir___FuncIR_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_func_ir___FuncIR_____init__,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___line,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___args,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___ret_type,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___class_name,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___sig,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___name,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___fullname,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___id,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___cname,
        (CPyVTableItem)CPyDef_func_ir___FuncIR_____repr__,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___serialize,
        (CPyVTableItem)CPyDef_func_ir___FuncIR___deserialize,
    };
    memcpy(func_ir___FuncIR_vtable, func_ir___FuncIR_vtable_scratch, sizeof(func_ir___FuncIR_vtable));
    return 1;
}

static PyObject *
func_ir___FuncIR_get_decl(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static int
func_ir___FuncIR_set_decl(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncIR_get_arg_regs(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static int
func_ir___FuncIR_set_arg_regs(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncIR_get_blocks(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static int
func_ir___FuncIR_set_blocks(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncIR_get_traceback_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static int
func_ir___FuncIR_set_traceback_name(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure);
static PyObject *
func_ir___FuncIR_get_line(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_args(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_ret_type(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_class_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_sig(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_fullname(mypyc___ir___func_ir___FuncIRObject *self, void *closure);
static PyObject *
func_ir___FuncIR_get_id(mypyc___ir___func_ir___FuncIRObject *self, void *closure);

static PyGetSetDef func_ir___FuncIR_getseters[] = {
    {"decl",
     (getter)func_ir___FuncIR_get_decl, (setter)func_ir___FuncIR_set_decl,
     NULL, NULL},
    {"arg_regs",
     (getter)func_ir___FuncIR_get_arg_regs, (setter)func_ir___FuncIR_set_arg_regs,
     NULL, NULL},
    {"blocks",
     (getter)func_ir___FuncIR_get_blocks, (setter)func_ir___FuncIR_set_blocks,
     NULL, NULL},
    {"traceback_name",
     (getter)func_ir___FuncIR_get_traceback_name, (setter)func_ir___FuncIR_set_traceback_name,
     NULL, NULL},
    {"line",
     (getter)func_ir___FuncIR_get_line,
    NULL, NULL, NULL},
    {"args",
     (getter)func_ir___FuncIR_get_args,
    NULL, NULL, NULL},
    {"ret_type",
     (getter)func_ir___FuncIR_get_ret_type,
    NULL, NULL, NULL},
    {"class_name",
     (getter)func_ir___FuncIR_get_class_name,
    NULL, NULL, NULL},
    {"sig",
     (getter)func_ir___FuncIR_get_sig,
    NULL, NULL, NULL},
    {"name",
     (getter)func_ir___FuncIR_get_name,
    NULL, NULL, NULL},
    {"fullname",
     (getter)func_ir___FuncIR_get_fullname,
    NULL, NULL, NULL},
    {"id",
     (getter)func_ir___FuncIR_get_id,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef func_ir___FuncIR_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_func_ir___FuncIR_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cname",
     (PyCFunction)CPyPy_func_ir___FuncIR___cname,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_func_ir___FuncIR_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_func_ir___FuncIR___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_func_ir___FuncIR___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_func_ir___FuncIR_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FuncIR",
    .tp_new = func_ir___FuncIR_new,
    .tp_dealloc = (destructor)func_ir___FuncIR_dealloc,
    .tp_traverse = (traverseproc)func_ir___FuncIR_traverse,
    .tp_clear = (inquiry)func_ir___FuncIR_clear,
    .tp_getset = func_ir___FuncIR_getseters,
    .tp_methods = func_ir___FuncIR_methods,
    .tp_init = func_ir___FuncIR_init,
    .tp_repr = CPyDef_func_ir___FuncIR_____repr__,
    .tp_basicsize = sizeof(mypyc___ir___func_ir___FuncIRObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_func_ir___FuncIR_template = &CPyType_func_ir___FuncIR_template_;

static PyObject *
func_ir___FuncIR_setup(PyTypeObject *type)
{
    mypyc___ir___func_ir___FuncIRObject *self;
    self = (mypyc___ir___func_ir___FuncIRObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = func_ir___FuncIR_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_func_ir___FuncIR(PyObject *cpy_r_decl, PyObject *cpy_r_arg_regs, PyObject *cpy_r_blocks, CPyTagged cpy_r_line, PyObject *cpy_r_traceback_name)
{
    PyObject *self = func_ir___FuncIR_setup(CPyType_func_ir___FuncIR);
    if (self == NULL)
        return NULL;
    char res = CPyDef_func_ir___FuncIR_____init__(self, cpy_r_decl, cpy_r_arg_regs, cpy_r_blocks, cpy_r_line, cpy_r_traceback_name);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
func_ir___FuncIR_get_decl(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    if (unlikely(self->_decl == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'decl' of 'FuncIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_decl);
    PyObject *retval = self->_decl;
    return retval;
}

static int
func_ir___FuncIR_set_decl(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncIR' object attribute 'decl' cannot be deleted");
        return -1;
    }
    if (self->_decl != NULL) {
        CPy_DECREF(self->_decl);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_func_ir___FuncDecl))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_decl = tmp;
    return 0;
}

static PyObject *
func_ir___FuncIR_get_arg_regs(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    if (unlikely(self->_arg_regs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'arg_regs' of 'FuncIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_arg_regs);
    PyObject *retval = self->_arg_regs;
    return retval;
}

static int
func_ir___FuncIR_set_arg_regs(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncIR' object attribute 'arg_regs' cannot be deleted");
        return -1;
    }
    if (self->_arg_regs != NULL) {
        CPy_DECREF(self->_arg_regs);
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
    self->_arg_regs = tmp;
    return 0;
}

static PyObject *
func_ir___FuncIR_get_blocks(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    if (unlikely(self->_blocks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'blocks' of 'FuncIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_blocks);
    PyObject *retval = self->_blocks;
    return retval;
}

static int
func_ir___FuncIR_set_blocks(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncIR' object attribute 'blocks' cannot be deleted");
        return -1;
    }
    if (self->_blocks != NULL) {
        CPy_DECREF(self->_blocks);
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
    self->_blocks = tmp;
    return 0;
}

static PyObject *
func_ir___FuncIR_get_traceback_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    if (unlikely(self->_traceback_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'traceback_name' of 'FuncIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_traceback_name);
    PyObject *retval = self->_traceback_name;
    return retval;
}

static int
func_ir___FuncIR_set_traceback_name(mypyc___ir___func_ir___FuncIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncIR' object attribute 'traceback_name' cannot be deleted");
        return -1;
    }
    if (self->_traceback_name != NULL) {
        CPy_DECREF(self->_traceback_name);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9827;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9827;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL9827: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_traceback_name = tmp;
    return 0;
}

static PyObject *
func_ir___FuncIR_get_line(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    CPyTagged retval = CPyDef_func_ir___FuncIR___line((PyObject *) self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
}

static PyObject *
func_ir___FuncIR_get_args(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___args((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_ret_type(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___ret_type((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_class_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___class_name((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_sig(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___sig((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_name(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___name((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_fullname(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___fullname((PyObject *) self);
}

static PyObject *
func_ir___FuncIR_get_id(mypyc___ir___func_ir___FuncIRObject *self, void *closure)
{
    return CPyDef_func_ir___FuncIR___id((PyObject *) self);
}
static PyMethodDef func_irmodule_methods[] = {
    {"num_bitmap_args", (PyCFunction)CPyPy_func_ir___num_bitmap_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"all_values", (PyCFunction)CPyPy_func_ir___all_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"all_values_full", (PyCFunction)CPyPy_func_ir___all_values_full, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef func_irmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.ir.func_ir",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    func_irmodule_methods
};

PyObject *CPyInit_mypyc___ir___func_ir(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___ir___func_ir_internal) {
        Py_INCREF(CPyModule_mypyc___ir___func_ir_internal);
        return CPyModule_mypyc___ir___func_ir_internal;
    }
    CPyModule_mypyc___ir___func_ir_internal = PyModule_Create(&func_irmodule);
    if (unlikely(CPyModule_mypyc___ir___func_ir_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___ir___func_ir_internal, "__name__");
    CPyStatic_func_ir___globals = PyModule_GetDict(CPyModule_mypyc___ir___func_ir_internal);
    if (unlikely(CPyStatic_func_ir___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_func_ir_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___ir___func_ir_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___ir___func_ir_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_func_ir___INVALID_FUNC_DEF);
    CPyStatic_func_ir___INVALID_FUNC_DEF = NULL;
    Py_CLEAR(CPyType_func_ir___RuntimeArg);
    Py_CLEAR(CPyType_func_ir___FuncSignature);
    Py_CLEAR(CPyType_func_ir___FuncDecl);
    Py_CLEAR(CPyType_func_ir___FuncIR);
    return NULL;
}

char CPyDef_func_ir___RuntimeArg_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_kind, char cpy_r_pos_only) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    if (cpy_r_kind != NULL) goto CPyL9;
    cpy_r_r0 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 30, CPyStatic_func_ir___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_kind = cpy_r_r0;
CPyL5: ;
    if (cpy_r_pos_only != 2) goto CPyL7;
    cpy_r_pos_only = 0;
CPyL7: ;
    CPy_INCREF(cpy_r_name);
    ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_typ);
    ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_type = cpy_r_typ;
    ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_kind = cpy_r_kind;
    ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_pos_only = cpy_r_pos_only;
    return 1;
CPyL8: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL9: ;
    CPy_INCREF(cpy_r_kind);
    goto CPyL5;
}

PyObject *CPyPy_func_ir___RuntimeArg_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "typ", "kind", "pos_only", 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_kind = NULL;
    PyObject *obj_pos_only = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|OO", "__init__", kwlist, &obj_name, &obj_typ, &obj_kind, &obj_pos_only)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___RuntimeArg))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.RuntimeArg", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_kind;
    if (obj_kind == NULL) {
        arg_kind = NULL;
    } else if (likely(Py_TYPE(obj_kind) == CPyType_nodes___ArgKind))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_kind); 
        goto fail;
    }
    char arg_pos_only;
    if (obj_pos_only == NULL) {
        arg_pos_only = 2;
    } else if (unlikely(!PyBool_Check(obj_pos_only))) {
        CPy_TypeError("bool", obj_pos_only); goto fail;
    } else
        arg_pos_only = obj_pos_only == Py_True;
    char retval = CPyDef_func_ir___RuntimeArg_____init__(arg_self, arg_name, arg_typ, arg_kind, arg_pos_only);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 29, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir___RuntimeArg___optional(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_kind;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[1075]; /* 'is_optional' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "optional", 39, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "optional", 39, CPyStatic_func_ir___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_func_ir___RuntimeArg___optional(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":optional", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___RuntimeArg))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.RuntimeArg", obj_self); 
        goto fail;
    }
    char retval = CPyDef_func_ir___RuntimeArg___optional(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "optional", 38, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___RuntimeArg_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyStatics[7786]; /* ('RuntimeArg(name={}, type={}, optional={!r}, '
                                    'pos_only={!r})') */
    cpy_r_r1 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 43, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r4 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_pos_only;
    cpy_r_r5 = CPyStatics[193]; /* 'format' */
    cpy_r_r6 = cpy_r_r3 ? Py_True : Py_False;
    cpy_r_r7 = cpy_r_r4 ? Py_True : Py_False;
    PyObject *cpy_r_r8[5] = {cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r6, cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r9, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 42, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__repr__", 42, CPyStatic_func_ir___globals, "str", cpy_r_r10);
        goto CPyL4;
    }
    return cpy_r_r11;
CPyL4: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_func_ir___RuntimeArg_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___RuntimeArg))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.RuntimeArg", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___RuntimeArg_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 41, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___RuntimeArg___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[802]; /* 'type' */
    cpy_r_r3 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_r3, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_r3); /* serialize */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 49, CPyStatic_func_ir___globals);
        goto CPyL6;
    }
    cpy_r_r5 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r6 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_kind;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyStatics[2242]; /* 'value' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 50, CPyStatic_func_ir___globals);
        goto CPyL7;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r9 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 50, CPyStatic_func_ir___globals);
        goto CPyL7;
    }
    cpy_r_r10 = CPyStatics[3944]; /* 'pos_only' */
    cpy_r_r11 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_self)->_pos_only;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r9);
    cpy_r_r13 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r14 = CPyDict_Build(4, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r5, cpy_r_r12, cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 47, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
    return cpy_r_r14;
CPyL5: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL6: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_func_ir___RuntimeArg___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___RuntimeArg))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.RuntimeArg", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___RuntimeArg___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 46, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___RuntimeArg___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 57, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    cpy_r_r2 = CPyStatics[802]; /* 'type' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_data, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 58, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    if (PyDict_Check(cpy_r_r3))
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL9828;
    if (PyUnicode_Check(cpy_r_r3))
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL9828;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 58, CPyStatic_func_ir___globals, "union[dict, str]", cpy_r_r3);
    goto CPyL13;
__LL9828: ;
    cpy_r_r5 = CPyDef_rtypes___deserialize_type(cpy_r_r4, cpy_r_ctx);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 58, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    cpy_r_r6 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_data, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 59, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    cpy_r_r8 = (PyObject *)CPyType_nodes___ArgKind;
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 59, CPyStatic_func_ir___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___ArgKind))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 59, CPyStatic_func_ir___globals, "mypy.nodes.ArgKind", cpy_r_r11);
        goto CPyL14;
    }
    cpy_r_r13 = CPyStatics[3944]; /* 'pos_only' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_data, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 60, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r15 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 56, CPyStatic_func_ir___globals, "str", cpy_r_r1);
        goto CPyL17;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 56, CPyStatic_func_ir___globals);
        goto CPyL18;
    }
    cpy_r_r17 = CPyDef_func_ir___RuntimeArg(cpy_r_r15, cpy_r_r5, cpy_r_r12, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 56, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL12;
}

PyObject *CPyPy_func_ir___RuntimeArg___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_func_ir___RuntimeArg___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 55, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir___FuncSignature_____init__(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_ret_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_extra;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = PySequence_Tuple(cpy_r_args);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 70, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args = cpy_r_r0;
    CPy_INCREF(cpy_r_ret_type);
    ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_ret_type = cpy_r_ret_type;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___num_bitmap_args(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 74, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = cpy_r_r3 != 0;
    CPyTagged_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL22;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 76, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    cpy_r_r6 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
    CPyTagged_INCREF(cpy_r_r7);
    cpy_r_i = cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r6 & 1;
    cpy_r_r11 = cpy_r_r10 == 0;
    cpy_r_r12 = cpy_r_r9 & cpy_r_r11;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r6;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL8;
CPyL7: ;
    cpy_r_r15 = CPyTagged_IsLt_(cpy_r_r7, cpy_r_r6);
    cpy_r_r14 = cpy_r_r15;
CPyL8: ;
    if (!cpy_r_r14) goto CPyL24;
    cpy_r_r16 = CPyDef_mypyc___common___bitmap_name(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 77, CPyStatic_func_ir___globals);
        goto CPyL25;
    }
    cpy_r_r17 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL26;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 77, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_func_ir___RuntimeArg(cpy_r_r16, cpy_r_r17, cpy_r_r19, 1);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 77, CPyStatic_func_ir___globals);
        goto CPyL25;
    }
    cpy_r_r21 = PyList_Append(cpy_r_r5, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 76, CPyStatic_func_ir___globals);
        goto CPyL25;
    }
    cpy_r_r23 = CPyTagged_Add(cpy_r_r7, 2);
    CPyTagged_DECREF(cpy_r_r7);
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r7 = cpy_r_r23;
    cpy_r_i = cpy_r_r23;
    goto CPyL5;
CPyL16: ;
    cpy_r_extra = cpy_r_r5;
    cpy_r_r24 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 80, CPyStatic_func_ir___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_extra};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 80, CPyStatic_func_ir___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_extra);
    cpy_r_r31 = PySequence_Tuple(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 80, CPyStatic_func_ir___globals);
        goto CPyL28;
    }
    cpy_r_r32 = PyNumber_Add(cpy_r_r24, cpy_r_r31);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 80, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    if (likely(PyTuple_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__init__", 80, CPyStatic_func_ir___globals, "tuple", cpy_r_r32);
        goto CPyL23;
    }
    CPy_DECREF(((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args);
    ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args = cpy_r_r33;
CPyL22: ;
    return 1;
CPyL23: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL24: ;
    CPyTagged_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r6);
    CPyTagged_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r6);
    CPyTagged_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r16);
    goto CPyL11;
CPyL27: ;
    CPy_DecRef(cpy_r_extra);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
}

PyObject *CPyPy_func_ir___FuncSignature_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"args", "ret_type", 0};
    PyObject *obj_args;
    PyObject *obj_ret_type;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_args, &obj_ret_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncSignature))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_ret_type;
    if (likely(PyObject_TypeCheck(obj_ret_type, CPyType_rtypes___RType)))
        arg_ret_type = obj_ret_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_ret_type); 
        goto fail;
    }
    char retval = CPyDef_func_ir___FuncSignature_____init__(arg_self, arg_args, arg_ret_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 69, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncSignature___real_args(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0 != 0;
    CPyTagged_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyTagged_Negate(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r5 = CPySequenceTuple_GetSlice(cpy_r_r2, 0, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "real_args", 85, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "real_args", 85, CPyStatic_func_ir___globals, "tuple", cpy_r_r5);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_func_ir___FuncSignature___real_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":real_args", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncSignature))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncSignature___real_args(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "real_args", 82, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncSignature___bound_sig(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
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
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0 != 0;
    CPyTagged_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL5;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyTagged_Negate(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r5 = CPySequenceTuple_GetSlice(cpy_r_r2, 2, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "bound_sig", 90, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "bound_sig", 90, CPyStatic_func_ir___globals, "tuple", cpy_r_r5);
        goto CPyL9;
    }
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_ret_type;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_func_ir___FuncSignature(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "bound_sig", 90, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPySequenceTuple_GetSlice(cpy_r_r9, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "bound_sig", 92, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    if (likely(PyTuple_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "bound_sig", 92, CPyStatic_func_ir___globals, "tuple", cpy_r_r10);
        goto CPyL9;
    }
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_ret_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_func_ir___FuncSignature(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "bound_sig", 92, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
}

PyObject *CPyPy_func_ir___FuncSignature___bound_sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":bound_sig", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncSignature))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncSignature___bound_sig(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "bound_sig", 88, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncSignature_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = CPyStatics[7787]; /* 'FuncSignature(args=' */
    cpy_r_r2 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[163]; /* '' */
    cpy_r_r5 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r6[3] = {cpy_r_r2, cpy_r_r3, cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals, "str", cpy_r_r8);
        goto CPyL7;
    }
    cpy_r_r10 = CPyStatics[7788]; /* ', ret=' */
    cpy_r_r11 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_ret_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[163]; /* '' */
    cpy_r_r14 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r15[3] = {cpy_r_r11, cpy_r_r12, cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals, "str", cpy_r_r17);
        goto CPyL10;
    }
    cpy_r_r19 = CPyStatics[72]; /* ')' */
    cpy_r_r20 = PyList_New(5);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals);
        goto CPyL11;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r22 = cpy_r_r1;
    cpy_r_r23 = cpy_r_r22 + 8;
    *(PyObject * *)cpy_r_r23 = cpy_r_r9;
    cpy_r_r24 = cpy_r_r22 + 16;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r24 = cpy_r_r10;
    cpy_r_r25 = cpy_r_r22 + 24;
    *(PyObject * *)cpy_r_r25 = cpy_r_r18;
    cpy_r_r26 = cpy_r_r22 + 32;
    CPy_INCREF(cpy_r_r19);
    *(PyObject * *)cpy_r_r26 = cpy_r_r19;
    cpy_r_r27 = PyUnicode_Join(cpy_r_r0, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 95, CPyStatic_func_ir___globals);
        goto CPyL7;
    }
    return cpy_r_r27;
CPyL7: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r18);
    goto CPyL7;
}

PyObject *CPyPy_func_ir___FuncSignature_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncSignature))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncSignature_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 94, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncSignature___serialize(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0 != 0;
    CPyTagged_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyTagged_Negate(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r5 = CPySequenceTuple_GetSlice(cpy_r_r2, 0, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 99, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "serialize", 99, CPyStatic_func_ir___globals, "tuple", cpy_r_r5);
        goto CPyL16;
    }
    cpy_r_args = cpy_r_r6;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r7);
    cpy_r_args = cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = CPyStatics[1678]; /* 'args' */
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = PyList_New(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL17;
    }
    cpy_r_r12 = 0;
CPyL7: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL18;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_args, cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL19;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_func_ir___RuntimeArg))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r17);
        goto CPyL19;
    }
    cpy_r_t = cpy_r_r18;
    cpy_r_r19 = CPyDef_func_ir___RuntimeArg___serialize(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL19;
    }
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r11, cpy_r_r12, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL19;
    }
    cpy_r_r21 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r21;
    goto CPyL7;
CPyL13: ;
    cpy_r_r22 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r23 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_self)->_ret_type;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPY_GET_METHOD(cpy_r_r23, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_r23); /* serialize */
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL20;
    }
    cpy_r_r25 = CPyDict_Build(2, cpy_r_r8, cpy_r_r11, cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 102, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    return cpy_r_r25;
CPyL16: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL17: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
}

PyObject *CPyPy_func_ir___FuncSignature___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncSignature))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncSignature___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 97, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncSignature___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    cpy_r_r1 = CPyStatics[1678]; /* 'args' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_data, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
CPyL3: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL15;
    cpy_r_arg = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_func_ir___RuntimeArg;
    if (likely(PyDict_Check(cpy_r_arg)))
        cpy_r_r6 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals, "dict", cpy_r_arg);
        goto CPyL16;
    }
    cpy_r_r7 = CPyDef_func_ir___RuntimeArg___deserialize(cpy_r_r5, cpy_r_r6, cpy_r_ctx);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    cpy_r_r8 = PyList_Append(cpy_r_r0, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL16;
    } else
        goto CPyL3;
CPyL7: ;
    cpy_r_r10 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 107, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    cpy_r_r11 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_data, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 108, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    if (PyDict_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL9829;
    if (PyUnicode_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL9829;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 108, CPyStatic_func_ir___globals, "union[dict, str]", cpy_r_r12);
    goto CPyL14;
__LL9829: ;
    cpy_r_r14 = CPyDef_rtypes___deserialize_type(cpy_r_r13, cpy_r_ctx);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 108, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    cpy_r_r15 = CPyDef_func_ir___FuncSignature(cpy_r_r0, cpy_r_r14);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 106, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
}

PyObject *CPyPy_func_ir___FuncSignature___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_func_ir___FuncSignature___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 105, CPyStatic_func_ir___globals);
    return NULL;
}

CPyTagged CPyDef_func_ir___num_bitmap_args(PyObject *cpy_r_args) {
    CPyTagged cpy_r_n;
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    cpy_r_n = 0;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 114, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_func_ir___RuntimeArg))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 114, CPyStatic_func_ir___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_arg = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    cpy_r_r8 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r7)->_error_overlap;
    if (!cpy_r_r8) goto CPyL14;
CPyL5: ;
    cpy_r_r9 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r10 = CPyStatics[1075]; /* 'is_optional' */
    PyObject *cpy_r_r11[1] = {cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 115, CPyStatic_func_ir___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 115, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r16;
    goto CPyL1;
CPyL10: ;
    cpy_r_r17 = CPyTagged_Add(cpy_r_n, 62);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_r18 = CPyTagged_FloorDivide(cpy_r_r17, 64);
    CPyTagged_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 117, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    return cpy_r_r18;
CPyL12: ;
    cpy_r_r19 = CPY_INT_TAG;
    return cpy_r_r19;
CPyL13: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL9;
CPyL15: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
}

PyObject *CPyPy_func_ir___num_bitmap_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:num_bitmap_args", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject * arg_args;
    if (likely(PyTuple_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("tuple", obj_args); 
        goto fail;
    }
    CPyTagged retval = CPyDef_func_ir___num_bitmap_args(arg_args);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "num_bitmap_args", 112, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir___FuncDecl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_module_name, PyObject *cpy_r_sig, CPyTagged cpy_r_kind, char cpy_r_is_prop_setter, char cpy_r_is_prop_getter, char cpy_r_implicit) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    if (cpy_r_kind != CPY_INT_TAG) goto CPyL16;
    cpy_r_kind = 0;
CPyL2: ;
    if (cpy_r_is_prop_setter != 2) goto CPyL4;
    cpy_r_is_prop_setter = 0;
CPyL4: ;
    if (cpy_r_is_prop_getter != 2) goto CPyL6;
    cpy_r_is_prop_getter = 0;
CPyL6: ;
    if (cpy_r_implicit != 2) goto CPyL8;
    cpy_r_implicit = 0;
CPyL8: ;
    CPy_INCREF(cpy_r_name);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_class_name);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_class_name = cpy_r_class_name;
    CPy_INCREF(cpy_r_module_name);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_module_name = cpy_r_module_name;
    CPy_INCREF(cpy_r_sig);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_sig = cpy_r_sig;
    CPyTagged_INCREF(cpy_r_kind);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_kind = cpy_r_kind;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_is_prop_setter = cpy_r_is_prop_setter;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_is_prop_getter = cpy_r_is_prop_getter;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_class_name == cpy_r_r0;
    if (cpy_r_r1) {
        goto CPyL17;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_bound_sig = cpy_r_r2;
    goto CPyL14;
CPyL10: ;
    cpy_r_r3 = cpy_r_kind == 2;
    CPyTagged_DECREF(cpy_r_kind);
    if (!cpy_r_r3) goto CPyL12;
    CPy_INCREF(cpy_r_sig);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_bound_sig = cpy_r_sig;
    goto CPyL14;
CPyL12: ;
    cpy_r_r4 = CPyDef_func_ir___FuncSignature___bound_sig(cpy_r_sig);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 156, CPyStatic_func_ir___globals);
        goto CPyL15;
    }
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_bound_sig = cpy_r_r4;
CPyL14: ;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_implicit = cpy_r_implicit;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line = cpy_r_r5;
    return 1;
CPyL15: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL16: ;
    CPyTagged_INCREF(cpy_r_kind);
    goto CPyL2;
CPyL17: ;
    CPyTagged_DECREF(cpy_r_kind);
    goto CPyL9;
}

PyObject *CPyPy_func_ir___FuncDecl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "class_name", "module_name", "sig", "kind", "is_prop_setter", "is_prop_getter", "implicit", 0};
    PyObject *obj_name;
    PyObject *obj_class_name;
    PyObject *obj_module_name;
    PyObject *obj_sig;
    PyObject *obj_kind = NULL;
    PyObject *obj_is_prop_setter = NULL;
    PyObject *obj_is_prop_getter = NULL;
    PyObject *obj_implicit = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO|OOOO", "__init__", kwlist, &obj_name, &obj_class_name, &obj_module_name, &obj_sig, &obj_kind, &obj_is_prop_setter, &obj_is_prop_getter, &obj_implicit)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (PyUnicode_Check(obj_class_name))
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9830;
    if (obj_class_name == Py_None)
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9830;
    CPy_TypeError("str or None", obj_class_name); 
    goto fail;
__LL9830: ;
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    CPyTagged arg_kind;
    if (obj_kind == NULL) {
        arg_kind = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_kind)))
        arg_kind = CPyTagged_BorrowFromObject(obj_kind);
    else {
        CPy_TypeError("int", obj_kind); goto fail;
    }
    char arg_is_prop_setter;
    if (obj_is_prop_setter == NULL) {
        arg_is_prop_setter = 2;
    } else if (unlikely(!PyBool_Check(obj_is_prop_setter))) {
        CPy_TypeError("bool", obj_is_prop_setter); goto fail;
    } else
        arg_is_prop_setter = obj_is_prop_setter == Py_True;
    char arg_is_prop_getter;
    if (obj_is_prop_getter == NULL) {
        arg_is_prop_getter = 2;
    } else if (unlikely(!PyBool_Check(obj_is_prop_getter))) {
        CPy_TypeError("bool", obj_is_prop_getter); goto fail;
    } else
        arg_is_prop_getter = obj_is_prop_getter == Py_True;
    char arg_implicit;
    if (obj_implicit == NULL) {
        arg_implicit = 2;
    } else if (unlikely(!PyBool_Check(obj_implicit))) {
        CPy_TypeError("bool", obj_implicit); goto fail;
    } else
        arg_implicit = obj_implicit == Py_True;
    char retval = CPyDef_func_ir___FuncDecl_____init__(arg_self, arg_name, arg_class_name, arg_module_name, arg_sig, arg_kind, arg_is_prop_setter, arg_is_prop_getter, arg_implicit);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 132, CPyStatic_func_ir___globals);
    return NULL;
}

CPyTagged CPyDef_func_ir___FuncDecl___line(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 168, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line;
    CPy_INCREF(cpy_r_r4);
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 169, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = CPY_INT_TAG;
    return cpy_r_r6;
}

PyObject *CPyPy_func_ir___FuncDecl___line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":line", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_func_ir___FuncDecl___line(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 167, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir___FuncDecl_____mypyc_setter__line(PyObject *cpy_r_self, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r0 = CPyTagged_StealAsObject(cpy_r_line);
    CPy_DECREF(((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_func_ir___FuncDecl_____mypyc_setter__line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__line", kwlist, 0};
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_func_ir___FuncDecl_____mypyc_setter__line(arg_self, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 172, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___id(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncDecl, 1, mypyc___ir___func_ir___FuncDeclObject, CPyTagged); /* line */
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 177, CPyStatic_func_ir___globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 != cpy_r_r1;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 177, CPyStatic_func_ir___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncDecl, 6, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 178, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
CPyL5: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncDecl, 1, mypyc___ir___func_ir___FuncDeclObject, CPyTagged); /* line */
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 178, CPyStatic_func_ir___globals);
        goto CPyL10;
    }
CPyL6: ;
    cpy_r_r8 = CPyDef_mypyc___common___get_id_from_name(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 178, CPyStatic_func_ir___globals);
        goto CPyL8;
    }
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL8;
}

PyObject *CPyPy_func_ir___FuncDecl___id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":id", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___id(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 176, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___compute_shortname(PyObject *cpy_r_class_name, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_class_name != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL7;
    CPy_INCREF(cpy_r_class_name);
    if (likely(cpy_r_class_name != Py_None))
        cpy_r_r2 = cpy_r_class_name;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "compute_shortname", 181, CPyStatic_func_ir___globals, "str", cpy_r_class_name);
        goto CPyL9;
    }
    cpy_r_r3 = CPyStr_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL7;
    CPy_INCREF(cpy_r_class_name);
    if (likely(cpy_r_class_name != Py_None))
        cpy_r_r4 = cpy_r_class_name;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "compute_shortname", 182, CPyStatic_func_ir___globals, "str", cpy_r_class_name);
        goto CPyL9;
    }
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = PyUnicode_Concat(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "compute_shortname", 182, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    cpy_r_r7 = PyUnicode_Concat(cpy_r_r6, cpy_r_name);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "compute_shortname", 182, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    cpy_r_r8 = cpy_r_r7;
    goto CPyL8;
CPyL7: ;
    CPy_INCREF(cpy_r_name);
    cpy_r_r8 = cpy_r_name;
CPyL8: ;
    return cpy_r_r8;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_func_ir___FuncDecl___compute_shortname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"class_name", "name", 0};
    static CPyArg_Parser parser = {"OO:compute_shortname", kwlist, 0};
    PyObject *obj_class_name;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_class_name, &obj_name)) {
        return NULL;
    }
    PyObject *arg_class_name;
    if (PyUnicode_Check(obj_class_name))
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9831;
    if (obj_class_name == Py_None)
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL9831;
    CPy_TypeError("str or None", obj_class_name); 
    goto fail;
__LL9831: ;
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___compute_shortname(arg_class_name, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "compute_shortname", 181, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___shortname(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_class_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___FuncDecl___compute_shortname(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "shortname", 186, CPyStatic_func_ir___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_func_ir___FuncDecl___shortname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":shortname", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___shortname(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "shortname", 185, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___fullname(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[224]; /* '.' */
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 190, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncDecl, 5, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* shortname */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 190, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r4 = PyUnicode_Concat(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 190, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_func_ir___FuncDecl___fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":fullname", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___fullname(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 189, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___cname(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_partial_name;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncDecl, 5, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* shortname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 193, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->__line;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_mypyc___common___short_id_from_name(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 193, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    cpy_r_partial_name = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_namegen___NameGenerator___private_name(cpy_r_names, cpy_r_r4, cpy_r_partial_name);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_partial_name);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 194, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_func_ir___FuncDecl___cname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:cname", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___cname(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 192, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[3473]; /* 'class_name' */
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_class_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[7789]; /* 'sig' */
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_sig;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_func_ir___FuncSignature___serialize(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 201, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    cpy_r_r9 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_kind;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatics[7790]; /* 'is_prop_setter' */
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_is_prop_setter;
    cpy_r_r13 = CPyStatics[7791]; /* 'is_prop_getter' */
    cpy_r_r14 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_is_prop_getter;
    cpy_r_r15 = CPyStatics[4023]; /* 'implicit' */
    cpy_r_r16 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_self)->_implicit;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r18 = cpy_r_r12 ? Py_True : Py_False;
    cpy_r_r19 = cpy_r_r14 ? Py_True : Py_False;
    cpy_r_r20 = cpy_r_r16 ? Py_True : Py_False;
    cpy_r_r21 = CPyDict_Build(8, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_r9, cpy_r_r17, cpy_r_r11, cpy_r_r18, cpy_r_r13, cpy_r_r19, cpy_r_r15, cpy_r_r20);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 197, CPyStatic_func_ir___globals);
        goto CPyL3;
    }
    return cpy_r_r21;
CPyL3: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL3;
}

PyObject *CPyPy_func_ir___FuncDecl___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncDecl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 196, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___get_id_from_json(PyObject *cpy_r_func_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_shortname;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[7048]; /* 'decl' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_func_ir, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 212, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    cpy_r_decl = cpy_r_r1;
    cpy_r_r2 = CPyStatics[3473]; /* 'class_name' */
    cpy_r_r3 = PyObject_GetItem(cpy_r_decl, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 213, CPyStatic_func_ir___globals);
        goto CPyL17;
    }
    cpy_r_r4 = CPyStatics[2329]; /* 'name' */
    cpy_r_r5 = PyObject_GetItem(cpy_r_decl, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 213, CPyStatic_func_ir___globals);
        goto CPyL18;
    }
    if (PyUnicode_Check(cpy_r_r3))
        cpy_r_r6 = cpy_r_r3;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL9832;
    if (cpy_r_r3 == Py_None)
        cpy_r_r6 = cpy_r_r3;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL9832;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 213, CPyStatic_func_ir___globals, "str or None", cpy_r_r3);
    goto CPyL19;
__LL9832: ;
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r7 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 213, CPyStatic_func_ir___globals, "str", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r8 = CPyDef_func_ir___FuncDecl___compute_shortname(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 213, CPyStatic_func_ir___globals);
        goto CPyL17;
    }
    cpy_r_shortname = cpy_r_r8;
    cpy_r_r9 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r10 = PyObject_GetItem(cpy_r_decl, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 214, CPyStatic_func_ir___globals);
        goto CPyL21;
    }
    cpy_r_r11 = CPyStatics[224]; /* '.' */
    cpy_r_r12 = PyNumber_Add(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 214, CPyStatic_func_ir___globals);
        goto CPyL21;
    }
    cpy_r_r13 = PyNumber_Add(cpy_r_r12, cpy_r_shortname);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_shortname);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 214, CPyStatic_func_ir___globals);
        goto CPyL17;
    }
    cpy_r_fullname = cpy_r_r13;
    cpy_r_r14 = CPyStatics[2329]; /* 'name' */
    cpy_r_r15 = PyObject_GetItem(cpy_r_decl, cpy_r_r14);
    CPy_DECREF(cpy_r_decl);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals);
        goto CPyL22;
    }
    cpy_r_r16 = CPyStatics[2272]; /* 'line' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_func_ir, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals, "str", cpy_r_r15);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_fullname)))
        cpy_r_r19 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals, "str", cpy_r_fullname);
        goto CPyL25;
    }
    if (likely(PyLong_Check(cpy_r_r17)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r17);
    else {
        CPy_TypeError("int", cpy_r_r17); cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals);
        goto CPyL26;
    }
    cpy_r_r21 = CPyDef_mypyc___common___get_id_from_name(cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 215, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    return cpy_r_r21;
CPyL16: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL17: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r5);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_shortname);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL16;
}

PyObject *CPyPy_func_ir___FuncDecl___get_id_from_json(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func_ir", 0};
    static CPyArg_Parser parser = {"O:get_id_from_json", kwlist, 0};
    PyObject *obj_func_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func_ir)) {
        return NULL;
    }
    PyObject *arg_func_ir;
    if (likely(PyDict_Check(obj_func_ir)))
        arg_func_ir = obj_func_ir;
    else {
        CPy_TypeError("dict", obj_func_ir); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncDecl___get_id_from_json(arg_func_ir);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "get_id_from_json", 210, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncDecl___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 220, CPyStatic_func_ir___globals);
        goto CPyL19;
    }
    cpy_r_r2 = CPyStatics[3473]; /* 'class_name' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_data, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 221, CPyStatic_func_ir___globals);
        goto CPyL20;
    }
    cpy_r_r4 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_data, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 222, CPyStatic_func_ir___globals);
        goto CPyL21;
    }
    cpy_r_r6 = (PyObject *)CPyType_func_ir___FuncSignature;
    cpy_r_r7 = CPyStatics[7789]; /* 'sig' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_data, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 223, CPyStatic_func_ir___globals);
        goto CPyL22;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 223, CPyStatic_func_ir___globals, "dict", cpy_r_r8);
        goto CPyL22;
    }
    cpy_r_r10 = CPyDef_func_ir___FuncSignature___deserialize(cpy_r_r6, cpy_r_r9, cpy_r_ctx);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 223, CPyStatic_func_ir___globals);
        goto CPyL22;
    }
    cpy_r_r11 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_data, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 224, CPyStatic_func_ir___globals);
        goto CPyL23;
    }
    cpy_r_r13 = CPyStatics[7790]; /* 'is_prop_setter' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_data, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 225, CPyStatic_func_ir___globals);
        goto CPyL24;
    }
    cpy_r_r15 = CPyStatics[7791]; /* 'is_prop_getter' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_data, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 226, CPyStatic_func_ir___globals);
        goto CPyL25;
    }
    cpy_r_r17 = CPyStatics[4023]; /* 'implicit' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_data, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 227, CPyStatic_func_ir___globals);
        goto CPyL26;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r19 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals, "str", cpy_r_r1);
        goto CPyL27;
    }
    if (PyUnicode_Check(cpy_r_r3))
        cpy_r_r20 = cpy_r_r3;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL9833;
    if (cpy_r_r3 == Py_None)
        cpy_r_r20 = cpy_r_r3;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL9833;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals, "str or None", cpy_r_r3);
    goto CPyL28;
__LL9833: ;
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r21 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals, "str", cpy_r_r5);
        goto CPyL29;
    }
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals);
        goto CPyL32;
    }
    if (unlikely(!PyBool_Check(cpy_r_r18))) {
        CPy_TypeError("bool", cpy_r_r18); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r18 == Py_True;
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals);
        goto CPyL33;
    }
    cpy_r_r26 = CPyDef_func_ir___FuncDecl(cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r10, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 219, CPyStatic_func_ir___globals);
        goto CPyL19;
    }
    return cpy_r_r26;
CPyL19: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL19;
CPyL27: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
CPyL28: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL19;
CPyL30: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL19;
CPyL32: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL19;
CPyL33: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL19;
}

PyObject *CPyPy_func_ir___FuncDecl___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_func_ir___FuncDecl___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 218, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir___FuncIR_____init__(PyObject *cpy_r_self, PyObject *cpy_r_decl, PyObject *cpy_r_arg_regs, PyObject *cpy_r_blocks, CPyTagged cpy_r_line, PyObject *cpy_r_traceback_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL7;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_traceback_name != NULL) goto CPyL8;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback_name = cpy_r_r0;
CPyL4: ;
    CPy_INCREF(cpy_r_decl);
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl = cpy_r_decl;
    CPy_INCREF(cpy_r_arg_regs);
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_arg_regs = cpy_r_arg_regs;
    CPy_INCREF(cpy_r_blocks);
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_blocks = cpy_r_blocks;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_SET_ATTR(cpy_r_r1, CPyType_func_ir___FuncDecl, 2, cpy_r_line, mypyc___ir___func_ir___FuncDeclObject, CPyTagged); /* line */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 251, CPyStatic_func_ir___globals);
        goto CPyL9;
    }
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_traceback_name = cpy_r_traceback_name;
    return 1;
CPyL6: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL7: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback_name);
    goto CPyL4;
CPyL9: ;
    CPy_DecRef(cpy_r_traceback_name);
    goto CPyL6;
}

PyObject *CPyPy_func_ir___FuncIR_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"decl", "arg_regs", "blocks", "line", "traceback_name", 0};
    PyObject *obj_decl;
    PyObject *obj_arg_regs;
    PyObject *obj_blocks;
    PyObject *obj_line = NULL;
    PyObject *obj_traceback_name = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|OO", "__init__", kwlist, &obj_decl, &obj_arg_regs, &obj_blocks, &obj_line, &obj_traceback_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *arg_decl;
    if (likely(Py_TYPE(obj_decl) == CPyType_func_ir___FuncDecl))
        arg_decl = obj_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_decl); 
        goto fail;
    }
    PyObject *arg_arg_regs;
    if (likely(PyList_Check(obj_arg_regs)))
        arg_arg_regs = obj_arg_regs;
    else {
        CPy_TypeError("list", obj_arg_regs); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_traceback_name;
    if (obj_traceback_name == NULL) {
        arg_traceback_name = NULL;
        goto __LL9834;
    }
    if (PyUnicode_Check(obj_traceback_name))
        arg_traceback_name = obj_traceback_name;
    else {
        arg_traceback_name = NULL;
    }
    if (arg_traceback_name != NULL) goto __LL9834;
    if (obj_traceback_name == Py_None)
        arg_traceback_name = obj_traceback_name;
    else {
        arg_traceback_name = NULL;
    }
    if (arg_traceback_name != NULL) goto __LL9834;
    CPy_TypeError("str or None", obj_traceback_name); 
    goto fail;
__LL9834: ;
    char retval = CPyDef_func_ir___FuncIR_____init__(arg_self, arg_decl, arg_arg_regs, arg_blocks, arg_line, arg_traceback_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__init__", 237, CPyStatic_func_ir___globals);
    return NULL;
}

CPyTagged CPyDef_func_ir___FuncIR___line(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_func_ir___FuncDecl, 1, mypyc___ir___func_ir___FuncDeclObject, CPyTagged); /* line */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 259, CPyStatic_func_ir___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":line", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_func_ir___FuncIR___line(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "line", 258, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___args(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r1)->_args;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":args", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___args(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "args", 262, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___ret_type(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r1)->_ret_type;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___ret_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":ret_type", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___ret_type(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "ret_type", 266, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___class_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_class_name;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
}

PyObject *CPyPy_func_ir___FuncIR___class_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":class_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___class_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "class_name", 270, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___sig(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
}

PyObject *CPyPy_func_ir___FuncIR___sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":sig", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___sig(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "sig", 274, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_name;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
}

PyObject *CPyPy_func_ir___FuncIR___name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "name", 278, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___fullname(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_func_ir___FuncDecl, 6, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 283, CPyStatic_func_ir___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":fullname", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___fullname(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "fullname", 282, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___id(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 287, CPyStatic_func_ir___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":id", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___id(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "id", 286, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___cname(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_func_ir___FuncDecl___cname(cpy_r_r0, cpy_r_names);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 290, CPyStatic_func_ir___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_func_ir___FuncIR___cname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:cname", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___cname(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "cname", 289, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 293, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL13;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__repr__", 293, CPyStatic_func_ir___globals, "str", cpy_r_r0);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = CPyStatics[7792]; /* '<FuncIR ' */
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 294, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
CPyL5: ;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "__repr__", 294, CPyStatic_func_ir___globals, "str", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 294, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[840]; /* '>' */
    cpy_r_r11 = CPyStr_Build(5, cpy_r_r5, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 294, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = CPyStatics[7792]; /* '<FuncIR ' */
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 296, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r14 = CPyStatics[840]; /* '>' */
    cpy_r_r15 = CPyStr_Build(3, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 296, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL12;
}

PyObject *CPyPy_func_ir___FuncIR_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "__repr__", 292, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatics[7048]; /* 'decl' */
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_decl;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___FuncDecl___serialize(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 301, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[2272]; /* 'line' */
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_self, CPyType_func_ir___FuncIR, 1, mypyc___ir___func_ir___FuncIRObject, CPyTagged); /* line */
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 302, CPyStatic_func_ir___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r5 = CPyStatics[7793]; /* 'traceback_name' */
    cpy_r_r6 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_self)->_traceback_name;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r4);
    cpy_r_r8 = CPyDict_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r7, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 300, CPyStatic_func_ir___globals);
        goto CPyL4;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_func_ir___FuncIR___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_func_ir___FuncIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___FuncIR___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "serialize", 298, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___FuncIR___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_func_ir___FuncDecl;
    cpy_r_r1 = CPyStatics[7048]; /* 'decl' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_data, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals, "dict", cpy_r_r2);
        goto CPyL11;
    }
    cpy_r_r4 = CPyDef_func_ir___FuncDecl___deserialize(cpy_r_r0, cpy_r_r3, cpy_r_ctx);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL11;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL12;
    }
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL13;
    }
    cpy_r_r7 = CPyStatics[2272]; /* 'line' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_data, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL14;
    }
    cpy_r_r9 = CPyStatics[7793]; /* 'traceback_name' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_data, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 309, CPyStatic_func_ir___globals);
        goto CPyL15;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 308, CPyStatic_func_ir___globals);
        goto CPyL16;
    }
    if (PyUnicode_Check(cpy_r_r10))
        cpy_r_r12 = cpy_r_r10;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL9835;
    if (cpy_r_r10 == Py_None)
        cpy_r_r12 = cpy_r_r10;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL9835;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "deserialize", 308, CPyStatic_func_ir___globals, "str or None", cpy_r_r10);
    goto CPyL17;
__LL9835: ;
    cpy_r_r13 = CPyDef_func_ir___FuncIR(cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 308, CPyStatic_func_ir___globals);
        goto CPyL11;
    }
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL12: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPyTagged_DecRef(cpy_r_r11);
    goto CPyL11;
}

PyObject *CPyPy_func_ir___FuncIR___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_func_ir___FuncIR___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "deserialize", 307, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___all_values(PyObject *cpy_r_args, PyObject *cpy_r_blocks) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen_registers;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    cpy_r_r0 = PySequence_List(cpy_r_args);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 321, CPyStatic_func_ir___globals);
        goto CPyL54;
    }
    cpy_r_values = cpy_r_r0;
    cpy_r_r1 = PySet_New(cpy_r_args);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 322, CPyStatic_func_ir___globals);
        goto CPyL55;
    }
    cpy_r_seen_registers = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL56;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___BasicBlock))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 324, CPyStatic_func_ir___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r7);
        goto CPyL57;
    }
    cpy_r_block = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_block);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL58;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_ops___Op)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 325, CPyStatic_func_ir___globals, "mypyc.ir.ops.Op", cpy_r_r15);
        goto CPyL59;
    }
    cpy_r_op = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r18 = CPy_TypeCheck(cpy_r_op, cpy_r_r17);
    if (cpy_r_r18) goto CPyL60;
    cpy_r_r19 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL11;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL12;
CPyL11: ;
    cpy_r_r24 = (PyObject *)CPyType_ops___AssignMulti;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    cpy_r_r23 = cpy_r_r27;
CPyL12: ;
    if (!cpy_r_r23) goto CPyL35;
    CPy_INCREF(cpy_r_op);
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r28 = cpy_r_op;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL9836;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r28 = cpy_r_op;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL9836;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 328, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL61;
__LL9836: ;
    cpy_r_r29 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_ops___Assign))
        cpy_r_r33 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 328, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r28);
        goto CPyL61;
    }
    cpy_r_r34 = ((mypyc___ir___ops___AssignObject *)cpy_r_r33)->_dest;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL19;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_ops___AssignMulti))
        cpy_r_r36 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 328, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r28);
        goto CPyL61;
    }
    cpy_r_r37 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r36)->_dest;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r35 = cpy_r_r37;
CPyL19: ;
    cpy_r_r38 = PySet_Contains(cpy_r_seen_registers, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 328, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
    cpy_r_r40 = cpy_r_r38;
    cpy_r_r41 = cpy_r_r40 ^ 1;
    if (!cpy_r_r41) goto CPyL60;
    CPy_INCREF(cpy_r_op);
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r42 = cpy_r_op;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL9837;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r42 = cpy_r_op;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL9837;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 329, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL61;
__LL9837: ;
    cpy_r_r43 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_ops___Assign))
        cpy_r_r47 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 329, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r42);
        goto CPyL61;
    }
    cpy_r_r48 = ((mypyc___ir___ops___AssignObject *)cpy_r_r47)->_dest;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48;
    goto CPyL27;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_ops___AssignMulti))
        cpy_r_r50 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 329, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r42);
        goto CPyL61;
    }
    cpy_r_r51 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r50)->_dest;
    CPy_INCREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r49 = cpy_r_r51;
CPyL27: ;
    cpy_r_r52 = PyList_Append(cpy_r_values, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 329, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r54 = cpy_r_op;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL9838;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r54 = cpy_r_op;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL9838;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 330, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL59;
__LL9838: ;
    cpy_r_r55 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_ops___Assign))
        cpy_r_r59 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 330, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r54);
        goto CPyL59;
    }
    cpy_r_r60 = ((mypyc___ir___ops___AssignObject *)cpy_r_r59)->_dest;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60;
    goto CPyL34;
CPyL32: ;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_ops___AssignMulti))
        cpy_r_r62 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 330, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r54);
        goto CPyL59;
    }
    cpy_r_r63 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r62)->_dest;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r61 = cpy_r_r63;
CPyL34: ;
    cpy_r_r64 = PySet_Add(cpy_r_seen_registers, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 330, CPyStatic_func_ir___globals);
        goto CPyL59;
    } else
        goto CPyL51;
CPyL35: ;
    cpy_r_r66 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___Op, 0, mypyc___ir___ops___OpObject, char); /* is_void */
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 331, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
CPyL36: ;
    if (cpy_r_r66) goto CPyL60;
CPyL37: ;
    cpy_r_r67 = (PyObject *)CPyType_ops___LoadAddress;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (!cpy_r_r70) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r71 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 337, CPyStatic_func_ir___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL61;
    }
    cpy_r_r72 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r71)->_src;
    cpy_r_r73 = (PyObject *)CPyType_ops___Register;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_r72)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    if (!cpy_r_r76) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r77 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 338, CPyStatic_func_ir___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL61;
    }
    cpy_r_r78 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r77)->_src;
    CPy_INCREF(cpy_r_r78);
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_ops___Register))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 338, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_r78);
        goto CPyL61;
    }
    cpy_r_r80 = PySet_Contains(cpy_r_seen_registers, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 338, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
    cpy_r_r82 = cpy_r_r80;
    cpy_r_r83 = cpy_r_r82 ^ 1;
    if (!cpy_r_r83) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r84 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 340, CPyStatic_func_ir___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL61;
    }
    cpy_r_r85 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r84)->_src;
    CPy_INCREF(cpy_r_r85);
    if (likely(Py_TYPE(cpy_r_r85) == CPyType_ops___Register))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 340, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_r85);
        goto CPyL61;
    }
    cpy_r_r87 = PyList_Append(cpy_r_values, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 340, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadAddress))
        cpy_r_r89 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 341, CPyStatic_func_ir___globals, "mypyc.ir.ops.LoadAddress", cpy_r_op);
        goto CPyL61;
    }
    cpy_r_r90 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_r89)->_src;
    CPy_INCREF(cpy_r_r90);
    if (likely(Py_TYPE(cpy_r_r90) == CPyType_ops___Register))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values", 341, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_r90);
        goto CPyL61;
    }
    cpy_r_r92 = PySet_Add(cpy_r_seen_registers, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 341, CPyStatic_func_ir___globals);
        goto CPyL61;
    }
CPyL50: ;
    cpy_r_r94 = PyList_Append(cpy_r_values, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 342, CPyStatic_func_ir___globals);
        goto CPyL59;
    }
CPyL51: ;
    cpy_r_r96 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r96;
    goto CPyL6;
CPyL52: ;
    cpy_r_r97 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r97;
    goto CPyL3;
CPyL53: ;
    return cpy_r_values;
CPyL54: ;
    cpy_r_r98 = NULL;
    return cpy_r_r98;
CPyL55: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL54;
CPyL56: ;
    CPy_DECREF(cpy_r_seen_registers);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    goto CPyL54;
CPyL58: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL52;
CPyL59: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    goto CPyL54;
CPyL60: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL51;
CPyL61: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_op);
    goto CPyL54;
}

PyObject *CPyPy_func_ir___all_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "blocks", 0};
    static CPyArg_Parser parser = {"OO:all_values", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___all_values(arg_args, arg_blocks);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values", 316, CPyStatic_func_ir___globals);
    return NULL;
}

PyObject *CPyDef_func_ir___all_values_full(PyObject *cpy_r_args, PyObject *cpy_r_blocks) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen_registers;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    cpy_r_r0 = PySequence_List(cpy_r_args);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 349, CPyStatic_func_ir___globals);
        goto CPyL54;
    }
    cpy_r_values = cpy_r_r0;
    cpy_r_r1 = PySet_New(cpy_r_args);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 350, CPyStatic_func_ir___globals);
        goto CPyL55;
    }
    cpy_r_seen_registers = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL56;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___BasicBlock))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 352, CPyStatic_func_ir___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r7);
        goto CPyL57;
    }
    cpy_r_block = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_block);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL58;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_ops___Op)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 353, CPyStatic_func_ir___globals, "mypyc.ir.ops.Op", cpy_r_r15);
        goto CPyL59;
    }
    cpy_r_op = cpy_r_r16;
    cpy_r_r17 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 4, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *))(cpy_r_op); /* sources */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 354, CPyStatic_func_ir___globals);
        goto CPyL60;
    }
    cpy_r_r18 = 0;
CPyL10: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL61;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_ops___Value)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 354, CPyStatic_func_ir___globals, "mypyc.ir.ops.Value", cpy_r_r23);
        goto CPyL62;
    }
    cpy_r_source = cpy_r_r24;
    cpy_r_r25 = (PyObject *)CPyType_ops___Register;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_source)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL63;
    CPy_INCREF(cpy_r_source);
    if (likely(Py_TYPE(cpy_r_source) == CPyType_ops___Register))
        cpy_r_r29 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 357, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_source);
        goto CPyL64;
    }
    cpy_r_r30 = PySet_Contains(cpy_r_seen_registers, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 357, CPyStatic_func_ir___globals);
        goto CPyL64;
    }
    cpy_r_r32 = cpy_r_r30;
    cpy_r_r33 = cpy_r_r32 ^ 1;
    if (!cpy_r_r33) goto CPyL63;
    CPy_INCREF(cpy_r_source);
    if (likely(Py_TYPE(cpy_r_source) == CPyType_ops___Register))
        cpy_r_r34 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 358, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_source);
        goto CPyL64;
    }
    cpy_r_r35 = PyList_Append(cpy_r_values, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 358, CPyStatic_func_ir___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_source) == CPyType_ops___Register))
        cpy_r_r37 = cpy_r_source;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 359, CPyStatic_func_ir___globals, "mypyc.ir.ops.Register", cpy_r_source);
        goto CPyL62;
    }
    cpy_r_r38 = PySet_Add(cpy_r_seen_registers, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 359, CPyStatic_func_ir___globals);
        goto CPyL62;
    }
CPyL20: ;
    cpy_r_r40 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r40;
    goto CPyL10;
CPyL21: ;
    cpy_r_r41 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r42 = CPy_TypeCheck(cpy_r_op, cpy_r_r41);
    if (cpy_r_r42) goto CPyL65;
    cpy_r_r43 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL24;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL25;
CPyL24: ;
    cpy_r_r48 = (PyObject *)CPyType_ops___AssignMulti;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    cpy_r_r47 = cpy_r_r51;
CPyL25: ;
    if (!cpy_r_r47) goto CPyL48;
    CPy_INCREF(cpy_r_op);
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r52 = cpy_r_op;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL9839;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r52 = cpy_r_op;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL9839;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 362, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL60;
__LL9839: ;
    cpy_r_r53 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_r52)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_ops___Assign))
        cpy_r_r57 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 362, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r52);
        goto CPyL60;
    }
    cpy_r_r58 = ((mypyc___ir___ops___AssignObject *)cpy_r_r57)->_dest;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58;
    goto CPyL32;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_ops___AssignMulti))
        cpy_r_r60 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 362, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r52);
        goto CPyL60;
    }
    cpy_r_r61 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r60)->_dest;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r59 = cpy_r_r61;
CPyL32: ;
    cpy_r_r62 = PySet_Contains(cpy_r_seen_registers, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 362, CPyStatic_func_ir___globals);
        goto CPyL60;
    }
    cpy_r_r64 = cpy_r_r62;
    cpy_r_r65 = cpy_r_r64 ^ 1;
    if (!cpy_r_r65) goto CPyL65;
    CPy_INCREF(cpy_r_op);
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r66 = cpy_r_op;
    else {
        cpy_r_r66 = NULL;
    }
    if (cpy_r_r66 != NULL) goto __LL9840;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r66 = cpy_r_op;
    else {
        cpy_r_r66 = NULL;
    }
    if (cpy_r_r66 != NULL) goto __LL9840;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 363, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL60;
__LL9840: ;
    cpy_r_r67 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_r66)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (!cpy_r_r70) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_ops___Assign))
        cpy_r_r71 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 363, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r66);
        goto CPyL60;
    }
    cpy_r_r72 = ((mypyc___ir___ops___AssignObject *)cpy_r_r71)->_dest;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72;
    goto CPyL40;
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_ops___AssignMulti))
        cpy_r_r74 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 363, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r66);
        goto CPyL60;
    }
    cpy_r_r75 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r74)->_dest;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r73 = cpy_r_r75;
CPyL40: ;
    cpy_r_r76 = PyList_Append(cpy_r_values, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 363, CPyStatic_func_ir___globals);
        goto CPyL60;
    }
    if (Py_TYPE(cpy_r_op) == CPyType_ops___Assign)
        cpy_r_r78 = cpy_r_op;
    else {
        cpy_r_r78 = NULL;
    }
    if (cpy_r_r78 != NULL) goto __LL9841;
    if (Py_TYPE(cpy_r_op) == CPyType_ops___AssignMulti)
        cpy_r_r78 = cpy_r_op;
    else {
        cpy_r_r78 = NULL;
    }
    if (cpy_r_r78 != NULL) goto __LL9841;
    CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 364, CPyStatic_func_ir___globals, "union[mypyc.ir.ops.Assign, mypyc.ir.ops.AssignMulti]", cpy_r_op);
    goto CPyL59;
__LL9841: ;
    cpy_r_r79 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r78)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_ops___Assign))
        cpy_r_r83 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 364, CPyStatic_func_ir___globals, "mypyc.ir.ops.Assign", cpy_r_r78);
        goto CPyL59;
    }
    cpy_r_r84 = ((mypyc___ir___ops___AssignObject *)cpy_r_r83)->_dest;
    CPy_INCREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84;
    goto CPyL47;
CPyL45: ;
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_ops___AssignMulti))
        cpy_r_r86 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/func_ir.py", "all_values_full", 364, CPyStatic_func_ir___globals, "mypyc.ir.ops.AssignMulti", cpy_r_r78);
        goto CPyL59;
    }
    cpy_r_r87 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_r86)->_dest;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r85 = cpy_r_r87;
CPyL47: ;
    cpy_r_r88 = PySet_Add(cpy_r_seen_registers, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 364, CPyStatic_func_ir___globals);
        goto CPyL59;
    } else
        goto CPyL51;
CPyL48: ;
    cpy_r_r90 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___Op, 0, mypyc___ir___ops___OpObject, char); /* is_void */
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 365, CPyStatic_func_ir___globals);
        goto CPyL60;
    }
CPyL49: ;
    if (cpy_r_r90) goto CPyL65;
CPyL50: ;
    cpy_r_r91 = PyList_Append(cpy_r_values, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 368, CPyStatic_func_ir___globals);
        goto CPyL59;
    }
CPyL51: ;
    cpy_r_r93 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r93;
    goto CPyL6;
CPyL52: ;
    cpy_r_r94 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r94;
    goto CPyL3;
CPyL53: ;
    return cpy_r_values;
CPyL54: ;
    cpy_r_r95 = NULL;
    return cpy_r_r95;
CPyL55: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL54;
CPyL56: ;
    CPy_DECREF(cpy_r_seen_registers);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    goto CPyL54;
CPyL58: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL52;
CPyL59: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    goto CPyL54;
CPyL60: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_op);
    goto CPyL54;
CPyL61: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL21;
CPyL62: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r17);
    goto CPyL54;
CPyL63: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL20;
CPyL64: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_seen_registers);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_source);
    goto CPyL54;
CPyL65: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL51;
}

PyObject *CPyPy_func_ir___all_values_full(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "blocks", 0};
    static CPyArg_Parser parser = {"OO:all_values_full", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_blocks;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_blocks)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *retval = CPyDef_func_ir___all_values_full(arg_args, arg_blocks);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/func_ir.py", "all_values_full", 347, CPyStatic_func_ir___globals);
    return NULL;
}

char CPyDef_func_ir_____top_level__(void) {
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
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", -1, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_func_ir___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 3, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9406]; /* ('Final', 'Sequence') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_func_ir___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 5, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10011]; /* ('ARG_POS', 'ArgKind', 'Block', 'FuncDef') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_func_ir___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 7, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10012]; /* ('BITMAP_BITS', 'JsonDict', 'bitmap_name',
                                      'get_id_from_name', 'short_id_from_name') */
    cpy_r_r18 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r19 = CPyStatic_func_ir___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 8, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_mypyc___common = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10013]; /* ('Assign', 'AssignMulti', 'BasicBlock', 'ControlOp',
                                      'DeserMaps', 'LoadAddress', 'Register', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_func_ir___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 9, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10014]; /* ('RType', 'bitmap_rprimitive', 'deserialize_type') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_func_ir___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 19, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9957]; /* ('NameGenerator',) */
    cpy_r_r30 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r31 = CPyStatic_func_ir___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 20, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyModule_mypyc___namegen = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r35 = (PyObject *)CPyType_func_ir___RuntimeArg_template;
    cpy_r_r36 = CPyType_FromTemplate(cpy_r_r35, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 23, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r37 = CPyDef_func_ir___RuntimeArg_trait_vtable_setup();
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", -1, CPyStatic_func_ir___globals);
        goto CPyL40;
    }
    cpy_r_r38 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r39 = CPyStatics[2329]; /* 'name' */
    cpy_r_r40 = CPyStatics[802]; /* 'type' */
    cpy_r_r41 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r42 = CPyStatics[3944]; /* 'pos_only' */
    cpy_r_r43 = PyTuple_Pack(4, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 23, CPyStatic_func_ir___globals);
        goto CPyL40;
    }
    cpy_r_r44 = PyObject_SetAttr(cpy_r_r36, cpy_r_r38, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 23, CPyStatic_func_ir___globals);
        goto CPyL40;
    }
    CPyType_func_ir___RuntimeArg = (PyTypeObject *)cpy_r_r36;
    CPy_INCREF(CPyType_func_ir___RuntimeArg);
    cpy_r_r46 = CPyStatic_func_ir___globals;
    cpy_r_r47 = CPyStatics[7676]; /* 'RuntimeArg' */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r46, cpy_r_r47, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 23, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r52 = (PyObject *)CPyType_func_ir___FuncSignature_template;
    cpy_r_r53 = CPyType_FromTemplate(cpy_r_r52, cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 64, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r54 = CPyDef_func_ir___FuncSignature_trait_vtable_setup();
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", -1, CPyStatic_func_ir___globals);
        goto CPyL41;
    }
    cpy_r_r55 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r56 = CPyStatics[1678]; /* 'args' */
    cpy_r_r57 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r58 = CPyStatics[7689]; /* 'num_bitmap_args' */
    cpy_r_r59 = PyTuple_Pack(3, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 64, CPyStatic_func_ir___globals);
        goto CPyL41;
    }
    cpy_r_r60 = PyObject_SetAttr(cpy_r_r53, cpy_r_r55, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 64, CPyStatic_func_ir___globals);
        goto CPyL41;
    }
    CPyType_func_ir___FuncSignature = (PyTypeObject *)cpy_r_r53;
    CPy_INCREF(CPyType_func_ir___FuncSignature);
    cpy_r_r62 = CPyStatic_func_ir___globals;
    cpy_r_r63 = CPyStatics[7782]; /* 'FuncSignature' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 64, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r66 = CPyStatic_func_ir___globals;
    cpy_r_r67 = CPyStatics[7796]; /* 'FUNC_NORMAL' */
    cpy_r_r68 = CPyStatics[9015]; /* 0 */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r66, cpy_r_r67, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 120, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r71 = CPyStatic_func_ir___globals;
    cpy_r_r72 = CPyStatics[6752]; /* 'FUNC_STATICMETHOD' */
    cpy_r_r73 = CPyStatics[9016]; /* 1 */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 121, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r76 = CPyStatic_func_ir___globals;
    cpy_r_r77 = CPyStatics[7273]; /* 'FUNC_CLASSMETHOD' */
    cpy_r_r78 = CPyStatics[9018]; /* 2 */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 122, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r83 = (PyObject *)CPyType_func_ir___FuncDecl_template;
    cpy_r_r84 = CPyType_FromTemplate(cpy_r_r83, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 125, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r85 = CPyDef_func_ir___FuncDecl_trait_vtable_setup();
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", -1, CPyStatic_func_ir___globals);
        goto CPyL42;
    }
    cpy_r_r86 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r87 = CPyStatics[2329]; /* 'name' */
    cpy_r_r88 = CPyStatics[3473]; /* 'class_name' */
    cpy_r_r89 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r90 = CPyStatics[7789]; /* 'sig' */
    cpy_r_r91 = CPyStatics[3943]; /* 'kind' */
    cpy_r_r92 = CPyStatics[7790]; /* 'is_prop_setter' */
    cpy_r_r93 = CPyStatics[7791]; /* 'is_prop_getter' */
    cpy_r_r94 = CPyStatics[7797]; /* 'bound_sig' */
    cpy_r_r95 = CPyStatics[4023]; /* 'implicit' */
    cpy_r_r96 = CPyStatics[7798]; /* '_line' */
    cpy_r_r97 = PyTuple_Pack(10, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 125, CPyStatic_func_ir___globals);
        goto CPyL42;
    }
    cpy_r_r98 = PyObject_SetAttr(cpy_r_r84, cpy_r_r86, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 125, CPyStatic_func_ir___globals);
        goto CPyL42;
    }
    CPyType_func_ir___FuncDecl = (PyTypeObject *)cpy_r_r84;
    CPy_INCREF(CPyType_func_ir___FuncDecl);
    cpy_r_r100 = CPyStatic_func_ir___globals;
    cpy_r_r101 = CPyStatics[7022]; /* 'FuncDecl' */
    cpy_r_r102 = CPyDict_SetItem(cpy_r_r100, cpy_r_r101, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 125, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r106 = (PyObject *)CPyType_func_ir___FuncIR_template;
    cpy_r_r107 = CPyType_FromTemplate(cpy_r_r106, cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 231, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r108 = CPyDef_func_ir___FuncIR_trait_vtable_setup();
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", -1, CPyStatic_func_ir___globals);
        goto CPyL43;
    }
    cpy_r_r109 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r110 = CPyStatics[7048]; /* 'decl' */
    cpy_r_r111 = CPyStatics[7799]; /* 'arg_regs' */
    cpy_r_r112 = CPyStatics[4670]; /* 'blocks' */
    cpy_r_r113 = CPyStatics[7793]; /* 'traceback_name' */
    cpy_r_r114 = PyTuple_Pack(4, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 231, CPyStatic_func_ir___globals);
        goto CPyL43;
    }
    cpy_r_r115 = PyObject_SetAttr(cpy_r_r107, cpy_r_r109, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 231, CPyStatic_func_ir___globals);
        goto CPyL43;
    }
    CPyType_func_ir___FuncIR = (PyTypeObject *)cpy_r_r107;
    CPy_INCREF(CPyType_func_ir___FuncIR);
    cpy_r_r117 = CPyStatic_func_ir___globals;
    cpy_r_r118 = CPyStatics[6753]; /* 'FuncIR' */
    cpy_r_r119 = CPyDict_SetItem(cpy_r_r117, cpy_r_r118, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 231, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r121 = CPyStatics[7800]; /* '<INVALID_FUNC_DEF>' */
    cpy_r_r122 = PyList_New(0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 313, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    cpy_r_r123 = PyList_New(0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 313, CPyStatic_func_ir___globals);
        goto CPyL44;
    }
    cpy_r_r124 = CPyDef_nodes___Block(cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 313, CPyStatic_func_ir___globals);
        goto CPyL44;
    }
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_nodes___FuncDef(cpy_r_r121, cpy_r_r122, cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 313, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    CPyStatic_func_ir___INVALID_FUNC_DEF = cpy_r_r126;
    CPy_INCREF(CPyStatic_func_ir___INVALID_FUNC_DEF);
    cpy_r_r127 = CPyStatic_func_ir___globals;
    cpy_r_r128 = CPyStatics[7801]; /* 'INVALID_FUNC_DEF' */
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r127, cpy_r_r128, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/ir/func_ir.py", "<module>", 313, CPyStatic_func_ir___globals);
        goto CPyL39;
    }
    return 1;
CPyL39: ;
    cpy_r_r131 = 2;
    return cpy_r_r131;
CPyL40: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL39;
}
