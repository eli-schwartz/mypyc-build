#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
checkmember___MemberContext_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *checkmember___MemberContext_setup(PyTypeObject *type);
PyObject *CPyDef_checkmember___MemberContext(char cpy_r_is_lvalue, char cpy_r_is_super, char cpy_r_is_operator, PyObject *cpy_r_original_type, PyObject *cpy_r_context, PyObject *cpy_r_msg, PyObject *cpy_r_chk, PyObject *cpy_r_self_type, PyObject *cpy_r_module_symbol_table, char cpy_r_no_deferral, char cpy_r_is_self);

static PyObject *
checkmember___MemberContext_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkmember___MemberContext) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = checkmember___MemberContext_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_checkmember___MemberContext_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
checkmember___MemberContext_traverse(mypy___checkmember___MemberContextObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_original_type);
    Py_VISIT(self->_self_type);
    Py_VISIT(self->_context);
    Py_VISIT(self->_msg);
    Py_VISIT(self->_chk);
    Py_VISIT(self->_module_symbol_table);
    return 0;
}

static int
checkmember___MemberContext_clear(mypy___checkmember___MemberContextObject *self)
{
    Py_CLEAR(self->_original_type);
    Py_CLEAR(self->_self_type);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_msg);
    Py_CLEAR(self->_chk);
    Py_CLEAR(self->_module_symbol_table);
    return 0;
}

static void
checkmember___MemberContext_dealloc(mypy___checkmember___MemberContextObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkmember___MemberContext_dealloc)
    checkmember___MemberContext_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkmember___MemberContext_vtable[4];
static bool
CPyDef_checkmember___MemberContext_trait_vtable_setup(void)
{
    CPyVTableItem checkmember___MemberContext_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkmember___MemberContext_____init__,
        (CPyVTableItem)CPyDef_checkmember___MemberContext___named_type,
        (CPyVTableItem)CPyDef_checkmember___MemberContext___not_ready_callback,
        (CPyVTableItem)CPyDef_checkmember___MemberContext___copy_modified,
    };
    memcpy(checkmember___MemberContext_vtable, checkmember___MemberContext_vtable_scratch, sizeof(checkmember___MemberContext_vtable));
    return 1;
}

static PyObject *
checkmember___MemberContext_get_is_lvalue(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_is_lvalue(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_is_super(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_is_super(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_is_operator(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_is_operator(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_original_type(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_original_type(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_self_type(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_self_type(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_context(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_context(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_msg(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_msg(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_chk(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_chk(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_module_symbol_table(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_module_symbol_table(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_no_deferral(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_no_deferral(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);
static PyObject *
checkmember___MemberContext_get_is_self(mypy___checkmember___MemberContextObject *self, void *closure);
static int
checkmember___MemberContext_set_is_self(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure);

static PyGetSetDef checkmember___MemberContext_getseters[] = {
    {"is_lvalue",
     (getter)checkmember___MemberContext_get_is_lvalue, (setter)checkmember___MemberContext_set_is_lvalue,
     NULL, NULL},
    {"is_super",
     (getter)checkmember___MemberContext_get_is_super, (setter)checkmember___MemberContext_set_is_super,
     NULL, NULL},
    {"is_operator",
     (getter)checkmember___MemberContext_get_is_operator, (setter)checkmember___MemberContext_set_is_operator,
     NULL, NULL},
    {"original_type",
     (getter)checkmember___MemberContext_get_original_type, (setter)checkmember___MemberContext_set_original_type,
     NULL, NULL},
    {"self_type",
     (getter)checkmember___MemberContext_get_self_type, (setter)checkmember___MemberContext_set_self_type,
     NULL, NULL},
    {"context",
     (getter)checkmember___MemberContext_get_context, (setter)checkmember___MemberContext_set_context,
     NULL, NULL},
    {"msg",
     (getter)checkmember___MemberContext_get_msg, (setter)checkmember___MemberContext_set_msg,
     NULL, NULL},
    {"chk",
     (getter)checkmember___MemberContext_get_chk, (setter)checkmember___MemberContext_set_chk,
     NULL, NULL},
    {"module_symbol_table",
     (getter)checkmember___MemberContext_get_module_symbol_table, (setter)checkmember___MemberContext_set_module_symbol_table,
     NULL, NULL},
    {"no_deferral",
     (getter)checkmember___MemberContext_get_no_deferral, (setter)checkmember___MemberContext_set_no_deferral,
     NULL, NULL},
    {"is_self",
     (getter)checkmember___MemberContext_get_is_self, (setter)checkmember___MemberContext_set_is_self,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef checkmember___MemberContext_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_checkmember___MemberContext_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type",
     (PyCFunction)CPyPy_checkmember___MemberContext___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"not_ready_callback",
     (PyCFunction)CPyPy_checkmember___MemberContext___not_ready_callback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy_modified",
     (PyCFunction)CPyPy_checkmember___MemberContext___copy_modified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkmember___MemberContext_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MemberContext",
    .tp_new = checkmember___MemberContext_new,
    .tp_dealloc = (destructor)checkmember___MemberContext_dealloc,
    .tp_traverse = (traverseproc)checkmember___MemberContext_traverse,
    .tp_clear = (inquiry)checkmember___MemberContext_clear,
    .tp_getset = checkmember___MemberContext_getseters,
    .tp_methods = checkmember___MemberContext_methods,
    .tp_init = checkmember___MemberContext_init,
    .tp_basicsize = sizeof(mypy___checkmember___MemberContextObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkmember___MemberContext_template = &CPyType_checkmember___MemberContext_template_;

static PyObject *
checkmember___MemberContext_setup(PyTypeObject *type)
{
    mypy___checkmember___MemberContextObject *self;
    self = (mypy___checkmember___MemberContextObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkmember___MemberContext_vtable;
    self->_is_lvalue = 2;
    self->_is_super = 2;
    self->_is_operator = 2;
    self->_no_deferral = 2;
    self->_is_self = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_checkmember___MemberContext(char cpy_r_is_lvalue, char cpy_r_is_super, char cpy_r_is_operator, PyObject *cpy_r_original_type, PyObject *cpy_r_context, PyObject *cpy_r_msg, PyObject *cpy_r_chk, PyObject *cpy_r_self_type, PyObject *cpy_r_module_symbol_table, char cpy_r_no_deferral, char cpy_r_is_self)
{
    PyObject *self = checkmember___MemberContext_setup(CPyType_checkmember___MemberContext);
    if (self == NULL)
        return NULL;
    char res = CPyDef_checkmember___MemberContext_____init__(self, cpy_r_is_lvalue, cpy_r_is_super, cpy_r_is_operator, cpy_r_original_type, cpy_r_context, cpy_r_msg, cpy_r_chk, cpy_r_self_type, cpy_r_module_symbol_table, cpy_r_no_deferral, cpy_r_is_self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
checkmember___MemberContext_get_is_lvalue(mypy___checkmember___MemberContextObject *self, void *closure)
{
    PyObject *retval = self->_is_lvalue ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkmember___MemberContext_set_is_lvalue(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'is_lvalue' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_lvalue = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_is_super(mypy___checkmember___MemberContextObject *self, void *closure)
{
    PyObject *retval = self->_is_super ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkmember___MemberContext_set_is_super(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'is_super' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_super = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_is_operator(mypy___checkmember___MemberContextObject *self, void *closure)
{
    PyObject *retval = self->_is_operator ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkmember___MemberContext_set_is_operator(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'is_operator' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_operator = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_original_type(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_original_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'original_type' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_original_type);
    PyObject *retval = self->_original_type;
    return retval;
}

static int
checkmember___MemberContext_set_original_type(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'original_type' cannot be deleted");
        return -1;
    }
    if (self->_original_type != NULL) {
        CPy_DECREF(self->_original_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___Type)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.Type", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_original_type = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_self_type(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_self_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_type' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_type);
    PyObject *retval = self->_self_type;
    return retval;
}

static int
checkmember___MemberContext_set_self_type(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'self_type' cannot be deleted");
        return -1;
    }
    if (self->_self_type != NULL) {
        CPy_DECREF(self->_self_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___Type)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.Type", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_self_type = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_context(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'context' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_context);
    PyObject *retval = self->_context;
    return retval;
}

static int
checkmember___MemberContext_set_context(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'context' cannot be deleted");
        return -1;
    }
    if (self->_context != NULL) {
        CPy_DECREF(self->_context);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nodes___Context)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.Context", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_context = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_msg(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
checkmember___MemberContext_set_msg(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'msg' cannot be deleted");
        return -1;
    }
    if (self->_msg != NULL) {
        CPy_DECREF(self->_msg);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_messages___MessageBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_msg = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_chk(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_chk == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'chk' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_chk);
    PyObject *retval = self->_chk;
    return retval;
}

static int
checkmember___MemberContext_set_chk(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'chk' cannot be deleted");
        return -1;
    }
    if (self->_chk != NULL) {
        CPy_DECREF(self->_chk);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_checker___TypeChecker))
        tmp = value;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_chk = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_module_symbol_table(mypy___checkmember___MemberContextObject *self, void *closure)
{
    if (unlikely(self->_module_symbol_table == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_symbol_table' of 'MemberContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_symbol_table);
    PyObject *retval = self->_module_symbol_table;
    return retval;
}

static int
checkmember___MemberContext_set_module_symbol_table(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'module_symbol_table' cannot be deleted");
        return -1;
    }
    if (self->_module_symbol_table != NULL) {
        CPy_DECREF(self->_module_symbol_table);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1399;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1399;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL1399: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module_symbol_table = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_no_deferral(mypy___checkmember___MemberContextObject *self, void *closure)
{
    PyObject *retval = self->_no_deferral ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkmember___MemberContext_set_no_deferral(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'no_deferral' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_no_deferral = tmp;
    return 0;
}

static PyObject *
checkmember___MemberContext_get_is_self(mypy___checkmember___MemberContextObject *self, void *closure)
{
    PyObject *retval = self->_is_self ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkmember___MemberContext_set_is_self(mypy___checkmember___MemberContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MemberContext' object attribute 'is_self' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_self = tmp;
    return 0;
}

PyMemberDef checkmember___FreezeTypeVarsVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkmember___FreezeTypeVarsVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_checkmember___FreezeTypeVarsVisitor(void);

static PyObject *
checkmember___FreezeTypeVarsVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkmember___FreezeTypeVarsVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkmember___FreezeTypeVarsVisitor_setup(type);
}

static int
checkmember___FreezeTypeVarsVisitor_traverse(mypy___checkmember___FreezeTypeVarsVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject))));
    return 0;
}

static int
checkmember___FreezeTypeVarsVisitor_clear(mypy___checkmember___FreezeTypeVarsVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject))));
    return 0;
}

static void
checkmember___FreezeTypeVarsVisitor_dealloc(mypy___checkmember___FreezeTypeVarsVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkmember___FreezeTypeVarsVisitor_dealloc)
    checkmember___FreezeTypeVarsVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkmember___FreezeTypeVarsVisitor_vtable[36];
static CPyVTableItem checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable[27];
static size_t checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table[1];
static CPyVTableItem checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_checkmember___FreezeTypeVarsVisitor_trait_vtable_setup(void)
{
    CPyVTableItem checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance,
        (CPyVTableItem)CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable, checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable));
    size_t checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table, checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table));
    CPyVTableItem checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table, checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable, checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table, checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem checkmember___FreezeTypeVarsVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_typetraverser___TypeTraverserVisitor, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_trait_vtable, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_typetraverser___TypeTraverserVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)checkmember___FreezeTypeVarsVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
    };
    memcpy(checkmember___FreezeTypeVarsVisitor_vtable, checkmember___FreezeTypeVarsVisitor_vtable_scratch, sizeof(checkmember___FreezeTypeVarsVisitor_vtable));
    return 1;
}


static PyGetSetDef checkmember___FreezeTypeVarsVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef checkmember___FreezeTypeVarsVisitor_methods[] = {
    {"visit_callable_type",
     (PyCFunction)CPyPy_checkmember___FreezeTypeVarsVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkmember___FreezeTypeVarsVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FreezeTypeVarsVisitor",
    .tp_new = checkmember___FreezeTypeVarsVisitor_new,
    .tp_dealloc = (destructor)checkmember___FreezeTypeVarsVisitor_dealloc,
    .tp_traverse = (traverseproc)checkmember___FreezeTypeVarsVisitor_traverse,
    .tp_clear = (inquiry)checkmember___FreezeTypeVarsVisitor_clear,
    .tp_getset = checkmember___FreezeTypeVarsVisitor_getseters,
    .tp_methods = checkmember___FreezeTypeVarsVisitor_methods,
    .tp_members = checkmember___FreezeTypeVarsVisitor_members,
    .tp_basicsize = sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___checkmember___FreezeTypeVarsVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkmember___FreezeTypeVarsVisitor_template = &CPyType_checkmember___FreezeTypeVarsVisitor_template_;

static PyObject *
checkmember___FreezeTypeVarsVisitor_setup(PyTypeObject *type)
{
    mypy___checkmember___FreezeTypeVarsVisitorObject *self;
    self = (mypy___checkmember___FreezeTypeVarsVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkmember___FreezeTypeVarsVisitor_vtable + 9;
    return (PyObject *)self;
}

PyObject *CPyDef_checkmember___FreezeTypeVarsVisitor(void)
{
    PyObject *self = checkmember___FreezeTypeVarsVisitor_setup(CPyType_checkmember___FreezeTypeVarsVisitor);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef checkmembermodule_methods[] = {
    {"analyze_member_access", (PyCFunction)CPyPy_checkmember___analyze_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_analyze_member_access", (PyCFunction)CPyPy_checkmember____analyze_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"may_be_awaitable_attribute", (PyCFunction)CPyPy_checkmember___may_be_awaitable_attribute, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"report_missing_attribute", (PyCFunction)CPyPy_checkmember___report_missing_attribute, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_instance_member_access", (PyCFunction)CPyPy_checkmember___analyze_instance_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"validate_super_call", (PyCFunction)CPyPy_checkmember___validate_super_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_type_callable_member_access", (PyCFunction)CPyPy_checkmember___analyze_type_callable_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_type_type_member_access", (PyCFunction)CPyPy_checkmember___analyze_type_type_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_union_member_access", (PyCFunction)CPyPy_checkmember___analyze_union_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_none_member_access", (PyCFunction)CPyPy_checkmember___analyze_none_member_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_member_var_access", (PyCFunction)CPyPy_checkmember___analyze_member_var_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_final_member", (PyCFunction)CPyPy_checkmember___check_final_member, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_descriptor_access", (PyCFunction)CPyPy_checkmember___analyze_descriptor_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_instance_var", (PyCFunction)CPyPy_checkmember___is_instance_var, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_var", (PyCFunction)CPyPy_checkmember___analyze_var, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"freeze_all_type_vars", (PyCFunction)CPyPy_checkmember___freeze_all_type_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"lookup_member_var_or_accessor", (PyCFunction)CPyPy_checkmember___lookup_member_var_or_accessor, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_self_arg", (PyCFunction)CPyPy_checkmember___check_self_arg, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_class_attribute_access", (PyCFunction)CPyPy_checkmember___analyze_class_attribute_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_class_attr_hook", (PyCFunction)CPyPy_checkmember___apply_class_attr_hook, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_enum_class_attribute_access", (PyCFunction)CPyPy_checkmember___analyze_enum_class_attribute_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_typeddict_access", (PyCFunction)CPyPy_checkmember___analyze_typeddict_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_class_tvars", (PyCFunction)CPyPy_checkmember___add_class_tvars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"type_object_type", (PyCFunction)CPyPy_checkmember___type_object_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"analyze_decorator_or_funcbase_access", (PyCFunction)CPyPy_checkmember___analyze_decorator_or_funcbase_access, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_valid_constructor", (PyCFunction)CPyPy_checkmember___is_valid_constructor, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef checkmembermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.checkmember",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    checkmembermodule_methods
};

PyObject *CPyInit_mypy___checkmember(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___checkmember_internal) {
        Py_INCREF(CPyModule_mypy___checkmember_internal);
        return CPyModule_mypy___checkmember_internal;
    }
    CPyModule_mypy___checkmember_internal = PyModule_Create(&checkmembermodule);
    if (unlikely(CPyModule_mypy___checkmember_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___checkmember_internal, "__name__");
    CPyStatic_checkmember___globals = PyModule_GetDict(CPyModule_mypy___checkmember_internal);
    if (unlikely(CPyStatic_checkmember___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_checkmember_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___checkmember_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___checkmember_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_checkmember___MemberContext);
    Py_CLEAR(CPyType_checkmember___FreezeTypeVarsVisitor);
    return NULL;
}

char CPyDef_checkmember___MemberContext_____init__(PyObject *cpy_r_self, char cpy_r_is_lvalue, char cpy_r_is_super, char cpy_r_is_operator, PyObject *cpy_r_original_type, PyObject *cpy_r_context, PyObject *cpy_r_msg, PyObject *cpy_r_chk, PyObject *cpy_r_self_type, PyObject *cpy_r_module_symbol_table, char cpy_r_no_deferral, char cpy_r_is_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    if (cpy_r_module_symbol_table != NULL) goto CPyL12;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_module_symbol_table = cpy_r_r0;
CPyL2: ;
    if (cpy_r_no_deferral != 2) goto CPyL4;
    cpy_r_no_deferral = 0;
CPyL4: ;
    if (cpy_r_is_self != 2) goto CPyL6;
    cpy_r_is_self = 0;
CPyL6: ;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_lvalue = cpy_r_is_lvalue;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_super = cpy_r_is_super;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_operator = cpy_r_is_operator;
    CPy_INCREF(cpy_r_original_type);
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_original_type = cpy_r_original_type;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_self_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL9;
    CPy_INCREF(cpy_r_self_type);
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r3 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "__init__", 105, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL13;
    }
    cpy_r_r4 = cpy_r_r3;
    goto CPyL10;
CPyL9: ;
    CPy_INCREF(cpy_r_original_type);
    cpy_r_r4 = cpy_r_original_type;
CPyL10: ;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_self_type = cpy_r_r4;
    CPy_INCREF(cpy_r_context);
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_context = cpy_r_context;
    CPy_INCREF(cpy_r_msg);
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_msg = cpy_r_msg;
    CPy_INCREF(cpy_r_chk);
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_chk = cpy_r_chk;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_module_symbol_table = cpy_r_module_symbol_table;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_no_deferral = cpy_r_no_deferral;
    ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_self = cpy_r_is_self;
    return 1;
CPyL11: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL12: ;
    CPy_INCREF(cpy_r_module_symbol_table);
    goto CPyL2;
CPyL13: ;
    CPy_DecRef(cpy_r_module_symbol_table);
    goto CPyL11;
}

PyObject *CPyPy_checkmember___MemberContext_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"is_lvalue", "is_super", "is_operator", "original_type", "context", "msg", "chk", "self_type", "module_symbol_table", "no_deferral", "is_self", 0};
    PyObject *obj_is_lvalue;
    PyObject *obj_is_super;
    PyObject *obj_is_operator;
    PyObject *obj_original_type;
    PyObject *obj_context;
    PyObject *obj_msg;
    PyObject *obj_chk;
    PyObject *obj_self_type;
    PyObject *obj_module_symbol_table = NULL;
    PyObject *obj_no_deferral = NULL;
    PyObject *obj_is_self = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO|OOO", "__init__", kwlist, &obj_is_lvalue, &obj_is_super, &obj_is_operator, &obj_original_type, &obj_context, &obj_msg, &obj_chk, &obj_self_type, &obj_module_symbol_table, &obj_no_deferral, &obj_is_self)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___MemberContext))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_self); 
        goto fail;
    }
    char arg_is_lvalue;
    if (unlikely(!PyBool_Check(obj_is_lvalue))) {
        CPy_TypeError("bool", obj_is_lvalue); goto fail;
    } else
        arg_is_lvalue = obj_is_lvalue == Py_True;
    char arg_is_super;
    if (unlikely(!PyBool_Check(obj_is_super))) {
        CPy_TypeError("bool", obj_is_super); goto fail;
    } else
        arg_is_super = obj_is_super == Py_True;
    char arg_is_operator;
    if (unlikely(!PyBool_Check(obj_is_operator))) {
        CPy_TypeError("bool", obj_is_operator); goto fail;
    } else
        arg_is_operator = obj_is_operator == Py_True;
    PyObject *arg_original_type;
    if (likely(PyObject_TypeCheck(obj_original_type, CPyType_types___Type)))
        arg_original_type = obj_original_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_original_type); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *arg_chk;
    if (likely(Py_TYPE(obj_chk) == CPyType_checker___TypeChecker))
        arg_chk = obj_chk;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", obj_chk); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1400;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1400;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL1400: ;
    PyObject *arg_module_symbol_table;
    if (obj_module_symbol_table == NULL) {
        arg_module_symbol_table = NULL;
        goto __LL1401;
    }
    if (PyDict_Check(obj_module_symbol_table))
        arg_module_symbol_table = obj_module_symbol_table;
    else {
        arg_module_symbol_table = NULL;
    }
    if (arg_module_symbol_table != NULL) goto __LL1401;
    if (obj_module_symbol_table == Py_None)
        arg_module_symbol_table = obj_module_symbol_table;
    else {
        arg_module_symbol_table = NULL;
    }
    if (arg_module_symbol_table != NULL) goto __LL1401;
    CPy_TypeError("dict or None", obj_module_symbol_table); 
    goto fail;
__LL1401: ;
    char arg_no_deferral;
    if (obj_no_deferral == NULL) {
        arg_no_deferral = 2;
    } else if (unlikely(!PyBool_Check(obj_no_deferral))) {
        CPy_TypeError("bool", obj_no_deferral); goto fail;
    } else
        arg_no_deferral = obj_no_deferral == Py_True;
    char arg_is_self;
    if (obj_is_self == NULL) {
        arg_is_self = 2;
    } else if (unlikely(!PyBool_Check(obj_is_self))) {
        CPy_TypeError("bool", obj_is_self); goto fail;
    } else
        arg_is_self = obj_is_self == Py_True;
    char retval = CPyDef_checkmember___MemberContext_____init__(arg_self, arg_is_lvalue, arg_is_super, arg_is_operator, arg_original_type, arg_context, arg_msg, arg_chk, arg_self_type, arg_module_symbol_table, arg_no_deferral, arg_is_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "__init__", 87, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___MemberContext___named_type(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_checker___TypeChecker___named_type(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "named_type", 114, CPyStatic_checkmember___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_checkmember___MemberContext___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:named_type", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___MemberContext))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___MemberContext___named_type(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "named_type", 113, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___MemberContext___not_ready_callback(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_checker___TypeChecker___handle_cannot_determine_type(cpy_r_r0, cpy_r_name, cpy_r_context);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "not_ready_callback", 117, CPyStatic_checkmember___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_checkmember___MemberContext___not_ready_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "context", 0};
    static CPyArg_Parser parser = {"OO:not_ready_callback", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___MemberContext))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_checkmember___MemberContext___not_ready_callback(arg_self, arg_name, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "not_ready_callback", 116, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___MemberContext___copy_modified(PyObject *cpy_r_self, PyObject *cpy_r_messages, PyObject *cpy_r_self_type, PyObject *cpy_r_is_lvalue) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_mx;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    if (cpy_r_messages != NULL) goto CPyL18;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_messages = cpy_r_r0;
CPyL2: ;
    if (cpy_r_self_type != NULL) goto CPyL19;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_self_type = cpy_r_r1;
CPyL4: ;
    if (cpy_r_is_lvalue != NULL) goto CPyL20;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_is_lvalue = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_lvalue;
    cpy_r_r4 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_super;
    cpy_r_r5 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_is_operator;
    cpy_r_r6 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_original_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_self_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_module_symbol_table;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___checkmember___MemberContextObject *)cpy_r_self)->_no_deferral;
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_checkmember___MemberContext(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "copy_modified", 126, CPyStatic_checkmember___globals);
        goto CPyL21;
    }
    cpy_r_mx = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_messages != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL22;
    if (likely(cpy_r_messages != Py_None))
        cpy_r_r17 = cpy_r_messages;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "copy_modified", 139, CPyStatic_checkmember___globals, "mypy.messages.MessageBuilder", cpy_r_messages);
        goto CPyL23;
    }
    CPy_DECREF(((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg);
    ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg = cpy_r_r17;
CPyL10: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_self_type != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL24;
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r21 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "copy_modified", 141, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL25;
    }
    CPy_DECREF(((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type);
    ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type = cpy_r_r21;
CPyL13: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_is_lvalue != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL26;
    if (unlikely(!PyBool_Check(cpy_r_is_lvalue))) {
        CPy_TypeError("bool", cpy_r_is_lvalue); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_is_lvalue == Py_True;
    CPy_DECREF(cpy_r_is_lvalue);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "copy_modified", 143, CPyStatic_checkmember___globals);
        goto CPyL27;
    }
    ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue = cpy_r_r25;
CPyL16: ;
    return cpy_r_mx;
CPyL17: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL18: ;
    CPy_INCREF(cpy_r_messages);
    goto CPyL2;
CPyL19: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL4;
CPyL20: ;
    CPy_INCREF(cpy_r_is_lvalue);
    goto CPyL6;
CPyL21: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_is_lvalue);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL10;
CPyL23: ;
    CPy_DecRef(cpy_r_self_type);
    CPy_DecRef(cpy_r_is_lvalue);
    CPy_DecRef(cpy_r_mx);
    goto CPyL17;
CPyL24: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL13;
CPyL25: ;
    CPy_DecRef(cpy_r_is_lvalue);
    CPy_DecRef(cpy_r_mx);
    goto CPyL17;
CPyL26: ;
    CPy_DECREF(cpy_r_is_lvalue);
    goto CPyL16;
CPyL27: ;
    CPy_DecRef(cpy_r_mx);
    goto CPyL17;
}

PyObject *CPyPy_checkmember___MemberContext___copy_modified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"messages", "self_type", "is_lvalue", 0};
    static CPyArg_Parser parser = {"|$OOO:copy_modified", kwlist, 0};
    PyObject *obj_messages = NULL;
    PyObject *obj_self_type = NULL;
    PyObject *obj_is_lvalue = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_messages, &obj_self_type, &obj_is_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___MemberContext))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_self); 
        goto fail;
    }
    PyObject *arg_messages;
    if (obj_messages == NULL) {
        arg_messages = NULL;
        goto __LL1402;
    }
    if (Py_TYPE(obj_messages) == CPyType_messages___MessageBuilder)
        arg_messages = obj_messages;
    else {
        arg_messages = NULL;
    }
    if (arg_messages != NULL) goto __LL1402;
    if (obj_messages == Py_None)
        arg_messages = obj_messages;
    else {
        arg_messages = NULL;
    }
    if (arg_messages != NULL) goto __LL1402;
    CPy_TypeError("mypy.messages.MessageBuilder or None", obj_messages); 
    goto fail;
__LL1402: ;
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL1403;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1403;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1403;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL1403: ;
    PyObject *arg_is_lvalue;
    if (obj_is_lvalue == NULL) {
        arg_is_lvalue = NULL;
        goto __LL1404;
    }
    if (PyBool_Check(obj_is_lvalue))
        arg_is_lvalue = obj_is_lvalue;
    else {
        arg_is_lvalue = NULL;
    }
    if (arg_is_lvalue != NULL) goto __LL1404;
    if (obj_is_lvalue == Py_None)
        arg_is_lvalue = obj_is_lvalue;
    else {
        arg_is_lvalue = NULL;
    }
    if (arg_is_lvalue != NULL) goto __LL1404;
    CPy_TypeError("bool or None", obj_is_lvalue); 
    goto fail;
__LL1404: ;
    PyObject *retval = CPyDef_checkmember___MemberContext___copy_modified(arg_self, arg_messages, arg_self_type, arg_is_lvalue);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "copy_modified", 119, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_context, char cpy_r_is_lvalue, char cpy_r_is_super, char cpy_r_is_operator, PyObject *cpy_r_msg, PyObject *cpy_r_original_type, PyObject *cpy_r_chk, PyObject *cpy_r_override_info, char cpy_r_in_literal_context, PyObject *cpy_r_self_type, PyObject *cpy_r_module_symbol_table, char cpy_r_no_deferral, char cpy_r_is_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_mx;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_possible_literal;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    if (cpy_r_override_info != NULL) goto CPyL25;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_override_info = cpy_r_r0;
CPyL2: ;
    if (cpy_r_in_literal_context != 2) goto CPyL4;
    cpy_r_in_literal_context = 0;
CPyL4: ;
    if (cpy_r_self_type != NULL) goto CPyL26;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_self_type = cpy_r_r1;
CPyL6: ;
    if (cpy_r_module_symbol_table != NULL) goto CPyL27;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_module_symbol_table = cpy_r_r2;
CPyL8: ;
    if (cpy_r_no_deferral != 2) goto CPyL10;
    cpy_r_no_deferral = 0;
CPyL10: ;
    if (cpy_r_is_self != 2) goto CPyL12;
    cpy_r_is_self = 0;
CPyL12: ;
    cpy_r_r3 = CPyDef_checkmember___MemberContext(cpy_r_is_lvalue, cpy_r_is_super, cpy_r_is_operator, cpy_r_original_type, cpy_r_context, cpy_r_msg, cpy_r_chk, cpy_r_self_type, cpy_r_module_symbol_table, cpy_r_no_deferral, cpy_r_is_self);
    CPy_DECREF(cpy_r_self_type);
    CPy_DECREF(cpy_r_module_symbol_table);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_access", 188, CPyStatic_checkmember___globals);
        goto CPyL28;
    }
    cpy_r_mx = cpy_r_r3;
    cpy_r_r4 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_typ, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_mx);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_access", 201, CPyStatic_checkmember___globals);
        goto CPyL24;
    }
    cpy_r_result = cpy_r_r4;
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_result);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_access", 202, CPyStatic_checkmember___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_access", 202, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL29;
    }
    cpy_r_possible_literal = cpy_r_r6;
    if (!cpy_r_in_literal_context) goto CPyL30;
    cpy_r_r7 = (PyObject *)CPyType_types___Instance;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_possible_literal)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_possible_literal) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_possible_literal;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_access", 206, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_possible_literal);
        goto CPyL31;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_last_known_value;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (cpy_r_r14) {
        goto CPyL32;
    } else
        goto CPyL30;
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_possible_literal) == CPyType_types___Instance))
        cpy_r_r15 = cpy_r_possible_literal;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_access", 208, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_possible_literal);
        goto CPyL33;
    }
    cpy_r_r16 = ((mypy___types___InstanceObject *)cpy_r_r15)->_last_known_value;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_access", 208, CPyStatic_checkmember___globals, "mypy.types.LiteralType", cpy_r_r16);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_possible_literal);
    return cpy_r_r17;
CPyL23: ;
    return cpy_r_result;
CPyL24: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL25: ;
    CPy_INCREF(cpy_r_override_info);
    goto CPyL2;
CPyL26: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL6;
CPyL27: ;
    CPy_INCREF(cpy_r_module_symbol_table);
    goto CPyL8;
CPyL28: ;
    CPy_DecRef(cpy_r_override_info);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_possible_literal);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_possible_literal);
    goto CPyL24;
CPyL32: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_possible_literal);
    goto CPyL24;
}

PyObject *CPyPy_checkmember___analyze_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "context", "is_lvalue", "is_super", "is_operator", "msg", "override_info", "in_literal_context", "self_type", "module_symbol_table", "no_deferral", "is_self", "original_type", "chk", 0};
    static CPyArg_Parser parser = {"OOOOOOO|$OOOOOO@OO:analyze_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_context;
    PyObject *obj_is_lvalue;
    PyObject *obj_is_super;
    PyObject *obj_is_operator;
    PyObject *obj_msg;
    PyObject *obj_original_type;
    PyObject *obj_chk;
    PyObject *obj_override_info = NULL;
    PyObject *obj_in_literal_context = NULL;
    PyObject *obj_self_type = NULL;
    PyObject *obj_module_symbol_table = NULL;
    PyObject *obj_no_deferral = NULL;
    PyObject *obj_is_self = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_context, &obj_is_lvalue, &obj_is_super, &obj_is_operator, &obj_msg, &obj_override_info, &obj_in_literal_context, &obj_self_type, &obj_module_symbol_table, &obj_no_deferral, &obj_is_self, &obj_original_type, &obj_chk)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char arg_is_lvalue;
    if (unlikely(!PyBool_Check(obj_is_lvalue))) {
        CPy_TypeError("bool", obj_is_lvalue); goto fail;
    } else
        arg_is_lvalue = obj_is_lvalue == Py_True;
    char arg_is_super;
    if (unlikely(!PyBool_Check(obj_is_super))) {
        CPy_TypeError("bool", obj_is_super); goto fail;
    } else
        arg_is_super = obj_is_super == Py_True;
    char arg_is_operator;
    if (unlikely(!PyBool_Check(obj_is_operator))) {
        CPy_TypeError("bool", obj_is_operator); goto fail;
    } else
        arg_is_operator = obj_is_operator == Py_True;
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *arg_original_type;
    if (likely(PyObject_TypeCheck(obj_original_type, CPyType_types___Type)))
        arg_original_type = obj_original_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_original_type); 
        goto fail;
    }
    PyObject *arg_chk;
    if (likely(Py_TYPE(obj_chk) == CPyType_checker___TypeChecker))
        arg_chk = obj_chk;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", obj_chk); 
        goto fail;
    }
    PyObject *arg_override_info;
    if (obj_override_info == NULL) {
        arg_override_info = NULL;
        goto __LL1405;
    }
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1405;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1405;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1405: ;
    char arg_in_literal_context;
    if (obj_in_literal_context == NULL) {
        arg_in_literal_context = 2;
    } else if (unlikely(!PyBool_Check(obj_in_literal_context))) {
        CPy_TypeError("bool", obj_in_literal_context); goto fail;
    } else
        arg_in_literal_context = obj_in_literal_context == Py_True;
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL1406;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1406;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1406;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL1406: ;
    PyObject *arg_module_symbol_table;
    if (obj_module_symbol_table == NULL) {
        arg_module_symbol_table = NULL;
        goto __LL1407;
    }
    if (PyDict_Check(obj_module_symbol_table))
        arg_module_symbol_table = obj_module_symbol_table;
    else {
        arg_module_symbol_table = NULL;
    }
    if (arg_module_symbol_table != NULL) goto __LL1407;
    if (obj_module_symbol_table == Py_None)
        arg_module_symbol_table = obj_module_symbol_table;
    else {
        arg_module_symbol_table = NULL;
    }
    if (arg_module_symbol_table != NULL) goto __LL1407;
    CPy_TypeError("dict or None", obj_module_symbol_table); 
    goto fail;
__LL1407: ;
    char arg_no_deferral;
    if (obj_no_deferral == NULL) {
        arg_no_deferral = 2;
    } else if (unlikely(!PyBool_Check(obj_no_deferral))) {
        CPy_TypeError("bool", obj_no_deferral); goto fail;
    } else
        arg_no_deferral = obj_no_deferral == Py_True;
    char arg_is_self;
    if (obj_is_self == NULL) {
        arg_is_self = 2;
    } else if (unlikely(!PyBool_Check(obj_is_self))) {
        CPy_TypeError("bool", obj_is_self); goto fail;
    } else
        arg_is_self = obj_is_self == Py_True;
    PyObject *retval = CPyDef_checkmember___analyze_member_access(arg_name, arg_typ, arg_context, arg_is_lvalue, arg_is_super, arg_is_operator, arg_msg, arg_original_type, arg_chk, arg_override_info, arg_in_literal_context, arg_self_type, arg_module_symbol_table, arg_no_deferral, arg_is_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_member_access", 147, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember____analyze_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    int64_t cpy_r_r96;
    CPyTagged cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyPtr cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyTagged cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    if (cpy_r_override_info != NULL) goto CPyL79;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_override_info = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 218, CPyStatic_checkmember___globals);
        goto CPyL80;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 218, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL80;
    }
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___Instance;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 220, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL80;
    }
    cpy_r_r8 = CPyDef_checkmember___analyze_instance_member_access(cpy_r_name, cpy_r_r7, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 220, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (cpy_r_r12) {
        goto CPyL81;
    } else
        goto CPyL12;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r13 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 223, CPyStatic_checkmember___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL78;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_types___AnyType(14, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 223, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (cpy_r_r21) {
        goto CPyL82;
    } else
        goto CPyL16;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r22 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 225, CPyStatic_checkmember___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL78;
    }
    cpy_r_r23 = CPyDef_checkmember___analyze_union_member_access(cpy_r_name, cpy_r_r22, cpy_r_mx);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 225, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r23;
CPyL16: ;
    cpy_r_r24 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL19;
CPyL18: ;
    cpy_r_r29 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    cpy_r_r28 = cpy_r_r32;
CPyL19: ;
    if (!cpy_r_r28) goto CPyL26;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r33 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 226, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL83;
    }
    cpy_r_r34 = CPY_GET_METHOD(cpy_r_r33, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r33); /* is_type_obj */
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 226, CPyStatic_checkmember___globals);
        goto CPyL83;
    }
    if (cpy_r_r34) {
        goto CPyL84;
    } else
        goto CPyL26;
CPyL23: ;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 227, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL78;
    }
    cpy_r_r36 = CPyDef_checkmember___analyze_type_callable_member_access(cpy_r_name, cpy_r_r35, cpy_r_mx);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 227, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r36;
CPyL26: ;
    cpy_r_r37 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeType))
        cpy_r_r41 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 229, CPyStatic_checkmember___globals, "mypy.types.TypeType", cpy_r_typ);
        goto CPyL80;
    }
    cpy_r_r42 = CPyDef_checkmember___analyze_type_type_member_access(cpy_r_name, cpy_r_r41, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 229, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r42;
CPyL30: ;
    cpy_r_r43 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TupleType))
        cpy_r_r47 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 232, CPyStatic_checkmember___globals, "mypy.types.TupleType", cpy_r_typ);
        goto CPyL80;
    }
    cpy_r_r48 = CPyDef_typeops___tuple_fallback(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 232, CPyStatic_checkmember___globals);
        goto CPyL80;
    }
    cpy_r_r49 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r48, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 232, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r49;
CPyL35: ;
    cpy_r_r50 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL37;
    cpy_r_r54 = cpy_r_r53;
    goto CPyL41;
CPyL37: ;
    cpy_r_r55 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL39;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL40;
CPyL39: ;
    cpy_r_r60 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    cpy_r_r59 = cpy_r_r63;
CPyL40: ;
    cpy_r_r54 = cpy_r_r59;
CPyL41: ;
    if (!cpy_r_r54) goto CPyL51;
    if (Py_TYPE(cpy_r_typ) == CPyType_types___LiteralType)
        cpy_r_r64 = cpy_r_typ;
    else {
        cpy_r_r64 = NULL;
    }
    if (cpy_r_r64 != NULL) goto __LL1408;
    if ((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded))
        cpy_r_r64 = cpy_r_typ;
    else {
        cpy_r_r64 = NULL;
    }
    if (cpy_r_r64 != NULL) goto __LL1408;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 235, CPyStatic_checkmember___globals, "union[mypy.types.LiteralType, mypy.types.FunctionLike]", cpy_r_typ);
    goto CPyL80;
__LL1408: ;
    cpy_r_r65 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r64)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_types___LiteralType))
        cpy_r_r69 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 235, CPyStatic_checkmember___globals, "mypy.types.LiteralType", cpy_r_r64);
        goto CPyL80;
    }
    cpy_r_r70 = ((mypy___types___LiteralTypeObject *)cpy_r_r69)->_fallback;
    CPy_INCREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70;
    goto CPyL49;
CPyL46: ;
    if (likely((Py_TYPE(cpy_r_r64) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r64) == CPyType_types___Overloaded)))
        cpy_r_r72 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 235, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r64);
        goto CPyL80;
    }
    cpy_r_r73 = ((mypy___types___FunctionLikeObject *)cpy_r_r72)->_fallback;
    if (unlikely(cpy_r_r73 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fallback' of 'FunctionLike' undefined");
    } else {
        CPy_INCREF(cpy_r_r73);
    }
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 235, CPyStatic_checkmember___globals);
        goto CPyL80;
    }
CPyL48: ;
    cpy_r_r71 = cpy_r_r73;
CPyL49: ;
    cpy_r_r74 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r71, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 235, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r74;
CPyL51: ;
    cpy_r_r75 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (!cpy_r_r78) goto CPyL55;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypedDictType))
        cpy_r_r79 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 237, CPyStatic_checkmember___globals, "mypy.types.TypedDictType", cpy_r_typ);
        goto CPyL80;
    }
    cpy_r_r80 = CPyDef_checkmember___analyze_typeddict_access(cpy_r_name, cpy_r_r79, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 237, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r80;
CPyL55: ;
    cpy_r_r81 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (cpy_r_r84) {
        goto CPyL85;
    } else
        goto CPyL59;
CPyL56: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___NoneType))
        cpy_r_r85 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 239, CPyStatic_checkmember___globals, "mypy.types.NoneType", cpy_r_typ);
        goto CPyL78;
    }
    cpy_r_r86 = CPyDef_checkmember___analyze_none_member_access(cpy_r_name, cpy_r_r85, cpy_r_mx);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 239, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r86;
CPyL59: ;
    cpy_r_r87 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r88 = CPy_TypeCheck(cpy_r_typ, cpy_r_r87);
    if (!cpy_r_r88) goto CPyL86;
    cpy_r_r89 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (!cpy_r_r92) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r93 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 241, CPyStatic_checkmember___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL83;
    }
    cpy_r_r94 = ((mypy___types___TypeVarTypeObject *)cpy_r_r93)->_values;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r96 = *(int64_t *)cpy_r_r95;
    CPy_DECREF(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 << 1;
    cpy_r_r98 = cpy_r_r97 != 0;
    if (!cpy_r_r98) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r99 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 243, CPyStatic_checkmember___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL83;
    }
    cpy_r_r100 = ((mypy___types___TypeVarTypeObject *)cpy_r_r99)->_values;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r101 = CPY_INT_TAG;
    cpy_r_r102 = CPY_INT_TAG;
    cpy_r_r103 = 2;
    cpy_r_r104 = 2;
    cpy_r_r105 = CPyDef_typeops___make_simplified_union(cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 243, CPyStatic_checkmember___globals);
        goto CPyL80;
    }
    cpy_r_r106 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r105, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 242, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r106;
CPyL67: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___TypeVarLikeType)))
        cpy_r_r107 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 245, CPyStatic_checkmember___globals, "mypy.types.TypeVarLikeType", cpy_r_typ);
        goto CPyL83;
    }
    cpy_r_r108 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_r107)->_upper_bound;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r109 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r108, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 245, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r109;
CPyL70: ;
    cpy_r_r110 = (PyObject *)CPyType_types___DeletedType;
    cpy_r_r111 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r112 = *(PyObject * *)cpy_r_r111;
    cpy_r_r113 = cpy_r_r112 == cpy_r_r110;
    if (!cpy_r_r113) goto CPyL75;
    cpy_r_r114 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r114);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___DeletedType))
        cpy_r_r115 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 247, CPyStatic_checkmember___globals, "mypy.types.DeletedType", cpy_r_typ);
        goto CPyL87;
    }
    cpy_r_r116 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r116);
    cpy_r_r117 = CPyDef_messages___MessageBuilder___deleted_as_rvalue(cpy_r_r114, cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 247, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPyDef_types___AnyType(10, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 248, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r122;
CPyL75: ;
    cpy_r_r123 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r123);
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r124 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "_analyze_member_access", 249, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL88;
    }
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_checkmember___report_missing_attribute(cpy_r_r123, cpy_r_r124, cpy_r_name, cpy_r_mx, cpy_r_r125);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 249, CPyStatic_checkmember___globals);
        goto CPyL78;
    }
    return cpy_r_r126;
CPyL78: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL79: ;
    CPy_INCREF(cpy_r_override_info);
    goto CPyL2;
CPyL80: ;
    CPy_DecRef(cpy_r_override_info);
    goto CPyL78;
CPyL81: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL9;
CPyL82: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL13;
CPyL83: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_override_info);
    goto CPyL78;
CPyL84: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL23;
CPyL85: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL56;
CPyL86: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL70;
CPyL87: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL78;
CPyL88: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL78;
}

PyObject *CPyPy_checkmember____analyze_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOO|O:_analyze_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    PyObject *obj_override_info = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if (obj_override_info == NULL) {
        arg_override_info = NULL;
        goto __LL1409;
    }
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1409;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1409;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1409: ;
    PyObject *retval = CPyDef_checkmember____analyze_member_access(arg_name, arg_typ, arg_mx, arg_override_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "_analyze_member_access", 213, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___may_be_awaitable_attribute(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_local_errors;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_aw_type;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r__;
    char cpy_r_r30;
    char cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    tuple_T3OOO cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    char cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    if (cpy_r_override_info != NULL) goto CPyL66;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_override_info = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r2 = ((mypy___checker___TypeCheckerObject *)cpy_r_r1)->_checking_missing_await;
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "may_be_awaitable_attribute", "TypeChecker", "checking_missing_await", 256, CPyStatic_checkmember___globals);
        goto CPyL67;
    }
CPyL3: ;
    if (cpy_r_r2) {
        goto CPyL68;
    } else
        goto CPyL5;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r3 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[874]; /* 'checking_await_set' */
    PyObject *cpy_r_r5[1] = {cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = PyObject_Type(cpy_r_r7);
    cpy_r_r9 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL70;
    }
    cpy_r_r11 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r7};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL9: ;
    cpy_r_r16 = 1;
    cpy_r_r17 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = NULL;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL73;
    }
    cpy_r_r21 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL74;
    }
    cpy_r_r22 = 1;
    cpy_r_local_errors = cpy_r_r21;
    cpy_r_r23 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_checker___TypeChecker___get_precise_awaitable_type(cpy_r_r23, cpy_r_typ, cpy_r_local_errors);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 260, CPyStatic_checkmember___globals);
        goto CPyL75;
    }
    cpy_r_aw_type = cpy_r_r24;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_aw_type == cpy_r_r25;
    if (cpy_r_r26) {
        goto CPyL76;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r27 = 0;
    goto CPyL28;
CPyL16: ;
    if (likely(cpy_r_aw_type != Py_None))
        cpy_r_r28 = cpy_r_aw_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 263, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_aw_type);
        goto CPyL75;
    }
    cpy_r_r29 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r28, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 263, CPyStatic_checkmember___globals);
        goto CPyL77;
    }
    cpy_r__ = cpy_r_r29;
    CPy_DECREF(cpy_r__);
    cpy_r_r30 = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(cpy_r_local_errors);
    CPy_DECREF(cpy_r_local_errors);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 264, CPyStatic_checkmember___globals);
        goto CPyL20;
    }
    cpy_r_r31 = cpy_r_r30 ^ 1;
    cpy_r_r27 = cpy_r_r31;
    goto CPyL28;
CPyL20: ;
    cpy_r_r32 = CPy_CatchError();
    cpy_r_r22 = 0;
    cpy_r_r33 = CPy_GetExcInfo();
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r33.f2;
    CPy_INCREF(cpy_r_r36);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    cpy_r_r37 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r20, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL25;
    }
    if (cpy_r_r37) goto CPyL24;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL78;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL27;
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) {
        goto CPyL29;
    } else
        goto CPyL79;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r39 = 2;
    cpy_r_r27 = cpy_r_r39;
CPyL28: ;
    tuple_T3OOO __tmp1410 = { NULL, NULL, NULL };
    cpy_r_r40 = __tmp1410;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL30;
CPyL29: ;
    cpy_r_r42 = 2;
    cpy_r_r27 = cpy_r_r42;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r41 = cpy_r_r43;
CPyL30: ;
    if (!cpy_r_r22) goto CPyL80;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r20, cpy_r_r44, cpy_r_r44, cpy_r_r44);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL37;
    }
CPyL32: ;
    if (cpy_r_r41.f0 == NULL) goto CPyL35;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL81;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    if (cpy_r_r27 == 2) goto CPyL49;
    cpy_r_r46 = cpy_r_r27;
    goto CPyL50;
CPyL37: ;
    if (cpy_r_r41.f0 == NULL) goto CPyL39;
    CPy_RestoreExcInfo(cpy_r_r41);
    CPy_XDECREF(cpy_r_r41.f0);
    CPy_XDECREF(cpy_r_r41.f1);
    CPy_XDECREF(cpy_r_r41.f2);
CPyL39: ;
    cpy_r_r47 = CPy_KeepPropagating();
    if (!cpy_r_r47) {
        goto CPyL41;
    } else
        goto CPyL82;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r48 = CPy_CatchError();
    cpy_r_r16 = 0;
    cpy_r_r49 = CPy_GetExcInfo();
    cpy_r_r50 = cpy_r_r49.f0;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = cpy_r_r49.f1;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = cpy_r_r49.f2;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r49.f0);
    CPy_DECREF(cpy_r_r49.f1);
    CPy_DECREF(cpy_r_r49.f2);
    PyObject *cpy_r_r53[4] = {cpy_r_r7, cpy_r_r50, cpy_r_r51, cpy_r_r52};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r54, 4, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = PyObject_IsTrue(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL47;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) goto CPyL46;
    CPy_Reraise();
    if (!0) {
        goto CPyL47;
    } else
        goto CPyL84;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DECREF(cpy_r_r48.f0);
    CPy_DECREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r48.f2);
    goto CPyL49;
CPyL47: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DECREF(cpy_r_r48.f0);
    CPy_DECREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r48.f2);
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) {
        goto CPyL51;
    } else
        goto CPyL85;
CPyL48: ;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r60 = 2;
    cpy_r_r46 = cpy_r_r60;
CPyL50: ;
    tuple_T3OOO __tmp1411 = { NULL, NULL, NULL };
    cpy_r_r61 = __tmp1411;
    cpy_r_r62 = cpy_r_r61;
    goto CPyL52;
CPyL51: ;
    cpy_r_r63 = 2;
    cpy_r_r46 = cpy_r_r63;
    cpy_r_r64 = CPy_CatchError();
    cpy_r_r62 = cpy_r_r64;
CPyL52: ;
    if (!cpy_r_r16) goto CPyL86;
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r66[4] = {cpy_r_r7, cpy_r_r65, cpy_r_r65, cpy_r_r65};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r67, 4, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 259, CPyStatic_checkmember___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL54: ;
    CPy_DECREF(cpy_r_r7);
CPyL55: ;
    if (cpy_r_r62.f0 == NULL) goto CPyL58;
    CPy_Reraise();
    if (!0) {
        goto CPyL60;
    } else
        goto CPyL89;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    if (cpy_r_r46 == 2) goto CPyL64;
    return cpy_r_r46;
CPyL60: ;
    if (cpy_r_r62.f0 == NULL) goto CPyL62;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_XDECREF(cpy_r_r62.f0);
    CPy_XDECREF(cpy_r_r62.f1);
    CPy_XDECREF(cpy_r_r62.f2);
CPyL62: ;
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) goto CPyL65;
    CPy_Unreachable();
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL66: ;
    CPy_INCREF(cpy_r_override_info);
    goto CPyL2;
CPyL67: ;
    CPy_DecRef(cpy_r_override_info);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL4;
CPyL69: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_r3);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL65;
CPyL71: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL65;
CPyL72: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
CPyL73: ;
    CPy_DecRef(cpy_r_override_info);
    goto CPyL41;
CPyL74: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_r20);
    goto CPyL41;
CPyL75: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_local_errors);
    goto CPyL20;
CPyL76: ;
    CPy_DECREF(cpy_r_override_info);
    CPy_DECREF(cpy_r_local_errors);
    CPy_DECREF(cpy_r_aw_type);
    goto CPyL15;
CPyL77: ;
    CPy_DecRef(cpy_r_local_errors);
    goto CPyL20;
CPyL78: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL23;
CPyL79: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r20);
    goto CPyL26;
CPyL80: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL32;
CPyL81: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_XDECREF(cpy_r_r41.f0);
    CPy_XDECREF(cpy_r_r41.f1);
    CPy_XDECREF(cpy_r_r41.f2);
    goto CPyL34;
CPyL82: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL40;
CPyL83: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL47;
CPyL84: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r48.f0);
    CPy_DECREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_r48.f2);
    goto CPyL45;
CPyL85: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL48;
CPyL86: ;
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    goto CPyL55;
CPyL87: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL60;
CPyL88: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL54;
CPyL89: ;
    CPy_XDECREF(cpy_r_r62.f0);
    CPy_XDECREF(cpy_r_r62.f1);
    CPy_XDECREF(cpy_r_r62.f2);
    goto CPyL57;
}

PyObject *CPyPy_checkmember___may_be_awaitable_attribute(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOO|O:may_be_awaitable_attribute", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    PyObject *obj_override_info = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if (obj_override_info == NULL) {
        arg_override_info = NULL;
        goto __LL1412;
    }
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1412;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1412;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1412: ;
    char retval = CPyDef_checkmember___may_be_awaitable_attribute(arg_name, arg_typ, arg_mx, arg_override_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "may_be_awaitable_attribute", 252, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___report_missing_attribute(PyObject *cpy_r_original_type, PyObject *cpy_r_typ, PyObject *cpy_r_name, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_res_type;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    if (cpy_r_override_info != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_override_info = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_module_symbol_table;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_messages___MessageBuilder___has_no_attr(cpy_r_r1, cpy_r_original_type, cpy_r_typ, cpy_r_name, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "report_missing_attribute", 274, CPyStatic_checkmember___globals);
        goto CPyL11;
    }
    cpy_r_res_type = cpy_r_r4;
    cpy_r_r5 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_messages___MessageBuilder___prefer_simple_messages(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "report_missing_attribute", 275, CPyStatic_checkmember___globals);
        goto CPyL12;
    }
    if (cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyDef_checkmember___may_be_awaitable_attribute(cpy_r_name, cpy_r_typ, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_override_info);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "report_missing_attribute", 276, CPyStatic_checkmember___globals);
        goto CPyL14;
    }
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_messages___MessageBuilder___possible_missing_await(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "report_missing_attribute", 277, CPyStatic_checkmember___globals);
        goto CPyL14;
    }
CPyL8: ;
    return cpy_r_res_type;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_INCREF(cpy_r_override_info);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_override_info);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_res_type);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL8;
CPyL14: ;
    CPy_DecRef(cpy_r_res_type);
    goto CPyL9;
}

PyObject *CPyPy_checkmember___report_missing_attribute(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"original_type", "typ", "name", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOOO|O:report_missing_attribute", kwlist, 0};
    PyObject *obj_original_type;
    PyObject *obj_typ;
    PyObject *obj_name;
    PyObject *obj_mx;
    PyObject *obj_override_info = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_original_type, &obj_typ, &obj_name, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_original_type;
    if (likely(PyObject_TypeCheck(obj_original_type, CPyType_types___Type)))
        arg_original_type = obj_original_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_original_type); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if (obj_override_info == NULL) {
        arg_override_info = NULL;
        goto __LL1413;
    }
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1413;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1413;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1413: ;
    PyObject *retval = CPyDef_checkmember___report_missing_attribute(arg_original_type, arg_typ, arg_name, arg_mx, arg_override_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "report_missing_attribute", 267, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_instance_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T2OO cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T2OO cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    tuple_T2OO cpy_r_r74;
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
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_method;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_first_item;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_dispatched_type;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_member_type;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_name, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 288, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_super;
    if (cpy_r_r7) goto CPyL8;
CPyL5: ;
    cpy_r_r8 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[1319]; /* ('Accessing "__init__" on an instance is unsound, since '
                                    'instance.__init__ could be from an incompatible '
                                    'subclass') */
    cpy_r_r10 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_messages___MessageBuilder___fail(cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 291, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPyDef_types___AnyType(10, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 292, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    return cpy_r_r20;
CPyL8: ;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_info = cpy_r_r21;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_override_info != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL14;
    CPy_INCREF(cpy_r_override_info);
    if (likely(cpy_r_override_info != Py_None))
        cpy_r_r24 = cpy_r_override_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 286, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_override_info);
        goto CPyL97;
    }
    cpy_r_r25 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 286, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    if (cpy_r_r25) {
        goto CPyL98;
    } else
        goto CPyL14;
CPyL12: ;
    CPy_INCREF(cpy_r_override_info);
    if (likely(cpy_r_override_info != Py_None))
        cpy_r_r26 = cpy_r_override_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 298, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_override_info);
        goto CPyL96;
    }
    cpy_r_info = cpy_r_r26;
CPyL14: ;
    cpy_r_r27 = CPyStatic_checkmember___globals;
    cpy_r_r28 = CPyStatics[1019]; /* 'state' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 301, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_r30 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 301, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r31) && PyTuple_GET_SIZE(cpy_r_r31) == 2))) {
        cpy_r_r32 = NULL;
        goto __LL1415;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r31, 0))))
        cpy_r_r32 = PyTuple_GET_ITEM(cpy_r_r31, 0);
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 == NULL) goto __LL1415;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r31, 1))))
        cpy_r_r32 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 == NULL) goto __LL1415;
    cpy_r_r32 = cpy_r_r31;
__LL1415: ;
    if (cpy_r_r32 != NULL) goto __LL1414;
    if (cpy_r_r31 == Py_None)
        cpy_r_r32 = cpy_r_r31;
    else {
        cpy_r_r32 = NULL;
    }
    if (cpy_r_r32 != NULL) goto __LL1414;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 301, CPyStatic_checkmember___globals, "tuple[str, str] or None", cpy_r_r31);
    goto CPyL97;
__LL1414: ;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_r32 != cpy_r_r33;
    if (!cpy_r_r34) goto CPyL99;
    PyObject *__tmp1416;
    if (unlikely(!(PyTuple_Check(cpy_r_r32) && PyTuple_GET_SIZE(cpy_r_r32) == 2))) {
        __tmp1416 = NULL;
        goto __LL1417;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r32, 0))))
        __tmp1416 = PyTuple_GET_ITEM(cpy_r_r32, 0);
    else {
        __tmp1416 = NULL;
    }
    if (__tmp1416 == NULL) goto __LL1417;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r32, 1))))
        __tmp1416 = PyTuple_GET_ITEM(cpy_r_r32, 1);
    else {
        __tmp1416 = NULL;
    }
    if (__tmp1416 == NULL) goto __LL1417;
    __tmp1416 = cpy_r_r32;
__LL1417: ;
    if (unlikely(__tmp1416 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r32); cpy_r_r35 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1418 = PyTuple_GET_ITEM(cpy_r_r32, 0);
        CPy_INCREF(__tmp1418);
        PyObject *__tmp1419;
        if (likely(PyUnicode_Check(__tmp1418)))
            __tmp1419 = __tmp1418;
        else {
            CPy_TypeError("str", __tmp1418); 
            __tmp1419 = NULL;
        }
        cpy_r_r35.f0 = __tmp1419;
        PyObject *__tmp1420 = PyTuple_GET_ITEM(cpy_r_r32, 1);
        CPy_INCREF(__tmp1420);
        PyObject *__tmp1421;
        if (likely(PyUnicode_Check(__tmp1420)))
            __tmp1421 = __tmp1420;
        else {
            CPy_TypeError("str", __tmp1420); 
            __tmp1421 = NULL;
        }
        cpy_r_r35.f1 = __tmp1421;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 301, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1422 = cpy_r_r35.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp1422);
    PyObject *__tmp1423 = cpy_r_r35.f1;
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp1423);
    cpy_r_r37 = PyObject_IsTrue(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 301, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_r39 = cpy_r_r37;
    if (!cpy_r_r39) goto CPyL47;
    cpy_r_r40 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 302, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
CPyL22: ;
    cpy_r_r41 = CPyStatic_checkmember___globals;
    cpy_r_r42 = CPyStatics[1019]; /* 'state' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 302, CPyStatic_checkmember___globals);
        goto CPyL100;
    }
    cpy_r_r44 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 302, CPyStatic_checkmember___globals);
        goto CPyL100;
    }
    PyObject *__tmp1424;
    if (unlikely(!(PyTuple_Check(cpy_r_r45) && PyTuple_GET_SIZE(cpy_r_r45) == 2))) {
        __tmp1424 = NULL;
        goto __LL1425;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r45, 0))))
        __tmp1424 = PyTuple_GET_ITEM(cpy_r_r45, 0);
    else {
        __tmp1424 = NULL;
    }
    if (__tmp1424 == NULL) goto __LL1425;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r45, 1))))
        __tmp1424 = PyTuple_GET_ITEM(cpy_r_r45, 1);
    else {
        __tmp1424 = NULL;
    }
    if (__tmp1424 == NULL) goto __LL1425;
    __tmp1424 = cpy_r_r45;
__LL1425: ;
    if (unlikely(__tmp1424 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r45); cpy_r_r46 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1426 = PyTuple_GET_ITEM(cpy_r_r45, 0);
        CPy_INCREF(__tmp1426);
        PyObject *__tmp1427;
        if (likely(PyUnicode_Check(__tmp1426)))
            __tmp1427 = __tmp1426;
        else {
            CPy_TypeError("str", __tmp1426); 
            __tmp1427 = NULL;
        }
        cpy_r_r46.f0 = __tmp1427;
        PyObject *__tmp1428 = PyTuple_GET_ITEM(cpy_r_r45, 1);
        CPy_INCREF(__tmp1428);
        PyObject *__tmp1429;
        if (likely(PyUnicode_Check(__tmp1428)))
            __tmp1429 = __tmp1428;
        else {
            CPy_TypeError("str", __tmp1428); 
            __tmp1429 = NULL;
        }
        cpy_r_r46.f1 = __tmp1429;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 302, CPyStatic_checkmember___globals);
        goto CPyL100;
    }
    cpy_r_r47 = cpy_r_r46.f0;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46.f0);
    CPy_DECREF(cpy_r_r46.f1);
    cpy_r_r48 = PyUnicode_Compare(cpy_r_r40, cpy_r_r47);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL28;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL28;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 302, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
CPyL28: ;
    cpy_r_r53 = cpy_r_r48 == 0;
    if (!cpy_r_r53) goto CPyL47;
    cpy_r_r54 = CPyStatic_checkmember___globals;
    cpy_r_r55 = CPyStatics[1019]; /* 'state' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 303, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_r57 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 303, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    PyObject *__tmp1430;
    if (unlikely(!(PyTuple_Check(cpy_r_r58) && PyTuple_GET_SIZE(cpy_r_r58) == 2))) {
        __tmp1430 = NULL;
        goto __LL1431;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r58, 0))))
        __tmp1430 = PyTuple_GET_ITEM(cpy_r_r58, 0);
    else {
        __tmp1430 = NULL;
    }
    if (__tmp1430 == NULL) goto __LL1431;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r58, 1))))
        __tmp1430 = PyTuple_GET_ITEM(cpy_r_r58, 1);
    else {
        __tmp1430 = NULL;
    }
    if (__tmp1430 == NULL) goto __LL1431;
    __tmp1430 = cpy_r_r58;
__LL1431: ;
    if (unlikely(__tmp1430 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r58); cpy_r_r59 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1432 = PyTuple_GET_ITEM(cpy_r_r58, 0);
        CPy_INCREF(__tmp1432);
        PyObject *__tmp1433;
        if (likely(PyUnicode_Check(__tmp1432)))
            __tmp1433 = __tmp1432;
        else {
            CPy_TypeError("str", __tmp1432); 
            __tmp1433 = NULL;
        }
        cpy_r_r59.f0 = __tmp1433;
        PyObject *__tmp1434 = PyTuple_GET_ITEM(cpy_r_r58, 1);
        CPy_INCREF(__tmp1434);
        PyObject *__tmp1435;
        if (likely(PyUnicode_Check(__tmp1434)))
            __tmp1435 = __tmp1434;
        else {
            CPy_TypeError("str", __tmp1434); 
            __tmp1435 = NULL;
        }
        cpy_r_r59.f1 = __tmp1435;
    }
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 303, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_r60 = cpy_r_r59.f1;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r59.f0);
    CPy_DECREF(cpy_r_r59.f1);
    cpy_r_r61 = PyUnicode_Compare(cpy_r_name, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL35;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL35;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 303, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
CPyL35: ;
    cpy_r_r66 = cpy_r_r61 == 0;
    if (!cpy_r_r66) goto CPyL47;
    cpy_r_r67 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyStatics[1321]; /* "Occurrence of '{}.{}'" */
    cpy_r_r69 = CPyStatic_checkmember___globals;
    cpy_r_r70 = CPyStatics[1019]; /* 'state' */
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 305, CPyStatic_checkmember___globals);
        goto CPyL101;
    }
    cpy_r_r72 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 305, CPyStatic_checkmember___globals);
        goto CPyL101;
    }
    PyObject *__tmp1436;
    if (unlikely(!(PyTuple_Check(cpy_r_r73) && PyTuple_GET_SIZE(cpy_r_r73) == 2))) {
        __tmp1436 = NULL;
        goto __LL1437;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r73, 0))))
        __tmp1436 = PyTuple_GET_ITEM(cpy_r_r73, 0);
    else {
        __tmp1436 = NULL;
    }
    if (__tmp1436 == NULL) goto __LL1437;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r73, 1))))
        __tmp1436 = PyTuple_GET_ITEM(cpy_r_r73, 1);
    else {
        __tmp1436 = NULL;
    }
    if (__tmp1436 == NULL) goto __LL1437;
    __tmp1436 = cpy_r_r73;
__LL1437: ;
    if (unlikely(__tmp1436 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r73); cpy_r_r74 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1438 = PyTuple_GET_ITEM(cpy_r_r73, 0);
        CPy_INCREF(__tmp1438);
        PyObject *__tmp1439;
        if (likely(PyUnicode_Check(__tmp1438)))
            __tmp1439 = __tmp1438;
        else {
            CPy_TypeError("str", __tmp1438); 
            __tmp1439 = NULL;
        }
        cpy_r_r74.f0 = __tmp1439;
        PyObject *__tmp1440 = PyTuple_GET_ITEM(cpy_r_r73, 1);
        CPy_INCREF(__tmp1440);
        PyObject *__tmp1441;
        if (likely(PyUnicode_Check(__tmp1440)))
            __tmp1441 = __tmp1440;
        else {
            CPy_TypeError("str", __tmp1440); 
            __tmp1441 = NULL;
        }
        cpy_r_r74.f1 = __tmp1441;
    }
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 305, CPyStatic_checkmember___globals);
        goto CPyL101;
    }
    cpy_r_r75 = CPyStatics[193]; /* 'format' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL102;
    }
    cpy_r_r77 = PyList_New(0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL103;
    }
    cpy_r_r78 = PyTuple_New(2);
    if (unlikely(cpy_r_r78 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1442 = cpy_r_r74.f0;
    PyTuple_SET_ITEM(cpy_r_r78, 0, __tmp1442);
    PyObject *__tmp1443 = cpy_r_r74.f1;
    PyTuple_SET_ITEM(cpy_r_r78, 1, __tmp1443);
    cpy_r_r79 = CPyList_Extend(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL104;
    } else
        goto CPyL105;
CPyL42: ;
    cpy_r_r80 = PyList_AsTuple(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL106;
    }
    cpy_r_r81 = PyDict_New();
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL107;
    }
    cpy_r_r82 = PyObject_Call(cpy_r_r76, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", -1, CPyStatic_checkmember___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 305, CPyStatic_checkmember___globals, "str", cpy_r_r82);
        goto CPyL101;
    }
    cpy_r_r84 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPY_INT_TAG;
    cpy_r_r88 = 2;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_messages___MessageBuilder___note(cpy_r_r67, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 305, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
CPyL47: ;
    cpy_r_r92 = CPyDef_nodes___TypeInfo___get_method(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 308, CPyStatic_checkmember___globals);
        goto CPyL97;
    }
    cpy_r_method = cpy_r_r92;
    cpy_r_r93 = PyObject_IsTrue(cpy_r_method);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 308, CPyStatic_checkmember___globals);
        goto CPyL108;
    }
    cpy_r_r95 = cpy_r_r93;
    if (!cpy_r_r95) goto CPyL109;
    cpy_r_r96 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (cpy_r_r99) goto CPyL109;
    cpy_r_r100 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_super;
    if (!cpy_r_r100) goto CPyL54;
CPyL52: ;
    CPy_INCREF(cpy_r_method);
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r101 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 311, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL108;
    }
    cpy_r_r102 = CPyDef_checkmember___validate_super_call(cpy_r_r101, cpy_r_mx);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 311, CPyStatic_checkmember___globals);
        goto CPyL108;
    }
CPyL54: ;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r103 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 313, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL108;
    }
    cpy_r_r104 = ((mypy___nodes___FuncBaseObject *)cpy_r_r103)->_is_property;
    if (!cpy_r_r104) goto CPyL110;
CPyL56: ;
    cpy_r_r105 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r106 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r107 = *(PyObject * *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 == cpy_r_r105;
    if (cpy_r_r108) {
        goto CPyL59;
    } else
        goto CPyL111;
CPyL57: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r109 = 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 314, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r110 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 315, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_method);
        goto CPyL108;
    }
    cpy_r_r111 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r110)->_items;
    cpy_r_r112 = CPyList_GetItemShort(cpy_r_r111, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 315, CPyStatic_checkmember___globals);
        goto CPyL108;
    }
    if (Py_TYPE(cpy_r_r112) == CPyType_nodes___FuncDef)
        cpy_r_r113 = cpy_r_r112;
    else {
        cpy_r_r113 = NULL;
    }
    if (cpy_r_r113 != NULL) goto __LL1444;
    if (Py_TYPE(cpy_r_r112) == CPyType_nodes___Decorator)
        cpy_r_r113 = cpy_r_r112;
    else {
        cpy_r_r113 = NULL;
    }
    if (cpy_r_r113 != NULL) goto __LL1444;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 315, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r112);
    goto CPyL108;
__LL1444: ;
    CPy_DECREF(cpy_r_method);
    cpy_r_first_item = cpy_r_r113;
    cpy_r_r114 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_first_item)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    if (cpy_r_r117) {
        goto CPyL65;
    } else
        goto CPyL112;
CPyL63: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 316, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL65: ;
    if (likely(Py_TYPE(cpy_r_first_item) == CPyType_nodes___Decorator))
        cpy_r_r119 = cpy_r_first_item;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 317, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_first_item);
        goto CPyL113;
    }
    cpy_r_r120 = ((mypy___nodes___DecoratorObject *)cpy_r_r119)->_var;
    CPy_INCREF(cpy_r_r120);
    CPy_DECREF(cpy_r_first_item);
    cpy_r_r121 = 2;
    cpy_r_r122 = CPyDef_checkmember___analyze_var(cpy_r_name, cpy_r_r120, cpy_r_typ, cpy_r_info, cpy_r_mx, cpy_r_r121);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 317, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    return cpy_r_r122;
CPyL68: ;
    cpy_r_r123 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r123) goto CPyL70;
CPyL69: ;
    cpy_r_r124 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r124);
    cpy_r_r125 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r125);
    cpy_r_r126 = CPyDef_messages___MessageBuilder___cant_assign_to_method(cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 319, CPyStatic_checkmember___globals);
        goto CPyL114;
    }
CPyL70: ;
    CPy_INCREF(cpy_r_method);
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r127 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 320, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL114;
    }
    cpy_r_r128 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r129 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 320, CPyStatic_checkmember___globals);
        goto CPyL115;
    }
    cpy_r_r130 = CPyDef_typeops___function_type(cpy_r_r127, cpy_r_r129);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 320, CPyStatic_checkmember___globals);
        goto CPyL114;
    }
    cpy_r_signature = cpy_r_r130;
    cpy_r_r131 = CPyDef_expandtype___freshen_all_functions_type_vars(cpy_r_signature);
    CPy_DECREF(cpy_r_signature);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 321, CPyStatic_checkmember___globals);
        goto CPyL114;
    }
    if (likely((Py_TYPE(cpy_r_r131) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r131) == CPyType_types___Overloaded)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 321, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r131);
        goto CPyL114;
    }
    cpy_r_signature = cpy_r_r132;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r133 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 322, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL116;
    }
    cpy_r_r134 = ((mypy___nodes___FuncBaseObject *)cpy_r_r133)->_is_static;
    if (cpy_r_r134) goto CPyL88;
CPyL77: ;
    cpy_r_r135 = CPyStatics[706]; /* '__call__' */
    cpy_r_r136 = PyUnicode_Compare(cpy_r_name, cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 == -1;
    if (!cpy_r_r137) goto CPyL80;
    cpy_r_r138 = PyErr_Occurred();
    cpy_r_r139 = cpy_r_r138 != NULL;
    if (!cpy_r_r139) goto CPyL80;
    cpy_r_r140 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 323, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
CPyL80: ;
    cpy_r_r141 = cpy_r_r136 != 0;
    if (!cpy_r_r141) goto CPyL85;
    cpy_r_r142 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r142);
    cpy_r_r143 = CPyDef_meet___meet_types(cpy_r_r142, cpy_r_typ);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 326, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    cpy_r_dispatched_type = cpy_r_r143;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r144 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 328, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL117;
    }
    cpy_r_r145 = ((mypy___nodes___FuncBaseObject *)cpy_r_r144)->_is_class;
    cpy_r_r146 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = CPyDef_checkmember___check_self_arg(cpy_r_signature, cpy_r_dispatched_type, cpy_r_r145, cpy_r_r146, cpy_r_name, cpy_r_r147);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_dispatched_type);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 327, CPyStatic_checkmember___globals);
        goto CPyL114;
    }
    cpy_r_signature = cpy_r_r148;
CPyL85: ;
    cpy_r_r149 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r149);
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r150 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 330, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL118;
    }
    cpy_r_r151 = ((mypy___nodes___FuncBaseObject *)cpy_r_r150)->_is_class;
    cpy_r_r152 = CPyDef_typeops___bind_self(cpy_r_signature, cpy_r_r149, cpy_r_r151);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 330, CPyStatic_checkmember___globals);
        goto CPyL114;
    }
    cpy_r_signature = cpy_r_r152;
CPyL88: ;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r153 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 333, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL116;
    }
    cpy_r_r154 = ((mypy___nodes___FuncBaseObject *)cpy_r_r153)->_info;
    CPy_INCREF(cpy_r_r154);
    CPy_DECREF(cpy_r_method);
    cpy_r_r155 = CPyDef_maptype___map_instance_to_supertype(cpy_r_typ, cpy_r_r154);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 333, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    cpy_r_typ = cpy_r_r155;
    cpy_r_r156 = CPyDef_expandtype___expand_type_by_instance(cpy_r_signature, cpy_r_typ);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 334, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r156, CPyType_types___ProperType)))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_instance_member_access", 334, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r156);
        goto CPyL96;
    }
    cpy_r_member_type = cpy_r_r157;
    cpy_r_r158 = CPyDef_checkmember___freeze_all_type_vars(cpy_r_member_type);
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 335, CPyStatic_checkmember___globals);
        goto CPyL120;
    }
    return cpy_r_member_type;
CPyL94: ;
    cpy_r_r159 = CPyDef_checkmember___analyze_member_var_access(cpy_r_name, cpy_r_typ, cpy_r_info, cpy_r_mx);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 339, CPyStatic_checkmember___globals);
        goto CPyL96;
    }
    return cpy_r_r159;
CPyL96: ;
    cpy_r_r160 = NULL;
    return cpy_r_r160;
CPyL97: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL96;
CPyL98: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL12;
CPyL99: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL47;
CPyL100: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r40);
    goto CPyL96;
CPyL101: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r76);
    goto CPyL96;
CPyL104: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r77);
    goto CPyL96;
CPyL105: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL42;
CPyL106: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r76);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r80);
    goto CPyL96;
CPyL108: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_method);
    goto CPyL96;
CPyL109: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL94;
CPyL110: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL68;
CPyL111: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_method);
    goto CPyL57;
CPyL112: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_first_item);
    goto CPyL63;
CPyL113: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_first_item);
    goto CPyL96;
CPyL114: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL96;
CPyL115: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_r127);
    goto CPyL96;
CPyL116: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_signature);
    goto CPyL96;
CPyL117: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_dispatched_type);
    goto CPyL96;
CPyL118: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_signature);
    CPy_DecRef(cpy_r_r149);
    goto CPyL96;
CPyL119: ;
    CPy_DecRef(cpy_r_signature);
    goto CPyL96;
CPyL120: ;
    CPy_DecRef(cpy_r_member_type);
    goto CPyL96;
}

PyObject *CPyPy_checkmember___analyze_instance_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_instance_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    PyObject *obj_override_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1445;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1445;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1445: ;
    PyObject *retval = CPyDef_checkmember___analyze_instance_member_access(arg_name, arg_typ, arg_mx, arg_override_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_instance_member_access", 285, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___validate_super_call(PyObject *cpy_r_node, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_impl;
    char cpy_r_unsafe_super;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_ret_type;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    cpy_r_r0 = NULL;
    cpy_r_impl = cpy_r_r0;
    cpy_r_unsafe_super = 0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r5 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 344, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL46;
    }
    cpy_r_r6 = ((mypy___nodes___FuncDefObject *)cpy_r_r5)->_is_trivial_body;
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "validate_super_call", "FuncDef", "is_trivial_body", 344, CPyStatic_checkmember___globals);
        goto CPyL46;
    }
CPyL3: ;
    if (cpy_r_r6) {
        goto CPyL47;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_unsafe_super = 1;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r7 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 346, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_impl = cpy_r_r7;
    goto CPyL20;
CPyL6: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r12 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 348, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL46;
    }
    cpy_r_r13 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r12)->_impl;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 348, CPyStatic_checkmember___globals);
        goto CPyL46;
    }
    cpy_r_r16 = cpy_r_r14;
    if (cpy_r_r16) {
        goto CPyL48;
    } else
        goto CPyL20;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r17 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 349, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_r18 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r17)->_impl;
    cpy_r_r19 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r23 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 349, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_r24 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r23)->_impl;
    CPy_INCREF(cpy_r_r24);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___FuncDef))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 349, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_r24);
        goto CPyL45;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL18;
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r27 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 349, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL45;
    }
    cpy_r_r28 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r27)->_impl;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___Decorator))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 349, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r28);
        goto CPyL45;
    }
    cpy_r_r30 = ((mypy___nodes___DecoratorObject *)cpy_r_r29)->_func;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r26 = cpy_r_r30;
CPyL18: ;
    cpy_r_impl = cpy_r_r26;
    cpy_r_r31 = ((mypy___nodes___FuncDefObject *)cpy_r_impl)->_is_trivial_body;
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "validate_super_call", "FuncDef", "is_trivial_body", 350, CPyStatic_checkmember___globals);
        goto CPyL49;
    }
CPyL19: ;
    cpy_r_unsafe_super = cpy_r_r31;
CPyL20: ;
    if (!cpy_r_unsafe_super) goto CPyL50;
    if (cpy_r_impl != NULL) goto CPyL24;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"impl\" referenced before assignment");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 354, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r33 = ((mypy___nodes___FuncDefObject *)cpy_r_impl)->_type;
    cpy_r_r34 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (cpy_r_impl != NULL) goto CPyL27;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"impl\" referenced before assignment");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", -1, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL27: ;
    if (!cpy_r_r37) goto CPyL51;
    if (cpy_r_impl != NULL) goto CPyL31;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"impl\" referenced before assignment");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 353, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r40 = ((mypy___nodes___FuncDefObject *)cpy_r_impl)->_type;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_types___CallableType))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "validate_super_call", 353, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r40);
        goto CPyL46;
    }
    cpy_r_r42 = ((mypy___types___CallableTypeObject *)cpy_r_r41)->_ret_type;
    CPy_INCREF(cpy_r_r42);
    if (cpy_r_impl == NULL) {
        goto CPyL52;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"impl\" referenced before assignment");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", -1, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL35: ;
    CPy_XDECREF(cpy_r_impl);
    cpy_r_r44 = cpy_r_r42;
    goto CPyL38;
CPyL36: ;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_types___AnyType(2, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 355, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    cpy_r_r44 = cpy_r_r49;
CPyL38: ;
    cpy_r_ret_type = cpy_r_r44;
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPyDef_types___NoneType(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 357, CPyStatic_checkmember___globals);
        goto CPyL53;
    }
    cpy_r_r53 = NULL;
    cpy_r_r54 = 2;
    cpy_r_r55 = 2;
    cpy_r_r56 = 2;
    cpy_r_r57 = 2;
    cpy_r_r58 = 2;
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_subtypes___is_subtype(cpy_r_r52, cpy_r_ret_type, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_ret_type);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 357, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    if (cpy_r_r60) goto CPyL44;
    cpy_r_r61 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___FuncBase, 6, mypy___nodes___FuncBaseObject, PyObject *); /* name */
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 358, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
CPyL42: ;
    cpy_r_r63 = ((mypy___nodes___FuncBaseObject *)cpy_r_node)->_info;
    cpy_r_r64 = CPY_GET_ATTR(cpy_r_r63, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 358, CPyStatic_checkmember___globals);
        goto CPyL55;
    }
CPyL43: ;
    cpy_r_r65 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyDef_messages___MessageBuilder___unsafe_super(cpy_r_r61, cpy_r_r62, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 358, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
CPyL44: ;
    return 1;
CPyL45: ;
    cpy_r_r67 = 2;
    return cpy_r_r67;
CPyL46: ;
    CPy_XDecRef(cpy_r_impl);
    goto CPyL45;
CPyL47: ;
    CPy_XDECREF(cpy_r_impl);
    goto CPyL4;
CPyL48: ;
    CPy_XDECREF(cpy_r_impl);
    goto CPyL10;
CPyL49: ;
    CPy_DecRef(cpy_r_impl);
    goto CPyL45;
CPyL50: ;
    CPy_XDECREF(cpy_r_impl);
    goto CPyL44;
CPyL51: ;
    CPy_XDECREF(cpy_r_impl);
    goto CPyL36;
CPyL52: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL33;
CPyL53: ;
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL45;
CPyL54: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL45;
}

PyObject *CPyPy_checkmember___validate_super_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", "mx", 0};
    static CPyArg_Parser parser = {"OO:validate_super_call", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_node;
    if (likely((Py_TYPE(obj_node) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_node) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncBase", obj_node); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    char retval = CPyDef_checkmember___validate_super_call(arg_node, arg_mx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "validate_super_call", 342, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_type_callable_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
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
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_typ, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 364, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_r0, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 364, CPyStatic_checkmember___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_types___CallableType))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 364, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r1);
        goto CPyL39;
    }
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_r2)->_ret_type;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    cpy_r_ret_type = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r5 = CPy_TypeCheck(cpy_r_ret_type, cpy_r_r4);
    if (cpy_r_r5) {
        goto CPyL6;
    } else
        goto CPyL40;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 365, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r7 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___TupleType))
        cpy_r_r11 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 367, CPyStatic_checkmember___globals, "mypy.types.TupleType", cpy_r_ret_type);
        goto CPyL38;
    }
    cpy_r_r12 = CPyDef_typeops___tuple_fallback(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 367, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    cpy_r_ret_type = cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___TypedDictType))
        cpy_r_r17 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 369, CPyStatic_checkmember___globals, "mypy.types.TypedDictType", cpy_r_ret_type);
        goto CPyL41;
    }
    cpy_r_r18 = ((mypy___types___TypedDictTypeObject *)cpy_r_r17)->_fallback;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_ret_type = cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = (PyObject *)CPyType_types___Instance;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL27;
    cpy_r_r23 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_operator;
    if (cpy_r_r23) goto CPyL42;
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___Instance))
        cpy_r_r24 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 387, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_ret_type);
        goto CPyL38;
    }
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_typ, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 387, CPyStatic_checkmember___globals);
        goto CPyL43;
    }
CPyL17: ;
    cpy_r_r26 = CPyList_GetItemShortBorrow(cpy_r_r25, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 387, CPyStatic_checkmember___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_types___CallableType))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 387, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r26);
        goto CPyL44;
    }
    cpy_r_r28 = ((mypy___types___CallableTypeObject *)cpy_r_r27)->_variables;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r29 = ((mypy___types___FunctionLikeObject *)cpy_r_typ)->_fallback;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_callable_member_access", "FunctionLike", "fallback", 387, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r29);
CPyL20: ;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_checkmember___analyze_class_attribute_access(cpy_r_r24, cpy_r_name, cpy_r_mx, cpy_r_r29, cpy_r_r30, cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 386, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    cpy_r_result = cpy_r_r31;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_result != cpy_r_r32;
    if (!cpy_r_r33) goto CPyL46;
    if (likely(cpy_r_result != Py_None))
        cpy_r_r34 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 390, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_result);
        goto CPyL38;
    }
    return cpy_r_r34;
CPyL24: ;
    cpy_r_r35 = ((mypy___types___FunctionLikeObject *)cpy_r_typ)->_fallback;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_callable_member_access", "FunctionLike", "fallback", 392, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r35);
CPyL25: ;
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r35, cpy_r_mx, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 392, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    return cpy_r_r37;
CPyL27: ;
    if (0) goto CPyL47;
    cpy_r_r38 = CPyStatics[163]; /* '' */
    cpy_r_r39 = CPyStatics[1322]; /* 'Unexpected type ' */
    cpy_r_r40 = CPyStatics[353]; /* '{!r:{}}' */
    if (likely(PyObject_TypeCheck(cpy_r_ret_type, CPyType_types___ProperType)))
        cpy_r_r41 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_ret_type);
        goto CPyL38;
    }
    cpy_r_r42 = CPyStatics[163]; /* '' */
    cpy_r_r43 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r44[3] = {cpy_r_r40, cpy_r_r41, cpy_r_r42};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_VectorcallMethod(cpy_r_r43, cpy_r_r45, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r41);
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals, "str", cpy_r_r46);
        goto CPyL38;
    }
    cpy_r_r48 = PyList_New(2);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL49;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    CPy_INCREF(cpy_r_r39);
    *(PyObject * *)cpy_r_r50 = cpy_r_r39;
    cpy_r_r51 = cpy_r_r50 + 8;
    *(PyObject * *)cpy_r_r51 = cpy_r_r47;
    cpy_r_r52 = PyUnicode_Join(cpy_r_r38, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    cpy_r_r53 = CPyModule_builtins;
    cpy_r_r54 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r52);
    CPy_Raise(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 394, CPyStatic_checkmember___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL4;
CPyL41: ;
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL24;
CPyL43: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    goto CPyL38;
CPyL46: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL24;
CPyL47: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL37;
CPyL48: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL38;
CPyL50: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL38;
}

PyObject *CPyPy_checkmember___analyze_type_callable_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", 0};
    static CPyArg_Parser parser = {"OOO:analyze_type_callable_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_types___CallableType) || (Py_TYPE(obj_typ) == CPyType_types___Overloaded)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.FunctionLike", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_type_callable_member_access(arg_name, arg_typ, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_type_callable_member_access", 361, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_type_type_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_upper_bound;
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
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    tuple_T3OOO cpy_r_r88;
    tuple_T3OOO cpy_r_r89;
    PyObject *cpy_r_r90;
    tuple_T3OOO cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_ignore_messages;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyPtr cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    tuple_T3OOO cpy_r_r172;
    tuple_T3OOO cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    tuple_T3OOO cpy_r_r180;
    tuple_T3OOO cpy_r_r181;
    PyObject *cpy_r_r182;
    tuple_T3OOO cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_item = cpy_r_r0;
    cpy_r_r1 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r2 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 402, CPyStatic_checkmember___globals);
        goto CPyL145;
    }
    cpy_r_fallback = cpy_r_r2;
    cpy_r_r3 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r4 = (PyObject *)CPyType_types___Instance;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) {
        goto CPyL146;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r8 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 404, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r8);
        goto CPyL147;
    }
    cpy_r_item = cpy_r_r9;
    goto CPyL95;
CPyL4: ;
    cpy_r_r10 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r11 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL31;
    cpy_r_r15 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = NULL;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 406, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    cpy_r_r19 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 406, CPyStatic_checkmember___globals);
        goto CPyL149;
    } else
        goto CPyL150;
CPyL7: ;
    cpy_r_r20 = 1;
    cpy_r_r21 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_fallback, cpy_r_mx, cpy_r_override_info);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 407, CPyStatic_checkmember___globals);
        goto CPyL10;
    }
    cpy_r_r22 = cpy_r_r21;
    goto CPyL18;
CPyL10: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r20 = 0;
    cpy_r_r24 = CPy_GetExcInfo();
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r24.f1;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r24.f2;
    CPy_INCREF(cpy_r_r27);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    cpy_r_r28 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r18, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 406, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    if (cpy_r_r28) goto CPyL14;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL151;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL17;
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) {
        goto CPyL19;
    } else
        goto CPyL152;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r30 = NULL;
    cpy_r_r22 = cpy_r_r30;
CPyL18: ;
    tuple_T3OOO __tmp1446 = { NULL, NULL, NULL };
    cpy_r_r31 = __tmp1446;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL20;
CPyL19: ;
    cpy_r_r33 = NULL;
    cpy_r_r22 = cpy_r_r33;
    cpy_r_r34 = CPy_CatchError();
    cpy_r_r32 = cpy_r_r34;
CPyL20: ;
    if (!cpy_r_r20) goto CPyL153;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r18, cpy_r_r35, cpy_r_r35, cpy_r_r35);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 406, CPyStatic_checkmember___globals);
        goto CPyL154;
    }
CPyL22: ;
    if (cpy_r_r32.f0 == NULL) {
        goto CPyL25;
    } else
        goto CPyL155;
CPyL23: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL156;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    if (cpy_r_r22 == NULL) {
        goto CPyL95;
    } else
        goto CPyL157;
CPyL26: ;
    return cpy_r_r22;
CPyL27: ;
    if (cpy_r_r32.f0 == NULL) goto CPyL29;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_XDECREF(cpy_r_r32.f0);
    CPy_XDECREF(cpy_r_r32.f1);
    CPy_XDECREF(cpy_r_r32.f2);
CPyL29: ;
    cpy_r_r37 = CPy_KeepPropagating();
    if (!cpy_r_r37) goto CPyL144;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r38 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r39 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL74;
    cpy_r_r43 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_types___TypeVarType))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 409, CPyStatic_checkmember___globals, "mypy.types.TypeVarType", cpy_r_r43);
        goto CPyL148;
    }
    cpy_r_r45 = ((mypy___types___TypeVarTypeObject *)cpy_r_r44)->_upper_bound;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPyDef_types___get_proper_type(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 409, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    if (likely(cpy_r_r46 != Py_None))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 409, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r46);
        goto CPyL148;
    }
    cpy_r_upper_bound = cpy_r_r47;
    cpy_r_r48 = (PyObject *)CPyType_types___Instance;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_upper_bound)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (cpy_r_r51) {
        goto CPyL158;
    } else
        goto CPyL38;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_upper_bound) == CPyType_types___Instance))
        cpy_r_r52 = cpy_r_upper_bound;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 411, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_upper_bound);
        goto CPyL147;
    }
    cpy_r_item = cpy_r_r52;
    goto CPyL95;
CPyL38: ;
    cpy_r_r53 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_upper_bound)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL159;
    } else
        goto CPyL43;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_upper_bound) == CPyType_types___UnionType))
        cpy_r_r57 = cpy_r_upper_bound;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 415, CPyStatic_checkmember___globals, "mypy.types.UnionType", cpy_r_upper_bound);
        goto CPyL144;
    }
    cpy_r_r58 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_line;
    CPyTagged_INCREF(cpy_r_r58);
    cpy_r_r59 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_column;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_types___TypeType___make_normalized(cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r57);
    CPyTagged_DECREF(cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 415, CPyStatic_checkmember___globals);
        goto CPyL144;
    }
    cpy_r_r61 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r60, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 413, CPyStatic_checkmember___globals);
        goto CPyL144;
    }
    return cpy_r_r61;
CPyL43: ;
    cpy_r_r62 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_upper_bound)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (cpy_r_r65) {
        goto CPyL160;
    } else
        goto CPyL47;
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_upper_bound) == CPyType_types___TupleType))
        cpy_r_r66 = cpy_r_upper_bound;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 420, CPyStatic_checkmember___globals, "mypy.types.TupleType", cpy_r_upper_bound);
        goto CPyL147;
    }
    cpy_r_r67 = CPyDef_typeops___tuple_fallback(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 420, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    cpy_r_item = cpy_r_r67;
    goto CPyL95;
CPyL47: ;
    cpy_r_r68 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_upper_bound)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    CPy_DECREF(cpy_r_upper_bound);
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL95;
    cpy_r_r72 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = NULL;
    cpy_r_r74 = 2;
    cpy_r_r75 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r72, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 422, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    cpy_r_r76 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 422, CPyStatic_checkmember___globals);
        goto CPyL161;
    } else
        goto CPyL162;
CPyL50: ;
    cpy_r_r77 = 1;
    cpy_r_r78 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_fallback, cpy_r_mx, cpy_r_override_info);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 423, CPyStatic_checkmember___globals);
        goto CPyL53;
    }
    cpy_r_r79 = cpy_r_r78;
    goto CPyL61;
CPyL53: ;
    cpy_r_r80 = CPy_CatchError();
    cpy_r_r77 = 0;
    cpy_r_r81 = CPy_GetExcInfo();
    cpy_r_r82 = cpy_r_r81.f0;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = cpy_r_r81.f1;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = cpy_r_r81.f2;
    CPy_INCREF(cpy_r_r84);
    CPy_DecRef(cpy_r_r81.f0);
    CPy_DecRef(cpy_r_r81.f1);
    CPy_DecRef(cpy_r_r81.f2);
    cpy_r_r85 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r75, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 422, CPyStatic_checkmember___globals);
        goto CPyL58;
    }
    if (cpy_r_r85) goto CPyL57;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL163;
CPyL56: ;
    CPy_Unreachable();
CPyL57: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    goto CPyL60;
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    cpy_r_r86 = CPy_KeepPropagating();
    if (!cpy_r_r86) {
        goto CPyL62;
    } else
        goto CPyL164;
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r87 = NULL;
    cpy_r_r79 = cpy_r_r87;
CPyL61: ;
    tuple_T3OOO __tmp1447 = { NULL, NULL, NULL };
    cpy_r_r88 = __tmp1447;
    cpy_r_r89 = cpy_r_r88;
    goto CPyL63;
CPyL62: ;
    cpy_r_r90 = NULL;
    cpy_r_r79 = cpy_r_r90;
    cpy_r_r91 = CPy_CatchError();
    cpy_r_r89 = cpy_r_r91;
CPyL63: ;
    if (!cpy_r_r77) goto CPyL165;
    cpy_r_r92 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r93 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r75, cpy_r_r92, cpy_r_r92, cpy_r_r92);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 422, CPyStatic_checkmember___globals);
        goto CPyL166;
    }
CPyL65: ;
    if (cpy_r_r89.f0 == NULL) {
        goto CPyL68;
    } else
        goto CPyL167;
CPyL66: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL70;
    } else
        goto CPyL168;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    if (cpy_r_r79 == NULL) {
        goto CPyL95;
    } else
        goto CPyL169;
CPyL69: ;
    return cpy_r_r79;
CPyL70: ;
    if (cpy_r_r89.f0 == NULL) goto CPyL72;
    CPy_RestoreExcInfo(cpy_r_r89);
    CPy_XDECREF(cpy_r_r89.f0);
    CPy_XDECREF(cpy_r_r89.f1);
    CPy_XDECREF(cpy_r_r89.f2);
CPyL72: ;
    cpy_r_r94 = CPy_KeepPropagating();
    if (!cpy_r_r94) goto CPyL144;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r95 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r96 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_r95)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (cpy_r_r99) {
        goto CPyL170;
    } else
        goto CPyL78;
CPyL75: ;
    cpy_r_r100 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r100);
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_types___TupleType))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 425, CPyStatic_checkmember___globals, "mypy.types.TupleType", cpy_r_r100);
        goto CPyL147;
    }
    cpy_r_r102 = CPyDef_typeops___tuple_fallback(cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 425, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    cpy_r_item = cpy_r_r102;
    goto CPyL95;
CPyL78: ;
    cpy_r_r103 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r104 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r105 = (CPyPtr)&((PyObject *)cpy_r_r103)->ob_type;
    cpy_r_r106 = *(PyObject * *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 == cpy_r_r104;
    if (!cpy_r_r107) goto CPyL80;
    cpy_r_r108 = cpy_r_r107;
    goto CPyL81;
CPyL80: ;
    cpy_r_r109 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r110 = (CPyPtr)&((PyObject *)cpy_r_r103)->ob_type;
    cpy_r_r111 = *(PyObject * *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 == cpy_r_r109;
    cpy_r_r108 = cpy_r_r112;
CPyL81: ;
    if (!cpy_r_r108) goto CPyL88;
    cpy_r_r113 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    CPy_INCREF(cpy_r_r113);
    if (likely((Py_TYPE(cpy_r_r113) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r113) == CPyType_types___Overloaded)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 426, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r113);
        goto CPyL148;
    }
    cpy_r_r115 = CPY_GET_METHOD(cpy_r_r114, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r114); /* is_type_obj */
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 426, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    if (cpy_r_r115) {
        goto CPyL171;
    } else
        goto CPyL88;
CPyL85: ;
    cpy_r_r116 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    if (likely((Py_TYPE(cpy_r_r116) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r116) == CPyType_types___Overloaded)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 427, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r116);
        goto CPyL147;
    }
    cpy_r_r118 = ((mypy___types___FunctionLikeObject *)cpy_r_r117)->_fallback;
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_type_member_access", "FunctionLike", "fallback", 427, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r118);
CPyL87: ;
    cpy_r_item = cpy_r_r118;
    goto CPyL95;
CPyL88: ;
    cpy_r_r119 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    cpy_r_r120 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_r119)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    if (!cpy_r_r123) goto CPyL95;
    cpy_r_r124 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    if (likely(Py_TYPE(cpy_r_r124) == CPyType_types___TypeType))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 430, CPyStatic_checkmember___globals, "mypy.types.TypeType", cpy_r_r124);
        goto CPyL148;
    }
    cpy_r_r126 = ((mypy___types___TypeTypeObject *)cpy_r_r125)->_item;
    cpy_r_r127 = (PyObject *)CPyType_types___Instance;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (cpy_r_r130) {
        goto CPyL172;
    } else
        goto CPyL95;
CPyL91: ;
    cpy_r_r131 = ((mypy___types___TypeTypeObject *)cpy_r_typ)->_item;
    if (likely(Py_TYPE(cpy_r_r131) == CPyType_types___TypeType))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 431, CPyStatic_checkmember___globals, "mypy.types.TypeType", cpy_r_r131);
        goto CPyL147;
    }
    cpy_r_r133 = ((mypy___types___TypeTypeObject *)cpy_r_r132)->_item;
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_types___Instance))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 431, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r133);
        goto CPyL147;
    }
    cpy_r_r135 = ((mypy___types___InstanceObject *)cpy_r_r134)->_type;
    cpy_r_r136 = ((mypy___nodes___TypeInfoObject *)cpy_r_r135)->_metaclass_type;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_type_member_access", "TypeInfo", "metaclass_type", 431, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r136);
CPyL94: ;
    cpy_r_item = cpy_r_r136;
CPyL95: ;
    cpy_r_ignore_messages = 0;
    cpy_r_r137 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r138 = cpy_r_item != cpy_r_r137;
    if (!cpy_r_r138) goto CPyL103;
    if (likely(cpy_r_item != Py_None))
        cpy_r_r139 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 435, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_item);
        goto CPyL148;
    }
    cpy_r_r140 = ((mypy___types___InstanceObject *)cpy_r_r139)->_type;
    cpy_r_r141 = ((mypy___nodes___TypeInfoObject *)cpy_r_r140)->_metaclass_type;
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_type_member_access", "TypeInfo", "metaclass_type", 435, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r141);
CPyL98: ;
    cpy_r_r142 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r143 = cpy_r_r141 != cpy_r_r142;
    if (cpy_r_r143) {
        goto CPyL173;
    } else
        goto CPyL174;
CPyL99: ;
    if (likely(cpy_r_r141 != Py_None))
        cpy_r_r144 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 435, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r141);
        goto CPyL145;
    }
    cpy_r_r145 = cpy_r_r144;
    goto CPyL102;
CPyL101: ;
    cpy_r_r145 = cpy_r_fallback;
CPyL102: ;
    cpy_r_fallback = cpy_r_r145;
CPyL103: ;
    cpy_r_r146 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r147 = cpy_r_item != cpy_r_r146;
    if (!cpy_r_r147) goto CPyL175;
    cpy_r_r148 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_operator;
    if (cpy_r_r148) goto CPyL175;
CPyL105: ;
    CPy_INCREF(cpy_r_item);
    if (likely(cpy_r_item != Py_None))
        cpy_r_r149 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 440, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_item);
        goto CPyL148;
    }
    cpy_r_r150 = NULL;
    cpy_r_r151 = CPyDef_checkmember___analyze_class_attribute_access(cpy_r_r149, cpy_r_name, cpy_r_mx, cpy_r_fallback, cpy_r_override_info, cpy_r_r150);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 439, CPyStatic_checkmember___globals);
        goto CPyL148;
    }
    cpy_r_result = cpy_r_r151;
    cpy_r_r152 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r153 = cpy_r_result != cpy_r_r152;
    if (!cpy_r_r153) goto CPyL176;
    CPy_INCREF(cpy_r_result);
    if (likely(cpy_r_result != Py_None))
        cpy_r_r154 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 443, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_result);
        goto CPyL177;
    }
    cpy_r_r155 = CPyDef_types___get_proper_type(cpy_r_r154);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 443, CPyStatic_checkmember___globals);
        goto CPyL177;
    }
    cpy_r_r156 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r157 = (CPyPtr)&((PyObject *)cpy_r_r155)->ob_type;
    cpy_r_r158 = *(PyObject * *)cpy_r_r157;
    CPy_DECREF(cpy_r_r155);
    cpy_r_r159 = cpy_r_r158 == cpy_r_r156;
    if (!cpy_r_r159) goto CPyL178;
    if (likely(cpy_r_item != Py_None))
        cpy_r_r160 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 443, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_item);
        goto CPyL177;
    }
    cpy_r_r161 = ((mypy___types___InstanceObject *)cpy_r_r160)->_type;
    cpy_r_r162 = ((mypy___nodes___TypeInfoObject *)cpy_r_r161)->_fallback_to_any;
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_type_type_member_access", "TypeInfo", "fallback_to_any", 443, CPyStatic_checkmember___globals);
        goto CPyL177;
    }
CPyL113: ;
    CPy_DECREF(cpy_r_item);
    if (cpy_r_r162) {
        goto CPyL179;
    } else
        goto CPyL180;
CPyL114: ;
    if (likely(cpy_r_result != Py_None))
        cpy_r_r163 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 444, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_result);
        goto CPyL144;
    }
    return cpy_r_r163;
CPyL116: ;
    cpy_r_ignore_messages = 1;
CPyL117: ;
    cpy_r_r164 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r164);
    cpy_r_r165 = cpy_r_ignore_messages ? Py_True : Py_False;
    cpy_r_r166 = 2;
    cpy_r_r167 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r164, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 449, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    cpy_r_r168 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 449, CPyStatic_checkmember___globals);
        goto CPyL181;
    } else
        goto CPyL182;
CPyL119: ;
    cpy_r_r169 = 1;
    cpy_r_r170 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_fallback, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 450, CPyStatic_checkmember___globals);
        goto CPyL122;
    }
    cpy_r_r171 = cpy_r_r170;
    goto CPyL130;
CPyL122: ;
    cpy_r_r172 = CPy_CatchError();
    cpy_r_r169 = 0;
    cpy_r_r173 = CPy_GetExcInfo();
    cpy_r_r174 = cpy_r_r173.f0;
    CPy_INCREF(cpy_r_r174);
    cpy_r_r175 = cpy_r_r173.f1;
    CPy_INCREF(cpy_r_r175);
    cpy_r_r176 = cpy_r_r173.f2;
    CPy_INCREF(cpy_r_r176);
    CPy_DecRef(cpy_r_r173.f0);
    CPy_DecRef(cpy_r_r173.f1);
    CPy_DecRef(cpy_r_r173.f2);
    cpy_r_r177 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r167, cpy_r_r174, cpy_r_r175, cpy_r_r176);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r176);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 449, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    if (cpy_r_r177) goto CPyL126;
    CPy_Reraise();
    if (!0) {
        goto CPyL127;
    } else
        goto CPyL183;
CPyL125: ;
    CPy_Unreachable();
CPyL126: ;
    CPy_RestoreExcInfo(cpy_r_r172);
    CPy_DecRef(cpy_r_r172.f0);
    CPy_DecRef(cpy_r_r172.f1);
    CPy_DecRef(cpy_r_r172.f2);
    goto CPyL129;
CPyL127: ;
    CPy_RestoreExcInfo(cpy_r_r172);
    CPy_DecRef(cpy_r_r172.f0);
    CPy_DecRef(cpy_r_r172.f1);
    CPy_DecRef(cpy_r_r172.f2);
    cpy_r_r178 = CPy_KeepPropagating();
    if (!cpy_r_r178) {
        goto CPyL131;
    } else
        goto CPyL184;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    cpy_r_r179 = NULL;
    cpy_r_r171 = cpy_r_r179;
CPyL130: ;
    tuple_T3OOO __tmp1448 = { NULL, NULL, NULL };
    cpy_r_r180 = __tmp1448;
    cpy_r_r181 = cpy_r_r180;
    goto CPyL132;
CPyL131: ;
    cpy_r_r182 = NULL;
    cpy_r_r171 = cpy_r_r182;
    cpy_r_r183 = CPy_CatchError();
    cpy_r_r181 = cpy_r_r183;
CPyL132: ;
    if (!cpy_r_r169) goto CPyL185;
    cpy_r_r184 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r185 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r167, cpy_r_r184, cpy_r_r184, cpy_r_r184);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 449, CPyStatic_checkmember___globals);
        goto CPyL186;
    }
CPyL134: ;
    if (cpy_r_r181.f0 == NULL) {
        goto CPyL137;
    } else
        goto CPyL187;
CPyL135: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL139;
    } else
        goto CPyL188;
CPyL136: ;
    CPy_Unreachable();
CPyL137: ;
    if (cpy_r_r171 == NULL) goto CPyL143;
    return cpy_r_r171;
CPyL139: ;
    if (cpy_r_r181.f0 == NULL) goto CPyL141;
    CPy_RestoreExcInfo(cpy_r_r181);
    CPy_XDECREF(cpy_r_r181.f0);
    CPy_XDECREF(cpy_r_r181.f1);
    CPy_XDECREF(cpy_r_r181.f2);
CPyL141: ;
    cpy_r_r186 = CPy_KeepPropagating();
    if (!cpy_r_r186) goto CPyL144;
    CPy_Unreachable();
CPyL143: ;
    CPy_Unreachable();
CPyL144: ;
    cpy_r_r187 = NULL;
    return cpy_r_r187;
CPyL145: ;
    CPy_DecRef(cpy_r_item);
    goto CPyL144;
CPyL146: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL2;
CPyL147: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL144;
CPyL148: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL144;
CPyL149: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r18);
    goto CPyL144;
CPyL150: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL7;
CPyL151: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL13;
CPyL152: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL153: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL22;
CPyL154: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_XDecRef(cpy_r_r22);
    goto CPyL27;
CPyL155: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    CPy_XDECREF(cpy_r_r22);
    goto CPyL23;
CPyL156: ;
    CPy_XDECREF(cpy_r_r32.f0);
    CPy_XDECREF(cpy_r_r32.f1);
    CPy_XDECREF(cpy_r_r32.f2);
    goto CPyL24;
CPyL157: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL26;
CPyL158: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL36;
CPyL159: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL39;
CPyL160: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL44;
CPyL161: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r75);
    goto CPyL144;
CPyL162: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL50;
CPyL163: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    goto CPyL56;
CPyL164: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r75);
    goto CPyL59;
CPyL165: ;
    CPy_DECREF(cpy_r_r75);
    goto CPyL65;
CPyL166: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_XDecRef(cpy_r_r79);
    goto CPyL70;
CPyL167: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    CPy_XDECREF(cpy_r_r79);
    goto CPyL66;
CPyL168: ;
    CPy_XDECREF(cpy_r_r89.f0);
    CPy_XDECREF(cpy_r_r89.f1);
    CPy_XDECREF(cpy_r_r89.f2);
    goto CPyL67;
CPyL169: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL69;
CPyL170: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL75;
CPyL171: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL85;
CPyL172: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL91;
CPyL173: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL99;
CPyL174: ;
    CPy_DECREF(cpy_r_r141);
    goto CPyL101;
CPyL175: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL117;
CPyL176: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_result);
    goto CPyL117;
CPyL177: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_result);
    goto CPyL144;
CPyL178: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL114;
CPyL179: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL116;
CPyL180: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL114;
CPyL181: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r167);
    goto CPyL144;
CPyL182: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL119;
CPyL183: ;
    CPy_DecRef(cpy_r_r167);
    CPy_DecRef(cpy_r_r172.f0);
    CPy_DecRef(cpy_r_r172.f1);
    CPy_DecRef(cpy_r_r172.f2);
    goto CPyL125;
CPyL184: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL128;
CPyL185: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL134;
CPyL186: ;
    CPy_XDecRef(cpy_r_r171);
    goto CPyL139;
CPyL187: ;
    CPy_XDECREF(cpy_r_r171);
    goto CPyL135;
CPyL188: ;
    CPy_XDECREF(cpy_r_r181.f0);
    CPy_XDECREF(cpy_r_r181.f1);
    CPy_XDECREF(cpy_r_r181.f2);
    goto CPyL136;
}

PyObject *CPyPy_checkmember___analyze_type_type_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_type_type_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    PyObject *obj_override_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypeType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1449;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1449;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1449: ;
    PyObject *retval = CPyDef_checkmember___analyze_type_type_member_access(arg_name, arg_typ, arg_mx, arg_override_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_type_type_member_access", 397, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_union_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_results;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_subtype;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_item_mx;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = NULL;
    cpy_r_results = cpy_r_r0;
    cpy_r_r1 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[1177]; /* 'disable_type_names' */
    PyObject *cpy_r_r3[1] = {cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL41;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL42;
    } else
        goto CPyL43;
CPyL4: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 455, CPyStatic_checkmember___globals);
        goto CPyL14;
    } else
        goto CPyL44;
CPyL6: ;
    cpy_r_results = cpy_r_r15;
    cpy_r_r16 = CPyDef_types___UnionType___relevant_items(cpy_r_typ);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 456, CPyStatic_checkmember___globals);
        goto CPyL14;
    }
    cpy_r_r17 = 0;
CPyL8: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL45;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_union_member_access", 456, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL46;
    }
    cpy_r_subtype = cpy_r_r23;
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_checkmember___MemberContext___copy_modified(cpy_r_mx, cpy_r_r24, cpy_r_subtype, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 458, CPyStatic_checkmember___globals);
        goto CPyL47;
    }
    cpy_r_item_mx = cpy_r_r26;
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_subtype, cpy_r_item_mx, cpy_r_r27);
    CPy_DECREF(cpy_r_subtype);
    CPy_DECREF(cpy_r_item_mx);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 459, CPyStatic_checkmember___globals);
        goto CPyL46;
    }
    cpy_r_r29 = PyList_Append(cpy_r_results, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 459, CPyStatic_checkmember___globals);
        goto CPyL46;
    }
    cpy_r_r31 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r31;
    goto CPyL8;
CPyL14: ;
    cpy_r_r32 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r33 = CPy_GetExcInfo();
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r33.f2;
    CPy_INCREF(cpy_r_r36);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    PyObject *cpy_r_r37[4] = {cpy_r_r5, cpy_r_r34, cpy_r_r35, cpy_r_r36};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r38, 4, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL48;
    }
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    cpy_r_r40 = PyObject_IsTrue(cpy_r_r39);
    CPy_DecRef(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL20;
    }
    cpy_r_r42 = cpy_r_r40;
    if (cpy_r_r42) goto CPyL19;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL49;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL22;
CPyL20: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) {
        goto CPyL23;
    } else
        goto CPyL50;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    tuple_T3OOO __tmp1450 = { NULL, NULL, NULL };
    cpy_r_r44 = __tmp1450;
    cpy_r_r45 = cpy_r_r44;
    goto CPyL24;
CPyL23: ;
    cpy_r_r46 = CPy_CatchError();
    cpy_r_r45 = cpy_r_r46;
CPyL24: ;
    if (!cpy_r_r14) goto CPyL51;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r48[4] = {cpy_r_r5, cpy_r_r47, cpy_r_r47, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r49, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 454, CPyStatic_checkmember___globals);
        goto CPyL52;
    } else
        goto CPyL53;
CPyL26: ;
    CPy_DECREF(cpy_r_r5);
CPyL27: ;
    if (cpy_r_r45.f0 == NULL) {
        goto CPyL34;
    } else
        goto CPyL54;
CPyL28: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL55;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    if (cpy_r_r45.f0 == NULL) goto CPyL32;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_XDECREF(cpy_r_r45.f0);
    CPy_XDECREF(cpy_r_r45.f1);
    CPy_XDECREF(cpy_r_r45.f2);
CPyL32: ;
    cpy_r_r51 = CPy_KeepPropagating();
    if (!cpy_r_r51) goto CPyL39;
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = 2;
    cpy_r_r55 = 2;
    if (cpy_r_results != NULL) goto CPyL37;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"results\" referenced before assignment");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 460, CPyStatic_checkmember___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r57 = CPyDef_typeops___make_simplified_union(cpy_r_results, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_XDECREF(cpy_r_results);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 460, CPyStatic_checkmember___globals);
        goto CPyL39;
    }
    return cpy_r_r57;
CPyL39: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL40: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r1);
    goto CPyL39;
CPyL41: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL39;
CPyL42: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL4;
CPyL44: ;
    CPy_XDECREF(cpy_r_results);
    goto CPyL6;
CPyL45: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL22;
CPyL46: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
CPyL47: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_subtype);
    goto CPyL14;
CPyL48: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL20;
CPyL49: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL18;
CPyL50: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL21;
CPyL51: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL27;
CPyL52: ;
    CPy_XDecRef(cpy_r_results);
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL53: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL26;
CPyL54: ;
    CPy_XDECREF(cpy_r_results);
    goto CPyL28;
CPyL55: ;
    CPy_XDECREF(cpy_r_r45.f0);
    CPy_XDECREF(cpy_r_r45.f1);
    CPy_XDECREF(cpy_r_r45.f2);
    goto CPyL29;
}

PyObject *CPyPy_checkmember___analyze_union_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", 0};
    static CPyArg_Parser parser = {"OOO:analyze_union_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnionType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_union_member_access(arg_name, arg_typ, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_union_member_access", 453, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_none_member_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_literal_false;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = CPyStatics[847]; /* '__bool__' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_name, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 464, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL12;
    cpy_r_r7 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r8 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 465, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    cpy_r_r9 = 0 ? Py_True : Py_False;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_types___LiteralType(cpy_r_r9, cpy_r_r8, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 465, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    cpy_r_literal_false = cpy_r_r12;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 467, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 468, CPyStatic_checkmember___globals);
        goto CPyL17;
    }
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 469, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    cpy_r_r16 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r17 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 471, CPyStatic_checkmember___globals);
        goto CPyL19;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = NULL;
    cpy_r_r26 = 2;
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_types___CallableType(cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_literal_false, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_literal_false);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 466, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    return cpy_r_r32;
CPyL12: ;
    cpy_r_r33 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r34 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 474, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r34, cpy_r_mx, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 474, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    return cpy_r_r36;
CPyL15: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL16: ;
    CPy_DecRef(cpy_r_literal_false);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_literal_false);
    CPy_DecRef(cpy_r_r13);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_literal_false);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_literal_false);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL15;
}

PyObject *CPyPy_checkmember___analyze_none_member_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", 0};
    static CPyArg_Parser parser = {"OOO:analyze_none_member_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___NoneType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_none_member_access(arg_name, arg_typ, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_none_member_access", 463, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_member_var_access(PyObject *cpy_r_name, PyObject *cpy_r_itype, PyObject *cpy_r_info, PyObject *cpy_r_mx) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_v;
    PyObject *cpy_r_vv;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_implicit;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    tuple_T2OO cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_method_name;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_method;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_bound_method;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyPtr cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyPtr cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyPtr cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_getattr_type;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    CPyPtr cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    CPyPtr cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_hook;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject **cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject **cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_setattr_meth;
    int32_t cpy_r_r232;
    char cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    CPyPtr cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    CPyPtr cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    CPyPtr cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    char cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_bound_type;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    CPyPtr cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    char cpy_r_r275;
    PyObject *cpy_r_r276;
    CPyPtr cpy_r_r277;
    PyObject *cpy_r_r278;
    char cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    CPyPtr cpy_r_r282;
    PyObject *cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_setattr_type;
    PyObject *cpy_r_r295;
    CPyPtr cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    CPyPtr cpy_r_r301;
    int64_t cpy_r_r302;
    CPyTagged cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    CPyTagged cpy_r_r313;
    CPyTagged cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    int32_t cpy_r_r322;
    char cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    CPyTagged cpy_r_r343;
    CPyTagged cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    cpy_r_r0 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    cpy_r_r1 = CPyDef_checkmember___lookup_member_var_or_accessor(cpy_r_info, cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 487, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_v = cpy_r_r1;
    CPy_INCREF(cpy_r_v);
    cpy_r_vv = cpy_r_v;
    cpy_r_r2 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_vv)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL219;
    } else
        goto CPyL6;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_vv) == CPyType_nodes___Decorator))
        cpy_r_r6 = cpy_r_vv;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 492, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_vv);
        goto CPyL220;
    }
    cpy_r_r7 = ((mypy___nodes___DecoratorObject *)cpy_r_r6)->_var;
    CPy_INCREF(cpy_r_r7);
    cpy_r_v = cpy_r_r7;
    cpy_r_r8 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_super;
    if (!cpy_r_r8) goto CPyL6;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_vv) == CPyType_nodes___Decorator))
        cpy_r_r9 = cpy_r_vv;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 494, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_vv);
        goto CPyL221;
    }
    cpy_r_r10 = ((mypy___nodes___DecoratorObject *)cpy_r_r9)->_func;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_checkmember___validate_super_call(cpy_r_r10, cpy_r_mx);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 494, CPyStatic_checkmember___globals);
        goto CPyL221;
    }
CPyL6: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_vv)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL8;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL9;
CPyL8: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_vv)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL9: ;
    if (cpy_r_r16) {
        goto CPyL222;
    } else
        goto CPyL16;
CPyL10: ;
    CPy_INCREF(cpy_r_vv);
    if (likely((Py_TYPE(cpy_r_vv) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_vv) == CPyType_nodes___TypeInfo)))
        cpy_r_r21 = cpy_r_vv;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 500, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_vv);
        goto CPyL220;
    }
    cpy_r_r22 = CPyStatics[768]; /* 'named_type' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_mx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 500, CPyStatic_checkmember___globals);
        goto CPyL223;
    }
    cpy_r_r24 = CPyDef_checkmember___type_object_type(cpy_r_r21, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 500, CPyStatic_checkmember___globals);
        goto CPyL220;
    }
    cpy_r_r25 = CPyDef_nodes___Var(cpy_r_name, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 500, CPyStatic_checkmember___globals);
        goto CPyL220;
    }
    cpy_r_v = cpy_r_r25;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___Var))
        cpy_r_r26 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 501, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_v);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r26)->_info);
    ((mypy___nodes___VarObject *)cpy_r_r26)->_info = cpy_r_info;
CPyL16: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_vv)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (cpy_r_r31) {
        goto CPyL224;
    } else
        goto CPyL225;
CPyL17: ;
    cpy_r_r32 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r33 = ((mypy___checker___TypeCheckerObject *)cpy_r_r32)->_expr_checker;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_member_var_access", "TypeChecker", "expr_checker", 510, CPyStatic_checkmember___globals);
        goto CPyL220;
    }
    CPy_INCREF(cpy_r_r33);
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_vv) == CPyType_nodes___TypeAlias))
        cpy_r_r34 = cpy_r_vv;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 511, CPyStatic_checkmember___globals, "mypy.nodes.TypeAlias", cpy_r_vv);
        goto CPyL226;
    }
    cpy_r_r35 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    cpy_r_r37 = CPyDef_checkexpr___ExpressionChecker___alias_type_in_runtime_context(cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 510, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_typ = cpy_r_r37;
    cpy_r_r38 = CPyDef_nodes___Var(cpy_r_name, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 513, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_v = cpy_r_r38;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___Var))
        cpy_r_r39 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 514, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_v);
        goto CPyL227;
    }
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r39)->_info);
    ((mypy___nodes___VarObject *)cpy_r_r39)->_info = cpy_r_info;
CPyL23: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL32;
    cpy_r_r45 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 517, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
    cpy_r_r46 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r45)->_implicit;
    CPy_DECREF(cpy_r_r45);
    cpy_r_implicit = cpy_r_r46;
    cpy_r_r47 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r47) goto CPyL29;
CPyL26: ;
    cpy_r_r48 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_checker___TypeChecker___get_final_context(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 521, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
    if (cpy_r_r49) goto CPyL29;
    cpy_r_r50 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_checkmember___check_final_member(cpy_r_name, cpy_r_info, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 522, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___Var))
        cpy_r_r53 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 524, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_v);
        goto CPyL218;
    }
    cpy_r_r54 = CPyDef_checkmember___analyze_var(cpy_r_name, cpy_r_r53, cpy_r_itype, cpy_r_info, cpy_r_mx, cpy_r_implicit);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 524, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    return cpy_r_r54;
CPyL32: ;
    cpy_r_r55 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (cpy_r_r58) {
        goto CPyL228;
    } else
        goto CPyL36;
CPyL33: ;
    if (0) goto CPyL196;
    PyErr_SetString(PyExc_AssertionError, "Did not expect a function");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 526, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (!cpy_r_r63) goto CPyL45;
    cpy_r_r64 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r65 = ((mypy___checker___TypeCheckerObject *)cpy_r_r64)->_module_refs;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_member_var_access", "TypeChecker", "module_refs", 528, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
    CPy_INCREF(cpy_r_r65);
CPyL38: ;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___MypyFile))
        cpy_r_r66 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 528, CPyStatic_checkmember___globals, "mypy.nodes.MypyFile", cpy_r_v);
        goto CPyL229;
    }
    cpy_r_r67 = CPY_GET_ATTR(cpy_r_r66, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 528, CPyStatic_checkmember___globals);
        goto CPyL229;
    }
CPyL40: ;
    cpy_r_r68 = PySet_Add(cpy_r_r65, cpy_r_r67);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 528, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
    cpy_r_r70 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r71 = ((mypy___checker___TypeCheckerObject *)cpy_r_r70)->_expr_checker;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_member_var_access", "TypeChecker", "expr_checker", 529, CPyStatic_checkmember___globals);
        goto CPyL227;
    }
    CPy_INCREF(cpy_r_r71);
CPyL42: ;
    if (likely(Py_TYPE(cpy_r_v) == CPyType_nodes___MypyFile))
        cpy_r_r72 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 529, CPyStatic_checkmember___globals, "mypy.nodes.MypyFile", cpy_r_v);
        goto CPyL230;
    }
    cpy_r_r73 = CPyDef_checkexpr___ExpressionChecker___module_type(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 529, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    return cpy_r_r73;
CPyL45: ;
    cpy_r_r74 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r75 = cpy_r_v != cpy_r_r74;
    if (!cpy_r_r75) goto CPyL231;
    if (likely(cpy_r_v != Py_None))
        cpy_r_r76 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 487, CPyStatic_checkmember___globals, "mypy.nodes.SymbolNode", cpy_r_v);
        goto CPyL218;
    }
    cpy_r_r77 = PyObject_IsTrue(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 487, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_r79 = cpy_r_r77;
    if (cpy_r_r79) goto CPyL196;
CPyL49: ;
    cpy_r_r80 = CPyStatics[725]; /* '__getattr__' */
    cpy_r_r81 = PyUnicode_Compare(cpy_r_name, cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 == -1;
    if (!cpy_r_r82) goto CPyL52;
    cpy_r_r83 = PyErr_Occurred();
    cpy_r_r84 = cpy_r_r83 != NULL;
    if (!cpy_r_r84) goto CPyL52;
    cpy_r_r85 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", -1, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
CPyL52: ;
    cpy_r_r86 = cpy_r_r81 != 0;
    if (cpy_r_r86) goto CPyL54;
    cpy_r_r87 = cpy_r_r86;
    goto CPyL58;
CPyL54: ;
    cpy_r_r88 = CPyStatics[727]; /* '__setattr__' */
    cpy_r_r89 = PyUnicode_Compare(cpy_r_name, cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 == -1;
    if (!cpy_r_r90) goto CPyL57;
    cpy_r_r91 = PyErr_Occurred();
    cpy_r_r92 = cpy_r_r91 != NULL;
    if (!cpy_r_r92) goto CPyL57;
    cpy_r_r93 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", -1, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
CPyL57: ;
    cpy_r_r94 = cpy_r_r89 != 0;
    cpy_r_r87 = cpy_r_r94;
CPyL58: ;
    if (cpy_r_r87) goto CPyL60;
    cpy_r_r95 = cpy_r_r87;
    goto CPyL64;
CPyL60: ;
    cpy_r_r96 = CPyStatics[726]; /* '__getattribute__' */
    cpy_r_r97 = PyUnicode_Compare(cpy_r_name, cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 == -1;
    if (!cpy_r_r98) goto CPyL63;
    cpy_r_r99 = PyErr_Occurred();
    cpy_r_r100 = cpy_r_r99 != NULL;
    if (!cpy_r_r100) goto CPyL63;
    cpy_r_r101 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", -1, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
CPyL63: ;
    cpy_r_r102 = cpy_r_r97 != 0;
    cpy_r_r95 = cpy_r_r102;
CPyL64: ;
    if (!cpy_r_r95) goto CPyL196;
    cpy_r_r103 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_operator;
    if (cpy_r_r103) goto CPyL196;
CPyL66: ;
    cpy_r_r104 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_module_symbol_table;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_r104 == cpy_r_r105;
    if (!cpy_r_r106) goto CPyL196;
    cpy_r_r107 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (cpy_r_r107) goto CPyL147;
CPyL68: ;
    cpy_r_r108 = CPyStatics[726]; /* '__getattribute__' */
    cpy_r_r109 = CPyStatics[725]; /* '__getattr__' */
    cpy_r_r110.f0 = cpy_r_r108;
    cpy_r_r110.f1 = cpy_r_r109;
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    cpy_r_r111 = PyTuple_New(2);
    if (unlikely(cpy_r_r111 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1451 = cpy_r_r110.f0;
    PyTuple_SET_ITEM(cpy_r_r111, 0, __tmp1451);
    PyObject *__tmp1452 = cpy_r_r110.f1;
    PyTuple_SET_ITEM(cpy_r_r111, 1, __tmp1452);
    cpy_r_r112 = PyObject_GetIter(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 540, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
CPyL69: ;
    cpy_r_r113 = PyIter_Next(cpy_r_r112);
    if (cpy_r_r113 == NULL) goto CPyL232;
    if (likely(PyUnicode_Check(cpy_r_r113)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 540, CPyStatic_checkmember___globals, "str", cpy_r_r113);
        goto CPyL233;
    }
    cpy_r_method_name = cpy_r_r114;
    cpy_r_r115 = CPyDef_nodes___TypeInfo___get_method(cpy_r_info, cpy_r_method_name);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 541, CPyStatic_checkmember___globals);
        goto CPyL234;
    }
    cpy_r_method = cpy_r_r115;
    cpy_r_r116 = PyObject_IsTrue(cpy_r_method);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 541, CPyStatic_checkmember___globals);
        goto CPyL235;
    }
    cpy_r_r118 = cpy_r_r116;
    if (!cpy_r_r118) goto CPyL236;
    CPy_INCREF(cpy_r_method);
    if ((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r119 = cpy_r_method;
    else {
        cpy_r_r119 = NULL;
    }
    if (cpy_r_r119 != NULL) goto __LL1453;
    if (Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator)
        cpy_r_r119 = cpy_r_method;
    else {
        cpy_r_r119 = NULL;
    }
    if (cpy_r_r119 != NULL) goto __LL1453;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_method);
    goto CPyL235;
__LL1453: ;
    cpy_r_r120 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_r119)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    if (!cpy_r_r123) goto CPyL77;
    cpy_r_r124 = cpy_r_r123;
    goto CPyL78;
CPyL77: ;
    cpy_r_r125 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r126 = (CPyPtr)&((PyObject *)cpy_r_r119)->ob_type;
    cpy_r_r127 = *(PyObject * *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 == cpy_r_r125;
    cpy_r_r124 = cpy_r_r128;
CPyL78: ;
    if (!cpy_r_r124) goto CPyL80;
    cpy_r_r129 = cpy_r_r124;
    goto CPyL81;
CPyL80: ;
    cpy_r_r130 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r131 = (CPyPtr)&((PyObject *)cpy_r_r119)->ob_type;
    cpy_r_r132 = *(PyObject * *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 == cpy_r_r130;
    cpy_r_r129 = cpy_r_r133;
CPyL81: ;
    if (!cpy_r_r129) goto CPyL84;
    if (likely((Py_TYPE(cpy_r_r119) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r119) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r119) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r134 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r119);
        goto CPyL235;
    }
    cpy_r_r135 = ((mypy___nodes___FuncBaseObject *)cpy_r_r134)->_info;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = cpy_r_r135;
    goto CPyL87;
CPyL84: ;
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_nodes___Decorator))
        cpy_r_r137 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r119);
        goto CPyL235;
    }
    cpy_r_r138 = CPY_GET_ATTR(cpy_r_r137, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals);
        goto CPyL235;
    }
CPyL86: ;
    cpy_r_r136 = cpy_r_r138;
CPyL87: ;
    cpy_r_r139 = CPY_GET_ATTR(cpy_r_r136, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals);
        goto CPyL235;
    }
CPyL88: ;
    cpy_r_r140 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r141 = PyUnicode_Compare(cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r142 = cpy_r_r141 == -1;
    if (!cpy_r_r142) goto CPyL91;
    cpy_r_r143 = PyErr_Occurred();
    cpy_r_r144 = cpy_r_r143 != NULL;
    if (!cpy_r_r144) goto CPyL91;
    cpy_r_r145 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 546, CPyStatic_checkmember___globals);
        goto CPyL235;
    }
CPyL91: ;
    cpy_r_r146 = cpy_r_r141 != 0;
    if (cpy_r_r146) {
        goto CPyL237;
    } else
        goto CPyL236;
CPyL92: ;
    CPy_INCREF(cpy_r_method);
    if ((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r147 = cpy_r_method;
    else {
        cpy_r_r147 = NULL;
    }
    if (cpy_r_r147 != NULL) goto __LL1454;
    if (Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator)
        cpy_r_r147 = cpy_r_method;
    else {
        cpy_r_r147 = NULL;
    }
    if (cpy_r_r147 != NULL) goto __LL1454;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 548, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_method);
    goto CPyL238;
__LL1454: ;
    cpy_r_r148 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = CPyDef_checkmember___analyze_decorator_or_funcbase_access(cpy_r_r147, cpy_r_itype, cpy_r_info, cpy_r_r148, cpy_r_method_name, cpy_r_mx);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_method_name);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 547, CPyStatic_checkmember___globals);
        goto CPyL239;
    }
    cpy_r_bound_method = cpy_r_r149;
    CPy_INCREF(cpy_r_method);
    if ((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r150 = cpy_r_method;
    else {
        cpy_r_r150 = NULL;
    }
    if (cpy_r_r150 != NULL) goto __LL1455;
    if (Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator)
        cpy_r_r150 = cpy_r_method;
    else {
        cpy_r_r150 = NULL;
    }
    if (cpy_r_r150 != NULL) goto __LL1455;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 555, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_method);
    goto CPyL240;
__LL1455: ;
    cpy_r_r151 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r152 = (CPyPtr)&((PyObject *)cpy_r_r150)->ob_type;
    cpy_r_r153 = *(PyObject * *)cpy_r_r152;
    cpy_r_r154 = cpy_r_r153 == cpy_r_r151;
    if (!cpy_r_r154) goto CPyL97;
    cpy_r_r155 = cpy_r_r154;
    goto CPyL98;
CPyL97: ;
    cpy_r_r156 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r157 = (CPyPtr)&((PyObject *)cpy_r_r150)->ob_type;
    cpy_r_r158 = *(PyObject * *)cpy_r_r157;
    cpy_r_r159 = cpy_r_r158 == cpy_r_r156;
    cpy_r_r155 = cpy_r_r159;
CPyL98: ;
    if (!cpy_r_r155) goto CPyL100;
    cpy_r_r160 = cpy_r_r155;
    goto CPyL101;
CPyL100: ;
    cpy_r_r161 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r162 = (CPyPtr)&((PyObject *)cpy_r_r150)->ob_type;
    cpy_r_r163 = *(PyObject * *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 == cpy_r_r161;
    cpy_r_r160 = cpy_r_r164;
CPyL101: ;
    if (!cpy_r_r160) goto CPyL104;
    if (likely((Py_TYPE(cpy_r_r150) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r150) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r150) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r165 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 555, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r150);
        goto CPyL240;
    }
    cpy_r_r166 = ((mypy___nodes___FuncBaseObject *)cpy_r_r165)->_info;
    CPy_INCREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = cpy_r_r166;
    goto CPyL107;
CPyL104: ;
    if (likely(Py_TYPE(cpy_r_r150) == CPyType_nodes___Decorator))
        cpy_r_r168 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 555, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r150);
        goto CPyL240;
    }
    cpy_r_r169 = CPY_GET_ATTR(cpy_r_r168, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 555, CPyStatic_checkmember___globals);
        goto CPyL240;
    }
CPyL106: ;
    cpy_r_r167 = cpy_r_r169;
CPyL107: ;
    cpy_r_r170 = CPyDef_maptype___map_instance_to_supertype(cpy_r_itype, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 555, CPyStatic_checkmember___globals);
        goto CPyL240;
    }
    cpy_r_typ = cpy_r_r170;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r171 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 556, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL240;
    }
    cpy_r_r172 = CPyDef_expandtype___expand_type_by_instance(cpy_r_bound_method, cpy_r_r171);
    CPy_DECREF(cpy_r_bound_method);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 556, CPyStatic_checkmember___globals);
        goto CPyL239;
    }
    cpy_r_r173 = CPyDef_types___get_proper_type(cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 556, CPyStatic_checkmember___globals);
        goto CPyL239;
    }
    if (likely(cpy_r_r173 != Py_None))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 556, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r173);
        goto CPyL239;
    }
    cpy_r_getattr_type = cpy_r_r174;
    cpy_r_r175 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r176 = (CPyPtr)&((PyObject *)cpy_r_getattr_type)->ob_type;
    cpy_r_r177 = *(PyObject * *)cpy_r_r176;
    cpy_r_r178 = cpy_r_r177 == cpy_r_r175;
    if (!cpy_r_r178) goto CPyL115;
    if (likely(Py_TYPE(cpy_r_getattr_type) == CPyType_types___CallableType))
        cpy_r_r179 = cpy_r_getattr_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 558, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_getattr_type);
        goto CPyL241;
    }
    cpy_r_r180 = ((mypy___types___CallableTypeObject *)cpy_r_r179)->_ret_type;
    CPy_INCREF(cpy_r_r180);
    CPy_DECREF(cpy_r_getattr_type);
    cpy_r_result = cpy_r_r180;
    goto CPyL116;
CPyL115: ;
    cpy_r_result = cpy_r_getattr_type;
CPyL116: ;
    if ((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r181 = cpy_r_method;
    else {
        cpy_r_r181 = NULL;
    }
    if (cpy_r_r181 != NULL) goto __LL1456;
    if (Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator)
        cpy_r_r181 = cpy_r_method;
    else {
        cpy_r_r181 = NULL;
    }
    if (cpy_r_r181 != NULL) goto __LL1456;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_method);
    goto CPyL242;
__LL1456: ;
    cpy_r_r182 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r183 = (CPyPtr)&((PyObject *)cpy_r_r181)->ob_type;
    cpy_r_r184 = *(PyObject * *)cpy_r_r183;
    cpy_r_r185 = cpy_r_r184 == cpy_r_r182;
    if (!cpy_r_r185) goto CPyL119;
    cpy_r_r186 = cpy_r_r185;
    goto CPyL120;
CPyL119: ;
    cpy_r_r187 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r188 = (CPyPtr)&((PyObject *)cpy_r_r181)->ob_type;
    cpy_r_r189 = *(PyObject * *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 == cpy_r_r187;
    cpy_r_r186 = cpy_r_r190;
CPyL120: ;
    if (!cpy_r_r186) goto CPyL122;
    cpy_r_r191 = cpy_r_r186;
    goto CPyL123;
CPyL122: ;
    cpy_r_r192 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r193 = (CPyPtr)&((PyObject *)cpy_r_r181)->ob_type;
    cpy_r_r194 = *(PyObject * *)cpy_r_r193;
    cpy_r_r195 = cpy_r_r194 == cpy_r_r192;
    cpy_r_r191 = cpy_r_r195;
CPyL123: ;
    if (!cpy_r_r191) goto CPyL126;
    if (likely((Py_TYPE(cpy_r_r181) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r181) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r181) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r196 = cpy_r_r181;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r181);
        goto CPyL242;
    }
    cpy_r_r197 = ((mypy___nodes___FuncBaseObject *)cpy_r_r196)->_info;
    CPy_INCREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r196);
    cpy_r_r198 = cpy_r_r197;
    goto CPyL129;
CPyL126: ;
    if (likely(Py_TYPE(cpy_r_r181) == CPyType_nodes___Decorator))
        cpy_r_r199 = cpy_r_r181;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r181);
        goto CPyL242;
    }
    cpy_r_r200 = CPY_GET_ATTR(cpy_r_r199, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals);
        goto CPyL242;
    }
CPyL128: ;
    cpy_r_r198 = cpy_r_r200;
CPyL129: ;
    cpy_r_r201 = CPY_GET_ATTR(cpy_r_r198, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals);
        goto CPyL242;
    }
CPyL130: ;
    cpy_r_r202 = CPyStatics[224]; /* '.' */
    cpy_r_r203 = CPyStr_Build(3, cpy_r_r201, cpy_r_r202, cpy_r_name);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 563, CPyStatic_checkmember___globals);
        goto CPyL242;
    }
    cpy_r_fullname = cpy_r_r203;
    cpy_r_r204 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r205 = ((mypy___checker___TypeCheckerObject *)cpy_r_r204)->_plugin;
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_member_var_access", "TypeChecker", "plugin", 564, CPyStatic_checkmember___globals);
        goto CPyL243;
    }
    CPy_INCREF(cpy_r_r205);
CPyL132: ;
    cpy_r_r206 = CPY_GET_METHOD(cpy_r_r205, CPyType_plugin___Plugin, 11, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r205, cpy_r_fullname); /* get_attribute_hook */
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 564, CPyStatic_checkmember___globals);
        goto CPyL242;
    }
    cpy_r_hook = cpy_r_r206;
    cpy_r_r207 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r208 = cpy_r_hook != cpy_r_r207;
    if (!cpy_r_r208) goto CPyL244;
    CPy_INCREF(cpy_r_hook);
    cpy_r_r209 = cpy_r_hook;
    cpy_r_r210 = PyObject_IsTrue(cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 564, CPyStatic_checkmember___globals);
        goto CPyL245;
    }
    cpy_r_r212 = cpy_r_r210;
    if (!cpy_r_r212) goto CPyL244;
    cpy_r_r213 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r213);
    cpy_r_r214 = CPyDef_types___get_proper_type(cpy_r_r213);
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 568, CPyStatic_checkmember___globals);
        goto CPyL245;
    }
    if (likely(cpy_r_r214 != Py_None))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 568, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r214);
        goto CPyL245;
    }
    cpy_r_r216 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r216);
    cpy_r_r217 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r217);
    cpy_r_r218 = CPyStatic_checkmember___globals;
    cpy_r_r219 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r220 = CPyDict_GetItem(cpy_r_r218, cpy_r_r219);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 567, CPyStatic_checkmember___globals);
        goto CPyL246;
    }
    PyObject *cpy_r_r221[4] = {cpy_r_r215, cpy_r_result, cpy_r_r216, cpy_r_r217};
    cpy_r_r222 = (PyObject **)&cpy_r_r221;
    cpy_r_r223 = _PyObject_Vectorcall(cpy_r_r220, cpy_r_r222, 4, 0);
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 567, CPyStatic_checkmember___globals);
        goto CPyL246;
    }
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r217);
    if (likely(PyTuple_Check(cpy_r_r223)))
        cpy_r_r224 = cpy_r_r223;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 567, CPyStatic_checkmember___globals, "tuple", cpy_r_r223);
        goto CPyL247;
    }
    PyObject *cpy_r_r225[1] = {cpy_r_r224};
    cpy_r_r226 = (PyObject **)&cpy_r_r225;
    cpy_r_r227 = _PyObject_Vectorcall(cpy_r_hook, cpy_r_r226, 1, 0);
    CPy_DECREF(cpy_r_hook);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 566, CPyStatic_checkmember___globals);
        goto CPyL248;
    }
    CPy_DECREF(cpy_r_r224);
    if (likely(PyObject_TypeCheck(cpy_r_r227, CPyType_types___Type)))
        cpy_r_r228 = cpy_r_r227;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 566, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r227);
        goto CPyL218;
    }
    cpy_r_result = cpy_r_r228;
CPyL145: ;
    return cpy_r_result;
CPyL146: ;
    cpy_r_r229 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 540, CPyStatic_checkmember___globals);
        goto CPyL218;
    } else
        goto CPyL196;
CPyL147: ;
    cpy_r_r230 = CPyStatics[727]; /* '__setattr__' */
    cpy_r_r231 = CPyDef_nodes___TypeInfo___get_method(cpy_r_info, cpy_r_r230);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 573, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_setattr_meth = cpy_r_r231;
    cpy_r_r232 = PyObject_IsTrue(cpy_r_setattr_meth);
    cpy_r_r233 = cpy_r_r232 >= 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 573, CPyStatic_checkmember___globals);
        goto CPyL249;
    }
    cpy_r_r234 = cpy_r_r232;
    if (!cpy_r_r234) goto CPyL250;
    CPy_INCREF(cpy_r_setattr_meth);
    if ((Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r235 = cpy_r_setattr_meth;
    else {
        cpy_r_r235 = NULL;
    }
    if (cpy_r_r235 != NULL) goto __LL1457;
    if (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___Decorator)
        cpy_r_r235 = cpy_r_setattr_meth;
    else {
        cpy_r_r235 = NULL;
    }
    if (cpy_r_r235 != NULL) goto __LL1457;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_setattr_meth);
    goto CPyL249;
__LL1457: ;
    cpy_r_r236 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r237 = (CPyPtr)&((PyObject *)cpy_r_r235)->ob_type;
    cpy_r_r238 = *(PyObject * *)cpy_r_r237;
    cpy_r_r239 = cpy_r_r238 == cpy_r_r236;
    if (!cpy_r_r239) goto CPyL153;
    cpy_r_r240 = cpy_r_r239;
    goto CPyL154;
CPyL153: ;
    cpy_r_r241 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r242 = (CPyPtr)&((PyObject *)cpy_r_r235)->ob_type;
    cpy_r_r243 = *(PyObject * *)cpy_r_r242;
    cpy_r_r244 = cpy_r_r243 == cpy_r_r241;
    cpy_r_r240 = cpy_r_r244;
CPyL154: ;
    if (!cpy_r_r240) goto CPyL156;
    cpy_r_r245 = cpy_r_r240;
    goto CPyL157;
CPyL156: ;
    cpy_r_r246 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r247 = (CPyPtr)&((PyObject *)cpy_r_r235)->ob_type;
    cpy_r_r248 = *(PyObject * *)cpy_r_r247;
    cpy_r_r249 = cpy_r_r248 == cpy_r_r246;
    cpy_r_r245 = cpy_r_r249;
CPyL157: ;
    if (!cpy_r_r245) goto CPyL160;
    if (likely((Py_TYPE(cpy_r_r235) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r235) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r235) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r250 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r235);
        goto CPyL249;
    }
    cpy_r_r251 = ((mypy___nodes___FuncBaseObject *)cpy_r_r250)->_info;
    CPy_INCREF(cpy_r_r251);
    CPy_DECREF(cpy_r_r250);
    cpy_r_r252 = cpy_r_r251;
    goto CPyL163;
CPyL160: ;
    if (likely(Py_TYPE(cpy_r_r235) == CPyType_nodes___Decorator))
        cpy_r_r253 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r235);
        goto CPyL249;
    }
    cpy_r_r254 = CPY_GET_ATTR(cpy_r_r253, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals);
        goto CPyL249;
    }
CPyL162: ;
    cpy_r_r252 = cpy_r_r254;
CPyL163: ;
    cpy_r_r255 = CPY_GET_ATTR(cpy_r_r252, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r252);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals);
        goto CPyL249;
    }
CPyL164: ;
    cpy_r_r256 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r257 = PyUnicode_Compare(cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    cpy_r_r258 = cpy_r_r257 == -1;
    if (!cpy_r_r258) goto CPyL167;
    cpy_r_r259 = PyErr_Occurred();
    cpy_r_r260 = cpy_r_r259 != NULL;
    if (!cpy_r_r260) goto CPyL167;
    cpy_r_r261 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 574, CPyStatic_checkmember___globals);
        goto CPyL249;
    }
CPyL167: ;
    cpy_r_r262 = cpy_r_r257 != 0;
    if (!cpy_r_r262) goto CPyL250;
    CPy_INCREF(cpy_r_setattr_meth);
    if ((Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r263 = cpy_r_setattr_meth;
    else {
        cpy_r_r263 = NULL;
    }
    if (cpy_r_r263 != NULL) goto __LL1458;
    if (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___Decorator)
        cpy_r_r263 = cpy_r_setattr_meth;
    else {
        cpy_r_r263 = NULL;
    }
    if (cpy_r_r263 != NULL) goto __LL1458;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 576, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_setattr_meth);
    goto CPyL249;
__LL1458: ;
    cpy_r_r264 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r264);
    cpy_r_r265 = NULL;
    cpy_r_r266 = NULL;
    cpy_r_r267 = 0 ? Py_True : Py_False;
    cpy_r_r268 = CPyDef_checkmember___MemberContext___copy_modified(cpy_r_mx, cpy_r_r265, cpy_r_r266, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 581, CPyStatic_checkmember___globals);
        goto CPyL251;
    }
    cpy_r_r269 = CPyDef_checkmember___analyze_decorator_or_funcbase_access(cpy_r_r263, cpy_r_itype, cpy_r_info, cpy_r_r264, cpy_r_name, cpy_r_r268);
    CPy_DECREF(cpy_r_r263);
    CPy_DECREF(cpy_r_r264);
    CPy_DECREF(cpy_r_r268);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 575, CPyStatic_checkmember___globals);
        goto CPyL249;
    }
    cpy_r_bound_type = cpy_r_r269;
    if ((Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r270 = cpy_r_setattr_meth;
    else {
        cpy_r_r270 = NULL;
    }
    if (cpy_r_r270 != NULL) goto __LL1459;
    if (Py_TYPE(cpy_r_setattr_meth) == CPyType_nodes___Decorator)
        cpy_r_r270 = cpy_r_setattr_meth;
    else {
        cpy_r_r270 = NULL;
    }
    if (cpy_r_r270 != NULL) goto __LL1459;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 583, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_setattr_meth);
    goto CPyL252;
__LL1459: ;
    cpy_r_r271 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r272 = (CPyPtr)&((PyObject *)cpy_r_r270)->ob_type;
    cpy_r_r273 = *(PyObject * *)cpy_r_r272;
    cpy_r_r274 = cpy_r_r273 == cpy_r_r271;
    if (!cpy_r_r274) goto CPyL174;
    cpy_r_r275 = cpy_r_r274;
    goto CPyL175;
CPyL174: ;
    cpy_r_r276 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r277 = (CPyPtr)&((PyObject *)cpy_r_r270)->ob_type;
    cpy_r_r278 = *(PyObject * *)cpy_r_r277;
    cpy_r_r279 = cpy_r_r278 == cpy_r_r276;
    cpy_r_r275 = cpy_r_r279;
CPyL175: ;
    if (!cpy_r_r275) goto CPyL177;
    cpy_r_r280 = cpy_r_r275;
    goto CPyL178;
CPyL177: ;
    cpy_r_r281 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r282 = (CPyPtr)&((PyObject *)cpy_r_r270)->ob_type;
    cpy_r_r283 = *(PyObject * *)cpy_r_r282;
    cpy_r_r284 = cpy_r_r283 == cpy_r_r281;
    cpy_r_r280 = cpy_r_r284;
CPyL178: ;
    if (!cpy_r_r280) goto CPyL181;
    if (likely((Py_TYPE(cpy_r_r270) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r270) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r270) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r285 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 583, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r270);
        goto CPyL252;
    }
    cpy_r_r286 = ((mypy___nodes___FuncBaseObject *)cpy_r_r285)->_info;
    CPy_INCREF(cpy_r_r286);
    CPy_DECREF(cpy_r_r285);
    cpy_r_r287 = cpy_r_r286;
    goto CPyL184;
CPyL181: ;
    if (likely(Py_TYPE(cpy_r_r270) == CPyType_nodes___Decorator))
        cpy_r_r288 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 583, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r270);
        goto CPyL252;
    }
    cpy_r_r289 = CPY_GET_ATTR(cpy_r_r288, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r288);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 583, CPyStatic_checkmember___globals);
        goto CPyL252;
    }
CPyL183: ;
    cpy_r_r287 = cpy_r_r289;
CPyL184: ;
    cpy_r_r290 = CPyDef_maptype___map_instance_to_supertype(cpy_r_itype, cpy_r_r287);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 583, CPyStatic_checkmember___globals);
        goto CPyL252;
    }
    cpy_r_typ = cpy_r_r290;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r291 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 584, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL252;
    }
    cpy_r_r292 = CPyDef_expandtype___expand_type_by_instance(cpy_r_bound_type, cpy_r_r291);
    CPy_DECREF(cpy_r_bound_type);
    CPy_DECREF(cpy_r_r291);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 584, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_r293 = CPyDef_types___get_proper_type(cpy_r_r292);
    CPy_DECREF(cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 584, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    if (likely(cpy_r_r293 != Py_None))
        cpy_r_r294 = cpy_r_r293;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 584, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r293);
        goto CPyL218;
    }
    cpy_r_setattr_type = cpy_r_r294;
    cpy_r_r295 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r296 = (CPyPtr)&((PyObject *)cpy_r_setattr_type)->ob_type;
    cpy_r_r297 = *(PyObject * *)cpy_r_r296;
    cpy_r_r298 = cpy_r_r297 == cpy_r_r295;
    if (!cpy_r_r298) goto CPyL253;
    if (likely(Py_TYPE(cpy_r_setattr_type) == CPyType_types___CallableType))
        cpy_r_r299 = cpy_r_setattr_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 585, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_setattr_type);
        goto CPyL254;
    }
    cpy_r_r300 = ((mypy___types___CallableTypeObject *)cpy_r_r299)->_arg_types;
    cpy_r_r301 = (CPyPtr)&((PyVarObject *)cpy_r_r300)->ob_size;
    cpy_r_r302 = *(int64_t *)cpy_r_r301;
    cpy_r_r303 = cpy_r_r302 << 1;
    cpy_r_r304 = (Py_ssize_t)cpy_r_r303 > (Py_ssize_t)0;
    if (!cpy_r_r304) goto CPyL253;
    if (likely(Py_TYPE(cpy_r_setattr_type) == CPyType_types___CallableType))
        cpy_r_r305 = cpy_r_setattr_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 586, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_setattr_type);
        goto CPyL254;
    }
    cpy_r_r306 = ((mypy___types___CallableTypeObject *)cpy_r_r305)->_arg_types;
    cpy_r_r307 = CPyList_GetItemShort(cpy_r_r306, -2);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 586, CPyStatic_checkmember___globals);
        goto CPyL254;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r307, CPyType_types___Type)))
        cpy_r_r308 = cpy_r_r307;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 586, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r307);
        goto CPyL254;
    }
    CPy_DECREF(cpy_r_setattr_type);
    return cpy_r_r308;
CPyL196: ;
    cpy_r_r309 = ((mypy___types___InstanceObject *)cpy_r_itype)->_type;
    cpy_r_r310 = ((mypy___nodes___TypeInfoObject *)cpy_r_r309)->_fallback_to_any;
    if (unlikely(cpy_r_r310 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_member_var_access", "TypeInfo", "fallback_to_any", 588, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
CPyL197: ;
    if (!cpy_r_r310) goto CPyL200;
CPyL198: ;
    cpy_r_r311 = NULL;
    cpy_r_r312 = NULL;
    cpy_r_r313 = CPY_INT_TAG;
    cpy_r_r314 = CPY_INT_TAG;
    cpy_r_r315 = CPyDef_types___AnyType(12, cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 589, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    return cpy_r_r315;
CPyL200: ;
    cpy_r_r316 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    CPy_INCREF(cpy_r_r316);
    cpy_r_r317 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r318 = cpy_r_r316 != cpy_r_r317;
    CPy_DECREF(cpy_r_r316);
    if (!cpy_r_r318) goto CPyL212;
    cpy_r_r319 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r319 != Py_None))
        cpy_r_r320 = cpy_r_r319;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 592, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r319);
        goto CPyL218;
    }
    cpy_r_r321 = ((mypy___types___ExtraAttrsObject *)cpy_r_r320)->_attrs;
    CPy_INCREF(cpy_r_r321);
    cpy_r_r322 = PyDict_Contains(cpy_r_r321, cpy_r_name);
    CPy_DECREF(cpy_r_r321);
    cpy_r_r323 = cpy_r_r322 >= 0;
    if (unlikely(!cpy_r_r323)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 592, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_r324 = cpy_r_r322;
    if (!cpy_r_r324) goto CPyL212;
    cpy_r_r325 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r325 != Py_None))
        cpy_r_r326 = cpy_r_r325;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 594, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r325);
        goto CPyL218;
    }
    cpy_r_r327 = ((mypy___types___ExtraAttrsObject *)cpy_r_r326)->_mod_name;
    CPy_INCREF(cpy_r_r327);
    cpy_r_r328 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r329 = cpy_r_r327 != cpy_r_r328;
    if (!cpy_r_r329) goto CPyL255;
    if (likely(cpy_r_r327 != Py_None))
        cpy_r_r330 = cpy_r_r327;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 594, CPyStatic_checkmember___globals, "str", cpy_r_r327);
        goto CPyL218;
    }
    cpy_r_r331 = CPyStr_IsTrue(cpy_r_r330);
    CPy_DECREF(cpy_r_r330);
    if (cpy_r_r331) goto CPyL212;
CPyL208: ;
    cpy_r_r332 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r332 != Py_None))
        cpy_r_r333 = cpy_r_r332;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 595, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r332);
        goto CPyL218;
    }
    cpy_r_r334 = ((mypy___types___ExtraAttrsObject *)cpy_r_r333)->_attrs;
    CPy_INCREF(cpy_r_r334);
    cpy_r_r335 = CPyDict_GetItem(cpy_r_r334, cpy_r_name);
    CPy_DECREF(cpy_r_r334);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 595, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r335, CPyType_types___Type)))
        cpy_r_r336 = cpy_r_r335;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_member_var_access", 595, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r335);
        goto CPyL218;
    }
    return cpy_r_r336;
CPyL212: ;
    cpy_r_r337 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_super;
    if (!cpy_r_r337) goto CPyL216;
CPyL213: ;
    cpy_r_r338 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r338);
    cpy_r_r339 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r339);
    cpy_r_r340 = CPyDef_messages___MessageBuilder___undefined_in_superclass(cpy_r_r338, cpy_r_name, cpy_r_r339);
    CPy_DECREF(cpy_r_r339);
    CPy_DECREF(cpy_r_r338);
    if (unlikely(cpy_r_r340 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 598, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    cpy_r_r341 = NULL;
    cpy_r_r342 = NULL;
    cpy_r_r343 = CPY_INT_TAG;
    cpy_r_r344 = CPY_INT_TAG;
    cpy_r_r345 = CPyDef_types___AnyType(10, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 599, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    return cpy_r_r345;
CPyL216: ;
    cpy_r_r346 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r346);
    cpy_r_r347 = NULL;
    cpy_r_r348 = CPyDef_checkmember___report_missing_attribute(cpy_r_r346, cpy_r_itype, cpy_r_name, cpy_r_mx, cpy_r_r347);
    CPy_DECREF(cpy_r_r346);
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 601, CPyStatic_checkmember___globals);
        goto CPyL218;
    }
    return cpy_r_r348;
CPyL218: ;
    cpy_r_r349 = NULL;
    return cpy_r_r349;
CPyL219: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL2;
CPyL220: ;
    CPy_DecRef(cpy_r_vv);
    goto CPyL218;
CPyL221: ;
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_vv);
    goto CPyL218;
CPyL222: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL10;
CPyL223: ;
    CPy_DecRef(cpy_r_vv);
    CPy_DecRef(cpy_r_r21);
    goto CPyL218;
CPyL224: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL17;
CPyL225: ;
    CPy_DECREF(cpy_r_vv);
    goto CPyL23;
CPyL226: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL218;
CPyL227: ;
    CPy_DecRef(cpy_r_v);
    goto CPyL218;
CPyL228: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL33;
CPyL229: ;
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_r65);
    goto CPyL218;
CPyL230: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL218;
CPyL231: ;
    CPy_DECREF(cpy_r_v);
    goto CPyL49;
CPyL232: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL146;
CPyL233: ;
    CPy_DecRef(cpy_r_r112);
    goto CPyL218;
CPyL234: ;
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_method_name);
    goto CPyL218;
CPyL235: ;
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_method);
    goto CPyL218;
CPyL236: ;
    CPy_DECREF(cpy_r_method_name);
    CPy_DECREF(cpy_r_method);
    goto CPyL69;
CPyL237: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL92;
CPyL238: ;
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_method);
    goto CPyL218;
CPyL239: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL218;
CPyL240: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_bound_method);
    goto CPyL218;
CPyL241: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_getattr_type);
    goto CPyL218;
CPyL242: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL218;
CPyL243: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL218;
CPyL244: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL145;
CPyL245: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_hook);
    goto CPyL218;
CPyL246: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_r215);
    CPy_DecRef(cpy_r_r216);
    CPy_DecRef(cpy_r_r217);
    goto CPyL218;
CPyL247: ;
    CPy_DecRef(cpy_r_hook);
    goto CPyL218;
CPyL248: ;
    CPy_DecRef(cpy_r_r224);
    goto CPyL218;
CPyL249: ;
    CPy_DecRef(cpy_r_setattr_meth);
    goto CPyL218;
CPyL250: ;
    CPy_DECREF(cpy_r_setattr_meth);
    goto CPyL196;
CPyL251: ;
    CPy_DecRef(cpy_r_setattr_meth);
    CPy_DecRef(cpy_r_r263);
    CPy_DecRef(cpy_r_r264);
    goto CPyL218;
CPyL252: ;
    CPy_DecRef(cpy_r_bound_type);
    goto CPyL218;
CPyL253: ;
    CPy_DECREF(cpy_r_setattr_type);
    goto CPyL196;
CPyL254: ;
    CPy_DecRef(cpy_r_setattr_type);
    goto CPyL218;
CPyL255: ;
    CPy_DECREF(cpy_r_r327);
    goto CPyL208;
}

PyObject *CPyPy_checkmember___analyze_member_var_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "itype", "info", "mx", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_member_var_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_itype;
    PyObject *obj_info;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_itype, &obj_info, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_itype;
    if (likely(Py_TYPE(obj_itype) == CPyType_types___Instance))
        arg_itype = obj_itype;
    else {
        CPy_TypeError("mypy.types.Instance", obj_itype); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_member_var_access(arg_name, arg_itype, arg_info, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_member_var_access", 477, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___check_final_member(PyObject *cpy_r_name, PyObject *cpy_r_info, PyObject *cpy_r_msg, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "check_final_member", "TypeInfo", "mro", 606, CPyStatic_checkmember___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely((Py_TYPE(cpy_r_r6) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeInfo)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_final_member", 606, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_base = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r8);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_final_member", 607, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r9 = CPyDict_GetWithNone(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_final_member", 607, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL1460;
    if (cpy_r_r9 == Py_None)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL1460;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "check_final_member", 607, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r9);
    goto CPyL16;
__LL1460: ;
    cpy_r_sym = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_sym != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL17;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r13 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_final_member", 608, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL18;
    }
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r13)->_node;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r15 = CPyDef_nodes___is_final_node(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_final_member", 608, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
    if (!cpy_r_r15) goto CPyL12;
    cpy_r_r16 = CPyDef_messages___MessageBuilder___cant_assign_to_final(cpy_r_msg, cpy_r_name, 1, cpy_r_ctx);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_final_member", 609, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
CPyL12: ;
    cpy_r_r17 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r17;
    goto CPyL2;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL15: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sym);
    goto CPyL14;
}

PyObject *CPyPy_checkmember___check_final_member(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "info", "msg", "ctx", 0};
    static CPyArg_Parser parser = {"OOOO:check_final_member", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_info;
    PyObject *obj_msg;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_info, &obj_msg, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_checkmember___check_final_member(arg_name, arg_info, arg_msg, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "check_final_member", 604, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_descriptor_access(PyObject *cpy_r_descriptor_type, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_instance_type;
    PyObject *cpy_r_orig_descriptor_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_dunder_get;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_bound_method;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_typ_2;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_dunder_get_type;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_owner_type;
    CPyTagged cpy_r_r111;
    CPyTagged cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyTagged cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_callable_name;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyTagged cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyPtr cpy_r_r140;
    CPyPtr cpy_r_r141;
    CPyPtr cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyPtr cpy_r_r148;
    CPyPtr cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyTagged cpy_r_r160;
    CPyTagged cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyPtr cpy_r_r167;
    CPyPtr cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyPtr cpy_r_r175;
    CPyPtr cpy_r_r176;
    CPyPtr cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    tuple_T2OO cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r__;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_inferred_dunder_get_type;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    CPyPtr cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject **cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyTagged cpy_r_r215;
    CPyTagged cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    cpy_r_r0 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 622, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 622, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL116;
    }
    cpy_r_instance_type = cpy_r_r2;
    CPy_INCREF(cpy_r_descriptor_type);
    cpy_r_orig_descriptor_type = cpy_r_descriptor_type;
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_descriptor_type);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 624, CPyStatic_checkmember___globals);
        goto CPyL117;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 624, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL117;
    }
    cpy_r_descriptor_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_descriptor_type)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) {
        goto CPyL118;
    } else
        goto CPyL15;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___UnionType))
        cpy_r_r9 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 629, CPyStatic_checkmember___globals, "mypy.types.UnionType", cpy_r_descriptor_type);
        goto CPyL119;
    }
    cpy_r_r10 = ((mypy___types___UnionTypeObject *)cpy_r_r9)->_items;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_descriptor_type);
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 629, CPyStatic_checkmember___globals);
        goto CPyL120;
    }
    cpy_r_r14 = 0;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL121;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 629, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL122;
    }
    cpy_r_typ = cpy_r_r20;
    cpy_r_r21 = CPyDef_checkmember___analyze_descriptor_access(cpy_r_typ, cpy_r_mx);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 629, CPyStatic_checkmember___globals);
        goto CPyL122;
    }
    cpy_r_r22 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r21);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 629, CPyStatic_checkmember___globals);
        goto CPyL122;
    }
    cpy_r_r23 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r23;
    goto CPyL8;
CPyL13: ;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = 2;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_typeops___make_simplified_union(cpy_r_r13, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 628, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    return cpy_r_r28;
CPyL15: ;
    cpy_r_r29 = (PyObject *)CPyType_types___Instance;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_descriptor_type)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (cpy_r_r32) {
        goto CPyL17;
    } else
        goto CPyL123;
CPyL16: ;
    return cpy_r_orig_descriptor_type;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 634, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL124;
    }
    cpy_r_r34 = ((mypy___types___InstanceObject *)cpy_r_r33)->_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[707]; /* '__get__' */
    cpy_r_r36 = CPyDef_nodes___TypeInfo___has_readable_member(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 634, CPyStatic_checkmember___globals);
        goto CPyL124;
    }
    if (cpy_r_r36) {
        goto CPyL125;
    } else
        goto CPyL126;
CPyL20: ;
    return cpy_r_orig_descriptor_type;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r37 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 637, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL127;
    }
    cpy_r_r38 = ((mypy___types___InstanceObject *)cpy_r_r37)->_type;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[707]; /* '__get__' */
    cpy_r_r40 = CPyDef_nodes___TypeInfo___get_method(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 637, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    cpy_r_dunder_get = cpy_r_r40;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_dunder_get == cpy_r_r41;
    if (cpy_r_r42) {
        goto CPyL128;
    } else
        goto CPyL31;
CPyL24: ;
    cpy_r_r43 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[1324]; /* '{}.__get__ is not callable' */
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r45 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 641, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL129;
    }
    cpy_r_r46 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    cpy_r_r47 = ((mypy___messages___MessageBuilderObject *)cpy_r_r46)->_options;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_types___Type___str_with_options(cpy_r_r45, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 641, CPyStatic_checkmember___globals);
        goto CPyL129;
    }
    cpy_r_r49 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r50[2] = {cpy_r_r44, cpy_r_r48};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_VectorcallMethod(cpy_r_r49, cpy_r_r51, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 640, CPyStatic_checkmember___globals);
        goto CPyL130;
    }
    CPy_DECREF(cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 640, CPyStatic_checkmember___globals, "str", cpy_r_r52);
        goto CPyL129;
    }
    cpy_r_r54 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = NULL;
    cpy_r_r56 = NULL;
    cpy_r_r57 = 2;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_messages___MessageBuilder___fail(cpy_r_r43, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 639, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_types___AnyType(10, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 645, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    return cpy_r_r64;
CPyL31: ;
    CPy_INCREF(cpy_r_dunder_get);
    if ((Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r65 = cpy_r_dunder_get;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL1461;
    if (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___Decorator)
        cpy_r_r65 = cpy_r_dunder_get;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL1461;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 648, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_dunder_get);
    goto CPyL131;
__LL1461: ;
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r66 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 649, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r67 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 650, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL133;
    }
    cpy_r_r68 = ((mypy___types___InstanceObject *)cpy_r_r67)->_type;
    CPy_INCREF(cpy_r_r68);
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r69 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 651, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL134;
    }
    cpy_r_r70 = CPyStatics[707]; /* '__get__' */
    cpy_r_r71 = CPyDef_checkmember___analyze_decorator_or_funcbase_access(cpy_r_r65, cpy_r_r66, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_mx);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 647, CPyStatic_checkmember___globals);
        goto CPyL131;
    }
    cpy_r_bound_method = cpy_r_r71;
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r72 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL135;
    }
    if ((Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r73 = cpy_r_dunder_get;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL1462;
    if (Py_TYPE(cpy_r_dunder_get) == CPyType_nodes___Decorator)
        cpy_r_r73 = cpy_r_dunder_get;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL1462;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_dunder_get);
    goto CPyL136;
__LL1462: ;
    cpy_r_r74 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_r73)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (!cpy_r_r77) goto CPyL40;
    cpy_r_r78 = cpy_r_r77;
    goto CPyL41;
CPyL40: ;
    cpy_r_r79 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_r73)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    cpy_r_r78 = cpy_r_r82;
CPyL41: ;
    if (!cpy_r_r78) goto CPyL43;
    cpy_r_r83 = cpy_r_r78;
    goto CPyL44;
CPyL43: ;
    cpy_r_r84 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_r73)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    cpy_r_r83 = cpy_r_r87;
CPyL44: ;
    if (!cpy_r_r83) goto CPyL47;
    if (likely((Py_TYPE(cpy_r_r73) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r73) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r73) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r88 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r73);
        goto CPyL136;
    }
    cpy_r_r89 = ((mypy___nodes___FuncBaseObject *)cpy_r_r88)->_info;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89;
    goto CPyL50;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_nodes___Decorator))
        cpy_r_r91 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r73);
        goto CPyL136;
    }
    cpy_r_r92 = CPY_GET_ATTR(cpy_r_r91, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals);
        goto CPyL136;
    }
CPyL49: ;
    cpy_r_r90 = cpy_r_r92;
CPyL50: ;
    cpy_r_r93 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r72, cpy_r_r90);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 656, CPyStatic_checkmember___globals);
        goto CPyL137;
    }
    cpy_r_typ_2 = cpy_r_r93;
    cpy_r_r94 = CPyDef_expandtype___expand_type_by_instance(cpy_r_bound_method, cpy_r_typ_2);
    CPy_DECREF(cpy_r_bound_method);
    CPy_DECREF(cpy_r_typ_2);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 657, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    cpy_r_dunder_get_type = cpy_r_r94;
    cpy_r_r95 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_instance_type)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (!cpy_r_r98) goto CPyL54;
    cpy_r_r99 = cpy_r_r98;
    goto CPyL55;
CPyL54: ;
    cpy_r_r100 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_instance_type)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    cpy_r_r99 = cpy_r_r103;
CPyL55: ;
    if (!cpy_r_r99) goto CPyL65;
    CPy_INCREF(cpy_r_instance_type);
    if (likely((Py_TYPE(cpy_r_instance_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_instance_type) == CPyType_types___Overloaded)))
        cpy_r_r104 = cpy_r_instance_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 659, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_instance_type);
        goto CPyL138;
    }
    cpy_r_r105 = CPY_GET_METHOD(cpy_r_r104, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r104); /* is_type_obj */
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 659, CPyStatic_checkmember___globals);
        goto CPyL138;
    }
    if (!cpy_r_r105) goto CPyL65;
    if (likely((Py_TYPE(cpy_r_instance_type) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_instance_type) == CPyType_types___Overloaded)))
        cpy_r_r106 = cpy_r_instance_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 660, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_instance_type);
        goto CPyL139;
    }
    cpy_r_r107 = CPY_GET_ATTR(cpy_r_r106, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 660, CPyStatic_checkmember___globals);
        goto CPyL139;
    }
CPyL61: ;
    cpy_r_r108 = CPyList_GetItemShortBorrow(cpy_r_r107, 0);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 660, CPyStatic_checkmember___globals);
        goto CPyL140;
    }
    if (likely(Py_TYPE(cpy_r_r108) == CPyType_types___CallableType))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 660, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r108);
        goto CPyL140;
    }
    cpy_r_r110 = ((mypy___types___CallableTypeObject *)cpy_r_r109)->_ret_type;
    CPy_INCREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r107);
    cpy_r_owner_type = cpy_r_r110;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPY_INT_TAG;
    cpy_r_r113 = CPyDef_types___NoneType(cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 661, CPyStatic_checkmember___globals);
        goto CPyL141;
    }
    cpy_r_instance_type = cpy_r_r113;
    goto CPyL70;
CPyL65: ;
    cpy_r_r114 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_instance_type)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    if (!cpy_r_r117) goto CPyL69;
    if (likely(Py_TYPE(cpy_r_instance_type) == CPyType_types___TypeType))
        cpy_r_r118 = cpy_r_instance_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 663, CPyStatic_checkmember___globals, "mypy.types.TypeType", cpy_r_instance_type);
        goto CPyL138;
    }
    cpy_r_r119 = ((mypy___types___TypeTypeObject *)cpy_r_r118)->_item;
    CPy_INCREF(cpy_r_r119);
    CPy_DECREF(cpy_r_instance_type);
    cpy_r_owner_type = cpy_r_r119;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPyDef_types___NoneType(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 664, CPyStatic_checkmember___globals);
        goto CPyL141;
    }
    cpy_r_instance_type = cpy_r_r122;
    goto CPyL70;
CPyL69: ;
    CPy_INCREF(cpy_r_instance_type);
    cpy_r_owner_type = cpy_r_instance_type;
CPyL70: ;
    cpy_r_r123 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r124 = ((mypy___checker___TypeCheckerObject *)cpy_r_r123)->_expr_checker;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_descriptor_access", "TypeChecker", "expr_checker", 668, CPyStatic_checkmember___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r124);
CPyL71: ;
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r125 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 668, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL143;
    }
    cpy_r_r126 = CPyStatics[707]; /* '__get__' */
    cpy_r_r127 = CPyDef_checkexpr___ExpressionChecker___method_fullname(cpy_r_r124, cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 668, CPyStatic_checkmember___globals);
        goto CPyL142;
    }
    cpy_r_callable_name = cpy_r_r127;
    cpy_r_r128 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r129 = ((mypy___checker___TypeCheckerObject *)cpy_r_r128)->_expr_checker;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_descriptor_access", "TypeChecker", "expr_checker", 669, CPyStatic_checkmember___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r129);
CPyL74: ;
    cpy_r_r130 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r130);
    cpy_r_r131 = 2;
    cpy_r_r132 = CPyDef_nodes___TempNode(cpy_r_instance_type, cpy_r_r131, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 673, CPyStatic_checkmember___globals);
        goto CPyL145;
    }
    cpy_r_r133 = CPY_INT_TAG;
    cpy_r_r134 = CPY_INT_TAG;
    cpy_r_r135 = CPyDef_types___TypeType___make_normalized(cpy_r_owner_type, cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 674, CPyStatic_checkmember___globals);
        goto CPyL146;
    }
    cpy_r_r136 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r136);
    cpy_r_r137 = 2;
    cpy_r_r138 = CPyDef_nodes___TempNode(cpy_r_r135, cpy_r_r137, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 674, CPyStatic_checkmember___globals);
        goto CPyL146;
    }
    cpy_r_r139 = PyList_New(2);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 672, CPyStatic_checkmember___globals);
        goto CPyL147;
    }
    cpy_r_r140 = (CPyPtr)&((PyListObject *)cpy_r_r139)->ob_item;
    cpy_r_r141 = *(CPyPtr *)cpy_r_r140;
    *(PyObject * *)cpy_r_r141 = cpy_r_r132;
    cpy_r_r142 = cpy_r_r141 + 8;
    *(PyObject * *)cpy_r_r142 = cpy_r_r138;
    cpy_r_r143 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r143 == NULL)) {
        goto CPyL148;
    } else
        goto CPyL81;
CPyL79: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r144 = 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 676, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r145 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r145 == NULL)) {
        goto CPyL149;
    } else
        goto CPyL84;
CPyL82: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r146 = 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 676, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r147 = PyList_New(2);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 676, CPyStatic_checkmember___globals);
        goto CPyL150;
    }
    cpy_r_r148 = (CPyPtr)&((PyListObject *)cpy_r_r147)->ob_item;
    cpy_r_r149 = *(CPyPtr *)cpy_r_r148;
    CPy_INCREF(cpy_r_r143);
    *(PyObject * *)cpy_r_r149 = cpy_r_r143;
    cpy_r_r150 = cpy_r_r149 + 8;
    CPy_INCREF(cpy_r_r145);
    *(PyObject * *)cpy_r_r150 = cpy_r_r145;
    cpy_r_r151 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r151);
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r152 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 678, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL151;
    }
    cpy_r_r153 = NULL;
    cpy_r_r154 = CPyDef_checkexpr___ExpressionChecker___transform_callee_type(cpy_r_r129, cpy_r_callable_name, cpy_r_dunder_get_type, cpy_r_r139, cpy_r_r147, cpy_r_r151, cpy_r_r153, cpy_r_r152);
    CPy_DECREF(cpy_r_dunder_get_type);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r151);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 669, CPyStatic_checkmember___globals);
        goto CPyL152;
    }
    cpy_r_dunder_get_type = cpy_r_r154;
    cpy_r_r155 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r156 = ((mypy___checker___TypeCheckerObject *)cpy_r_r155)->_expr_checker;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_descriptor_access", "TypeChecker", "expr_checker", 681, CPyStatic_checkmember___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r156);
CPyL88: ;
    cpy_r_r157 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = 2;
    cpy_r_r159 = CPyDef_nodes___TempNode(cpy_r_instance_type, cpy_r_r158, cpy_r_r157);
    CPy_DECREF(cpy_r_instance_type);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 684, CPyStatic_checkmember___globals);
        goto CPyL153;
    }
    cpy_r_r160 = CPY_INT_TAG;
    cpy_r_r161 = CPY_INT_TAG;
    cpy_r_r162 = CPyDef_types___TypeType___make_normalized(cpy_r_owner_type, cpy_r_r160, cpy_r_r161);
    CPy_DECREF(cpy_r_owner_type);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 685, CPyStatic_checkmember___globals);
        goto CPyL154;
    }
    cpy_r_r163 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r163);
    cpy_r_r164 = 2;
    cpy_r_r165 = CPyDef_nodes___TempNode(cpy_r_r162, cpy_r_r164, cpy_r_r163);
    CPy_DECREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 685, CPyStatic_checkmember___globals);
        goto CPyL154;
    }
    cpy_r_r166 = PyList_New(2);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 683, CPyStatic_checkmember___globals);
        goto CPyL155;
    }
    cpy_r_r167 = (CPyPtr)&((PyListObject *)cpy_r_r166)->ob_item;
    cpy_r_r168 = *(CPyPtr *)cpy_r_r167;
    *(PyObject * *)cpy_r_r168 = cpy_r_r159;
    cpy_r_r169 = cpy_r_r168 + 8;
    *(PyObject * *)cpy_r_r169 = cpy_r_r165;
    cpy_r_r170 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r170 == NULL)) {
        goto CPyL156;
    } else
        goto CPyL95;
CPyL93: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 687, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    CPy_Unreachable();
CPyL95: ;
    cpy_r_r172 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r172 == NULL)) {
        goto CPyL157;
    } else
        goto CPyL98;
CPyL96: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r173 = 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 687, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r174 = PyList_New(2);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 687, CPyStatic_checkmember___globals);
        goto CPyL158;
    }
    cpy_r_r175 = (CPyPtr)&((PyListObject *)cpy_r_r174)->ob_item;
    cpy_r_r176 = *(CPyPtr *)cpy_r_r175;
    CPy_INCREF(cpy_r_r170);
    *(PyObject * *)cpy_r_r176 = cpy_r_r170;
    cpy_r_r177 = cpy_r_r176 + 8;
    CPy_INCREF(cpy_r_r172);
    *(PyObject * *)cpy_r_r177 = cpy_r_r172;
    cpy_r_r178 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r178);
    CPy_INCREF(cpy_r_descriptor_type);
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r179 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 689, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL159;
    }
    cpy_r_r180 = NULL;
    cpy_r_r181 = NULL;
    cpy_r_r182 = CPyDef_checkexpr___ExpressionChecker___check_call(cpy_r_r156, cpy_r_dunder_get_type, cpy_r_r166, cpy_r_r174, cpy_r_r178, cpy_r_r180, cpy_r_r181, cpy_r_callable_name, cpy_r_r179);
    CPy_DECREF(cpy_r_dunder_get_type);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_callable_name);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r182.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 681, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    cpy_r_r183 = cpy_r_r182.f0;
    CPy_INCREF(cpy_r_r183);
    cpy_r__ = cpy_r_r183;
    CPy_DECREF(cpy_r__);
    cpy_r_r184 = cpy_r_r182.f1;
    CPy_INCREF(cpy_r_r184);
    CPy_DECREF(cpy_r_r182.f0);
    CPy_DECREF(cpy_r_r182.f1);
    cpy_r_inferred_dunder_get_type = cpy_r_r184;
    cpy_r_r185 = CPyDef_types___get_proper_type(cpy_r_inferred_dunder_get_type);
    CPy_DECREF(cpy_r_inferred_dunder_get_type);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 693, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    if (likely(cpy_r_r185 != Py_None))
        cpy_r_r186 = cpy_r_r185;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 693, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r185);
        goto CPyL119;
    }
    cpy_r_inferred_dunder_get_type = cpy_r_r186;
    cpy_r_r187 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r188 = (CPyPtr)&((PyObject *)cpy_r_inferred_dunder_get_type)->ob_type;
    cpy_r_r189 = *(PyObject * *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 == cpy_r_r187;
    if (cpy_r_r190) {
        goto CPyL160;
    } else
        goto CPyL106;
CPyL104: ;
    if (likely(Py_TYPE(cpy_r_inferred_dunder_get_type) == CPyType_types___AnyType))
        cpy_r_r191 = cpy_r_inferred_dunder_get_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 696, CPyStatic_checkmember___globals, "mypy.types.AnyType", cpy_r_inferred_dunder_get_type);
        goto CPyL116;
    }
    return cpy_r_r191;
CPyL106: ;
    cpy_r_r192 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r193 = (CPyPtr)&((PyObject *)cpy_r_inferred_dunder_get_type)->ob_type;
    cpy_r_r194 = *(PyObject * *)cpy_r_r193;
    cpy_r_r195 = cpy_r_r194 == cpy_r_r192;
    if (cpy_r_r195) {
        goto CPyL161;
    } else
        goto CPyL162;
CPyL107: ;
    cpy_r_r196 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r196);
    cpy_r_r197 = CPyStatics[1324]; /* '{}.__get__ is not callable' */
    if (likely(Py_TYPE(cpy_r_descriptor_type) == CPyType_types___Instance))
        cpy_r_r198 = cpy_r_descriptor_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 701, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_descriptor_type);
        goto CPyL163;
    }
    cpy_r_r199 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    cpy_r_r200 = ((mypy___messages___MessageBuilderObject *)cpy_r_r199)->_options;
    CPy_INCREF(cpy_r_r200);
    cpy_r_r201 = CPyDef_types___Type___str_with_options(cpy_r_r198, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 701, CPyStatic_checkmember___globals);
        goto CPyL163;
    }
    cpy_r_r202 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r203[2] = {cpy_r_r197, cpy_r_r201};
    cpy_r_r204 = (PyObject **)&cpy_r_r203;
    cpy_r_r205 = PyObject_VectorcallMethod(cpy_r_r202, cpy_r_r204, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 700, CPyStatic_checkmember___globals);
        goto CPyL164;
    }
    CPy_DECREF(cpy_r_r201);
    if (likely(PyUnicode_Check(cpy_r_r205)))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 700, CPyStatic_checkmember___globals, "str", cpy_r_r205);
        goto CPyL163;
    }
    cpy_r_r207 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r207);
    cpy_r_r208 = NULL;
    cpy_r_r209 = NULL;
    cpy_r_r210 = 2;
    cpy_r_r211 = NULL;
    cpy_r_r212 = CPyDef_messages___MessageBuilder___fail(cpy_r_r196, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211);
    CPy_DECREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 699, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    cpy_r_r213 = NULL;
    cpy_r_r214 = NULL;
    cpy_r_r215 = CPY_INT_TAG;
    cpy_r_r216 = CPY_INT_TAG;
    cpy_r_r217 = CPyDef_types___AnyType(10, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 705, CPyStatic_checkmember___globals);
        goto CPyL116;
    }
    return cpy_r_r217;
CPyL114: ;
    if (likely(Py_TYPE(cpy_r_inferred_dunder_get_type) == CPyType_types___CallableType))
        cpy_r_r218 = cpy_r_inferred_dunder_get_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_descriptor_access", 707, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_inferred_dunder_get_type);
        goto CPyL165;
    }
    cpy_r_r219 = ((mypy___types___CallableTypeObject *)cpy_r_r218)->_ret_type;
    CPy_INCREF(cpy_r_r219);
    CPy_DECREF(cpy_r_inferred_dunder_get_type);
    return cpy_r_r219;
CPyL116: ;
    cpy_r_r220 = NULL;
    return cpy_r_r220;
CPyL117: ;
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_orig_descriptor_type);
    goto CPyL116;
CPyL118: ;
    CPy_DECREF(cpy_r_instance_type);
    CPy_DECREF(cpy_r_orig_descriptor_type);
    goto CPyL5;
CPyL119: ;
    CPy_DecRef(cpy_r_descriptor_type);
    goto CPyL116;
CPyL120: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL116;
CPyL121: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL13;
CPyL122: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL116;
CPyL123: ;
    CPy_DECREF(cpy_r_descriptor_type);
    CPy_DECREF(cpy_r_instance_type);
    goto CPyL16;
CPyL124: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_orig_descriptor_type);
    goto CPyL116;
CPyL125: ;
    CPy_DECREF(cpy_r_orig_descriptor_type);
    goto CPyL21;
CPyL126: ;
    CPy_DECREF(cpy_r_descriptor_type);
    CPy_DECREF(cpy_r_instance_type);
    goto CPyL20;
CPyL127: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    goto CPyL116;
CPyL128: ;
    CPy_DECREF(cpy_r_instance_type);
    CPy_DECREF(cpy_r_dunder_get);
    goto CPyL24;
CPyL129: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL116;
CPyL130: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r48);
    goto CPyL116;
CPyL131: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get);
    goto CPyL116;
CPyL132: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get);
    CPy_DecRef(cpy_r_r65);
    goto CPyL116;
CPyL133: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    goto CPyL116;
CPyL134: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r68);
    goto CPyL116;
CPyL135: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get);
    CPy_DecRef(cpy_r_bound_method);
    goto CPyL116;
CPyL136: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_bound_method);
    CPy_DecRef(cpy_r_r72);
    goto CPyL116;
CPyL137: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_bound_method);
    goto CPyL116;
CPyL138: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    goto CPyL116;
CPyL139: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    goto CPyL116;
CPyL140: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_r107);
    goto CPyL116;
CPyL141: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    goto CPyL116;
CPyL142: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    goto CPyL116;
CPyL143: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_r124);
    goto CPyL116;
CPyL144: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    goto CPyL116;
CPyL145: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    goto CPyL116;
CPyL146: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r132);
    goto CPyL116;
CPyL147: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r138);
    goto CPyL116;
CPyL148: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r139);
    goto CPyL79;
CPyL149: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r139);
    goto CPyL82;
CPyL150: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r139);
    goto CPyL116;
CPyL151: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r151);
    goto CPyL116;
CPyL152: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_instance_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    goto CPyL116;
CPyL153: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_owner_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    goto CPyL116;
CPyL154: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r159);
    goto CPyL116;
CPyL155: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r165);
    goto CPyL116;
CPyL156: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r166);
    goto CPyL93;
CPyL157: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r166);
    goto CPyL96;
CPyL158: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r166);
    goto CPyL116;
CPyL159: ;
    CPy_DecRef(cpy_r_descriptor_type);
    CPy_DecRef(cpy_r_dunder_get_type);
    CPy_DecRef(cpy_r_callable_name);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r178);
    goto CPyL116;
CPyL160: ;
    CPy_DECREF(cpy_r_descriptor_type);
    goto CPyL104;
CPyL161: ;
    CPy_DECREF(cpy_r_descriptor_type);
    goto CPyL114;
CPyL162: ;
    CPy_DECREF(cpy_r_inferred_dunder_get_type);
    goto CPyL107;
CPyL163: ;
    CPy_DecRef(cpy_r_r196);
    goto CPyL116;
CPyL164: ;
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_r201);
    goto CPyL116;
CPyL165: ;
    CPy_DecRef(cpy_r_inferred_dunder_get_type);
    goto CPyL116;
}

PyObject *CPyPy_checkmember___analyze_descriptor_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"descriptor_type", "mx", 0};
    static CPyArg_Parser parser = {"OO:analyze_descriptor_access", kwlist, 0};
    PyObject *obj_descriptor_type;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_descriptor_type, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_descriptor_type;
    if (likely(PyObject_TypeCheck(obj_descriptor_type, CPyType_types___Type)))
        arg_descriptor_type = obj_descriptor_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_descriptor_type); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_descriptor_access(arg_descriptor_type, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_descriptor_access", 612, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___is_instance_var(PyObject *cpy_r_var) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_instance_var", 714, CPyStatic_checkmember___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_r1)->_names;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "is_instance_var", "TypeInfo", "names", 714, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = PyDict_Contains(cpy_r_r2, cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_instance_var", 714, CPyStatic_checkmember___globals);
        goto CPyL17;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) goto CPyL5;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL16;
CPyL5: ;
    cpy_r_r7 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_r7)->_names;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "is_instance_var", "TypeInfo", "names", 715, CPyStatic_checkmember___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r8);
CPyL6: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_instance_var", 715, CPyStatic_checkmember___globals);
        goto CPyL19;
    }
CPyL7: ;
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_instance_var", 715, CPyStatic_checkmember___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___SymbolTableNode))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "is_instance_var", 715, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_r12 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r11)->_node;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 == cpy_r_var;
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) goto CPyL11;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL15;
CPyL11: ;
    cpy_r_r15 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_classvar;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (cpy_r_r16) goto CPyL13;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL14;
CPyL13: ;
    cpy_r_r18 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_inferred;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r17 = cpy_r_r19;
CPyL14: ;
    cpy_r_r14 = cpy_r_r17;
CPyL15: ;
    cpy_r_r6 = cpy_r_r14;
CPyL16: ;
    return cpy_r_r6;
CPyL17: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
}

PyObject *CPyPy_checkmember___is_instance_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"var", 0};
    static CPyArg_Parser parser = {"O:is_instance_var", kwlist, 0};
    PyObject *obj_var;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_var)) {
        return NULL;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    char retval = CPyDef_checkmember___is_instance_var(arg_var);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "is_instance_var", 710, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_var(PyObject *cpy_r_name, PyObject *cpy_r_var, PyObject *cpy_r_itype, PyObject *cpy_r_info, PyObject *cpy_r_mx, char cpy_r_implicit) {
    PyObject *cpy_r_original_itype;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_t;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_functype;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_dispatched_type;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_signature;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_bound;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_expanded_signature;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyTagged cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_hook;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject **cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    if (cpy_r_implicit != 2) goto CPyL2;
    cpy_r_implicit = 0;
CPyL2: ;
    CPy_INCREF(cpy_r_itype);
    cpy_r_original_itype = cpy_r_itype;
    cpy_r_r0 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_maptype___map_instance_to_supertype(cpy_r_itype, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 740, CPyStatic_checkmember___globals);
        goto CPyL120;
    }
    cpy_r_itype = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___VarObject *)cpy_r_var)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_typ != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL121;
    cpy_r_r5 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) {
        goto CPyL122;
    } else
        goto CPyL8;
CPyL5: ;
    cpy_r_r9 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___PartialType))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 744, CPyStatic_checkmember___globals, "mypy.types.PartialType", cpy_r_typ);
        goto CPyL123;
    }
    cpy_r_r11 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    cpy_r_r12 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_checker___TypeChecker___handle_partial_var_type(cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_var, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 744, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    return cpy_r_r13;
CPyL8: ;
    cpy_r_r14 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r14) goto CPyL12;
CPyL9: ;
    cpy_r_r15 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_property;
    if (!cpy_r_r15) goto CPyL12;
CPyL10: ;
    cpy_r_r16 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_settable_property;
    if (cpy_r_r16) goto CPyL12;
CPyL11: ;
    cpy_r_r17 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_itype)->_type;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_messages___MessageBuilder___read_only_property(cpy_r_r17, cpy_r_name, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 747, CPyStatic_checkmember___globals);
        goto CPyL124;
    }
CPyL12: ;
    cpy_r_r21 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r21) goto CPyL15;
CPyL13: ;
    cpy_r_r22 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_classvar;
    if (!cpy_r_r22) goto CPyL15;
CPyL14: ;
    cpy_r_r23 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_messages___MessageBuilder___cant_assign_to_classvar(cpy_r_r23, cpy_r_name, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 749, CPyStatic_checkmember___globals);
        goto CPyL124;
    }
CPyL15: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r26 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 750, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL124;
    }
    cpy_r_r27 = CPyDef_expandtype___freshen_all_functions_type_vars(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 750, CPyStatic_checkmember___globals);
        goto CPyL124;
    }
    cpy_r_t = cpy_r_r27;
    cpy_r_r28 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_self;
    if (cpy_r_r28) goto CPyL19;
CPyL18: ;
    cpy_r_r29 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_super;
    if (!cpy_r_r29) goto CPyL125;
CPyL19: ;
    cpy_r_r30 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyDef_types___get_proper_type(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 752, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 752, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r31);
        goto CPyL126;
    }
    cpy_r_r33 = CPyDef_typeops___supported_self_type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 751, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    if (cpy_r_r33) {
        goto CPyL125;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r34 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_expandtype___expand_self_type(cpy_r_var, cpy_r_t, cpy_r_r34);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 754, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    cpy_r_t = cpy_r_r35;
    goto CPyL38;
CPyL25: ;
    cpy_r_r36 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_self;
    if (!cpy_r_r36) goto CPyL128;
CPyL26: ;
    cpy_r_r37 = ((mypy___types___InstanceObject *)cpy_r_original_itype)->_type;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL128;
    cpy_r_r40 = ((mypy___types___InstanceObject *)cpy_r_original_itype)->_type;
    cpy_r_r41 = ((mypy___nodes___TypeInfoObject *)cpy_r_r40)->_self_type;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_var", "TypeInfo", "self_type", 760, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
CPyL28: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL128;
    cpy_r_r44 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r45 = ((mypy___checker___TypeCheckerObject *)cpy_r_r44)->_scope;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_var", "TypeChecker", "scope", 762, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r45);
CPyL30: ;
    cpy_r_r46 = CPyDef_checker___CheckerScope___active_self_type(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 762, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    cpy_r_r47 = PyObject_RichCompare(cpy_r_original_itype, cpy_r_r46, 2);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 762, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    if (unlikely(!PyBool_Check(cpy_r_r47))) {
        CPy_TypeError("bool", cpy_r_r47); cpy_r_r48 = 2;
    } else
        cpy_r_r48 = cpy_r_r47 == Py_True;
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 762, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    if (!cpy_r_r48) goto CPyL128;
    cpy_r_r49 = ((mypy___types___InstanceObject *)cpy_r_original_itype)->_type;
    cpy_r_r50 = ((mypy___nodes___TypeInfoObject *)cpy_r_r49)->_self_type;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_var", "TypeInfo", "self_type", 764, CPyStatic_checkmember___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r50);
CPyL35: ;
    if (likely(cpy_r_r50 != Py_None))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 764, CPyStatic_checkmember___globals, "mypy.types.TypeVarType", cpy_r_r50);
        goto CPyL126;
    }
    CPy_DECREF(cpy_r_original_itype);
    cpy_r_r52 = CPyDef_expandtype___expand_self_type(cpy_r_var, cpy_r_t, cpy_r_r51);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 764, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    cpy_r_t = cpy_r_r52;
CPyL38: ;
    cpy_r_r53 = CPyDef_expandtype___expand_type_by_instance(cpy_r_t, cpy_r_itype);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 765, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    cpy_r_r54 = CPyDef_types___get_proper_type(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 765, CPyStatic_checkmember___globals);
        goto CPyL127;
    }
    if (likely(cpy_r_r54 != Py_None))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 765, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r54);
        goto CPyL127;
    }
    cpy_r_t = cpy_r_r55;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r56 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 766, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL129;
    }
    cpy_r_r57 = CPyDef_checkmember___freeze_all_type_vars(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 766, CPyStatic_checkmember___globals);
        goto CPyL129;
    }
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r58 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 767, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL127;
    }
    cpy_r_result = cpy_r_r58;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r59 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 768, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL130;
    }
    cpy_r_r60 = CPyDef_types___get_proper_type(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 768, CPyStatic_checkmember___globals);
        goto CPyL130;
    }
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 768, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r60);
        goto CPyL130;
    }
    cpy_r_typ = cpy_r_r61;
    cpy_r_r62 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_initialized_in_class;
    if (!cpy_r_r62) goto CPyL131;
CPyL48: ;
    cpy_r_r63 = CPyDef_checkmember___is_instance_var(cpy_r_var);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 771, CPyStatic_checkmember___globals);
        goto CPyL132;
    }
    if (!cpy_r_r63) goto CPyL51;
    cpy_r_r64 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_operator;
    if (!cpy_r_r64) goto CPyL131;
CPyL51: ;
    cpy_r_r65 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL53;
    cpy_r_r69 = cpy_r_r68;
    goto CPyL54;
CPyL53: ;
    cpy_r_r70 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    cpy_r_r69 = cpy_r_r73;
CPyL54: ;
    if (!cpy_r_r69) goto CPyL131;
    CPy_INCREF(cpy_r_typ);
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r74 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 773, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL132;
    }
    cpy_r_r75 = CPY_GET_METHOD(cpy_r_r74, CPyType_types___FunctionLike, 16, mypy___types___FunctionLikeObject, char (*)(PyObject *))(cpy_r_r74); /* is_type_obj */
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 773, CPyStatic_checkmember___globals);
        goto CPyL132;
    }
    if (cpy_r_r75) goto CPyL131;
    cpy_r_r76 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r76) goto CPyL63;
CPyL59: ;
    cpy_r_r77 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_property;
    if (!cpy_r_r77) goto CPyL62;
CPyL60: ;
    cpy_r_r78 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_settable_property;
    if (cpy_r_r78) goto CPyL63;
CPyL61: ;
    cpy_r_r79 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = ((mypy___types___InstanceObject *)cpy_r_itype)->_type;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyDef_messages___MessageBuilder___read_only_property(cpy_r_r79, cpy_r_name, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 778, CPyStatic_checkmember___globals);
        goto CPyL132;
    } else
        goto CPyL63;
CPyL62: ;
    cpy_r_r83 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyDef_messages___MessageBuilder___cant_assign_to_method(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 780, CPyStatic_checkmember___globals);
        goto CPyL132;
    }
CPyL63: ;
    cpy_r_r86 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_staticmethod;
    if (cpy_r_r86) {
        goto CPyL131;
    } else
        goto CPyL133;
CPyL64: ;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r87 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 785, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL134;
    }
    cpy_r_functype = cpy_r_r87;
    cpy_r_r88 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyDef_meet___meet_types(cpy_r_r88, cpy_r_itype);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 793, CPyStatic_checkmember___globals);
        goto CPyL135;
    }
    cpy_r_dispatched_type = cpy_r_r89;
    cpy_r_r90 = CPyDef_expandtype___freshen_all_functions_type_vars(cpy_r_functype);
    CPy_DECREF(cpy_r_functype);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 794, CPyStatic_checkmember___globals);
        goto CPyL136;
    }
    if (likely((Py_TYPE(cpy_r_r90) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r90) == CPyType_types___Overloaded)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 794, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r90);
        goto CPyL136;
    }
    cpy_r_signature = cpy_r_r91;
    cpy_r_r92 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyDef_expandtype___expand_self_type(cpy_r_var, cpy_r_signature, cpy_r_r92);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 795, CPyStatic_checkmember___globals);
        goto CPyL136;
    }
    cpy_r_r94 = CPyDef_types___get_proper_type(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 795, CPyStatic_checkmember___globals);
        goto CPyL136;
    }
    if (likely(cpy_r_r94 != Py_None))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 795, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r94);
        goto CPyL136;
    }
    cpy_r_bound = cpy_r_r95;
    cpy_r_r96 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_bound)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (!cpy_r_r99) goto CPyL73;
    cpy_r_r100 = cpy_r_r99;
    goto CPyL74;
CPyL73: ;
    cpy_r_r101 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r102 = (CPyPtr)&((PyObject *)cpy_r_bound)->ob_type;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 == cpy_r_r101;
    cpy_r_r100 = cpy_r_r104;
CPyL74: ;
    if (cpy_r_r100) {
        goto CPyL77;
    } else
        goto CPyL137;
CPyL75: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 796, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    CPy_Unreachable();
CPyL77: ;
    if (likely((Py_TYPE(cpy_r_bound) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_bound) == CPyType_types___Overloaded)))
        cpy_r_r106 = cpy_r_bound;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 797, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_bound);
        goto CPyL136;
    }
    cpy_r_signature = cpy_r_r106;
    cpy_r_r107 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_classmethod;
    cpy_r_r108 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = CPyDef_checkmember___check_self_arg(cpy_r_signature, cpy_r_dispatched_type, cpy_r_r107, cpy_r_r108, cpy_r_name, cpy_r_r109);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_dispatched_type);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 798, CPyStatic_checkmember___globals);
        goto CPyL134;
    }
    cpy_r_signature = cpy_r_r110;
    cpy_r_r111 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_classmethod;
    cpy_r_r113 = CPyDef_typeops___bind_self(cpy_r_signature, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 801, CPyStatic_checkmember___globals);
        goto CPyL134;
    }
    cpy_r_signature = cpy_r_r113;
    cpy_r_r114 = CPyDef_expandtype___expand_type_by_instance(cpy_r_signature, cpy_r_itype);
    CPy_DECREF(cpy_r_signature);
    CPy_DECREF(cpy_r_itype);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 802, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r114, CPyType_types___ProperType)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 802, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r114);
        goto CPyL119;
    }
    cpy_r_expanded_signature = cpy_r_r115;
    cpy_r_r116 = CPyDef_checkmember___freeze_all_type_vars(cpy_r_expanded_signature);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 803, CPyStatic_checkmember___globals);
        goto CPyL138;
    }
    cpy_r_r117 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_property;
    if (!cpy_r_r117) goto CPyL89;
CPyL84: ;
    cpy_r_r118 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r119 = (CPyPtr)&((PyObject *)cpy_r_expanded_signature)->ob_type;
    cpy_r_r120 = *(PyObject * *)cpy_r_r119;
    cpy_r_r121 = cpy_r_r120 == cpy_r_r118;
    if (cpy_r_r121) {
        goto CPyL87;
    } else
        goto CPyL139;
CPyL85: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 806, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    CPy_Unreachable();
CPyL87: ;
    if (likely(Py_TYPE(cpy_r_expanded_signature) == CPyType_types___CallableType))
        cpy_r_r123 = cpy_r_expanded_signature;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 807, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_expanded_signature);
        goto CPyL138;
    }
    cpy_r_r124 = ((mypy___types___CallableTypeObject *)cpy_r_r123)->_ret_type;
    CPy_INCREF(cpy_r_r124);
    CPy_DECREF(cpy_r_expanded_signature);
    cpy_r_result = cpy_r_r124;
    goto CPyL96;
CPyL89: ;
    cpy_r_result = cpy_r_expanded_signature;
    goto CPyL96;
CPyL90: ;
    cpy_r_r125 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_ready;
    if (cpy_r_r125) goto CPyL94;
CPyL91: ;
    cpy_r_r126 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_no_deferral;
    if (cpy_r_r126) goto CPyL94;
CPyL92: ;
    cpy_r_r127 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 812, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
CPyL93: ;
    cpy_r_r128 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = CPyDef_checkmember___MemberContext___not_ready_callback(cpy_r_mx, cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 812, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
CPyL94: ;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPY_INT_TAG;
    cpy_r_r133 = CPY_INT_TAG;
    cpy_r_r134 = CPyDef_types___AnyType(12, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 814, CPyStatic_checkmember___globals);
        goto CPyL119;
    }
    cpy_r_result = cpy_r_r134;
CPyL96: ;
    cpy_r_r135 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    cpy_r_r136 = CPY_GET_ATTR(cpy_r_r135, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 815, CPyStatic_checkmember___globals);
        goto CPyL140;
    }
CPyL97: ;
    cpy_r_r137 = CPyStatics[224]; /* '.' */
    cpy_r_r138 = CPyStr_Build(3, cpy_r_r136, cpy_r_r137, cpy_r_name);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 815, CPyStatic_checkmember___globals);
        goto CPyL140;
    }
    cpy_r_fullname = cpy_r_r138;
    cpy_r_r139 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r140 = ((mypy___checker___TypeCheckerObject *)cpy_r_r139)->_plugin;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_var", "TypeChecker", "plugin", 816, CPyStatic_checkmember___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r140);
CPyL99: ;
    cpy_r_r141 = CPY_GET_METHOD(cpy_r_r140, CPyType_plugin___Plugin, 11, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r140, cpy_r_fullname); /* get_attribute_hook */
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 816, CPyStatic_checkmember___globals);
        goto CPyL140;
    }
    cpy_r_hook = cpy_r_r141;
    cpy_r_r142 = PyObject_IsTrue(cpy_r_result);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 767, CPyStatic_checkmember___globals);
        goto CPyL142;
    }
    cpy_r_r144 = cpy_r_r142;
    if (!cpy_r_r144) goto CPyL106;
    cpy_r_r145 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (cpy_r_r145) goto CPyL106;
CPyL103: ;
    if (cpy_r_implicit) goto CPyL106;
    cpy_r_r146 = CPyDef_checkmember___analyze_descriptor_access(cpy_r_result, cpy_r_mx);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 818, CPyStatic_checkmember___globals);
        goto CPyL143;
    }
    cpy_r_result = cpy_r_r146;
CPyL106: ;
    cpy_r_r147 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r148 = cpy_r_hook != cpy_r_r147;
    if (!cpy_r_r148) goto CPyL144;
    CPy_INCREF(cpy_r_hook);
    cpy_r_r149 = cpy_r_hook;
    cpy_r_r150 = PyObject_IsTrue(cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 816, CPyStatic_checkmember___globals);
        goto CPyL142;
    }
    cpy_r_r152 = cpy_r_r150;
    if (!cpy_r_r152) goto CPyL144;
    cpy_r_r153 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r153);
    cpy_r_r154 = CPyDef_types___get_proper_type(cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 821, CPyStatic_checkmember___globals);
        goto CPyL142;
    }
    if (likely(cpy_r_r154 != Py_None))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 821, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r154);
        goto CPyL142;
    }
    cpy_r_r156 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r156);
    cpy_r_r157 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = CPyStatic_checkmember___globals;
    cpy_r_r159 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r160 = CPyDict_GetItem(cpy_r_r158, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 821, CPyStatic_checkmember___globals);
        goto CPyL145;
    }
    PyObject *cpy_r_r161[4] = {cpy_r_r155, cpy_r_result, cpy_r_r156, cpy_r_r157};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = _PyObject_Vectorcall(cpy_r_r160, cpy_r_r162, 4, 0);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 821, CPyStatic_checkmember___globals);
        goto CPyL145;
    }
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r157);
    if (likely(PyTuple_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 821, CPyStatic_checkmember___globals, "tuple", cpy_r_r163);
        goto CPyL143;
    }
    PyObject *cpy_r_r165[1] = {cpy_r_r164};
    cpy_r_r166 = (PyObject **)&cpy_r_r165;
    cpy_r_r167 = _PyObject_Vectorcall(cpy_r_hook, cpy_r_r166, 1, 0);
    CPy_DECREF(cpy_r_hook);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 820, CPyStatic_checkmember___globals);
        goto CPyL146;
    }
    CPy_DECREF(cpy_r_r164);
    if (likely(PyObject_TypeCheck(cpy_r_r167, CPyType_types___Type)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_var", 820, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r167);
        goto CPyL119;
    }
    cpy_r_result = cpy_r_r168;
CPyL118: ;
    return cpy_r_result;
CPyL119: ;
    cpy_r_r169 = NULL;
    return cpy_r_r169;
CPyL120: ;
    CPy_DecRef(cpy_r_original_itype);
    goto CPyL119;
CPyL121: ;
    CPy_DECREF(cpy_r_itype);
    CPy_DECREF(cpy_r_original_itype);
    CPy_DECREF(cpy_r_typ);
    goto CPyL90;
CPyL122: ;
    CPy_DECREF(cpy_r_itype);
    CPy_DECREF(cpy_r_original_itype);
    goto CPyL5;
CPyL123: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL119;
CPyL124: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_original_itype);
    CPy_DecRef(cpy_r_typ);
    goto CPyL119;
CPyL125: ;
    CPy_DECREF(cpy_r_original_itype);
    goto CPyL23;
CPyL126: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_original_itype);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_t);
    goto CPyL119;
CPyL127: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_typ);
    goto CPyL119;
CPyL128: ;
    CPy_DECREF(cpy_r_original_itype);
    goto CPyL38;
CPyL129: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_t);
    goto CPyL119;
CPyL130: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_result);
    goto CPyL119;
CPyL131: ;
    CPy_DECREF(cpy_r_itype);
    CPy_DECREF(cpy_r_typ);
    goto CPyL96;
CPyL132: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_result);
    goto CPyL119;
CPyL133: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL64;
CPyL134: ;
    CPy_DecRef(cpy_r_itype);
    goto CPyL119;
CPyL135: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_functype);
    goto CPyL119;
CPyL136: ;
    CPy_DecRef(cpy_r_itype);
    CPy_DecRef(cpy_r_dispatched_type);
    goto CPyL119;
CPyL137: ;
    CPy_DECREF(cpy_r_itype);
    CPy_DECREF(cpy_r_dispatched_type);
    CPy_DECREF(cpy_r_bound);
    goto CPyL75;
CPyL138: ;
    CPy_DecRef(cpy_r_expanded_signature);
    goto CPyL119;
CPyL139: ;
    CPy_DECREF(cpy_r_expanded_signature);
    goto CPyL85;
CPyL140: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL119;
CPyL141: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL119;
CPyL142: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_hook);
    goto CPyL119;
CPyL143: ;
    CPy_DecRef(cpy_r_hook);
    goto CPyL119;
CPyL144: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL118;
CPyL145: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL119;
CPyL146: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL119;
}

PyObject *CPyPy_checkmember___analyze_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "var", "itype", "info", "mx", "implicit", 0};
    static CPyArg_Parser parser = {"OOOOO|$O:analyze_var", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_var;
    PyObject *obj_itype;
    PyObject *obj_info;
    PyObject *obj_mx;
    PyObject *obj_implicit = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_var, &obj_itype, &obj_info, &obj_mx, &obj_implicit)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    PyObject *arg_itype;
    if (likely(Py_TYPE(obj_itype) == CPyType_types___Instance))
        arg_itype = obj_itype;
    else {
        CPy_TypeError("mypy.types.Instance", obj_itype); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    char arg_implicit;
    if (obj_implicit == NULL) {
        arg_implicit = 2;
    } else if (unlikely(!PyBool_Check(obj_implicit))) {
        CPy_TypeError("bool", obj_implicit); goto fail;
    } else
        arg_implicit = obj_implicit == Py_True;
    PyObject *retval = CPyDef_checkmember___analyze_var(arg_name, arg_var, arg_itype, arg_info, arg_mx, arg_implicit);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_var", 722, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___freeze_all_type_vars(PyObject *cpy_r_member_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_checkmember___FreezeTypeVarsVisitor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "freeze_all_type_vars", 827, CPyStatic_checkmember___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_member_type, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_member_type, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "freeze_all_type_vars", 827, CPyStatic_checkmember___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_checkmember___freeze_all_type_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"member_type", 0};
    static CPyArg_Parser parser = {"O:freeze_all_type_vars", kwlist, 0};
    PyObject *obj_member_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_member_type)) {
        return NULL;
    }
    PyObject *arg_member_type;
    if (likely(PyObject_TypeCheck(obj_member_type, CPyType_types___Type)))
        arg_member_type = obj_member_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_member_type); 
        goto fail;
    }
    char retval = CPyDef_checkmember___freeze_all_type_vars(arg_member_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "freeze_all_type_vars", 826, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_variables;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "visit_callable_type", 832, CPyStatic_checkmember___globals);
        goto CPyL7;
    }
CPyL1: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL8;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___TypeVarLikeType)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "visit_callable_type", 832, CPyStatic_checkmember___globals, "mypy.types.TypeVarLikeType", cpy_r_r2);
        goto CPyL9;
    }
    cpy_r_v = cpy_r_r3;
    cpy_r_r4 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_id;
    CPyTagged_DECREF(((mypy___types___TypeVarIdObject *)cpy_r_r4)->_meta_level);
    ((mypy___types___TypeVarIdObject *)cpy_r_r4)->_meta_level = 0;
    CPy_DECREF(cpy_r_v);
    goto CPyL1;
CPyL4: ;
    cpy_r_r6 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkmember.py", "visit_callable_type", 832, CPyStatic_checkmember___globals);
        goto CPyL7;
    }
    cpy_r_r7 = CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "visit_callable_type", 834, CPyStatic_checkmember___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL4;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_checkmember___FreezeTypeVarsVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___FreezeTypeVarsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.FreezeTypeVarsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "visit_callable_type", 831, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_checkmember___FreezeTypeVarsVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkmember___FreezeTypeVarsVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkmember.FreezeTypeVarsVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___FreezeTypeVarsVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___lookup_member_var_or_accessor(PyObject *cpy_r_info, PyObject *cpy_r_name, char cpy_r_is_lvalue) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "lookup_member_var_or_accessor", 840, CPyStatic_checkmember___globals);
        goto CPyL5;
    }
    cpy_r_node = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_node != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL6;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r3 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "lookup_member_var_or_accessor", 842, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL7;
    }
    cpy_r_r4 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r3)->_node;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_node);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL4;
CPyL7: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL5;
}

PyObject *CPyPy_checkmember___lookup_member_var_or_accessor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "name", "is_lvalue", 0};
    static CPyArg_Parser parser = {"OOO:lookup_member_var_or_accessor", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_name;
    PyObject *obj_is_lvalue;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_name, &obj_is_lvalue)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_is_lvalue;
    if (unlikely(!PyBool_Check(obj_is_lvalue))) {
        CPy_TypeError("bool", obj_is_lvalue); goto fail;
    } else
        arg_is_lvalue = obj_is_lvalue == Py_True;
    PyObject *retval = CPyDef_checkmember___lookup_member_var_or_accessor(arg_info, arg_name, arg_is_lvalue);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "lookup_member_var_or_accessor", 837, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___check_self_arg(PyObject *cpy_r_functype, PyObject *cpy_r_dispatched_arg_type, char cpy_r_is_classmethod, PyObject *cpy_r_context, PyObject *cpy_r_name, PyObject *cpy_r_msg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_new_items;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_selfarg;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_functype, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 868, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
CPyL1: ;
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) {
        goto CPyL3;
    } else
        goto CPyL55;
CPyL2: ;
    CPy_INCREF(cpy_r_functype);
    return cpy_r_functype;
CPyL3: ;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 871, CPyStatic_checkmember___globals);
        goto CPyL56;
    }
    cpy_r_new_items = cpy_r_r5;
    if (!cpy_r_is_classmethod) goto CPyL57;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___TypeType___make_normalized(cpy_r_dispatched_arg_type, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 873, CPyStatic_checkmember___globals);
        goto CPyL58;
    }
    cpy_r_dispatched_arg_type = cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = 0;
CPyL8: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL43;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_types___CallableType))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 875, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r14);
        goto CPyL59;
    }
    cpy_r_item = cpy_r_r15;
    cpy_r_r16 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_types;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL60;
    cpy_r_r21 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_kinds;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_r21, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___ArgKind))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals, "mypy.nodes.ArgKind", cpy_r_r22);
        goto CPyL61;
    }
    cpy_r_r24 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r26 = cpy_r_r23 != cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    if (cpy_r_r26) goto CPyL18;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL24;
CPyL18: ;
    cpy_r_r28 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_kinds;
    cpy_r_r29 = CPyList_GetItemShort(cpy_r_r28, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___ArgKind))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals, "mypy.nodes.ArgKind", cpy_r_r29);
        goto CPyL61;
    }
    cpy_r_r31 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 876, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r33 = cpy_r_r30 != cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    cpy_r_r27 = cpy_r_r33;
CPyL24: ;
    if (cpy_r_r27) {
        goto CPyL60;
    } else
        goto CPyL27;
CPyL25: ;
    cpy_r_r34 = CPyDef_messages___MessageBuilder___no_formal_self(cpy_r_msg, cpy_r_name, cpy_r_item, cpy_r_context);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 878, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_functype);
    return cpy_r_functype;
CPyL27: ;
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_types;
    cpy_r_r36 = CPyList_GetItemShort(cpy_r_r35, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 883, CPyStatic_checkmember___globals);
        goto CPyL61;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_types___Type)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 883, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r36);
        goto CPyL61;
    }
    cpy_r_r38 = CPyDef_types___get_proper_type(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 883, CPyStatic_checkmember___globals);
        goto CPyL61;
    }
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 883, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r38);
        goto CPyL61;
    }
    cpy_r_selfarg = cpy_r_r39;
    cpy_r_r40 = CPyDef_typeops___erase_to_bound(cpy_r_selfarg);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 884, CPyStatic_checkmember___globals);
        goto CPyL64;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_erasetype___erase_typevars(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 884, CPyStatic_checkmember___globals);
        goto CPyL64;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = 2;
    cpy_r_r45 = 2;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = NULL;
    cpy_r_r50 = CPyDef_subtypes___is_subtype(cpy_r_dispatched_arg_type, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 884, CPyStatic_checkmember___globals);
        goto CPyL64;
    }
    if (cpy_r_r50) {
        goto CPyL65;
    } else
        goto CPyL36;
CPyL35: ;
    cpy_r_r51 = PyList_Append(cpy_r_new_items, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 885, CPyStatic_checkmember___globals);
        goto CPyL59;
    } else
        goto CPyL42;
CPyL36: ;
    cpy_r_r53 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_selfarg)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL66;
    } else
        goto CPyL67;
CPyL37: ;
    cpy_r_r57 = PyList_Append(cpy_r_new_items, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 888, CPyStatic_checkmember___globals);
        goto CPyL59;
    } else
        goto CPyL42;
CPyL38: ;
    cpy_r_r59 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_selfarg)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    CPy_DECREF(cpy_r_selfarg);
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    if (cpy_r_r62) {
        goto CPyL68;
    } else
        goto CPyL42;
CPyL39: ;
    cpy_r_r63 = CPyModule_builtins;
    cpy_r_r64 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 890, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_Raise(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 890, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r66 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r66;
    goto CPyL8;
CPyL43: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = cpy_r_r69 != 0;
    if (cpy_r_r70) {
        goto CPyL69;
    } else
        goto CPyL70;
CPyL44: ;
    cpy_r_r71 = CPyList_GetItemShort(cpy_r_items, 0);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 894, CPyStatic_checkmember___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_types___CallableType))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 894, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r71);
        goto CPyL71;
    }
    cpy_r_r73 = CPyDef_messages___MessageBuilder___incompatible_self_argument(cpy_r_msg, cpy_r_name, cpy_r_dispatched_arg_type, cpy_r_r72, cpy_r_is_classmethod, cpy_r_context);
    CPy_DECREF(cpy_r_dispatched_arg_type);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 893, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_functype);
    return cpy_r_functype;
CPyL48: ;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_new_items)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 == 2;
    if (!cpy_r_r77) goto CPyL52;
    cpy_r_r78 = CPyList_GetItemShort(cpy_r_new_items, 0);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 898, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_types___CallableType))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "check_self_arg", 898, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r78);
        goto CPyL54;
    }
    return cpy_r_r79;
CPyL52: ;
    cpy_r_r80 = CPyDef_types___Overloaded(cpy_r_new_items);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 899, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    return cpy_r_r80;
CPyL54: ;
    cpy_r_r81 = NULL;
    return cpy_r_r81;
CPyL55: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL2;
CPyL56: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL54;
CPyL57: ;
    CPy_INCREF(cpy_r_dispatched_arg_type);
    goto CPyL7;
CPyL58: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL54;
CPyL59: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    goto CPyL54;
CPyL60: ;
    CPy_DECREF(cpy_r_dispatched_arg_type);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_new_items);
    goto CPyL25;
CPyL61: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_item);
    goto CPyL54;
CPyL62: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r23);
    goto CPyL14;
CPyL63: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r30);
    goto CPyL21;
CPyL64: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_selfarg);
    goto CPyL54;
CPyL65: ;
    CPy_DECREF(cpy_r_selfarg);
    goto CPyL35;
CPyL66: ;
    CPy_DECREF(cpy_r_selfarg);
    goto CPyL37;
CPyL67: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL38;
CPyL68: ;
    CPy_DECREF(cpy_r_dispatched_arg_type);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_new_items);
    goto CPyL39;
CPyL69: ;
    CPy_DECREF(cpy_r_dispatched_arg_type);
    CPy_DECREF(cpy_r_items);
    goto CPyL48;
CPyL70: ;
    CPy_DECREF(cpy_r_new_items);
    goto CPyL44;
CPyL71: ;
    CPy_DecRef(cpy_r_dispatched_arg_type);
    goto CPyL54;
}

PyObject *CPyPy_checkmember___check_self_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"functype", "dispatched_arg_type", "is_classmethod", "context", "name", "msg", 0};
    static CPyArg_Parser parser = {"OOOOOO:check_self_arg", kwlist, 0};
    PyObject *obj_functype;
    PyObject *obj_dispatched_arg_type;
    PyObject *obj_is_classmethod;
    PyObject *obj_context;
    PyObject *obj_name;
    PyObject *obj_msg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_functype, &obj_dispatched_arg_type, &obj_is_classmethod, &obj_context, &obj_name, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_functype;
    if (likely((Py_TYPE(obj_functype) == CPyType_types___CallableType) || (Py_TYPE(obj_functype) == CPyType_types___Overloaded)))
        arg_functype = obj_functype;
    else {
        CPy_TypeError("mypy.types.FunctionLike", obj_functype); 
        goto fail;
    }
    PyObject *arg_dispatched_arg_type;
    if (likely(PyObject_TypeCheck(obj_dispatched_arg_type, CPyType_types___Type)))
        arg_dispatched_arg_type = obj_dispatched_arg_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_dispatched_arg_type); 
        goto fail;
    }
    char arg_is_classmethod;
    if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___check_self_arg(arg_functype, arg_dispatched_arg_type, arg_is_classmethod, arg_context, arg_name, arg_msg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "check_self_arg", 847, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_class_attribute_access(PyObject *cpy_r_itype, PyObject *cpy_r_name, PyObject *cpy_r_mx, PyObject *cpy_r_mcs_fallback, PyObject *cpy_r_override_info, PyObject *cpy_r_original_vars) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_hook;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_is_decorated;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_is_method;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyPtr cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_enum_class_attribute_type;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyPtr cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_symnode;
    PyObject *cpy_r_r191;
    CPyPtr cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    CPyPtr cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_super_info;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    tuple_T2OO cpy_r_r220;
    tuple_T2OT2OO cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyPtr cpy_r_r230;
    PyObject *cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    CPyPtr cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_isuper;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    CPyPtr cpy_r_r255;
    PyObject *cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_def_vars;
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
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    int32_t cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_typ_vars;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    int32_t cpy_r_r292;
    char cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    CPyPtr cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r331;
    int32_t cpy_r_r332;
    char cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    CPyPtr cpy_r_r346;
    PyObject *cpy_r_r347;
    char cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    CPyPtr cpy_r_r351;
    PyObject *cpy_r_r352;
    char cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    CPyPtr cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    char cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    char cpy_r_r371;
    char cpy_r_is_classmethod;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    CPyPtr cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    char cpy_r_r379;
    PyObject *cpy_r_r380;
    CPyPtr cpy_r_r381;
    PyObject *cpy_r_r382;
    char cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_result;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    CPyPtr cpy_r_r398;
    PyObject *cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    char cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    CPyTagged cpy_r_r405;
    CPyTagged cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    CPyPtr cpy_r_r411;
    PyObject *cpy_r_r412;
    char cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject **cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    char cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    CPyTagged cpy_r_r430;
    CPyTagged cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    CPyPtr cpy_r_r436;
    PyObject *cpy_r_r437;
    char cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    CPyPtr cpy_r_r441;
    PyObject *cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    CPyPtr cpy_r_r453;
    PyObject *cpy_r_r454;
    char cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    CPyPtr cpy_r_r461;
    PyObject *cpy_r_r462;
    char cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    char cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    CPyPtr cpy_r_r475;
    PyObject *cpy_r_r476;
    char cpy_r_r477;
    char cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    char cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    char cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    CPyTagged cpy_r_r495;
    CPyTagged cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    CPyPtr cpy_r_r501;
    PyObject *cpy_r_r502;
    char cpy_r_r503;
    char cpy_r_r504;
    PyObject *cpy_r_r505;
    CPyPtr cpy_r_r506;
    PyObject *cpy_r_r507;
    char cpy_r_r508;
    char cpy_r_r509;
    PyObject *cpy_r_r510;
    CPyPtr cpy_r_r511;
    PyObject *cpy_r_r512;
    char cpy_r_r513;
    char cpy_r_r514;
    PyObject *cpy_r_r515;
    CPyPtr cpy_r_r516;
    PyObject *cpy_r_r517;
    char cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r529;
    CPyPtr cpy_r_r530;
    PyObject *cpy_r_r531;
    char cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    int32_t cpy_r_r541;
    char cpy_r_r542;
    char cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    char cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    if (cpy_r_override_info != NULL) goto CPyL336;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_override_info = cpy_r_r0;
CPyL2: ;
    if (cpy_r_original_vars != NULL) goto CPyL337;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_original_vars = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypy___types___InstanceObject *)cpy_r_itype)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_info = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_override_info != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL338;
    CPy_INCREF(cpy_r_override_info);
    if (likely(cpy_r_override_info != Py_None))
        cpy_r_r5 = cpy_r_override_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 908, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_override_info);
        goto CPyL339;
    }
    cpy_r_r6 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 908, CPyStatic_checkmember___globals);
        goto CPyL339;
    }
    if (cpy_r_r6) {
        goto CPyL340;
    } else
        goto CPyL338;
CPyL8: ;
    if (likely(cpy_r_override_info != Py_None))
        cpy_r_r7 = cpy_r_override_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 919, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_override_info);
        goto CPyL341;
    }
    cpy_r_info = cpy_r_r7;
CPyL10: ;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 921, CPyStatic_checkmember___globals);
        goto CPyL342;
    }
CPyL11: ;
    cpy_r_r9 = CPyStatics[224]; /* '.' */
    cpy_r_r10 = CPyStr_Build(3, cpy_r_r8, cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 921, CPyStatic_checkmember___globals);
        goto CPyL342;
    }
    cpy_r_fullname = cpy_r_r10;
    cpy_r_r11 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r12 = ((mypy___checker___TypeCheckerObject *)cpy_r_r11)->_plugin;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeChecker", "plugin", 922, CPyStatic_checkmember___globals);
        goto CPyL343;
    }
    CPy_INCREF(cpy_r_r12);
CPyL13: ;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_r12, CPyType_plugin___Plugin, 12, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r12, cpy_r_fullname); /* get_class_attribute_hook */
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 922, CPyStatic_checkmember___globals);
        goto CPyL342;
    }
    cpy_r_hook = cpy_r_r13;
    cpy_r_r14 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 924, CPyStatic_checkmember___globals);
        goto CPyL344;
    }
    cpy_r_node = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_node != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL36;
    } else
        goto CPyL345;
CPyL16: ;
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    CPy_DECREF(cpy_r_r17);
    if (!cpy_r_r19) goto CPyL28;
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 926, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r20);
        goto CPyL346;
    }
    cpy_r_r22 = ((mypy___types___ExtraAttrsObject *)cpy_r_r21)->_attrs;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyDict_Contains(cpy_r_r22, cpy_r_name);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 926, CPyStatic_checkmember___globals);
        goto CPyL346;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL28;
    cpy_r_r26 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 928, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r26);
        goto CPyL346;
    }
    cpy_r_r28 = ((mypy___types___ExtraAttrsObject *)cpy_r_r27)->_mod_name;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_r28 != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL347;
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r31 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 928, CPyStatic_checkmember___globals, "str", cpy_r_r28);
        goto CPyL346;
    }
    cpy_r_r32 = CPyStr_IsTrue(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (cpy_r_r32) {
        goto CPyL28;
    } else
        goto CPyL348;
CPyL24: ;
    cpy_r_r33 = ((mypy___types___InstanceObject *)cpy_r_itype)->_extra_attrs;
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 929, CPyStatic_checkmember___globals, "mypy.types.ExtraAttrs", cpy_r_r33);
        goto CPyL335;
    }
    cpy_r_r35 = ((mypy___types___ExtraAttrsObject *)cpy_r_r34)->_attrs;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r35, cpy_r_name);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 929, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_types___Type)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 929, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r36);
        goto CPyL335;
    }
    return cpy_r_r37;
CPyL28: ;
    cpy_r_r38 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_fallback_to_any;
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "fallback_to_any", 930, CPyStatic_checkmember___globals);
        goto CPyL346;
    }
CPyL29: ;
    if (cpy_r_r38) goto CPyL349;
CPyL30: ;
    cpy_r_r39 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_meta_fallback_to_any;
    if (unlikely(cpy_r_r39 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'meta_fallback_to_any' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 930, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
CPyL31: ;
    if (!cpy_r_r39) goto CPyL351;
CPyL32: ;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPyDef_types___AnyType(12, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 931, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
    cpy_r_r45 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_r44);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 931, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r45;
CPyL35: ;
    cpy_r_r46 = Py_None;
    CPy_INCREF(cpy_r_r46);
    return cpy_r_r46;
CPyL36: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r47 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 935, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r48 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r47)->_node;
    cpy_r_r49 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r48)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL48;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r53 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 936, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r54 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r53)->_node;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___Var))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 936, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r54);
        goto CPyL352;
    }
    cpy_r_r56 = ((mypy___nodes___VarObject *)cpy_r_r55)->_is_classvar;
    if (cpy_r_r56) goto CPyL48;
CPyL41: ;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_hook != cpy_r_r57;
    if (!cpy_r_r58) goto CPyL45;
    CPy_INCREF(cpy_r_hook);
    cpy_r_r59 = cpy_r_hook;
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 922, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    cpy_r_r62 = cpy_r_r60;
    if (cpy_r_r62) goto CPyL48;
CPyL45: ;
    cpy_r_r63 = ((mypy___types___InstanceObject *)cpy_r_mcs_fallback)->_type;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyDef_nodes___TypeInfo___get(cpy_r_r63, cpy_r_name);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 938, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_r64 != cpy_r_r65;
    CPy_DECREF(cpy_r_r64);
    if (cpy_r_r66) {
        goto CPyL353;
    } else
        goto CPyL48;
CPyL47: ;
    cpy_r_r67 = Py_None;
    CPy_INCREF(cpy_r_r67);
    return cpy_r_r67;
CPyL48: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r68 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 950, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r69 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r68)->_node;
    cpy_r_r70 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_r69)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    cpy_r_is_decorated = cpy_r_r73;
    if (!cpy_r_is_decorated) goto CPyL51;
    cpy_r_r74 = cpy_r_is_decorated;
    goto CPyL59;
CPyL51: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r75 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 951, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r76 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r75)->_node;
    cpy_r_r77 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL54;
    cpy_r_r81 = cpy_r_r80;
    goto CPyL55;
CPyL54: ;
    cpy_r_r82 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r83 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r84 = *(PyObject * *)cpy_r_r83;
    cpy_r_r85 = cpy_r_r84 == cpy_r_r82;
    cpy_r_r81 = cpy_r_r85;
CPyL55: ;
    if (!cpy_r_r81) goto CPyL57;
    cpy_r_r86 = cpy_r_r81;
    goto CPyL58;
CPyL57: ;
    cpy_r_r87 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    cpy_r_r86 = cpy_r_r90;
CPyL58: ;
    cpy_r_r74 = cpy_r_r86;
CPyL59: ;
    cpy_r_is_method = cpy_r_r74;
    cpy_r_r91 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r91) goto CPyL68;
CPyL60: ;
    if (!cpy_r_is_method) goto CPyL62;
    cpy_r_r92 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyDef_messages___MessageBuilder___cant_assign_to_method(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 954, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL62: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r95 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 955, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r96 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r95)->_node;
    cpy_r_r97 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (!cpy_r_r100) goto CPyL65;
    cpy_r_r101 = cpy_r_r100;
    goto CPyL66;
CPyL65: ;
    cpy_r_r102 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r103 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r104 = *(PyObject * *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 == cpy_r_r102;
    cpy_r_r101 = cpy_r_r105;
CPyL66: ;
    if (!cpy_r_r101) goto CPyL68;
    cpy_r_r106 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = CPyStatics[1326]; /* 'Cannot assign to a type' */
    cpy_r_r108 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = NULL;
    cpy_r_r110 = NULL;
    cpy_r_r111 = 2;
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyDef_messages___MessageBuilder___fail(cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 956, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL68: ;
    cpy_r_r114 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "slots", 959, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    CPy_INCREF(cpy_r_r114);
CPyL69: ;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = cpy_r_r114 != cpy_r_r115;
    if (!cpy_r_r116) goto CPyL354;
    if (likely(cpy_r_r114 != Py_None))
        cpy_r_r117 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 959, CPyStatic_checkmember___globals, "set", cpy_r_r114);
        goto CPyL352;
    }
    cpy_r_r118 = PyObject_IsTrue(cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 959, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    cpy_r_r120 = cpy_r_r118;
    if (!cpy_r_r120) goto CPyL80;
    cpy_r_r121 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "slots", 959, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    CPy_INCREF(cpy_r_r121);
CPyL74: ;
    if (likely(cpy_r_r121 != Py_None))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 959, CPyStatic_checkmember___globals, "set", cpy_r_r121);
        goto CPyL352;
    }
    cpy_r_r123 = PySet_Contains(cpy_r_r122, cpy_r_name);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 959, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    cpy_r_r125 = cpy_r_r123;
    if (!cpy_r_r125) goto CPyL80;
    cpy_r_r126 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r126);
    cpy_r_r127 = CPyStatics[1327]; /* '"{}" in __slots__ conflicts with class variable access' */
    cpy_r_r128 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r129[2] = {cpy_r_r127, cpy_r_name};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = PyObject_VectorcallMethod(cpy_r_r128, cpy_r_r130, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 960, CPyStatic_checkmember___globals);
        goto CPyL355;
    }
    if (likely(PyUnicode_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 960, CPyStatic_checkmember___globals, "str", cpy_r_r131);
        goto CPyL355;
    }
    cpy_r_r133 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = NULL;
    cpy_r_r135 = NULL;
    cpy_r_r136 = 2;
    cpy_r_r137 = NULL;
    cpy_r_r138 = CPyDef_messages___MessageBuilder___fail(cpy_r_r126, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 960, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL80: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r139 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 964, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r140 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r139)->_implicit;
    if (!cpy_r_r140) goto CPyL93;
CPyL82: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r141 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 964, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r142 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r141)->_node;
    cpy_r_r143 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r144 = (CPyPtr)&((PyObject *)cpy_r_r142)->ob_type;
    cpy_r_r145 = *(PyObject * *)cpy_r_r144;
    cpy_r_r146 = cpy_r_r145 == cpy_r_r143;
    if (!cpy_r_r146) goto CPyL93;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r147 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 964, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r148 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r147)->_node;
    if (likely(Py_TYPE(cpy_r_r148) == CPyType_nodes___Var))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 964, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r148);
        goto CPyL352;
    }
    cpy_r_r150 = ((mypy___nodes___VarObject *)cpy_r_r149)->_is_final;
    if (!cpy_r_r150) goto CPyL93;
CPyL87: ;
    cpy_r_r151 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r151);
    cpy_r_r152 = CPyStatics[1328]; /* ('Cannot access final instance attribute "{}" on class '
                                      'object') */
    if (likely(cpy_r_node != Py_None))
        cpy_r_r153 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 966, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL356;
    }
    cpy_r_r154 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r153)->_node;
    if (likely(Py_TYPE(cpy_r_r154) == CPyType_nodes___Var))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 966, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r154);
        goto CPyL356;
    }
    cpy_r_r156 = CPY_GET_ATTR(cpy_r_r155, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 966, CPyStatic_checkmember___globals);
        goto CPyL356;
    }
CPyL90: ;
    cpy_r_r157 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r158[2] = {cpy_r_r152, cpy_r_r156};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = PyObject_VectorcallMethod(cpy_r_r157, cpy_r_r159, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 966, CPyStatic_checkmember___globals);
        goto CPyL357;
    }
    CPy_DECREF(cpy_r_r156);
    if (likely(PyUnicode_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 966, CPyStatic_checkmember___globals, "str", cpy_r_r160);
        goto CPyL356;
    }
    cpy_r_r162 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r162);
    cpy_r_r163 = NULL;
    cpy_r_r164 = NULL;
    cpy_r_r165 = 2;
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_messages___MessageBuilder___fail(cpy_r_r151, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r167 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 965, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL93: ;
    cpy_r_r168 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (!cpy_r_r168) goto CPyL97;
CPyL94: ;
    cpy_r_r169 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r169);
    cpy_r_r170 = CPyDef_checker___TypeChecker___get_final_context(cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 971, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    if (cpy_r_r170) goto CPyL97;
    cpy_r_r171 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r171);
    cpy_r_r172 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r172);
    cpy_r_r173 = CPyDef_checkmember___check_final_member(cpy_r_name, cpy_r_info, cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 972, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL97: ;
    cpy_r_r174 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_is_enum;
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "is_enum", 974, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL98: ;
    if (!cpy_r_r174) goto CPyL107;
CPyL99: ;
    cpy_r_r175 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (cpy_r_r175) goto CPyL107;
CPyL100: ;
    if (cpy_r_is_decorated) goto CPyL107;
    if (cpy_r_is_method) goto CPyL107;
    cpy_r_r176 = CPyDef_checkmember___analyze_enum_class_attribute_access(cpy_r_itype, cpy_r_name, cpy_r_mx);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 975, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
    cpy_r_enum_class_attribute_type = cpy_r_r176;
    cpy_r_r177 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r178 = cpy_r_enum_class_attribute_type != cpy_r_r177;
    if (cpy_r_r178) {
        goto CPyL358;
    } else
        goto CPyL359;
CPyL104: ;
    if (likely(cpy_r_enum_class_attribute_type != Py_None))
        cpy_r_r179 = cpy_r_enum_class_attribute_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 977, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_enum_class_attribute_type);
        goto CPyL350;
    }
    cpy_r_r180 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_r179);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 977, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r180;
CPyL107: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r181 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 979, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL352;
    }
    cpy_r_r182 = CPY_GET_ATTR(cpy_r_r181, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 979, CPyStatic_checkmember___globals);
        goto CPyL352;
    }
CPyL109: ;
    cpy_r_t = cpy_r_r182;
    cpy_r_r183 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r184 = cpy_r_t != cpy_r_r183;
    if (cpy_r_r184) {
        goto CPyL360;
    } else
        goto CPyL361;
CPyL110: ;
    cpy_r_r185 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r186 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r187 = *(PyObject * *)cpy_r_r186;
    cpy_r_r188 = cpy_r_r187 == cpy_r_r185;
    if (cpy_r_r188) {
        goto CPyL362;
    } else
        goto CPyL120;
CPyL111: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r189 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 982, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL363;
    }
    cpy_r_r190 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r189)->_node;
    CPy_INCREF(cpy_r_r190);
    CPy_DECREF(cpy_r_node);
    cpy_r_symnode = cpy_r_r190;
    cpy_r_r191 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r192 = (CPyPtr)&((PyObject *)cpy_r_symnode)->ob_type;
    cpy_r_r193 = *(PyObject * *)cpy_r_r192;
    cpy_r_r194 = cpy_r_r193 == cpy_r_r191;
    if (cpy_r_r194) {
        goto CPyL115;
    } else
        goto CPyL364;
CPyL113: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r195 = 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 983, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r196 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r196);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___PartialType))
        cpy_r_r197 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 985, CPyStatic_checkmember___globals, "mypy.types.PartialType", cpy_r_t);
        goto CPyL365;
    }
    cpy_r_r198 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (likely(Py_TYPE(cpy_r_symnode) == CPyType_nodes___Var))
        cpy_r_r199 = cpy_r_symnode;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 985, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_symnode);
        goto CPyL366;
    }
    cpy_r_r200 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r200);
    cpy_r_r201 = CPyDef_checker___TypeChecker___handle_partial_var_type(cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r199);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 985, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
    cpy_r_r202 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_r201);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 984, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r202;
CPyL120: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r203 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 989, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL367;
    }
    cpy_r_r204 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r203)->_node;
    cpy_r_r205 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r206 = (CPyPtr)&((PyObject *)cpy_r_r204)->ob_type;
    cpy_r_r207 = *(PyObject * *)cpy_r_r206;
    cpy_r_r208 = cpy_r_r207 == cpy_r_r205;
    if (!cpy_r_r208) goto CPyL125;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r209 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 990, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL367;
    }
    cpy_r_r210 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r209)->_node;
    if (likely(Py_TYPE(cpy_r_r210) == CPyType_nodes___Decorator))
        cpy_r_r211 = cpy_r_r210;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 990, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r210);
        goto CPyL367;
    }
    cpy_r_r212 = ((mypy___nodes___DecoratorObject *)cpy_r_r211)->_var;
    cpy_r_r213 = ((mypy___nodes___VarObject *)cpy_r_r212)->_info;
    CPy_INCREF(cpy_r_r213);
    cpy_r_super_info = cpy_r_r213;
    goto CPyL142;
CPyL125: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r214 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 991, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL367;
    }
    cpy_r_r215 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r214)->_node;
    CPy_INCREF(cpy_r_r215);
    cpy_r_r216 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r217 = CPyStatic_checkmember___globals;
    cpy_r_r218 = CPyStatics[1329]; /* 'SYMBOL_FUNCBASE_TYPES' */
    cpy_r_r219 = CPyDict_GetItem(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 991, CPyStatic_checkmember___globals);
        goto CPyL368;
    }
    PyObject *__tmp1463;
    if (unlikely(!(PyTuple_Check(cpy_r_r219) && PyTuple_GET_SIZE(cpy_r_r219) == 2))) {
        __tmp1463 = NULL;
        goto __LL1464;
    }
    __tmp1463 = PyTuple_GET_ITEM(cpy_r_r219, 0);
    if (__tmp1463 == NULL) goto __LL1464;
    __tmp1463 = PyTuple_GET_ITEM(cpy_r_r219, 1);
    if (__tmp1463 == NULL) goto __LL1464;
    __tmp1463 = cpy_r_r219;
__LL1464: ;
    if (unlikely(__tmp1463 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r219); cpy_r_r220 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1465 = PyTuple_GET_ITEM(cpy_r_r219, 0);
        CPy_INCREF(__tmp1465);
        PyObject *__tmp1466;
        __tmp1466 = __tmp1465;
        cpy_r_r220.f0 = __tmp1466;
        PyObject *__tmp1467 = PyTuple_GET_ITEM(cpy_r_r219, 1);
        CPy_INCREF(__tmp1467);
        PyObject *__tmp1468;
        __tmp1468 = __tmp1467;
        cpy_r_r220.f1 = __tmp1468;
    }
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r220.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 991, CPyStatic_checkmember___globals);
        goto CPyL368;
    }
    cpy_r_r221.f0 = cpy_r_r216;
    cpy_r_r221.f1 = cpy_r_r220;
    CPy_INCREF(cpy_r_r221.f0);
    CPy_INCREF(cpy_r_r221.f1.f0);
    CPy_INCREF(cpy_r_r221.f1.f1);
    CPy_DECREF(cpy_r_r220.f0);
    CPy_DECREF(cpy_r_r220.f1);
    cpy_r_r222 = PyTuple_New(2);
    if (unlikely(cpy_r_r222 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1469 = cpy_r_r221.f0;
    PyTuple_SET_ITEM(cpy_r_r222, 0, __tmp1469);
    PyObject *__tmp1470 = PyTuple_New(2);
    if (unlikely(__tmp1470 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1471 = cpy_r_r221.f1.f0;
    PyTuple_SET_ITEM(__tmp1470, 0, __tmp1471);
    PyObject *__tmp1472 = cpy_r_r221.f1.f1;
    PyTuple_SET_ITEM(__tmp1470, 1, __tmp1472);
    PyTuple_SET_ITEM(cpy_r_r222, 1, __tmp1470);
    cpy_r_r223 = PyObject_IsInstance(cpy_r_r215, cpy_r_r222);
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_r222);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 991, CPyStatic_checkmember___globals);
        goto CPyL367;
    }
    cpy_r_r225 = cpy_r_r223;
    if (!cpy_r_r225) goto CPyL141;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r226 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 992, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL367;
    }
    cpy_r_r227 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r226)->_node;
    CPy_INCREF(cpy_r_r227);
    if (Py_TYPE(cpy_r_r227) == CPyType_nodes___Var)
        cpy_r_r228 = cpy_r_r227;
    else {
        cpy_r_r228 = NULL;
    }
    if (cpy_r_r228 != NULL) goto __LL1473;
    if (Py_TYPE(cpy_r_r227) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r228 = cpy_r_r227;
    else {
        cpy_r_r228 = NULL;
    }
    if (cpy_r_r228 != NULL) goto __LL1473;
    if (Py_TYPE(cpy_r_r227) == CPyType_nodes___FuncDef)
        cpy_r_r228 = cpy_r_r227;
    else {
        cpy_r_r228 = NULL;
    }
    if (cpy_r_r228 != NULL) goto __LL1473;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 992, CPyStatic_checkmember___globals, "union[mypy.nodes.Var, mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef]", cpy_r_r227);
    goto CPyL367;
__LL1473: ;
    cpy_r_r229 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r230 = (CPyPtr)&((PyObject *)cpy_r_r228)->ob_type;
    cpy_r_r231 = *(PyObject * *)cpy_r_r230;
    cpy_r_r232 = cpy_r_r231 == cpy_r_r229;
    if (!cpy_r_r232) goto CPyL135;
    if (likely(Py_TYPE(cpy_r_r228) == CPyType_nodes___Var))
        cpy_r_r233 = cpy_r_r228;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 992, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r228);
        goto CPyL367;
    }
    cpy_r_r234 = ((mypy___nodes___VarObject *)cpy_r_r233)->_info;
    CPy_INCREF(cpy_r_r234);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r235 = cpy_r_r234;
    goto CPyL140;
CPyL135: ;
    cpy_r_r236 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r237 = (CPyPtr)&((PyObject *)cpy_r_r228)->ob_type;
    cpy_r_r238 = *(PyObject * *)cpy_r_r237;
    cpy_r_r239 = cpy_r_r238 == cpy_r_r236;
    if (!cpy_r_r239) goto CPyL138;
    if (likely(Py_TYPE(cpy_r_r228) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r240 = cpy_r_r228;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 992, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r228);
        goto CPyL367;
    }
    cpy_r_r241 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r240)->_info;
    CPy_INCREF(cpy_r_r241);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r235 = cpy_r_r241;
    goto CPyL140;
CPyL138: ;
    if (likely(Py_TYPE(cpy_r_r228) == CPyType_nodes___FuncDef))
        cpy_r_r242 = cpy_r_r228;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 992, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_r228);
        goto CPyL367;
    }
    cpy_r_r243 = ((mypy___nodes___FuncDefObject *)cpy_r_r242)->_info;
    CPy_INCREF(cpy_r_r243);
    CPy_DECREF(cpy_r_r242);
    cpy_r_r235 = cpy_r_r243;
CPyL140: ;
    cpy_r_super_info = cpy_r_r235;
    goto CPyL142;
CPyL141: ;
    cpy_r_r244 = Py_None;
    CPy_INCREF(cpy_r_r244);
    cpy_r_super_info = cpy_r_r244;
CPyL142: ;
    cpy_r_r245 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r246 = cpy_r_super_info != cpy_r_r245;
    if (!cpy_r_r246) goto CPyL369;
    CPy_INCREF(cpy_r_super_info);
    if (likely(cpy_r_super_info != Py_None))
        cpy_r_r247 = cpy_r_super_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 990, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_super_info);
        goto CPyL370;
    }
    cpy_r_r248 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r247);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r248 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 990, CPyStatic_checkmember___globals);
        goto CPyL370;
    }
    if (cpy_r_r248) {
        goto CPyL147;
    } else
        goto CPyL369;
CPyL146: ;
    cpy_r_r249 = Py_None;
    CPy_INCREF(cpy_r_r249);
    cpy_r_isuper = cpy_r_r249;
    goto CPyL150;
CPyL147: ;
    if (likely(cpy_r_super_info != Py_None))
        cpy_r_r250 = cpy_r_super_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1004, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_super_info);
        goto CPyL367;
    }
    cpy_r_r251 = CPyDef_maptype___map_instance_to_supertype(cpy_r_itype, cpy_r_r250);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1004, CPyStatic_checkmember___globals);
        goto CPyL367;
    }
    cpy_r_isuper = cpy_r_r251;
CPyL150: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r252 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1006, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL371;
    }
    cpy_r_r253 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r252)->_node;
    cpy_r_r254 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r255 = (CPyPtr)&((PyObject *)cpy_r_r253)->ob_type;
    cpy_r_r256 = *(PyObject * *)cpy_r_r255;
    cpy_r_r257 = cpy_r_r256 == cpy_r_r254;
    if (!cpy_r_r257) goto CPyL206;
    cpy_r_r258 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r259 = cpy_r_isuper != cpy_r_r258;
    if (cpy_r_r259) {
        goto CPyL155;
    } else
        goto CPyL372;
CPyL153: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r260 = 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1007, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    CPy_Unreachable();
CPyL155: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r261 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1014, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL371;
    }
    cpy_r_r262 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r261)->_node;
    if (likely(Py_TYPE(cpy_r_r262) == CPyType_nodes___Var))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1014, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r262);
        goto CPyL371;
    }
    cpy_r_r264 = ((mypy___nodes___VarObject *)cpy_r_r263)->_info;
    cpy_r_r265 = ((mypy___nodes___TypeInfoObject *)cpy_r_r264)->_defn;
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "defn", 1014, CPyStatic_checkmember___globals);
        goto CPyL371;
    }
CPyL158: ;
    cpy_r_r266 = ((mypy___nodes___ClassDefObject *)cpy_r_r265)->_type_vars;
    CPy_INCREF(cpy_r_r266);
    cpy_r_r267 = PySet_New(cpy_r_r266);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1014, CPyStatic_checkmember___globals);
        goto CPyL371;
    }
    cpy_r_def_vars = cpy_r_r267;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r268 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1015, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r269 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r268)->_node;
    if (likely(Py_TYPE(cpy_r_r269) == CPyType_nodes___Var))
        cpy_r_r270 = cpy_r_r269;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1015, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r269);
        goto CPyL373;
    }
    cpy_r_r271 = ((mypy___nodes___VarObject *)cpy_r_r270)->_is_classvar;
    if (cpy_r_r271) goto CPyL171;
CPyL162: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r272 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1015, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r273 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r272)->_node;
    if (likely(Py_TYPE(cpy_r_r273) == CPyType_nodes___Var))
        cpy_r_r274 = cpy_r_r273;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1015, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r273);
        goto CPyL373;
    }
    cpy_r_r275 = ((mypy___nodes___VarObject *)cpy_r_r274)->_info;
    cpy_r_r276 = ((mypy___nodes___TypeInfoObject *)cpy_r_r275)->_self_type;
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "self_type", 1015, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    CPy_INCREF(cpy_r_r276);
CPyL165: ;
    cpy_r_r277 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r278 = cpy_r_r276 != cpy_r_r277;
    CPy_DECREF(cpy_r_r276);
    if (!cpy_r_r278) goto CPyL171;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r279 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1016, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r280 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r279)->_node;
    if (likely(Py_TYPE(cpy_r_r280) == CPyType_nodes___Var))
        cpy_r_r281 = cpy_r_r280;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1016, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r280);
        goto CPyL373;
    }
    cpy_r_r282 = ((mypy___nodes___VarObject *)cpy_r_r281)->_info;
    cpy_r_r283 = ((mypy___nodes___TypeInfoObject *)cpy_r_r282)->_self_type;
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeInfo", "self_type", 1016, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    CPy_INCREF(cpy_r_r283);
CPyL169: ;
    if (likely(cpy_r_r283 != Py_None))
        cpy_r_r284 = cpy_r_r283;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1016, CPyStatic_checkmember___globals, "mypy.types.TypeVarType", cpy_r_r283);
        goto CPyL373;
    }
    cpy_r_r285 = PySet_Add(cpy_r_def_vars, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r286 = cpy_r_r285 >= 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1016, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
CPyL171: ;
    CPy_INCREF(cpy_r_t);
    if (likely(cpy_r_t != Py_None))
        cpy_r_r287 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1017, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_t);
        goto CPyL373;
    }
    cpy_r_r288 = CPyDef_typeops___get_type_vars(cpy_r_r287);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r288 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1017, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    cpy_r_r289 = PySet_New(cpy_r_r288);
    CPy_DECREF(cpy_r_r288);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1017, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    cpy_r_typ_vars = cpy_r_r289;
    cpy_r_r290 = PyNumber_And(cpy_r_def_vars, cpy_r_typ_vars);
    CPy_DECREF(cpy_r_typ_vars);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1018, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    if (likely(PySet_Check(cpy_r_r290)))
        cpy_r_r291 = cpy_r_r290;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1018, CPyStatic_checkmember___globals, "set", cpy_r_r290);
        goto CPyL373;
    }
    cpy_r_r292 = PyObject_IsTrue(cpy_r_r291);
    CPy_DECREF(cpy_r_r291);
    cpy_r_r293 = cpy_r_r292 >= 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1018, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    cpy_r_r294 = cpy_r_r292;
    if (!cpy_r_r294) goto CPyL188;
    cpy_r_r295 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r295);
    cpy_r_r296 = CPyDef_types___get_proper_type(cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1020, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
    cpy_r_r297 = (PyObject *)CPyType_types___TypeType;
    cpy_r_r298 = (CPyPtr)&((PyObject *)cpy_r_r296)->ob_type;
    cpy_r_r299 = *(PyObject * *)cpy_r_r298;
    CPy_DECREF(cpy_r_r296);
    cpy_r_r300 = cpy_r_r299 == cpy_r_r297;
    if (!cpy_r_r300) goto CPyL182;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r301 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1020, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r302 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r301)->_implicit;
    if (!cpy_r_r302) goto CPyL188;
CPyL182: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r303 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1021, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r304 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r303)->_node;
    if (likely(Py_TYPE(cpy_r_r304) == CPyType_nodes___Var))
        cpy_r_r305 = cpy_r_r304;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1021, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r304);
        goto CPyL373;
    }
    cpy_r_r306 = ((mypy___nodes___VarObject *)cpy_r_r305)->_is_classvar;
    if (!cpy_r_r306) goto CPyL186;
CPyL185: ;
    cpy_r_r307 = CPyStatics[1330]; /* 'Access to generic class variables is ambiguous' */
    CPy_INCREF(cpy_r_r307);
    cpy_r_message = cpy_r_r307;
    goto CPyL187;
CPyL186: ;
    cpy_r_r308 = CPyStatics[1331]; /* ('Access to generic instance variables via class is '
                                      'ambiguous') */
    CPy_INCREF(cpy_r_r308);
    cpy_r_message = cpy_r_r308;
CPyL187: ;
    cpy_r_r309 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r309);
    cpy_r_r310 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r310);
    cpy_r_r311 = NULL;
    cpy_r_r312 = NULL;
    cpy_r_r313 = 2;
    cpy_r_r314 = NULL;
    cpy_r_r315 = CPyDef_messages___MessageBuilder___fail(cpy_r_r309, cpy_r_message, cpy_r_r310, cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314);
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_r310);
    CPy_DECREF(cpy_r_r309);
    if (unlikely(cpy_r_r315 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1025, CPyStatic_checkmember___globals);
        goto CPyL373;
    }
CPyL188: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r316 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL373;
    }
    cpy_r_r317 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r316)->_node;
    CPy_INCREF(cpy_r_r317);
    if (likely(Py_TYPE(cpy_r_r317) == CPyType_nodes___Var))
        cpy_r_r318 = cpy_r_r317;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals, "mypy.nodes.Var", cpy_r_r317);
        goto CPyL373;
    }
    if (likely(cpy_r_t != Py_None))
        cpy_r_r319 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_t);
        goto CPyL374;
    }
    cpy_r_r320 = CPyDef_expandtype___expand_self_type(cpy_r_r318, cpy_r_r319, cpy_r_itype);
    CPy_DECREF(cpy_r_r318);
    CPy_DECREF(cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals);
        goto CPyL375;
    }
    cpy_r_r321 = CPyDef_types___get_proper_type(cpy_r_r320);
    CPy_DECREF(cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals);
        goto CPyL375;
    }
    if (likely(cpy_r_r321 != Py_None))
        cpy_r_r322 = cpy_r_r321;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1031, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r321);
        goto CPyL375;
    }
    cpy_r_t = cpy_r_r322;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r323 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL375;
    }
    CPy_INCREF(cpy_r_isuper);
    if (likely(cpy_r_isuper != Py_None))
        cpy_r_r324 = cpy_r_isuper;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_isuper);
        goto CPyL376;
    }
    cpy_r_r325 = CPyDef_expandtype___expand_type_by_instance(cpy_r_r323, cpy_r_r324);
    CPy_DECREF(cpy_r_r323);
    CPy_DECREF(cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL375;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r325, CPyType_types___ProperType)))
        cpy_r_r326 = cpy_r_r325;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r325);
        goto CPyL375;
    }
    cpy_r_r327 = PySet_New(NULL);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL377;
    }
    cpy_r_r328 = PyObject_GetIter(cpy_r_def_vars);
    CPy_DECREF(cpy_r_def_vars);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL378;
    }
CPyL200: ;
    cpy_r_r329 = PyIter_Next(cpy_r_r328);
    if (cpy_r_r329 == NULL) goto CPyL379;
    if (likely(PyObject_TypeCheck(cpy_r_r329, CPyType_types___TypeVarLikeType)))
        cpy_r_r330 = cpy_r_r329;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals, "mypy.types.TypeVarLikeType", cpy_r_r329);
        goto CPyL380;
    }
    cpy_r_tv = cpy_r_r330;
    cpy_r_r331 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tv)->_id;
    CPy_INCREF(cpy_r_r331);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r332 = PySet_Add(cpy_r_r327, cpy_r_r331);
    CPy_DECREF(cpy_r_r331);
    cpy_r_r333 = cpy_r_r332 >= 0;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL380;
    } else
        goto CPyL200;
CPyL203: ;
    cpy_r_r334 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL378;
    }
    cpy_r_r335 = CPyDef_erasetype___erase_typevars(cpy_r_r326, cpy_r_r327);
    CPy_DECREF(cpy_r_r326);
    CPy_DECREF(cpy_r_r327);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1032, CPyStatic_checkmember___globals);
        goto CPyL381;
    }
    cpy_r_t = cpy_r_r335;
CPyL206: ;
    if (cpy_r_is_decorated) goto CPyL208;
    cpy_r_r336 = cpy_r_is_decorated;
    goto CPyL211;
CPyL208: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r337 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1034, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL371;
    }
    cpy_r_r338 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r337)->_node;
    CPy_INCREF(cpy_r_r338);
    if (likely(Py_TYPE(cpy_r_r338) == CPyType_nodes___Decorator))
        cpy_r_r339 = cpy_r_r338;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1034, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r338);
        goto CPyL382;
    }
    cpy_r_r340 = ((mypy___nodes___DecoratorObject *)cpy_r_r339)->_func;
    cpy_r_r341 = ((mypy___nodes___FuncDefObject *)cpy_r_r340)->_is_class;
    CPy_DECREF(cpy_r_r338);
    cpy_r_r336 = cpy_r_r341;
CPyL211: ;
    if (cpy_r_r336) {
        goto CPyL383;
    } else
        goto CPyL213;
CPyL212: ;
    cpy_r_r342 = cpy_r_r336;
    goto CPyL232;
CPyL213: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r343 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL371;
    }
    cpy_r_r344 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r343)->_node;
    cpy_r_r345 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r346 = (CPyPtr)&((PyObject *)cpy_r_r344)->ob_type;
    cpy_r_r347 = *(PyObject * *)cpy_r_r346;
    cpy_r_r348 = cpy_r_r347 == cpy_r_r345;
    if (!cpy_r_r348) goto CPyL216;
    cpy_r_r349 = cpy_r_r348;
    goto CPyL217;
CPyL216: ;
    cpy_r_r350 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r351 = (CPyPtr)&((PyObject *)cpy_r_r344)->ob_type;
    cpy_r_r352 = *(PyObject * *)cpy_r_r351;
    cpy_r_r353 = cpy_r_r352 == cpy_r_r350;
    cpy_r_r349 = cpy_r_r353;
CPyL217: ;
    if (!cpy_r_r349) goto CPyL219;
    cpy_r_r354 = cpy_r_r349;
    goto CPyL220;
CPyL219: ;
    cpy_r_r355 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r356 = (CPyPtr)&((PyObject *)cpy_r_r344)->ob_type;
    cpy_r_r357 = *(PyObject * *)cpy_r_r356;
    cpy_r_r358 = cpy_r_r357 == cpy_r_r355;
    cpy_r_r354 = cpy_r_r358;
CPyL220: ;
    if (cpy_r_r354) {
        goto CPyL222;
    } else
        goto CPyL384;
CPyL221: ;
    cpy_r_r359 = cpy_r_r354;
    goto CPyL231;
CPyL222: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r360 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL371;
    }
    cpy_r_r361 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r360)->_node;
    CPy_INCREF(cpy_r_r361);
    CPy_DECREF(cpy_r_node);
    cpy_r_r362 = (PyObject *)CPyType_nodes___SymbolNode;
    cpy_r_r363 = CPy_TypeCheck(cpy_r_r361, cpy_r_r362);
    if (!cpy_r_r363) goto CPyL227;
    if (likely(cpy_r_r361 != Py_None))
        cpy_r_r364 = cpy_r_r361;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals, "mypy.nodes.SymbolNode", cpy_r_r361);
        goto CPyL385;
    }
    cpy_r_r365 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r366 = CPyObject_GetAttr(cpy_r_r364, cpy_r_r365);
    CPy_DECREF(cpy_r_r364);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals);
        goto CPyL385;
    }
    cpy_r_r367 = cpy_r_r366;
    goto CPyL229;
CPyL227: ;
    cpy_r_r368 = cpy_r_r361;
    cpy_r_r369 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r370 = CPyObject_GetAttr(cpy_r_r368, cpy_r_r369);
    CPy_DECREF(cpy_r_r368);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals);
        goto CPyL385;
    }
    cpy_r_r367 = cpy_r_r370;
CPyL229: ;
    if (unlikely(!PyBool_Check(cpy_r_r367))) {
        CPy_TypeError("bool", cpy_r_r367); cpy_r_r371 = 2;
    } else
        cpy_r_r371 = cpy_r_r367 == Py_True;
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r371 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1035, CPyStatic_checkmember___globals);
        goto CPyL385;
    }
    cpy_r_r359 = cpy_r_r371;
CPyL231: ;
    cpy_r_r342 = cpy_r_r359;
CPyL232: ;
    cpy_r_is_classmethod = cpy_r_r342;
    if (likely(cpy_r_t != Py_None))
        cpy_r_r372 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1037, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_t);
        goto CPyL386;
    }
    cpy_r_r373 = CPyDef_types___get_proper_type(cpy_r_r372);
    CPy_DECREF(cpy_r_r372);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1037, CPyStatic_checkmember___globals);
        goto CPyL386;
    }
    if (likely(cpy_r_r373 != Py_None))
        cpy_r_r374 = cpy_r_r373;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1037, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r373);
        goto CPyL386;
    }
    cpy_r_t = cpy_r_r374;
    cpy_r_r375 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r376 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r377 = *(PyObject * *)cpy_r_r376;
    cpy_r_r378 = cpy_r_r377 == cpy_r_r375;
    if (!cpy_r_r378) goto CPyL237;
    cpy_r_r379 = cpy_r_r378;
    goto CPyL238;
CPyL237: ;
    cpy_r_r380 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r381 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r382 = *(PyObject * *)cpy_r_r381;
    cpy_r_r383 = cpy_r_r382 == cpy_r_r380;
    cpy_r_r379 = cpy_r_r383;
CPyL238: ;
    if (!cpy_r_r379) goto CPyL243;
    if (!cpy_r_is_classmethod) goto CPyL243;
    if (likely((Py_TYPE(cpy_r_t) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_t) == CPyType_types___Overloaded)))
        cpy_r_r384 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1039, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_t);
        goto CPyL386;
    }
    cpy_r_r385 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r385);
    cpy_r_r386 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r386);
    cpy_r_r387 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r387);
    cpy_r_r388 = CPyDef_checkmember___check_self_arg(cpy_r_r384, cpy_r_r385, 0, cpy_r_r386, cpy_r_name, cpy_r_r387);
    CPy_DECREF(cpy_r_r384);
    CPy_DECREF(cpy_r_r385);
    CPy_DECREF(cpy_r_r386);
    CPy_DECREF(cpy_r_r387);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1039, CPyStatic_checkmember___globals);
        goto CPyL386;
    }
    cpy_r_t = cpy_r_r388;
CPyL243: ;
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r389 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1041, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL386;
    }
    cpy_r_r390 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_self_type;
    CPy_INCREF(cpy_r_r390);
    cpy_r_r391 = CPyDef_checkmember___add_class_tvars(cpy_r_r389, cpy_r_isuper, cpy_r_is_classmethod, cpy_r_r390, cpy_r_original_vars);
    CPy_DECREF(cpy_r_r389);
    CPy_DECREF(cpy_r_isuper);
    CPy_DECREF(cpy_r_r390);
    CPy_DECREF(cpy_r_original_vars);
    if (unlikely(cpy_r_r391 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1040, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
    cpy_r_result = cpy_r_r391;
    cpy_r_r392 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    if (cpy_r_r392) goto CPyL248;
CPyL246: ;
    cpy_r_r393 = CPyDef_checkmember___analyze_descriptor_access(cpy_r_result, cpy_r_mx);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1044, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
    cpy_r_result = cpy_r_r393;
CPyL248: ;
    cpy_r_r394 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_result);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r394 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1046, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r394;
CPyL250: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r395 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1047, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL387;
    }
    cpy_r_r396 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r395)->_node;
    cpy_r_r397 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r398 = (CPyPtr)&((PyObject *)cpy_r_r396)->ob_type;
    cpy_r_r399 = *(PyObject * *)cpy_r_r398;
    cpy_r_r400 = cpy_r_r399 == cpy_r_r397;
    if (cpy_r_r400) {
        goto CPyL388;
    } else
        goto CPyL255;
CPyL252: ;
    cpy_r_r401 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r401);
    cpy_r_r402 = CPyDef_checkmember___MemberContext___not_ready_callback(cpy_r_mx, cpy_r_name, cpy_r_r401);
    CPy_DECREF(cpy_r_r401);
    if (unlikely(cpy_r_r402 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1048, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    cpy_r_r403 = NULL;
    cpy_r_r404 = NULL;
    cpy_r_r405 = CPY_INT_TAG;
    cpy_r_r406 = CPY_INT_TAG;
    cpy_r_r407 = CPyDef_types___AnyType(12, cpy_r_r403, cpy_r_r404, cpy_r_r405, cpy_r_r406);
    if (unlikely(cpy_r_r407 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1049, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r407;
CPyL255: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r408 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1051, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL387;
    }
    cpy_r_r409 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r408)->_node;
    cpy_r_r410 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r411 = (CPyPtr)&((PyObject *)cpy_r_r409)->ob_type;
    cpy_r_r412 = *(PyObject * *)cpy_r_r411;
    cpy_r_r413 = cpy_r_r412 == cpy_r_r410;
    if (cpy_r_r413) {
        goto CPyL389;
    } else
        goto CPyL390;
CPyL257: ;
    cpy_r_r414 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_msg;
    CPy_INCREF(cpy_r_r414);
    cpy_r_r415 = CPyStatics[1332]; /* 'Type variable "{}.{}" cannot be used as an expression' */
    cpy_r_r416 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r416 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1053, CPyStatic_checkmember___globals);
        goto CPyL391;
    }
CPyL258: ;
    cpy_r_r417 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r418[3] = {cpy_r_r415, cpy_r_r416, cpy_r_name};
    cpy_r_r419 = (PyObject **)&cpy_r_r418;
    cpy_r_r420 = PyObject_VectorcallMethod(cpy_r_r417, cpy_r_r419, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1053, CPyStatic_checkmember___globals);
        goto CPyL392;
    }
    CPy_DECREF(cpy_r_r416);
    if (likely(PyUnicode_Check(cpy_r_r420)))
        cpy_r_r421 = cpy_r_r420;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1053, CPyStatic_checkmember___globals, "str", cpy_r_r420);
        goto CPyL391;
    }
    cpy_r_r422 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r422);
    cpy_r_r423 = NULL;
    cpy_r_r424 = NULL;
    cpy_r_r425 = 2;
    cpy_r_r426 = NULL;
    cpy_r_r427 = CPyDef_messages___MessageBuilder___fail(cpy_r_r414, cpy_r_r421, cpy_r_r422, cpy_r_r423, cpy_r_r424, cpy_r_r425, cpy_r_r426);
    CPy_DECREF(cpy_r_r421);
    CPy_DECREF(cpy_r_r422);
    CPy_DECREF(cpy_r_r414);
    if (unlikely(cpy_r_r427 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1052, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    cpy_r_r428 = NULL;
    cpy_r_r429 = NULL;
    cpy_r_r430 = CPY_INT_TAG;
    cpy_r_r431 = CPY_INT_TAG;
    cpy_r_r432 = CPyDef_types___AnyType(10, cpy_r_r428, cpy_r_r429, cpy_r_r430, cpy_r_r431);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1055, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r432;
CPyL263: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r433 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1057, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r434 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r433)->_node;
    cpy_r_r435 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r436 = (CPyPtr)&((PyObject *)cpy_r_r434)->ob_type;
    cpy_r_r437 = *(PyObject * *)cpy_r_r436;
    cpy_r_r438 = cpy_r_r437 == cpy_r_r435;
    if (!cpy_r_r438) goto CPyL266;
    cpy_r_r439 = cpy_r_r438;
    goto CPyL267;
CPyL266: ;
    cpy_r_r440 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r441 = (CPyPtr)&((PyObject *)cpy_r_r434)->ob_type;
    cpy_r_r442 = *(PyObject * *)cpy_r_r441;
    cpy_r_r443 = cpy_r_r442 == cpy_r_r440;
    cpy_r_r439 = cpy_r_r443;
CPyL267: ;
    if (cpy_r_r439) {
        goto CPyL394;
    } else
        goto CPyL273;
CPyL268: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r444 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1058, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL395;
    }
    cpy_r_r445 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r444)->_node;
    CPy_INCREF(cpy_r_r445);
    if (likely((Py_TYPE(cpy_r_r445) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r445) == CPyType_nodes___TypeInfo)))
        cpy_r_r446 = cpy_r_r445;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1058, CPyStatic_checkmember___globals, "mypy.nodes.TypeInfo", cpy_r_r445);
        goto CPyL395;
    }
    CPy_DECREF(cpy_r_node);
    cpy_r_r447 = CPyStatics[768]; /* 'named_type' */
    cpy_r_r448 = CPyObject_GetAttr(cpy_r_mx, cpy_r_r447);
    if (unlikely(cpy_r_r448 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1058, CPyStatic_checkmember___globals);
        goto CPyL396;
    }
    cpy_r_r449 = CPyDef_checkmember___type_object_type(cpy_r_r446, cpy_r_r448);
    CPy_DECREF(cpy_r_r446);
    CPy_DECREF(cpy_r_r448);
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1058, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r449;
CPyL273: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r450 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1060, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r451 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r450)->_node;
    cpy_r_r452 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r453 = (CPyPtr)&((PyObject *)cpy_r_r451)->ob_type;
    cpy_r_r454 = *(PyObject * *)cpy_r_r453;
    cpy_r_r455 = cpy_r_r454 == cpy_r_r452;
    if (cpy_r_r455) {
        goto CPyL397;
    } else
        goto CPyL277;
CPyL275: ;
    cpy_r_r456 = CPyStatics[1153]; /* 'types.ModuleType' */
    cpy_r_r457 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r456);
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1062, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r457;
CPyL277: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r458 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1064, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r459 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r458)->_node;
    cpy_r_r460 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r461 = (CPyPtr)&((PyObject *)cpy_r_r459)->ob_type;
    cpy_r_r462 = *(PyObject * *)cpy_r_r461;
    cpy_r_r463 = cpy_r_r462 == cpy_r_r460;
    if (cpy_r_r463) {
        goto CPyL398;
    } else
        goto CPyL284;
CPyL279: ;
    cpy_r_r464 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r465 = ((mypy___checker___TypeCheckerObject *)cpy_r_r464)->_expr_checker;
    if (unlikely(cpy_r_r465 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_class_attribute_access", "TypeChecker", "expr_checker", 1065, CPyStatic_checkmember___globals);
        goto CPyL395;
    }
    CPy_INCREF(cpy_r_r465);
CPyL280: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r466 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1066, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL399;
    }
    cpy_r_r467 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r466)->_node;
    CPy_INCREF(cpy_r_r467);
    if (likely(Py_TYPE(cpy_r_r467) == CPyType_nodes___TypeAlias))
        cpy_r_r468 = cpy_r_r467;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1066, CPyStatic_checkmember___globals, "mypy.nodes.TypeAlias", cpy_r_r467);
        goto CPyL399;
    }
    CPy_DECREF(cpy_r_node);
    cpy_r_r469 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r469);
    cpy_r_r470 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_is_lvalue;
    cpy_r_r471 = CPyDef_checkexpr___ExpressionChecker___alias_type_in_runtime_context(cpy_r_r465, cpy_r_r468, cpy_r_r469, cpy_r_r470);
    CPy_DECREF(cpy_r_r468);
    CPy_DECREF(cpy_r_r469);
    CPy_DECREF(cpy_r_r465);
    if (unlikely(cpy_r_r471 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1065, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r471;
CPyL284: ;
    if (!cpy_r_is_decorated) goto CPyL302;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r472 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1070, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r473 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r472)->_node;
    cpy_r_r474 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r475 = (CPyPtr)&((PyObject *)cpy_r_r473)->ob_type;
    cpy_r_r476 = *(PyObject * *)cpy_r_r475;
    cpy_r_r477 = cpy_r_r476 == cpy_r_r474;
    if (cpy_r_r477) {
        goto CPyL289;
    } else
        goto CPyL400;
CPyL287: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r478 = 0;
    if (unlikely(!cpy_r_r478)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1070, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    CPy_Unreachable();
CPyL289: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r479 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1071, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r480 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r479)->_node;
    if (likely(Py_TYPE(cpy_r_r480) == CPyType_nodes___Decorator))
        cpy_r_r481 = cpy_r_r480;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1071, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r480);
        goto CPyL393;
    }
    cpy_r_r482 = CPY_GET_ATTR(cpy_r_r481, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r482 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1071, CPyStatic_checkmember___globals);
        goto CPyL393;
    }
CPyL292: ;
    cpy_r_r483 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r484 = cpy_r_r482 != cpy_r_r483;
    CPy_DECREF(cpy_r_r482);
    if (!cpy_r_r484) goto CPyL401;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r485 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1072, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r486 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r485)->_node;
    if (likely(Py_TYPE(cpy_r_r486) == CPyType_nodes___Decorator))
        cpy_r_r487 = cpy_r_r486;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1072, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r486);
        goto CPyL393;
    }
    cpy_r_r488 = CPY_GET_ATTR(cpy_r_r487, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r488 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1072, CPyStatic_checkmember___globals);
        goto CPyL393;
    }
CPyL296: ;
    if (likely(cpy_r_r488 != Py_None))
        cpy_r_r489 = cpy_r_r488;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1072, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r488);
        goto CPyL393;
    }
    CPy_DECREF(cpy_r_node);
    cpy_r_r490 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_r489);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r489);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1072, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r490;
CPyL299: ;
    cpy_r_r491 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r491);
    cpy_r_r492 = CPyDef_checkmember___MemberContext___not_ready_callback(cpy_r_mx, cpy_r_name, cpy_r_r491);
    CPy_DECREF(cpy_r_r491);
    if (unlikely(cpy_r_r492 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1074, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    cpy_r_r493 = NULL;
    cpy_r_r494 = NULL;
    cpy_r_r495 = CPY_INT_TAG;
    cpy_r_r496 = CPY_INT_TAG;
    cpy_r_r497 = CPyDef_types___AnyType(10, cpy_r_r493, cpy_r_r494, cpy_r_r495, cpy_r_r496);
    if (unlikely(cpy_r_r497 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1075, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r497;
CPyL302: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r498 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1077, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r499 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r498)->_node;
    cpy_r_r500 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r501 = (CPyPtr)&((PyObject *)cpy_r_r499)->ob_type;
    cpy_r_r502 = *(PyObject * *)cpy_r_r501;
    cpy_r_r503 = cpy_r_r502 == cpy_r_r500;
    if (!cpy_r_r503) goto CPyL305;
    cpy_r_r504 = cpy_r_r503;
    goto CPyL306;
CPyL305: ;
    cpy_r_r505 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r506 = (CPyPtr)&((PyObject *)cpy_r_r499)->ob_type;
    cpy_r_r507 = *(PyObject * *)cpy_r_r506;
    cpy_r_r508 = cpy_r_r507 == cpy_r_r505;
    cpy_r_r504 = cpy_r_r508;
CPyL306: ;
    if (!cpy_r_r504) goto CPyL308;
    cpy_r_r509 = cpy_r_r504;
    goto CPyL309;
CPyL308: ;
    cpy_r_r510 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r511 = (CPyPtr)&((PyObject *)cpy_r_r499)->ob_type;
    cpy_r_r512 = *(PyObject * *)cpy_r_r511;
    cpy_r_r513 = cpy_r_r512 == cpy_r_r510;
    cpy_r_r509 = cpy_r_r513;
CPyL309: ;
    if (cpy_r_r509) {
        goto CPyL312;
    } else
        goto CPyL402;
CPyL310: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r514 = 0;
    if (unlikely(!cpy_r_r514)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1077, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    CPy_Unreachable();
CPyL312: ;
    cpy_r_r515 = (PyObject *)CPyType_nodes___SymbolTableNode;
    cpy_r_r516 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r517 = *(PyObject * *)cpy_r_r516;
    cpy_r_r518 = cpy_r_r517 == cpy_r_r515;
    if (!cpy_r_r518) goto CPyL315;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r519 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1078, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL393;
    }
    cpy_r_r520 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r519)->_node;
    CPy_INCREF(cpy_r_r520);
    CPy_DECREF(cpy_r_r519);
    cpy_r_r521 = cpy_r_r520;
    goto CPyL317;
CPyL315: ;
    CPy_INCREF(cpy_r_node);
    cpy_r_r522 = cpy_r_node;
    cpy_r_r523 = CPyStatics[792]; /* 'node' */
    cpy_r_r524 = CPyObject_GetAttr(cpy_r_r522, cpy_r_r523);
    CPy_DECREF(cpy_r_r522);
    if (unlikely(cpy_r_r524 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1078, CPyStatic_checkmember___globals);
        goto CPyL393;
    }
    cpy_r_r521 = cpy_r_r524;
CPyL317: ;
    cpy_r_r525 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r526 = CPyDef_checkmember___MemberContext___named_type(cpy_r_mx, cpy_r_r525);
    if (unlikely(cpy_r_r526 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1078, CPyStatic_checkmember___globals);
        goto CPyL403;
    }
    if (likely((Py_TYPE(cpy_r_r521) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r521) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r521) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r527 = cpy_r_r521;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1078, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_r521);
        goto CPyL404;
    }
    cpy_r_r528 = CPyDef_typeops___function_type(cpy_r_r527, cpy_r_r526);
    CPy_DECREF(cpy_r_r527);
    CPy_DECREF(cpy_r_r526);
    if (unlikely(cpy_r_r528 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1078, CPyStatic_checkmember___globals);
        goto CPyL393;
    }
    cpy_r_typ = cpy_r_r528;
    cpy_r_r529 = (PyObject *)CPyType_nodes___SymbolTableNode;
    cpy_r_r530 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r531 = *(PyObject * *)cpy_r_r530;
    cpy_r_r532 = cpy_r_r531 == cpy_r_r529;
    if (!cpy_r_r532) goto CPyL323;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r533 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1082, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_node);
        goto CPyL405;
    }
    cpy_r_r534 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r533)->_node;
    CPy_INCREF(cpy_r_r534);
    CPy_DECREF(cpy_r_r533);
    cpy_r_r535 = cpy_r_r534;
    goto CPyL325;
CPyL323: ;
    cpy_r_r536 = cpy_r_node;
    cpy_r_r537 = CPyStatics[792]; /* 'node' */
    cpy_r_r538 = CPyObject_GetAttr(cpy_r_r536, cpy_r_r537);
    CPy_DECREF(cpy_r_r536);
    if (unlikely(cpy_r_r538 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1082, CPyStatic_checkmember___globals);
        goto CPyL405;
    }
    cpy_r_r535 = cpy_r_r538;
CPyL325: ;
    cpy_r_r539 = CPyStatics[767]; /* 'is_class' */
    cpy_r_r540 = CPyObject_GetAttr(cpy_r_r535, cpy_r_r539);
    CPy_DECREF(cpy_r_r535);
    if (unlikely(cpy_r_r540 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1082, CPyStatic_checkmember___globals);
        goto CPyL405;
    }
    cpy_r_r541 = PyObject_IsTrue(cpy_r_r540);
    CPy_DECREF(cpy_r_r540);
    cpy_r_r542 = cpy_r_r541 >= 0;
    if (unlikely(!cpy_r_r542)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1082, CPyStatic_checkmember___globals);
        goto CPyL405;
    }
    cpy_r_r543 = cpy_r_r541;
    if (!cpy_r_r543) goto CPyL332;
    cpy_r_r544 = 1 ? Py_True : Py_False;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r545 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1083, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL350;
    }
    cpy_r_r546 = NULL;
    if (unlikely(!PyBool_Check(cpy_r_r544))) {
        CPy_TypeError("bool", cpy_r_r544); cpy_r_r547 = 2;
    } else
        cpy_r_r547 = cpy_r_r544 == Py_True;
    if (unlikely(cpy_r_r547 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1083, CPyStatic_checkmember___globals);
        goto CPyL406;
    }
    cpy_r_r548 = CPyDef_typeops___bind_self(cpy_r_r545, cpy_r_r546, cpy_r_r547);
    CPy_DECREF(cpy_r_r545);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1083, CPyStatic_checkmember___globals);
        goto CPyL350;
    }
    cpy_r_typ = cpy_r_r548;
CPyL332: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___Type)))
        cpy_r_r549 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1084, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL350;
    }
    cpy_r_r550 = CPyDef_checkmember___apply_class_attr_hook(cpy_r_mx, cpy_r_hook, cpy_r_r549);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r549);
    if (unlikely(cpy_r_r550 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 1084, CPyStatic_checkmember___globals);
        goto CPyL335;
    }
    return cpy_r_r550;
CPyL335: ;
    cpy_r_r551 = NULL;
    return cpy_r_r551;
CPyL336: ;
    CPy_INCREF(cpy_r_override_info);
    goto CPyL2;
CPyL337: ;
    CPy_INCREF(cpy_r_original_vars);
    goto CPyL4;
CPyL338: ;
    CPy_DECREF(cpy_r_override_info);
    goto CPyL10;
CPyL339: ;
    CPy_DecRef(cpy_r_override_info);
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    goto CPyL335;
CPyL340: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL8;
CPyL341: ;
    CPy_DecRef(cpy_r_original_vars);
    goto CPyL335;
CPyL342: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    goto CPyL335;
CPyL343: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_fullname);
    goto CPyL335;
CPyL344: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    goto CPyL335;
CPyL345: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_node);
    goto CPyL16;
CPyL346: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    goto CPyL335;
CPyL347: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_r28);
    goto CPyL24;
CPyL348: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_hook);
    goto CPyL24;
CPyL349: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL32;
CPyL350: ;
    CPy_DecRef(cpy_r_hook);
    goto CPyL335;
CPyL351: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL35;
CPyL352: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    goto CPyL335;
CPyL353: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL47;
CPyL354: ;
    CPy_DECREF(cpy_r_r114);
    goto CPyL80;
CPyL355: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r126);
    goto CPyL335;
CPyL356: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r151);
    goto CPyL335;
CPyL357: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r156);
    goto CPyL335;
CPyL358: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_node);
    goto CPyL104;
CPyL359: ;
    CPy_DECREF(cpy_r_enum_class_attribute_type);
    goto CPyL107;
CPyL360: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL110;
CPyL361: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_t);
    goto CPyL250;
CPyL362: ;
    CPy_DECREF(cpy_r_original_vars);
    goto CPyL111;
CPyL363: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    goto CPyL335;
CPyL364: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_symnode);
    goto CPyL113;
CPyL365: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_symnode);
    CPy_DecRef(cpy_r_r196);
    goto CPyL335;
CPyL366: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_r197);
    goto CPyL335;
CPyL367: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    goto CPyL335;
CPyL368: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r215);
    goto CPyL335;
CPyL369: ;
    CPy_DECREF(cpy_r_super_info);
    goto CPyL146;
CPyL370: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL335;
CPyL371: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_isuper);
    goto CPyL335;
CPyL372: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_isuper);
    goto CPyL153;
CPyL373: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_def_vars);
    goto CPyL335;
CPyL374: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_def_vars);
    CPy_DecRef(cpy_r_r318);
    goto CPyL335;
CPyL375: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_def_vars);
    goto CPyL335;
CPyL376: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_def_vars);
    CPy_DecRef(cpy_r_r323);
    goto CPyL335;
CPyL377: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_def_vars);
    CPy_DecRef(cpy_r_r326);
    goto CPyL335;
CPyL378: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r327);
    goto CPyL335;
CPyL379: ;
    CPy_DECREF(cpy_r_r328);
    goto CPyL203;
CPyL380: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r327);
    CPy_DecRef(cpy_r_r328);
    goto CPyL335;
CPyL381: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_isuper);
    goto CPyL335;
CPyL382: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_isuper);
    CPy_DecRef(cpy_r_r338);
    goto CPyL335;
CPyL383: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL212;
CPyL384: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL221;
CPyL385: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_isuper);
    goto CPyL335;
CPyL386: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_isuper);
    goto CPyL335;
CPyL387: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    goto CPyL335;
CPyL388: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL252;
CPyL389: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL257;
CPyL390: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL263;
CPyL391: ;
    CPy_DecRef(cpy_r_r414);
    goto CPyL335;
CPyL392: ;
    CPy_DecRef(cpy_r_r414);
    CPy_DecRef(cpy_r_r416);
    goto CPyL335;
CPyL393: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    goto CPyL335;
CPyL394: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL268;
CPyL395: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL335;
CPyL396: ;
    CPy_DecRef(cpy_r_r446);
    goto CPyL335;
CPyL397: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL275;
CPyL398: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL279;
CPyL399: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r465);
    goto CPyL335;
CPyL400: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL287;
CPyL401: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL299;
CPyL402: ;
    CPy_DECREF(cpy_r_hook);
    CPy_DECREF(cpy_r_node);
    goto CPyL310;
CPyL403: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r521);
    goto CPyL335;
CPyL404: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r526);
    goto CPyL335;
CPyL405: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_typ);
    goto CPyL335;
CPyL406: ;
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_r545);
    goto CPyL335;
}

PyObject *CPyPy_checkmember___analyze_class_attribute_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"itype", "name", "mx", "override_info", "original_vars", "mcs_fallback", 0};
    static CPyArg_Parser parser = {"OOO|$OO@O:analyze_class_attribute_access", kwlist, 0};
    PyObject *obj_itype;
    PyObject *obj_name;
    PyObject *obj_mx;
    PyObject *obj_mcs_fallback;
    PyObject *obj_override_info = NULL;
    PyObject *obj_original_vars = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_itype, &obj_name, &obj_mx, &obj_override_info, &obj_original_vars, &obj_mcs_fallback)) {
        return NULL;
    }
    PyObject *arg_itype;
    if (likely(Py_TYPE(obj_itype) == CPyType_types___Instance))
        arg_itype = obj_itype;
    else {
        CPy_TypeError("mypy.types.Instance", obj_itype); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_mcs_fallback;
    if (likely(Py_TYPE(obj_mcs_fallback) == CPyType_types___Instance))
        arg_mcs_fallback = obj_mcs_fallback;
    else {
        CPy_TypeError("mypy.types.Instance", obj_mcs_fallback); 
        goto fail;
    }
    PyObject *arg_override_info;
    if (obj_override_info == NULL) {
        arg_override_info = NULL;
        goto __LL1474;
    }
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1474;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1474;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1474: ;
    PyObject *arg_original_vars;
    if (obj_original_vars == NULL) {
        arg_original_vars = NULL;
        goto __LL1475;
    }
    arg_original_vars = obj_original_vars;
    if (arg_original_vars != NULL) goto __LL1475;
    if (obj_original_vars == Py_None)
        arg_original_vars = obj_original_vars;
    else {
        arg_original_vars = NULL;
    }
    if (arg_original_vars != NULL) goto __LL1475;
    CPy_TypeError("object or None", obj_original_vars); 
    goto fail;
__LL1475: ;
    PyObject *retval = CPyDef_checkmember___analyze_class_attribute_access(arg_itype, arg_name, arg_mx, arg_mcs_fallback, arg_override_info, arg_original_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_class_attribute_access", 902, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___apply_class_attr_hook(PyObject *cpy_r_mx, PyObject *cpy_r_hook, PyObject *cpy_r_result) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_hook != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL14;
    CPy_INCREF(cpy_r_hook);
    cpy_r_r2 = cpy_r_hook;
    cpy_r_r3 = PyObject_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1088, CPyStatic_checkmember___globals);
        goto CPyL13;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_types___get_proper_type(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1092, CPyStatic_checkmember___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1092, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r7);
        goto CPyL13;
    }
    cpy_r_r9 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatic_checkmember___globals;
    cpy_r_r12 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1092, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r14[4] = {cpy_r_r8, cpy_r_result, cpy_r_r9, cpy_r_r10};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 4, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1092, CPyStatic_checkmember___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1092, CPyStatic_checkmember___globals, "tuple", cpy_r_r16);
        goto CPyL13;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r17};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_hook, cpy_r_r19, 1, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1091, CPyStatic_checkmember___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___Type)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1091, CPyStatic_checkmember___globals, "mypy.types.Type", cpy_r_r20);
        goto CPyL13;
    }
    cpy_r_result = cpy_r_r21;
CPyL12: ;
    return cpy_r_result;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_INCREF(cpy_r_result);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL13;
}

PyObject *CPyPy_checkmember___apply_class_attr_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mx", "hook", "result", 0};
    static CPyArg_Parser parser = {"OOO:apply_class_attr_hook", kwlist, 0};
    PyObject *obj_mx;
    PyObject *obj_hook;
    PyObject *obj_result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mx, &obj_hook, &obj_result)) {
        return NULL;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_hook;
    arg_hook = obj_hook;
    if (arg_hook != NULL) goto __LL1476;
    if (obj_hook == Py_None)
        arg_hook = obj_hook;
    else {
        arg_hook = NULL;
    }
    if (arg_hook != NULL) goto __LL1476;
    CPy_TypeError("object or None", obj_hook); 
    goto fail;
__LL1476: ;
    PyObject *arg_result;
    if (likely(PyObject_TypeCheck(obj_result, CPyType_types___Type)))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.types.Type", obj_result); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___apply_class_attr_hook(arg_mx, arg_hook, arg_result);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "apply_class_attr_hook", 1087, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_enum_class_attribute_access(PyObject *cpy_r_itype, PyObject *cpy_r_name, PyObject *cpy_r_mx) {
    tuple_T3OOO cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_enum_literal;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyStatic_types___ENUM_REMOVED_PROPS;
    if (likely(cpy_r_r0.f0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_REMOVED_PROPS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1101, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    CPy_INCREF(cpy_r_r0.f2);
    cpy_r_r2 = PyTuple_New(3);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1477 = cpy_r_r0.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp1477);
    PyObject *__tmp1478 = cpy_r_r0.f1;
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp1478);
    PyObject *__tmp1479 = cpy_r_r0.f2;
    PyTuple_SET_ITEM(cpy_r_r2, 2, __tmp1479);
    cpy_r_r3 = PySequence_Contains(cpy_r_r2, cpy_r_name);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1101, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_original_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_checkmember___report_missing_attribute(cpy_r_r6, cpy_r_itype, cpy_r_name, cpy_r_mx, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1102, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = CPyStatics[756]; /* '__' */
    cpy_r_r10 = CPyStr_Startswith(cpy_r_name, cpy_r_r9);
    if (!cpy_r_r10) goto CPyL15;
    cpy_r_r11 = CPyStatics[756]; /* '__' */
    cpy_r_r12 = CPyStr_Endswith(cpy_r_name, cpy_r_r11);
    if (!cpy_r_r12) goto CPyL15;
    cpy_r_r13 = CPyStatics[755]; /* '_' */
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15 = PyUnicode_Replace(cpy_r_name, cpy_r_r13, cpy_r_r14, -1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1104, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    cpy_r_r16 = CPyStatics[163]; /* '' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1104, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
CPyL13: ;
    cpy_r_r22 = cpy_r_r17 != 0;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = Py_None;
    CPy_INCREF(cpy_r_r23);
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_types___LiteralType(cpy_r_name, cpy_r_itype, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1107, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    cpy_r_enum_literal = cpy_r_r26;
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_types___Instance___copy_modified(cpy_r_itype, cpy_r_r27, cpy_r_enum_literal);
    CPy_DECREF(cpy_r_enum_literal);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1108, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    return cpy_r_r28;
CPyL18: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
}

PyObject *CPyPy_checkmember___analyze_enum_class_attribute_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"itype", "name", "mx", 0};
    static CPyArg_Parser parser = {"OOO:analyze_enum_class_attribute_access", kwlist, 0};
    PyObject *obj_itype;
    PyObject *obj_name;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_itype, &obj_name, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_itype;
    if (likely(Py_TYPE(obj_itype) == CPyType_types___Instance))
        arg_itype = obj_itype;
    else {
        CPy_TypeError("mypy.types.Instance", obj_itype); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_enum_class_attribute_access(arg_itype, arg_name, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_enum_class_attribute_access", 1097, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_typeddict_access(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_mx, PyObject *cpy_r_override_info) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    cpy_r_r0 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_name, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1114, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL25;
    cpy_r_r7 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    cpy_r_r8 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    cpy_r_r13 = ((mypy___checker___TypeCheckerObject *)cpy_r_r12)->_expr_checker;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "analyze_typeddict_access", "TypeChecker", "expr_checker", 1118, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r13);
CPyL6: ;
    cpy_r_r14 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_context;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___IndexExpr))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1119, CPyStatic_checkmember___globals, "mypy.nodes.IndexExpr", cpy_r_r14);
        goto CPyL43;
    }
    cpy_r_r16 = ((mypy___nodes___IndexExprObject *)cpy_r_r15)->_index;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_checkexpr___ExpressionChecker___visit_typeddict_index_expr(cpy_r_r13, cpy_r_typ, cpy_r_r16, 1);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1118, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    cpy_r_item_type = cpy_r_r17;
    goto CPyL11;
CPyL9: ;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_types___AnyType(16, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1126, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    cpy_r_item_type = cpy_r_r22;
CPyL11: ;
    cpy_r_r23 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r25 = CPyDef_checker___TypeChecker___named_type(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1128, CPyStatic_checkmember___globals);
        goto CPyL44;
    }
    cpy_r_r26 = PyList_New(2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1128, CPyStatic_checkmember___globals);
        goto CPyL45;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_r29 = cpy_r_r28 + 8;
    *(PyObject * *)cpy_r_r29 = cpy_r_item_type;
    cpy_r_r30 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1129, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r32 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL47;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1129, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r34 = PyList_New(2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1129, CPyStatic_checkmember___globals);
        goto CPyL48;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    CPy_INCREF(cpy_r_r30);
    *(PyObject * *)cpy_r_r36 = cpy_r_r30;
    cpy_r_r37 = cpy_r_r36 + 8;
    CPy_INCREF(cpy_r_r32);
    *(PyObject * *)cpy_r_r37 = cpy_r_r32;
    cpy_r_r38 = PyList_New(2);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1130, CPyStatic_checkmember___globals);
        goto CPyL49;
    }
    cpy_r_r39 = Py_None;
    cpy_r_r40 = Py_None;
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r38)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    CPy_INCREF(cpy_r_r39);
    *(PyObject * *)cpy_r_r42 = cpy_r_r39;
    cpy_r_r43 = cpy_r_r42 + 8;
    CPy_INCREF(cpy_r_r40);
    *(PyObject * *)cpy_r_r43 = cpy_r_r40;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPyDef_types___NoneType(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1131, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    cpy_r_r47 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r49 = CPyDef_checker___TypeChecker___named_type(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1132, CPyStatic_checkmember___globals);
        goto CPyL51;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = 2;
    cpy_r_r55 = 2;
    cpy_r_r56 = NULL;
    cpy_r_r57 = 2;
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = 2;
    cpy_r_r62 = 2;
    cpy_r_r63 = CPyDef_types___CallableType(cpy_r_r26, cpy_r_r34, cpy_r_r38, cpy_r_r46, cpy_r_r49, cpy_r_name, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1127, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    return cpy_r_r63;
CPyL25: ;
    cpy_r_r64 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r65 = PyUnicode_Compare(cpy_r_name, cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 == -1;
    if (!cpy_r_r66) goto CPyL28;
    cpy_r_r67 = PyErr_Occurred();
    cpy_r_r68 = cpy_r_r67 != NULL;
    if (!cpy_r_r68) goto CPyL28;
    cpy_r_r69 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1135, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
CPyL28: ;
    cpy_r_r70 = cpy_r_r65 == 0;
    if (!cpy_r_r70) goto CPyL40;
    cpy_r_r71 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r73 = CPyDef_checker___TypeChecker___named_type(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1137, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    cpy_r_r74 = PyList_New(1);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1137, CPyStatic_checkmember___globals);
        goto CPyL52;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    *(PyObject * *)cpy_r_r76 = cpy_r_r73;
    cpy_r_r77 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1138, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r79 = PyList_New(1);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1138, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    cpy_r_r80 = (CPyPtr)&((PyListObject *)cpy_r_r79)->ob_item;
    cpy_r_r81 = *(CPyPtr *)cpy_r_r80;
    CPy_INCREF(cpy_r_r77);
    *(PyObject * *)cpy_r_r81 = cpy_r_r77;
    cpy_r_r82 = PyList_New(1);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1139, CPyStatic_checkmember___globals);
        goto CPyL55;
    }
    cpy_r_r83 = Py_None;
    cpy_r_r84 = (CPyPtr)&((PyListObject *)cpy_r_r82)->ob_item;
    cpy_r_r85 = *(CPyPtr *)cpy_r_r84;
    CPy_INCREF(cpy_r_r83);
    *(PyObject * *)cpy_r_r85 = cpy_r_r83;
    cpy_r_r86 = CPY_INT_TAG;
    cpy_r_r87 = CPY_INT_TAG;
    cpy_r_r88 = CPyDef_types___NoneType(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1140, CPyStatic_checkmember___globals);
        goto CPyL56;
    }
    cpy_r_r89 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r91 = CPyDef_checker___TypeChecker___named_type(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1141, CPyStatic_checkmember___globals);
        goto CPyL57;
    }
    cpy_r_r92 = NULL;
    cpy_r_r93 = NULL;
    cpy_r_r94 = CPY_INT_TAG;
    cpy_r_r95 = CPY_INT_TAG;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = NULL;
    cpy_r_r99 = 2;
    cpy_r_r100 = NULL;
    cpy_r_r101 = NULL;
    cpy_r_r102 = NULL;
    cpy_r_r103 = 2;
    cpy_r_r104 = 2;
    cpy_r_r105 = CPyDef_types___CallableType(cpy_r_r74, cpy_r_r79, cpy_r_r82, cpy_r_r88, cpy_r_r91, cpy_r_name, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1136, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    return cpy_r_r105;
CPyL40: ;
    cpy_r_r106 = ((mypy___types___TypedDictTypeObject *)cpy_r_typ)->_fallback;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = CPyDef_checkmember____analyze_member_access(cpy_r_name, cpy_r_r106, cpy_r_mx, cpy_r_override_info);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1144, CPyStatic_checkmember___globals);
        goto CPyL42;
    }
    return cpy_r_r107;
CPyL42: ;
    cpy_r_r108 = NULL;
    return cpy_r_r108;
CPyL43: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_item_type);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_r25);
    goto CPyL42;
CPyL46: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL14;
CPyL47: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL17;
CPyL48: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL42;
CPyL49: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r34);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r38);
    goto CPyL42;
CPyL51: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL42;
CPyL52: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL42;
CPyL53: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL32;
CPyL54: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL42;
CPyL55: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r79);
    goto CPyL42;
CPyL56: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r82);
    goto CPyL42;
CPyL57: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r88);
    goto CPyL42;
}

PyObject *CPyPy_checkmember___analyze_typeddict_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "mx", "override_info", 0};
    static CPyArg_Parser parser = {"OOOO:analyze_typeddict_access", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_mx;
    PyObject *obj_override_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_mx, &obj_override_info)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TypedDictType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_typ); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *arg_override_info;
    if ((Py_TYPE(obj_override_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_override_info) == CPyType_nodes___TypeInfo))
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1480;
    if (obj_override_info == Py_None)
        arg_override_info = obj_override_info;
    else {
        arg_override_info = NULL;
    }
    if (arg_override_info != NULL) goto __LL1480;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_override_info); 
    goto fail;
__LL1480: ;
    PyObject *retval = CPyDef_checkmember___analyze_typeddict_access(arg_name, arg_typ, arg_mx, arg_override_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_typeddict_access", 1111, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___add_class_tvars(PyObject *cpy_r_t, PyObject *cpy_r_isuper, char cpy_r_is_classmethod, PyObject *cpy_r_original_type, PyObject *cpy_r_original_vars) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_tvars;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
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
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
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
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    if (cpy_r_original_vars != NULL) goto CPyL51;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_original_vars = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL31;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_original_vars != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL52;
    cpy_r_r7 = cpy_r_original_vars;
    goto CPyL7;
CPyL5: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1190, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    cpy_r_r7 = cpy_r_r8;
CPyL7: ;
    cpy_r_tvars = cpy_r_r7;
    if (!cpy_r_is_classmethod) goto CPyL53;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1192, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL54;
    }
    cpy_r_r10 = CPyDef_expandtype___freshen_all_functions_type_vars(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1192, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___CallableType))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1192, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r10);
        goto CPyL54;
    }
    cpy_r_t = cpy_r_r11;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1193, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL54;
    }
    cpy_r_r13 = CPyDef_typeops___bind_self(cpy_r_r12, cpy_r_original_type, 1);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1193, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_types___CallableType))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1193, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r13);
        goto CPyL54;
    }
    cpy_r_t = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_isuper != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL17;
    } else
        goto CPyL55;
CPyL15: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1194, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r18 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1195, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_isuper);
    if (likely(cpy_r_isuper != Py_None))
        cpy_r_r19 = cpy_r_isuper;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1195, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_isuper);
        goto CPyL56;
    }
    cpy_r_r20 = CPyDef_expandtype___expand_type_by_instance(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1195, CPyStatic_checkmember___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___CallableType))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1195, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r20);
        goto CPyL54;
    }
    cpy_r_t = cpy_r_r21;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r22 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1196, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL57;
    }
    cpy_r_r23 = CPyDef_checkmember___freeze_all_type_vars(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1196, CPyStatic_checkmember___globals);
        goto CPyL57;
    }
CPyL23: ;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r24 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL57;
    }
    cpy_r_r25 = PySequence_List(cpy_r_tvars);
    CPy_DECREF(cpy_r_tvars);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals);
        goto CPyL58;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r26 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL59;
    }
    cpy_r_r27 = ((mypy___types___CallableTypeObject *)cpy_r_r26)->_variables;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_t);
    cpy_r_r28 = PySequence_List(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals);
        goto CPyL60;
    }
    cpy_r_r29 = PyNumber_Add(cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals);
        goto CPyL61;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals, "list", cpy_r_r29);
        goto CPyL61;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = NULL;
    cpy_r_r36 = NULL;
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_types___CallableType___copy_modified(cpy_r_r24, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r30, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1197, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    return cpy_r_r49;
CPyL31: ;
    cpy_r_r50 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL62;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Overloaded))
        cpy_r_r54 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1207, CPyStatic_checkmember___globals, "mypy.types.Overloaded", cpy_r_t);
        goto CPyL63;
    }
    cpy_r_r55 = CPY_GET_ATTR(cpy_r_r54, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1207, CPyStatic_checkmember___globals);
        goto CPyL63;
    }
CPyL34: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = PyList_New(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1200, CPyStatic_checkmember___globals);
        goto CPyL64;
    }
    cpy_r_r59 = 0;
CPyL36: ;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r59 < (Py_ssize_t)cpy_r_r62;
    if (!cpy_r_r63) goto CPyL65;
    cpy_r_r64 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r59);
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_types___CallableType))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1200, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r64);
        goto CPyL66;
    }
    cpy_r_item = cpy_r_r65;
    cpy_r_r66 = CPyDef_checkmember___add_class_tvars(cpy_r_item, cpy_r_isuper, cpy_r_is_classmethod, cpy_r_original_type, cpy_r_original_vars);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1203, CPyStatic_checkmember___globals);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_types___CallableType))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1201, CPyStatic_checkmember___globals, "mypy.types.CallableType", cpy_r_r66);
        goto CPyL66;
    }
    cpy_r_r68 = CPyList_SetItemUnsafe(cpy_r_r58, cpy_r_r59, cpy_r_r67);
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1200, CPyStatic_checkmember___globals);
        goto CPyL66;
    }
    cpy_r_r69 = cpy_r_r59 + 2;
    cpy_r_r59 = cpy_r_r69;
    goto CPyL36;
CPyL42: ;
    cpy_r_r70 = CPyDef_types___Overloaded(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1199, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    return cpy_r_r70;
CPyL44: ;
    cpy_r_r71 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r72 = cpy_r_isuper != cpy_r_r71;
    if (!cpy_r_r72) goto CPyL67;
    CPy_INCREF(cpy_r_isuper);
    if (likely(cpy_r_isuper != Py_None))
        cpy_r_r73 = cpy_r_isuper;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1211, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_isuper);
        goto CPyL50;
    }
    cpy_r_r74 = CPyDef_expandtype___expand_type_by_instance(cpy_r_t, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1211, CPyStatic_checkmember___globals);
        goto CPyL50;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r74, CPyType_types___ProperType)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "add_class_tvars", 1211, CPyStatic_checkmember___globals, "mypy.types.ProperType", cpy_r_r74);
        goto CPyL50;
    }
    cpy_r_t = cpy_r_r75;
CPyL49: ;
    return cpy_r_t;
CPyL50: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL51: ;
    CPy_INCREF(cpy_r_original_vars);
    goto CPyL2;
CPyL52: ;
    CPy_DECREF(cpy_r_original_vars);
    goto CPyL5;
CPyL53: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL23;
CPyL54: ;
    CPy_DecRef(cpy_r_tvars);
    goto CPyL50;
CPyL55: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL15;
CPyL56: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_r18);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL50;
CPyL58: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r24);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL50;
CPyL62: ;
    CPy_DECREF(cpy_r_original_vars);
    goto CPyL44;
CPyL63: ;
    CPy_DecRef(cpy_r_original_vars);
    goto CPyL50;
CPyL64: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_r55);
    goto CPyL50;
CPyL65: ;
    CPy_DECREF(cpy_r_original_vars);
    CPy_DECREF(cpy_r_r55);
    goto CPyL42;
CPyL66: ;
    CPy_DecRef(cpy_r_original_vars);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r58);
    goto CPyL50;
CPyL67: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL49;
}

PyObject *CPyPy_checkmember___add_class_tvars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "isuper", "is_classmethod", "original_type", "original_vars", 0};
    static CPyArg_Parser parser = {"OOOO|O:add_class_tvars", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_isuper;
    PyObject *obj_is_classmethod;
    PyObject *obj_original_type;
    PyObject *obj_original_vars = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_isuper, &obj_is_classmethod, &obj_original_type, &obj_original_vars)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___ProperType)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_t); 
        goto fail;
    }
    PyObject *arg_isuper;
    if (Py_TYPE(obj_isuper) == CPyType_types___Instance)
        arg_isuper = obj_isuper;
    else {
        arg_isuper = NULL;
    }
    if (arg_isuper != NULL) goto __LL1481;
    if (obj_isuper == Py_None)
        arg_isuper = obj_isuper;
    else {
        arg_isuper = NULL;
    }
    if (arg_isuper != NULL) goto __LL1481;
    CPy_TypeError("mypy.types.Instance or None", obj_isuper); 
    goto fail;
__LL1481: ;
    char arg_is_classmethod;
    if (unlikely(!PyBool_Check(obj_is_classmethod))) {
        CPy_TypeError("bool", obj_is_classmethod); goto fail;
    } else
        arg_is_classmethod = obj_is_classmethod == Py_True;
    PyObject *arg_original_type;
    if (likely(PyObject_TypeCheck(obj_original_type, CPyType_types___Type)))
        arg_original_type = obj_original_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_original_type); 
        goto fail;
    }
    PyObject *arg_original_vars;
    if (obj_original_vars == NULL) {
        arg_original_vars = NULL;
        goto __LL1482;
    }
    arg_original_vars = obj_original_vars;
    if (arg_original_vars != NULL) goto __LL1482;
    if (obj_original_vars == Py_None)
        arg_original_vars = obj_original_vars;
    else {
        arg_original_vars = NULL;
    }
    if (arg_original_vars != NULL) goto __LL1482;
    CPy_TypeError("object or None", obj_original_vars); 
    goto fail;
__LL1482: ;
    PyObject *retval = CPyDef_checkmember___add_class_tvars(arg_t, arg_isuper, arg_is_classmethod, arg_original_type, arg_original_vars);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "add_class_tvars", 1147, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___type_object_type(PyObject *cpy_r_info, PyObject *cpy_r_named_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_init_method;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_new_method;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T2T2OOO cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2T2OOO cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyTagged cpy_r_init_index;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyTagged cpy_r_new_index;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_fallback;
    int64_t cpy_r_r103;
    char cpy_r_r104;
    int64_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_method;
    char cpy_r_is_new;
    int64_t cpy_r_r112;
    char cpy_r_r113;
    int64_t cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyPtr cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    CPyTagged cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r153;
    CPyPtr cpy_r_r154;
    CPyPtr cpy_r_r155;
    CPyPtr cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyPtr cpy_r_r162;
    CPyPtr cpy_r_r163;
    CPyPtr cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyPtr cpy_r_r168;
    CPyPtr cpy_r_r169;
    CPyPtr cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyTagged cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    CPyPtr cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    CPyPtr cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyPtr cpy_r_r221;
    PyObject *cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    CPyPtr cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    CPyPtr cpy_r_r234;
    PyObject *cpy_r_r235;
    char cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    CPyPtr cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    CPyPtr cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    cpy_r_r1 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1228, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    cpy_r_init_method = cpy_r_r1;
    cpy_r_r2 = CPyStatics[721]; /* '__new__' */
    cpy_r_r3 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1229, CPyStatic_checkmember___globals);
        goto CPyL157;
    }
    cpy_r_new_method = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_init_method != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL158;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r6 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1230, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL159;
    }
    cpy_r_r7 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r6)->_node;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_checkmember___is_valid_constructor(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1230, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    if (cpy_r_r8) {
        goto CPyL8;
    } else
        goto CPyL158;
CPyL6: ;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = CPyDef_types___AnyType(10, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1232, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    return cpy_r_r13;
CPyL8: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_new_method != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL160;
    if (likely(cpy_r_new_method != Py_None))
        cpy_r_r16 = cpy_r_new_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1235, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_new_method);
        goto CPyL157;
    }
    cpy_r_r17 = cpy_r_r16;
    goto CPyL13;
CPyL11: ;
    CPy_INCREF(cpy_r_init_method);
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r18 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1235, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL157;
    }
    cpy_r_r17 = cpy_r_r18;
CPyL13: ;
    cpy_r_new_method = cpy_r_r17;
    if (likely(cpy_r_new_method != Py_None))
        cpy_r_r19 = cpy_r_new_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1236, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_new_method);
        goto CPyL159;
    }
    cpy_r_r20 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r19)->_node;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_checkmember___is_valid_constructor(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1236, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    if (cpy_r_r21) {
        goto CPyL18;
    } else
        goto CPyL161;
CPyL16: ;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_types___AnyType(10, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1238, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    return cpy_r_r26;
CPyL18: ;
    if (likely(cpy_r_new_method != Py_None))
        cpy_r_r27 = cpy_r_new_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1241, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_new_method);
        goto CPyL159;
    }
    cpy_r_r28 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r27)->_node;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_checkmember___globals;
    cpy_r_r30 = CPyStatics[1329]; /* 'SYMBOL_FUNCBASE_TYPES' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1241, CPyStatic_checkmember___globals);
        goto CPyL162;
    }
    PyObject *__tmp1483;
    if (unlikely(!(PyTuple_Check(cpy_r_r31) && PyTuple_GET_SIZE(cpy_r_r31) == 2))) {
        __tmp1483 = NULL;
        goto __LL1484;
    }
    __tmp1483 = PyTuple_GET_ITEM(cpy_r_r31, 0);
    if (__tmp1483 == NULL) goto __LL1484;
    __tmp1483 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    if (__tmp1483 == NULL) goto __LL1484;
    __tmp1483 = cpy_r_r31;
__LL1484: ;
    if (unlikely(__tmp1483 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r31); cpy_r_r32 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1485 = PyTuple_GET_ITEM(cpy_r_r31, 0);
        CPy_INCREF(__tmp1485);
        PyObject *__tmp1486;
        __tmp1486 = __tmp1485;
        cpy_r_r32.f0 = __tmp1486;
        PyObject *__tmp1487 = PyTuple_GET_ITEM(cpy_r_r31, 1);
        CPy_INCREF(__tmp1487);
        PyObject *__tmp1488;
        __tmp1488 = __tmp1487;
        cpy_r_r32.f1 = __tmp1488;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1241, CPyStatic_checkmember___globals);
        goto CPyL162;
    }
    cpy_r_r33 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r34.f0 = cpy_r_r32;
    cpy_r_r34.f1 = cpy_r_r33;
    CPy_INCREF(cpy_r_r34.f0.f0);
    CPy_INCREF(cpy_r_r34.f0.f1);
    CPy_INCREF(cpy_r_r34.f1);
    CPy_DECREF(cpy_r_r32.f0);
    CPy_DECREF(cpy_r_r32.f1);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1489 = PyTuple_New(2);
    if (unlikely(__tmp1489 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1490 = cpy_r_r34.f0.f0;
    PyTuple_SET_ITEM(__tmp1489, 0, __tmp1490);
    PyObject *__tmp1491 = cpy_r_r34.f0.f1;
    PyTuple_SET_ITEM(__tmp1489, 1, __tmp1491);
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp1489);
    PyObject *__tmp1492 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp1492);
    cpy_r_r36 = PyObject_IsInstance(cpy_r_r28, cpy_r_r35);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1241, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    cpy_r_r38 = cpy_r_r36;
    if (cpy_r_r38) {
        goto CPyL25;
    } else
        goto CPyL163;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1241, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL25: ;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r40 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1242, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL159;
    }
    cpy_r_r41 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r40)->_node;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyStatic_checkmember___globals;
    cpy_r_r43 = CPyStatics[1329]; /* 'SYMBOL_FUNCBASE_TYPES' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1242, CPyStatic_checkmember___globals);
        goto CPyL164;
    }
    PyObject *__tmp1493;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp1493 = NULL;
        goto __LL1494;
    }
    __tmp1493 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    if (__tmp1493 == NULL) goto __LL1494;
    __tmp1493 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    if (__tmp1493 == NULL) goto __LL1494;
    __tmp1493 = cpy_r_r44;
__LL1494: ;
    if (unlikely(__tmp1493 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r44); cpy_r_r45 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1495 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPy_INCREF(__tmp1495);
        PyObject *__tmp1496;
        __tmp1496 = __tmp1495;
        cpy_r_r45.f0 = __tmp1496;
        PyObject *__tmp1497 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp1497);
        PyObject *__tmp1498;
        __tmp1498 = __tmp1497;
        cpy_r_r45.f1 = __tmp1498;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1242, CPyStatic_checkmember___globals);
        goto CPyL164;
    }
    cpy_r_r46 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r47.f0 = cpy_r_r45;
    cpy_r_r47.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0.f0);
    CPy_INCREF(cpy_r_r47.f0.f1);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r_r48 = PyTuple_New(2);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1499 = PyTuple_New(2);
    if (unlikely(__tmp1499 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1500 = cpy_r_r47.f0.f0;
    PyTuple_SET_ITEM(__tmp1499, 0, __tmp1500);
    PyObject *__tmp1501 = cpy_r_r47.f0.f1;
    PyTuple_SET_ITEM(__tmp1499, 1, __tmp1501);
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp1499);
    PyObject *__tmp1502 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp1502);
    cpy_r_r49 = PyObject_IsInstance(cpy_r_r41, cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1242, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    cpy_r_r51 = cpy_r_r49;
    if (cpy_r_r51) {
        goto CPyL32;
    } else
        goto CPyL165;
CPyL30: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1242, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r53 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "type_object_type", "TypeInfo", "mro", 1244, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r53);
CPyL33: ;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r54 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL166;
    }
    cpy_r_r55 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r54)->_node;
    CPy_INCREF(cpy_r_r55);
    if (Py_TYPE(cpy_r_r55) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r56 = cpy_r_r55;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1503;
    if (Py_TYPE(cpy_r_r55) == CPyType_nodes___FuncDef)
        cpy_r_r56 = cpy_r_r55;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1503;
    if (Py_TYPE(cpy_r_r55) == CPyType_nodes___Decorator)
        cpy_r_r56 = cpy_r_r55;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1503;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r55);
    goto CPyL166;
__LL1503: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r61 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r56);
        goto CPyL166;
    }
    cpy_r_r62 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r61)->_info;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62;
    goto CPyL44;
CPyL38: ;
    cpy_r_r64 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL41;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___FuncDef))
        cpy_r_r68 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_r56);
        goto CPyL166;
    }
    cpy_r_r69 = ((mypy___nodes___FuncDefObject *)cpy_r_r68)->_info;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r63 = cpy_r_r69;
    goto CPyL44;
CPyL41: ;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___Decorator))
        cpy_r_r70 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r56);
        goto CPyL166;
    }
    cpy_r_r71 = CPY_GET_ATTR(cpy_r_r70, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals);
        goto CPyL166;
    }
CPyL43: ;
    cpy_r_r63 = cpy_r_r71;
CPyL44: ;
    cpy_r_r72 = CPyList_Index(cpy_r_r53, cpy_r_r63);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1244, CPyStatic_checkmember___globals);
        goto CPyL159;
    }
    cpy_r_init_index = cpy_r_r72;
    cpy_r_r73 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "type_object_type", "TypeInfo", "mro", 1245, CPyStatic_checkmember___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r73);
CPyL46: ;
    if (likely(cpy_r_new_method != Py_None))
        cpy_r_r74 = cpy_r_new_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_new_method);
        goto CPyL168;
    }
    cpy_r_r75 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r74)->_node;
    CPy_INCREF(cpy_r_r75);
    if (Py_TYPE(cpy_r_r75) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r76 = cpy_r_r75;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL1504;
    if (Py_TYPE(cpy_r_r75) == CPyType_nodes___FuncDef)
        cpy_r_r76 = cpy_r_r75;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL1504;
    if (Py_TYPE(cpy_r_r75) == CPyType_nodes___Decorator)
        cpy_r_r76 = cpy_r_r75;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL1504;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r75);
    goto CPyL168;
__LL1504: ;
    cpy_r_r77 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL51;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r81 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r76);
        goto CPyL168;
    }
    cpy_r_r82 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r81)->_info;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82;
    goto CPyL57;
CPyL51: ;
    cpy_r_r84 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (!cpy_r_r87) goto CPyL54;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___FuncDef))
        cpy_r_r88 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_r76);
        goto CPyL168;
    }
    cpy_r_r89 = ((mypy___nodes___FuncDefObject *)cpy_r_r88)->_info;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r83 = cpy_r_r89;
    goto CPyL57;
CPyL54: ;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___Decorator))
        cpy_r_r90 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r76);
        goto CPyL168;
    }
    cpy_r_r91 = CPY_GET_ATTR(cpy_r_r90, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals);
        goto CPyL168;
    }
CPyL56: ;
    cpy_r_r83 = cpy_r_r91;
CPyL57: ;
    cpy_r_r92 = CPyList_Index(cpy_r_r73, cpy_r_r83);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r92 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1245, CPyStatic_checkmember___globals);
        goto CPyL167;
    }
    cpy_r_new_index = cpy_r_r92;
    cpy_r_r93 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metaclass_type;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/checkmember.py", "type_object_type", "TypeInfo", "metaclass_type", 1247, CPyStatic_checkmember___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r93);
CPyL59: ;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = cpy_r_r93 != cpy_r_r94;
    if (!cpy_r_r95) goto CPyL170;
    if (likely(cpy_r_r93 != Py_None))
        cpy_r_r96 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1247, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r93);
        goto CPyL169;
    }
    cpy_r_r97 = cpy_r_r96;
    goto CPyL65;
CPyL62: ;
    cpy_r_r98 = CPyStatics[771]; /* 'builtins.type' */
    PyObject *cpy_r_r99[1] = {cpy_r_r98};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r100, 1, 0);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1247, CPyStatic_checkmember___globals);
        goto CPyL169;
    }
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_types___Instance))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1247, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r101);
        goto CPyL169;
    }
    cpy_r_r97 = cpy_r_r102;
CPyL65: ;
    cpy_r_fallback = cpy_r_r97;
    cpy_r_r103 = cpy_r_init_index & 1;
    cpy_r_r104 = cpy_r_r103 != 0;
    if (cpy_r_r104) goto CPyL67;
    cpy_r_r105 = cpy_r_new_index & 1;
    cpy_r_r106 = cpy_r_r105 != 0;
    if (!cpy_r_r106) goto CPyL68;
CPyL67: ;
    cpy_r_r107 = CPyTagged_IsLt_(cpy_r_init_index, cpy_r_new_index);
    if (cpy_r_r107) {
        goto CPyL171;
    } else
        goto CPyL72;
CPyL68: ;
    cpy_r_r108 = (Py_ssize_t)cpy_r_init_index < (Py_ssize_t)cpy_r_new_index;
    if (cpy_r_r108) {
        goto CPyL171;
    } else
        goto CPyL72;
CPyL69: ;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r109 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1249, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL172;
    }
    cpy_r_r110 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r109)->_node;
    CPy_INCREF(cpy_r_r110);
    if (Py_TYPE(cpy_r_r110) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r111 = cpy_r_r110;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL1505;
    if (Py_TYPE(cpy_r_r110) == CPyType_nodes___FuncDef)
        cpy_r_r111 = cpy_r_r110;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL1505;
    if (Py_TYPE(cpy_r_r110) == CPyType_nodes___Decorator)
        cpy_r_r111 = cpy_r_r110;
    else {
        cpy_r_r111 = NULL;
    }
    if (cpy_r_r111 != NULL) goto __LL1505;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1249, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r110);
    goto CPyL172;
__LL1505: ;
    CPy_DECREF(cpy_r_init_method);
    cpy_r_method = cpy_r_r111;
    cpy_r_is_new = 0;
    goto CPyL115;
CPyL72: ;
    cpy_r_r112 = cpy_r_init_index & 1;
    cpy_r_r113 = cpy_r_r112 != 0;
    if (cpy_r_r113) goto CPyL74;
    cpy_r_r114 = cpy_r_new_index & 1;
    cpy_r_r115 = cpy_r_r114 != 0;
    if (!cpy_r_r115) goto CPyL75;
CPyL74: ;
    cpy_r_r116 = CPyTagged_IsLt_(cpy_r_new_index, cpy_r_init_index);
    CPyTagged_DECREF(cpy_r_new_index);
    CPyTagged_DECREF(cpy_r_init_index);
    if (cpy_r_r116) {
        goto CPyL173;
    } else
        goto CPyL174;
CPyL75: ;
    cpy_r_r117 = (Py_ssize_t)cpy_r_init_index > (Py_ssize_t)cpy_r_new_index;
    CPyTagged_DECREF(cpy_r_init_index);
    CPyTagged_DECREF(cpy_r_new_index);
    if (cpy_r_r117) {
        goto CPyL173;
    } else
        goto CPyL174;
CPyL76: ;
    if (likely(cpy_r_new_method != Py_None))
        cpy_r_r118 = cpy_r_new_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1252, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_new_method);
        goto CPyL175;
    }
    cpy_r_r119 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r118)->_node;
    CPy_INCREF(cpy_r_r119);
    if (Py_TYPE(cpy_r_r119) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r120 = cpy_r_r119;
    else {
        cpy_r_r120 = NULL;
    }
    if (cpy_r_r120 != NULL) goto __LL1506;
    if (Py_TYPE(cpy_r_r119) == CPyType_nodes___FuncDef)
        cpy_r_r120 = cpy_r_r119;
    else {
        cpy_r_r120 = NULL;
    }
    if (cpy_r_r120 != NULL) goto __LL1506;
    if (Py_TYPE(cpy_r_r119) == CPyType_nodes___Decorator)
        cpy_r_r120 = cpy_r_r119;
    else {
        cpy_r_r120 = NULL;
    }
    if (cpy_r_r120 != NULL) goto __LL1506;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1252, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r119);
    goto CPyL175;
__LL1506: ;
    CPy_DECREF(cpy_r_new_method);
    cpy_r_method = cpy_r_r120;
    cpy_r_is_new = 1;
    goto CPyL115;
CPyL79: ;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r121 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL172;
    }
    cpy_r_r122 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r121)->_node;
    CPy_INCREF(cpy_r_r122);
    if (Py_TYPE(cpy_r_r122) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r123 = cpy_r_r122;
    else {
        cpy_r_r123 = NULL;
    }
    if (cpy_r_r123 != NULL) goto __LL1507;
    if (Py_TYPE(cpy_r_r122) == CPyType_nodes___FuncDef)
        cpy_r_r123 = cpy_r_r122;
    else {
        cpy_r_r123 = NULL;
    }
    if (cpy_r_r123 != NULL) goto __LL1507;
    if (Py_TYPE(cpy_r_r122) == CPyType_nodes___Decorator)
        cpy_r_r123 = cpy_r_r122;
    else {
        cpy_r_r123 = NULL;
    }
    if (cpy_r_r123 != NULL) goto __LL1507;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r122);
    goto CPyL172;
__LL1507: ;
    cpy_r_r124 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_r123)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL84;
    if (likely(Py_TYPE(cpy_r_r123) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r128 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r123);
        goto CPyL172;
    }
    cpy_r_r129 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r128)->_info;
    CPy_INCREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129;
    goto CPyL90;
CPyL84: ;
    cpy_r_r131 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r132 = (CPyPtr)&((PyObject *)cpy_r_r123)->ob_type;
    cpy_r_r133 = *(PyObject * *)cpy_r_r132;
    cpy_r_r134 = cpy_r_r133 == cpy_r_r131;
    if (!cpy_r_r134) goto CPyL87;
    if (likely(Py_TYPE(cpy_r_r123) == CPyType_nodes___FuncDef))
        cpy_r_r135 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals, "mypy.nodes.FuncDef", cpy_r_r123);
        goto CPyL172;
    }
    cpy_r_r136 = ((mypy___nodes___FuncDefObject *)cpy_r_r135)->_info;
    CPy_INCREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r130 = cpy_r_r136;
    goto CPyL90;
CPyL87: ;
    if (likely(Py_TYPE(cpy_r_r123) == CPyType_nodes___Decorator))
        cpy_r_r137 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_r123);
        goto CPyL172;
    }
    cpy_r_r138 = CPY_GET_ATTR(cpy_r_r137, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals);
        goto CPyL172;
    }
CPyL89: ;
    cpy_r_r130 = cpy_r_r138;
CPyL90: ;
    cpy_r_r139 = CPY_GET_ATTR(cpy_r_r130, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals);
        goto CPyL172;
    }
CPyL91: ;
    cpy_r_r140 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r141 = PyUnicode_Compare(cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r142 = cpy_r_r141 == -1;
    if (!cpy_r_r142) goto CPyL94;
    cpy_r_r143 = PyErr_Occurred();
    cpy_r_r144 = cpy_r_r143 != NULL;
    if (!cpy_r_r144) goto CPyL94;
    cpy_r_r145 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1255, CPyStatic_checkmember___globals);
        goto CPyL172;
    }
CPyL94: ;
    cpy_r_r146 = cpy_r_r141 == 0;
    if (!cpy_r_r146) goto CPyL112;
    cpy_r_r147 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_fallback_to_any;
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AttributeError("mypy/checkmember.py", "type_object_type", "TypeInfo", "fallback_to_any", 1258, CPyStatic_checkmember___globals);
        goto CPyL172;
    }
CPyL96: ;
    if (cpy_r_r147) {
        goto CPyL176;
    } else
        goto CPyL112;
CPyL97: ;
    cpy_r_r148 = NULL;
    cpy_r_r149 = NULL;
    cpy_r_r150 = CPY_INT_TAG;
    cpy_r_r151 = CPY_INT_TAG;
    cpy_r_r152 = CPyDef_types___AnyType(12, cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1260, CPyStatic_checkmember___globals);
        goto CPyL177;
    }
    cpy_r_any_type = cpy_r_r152;
    cpy_r_r153 = PyList_New(2);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1262, CPyStatic_checkmember___globals);
        goto CPyL178;
    }
    cpy_r_r154 = (CPyPtr)&((PyListObject *)cpy_r_r153)->ob_item;
    cpy_r_r155 = *(CPyPtr *)cpy_r_r154;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r155 = cpy_r_any_type;
    cpy_r_r156 = cpy_r_r155 + 8;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r156 = cpy_r_any_type;
    cpy_r_r157 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r157 == NULL)) {
        goto CPyL179;
    } else
        goto CPyL102;
CPyL100: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1263, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r159 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r159 == NULL)) {
        goto CPyL180;
    } else
        goto CPyL105;
CPyL103: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r160 = 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1263, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r161 = PyList_New(2);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1263, CPyStatic_checkmember___globals);
        goto CPyL181;
    }
    cpy_r_r162 = (CPyPtr)&((PyListObject *)cpy_r_r161)->ob_item;
    cpy_r_r163 = *(CPyPtr *)cpy_r_r162;
    CPy_INCREF(cpy_r_r157);
    *(PyObject * *)cpy_r_r163 = cpy_r_r157;
    cpy_r_r164 = cpy_r_r163 + 8;
    CPy_INCREF(cpy_r_r159);
    *(PyObject * *)cpy_r_r164 = cpy_r_r159;
    cpy_r_r165 = CPyStatics[1333]; /* '_args' */
    cpy_r_r166 = CPyStatics[1334]; /* '_kwds' */
    cpy_r_r167 = PyList_New(2);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1264, CPyStatic_checkmember___globals);
        goto CPyL182;
    }
    cpy_r_r168 = (CPyPtr)&((PyListObject *)cpy_r_r167)->ob_item;
    cpy_r_r169 = *(CPyPtr *)cpy_r_r168;
    CPy_INCREF(cpy_r_r165);
    *(PyObject * *)cpy_r_r169 = cpy_r_r165;
    cpy_r_r170 = cpy_r_r169 + 8;
    CPy_INCREF(cpy_r_r166);
    *(PyObject * *)cpy_r_r170 = cpy_r_r166;
    cpy_r_r171 = CPyStatics[752]; /* 'builtins.function' */
    PyObject *cpy_r_r172[1] = {cpy_r_r171};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_named_type, cpy_r_r173, 1, 0);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1266, CPyStatic_checkmember___globals);
        goto CPyL183;
    }
    if (likely(Py_TYPE(cpy_r_r174) == CPyType_types___Instance))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1266, CPyStatic_checkmember___globals, "mypy.types.Instance", cpy_r_r174);
        goto CPyL183;
    }
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = CPY_INT_TAG;
    cpy_r_r180 = CPY_INT_TAG;
    cpy_r_r181 = 2;
    cpy_r_r182 = 2;
    cpy_r_r183 = NULL;
    cpy_r_r184 = 2;
    cpy_r_r185 = NULL;
    cpy_r_r186 = NULL;
    cpy_r_r187 = NULL;
    cpy_r_r188 = 2;
    cpy_r_r189 = 2;
    cpy_r_r190 = CPyDef_types___CallableType(cpy_r_r153, cpy_r_r161, cpy_r_r167, cpy_r_any_type, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188, cpy_r_r189);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_any_type);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1261, CPyStatic_checkmember___globals);
        goto CPyL177;
    }
    cpy_r_sig = cpy_r_r190;
    cpy_r_r191 = Py_None;
    cpy_r_r192 = NULL;
    cpy_r_r193 = CPyDef_typeops___class_callable(cpy_r_sig, cpy_r_info, cpy_r_fallback, cpy_r_r191, 0, cpy_r_r192);
    CPy_DECREF(cpy_r_sig);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1268, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    return cpy_r_r193;
CPyL112: ;
    if (likely(cpy_r_init_method != Py_None))
        cpy_r_r194 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1273, CPyStatic_checkmember___globals, "mypy.nodes.SymbolTableNode", cpy_r_init_method);
        goto CPyL172;
    }
    cpy_r_r195 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r194)->_node;
    CPy_INCREF(cpy_r_r195);
    if (Py_TYPE(cpy_r_r195) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r196 = cpy_r_r195;
    else {
        cpy_r_r196 = NULL;
    }
    if (cpy_r_r196 != NULL) goto __LL1508;
    if (Py_TYPE(cpy_r_r195) == CPyType_nodes___FuncDef)
        cpy_r_r196 = cpy_r_r195;
    else {
        cpy_r_r196 = NULL;
    }
    if (cpy_r_r196 != NULL) goto __LL1508;
    if (Py_TYPE(cpy_r_r195) == CPyType_nodes___Decorator)
        cpy_r_r196 = cpy_r_r195;
    else {
        cpy_r_r196 = NULL;
    }
    if (cpy_r_r196 != NULL) goto __LL1508;
    CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1273, CPyStatic_checkmember___globals, "union[mypy.nodes.OverloadedFuncDef, mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r195);
    goto CPyL172;
__LL1508: ;
    CPy_DECREF(cpy_r_init_method);
    cpy_r_method = cpy_r_r196;
    cpy_r_is_new = 0;
CPyL115: ;
    cpy_r_r197 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r198 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r199 = *(PyObject * *)cpy_r_r198;
    cpy_r_r200 = cpy_r_r199 == cpy_r_r197;
    if (!cpy_r_r200) goto CPyL117;
    cpy_r_r201 = cpy_r_r200;
    goto CPyL118;
CPyL117: ;
    cpy_r_r202 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r203 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r204 = *(PyObject * *)cpy_r_r203;
    cpy_r_r205 = cpy_r_r204 == cpy_r_r202;
    cpy_r_r201 = cpy_r_r205;
CPyL118: ;
    if (!cpy_r_r201) goto CPyL120;
    cpy_r_r206 = cpy_r_r201;
    goto CPyL121;
CPyL120: ;
    cpy_r_r207 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r208 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r209 = *(PyObject * *)cpy_r_r208;
    cpy_r_r210 = cpy_r_r209 == cpy_r_r207;
    cpy_r_r206 = cpy_r_r210;
CPyL121: ;
    if (!cpy_r_r206) goto CPyL125;
    CPy_INCREF(cpy_r_method);
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r211 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1278, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL184;
    }
    cpy_r_r212 = CPyDef_typeops___function_type(cpy_r_r211, cpy_r_fallback);
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1278, CPyStatic_checkmember___globals);
        goto CPyL184;
    }
    cpy_r_t = cpy_r_r212;
    goto CPyL142;
CPyL125: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator))
        cpy_r_r213 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1280, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_method);
        goto CPyL184;
    }
    cpy_r_r214 = CPY_GET_ATTR(cpy_r_r213, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1280, CPyStatic_checkmember___globals);
        goto CPyL184;
    }
CPyL127: ;
    cpy_r_r215 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r216 = CPy_TypeCheck(cpy_r_r214, cpy_r_r215);
    if (cpy_r_r216) {
        goto CPyL130;
    } else
        goto CPyL185;
CPyL128: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r217 = 0;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1280, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL130: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator))
        cpy_r_r218 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1281, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_method);
        goto CPyL184;
    }
    cpy_r_r219 = CPY_GET_ATTR(cpy_r_r218, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1281, CPyStatic_checkmember___globals);
        goto CPyL184;
    }
CPyL132: ;
    cpy_r_r220 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r221 = (CPyPtr)&((PyObject *)cpy_r_r219)->ob_type;
    cpy_r_r222 = *(PyObject * *)cpy_r_r221;
    cpy_r_r223 = cpy_r_r222 == cpy_r_r220;
    if (!cpy_r_r223) goto CPyL134;
    cpy_r_r224 = cpy_r_r223;
    goto CPyL135;
CPyL134: ;
    cpy_r_r225 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r226 = (CPyPtr)&((PyObject *)cpy_r_r219)->ob_type;
    cpy_r_r227 = *(PyObject * *)cpy_r_r226;
    cpy_r_r228 = cpy_r_r227 == cpy_r_r225;
    cpy_r_r224 = cpy_r_r228;
CPyL135: ;
    if (cpy_r_r224) {
        goto CPyL138;
    } else
        goto CPyL186;
CPyL136: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r229 = 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1281, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    CPy_Unreachable();
CPyL138: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator))
        cpy_r_r230 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1282, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_method);
        goto CPyL184;
    }
    cpy_r_r231 = CPY_GET_ATTR(cpy_r_r230, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1282, CPyStatic_checkmember___globals);
        goto CPyL184;
    }
CPyL140: ;
    if (likely((Py_TYPE(cpy_r_r231) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r231) == CPyType_types___Overloaded)))
        cpy_r_r232 = cpy_r_r231;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1282, CPyStatic_checkmember___globals, "mypy.types.FunctionLike", cpy_r_r231);
        goto CPyL184;
    }
    cpy_r_t = cpy_r_r232;
CPyL142: ;
    cpy_r_r233 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r234 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r235 = *(PyObject * *)cpy_r_r234;
    cpy_r_r236 = cpy_r_r235 == cpy_r_r233;
    if (!cpy_r_r236) goto CPyL144;
    cpy_r_r237 = cpy_r_r236;
    goto CPyL145;
CPyL144: ;
    cpy_r_r238 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r239 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r240 = *(PyObject * *)cpy_r_r239;
    cpy_r_r241 = cpy_r_r240 == cpy_r_r238;
    cpy_r_r237 = cpy_r_r241;
CPyL145: ;
    if (!cpy_r_r237) goto CPyL147;
    cpy_r_r242 = cpy_r_r237;
    goto CPyL148;
CPyL147: ;
    cpy_r_r243 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r244 = (CPyPtr)&((PyObject *)cpy_r_method)->ob_type;
    cpy_r_r245 = *(PyObject * *)cpy_r_r244;
    cpy_r_r246 = cpy_r_r245 == cpy_r_r243;
    cpy_r_r242 = cpy_r_r246;
CPyL148: ;
    if (!cpy_r_r242) goto CPyL151;
    if (likely((Py_TYPE(cpy_r_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_method) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r247 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1283, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_method);
        goto CPyL187;
    }
    cpy_r_r248 = ((mypy___nodes___FuncBaseObject *)cpy_r_r247)->_info;
    CPy_INCREF(cpy_r_r248);
    CPy_DECREF(cpy_r_r247);
    cpy_r_r249 = cpy_r_r248;
    goto CPyL154;
CPyL151: ;
    if (likely(Py_TYPE(cpy_r_method) == CPyType_nodes___Decorator))
        cpy_r_r250 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "type_object_type", 1283, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_method);
        goto CPyL187;
    }
    cpy_r_r251 = CPY_GET_ATTR(cpy_r_r250, CPyType_nodes___Decorator, 9, mypy___nodes___DecoratorObject, PyObject *); /* info */
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1283, CPyStatic_checkmember___globals);
        goto CPyL187;
    }
CPyL153: ;
    cpy_r_r249 = cpy_r_r251;
CPyL154: ;
    cpy_r_r252 = CPyDef_typeops___type_object_type_from_function(cpy_r_t, cpy_r_info, cpy_r_r249, cpy_r_fallback, cpy_r_is_new);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r249);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1283, CPyStatic_checkmember___globals);
        goto CPyL156;
    }
    return cpy_r_r252;
CPyL156: ;
    cpy_r_r253 = NULL;
    return cpy_r_r253;
CPyL157: ;
    CPy_DecRef(cpy_r_init_method);
    goto CPyL156;
CPyL158: ;
    CPy_DECREF(cpy_r_init_method);
    CPy_DECREF(cpy_r_new_method);
    goto CPyL6;
CPyL159: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    goto CPyL156;
CPyL160: ;
    CPy_DECREF(cpy_r_new_method);
    goto CPyL11;
CPyL161: ;
    CPy_DECREF(cpy_r_init_method);
    CPy_DECREF(cpy_r_new_method);
    goto CPyL16;
CPyL162: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPy_DecRef(cpy_r_r28);
    goto CPyL156;
CPyL163: ;
    CPy_DECREF(cpy_r_init_method);
    CPy_DECREF(cpy_r_new_method);
    goto CPyL23;
CPyL164: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPy_DecRef(cpy_r_r41);
    goto CPyL156;
CPyL165: ;
    CPy_DECREF(cpy_r_init_method);
    CPy_DECREF(cpy_r_new_method);
    goto CPyL30;
CPyL166: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPy_DecRef(cpy_r_r53);
    goto CPyL156;
CPyL167: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPyTagged_DecRef(cpy_r_init_index);
    goto CPyL156;
CPyL168: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPyTagged_DecRef(cpy_r_init_index);
    CPy_DecRef(cpy_r_r73);
    goto CPyL156;
CPyL169: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_new_method);
    CPyTagged_DecRef(cpy_r_init_index);
    CPyTagged_DecRef(cpy_r_new_index);
    goto CPyL156;
CPyL170: ;
    CPy_DECREF(cpy_r_r93);
    goto CPyL62;
CPyL171: ;
    CPy_DECREF(cpy_r_new_method);
    CPyTagged_DECREF(cpy_r_init_index);
    CPyTagged_DECREF(cpy_r_new_index);
    goto CPyL69;
CPyL172: ;
    CPy_DecRef(cpy_r_init_method);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL156;
CPyL173: ;
    CPy_DECREF(cpy_r_init_method);
    goto CPyL76;
CPyL174: ;
    CPy_DECREF(cpy_r_new_method);
    goto CPyL79;
CPyL175: ;
    CPy_DecRef(cpy_r_new_method);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL156;
CPyL176: ;
    CPy_DECREF(cpy_r_init_method);
    goto CPyL97;
CPyL177: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL156;
CPyL178: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    goto CPyL156;
CPyL179: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r153);
    goto CPyL100;
CPyL180: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r153);
    goto CPyL103;
CPyL181: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r153);
    goto CPyL156;
CPyL182: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r161);
    goto CPyL156;
CPyL183: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r167);
    goto CPyL156;
CPyL184: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_method);
    goto CPyL156;
CPyL185: ;
    CPy_DECREF(cpy_r_fallback);
    CPy_DECREF(cpy_r_method);
    goto CPyL128;
CPyL186: ;
    CPy_DECREF(cpy_r_fallback);
    CPy_DECREF(cpy_r_method);
    goto CPyL136;
CPyL187: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_t);
    goto CPyL156;
}

PyObject *CPyPy_checkmember___type_object_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "named_type", 0};
    static CPyArg_Parser parser = {"OO:type_object_type", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_named_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_named_type)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_named_type = obj_named_type;
    PyObject *retval = CPyDef_checkmember___type_object_type(arg_info, arg_named_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "type_object_type", 1215, CPyStatic_checkmember___globals);
    return NULL;
}

PyObject *CPyDef_checkmember___analyze_decorator_or_funcbase_access(PyObject *cpy_r_defn, PyObject *cpy_r_itype, PyObject *cpy_r_info, PyObject *cpy_r_self_type, PyObject *cpy_r_name, PyObject *cpy_r_mx) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_defn) == CPyType_nodes___Decorator))
        cpy_r_r4 = cpy_r_defn;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1300, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_defn);
        goto CPyL9;
    }
    cpy_r_r5 = ((mypy___nodes___DecoratorObject *)cpy_r_r4)->_var;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_checkmember___analyze_var(cpy_r_name, cpy_r_r5, cpy_r_itype, cpy_r_info, cpy_r_mx, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1300, CPyStatic_checkmember___globals);
        goto CPyL9;
    }
    return cpy_r_r7;
CPyL4: ;
    CPy_INCREF(cpy_r_defn);
    if (likely((Py_TYPE(cpy_r_defn) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_defn) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_defn) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r8 = cpy_r_defn;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1302, CPyStatic_checkmember___globals, "mypy.nodes.FuncBase", cpy_r_defn);
        goto CPyL9;
    }
    cpy_r_r9 = ((mypy___checkmember___MemberContextObject *)cpy_r_mx)->_chk;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r11 = CPyDef_checker___TypeChecker___named_type(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1302, CPyStatic_checkmember___globals);
        goto CPyL10;
    }
    cpy_r_r12 = CPyDef_typeops___function_type(cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1302, CPyStatic_checkmember___globals);
        goto CPyL9;
    }
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_typeops___bind_self(cpy_r_r12, cpy_r_self_type, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1301, CPyStatic_checkmember___globals);
        goto CPyL9;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
}

PyObject *CPyPy_checkmember___analyze_decorator_or_funcbase_access(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"defn", "itype", "info", "self_type", "name", "mx", 0};
    static CPyArg_Parser parser = {"OOOOOO:analyze_decorator_or_funcbase_access", kwlist, 0};
    PyObject *obj_defn;
    PyObject *obj_itype;
    PyObject *obj_info;
    PyObject *obj_self_type;
    PyObject *obj_name;
    PyObject *obj_mx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_defn, &obj_itype, &obj_info, &obj_self_type, &obj_name, &obj_mx)) {
        return NULL;
    }
    PyObject *arg_defn;
    if (Py_TYPE(obj_defn) == CPyType_nodes___Decorator)
        arg_defn = obj_defn;
    else {
        arg_defn = NULL;
    }
    if (arg_defn != NULL) goto __LL1509;
    if ((Py_TYPE(obj_defn) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_defn) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_defn) == CPyType_nodes___OverloadedFuncDef))
        arg_defn = obj_defn;
    else {
        arg_defn = NULL;
    }
    if (arg_defn != NULL) goto __LL1509;
    CPy_TypeError("union[mypy.nodes.Decorator, mypy.nodes.FuncBase]", obj_defn); 
    goto fail;
__LL1509: ;
    PyObject *arg_itype;
    if (likely(Py_TYPE(obj_itype) == CPyType_types___Instance))
        arg_itype = obj_itype;
    else {
        CPy_TypeError("mypy.types.Instance", obj_itype); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1510;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL1510;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL1510: ;
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_mx;
    if (likely(Py_TYPE(obj_mx) == CPyType_checkmember___MemberContext))
        arg_mx = obj_mx;
    else {
        CPy_TypeError("mypy.checkmember.MemberContext", obj_mx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkmember___analyze_decorator_or_funcbase_access(arg_defn, arg_itype, arg_info, arg_self_type, arg_name, arg_mx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "analyze_decorator_or_funcbase_access", 1286, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember___is_valid_constructor(PyObject *cpy_r_n) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_n)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_n)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_n)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL9;
    cpy_r_r14 = 1 ? Py_True : Py_False;
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_valid_constructor", 1313, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    return cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_n)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_n) == CPyType_nodes___Decorator))
        cpy_r_r20 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/checkmember.py", "is_valid_constructor", 1315, CPyStatic_checkmember___globals, "mypy.nodes.Decorator", cpy_r_n);
        goto CPyL18;
    }
    cpy_r_r21 = CPY_GET_ATTR(cpy_r_r20, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_valid_constructor", 1315, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
CPyL12: ;
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "is_valid_constructor", 1315, CPyStatic_checkmember___globals);
        goto CPyL18;
    }
    cpy_r_r23 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) {
        goto CPyL19;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL16;
CPyL15: ;
    cpy_r_r28 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    cpy_r_r27 = cpy_r_r31;
CPyL16: ;
    return cpy_r_r27;
CPyL17: ;
    return 0;
CPyL18: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL19: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL14;
}

PyObject *CPyPy_checkmember___is_valid_constructor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:is_valid_constructor", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg_n;
    if (PyObject_TypeCheck(obj_n, CPyType_nodes___SymbolNode))
        arg_n = obj_n;
    else {
        arg_n = NULL;
    }
    if (arg_n != NULL) goto __LL1511;
    if (obj_n == Py_None)
        arg_n = obj_n;
    else {
        arg_n = NULL;
    }
    if (arg_n != NULL) goto __LL1511;
    CPy_TypeError("mypy.nodes.SymbolNode or None", obj_n); 
    goto fail;
__LL1511: ;
    char retval = CPyDef_checkmember___is_valid_constructor(arg_n);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkmember.py", "is_valid_constructor", 1306, CPyStatic_checkmember___globals);
    return NULL;
}

char CPyDef_checkmember_____top_level__(void) {
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
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
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
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", -1, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_checkmember___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 3, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9246]; /* ('TYPE_CHECKING', 'Callable', 'Sequence', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_checkmember___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 5, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9247]; /* ('meet', 'message_registry', 'subtypes') */
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = CPyStatic_checkmember___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 7, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9248]; /* ('erase_typevars',) */
    cpy_r_r18 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r19 = CPyStatic_checkmember___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 8, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___erasetype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___erasetype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9249]; /* ('expand_self_type', 'expand_type_by_instance',
                                     'freshen_all_functions_type_vars') */
    cpy_r_r22 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r23 = CPyStatic_checkmember___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 9, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___expandtype = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r26 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r27 = CPyStatic_checkmember___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 14, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___maptype = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r30 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r31 = CPyStatic_checkmember___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 15, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___messages = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9250]; /* ('ARG_POS', 'ARG_STAR', 'ARG_STAR2',
                                     'SYMBOL_FUNCBASE_TYPES', 'Context', 'Decorator',
                                     'FuncBase', 'FuncDef', 'IndexExpr', 'MypyFile',
                                     'OverloadedFuncDef', 'SymbolNode', 'SymbolTable',
                                     'TempNode', 'TypeAlias', 'TypeInfo', 'TypeVarExpr',
                                     'Var', 'is_final_node') */
    cpy_r_r34 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r35 = CPyStatic_checkmember___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 16, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___nodes = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9251]; /* ('AttributeContext',) */
    cpy_r_r38 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r39 = CPyStatic_checkmember___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 37, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___plugin = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9252]; /* ('bind_self', 'class_callable', 'erase_to_bound',
                                     'function_type', 'get_type_vars',
                                     'make_simplified_union', 'supported_self_type',
                                     'tuple_fallback', 'type_object_type_from_function') */
    cpy_r_r42 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r43 = CPyStatic_checkmember___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 38, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___typeops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9253]; /* ('ENUM_REMOVED_PROPS', 'AnyType', 'CallableType',
                                     'DeletedType', 'FunctionLike', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded',
                                     'ParamSpecType', 'PartialType', 'ProperType',
                                     'TupleType', 'Type', 'TypedDictType', 'TypeOfAny',
                                     'TypeType', 'TypeVarLikeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnionType', 'get_proper_type') */
    cpy_r_r46 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r47 = CPyStatic_checkmember___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 49, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___types = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9209]; /* ('TypeTraverserVisitor',) */
    cpy_r_r50 = CPyStatics[1081]; /* 'mypy.typetraverser' */
    cpy_r_r51 = CPyStatic_checkmember___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 73, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy___typetraverser = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___typetraverser);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatic_checkmember___globals;
    cpy_r_r54 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 75, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r55))) {
        CPy_TypeError("bool", cpy_r_r55); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r55 == Py_True;
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 75, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    cpy_r_r57 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r58 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r59 = CPyStatic_checkmember___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 78, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    CPyModule_mypy = cpy_r_r60;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = NULL;
    cpy_r_r62 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r63 = (PyObject *)CPyType_checkmember___MemberContext_template;
    cpy_r_r64 = CPyType_FromTemplate(cpy_r_r63, cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 81, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    cpy_r_r65 = CPyDef_checkmember___MemberContext_trait_vtable_setup();
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", -1, CPyStatic_checkmember___globals);
        goto CPyL32;
    }
    cpy_r_r66 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r67 = CPyStatics[1342]; /* 'is_lvalue' */
    cpy_r_r68 = CPyStatics[1343]; /* 'is_super' */
    cpy_r_r69 = CPyStatics[1344]; /* 'is_operator' */
    cpy_r_r70 = CPyStatics[1345]; /* 'original_type' */
    cpy_r_r71 = CPyStatics[1346]; /* 'self_type' */
    cpy_r_r72 = CPyStatics[68]; /* 'context' */
    cpy_r_r73 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r74 = CPyStatics[1295]; /* 'chk' */
    cpy_r_r75 = CPyStatics[1347]; /* 'module_symbol_table' */
    cpy_r_r76 = CPyStatics[1348]; /* 'no_deferral' */
    cpy_r_r77 = CPyStatics[1349]; /* 'is_self' */
    cpy_r_r78 = PyTuple_Pack(11, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 81, CPyStatic_checkmember___globals);
        goto CPyL32;
    }
    cpy_r_r79 = PyObject_SetAttr(cpy_r_r64, cpy_r_r66, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 81, CPyStatic_checkmember___globals);
        goto CPyL32;
    }
    CPyType_checkmember___MemberContext = (PyTypeObject *)cpy_r_r64;
    CPy_INCREF(CPyType_checkmember___MemberContext);
    cpy_r_r81 = CPyStatic_checkmember___globals;
    cpy_r_r82 = CPyStatics[908]; /* 'MemberContext' */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r81, cpy_r_r82, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 81, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    cpy_r_r85 = (PyObject *)CPyType_typetraverser___TypeTraverserVisitor;
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 830, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    cpy_r_r87 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r88 = (PyObject *)CPyType_checkmember___FreezeTypeVarsVisitor_template;
    cpy_r_r89 = CPyType_FromTemplate(cpy_r_r88, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 830, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    cpy_r_r90 = CPyDef_checkmember___FreezeTypeVarsVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", -1, CPyStatic_checkmember___globals);
        goto CPyL33;
    }
    cpy_r_r91 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r92 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r93 = PyTuple_Pack(1, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 830, CPyStatic_checkmember___globals);
        goto CPyL33;
    }
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r89, cpy_r_r91, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 830, CPyStatic_checkmember___globals);
        goto CPyL33;
    }
    CPyType_checkmember___FreezeTypeVarsVisitor = (PyTypeObject *)cpy_r_r89;
    CPy_INCREF(CPyType_checkmember___FreezeTypeVarsVisitor);
    cpy_r_r96 = CPyStatic_checkmember___globals;
    cpy_r_r97 = CPyStatics[1350]; /* 'FreezeTypeVarsVisitor' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/checkmember.py", "<module>", 830, CPyStatic_checkmember___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r100 = 2;
    return cpy_r_r100;
CPyL32: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL31;
}
