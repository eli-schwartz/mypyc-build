#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
emit___HeaderDeclaration_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___HeaderDeclaration_setup(PyTypeObject *type);
PyObject *CPyDef_emit___HeaderDeclaration(PyObject *cpy_r_decl, PyObject *cpy_r_defn, PyObject *cpy_r_dependencies, char cpy_r_is_type, char cpy_r_needs_export);

static PyObject *
emit___HeaderDeclaration_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___HeaderDeclaration) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___HeaderDeclaration_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___HeaderDeclaration_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___HeaderDeclaration_traverse(mypyc___codegen___emit___HeaderDeclarationObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_decl);
    Py_VISIT(self->_defn);
    Py_VISIT(self->_dependencies);
    return 0;
}

static int
emit___HeaderDeclaration_clear(mypyc___codegen___emit___HeaderDeclarationObject *self)
{
    Py_CLEAR(self->_decl);
    Py_CLEAR(self->_defn);
    Py_CLEAR(self->_dependencies);
    return 0;
}

static void
emit___HeaderDeclaration_dealloc(mypyc___codegen___emit___HeaderDeclarationObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___HeaderDeclaration_dealloc)
    emit___HeaderDeclaration_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___HeaderDeclaration_vtable[1];
static bool
CPyDef_emit___HeaderDeclaration_trait_vtable_setup(void)
{
    CPyVTableItem emit___HeaderDeclaration_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___HeaderDeclaration_____init__,
    };
    memcpy(emit___HeaderDeclaration_vtable, emit___HeaderDeclaration_vtable_scratch, sizeof(emit___HeaderDeclaration_vtable));
    return 1;
}

static PyObject *
emit___HeaderDeclaration_get_decl(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure);
static int
emit___HeaderDeclaration_set_decl(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure);
static PyObject *
emit___HeaderDeclaration_get_defn(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure);
static int
emit___HeaderDeclaration_set_defn(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure);
static PyObject *
emit___HeaderDeclaration_get_dependencies(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure);
static int
emit___HeaderDeclaration_set_dependencies(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure);
static PyObject *
emit___HeaderDeclaration_get_is_type(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure);
static int
emit___HeaderDeclaration_set_is_type(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure);
static PyObject *
emit___HeaderDeclaration_get_needs_export(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure);
static int
emit___HeaderDeclaration_set_needs_export(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___HeaderDeclaration_getseters[] = {
    {"decl",
     (getter)emit___HeaderDeclaration_get_decl, (setter)emit___HeaderDeclaration_set_decl,
     NULL, NULL},
    {"defn",
     (getter)emit___HeaderDeclaration_get_defn, (setter)emit___HeaderDeclaration_set_defn,
     NULL, NULL},
    {"dependencies",
     (getter)emit___HeaderDeclaration_get_dependencies, (setter)emit___HeaderDeclaration_set_dependencies,
     NULL, NULL},
    {"is_type",
     (getter)emit___HeaderDeclaration_get_is_type, (setter)emit___HeaderDeclaration_set_is_type,
     NULL, NULL},
    {"needs_export",
     (getter)emit___HeaderDeclaration_get_needs_export, (setter)emit___HeaderDeclaration_set_needs_export,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___HeaderDeclaration_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___HeaderDeclaration_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___HeaderDeclaration_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HeaderDeclaration",
    .tp_new = emit___HeaderDeclaration_new,
    .tp_dealloc = (destructor)emit___HeaderDeclaration_dealloc,
    .tp_traverse = (traverseproc)emit___HeaderDeclaration_traverse,
    .tp_clear = (inquiry)emit___HeaderDeclaration_clear,
    .tp_getset = emit___HeaderDeclaration_getseters,
    .tp_methods = emit___HeaderDeclaration_methods,
    .tp_init = emit___HeaderDeclaration_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___HeaderDeclarationObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___HeaderDeclaration_template = &CPyType_emit___HeaderDeclaration_template_;

static PyObject *
emit___HeaderDeclaration_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___HeaderDeclarationObject *self;
    self = (mypyc___codegen___emit___HeaderDeclarationObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___HeaderDeclaration_vtable;
    self->_is_type = 2;
    self->_needs_export = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___HeaderDeclaration(PyObject *cpy_r_decl, PyObject *cpy_r_defn, PyObject *cpy_r_dependencies, char cpy_r_is_type, char cpy_r_needs_export)
{
    PyObject *self = emit___HeaderDeclaration_setup(CPyType_emit___HeaderDeclaration);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___HeaderDeclaration_____init__(self, cpy_r_decl, cpy_r_defn, cpy_r_dependencies, cpy_r_is_type, cpy_r_needs_export);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___HeaderDeclaration_get_decl(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure)
{
    if (unlikely(self->_decl == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'decl' of 'HeaderDeclaration' undefined");
        return NULL;
    }
    CPy_INCREF(self->_decl);
    PyObject *retval = self->_decl;
    return retval;
}

static int
emit___HeaderDeclaration_set_decl(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'HeaderDeclaration' object attribute 'decl' cannot be deleted");
        return -1;
    }
    if (self->_decl != NULL) {
        CPy_DECREF(self->_decl);
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
    self->_decl = tmp;
    return 0;
}

static PyObject *
emit___HeaderDeclaration_get_defn(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure)
{
    if (unlikely(self->_defn == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'defn' of 'HeaderDeclaration' undefined");
        return NULL;
    }
    CPy_INCREF(self->_defn);
    PyObject *retval = self->_defn;
    return retval;
}

static int
emit___HeaderDeclaration_set_defn(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'HeaderDeclaration' object attribute 'defn' cannot be deleted");
        return -1;
    }
    if (self->_defn != NULL) {
        CPy_DECREF(self->_defn);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9141;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9141;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL9141: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_defn = tmp;
    return 0;
}

static PyObject *
emit___HeaderDeclaration_get_dependencies(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure)
{
    if (unlikely(self->_dependencies == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'dependencies' of 'HeaderDeclaration' undefined");
        return NULL;
    }
    CPy_INCREF(self->_dependencies);
    PyObject *retval = self->_dependencies;
    return retval;
}

static int
emit___HeaderDeclaration_set_dependencies(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'HeaderDeclaration' object attribute 'dependencies' cannot be deleted");
        return -1;
    }
    if (self->_dependencies != NULL) {
        CPy_DECREF(self->_dependencies);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_dependencies = tmp;
    return 0;
}

static PyObject *
emit___HeaderDeclaration_get_is_type(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure)
{
    PyObject *retval = self->_is_type ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emit___HeaderDeclaration_set_is_type(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'HeaderDeclaration' object attribute 'is_type' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_type = tmp;
    return 0;
}

static PyObject *
emit___HeaderDeclaration_get_needs_export(mypyc___codegen___emit___HeaderDeclarationObject *self, void *closure)
{
    PyObject *retval = self->_needs_export ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emit___HeaderDeclaration_set_needs_export(mypyc___codegen___emit___HeaderDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'HeaderDeclaration' object attribute 'needs_export' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_needs_export = tmp;
    return 0;
}

static int
emit___EmitterContext_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___EmitterContext_setup(PyTypeObject *type);
PyObject *CPyDef_emit___EmitterContext(PyObject *cpy_r_names, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map);

static PyObject *
emit___EmitterContext_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___EmitterContext) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___EmitterContext_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___EmitterContext_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___EmitterContext_traverse(mypyc___codegen___emit___EmitterContextObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_temp_counter)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_temp_counter));
    }
    Py_VISIT(self->_names);
    Py_VISIT(self->_group_name);
    Py_VISIT(self->_group_map);
    Py_VISIT(self->_group_deps);
    Py_VISIT(self->_declarations);
    Py_VISIT(self->_literals);
    return 0;
}

static int
emit___EmitterContext_clear(mypyc___codegen___emit___EmitterContextObject *self)
{
    if (CPyTagged_CheckLong(self->_temp_counter)) {
        CPyTagged __tmp = self->_temp_counter;
        self->_temp_counter = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_group_name);
    Py_CLEAR(self->_group_map);
    Py_CLEAR(self->_group_deps);
    Py_CLEAR(self->_declarations);
    Py_CLEAR(self->_literals);
    return 0;
}

static void
emit___EmitterContext_dealloc(mypyc___codegen___emit___EmitterContextObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___EmitterContext_dealloc)
    emit___EmitterContext_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___EmitterContext_vtable[1];
static bool
CPyDef_emit___EmitterContext_trait_vtable_setup(void)
{
    CPyVTableItem emit___EmitterContext_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___EmitterContext_____init__,
    };
    memcpy(emit___EmitterContext_vtable, emit___EmitterContext_vtable_scratch, sizeof(emit___EmitterContext_vtable));
    return 1;
}

static PyObject *
emit___EmitterContext_get_temp_counter(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_temp_counter(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_names(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_names(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_group_name(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_group_name(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_group_map(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_group_map(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_group_deps(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_group_deps(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_declarations(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_declarations(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);
static PyObject *
emit___EmitterContext_get_literals(mypyc___codegen___emit___EmitterContextObject *self, void *closure);
static int
emit___EmitterContext_set_literals(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___EmitterContext_getseters[] = {
    {"temp_counter",
     (getter)emit___EmitterContext_get_temp_counter, (setter)emit___EmitterContext_set_temp_counter,
     NULL, NULL},
    {"names",
     (getter)emit___EmitterContext_get_names, (setter)emit___EmitterContext_set_names,
     NULL, NULL},
    {"group_name",
     (getter)emit___EmitterContext_get_group_name, (setter)emit___EmitterContext_set_group_name,
     NULL, NULL},
    {"group_map",
     (getter)emit___EmitterContext_get_group_map, (setter)emit___EmitterContext_set_group_map,
     NULL, NULL},
    {"group_deps",
     (getter)emit___EmitterContext_get_group_deps, (setter)emit___EmitterContext_set_group_deps,
     NULL, NULL},
    {"declarations",
     (getter)emit___EmitterContext_get_declarations, (setter)emit___EmitterContext_set_declarations,
     NULL, NULL},
    {"literals",
     (getter)emit___EmitterContext_get_literals, (setter)emit___EmitterContext_set_literals,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___EmitterContext_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___EmitterContext_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___EmitterContext_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "EmitterContext",
    .tp_new = emit___EmitterContext_new,
    .tp_dealloc = (destructor)emit___EmitterContext_dealloc,
    .tp_traverse = (traverseproc)emit___EmitterContext_traverse,
    .tp_clear = (inquiry)emit___EmitterContext_clear,
    .tp_getset = emit___EmitterContext_getseters,
    .tp_methods = emit___EmitterContext_methods,
    .tp_init = emit___EmitterContext_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___EmitterContextObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___EmitterContext_template = &CPyType_emit___EmitterContext_template_;

static PyObject *
emit___EmitterContext_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___EmitterContextObject *self;
    self = (mypyc___codegen___emit___EmitterContextObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___EmitterContext_vtable;
    self->_temp_counter = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___EmitterContext(PyObject *cpy_r_names, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map)
{
    PyObject *self = emit___EmitterContext_setup(CPyType_emit___EmitterContext);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___EmitterContext_____init__(self, cpy_r_names, cpy_r_group_name, cpy_r_group_map);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___EmitterContext_get_temp_counter(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_temp_counter == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'temp_counter' of 'EmitterContext' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_temp_counter);
    PyObject *retval = CPyTagged_StealAsObject(self->_temp_counter);
    return retval;
}

static int
emit___EmitterContext_set_temp_counter(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'temp_counter' cannot be deleted");
        return -1;
    }
    if (self->_temp_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_temp_counter);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_temp_counter = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_names(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
emit___EmitterContext_set_names(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'names' cannot be deleted");
        return -1;
    }
    if (self->_names != NULL) {
        CPy_DECREF(self->_names);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_namegen___NameGenerator))
        tmp = value;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_names = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_group_name(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_group_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_name' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_name);
    PyObject *retval = self->_group_name;
    return retval;
}

static int
emit___EmitterContext_set_group_name(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'group_name' cannot be deleted");
        return -1;
    }
    if (self->_group_name != NULL) {
        CPy_DECREF(self->_group_name);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9142;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9142;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL9142: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_group_name = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_group_map(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_group_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_map' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_map);
    PyObject *retval = self->_group_map;
    return retval;
}

static int
emit___EmitterContext_set_group_map(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'group_map' cannot be deleted");
        return -1;
    }
    if (self->_group_map != NULL) {
        CPy_DECREF(self->_group_map);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_group_map = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_group_deps(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_group_deps == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_deps' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_deps);
    PyObject *retval = self->_group_deps;
    return retval;
}

static int
emit___EmitterContext_set_group_deps(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'group_deps' cannot be deleted");
        return -1;
    }
    if (self->_group_deps != NULL) {
        CPy_DECREF(self->_group_deps);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_group_deps = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_declarations(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_declarations == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'declarations' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_declarations);
    PyObject *retval = self->_declarations;
    return retval;
}

static int
emit___EmitterContext_set_declarations(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'declarations' cannot be deleted");
        return -1;
    }
    if (self->_declarations != NULL) {
        CPy_DECREF(self->_declarations);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_declarations = tmp;
    return 0;
}

static PyObject *
emit___EmitterContext_get_literals(mypyc___codegen___emit___EmitterContextObject *self, void *closure)
{
    if (unlikely(self->_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'literals' of 'EmitterContext' undefined");
        return NULL;
    }
    CPy_INCREF(self->_literals);
    PyObject *retval = self->_literals;
    return retval;
}

static int
emit___EmitterContext_set_literals(mypyc___codegen___emit___EmitterContextObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EmitterContext' object attribute 'literals' cannot be deleted");
        return -1;
    }
    if (self->_literals != NULL) {
        CPy_DECREF(self->_literals);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_codegen___literals___Literals))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_literals = tmp;
    return 0;
}

static PyObject *emit___ErrorHandler_setup(PyTypeObject *type);
PyObject *CPyDef_emit___ErrorHandler(void);

static PyObject *
emit___ErrorHandler_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___ErrorHandler) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emit___ErrorHandler_setup(type);
}

static int
emit___ErrorHandler_traverse(mypyc___codegen___emit___ErrorHandlerObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
emit___ErrorHandler_clear(mypyc___codegen___emit___ErrorHandlerObject *self)
{
    return 0;
}

static void
emit___ErrorHandler_dealloc(mypyc___codegen___emit___ErrorHandlerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___ErrorHandler_dealloc)
    emit___ErrorHandler_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___ErrorHandler_vtable[1];
static bool
CPyDef_emit___ErrorHandler_trait_vtable_setup(void)
{
    CPyVTableItem emit___ErrorHandler_vtable_scratch[] = {
        NULL
    };
    memcpy(emit___ErrorHandler_vtable, emit___ErrorHandler_vtable_scratch, sizeof(emit___ErrorHandler_vtable));
    return 1;
}


static PyGetSetDef emit___ErrorHandler_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___ErrorHandler_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___ErrorHandler_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ErrorHandler",
    .tp_new = emit___ErrorHandler_new,
    .tp_dealloc = (destructor)emit___ErrorHandler_dealloc,
    .tp_traverse = (traverseproc)emit___ErrorHandler_traverse,
    .tp_clear = (inquiry)emit___ErrorHandler_clear,
    .tp_getset = emit___ErrorHandler_getseters,
    .tp_methods = emit___ErrorHandler_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emit___ErrorHandlerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___ErrorHandler_template = &CPyType_emit___ErrorHandler_template_;

static PyObject *
emit___ErrorHandler_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___ErrorHandlerObject *self;
    self = (mypyc___codegen___emit___ErrorHandlerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___ErrorHandler_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___ErrorHandler(void)
{
    PyObject *self = emit___ErrorHandler_setup(CPyType_emit___ErrorHandler);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *emit___AssignHandler_setup(PyTypeObject *type);
PyObject *CPyDef_emit___AssignHandler(void);

static PyObject *
emit___AssignHandler_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___AssignHandler) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emit___AssignHandler_setup(type);
}

static int
emit___AssignHandler_traverse(mypyc___codegen___emit___AssignHandlerObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
emit___AssignHandler_clear(mypyc___codegen___emit___AssignHandlerObject *self)
{
    return 0;
}

static void
emit___AssignHandler_dealloc(mypyc___codegen___emit___AssignHandlerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___AssignHandler_dealloc)
    emit___AssignHandler_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___AssignHandler_vtable[1];
static bool
CPyDef_emit___AssignHandler_trait_vtable_setup(void)
{
    CPyVTableItem emit___AssignHandler_vtable_scratch[] = {
        NULL
    };
    memcpy(emit___AssignHandler_vtable, emit___AssignHandler_vtable_scratch, sizeof(emit___AssignHandler_vtable));
    return 1;
}


static PyGetSetDef emit___AssignHandler_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___AssignHandler_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___AssignHandler_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AssignHandler",
    .tp_new = emit___AssignHandler_new,
    .tp_dealloc = (destructor)emit___AssignHandler_dealloc,
    .tp_traverse = (traverseproc)emit___AssignHandler_traverse,
    .tp_clear = (inquiry)emit___AssignHandler_clear,
    .tp_getset = emit___AssignHandler_getseters,
    .tp_methods = emit___AssignHandler_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emit___AssignHandlerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___AssignHandler_template = &CPyType_emit___AssignHandler_template_;

static PyObject *
emit___AssignHandler_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___AssignHandlerObject *self;
    self = (mypyc___codegen___emit___AssignHandlerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___AssignHandler_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___AssignHandler(void)
{
    PyObject *self = emit___AssignHandler_setup(CPyType_emit___AssignHandler);
    if (self == NULL)
        return NULL;
    return self;
}


static int
emit___GotoHandler_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___GotoHandler_setup(PyTypeObject *type);
PyObject *CPyDef_emit___GotoHandler(PyObject *cpy_r_label);

static PyObject *
emit___GotoHandler_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___GotoHandler) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___GotoHandler_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___GotoHandler_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___GotoHandler_traverse(mypyc___codegen___emit___GotoHandlerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_label);
    return 0;
}

static int
emit___GotoHandler_clear(mypyc___codegen___emit___GotoHandlerObject *self)
{
    Py_CLEAR(self->_label);
    return 0;
}

static void
emit___GotoHandler_dealloc(mypyc___codegen___emit___GotoHandlerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___GotoHandler_dealloc)
    emit___GotoHandler_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___GotoHandler_vtable[1];
static bool
CPyDef_emit___GotoHandler_trait_vtable_setup(void)
{
    CPyVTableItem emit___GotoHandler_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___GotoHandler_____init__,
    };
    memcpy(emit___GotoHandler_vtable, emit___GotoHandler_vtable_scratch, sizeof(emit___GotoHandler_vtable));
    return 1;
}

static PyObject *
emit___GotoHandler_get_label(mypyc___codegen___emit___GotoHandlerObject *self, void *closure);
static int
emit___GotoHandler_set_label(mypyc___codegen___emit___GotoHandlerObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___GotoHandler_getseters[] = {
    {"label",
     (getter)emit___GotoHandler_get_label, (setter)emit___GotoHandler_set_label,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___GotoHandler_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___GotoHandler_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___GotoHandler_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GotoHandler",
    .tp_new = emit___GotoHandler_new,
    .tp_dealloc = (destructor)emit___GotoHandler_dealloc,
    .tp_traverse = (traverseproc)emit___GotoHandler_traverse,
    .tp_clear = (inquiry)emit___GotoHandler_clear,
    .tp_getset = emit___GotoHandler_getseters,
    .tp_methods = emit___GotoHandler_methods,
    .tp_init = emit___GotoHandler_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___GotoHandlerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___GotoHandler_template = &CPyType_emit___GotoHandler_template_;

static PyObject *
emit___GotoHandler_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___GotoHandlerObject *self;
    self = (mypyc___codegen___emit___GotoHandlerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___GotoHandler_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___GotoHandler(PyObject *cpy_r_label)
{
    PyObject *self = emit___GotoHandler_setup(CPyType_emit___GotoHandler);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___GotoHandler_____init__(self, cpy_r_label);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___GotoHandler_get_label(mypyc___codegen___emit___GotoHandlerObject *self, void *closure)
{
    if (unlikely(self->_label == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'label' of 'GotoHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_label);
    PyObject *retval = self->_label;
    return retval;
}

static int
emit___GotoHandler_set_label(mypyc___codegen___emit___GotoHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GotoHandler' object attribute 'label' cannot be deleted");
        return -1;
    }
    if (self->_label != NULL) {
        CPy_DECREF(self->_label);
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
    self->_label = tmp;
    return 0;
}

static int
emit___TracebackAndGotoHandler_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___TracebackAndGotoHandler_setup(PyTypeObject *type);
PyObject *CPyDef_emit___TracebackAndGotoHandler(PyObject *cpy_r_label, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry);

static PyObject *
emit___TracebackAndGotoHandler_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___TracebackAndGotoHandler) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___TracebackAndGotoHandler_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___TracebackAndGotoHandler_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___TracebackAndGotoHandler_traverse(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_label);
    Py_VISIT(self->_source_path);
    Py_VISIT(self->_module_name);
    Py_VISIT(self->_traceback_entry.f0);
    if (CPyTagged_CheckLong(self->_traceback_entry.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_traceback_entry.f1));
    }
    return 0;
}

static int
emit___TracebackAndGotoHandler_clear(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self)
{
    Py_CLEAR(self->_label);
    Py_CLEAR(self->_source_path);
    Py_CLEAR(self->_module_name);
    Py_CLEAR(self->_traceback_entry.f0);
    if (CPyTagged_CheckLong(self->_traceback_entry.f1)) {
        CPyTagged __tmp = self->_traceback_entry.f1;
        self->_traceback_entry.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
emit___TracebackAndGotoHandler_dealloc(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___TracebackAndGotoHandler_dealloc)
    emit___TracebackAndGotoHandler_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___TracebackAndGotoHandler_vtable[1];
static bool
CPyDef_emit___TracebackAndGotoHandler_trait_vtable_setup(void)
{
    CPyVTableItem emit___TracebackAndGotoHandler_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___TracebackAndGotoHandler_____init__,
    };
    memcpy(emit___TracebackAndGotoHandler_vtable, emit___TracebackAndGotoHandler_vtable_scratch, sizeof(emit___TracebackAndGotoHandler_vtable));
    return 1;
}

static PyObject *
emit___TracebackAndGotoHandler_get_label(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure);
static int
emit___TracebackAndGotoHandler_set_label(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure);
static PyObject *
emit___TracebackAndGotoHandler_get_source_path(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure);
static int
emit___TracebackAndGotoHandler_set_source_path(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure);
static PyObject *
emit___TracebackAndGotoHandler_get_module_name(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure);
static int
emit___TracebackAndGotoHandler_set_module_name(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure);
static PyObject *
emit___TracebackAndGotoHandler_get_traceback_entry(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure);
static int
emit___TracebackAndGotoHandler_set_traceback_entry(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___TracebackAndGotoHandler_getseters[] = {
    {"label",
     (getter)emit___TracebackAndGotoHandler_get_label, (setter)emit___TracebackAndGotoHandler_set_label,
     NULL, NULL},
    {"source_path",
     (getter)emit___TracebackAndGotoHandler_get_source_path, (setter)emit___TracebackAndGotoHandler_set_source_path,
     NULL, NULL},
    {"module_name",
     (getter)emit___TracebackAndGotoHandler_get_module_name, (setter)emit___TracebackAndGotoHandler_set_module_name,
     NULL, NULL},
    {"traceback_entry",
     (getter)emit___TracebackAndGotoHandler_get_traceback_entry, (setter)emit___TracebackAndGotoHandler_set_traceback_entry,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___TracebackAndGotoHandler_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___TracebackAndGotoHandler_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___TracebackAndGotoHandler_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TracebackAndGotoHandler",
    .tp_new = emit___TracebackAndGotoHandler_new,
    .tp_dealloc = (destructor)emit___TracebackAndGotoHandler_dealloc,
    .tp_traverse = (traverseproc)emit___TracebackAndGotoHandler_traverse,
    .tp_clear = (inquiry)emit___TracebackAndGotoHandler_clear,
    .tp_getset = emit___TracebackAndGotoHandler_getseters,
    .tp_methods = emit___TracebackAndGotoHandler_methods,
    .tp_init = emit___TracebackAndGotoHandler_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___TracebackAndGotoHandlerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___TracebackAndGotoHandler_template = &CPyType_emit___TracebackAndGotoHandler_template_;

static PyObject *
emit___TracebackAndGotoHandler_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___TracebackAndGotoHandlerObject *self;
    self = (mypyc___codegen___emit___TracebackAndGotoHandlerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___TracebackAndGotoHandler_vtable;
    self->_traceback_entry = (tuple_T2OI) { NULL, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_emit___TracebackAndGotoHandler(PyObject *cpy_r_label, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry)
{
    PyObject *self = emit___TracebackAndGotoHandler_setup(CPyType_emit___TracebackAndGotoHandler);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___TracebackAndGotoHandler_____init__(self, cpy_r_label, cpy_r_source_path, cpy_r_module_name, cpy_r_traceback_entry);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___TracebackAndGotoHandler_get_label(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure)
{
    if (unlikely(self->_label == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'label' of 'TracebackAndGotoHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_label);
    PyObject *retval = self->_label;
    return retval;
}

static int
emit___TracebackAndGotoHandler_set_label(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TracebackAndGotoHandler' object attribute 'label' cannot be deleted");
        return -1;
    }
    if (self->_label != NULL) {
        CPy_DECREF(self->_label);
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
    self->_label = tmp;
    return 0;
}

static PyObject *
emit___TracebackAndGotoHandler_get_source_path(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure)
{
    if (unlikely(self->_source_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_path' of 'TracebackAndGotoHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_path);
    PyObject *retval = self->_source_path;
    return retval;
}

static int
emit___TracebackAndGotoHandler_set_source_path(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TracebackAndGotoHandler' object attribute 'source_path' cannot be deleted");
        return -1;
    }
    if (self->_source_path != NULL) {
        CPy_DECREF(self->_source_path);
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
    self->_source_path = tmp;
    return 0;
}

static PyObject *
emit___TracebackAndGotoHandler_get_module_name(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure)
{
    if (unlikely(self->_module_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_name' of 'TracebackAndGotoHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_name);
    PyObject *retval = self->_module_name;
    return retval;
}

static int
emit___TracebackAndGotoHandler_set_module_name(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TracebackAndGotoHandler' object attribute 'module_name' cannot be deleted");
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
emit___TracebackAndGotoHandler_get_traceback_entry(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, void *closure)
{
    if (unlikely(self->_traceback_entry.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'traceback_entry' of 'TracebackAndGotoHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_traceback_entry.f0);
    CPyTagged_INCREF(self->_traceback_entry.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9143 = self->_traceback_entry.f0;
    PyTuple_SET_ITEM(retval, 0, __tmp9143);
    PyObject *__tmp9144 = CPyTagged_StealAsObject(self->_traceback_entry.f1);
    PyTuple_SET_ITEM(retval, 1, __tmp9144);
    return retval;
}

static int
emit___TracebackAndGotoHandler_set_traceback_entry(mypyc___codegen___emit___TracebackAndGotoHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TracebackAndGotoHandler' object attribute 'traceback_entry' cannot be deleted");
        return -1;
    }
    if (self->_traceback_entry.f0 != NULL) {
        CPy_DECREF(self->_traceback_entry.f0);
        CPyTagged_DECREF(self->_traceback_entry.f1);
    }
    tuple_T2OI tmp;
    PyObject *__tmp9145;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp9145 = NULL;
        goto __LL9146;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp9145 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp9145 = NULL;
    }
    if (__tmp9145 == NULL) goto __LL9146;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        __tmp9145 = PyTuple_GET_ITEM(value, 1);
    else {
        __tmp9145 = NULL;
    }
    if (__tmp9145 == NULL) goto __LL9146;
    __tmp9145 = value;
__LL9146: ;
    if (unlikely(__tmp9145 == NULL)) {
        CPy_TypeError("tuple[str, int]", value); return -1;
    } else {
        PyObject *__tmp9147 = PyTuple_GET_ITEM(value, 0);
        CPy_INCREF(__tmp9147);
        PyObject *__tmp9148;
        if (likely(PyUnicode_Check(__tmp9147)))
            __tmp9148 = __tmp9147;
        else {
            CPy_TypeError("str", __tmp9147); 
            __tmp9148 = NULL;
        }
        tmp.f0 = __tmp9148;
        PyObject *__tmp9149 = PyTuple_GET_ITEM(value, 1);
        CPyTagged __tmp9150;
        if (likely(PyLong_Check(__tmp9149)))
            __tmp9150 = CPyTagged_FromObject(__tmp9149);
        else {
            CPy_TypeError("int", __tmp9149); return -1;
        }
        tmp.f1 = __tmp9150;
    }
    CPy_INCREF(tmp.f0);
    CPyTagged_INCREF(tmp.f1);
    self->_traceback_entry = tmp;
    return 0;
}

static int
emit___ReturnHandler_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___ReturnHandler_setup(PyTypeObject *type);
PyObject *CPyDef_emit___ReturnHandler(PyObject *cpy_r_value);

static PyObject *
emit___ReturnHandler_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___ReturnHandler) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___ReturnHandler_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___ReturnHandler_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___ReturnHandler_traverse(mypyc___codegen___emit___ReturnHandlerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_value);
    return 0;
}

static int
emit___ReturnHandler_clear(mypyc___codegen___emit___ReturnHandlerObject *self)
{
    Py_CLEAR(self->_value);
    return 0;
}

static void
emit___ReturnHandler_dealloc(mypyc___codegen___emit___ReturnHandlerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___ReturnHandler_dealloc)
    emit___ReturnHandler_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___ReturnHandler_vtable[1];
static bool
CPyDef_emit___ReturnHandler_trait_vtable_setup(void)
{
    CPyVTableItem emit___ReturnHandler_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___ReturnHandler_____init__,
    };
    memcpy(emit___ReturnHandler_vtable, emit___ReturnHandler_vtable_scratch, sizeof(emit___ReturnHandler_vtable));
    return 1;
}

static PyObject *
emit___ReturnHandler_get_value(mypyc___codegen___emit___ReturnHandlerObject *self, void *closure);
static int
emit___ReturnHandler_set_value(mypyc___codegen___emit___ReturnHandlerObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___ReturnHandler_getseters[] = {
    {"value",
     (getter)emit___ReturnHandler_get_value, (setter)emit___ReturnHandler_set_value,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___ReturnHandler_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___ReturnHandler_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___ReturnHandler_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ReturnHandler",
    .tp_new = emit___ReturnHandler_new,
    .tp_dealloc = (destructor)emit___ReturnHandler_dealloc,
    .tp_traverse = (traverseproc)emit___ReturnHandler_traverse,
    .tp_clear = (inquiry)emit___ReturnHandler_clear,
    .tp_getset = emit___ReturnHandler_getseters,
    .tp_methods = emit___ReturnHandler_methods,
    .tp_init = emit___ReturnHandler_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___ReturnHandlerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___ReturnHandler_template = &CPyType_emit___ReturnHandler_template_;

static PyObject *
emit___ReturnHandler_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___ReturnHandlerObject *self;
    self = (mypyc___codegen___emit___ReturnHandlerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___ReturnHandler_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___ReturnHandler(PyObject *cpy_r_value)
{
    PyObject *self = emit___ReturnHandler_setup(CPyType_emit___ReturnHandler);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___ReturnHandler_____init__(self, cpy_r_value);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___ReturnHandler_get_value(mypyc___codegen___emit___ReturnHandlerObject *self, void *closure)
{
    if (unlikely(self->_value == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'value' of 'ReturnHandler' undefined");
        return NULL;
    }
    CPy_INCREF(self->_value);
    PyObject *retval = self->_value;
    return retval;
}

static int
emit___ReturnHandler_set_value(mypyc___codegen___emit___ReturnHandlerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ReturnHandler' object attribute 'value' cannot be deleted");
        return -1;
    }
    if (self->_value != NULL) {
        CPy_DECREF(self->_value);
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
    self->_value = tmp;
    return 0;
}

static int
emit___Emitter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emit___Emitter_setup(PyTypeObject *type);
PyObject *CPyDef_emit___Emitter(PyObject *cpy_r_context, PyObject *cpy_r_value_names, PyObject *cpy_r_capi_version);

static PyObject *
emit___Emitter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emit___Emitter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emit___Emitter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emit___Emitter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emit___Emitter_traverse(mypyc___codegen___emit___EmitterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_context);
    if (CPyTagged_CheckLong(self->_capi_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_capi_version.f0));
    }
    if (CPyTagged_CheckLong(self->_capi_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_capi_version.f1));
    }
    Py_VISIT(self->_names);
    Py_VISIT(self->_value_names);
    Py_VISIT(self->_fragments);
    if (CPyTagged_CheckLong(self->__indent)) {
        Py_VISIT(CPyTagged_LongAsObject(self->__indent));
    }
    return 0;
}

static int
emit___Emitter_clear(mypyc___codegen___emit___EmitterObject *self)
{
    Py_CLEAR(self->_context);
    if (CPyTagged_CheckLong(self->_capi_version.f0)) {
        CPyTagged __tmp = self->_capi_version.f0;
        self->_capi_version.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_capi_version.f1)) {
        CPyTagged __tmp = self->_capi_version.f1;
        self->_capi_version.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_value_names);
    Py_CLEAR(self->_fragments);
    if (CPyTagged_CheckLong(self->__indent)) {
        CPyTagged __tmp = self->__indent;
        self->__indent = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
emit___Emitter_dealloc(mypyc___codegen___emit___EmitterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emit___Emitter_dealloc)
    emit___Emitter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emit___Emitter_vtable[53];
static bool
CPyDef_emit___Emitter_trait_vtable_setup(void)
{
    CPyVTableItem emit___Emitter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emit___Emitter_____init__,
        (CPyVTableItem)CPyDef_emit___Emitter___indent,
        (CPyVTableItem)CPyDef_emit___Emitter___dedent,
        (CPyVTableItem)CPyDef_emit___Emitter___label,
        (CPyVTableItem)CPyDef_emit___Emitter___reg,
        (CPyVTableItem)CPyDef_emit___Emitter___attr,
        (CPyVTableItem)CPyDef_emit___Emitter___object_annotation,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_line,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_lines,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_label,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_from_emitter,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_printf,
        (CPyVTableItem)CPyDef_emit___Emitter___temp_name,
        (CPyVTableItem)CPyDef_emit___Emitter___new_label,
        (CPyVTableItem)CPyDef_emit___Emitter___get_module_group_prefix,
        (CPyVTableItem)CPyDef_emit___Emitter___get_group_prefix,
        (CPyVTableItem)CPyDef_emit___Emitter___static_name,
        (CPyVTableItem)CPyDef_emit___Emitter___type_struct_name,
        (CPyVTableItem)CPyDef_emit___Emitter___ctype,
        (CPyVTableItem)CPyDef_emit___Emitter___ctype_spaced,
        (CPyVTableItem)CPyDef_emit___Emitter___c_undefined_value,
        (CPyVTableItem)CPyDef_emit___Emitter___c_error_value,
        (CPyVTableItem)CPyDef_emit___Emitter___native_function_name,
        (CPyVTableItem)CPyDef_emit___Emitter___tuple_c_declaration,
        (CPyVTableItem)CPyDef_emit___Emitter___bitmap_field,
        (CPyVTableItem)CPyDef_emit___Emitter___attr_bitmap_expr,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_attr_bitmap_set,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_attr_bitmap_clear,
        (CPyVTableItem)CPyDef_emit___Emitter____emit_attr_bitmap_update,
        (CPyVTableItem)CPyDef_emit___Emitter___use_vectorcall,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_undefined_attr_check,
        (CPyVTableItem)CPyDef_emit___Emitter___error_value_check,
        (CPyVTableItem)CPyDef_emit___Emitter___tuple_undefined_check_cond,
        (CPyVTableItem)CPyDef_emit___Emitter___tuple_undefined_value,
        (CPyVTableItem)CPyDef_emit___Emitter___c_initializer_undefined_value,
        (CPyVTableItem)CPyDef_emit___Emitter___declare_tuple_struct,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_inc_ref,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_dec_ref,
        (CPyVTableItem)CPyDef_emit___Emitter___pretty_name,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_cast,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_cast_error_handler,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_union_cast,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_tuple_cast,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_arg_check,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_unbox,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_box,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_error_check,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_gc_visit,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_gc_clear,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_traceback,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_type_error_traceback,
        (CPyVTableItem)CPyDef_emit___Emitter____emit_traceback,
        (CPyVTableItem)CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value,
    };
    memcpy(emit___Emitter_vtable, emit___Emitter_vtable_scratch, sizeof(emit___Emitter_vtable));
    return 1;
}

static PyObject *
emit___Emitter_get_context(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set_context(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);
static PyObject *
emit___Emitter_get_capi_version(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set_capi_version(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);
static PyObject *
emit___Emitter_get_names(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set_names(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);
static PyObject *
emit___Emitter_get_value_names(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set_value_names(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);
static PyObject *
emit___Emitter_get_fragments(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set_fragments(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);
static PyObject *
emit___Emitter_get__indent(mypyc___codegen___emit___EmitterObject *self, void *closure);
static int
emit___Emitter_set__indent(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure);

static PyGetSetDef emit___Emitter_getseters[] = {
    {"context",
     (getter)emit___Emitter_get_context, (setter)emit___Emitter_set_context,
     NULL, NULL},
    {"capi_version",
     (getter)emit___Emitter_get_capi_version, (setter)emit___Emitter_set_capi_version,
     NULL, NULL},
    {"names",
     (getter)emit___Emitter_get_names, (setter)emit___Emitter_set_names,
     NULL, NULL},
    {"value_names",
     (getter)emit___Emitter_get_value_names, (setter)emit___Emitter_set_value_names,
     NULL, NULL},
    {"fragments",
     (getter)emit___Emitter_get_fragments, (setter)emit___Emitter_set_fragments,
     NULL, NULL},
    {"_indent",
     (getter)emit___Emitter_get__indent, (setter)emit___Emitter_set__indent,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emit___Emitter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emit___Emitter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"indent",
     (PyCFunction)CPyPy_emit___Emitter___indent,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"dedent",
     (PyCFunction)CPyPy_emit___Emitter___dedent,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"label",
     (PyCFunction)CPyPy_emit___Emitter___label,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reg",
     (PyCFunction)CPyPy_emit___Emitter___reg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attr",
     (PyCFunction)CPyPy_emit___Emitter___attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"object_annotation",
     (PyCFunction)CPyPy_emit___Emitter___object_annotation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_line",
     (PyCFunction)CPyPy_emit___Emitter___emit_line,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_lines",
     (PyCFunction)CPyPy_emit___Emitter___emit_lines,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_label",
     (PyCFunction)CPyPy_emit___Emitter___emit_label,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_from_emitter",
     (PyCFunction)CPyPy_emit___Emitter___emit_from_emitter,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_printf",
     (PyCFunction)CPyPy_emit___Emitter___emit_printf,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"temp_name",
     (PyCFunction)CPyPy_emit___Emitter___temp_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_label",
     (PyCFunction)CPyPy_emit___Emitter___new_label,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_module_group_prefix",
     (PyCFunction)CPyPy_emit___Emitter___get_module_group_prefix,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_group_prefix",
     (PyCFunction)CPyPy_emit___Emitter___get_group_prefix,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"static_name",
     (PyCFunction)CPyPy_emit___Emitter___static_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"type_struct_name",
     (PyCFunction)CPyPy_emit___Emitter___type_struct_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"ctype",
     (PyCFunction)CPyPy_emit___Emitter___ctype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"ctype_spaced",
     (PyCFunction)CPyPy_emit___Emitter___ctype_spaced,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"c_undefined_value",
     (PyCFunction)CPyPy_emit___Emitter___c_undefined_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"c_error_value",
     (PyCFunction)CPyPy_emit___Emitter___c_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"native_function_name",
     (PyCFunction)CPyPy_emit___Emitter___native_function_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"tuple_c_declaration",
     (PyCFunction)CPyPy_emit___Emitter___tuple_c_declaration,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bitmap_field",
     (PyCFunction)CPyPy_emit___Emitter___bitmap_field,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attr_bitmap_expr",
     (PyCFunction)CPyPy_emit___Emitter___attr_bitmap_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_attr_bitmap_set",
     (PyCFunction)CPyPy_emit___Emitter___emit_attr_bitmap_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_attr_bitmap_clear",
     (PyCFunction)CPyPy_emit___Emitter___emit_attr_bitmap_clear,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_emit_attr_bitmap_update",
     (PyCFunction)CPyPy_emit___Emitter____emit_attr_bitmap_update,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"use_vectorcall",
     (PyCFunction)CPyPy_emit___Emitter___use_vectorcall,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_undefined_attr_check",
     (PyCFunction)CPyPy_emit___Emitter___emit_undefined_attr_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"error_value_check",
     (PyCFunction)CPyPy_emit___Emitter___error_value_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"tuple_undefined_check_cond",
     (PyCFunction)CPyPy_emit___Emitter___tuple_undefined_check_cond,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"tuple_undefined_value",
     (PyCFunction)CPyPy_emit___Emitter___tuple_undefined_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"c_initializer_undefined_value",
     (PyCFunction)CPyPy_emit___Emitter___c_initializer_undefined_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_tuple_struct",
     (PyCFunction)CPyPy_emit___Emitter___declare_tuple_struct,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_inc_ref",
     (PyCFunction)CPyPy_emit___Emitter___emit_inc_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_dec_ref",
     (PyCFunction)CPyPy_emit___Emitter___emit_dec_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pretty_name",
     (PyCFunction)CPyPy_emit___Emitter___pretty_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_cast",
     (PyCFunction)CPyPy_emit___Emitter___emit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_cast_error_handler",
     (PyCFunction)CPyPy_emit___Emitter___emit_cast_error_handler,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_union_cast",
     (PyCFunction)CPyPy_emit___Emitter___emit_union_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_tuple_cast",
     (PyCFunction)CPyPy_emit___Emitter___emit_tuple_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_arg_check",
     (PyCFunction)CPyPy_emit___Emitter___emit_arg_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_unbox",
     (PyCFunction)CPyPy_emit___Emitter___emit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_box",
     (PyCFunction)CPyPy_emit___Emitter___emit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_error_check",
     (PyCFunction)CPyPy_emit___Emitter___emit_error_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_gc_visit",
     (PyCFunction)CPyPy_emit___Emitter___emit_gc_visit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_gc_clear",
     (PyCFunction)CPyPy_emit___Emitter___emit_gc_clear,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_traceback",
     (PyCFunction)CPyPy_emit___Emitter___emit_traceback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_type_error_traceback",
     (PyCFunction)CPyPy_emit___Emitter___emit_type_error_traceback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_emit_traceback",
     (PyCFunction)CPyPy_emit___Emitter____emit_traceback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_unbox_failure_with_overlapping_error_value",
     (PyCFunction)CPyPy_emit___Emitter___emit_unbox_failure_with_overlapping_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emit___Emitter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Emitter",
    .tp_new = emit___Emitter_new,
    .tp_dealloc = (destructor)emit___Emitter_dealloc,
    .tp_traverse = (traverseproc)emit___Emitter_traverse,
    .tp_clear = (inquiry)emit___Emitter_clear,
    .tp_getset = emit___Emitter_getseters,
    .tp_methods = emit___Emitter_methods,
    .tp_init = emit___Emitter_init,
    .tp_basicsize = sizeof(mypyc___codegen___emit___EmitterObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emit___Emitter_template = &CPyType_emit___Emitter_template_;

static PyObject *
emit___Emitter_setup(PyTypeObject *type)
{
    mypyc___codegen___emit___EmitterObject *self;
    self = (mypyc___codegen___emit___EmitterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emit___Emitter_vtable;
    self->_capi_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    self->__indent = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_emit___Emitter(PyObject *cpy_r_context, PyObject *cpy_r_value_names, PyObject *cpy_r_capi_version)
{
    PyObject *self = emit___Emitter_setup(CPyType_emit___Emitter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emit___Emitter_____init__(self, cpy_r_context, cpy_r_value_names, cpy_r_capi_version);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emit___Emitter_get_context(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'context' of 'Emitter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_context);
    PyObject *retval = self->_context;
    return retval;
}

static int
emit___Emitter_set_context(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute 'context' cannot be deleted");
        return -1;
    }
    if (self->_context != NULL) {
        CPy_DECREF(self->_context);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___EmitterContext))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.EmitterContext", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_context = tmp;
    return 0;
}

static PyObject *
emit___Emitter_get_capi_version(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->_capi_version.f0 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'capi_version' of 'Emitter' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_capi_version.f0);
    CPyTagged_INCREF(self->_capi_version.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9151 = CPyTagged_StealAsObject(self->_capi_version.f0);
    PyTuple_SET_ITEM(retval, 0, __tmp9151);
    PyObject *__tmp9152 = CPyTagged_StealAsObject(self->_capi_version.f1);
    PyTuple_SET_ITEM(retval, 1, __tmp9152);
    return retval;
}

static int
emit___Emitter_set_capi_version(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute 'capi_version' cannot be deleted");
        return -1;
    }
    if (self->_capi_version.f0 != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_capi_version.f0);
        CPyTagged_DECREF(self->_capi_version.f1);
    }
    tuple_T2II tmp;
    PyObject *__tmp9153;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp9153 = NULL;
        goto __LL9154;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp9153 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp9153 = NULL;
    }
    if (__tmp9153 == NULL) goto __LL9154;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        __tmp9153 = PyTuple_GET_ITEM(value, 1);
    else {
        __tmp9153 = NULL;
    }
    if (__tmp9153 == NULL) goto __LL9154;
    __tmp9153 = value;
__LL9154: ;
    if (unlikely(__tmp9153 == NULL)) {
        CPy_TypeError("tuple[int, int]", value); return -1;
    } else {
        PyObject *__tmp9155 = PyTuple_GET_ITEM(value, 0);
        CPyTagged __tmp9156;
        if (likely(PyLong_Check(__tmp9155)))
            __tmp9156 = CPyTagged_FromObject(__tmp9155);
        else {
            CPy_TypeError("int", __tmp9155); return -1;
        }
        tmp.f0 = __tmp9156;
        PyObject *__tmp9157 = PyTuple_GET_ITEM(value, 1);
        CPyTagged __tmp9158;
        if (likely(PyLong_Check(__tmp9157)))
            __tmp9158 = CPyTagged_FromObject(__tmp9157);
        else {
            CPy_TypeError("int", __tmp9157); return -1;
        }
        tmp.f1 = __tmp9158;
    }
    CPyTagged_INCREF(tmp.f0);
    CPyTagged_INCREF(tmp.f1);
    self->_capi_version = tmp;
    return 0;
}

static PyObject *
emit___Emitter_get_names(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'Emitter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
emit___Emitter_set_names(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute 'names' cannot be deleted");
        return -1;
    }
    if (self->_names != NULL) {
        CPy_DECREF(self->_names);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_namegen___NameGenerator))
        tmp = value;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_names = tmp;
    return 0;
}

static PyObject *
emit___Emitter_get_value_names(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->_value_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'value_names' of 'Emitter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_value_names);
    PyObject *retval = self->_value_names;
    return retval;
}

static int
emit___Emitter_set_value_names(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute 'value_names' cannot be deleted");
        return -1;
    }
    if (self->_value_names != NULL) {
        CPy_DECREF(self->_value_names);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_value_names = tmp;
    return 0;
}

static PyObject *
emit___Emitter_get_fragments(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->_fragments == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fragments' of 'Emitter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fragments);
    PyObject *retval = self->_fragments;
    return retval;
}

static int
emit___Emitter_set_fragments(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute 'fragments' cannot be deleted");
        return -1;
    }
    if (self->_fragments != NULL) {
        CPy_DECREF(self->_fragments);
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
    self->_fragments = tmp;
    return 0;
}

static PyObject *
emit___Emitter_get__indent(mypyc___codegen___emit___EmitterObject *self, void *closure)
{
    if (unlikely(self->__indent == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_indent' of 'Emitter' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->__indent);
    PyObject *retval = CPyTagged_StealAsObject(self->__indent);
    return retval;
}

static int
emit___Emitter_set__indent(mypyc___codegen___emit___EmitterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Emitter' object attribute '_indent' cannot be deleted");
        return -1;
    }
    if (self->__indent != CPY_INT_TAG) {
        CPyTagged_DECREF(self->__indent);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->__indent = tmp;
    return 0;
}
static PyMethodDef emitmodule_methods[] = {
    {"c_array_initializer", (PyCFunction)CPyPy_emit___c_array_initializer, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef emitmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.emit",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    emitmodule_methods
};

PyObject *CPyInit_mypyc___codegen___emit(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___emit_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___emit_internal);
        return CPyModule_mypyc___codegen___emit_internal;
    }
    CPyModule_mypyc___codegen___emit_internal = PyModule_Create(&emitmodule);
    if (unlikely(CPyModule_mypyc___codegen___emit_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___emit_internal, "__name__");
    CPyStatic_emit___globals = PyModule_GetDict(CPyModule_mypyc___codegen___emit_internal);
    if (unlikely(CPyStatic_emit___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_emit_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___emit_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___emit_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_emit___HeaderDeclaration);
    Py_CLEAR(CPyType_emit___EmitterContext);
    Py_CLEAR(CPyType_emit___ErrorHandler);
    Py_CLEAR(CPyType_emit___AssignHandler);
    Py_CLEAR(CPyType_emit___GotoHandler);
    Py_CLEAR(CPyType_emit___TracebackAndGotoHandler);
    Py_CLEAR(CPyType_emit___ReturnHandler);
    Py_CLEAR(CPyType_emit___Emitter);
    return NULL;
}

char CPyDef_emit___HeaderDeclaration_____init__(PyObject *cpy_r_self, PyObject *cpy_r_decl, PyObject *cpy_r_defn, PyObject *cpy_r_dependencies, char cpy_r_is_type, char cpy_r_needs_export) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    if (cpy_r_defn != NULL) goto CPyL25;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_defn = cpy_r_r0;
CPyL2: ;
    if (cpy_r_dependencies != NULL) goto CPyL26;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_dependencies = cpy_r_r1;
CPyL4: ;
    if (cpy_r_is_type != 2) goto CPyL6;
    cpy_r_is_type = 0;
CPyL6: ;
    if (cpy_r_needs_export != 2) goto CPyL8;
    cpy_r_needs_export = 0;
CPyL8: ;
    cpy_r_r2 = (PyObject *)&PyUnicode_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_decl, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 87, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL13;
    CPy_INCREF(cpy_r_decl);
    if (likely(PyUnicode_Check(cpy_r_decl)))
        cpy_r_r6 = cpy_r_decl;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 87, CPyStatic_emit___globals, "str", cpy_r_decl);
        goto CPyL27;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 87, CPyStatic_emit___globals);
        goto CPyL28;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = cpy_r_r7;
    goto CPyL15;
CPyL13: ;
    CPy_INCREF(cpy_r_decl);
    if (likely(PyList_Check(cpy_r_decl)))
        cpy_r_r11 = cpy_r_decl;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 87, CPyStatic_emit___globals, "list", cpy_r_decl);
        goto CPyL27;
    }
    cpy_r_r10 = cpy_r_r11;
CPyL15: ;
    ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_self)->_decl = cpy_r_r10;
    ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_self)->_defn = cpy_r_defn;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_dependencies != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL29;
    CPy_INCREF(cpy_r_dependencies);
    if (likely(cpy_r_dependencies != Py_None))
        cpy_r_r14 = cpy_r_dependencies;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 83, CPyStatic_emit___globals, "set", cpy_r_dependencies);
        goto CPyL30;
    }
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 83, CPyStatic_emit___globals);
        goto CPyL30;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL29;
    if (likely(cpy_r_dependencies != Py_None))
        cpy_r_r18 = cpy_r_dependencies;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 89, CPyStatic_emit___globals, "set", cpy_r_dependencies);
        goto CPyL24;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL23;
CPyL21: ;
    cpy_r_r20 = PySet_New(NULL);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 89, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r19 = cpy_r_r20;
CPyL23: ;
    ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_self)->_dependencies = cpy_r_r19;
    ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_self)->_is_type = cpy_r_is_type;
    ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_self)->_needs_export = cpy_r_needs_export;
    return 1;
CPyL24: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL25: ;
    CPy_INCREF(cpy_r_defn);
    goto CPyL2;
CPyL26: ;
    CPy_INCREF(cpy_r_dependencies);
    goto CPyL4;
CPyL27: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_dependencies);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_dependencies);
    CPy_DecRef(cpy_r_r6);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_dependencies);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_dependencies);
    goto CPyL24;
}

PyObject *CPyPy_emit___HeaderDeclaration_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"decl", "defn", "dependencies", "is_type", "needs_export", 0};
    PyObject *obj_decl;
    PyObject *obj_defn = NULL;
    PyObject *obj_dependencies = NULL;
    PyObject *obj_is_type = NULL;
    PyObject *obj_needs_export = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O$OOO", "__init__", kwlist, &obj_decl, &obj_defn, &obj_dependencies, &obj_is_type, &obj_needs_export)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___HeaderDeclaration))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.HeaderDeclaration", obj_self); 
        goto fail;
    }
    PyObject *arg_decl;
    if (PyUnicode_Check(obj_decl))
        arg_decl = obj_decl;
    else {
        arg_decl = NULL;
    }
    if (arg_decl != NULL) goto __LL9159;
    if (PyList_Check(obj_decl))
        arg_decl = obj_decl;
    else {
        arg_decl = NULL;
    }
    if (arg_decl != NULL) goto __LL9159;
    CPy_TypeError("union[str, list]", obj_decl); 
    goto fail;
__LL9159: ;
    PyObject *arg_defn;
    if (obj_defn == NULL) {
        arg_defn = NULL;
        goto __LL9160;
    }
    if (PyList_Check(obj_defn))
        arg_defn = obj_defn;
    else {
        arg_defn = NULL;
    }
    if (arg_defn != NULL) goto __LL9160;
    if (obj_defn == Py_None)
        arg_defn = obj_defn;
    else {
        arg_defn = NULL;
    }
    if (arg_defn != NULL) goto __LL9160;
    CPy_TypeError("list or None", obj_defn); 
    goto fail;
__LL9160: ;
    PyObject *arg_dependencies;
    if (obj_dependencies == NULL) {
        arg_dependencies = NULL;
        goto __LL9161;
    }
    if (PySet_Check(obj_dependencies))
        arg_dependencies = obj_dependencies;
    else {
        arg_dependencies = NULL;
    }
    if (arg_dependencies != NULL) goto __LL9161;
    if (obj_dependencies == Py_None)
        arg_dependencies = obj_dependencies;
    else {
        arg_dependencies = NULL;
    }
    if (arg_dependencies != NULL) goto __LL9161;
    CPy_TypeError("set or None", obj_dependencies); 
    goto fail;
__LL9161: ;
    char arg_is_type;
    if (obj_is_type == NULL) {
        arg_is_type = 2;
    } else if (unlikely(!PyBool_Check(obj_is_type))) {
        CPy_TypeError("bool", obj_is_type); goto fail;
    } else
        arg_is_type = obj_is_type == Py_True;
    char arg_needs_export;
    if (obj_needs_export == NULL) {
        arg_needs_export = 2;
    } else if (unlikely(!PyBool_Check(obj_needs_export))) {
        CPy_TypeError("bool", obj_needs_export); goto fail;
    } else
        arg_needs_export = obj_needs_export == Py_True;
    char retval = CPyDef_emit___HeaderDeclaration_____init__(arg_self, arg_decl, arg_defn, arg_dependencies, arg_is_type, arg_needs_export);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 78, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___EmitterContext_____init__(PyObject *cpy_r_self, PyObject *cpy_r_names, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    if (cpy_r_group_name != NULL) goto CPyL16;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_group_name = cpy_r_r0;
CPyL2: ;
    if (cpy_r_group_map != NULL) goto CPyL17;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_group_map = cpy_r_r1;
CPyL4: ;
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_temp_counter = 0;
    CPy_INCREF(cpy_r_names);
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_names = cpy_r_names;
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_group_name = cpy_r_group_name;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_group_map != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL18;
    CPy_INCREF(cpy_r_group_map);
    if (likely(cpy_r_group_map != Py_None))
        cpy_r_r4 = cpy_r_group_map;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 101, CPyStatic_emit___globals, "dict", cpy_r_group_map);
        goto CPyL19;
    }
    cpy_r_r5 = PyDict_Size(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL18;
    if (likely(cpy_r_group_map != Py_None))
        cpy_r_r8 = cpy_r_group_map;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 113, CPyStatic_emit___globals, "dict", cpy_r_group_map);
        goto CPyL15;
    }
    cpy_r_r9 = cpy_r_r8;
    goto CPyL11;
CPyL9: ;
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 113, CPyStatic_emit___globals);
        goto CPyL15;
    }
    cpy_r_r9 = cpy_r_r10;
CPyL11: ;
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_group_map = cpy_r_r9;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 115, CPyStatic_emit___globals);
        goto CPyL15;
    }
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_group_deps = cpy_r_r11;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 124, CPyStatic_emit___globals);
        goto CPyL15;
    }
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_declarations = cpy_r_r12;
    cpy_r_r13 = CPyDef_codegen___literals___Literals();
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 126, CPyStatic_emit___globals);
        goto CPyL15;
    }
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_self)->_literals = cpy_r_r13;
    return 1;
CPyL15: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL16: ;
    CPy_INCREF(cpy_r_group_name);
    goto CPyL2;
CPyL17: ;
    CPy_INCREF(cpy_r_group_map);
    goto CPyL4;
CPyL18: ;
    CPy_DECREF(cpy_r_group_map);
    goto CPyL9;
CPyL19: ;
    CPy_DecRef(cpy_r_group_map);
    goto CPyL15;
}

PyObject *CPyPy_emit___EmitterContext_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", "group_name", "group_map", 0};
    PyObject *obj_names;
    PyObject *obj_group_name = NULL;
    PyObject *obj_group_map = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|OO", "__init__", kwlist, &obj_names, &obj_group_name, &obj_group_map)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___EmitterContext))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.EmitterContext", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *arg_group_name;
    if (obj_group_name == NULL) {
        arg_group_name = NULL;
        goto __LL9162;
    }
    if (PyUnicode_Check(obj_group_name))
        arg_group_name = obj_group_name;
    else {
        arg_group_name = NULL;
    }
    if (arg_group_name != NULL) goto __LL9162;
    if (obj_group_name == Py_None)
        arg_group_name = obj_group_name;
    else {
        arg_group_name = NULL;
    }
    if (arg_group_name != NULL) goto __LL9162;
    CPy_TypeError("str or None", obj_group_name); 
    goto fail;
__LL9162: ;
    PyObject *arg_group_map;
    if (obj_group_map == NULL) {
        arg_group_map = NULL;
        goto __LL9163;
    }
    if (PyDict_Check(obj_group_map))
        arg_group_map = obj_group_map;
    else {
        arg_group_map = NULL;
    }
    if (arg_group_map != NULL) goto __LL9163;
    if (obj_group_map == Py_None)
        arg_group_map = obj_group_map;
    else {
        arg_group_map = NULL;
    }
    if (arg_group_map != NULL) goto __LL9163;
    CPy_TypeError("dict or None", obj_group_map); 
    goto fail;
__LL9163: ;
    char retval = CPyDef_emit___EmitterContext_____init__(arg_self, arg_names, arg_group_name, arg_group_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 97, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___GotoHandler_____init__(PyObject *cpy_r_self, PyObject *cpy_r_label) {
    CPy_INCREF(cpy_r_label);
    ((mypyc___codegen___emit___GotoHandlerObject *)cpy_r_self)->_label = cpy_r_label;
    return 1;
}

PyObject *CPyPy_emit___GotoHandler_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"label", 0};
    PyObject *obj_label;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_label)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___GotoHandler))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.GotoHandler", obj_self); 
        goto fail;
    }
    PyObject *arg_label;
    if (likely(PyUnicode_Check(obj_label)))
        arg_label = obj_label;
    else {
        CPy_TypeError("str", obj_label); 
        goto fail;
    }
    char retval = CPyDef_emit___GotoHandler_____init__(arg_self, arg_label);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 140, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___TracebackAndGotoHandler_____init__(PyObject *cpy_r_self, PyObject *cpy_r_label, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry) {
    CPy_INCREF(cpy_r_label);
    ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_self)->_label = cpy_r_label;
    CPy_INCREF(cpy_r_source_path);
    ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_self)->_source_path = cpy_r_source_path;
    CPy_INCREF(cpy_r_module_name);
    ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_self)->_module_name = cpy_r_module_name;
    CPy_INCREF(cpy_r_traceback_entry.f0);
    CPyTagged_INCREF(cpy_r_traceback_entry.f1);
    ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_self)->_traceback_entry = cpy_r_traceback_entry;
    return 1;
}

PyObject *CPyPy_emit___TracebackAndGotoHandler_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"label", "source_path", "module_name", "traceback_entry", 0};
    PyObject *obj_label;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    PyObject *obj_traceback_entry;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_label, &obj_source_path, &obj_module_name, &obj_traceback_entry)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___TracebackAndGotoHandler))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.TracebackAndGotoHandler", obj_self); 
        goto fail;
    }
    PyObject *arg_label;
    if (likely(PyUnicode_Check(obj_label)))
        arg_label = obj_label;
    else {
        CPy_TypeError("str", obj_label); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    tuple_T2OI arg_traceback_entry;
    PyObject *__tmp9164;
    if (unlikely(!(PyTuple_Check(obj_traceback_entry) && PyTuple_GET_SIZE(obj_traceback_entry) == 2))) {
        __tmp9164 = NULL;
        goto __LL9165;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_traceback_entry, 0))))
        __tmp9164 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
    else {
        __tmp9164 = NULL;
    }
    if (__tmp9164 == NULL) goto __LL9165;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_traceback_entry, 1))))
        __tmp9164 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
    else {
        __tmp9164 = NULL;
    }
    if (__tmp9164 == NULL) goto __LL9165;
    __tmp9164 = obj_traceback_entry;
__LL9165: ;
    if (unlikely(__tmp9164 == NULL)) {
        CPy_TypeError("tuple[str, int]", obj_traceback_entry); goto fail;
    } else {
        PyObject *__tmp9166 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
        PyObject *__tmp9167;
        if (likely(PyUnicode_Check(__tmp9166)))
            __tmp9167 = __tmp9166;
        else {
            CPy_TypeError("str", __tmp9166); 
            __tmp9167 = NULL;
        }
        arg_traceback_entry.f0 = __tmp9167;
        PyObject *__tmp9168 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
        CPyTagged __tmp9169;
        if (likely(PyLong_Check(__tmp9168)))
            __tmp9169 = CPyTagged_BorrowFromObject(__tmp9168);
        else {
            CPy_TypeError("int", __tmp9168); goto fail;
        }
        arg_traceback_entry.f1 = __tmp9169;
    }
    char retval = CPyDef_emit___TracebackAndGotoHandler_____init__(arg_self, arg_label, arg_source_path, arg_module_name, arg_traceback_entry);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 147, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___ReturnHandler_____init__(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    CPy_INCREF(cpy_r_value);
    ((mypyc___codegen___emit___ReturnHandlerObject *)cpy_r_self)->_value = cpy_r_value;
    return 1;
}

PyObject *CPyPy_emit___ReturnHandler_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    PyObject *obj_value;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___ReturnHandler))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.ReturnHandler", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    char retval = CPyDef_emit___ReturnHandler_____init__(arg_self, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 159, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_context, PyObject *cpy_r_value_names, PyObject *cpy_r_capi_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    tuple_T2II cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    tuple_T2II cpy_r_r9;
    tuple_T2II cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2II cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    if (cpy_r_value_names != NULL) goto CPyL26;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value_names = cpy_r_r0;
CPyL2: ;
    if (cpy_r_capi_version != NULL) goto CPyL27;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_capi_version = cpy_r_r1;
CPyL4: ;
    CPy_INCREF(cpy_r_context);
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context = cpy_r_context;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_capi_version != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL28;
    PyObject *__tmp9170;
    if (unlikely(!(PyTuple_Check(cpy_r_capi_version) && PyTuple_GET_SIZE(cpy_r_capi_version) == 2))) {
        __tmp9170 = NULL;
        goto __LL9171;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 0))))
        __tmp9170 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
    else {
        __tmp9170 = NULL;
    }
    if (__tmp9170 == NULL) goto __LL9171;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 1))))
        __tmp9170 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
    else {
        __tmp9170 = NULL;
    }
    if (__tmp9170 == NULL) goto __LL9171;
    __tmp9170 = cpy_r_capi_version;
__LL9171: ;
    if (unlikely(__tmp9170 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_capi_version); cpy_r_r4 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp9172 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
        CPyTagged __tmp9173;
        if (likely(PyLong_Check(__tmp9172)))
            __tmp9173 = CPyTagged_FromObject(__tmp9172);
        else {
            CPy_TypeError("int", __tmp9172); __tmp9173 = CPY_INT_TAG;
        }
        cpy_r_r4.f0 = __tmp9173;
        PyObject *__tmp9174 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
        CPyTagged __tmp9175;
        if (likely(PyLong_Check(__tmp9174)))
            __tmp9175 = CPyTagged_FromObject(__tmp9174);
        else {
            CPy_TypeError("int", __tmp9174); __tmp9175 = CPY_INT_TAG;
        }
        cpy_r_r4.f1 = __tmp9175;
    }
    if (unlikely(cpy_r_r4.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 170, CPyStatic_emit___globals);
        goto CPyL29;
    }
    cpy_r_r5 = PyTuple_New(2);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9176 = CPyTagged_StealAsObject(cpy_r_r4.f0);
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp9176);
    PyObject *__tmp9177 = CPyTagged_StealAsObject(cpy_r_r4.f1);
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp9177);
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 170, CPyStatic_emit___globals);
        goto CPyL29;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL28;
    PyObject *__tmp9178;
    if (unlikely(!(PyTuple_Check(cpy_r_capi_version) && PyTuple_GET_SIZE(cpy_r_capi_version) == 2))) {
        __tmp9178 = NULL;
        goto __LL9179;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 0))))
        __tmp9178 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
    else {
        __tmp9178 = NULL;
    }
    if (__tmp9178 == NULL) goto __LL9179;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 1))))
        __tmp9178 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
    else {
        __tmp9178 = NULL;
    }
    if (__tmp9178 == NULL) goto __LL9179;
    __tmp9178 = cpy_r_capi_version;
__LL9179: ;
    if (unlikely(__tmp9178 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_capi_version); cpy_r_r9 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp9180 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
        CPyTagged __tmp9181;
        if (likely(PyLong_Check(__tmp9180)))
            __tmp9181 = CPyTagged_FromObject(__tmp9180);
        else {
            CPy_TypeError("int", __tmp9180); __tmp9181 = CPY_INT_TAG;
        }
        cpy_r_r9.f0 = __tmp9181;
        PyObject *__tmp9182 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
        CPyTagged __tmp9183;
        if (likely(PyLong_Check(__tmp9182)))
            __tmp9183 = CPyTagged_FromObject(__tmp9182);
        else {
            CPy_TypeError("int", __tmp9182); __tmp9183 = CPY_INT_TAG;
        }
        cpy_r_r9.f1 = __tmp9183;
    }
    CPy_DECREF(cpy_r_capi_version);
    if (unlikely(cpy_r_r9.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals);
        goto CPyL30;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL16;
CPyL10: ;
    cpy_r_r11 = CPyModule_sys;
    cpy_r_r12 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals);
        goto CPyL30;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals, "tuple", cpy_r_r13);
        goto CPyL30;
    }
    cpy_r_r15 = CPySequenceTuple_GetSlice(cpy_r_r14, 0, 4);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals);
        goto CPyL30;
    }
    if (likely(PyTuple_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals, "tuple", cpy_r_r15);
        goto CPyL30;
    }
    PyObject *__tmp9184;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 2))) {
        __tmp9184 = NULL;
        goto __LL9185;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 0))))
        __tmp9184 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp9184 = NULL;
    }
    if (__tmp9184 == NULL) goto __LL9185;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 1))))
        __tmp9184 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    else {
        __tmp9184 = NULL;
    }
    if (__tmp9184 == NULL) goto __LL9185;
    __tmp9184 = cpy_r_r16;
__LL9185: ;
    if (unlikely(__tmp9184 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r16); cpy_r_r17 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp9186 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPyTagged __tmp9187;
        if (likely(PyLong_Check(__tmp9186)))
            __tmp9187 = CPyTagged_FromObject(__tmp9186);
        else {
            CPy_TypeError("int", __tmp9186); __tmp9187 = CPY_INT_TAG;
        }
        cpy_r_r17.f0 = __tmp9187;
        PyObject *__tmp9188 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPyTagged __tmp9189;
        if (likely(PyLong_Check(__tmp9188)))
            __tmp9189 = CPyTagged_FromObject(__tmp9188);
        else {
            CPy_TypeError("int", __tmp9188); __tmp9189 = CPY_INT_TAG;
        }
        cpy_r_r17.f1 = __tmp9189;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 173, CPyStatic_emit___globals);
        goto CPyL30;
    }
    cpy_r_r10 = cpy_r_r17;
CPyL16: ;
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_capi_version = cpy_r_r10;
    cpy_r_r18 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_context)->_names;
    CPy_INCREF(cpy_r_r18);
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_names = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_value_names != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL31;
    CPy_INCREF(cpy_r_value_names);
    if (likely(cpy_r_value_names != Py_None))
        cpy_r_r21 = cpy_r_value_names;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 169, CPyStatic_emit___globals, "dict", cpy_r_value_names);
        goto CPyL30;
    }
    cpy_r_r22 = PyDict_Size(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (!cpy_r_r24) goto CPyL31;
    if (likely(cpy_r_value_names != Py_None))
        cpy_r_r25 = cpy_r_value_names;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "__init__", 175, CPyStatic_emit___globals, "dict", cpy_r_value_names);
        goto CPyL25;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL23;
CPyL21: ;
    cpy_r_r27 = PyDict_New();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 175, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_r26 = cpy_r_r27;
CPyL23: ;
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_value_names = cpy_r_r26;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 176, CPyStatic_emit___globals);
        goto CPyL25;
    }
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_fragments = cpy_r_r28;
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent = 0;
    return 1;
CPyL25: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL26: ;
    CPy_INCREF(cpy_r_value_names);
    goto CPyL2;
CPyL27: ;
    CPy_INCREF(cpy_r_capi_version);
    goto CPyL4;
CPyL28: ;
    CPy_DECREF(cpy_r_capi_version);
    goto CPyL10;
CPyL29: ;
    CPy_DecRef(cpy_r_value_names);
    CPy_DecRef(cpy_r_capi_version);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_value_names);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_value_names);
    goto CPyL21;
}

PyObject *CPyPy_emit___Emitter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"context", "value_names", "capi_version", 0};
    PyObject *obj_context;
    PyObject *obj_value_names = NULL;
    PyObject *obj_capi_version = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|OO", "__init__", kwlist, &obj_context, &obj_value_names, &obj_capi_version)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(Py_TYPE(obj_context) == CPyType_emit___EmitterContext))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypyc.codegen.emit.EmitterContext", obj_context); 
        goto fail;
    }
    PyObject *arg_value_names;
    if (obj_value_names == NULL) {
        arg_value_names = NULL;
        goto __LL9190;
    }
    if (PyDict_Check(obj_value_names))
        arg_value_names = obj_value_names;
    else {
        arg_value_names = NULL;
    }
    if (arg_value_names != NULL) goto __LL9190;
    if (obj_value_names == Py_None)
        arg_value_names = obj_value_names;
    else {
        arg_value_names = NULL;
    }
    if (arg_value_names != NULL) goto __LL9190;
    CPy_TypeError("dict or None", obj_value_names); 
    goto fail;
__LL9190: ;
    PyObject *arg_capi_version;
    if (obj_capi_version == NULL) {
        arg_capi_version = NULL;
        goto __LL9191;
    }
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        arg_capi_version = NULL;
        goto __LL9192;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        arg_capi_version = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version == NULL) goto __LL9192;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        arg_capi_version = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version == NULL) goto __LL9192;
    arg_capi_version = obj_capi_version;
__LL9192: ;
    if (arg_capi_version != NULL) goto __LL9191;
    if (obj_capi_version == Py_None)
        arg_capi_version = obj_capi_version;
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version != NULL) goto __LL9191;
    CPy_TypeError("tuple[int, int] or None", obj_capi_version); 
    goto fail;
__LL9191: ;
    char retval = CPyDef_emit___Emitter_____init__(arg_self, arg_context, arg_value_names, arg_capi_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "__init__", 166, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___indent(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 8);
    CPyTagged_DECREF(((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent);
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent = cpy_r_r1;
    return 1;
}

PyObject *CPyPy_emit___Emitter___indent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":indent", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___indent(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "indent", 181, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___dedent(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent;
    cpy_r_r1 = CPyTagged_Subtract(cpy_r_r0, 8);
    CPyTagged_DECREF(((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent);
    ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent = cpy_r_r1;
    cpy_r_r3 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent;
    cpy_r_r4 = cpy_r_r3 & 1;
    cpy_r_r5 = cpy_r_r4 == 0;
    cpy_r_r6 = 0 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = cpy_r_r5 & cpy_r_r7;
    if (!cpy_r_r8) goto CPyL2;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r3 >= (Py_ssize_t)0;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL3;
CPyL2: ;
    cpy_r_r11 = CPyTagged_IsLt_(cpy_r_r3, 0);
    cpy_r_r12 = cpy_r_r11 ^ 1;
    cpy_r_r10 = cpy_r_r12;
CPyL3: ;
    if (cpy_r_r10) goto CPyL6;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "dedent", 186, CPyStatic_emit___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_emit___Emitter___dedent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":dedent", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___dedent(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "dedent", 184, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___label(PyObject *cpy_r_self, PyObject *cpy_r_label) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_label)->_label;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyTagged_Str(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "label", 189, CPyStatic_emit___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyStatics[6861]; /* 'CPyL' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r2, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "label", 189, CPyStatic_emit___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_emit___Emitter___label(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"label", 0};
    static CPyArg_Parser parser = {"O:label", kwlist, 0};
    PyObject *obj_label;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_label)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___label(arg_self, arg_label);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "label", 188, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6862]; /* 'cpy_r_' */
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_value_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_reg);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "reg", 192, CPyStatic_emit___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "reg", 192, CPyStatic_emit___globals, "str", cpy_r_r2);
        goto CPyL4;
    }
    cpy_r_r4 = PyUnicode_Concat(cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "reg", 192, CPyStatic_emit___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_emit___Emitter___reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___reg(arg_self, arg_reg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "reg", 191, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___attr(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyStatics[755]; /* '_' */
    cpy_r_r1 = PyUnicode_Concat(cpy_r_r0, cpy_r_name);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "attr", 195, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emit___Emitter___attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:attr", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___attr(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "attr", 194, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___object_annotation(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_line) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_line_width;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_formatted;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_x;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_first_line;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_rest;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_comment_continued;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStr_Size_size_t(cpy_r_line);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 205, CPyStatic_emit___globals);
        goto CPyL36;
    }
    cpy_r_r3 = cpy_r_r1 << 1;
    cpy_r_r4 = CPyTagged_Add(cpy_r_r0, cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r0);
    cpy_r_line_width = cpy_r_r4;
    cpy_r_r5 = CPyTagged_Subtract(180, cpy_r_line_width);
    cpy_r_r6 = 40 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = cpy_r_r5 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL3;
    cpy_r_r11 = (Py_ssize_t)40 > (Py_ssize_t)cpy_r_r5;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL4;
CPyL3: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, 40);
    cpy_r_r12 = cpy_r_r13;
CPyL4: ;
    if (cpy_r_r12) {
        goto CPyL37;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r14 = 40;
    goto CPyL7;
CPyL6: ;
    cpy_r_r14 = cpy_r_r5;
CPyL7: ;
    cpy_r_r15 = CPyModule_pprint;
    cpy_r_r16 = CPyStatics[4227]; /* 'pformat' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 206, CPyStatic_emit___globals);
        goto CPyL38;
    }
    cpy_r_r18 = 1 ? Py_True : Py_False;
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r14);
    PyObject *cpy_r_r20[3] = {cpy_r_obj, cpy_r_r18, cpy_r_r19};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = CPyStatics[9935]; /* ('compact', 'width') */
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r21, 1, cpy_r_r22);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 206, CPyStatic_emit___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 206, CPyStatic_emit___globals, "str", cpy_r_r23);
        goto CPyL40;
    }
    cpy_r_formatted = cpy_r_r24;
    cpy_r_r25 = 0;
    cpy_r_r26 = CPyStatics[6864];
    cpy_r_r27 = CPyStatics[6865];
    cpy_r_r28 = CPyStatics[6866]; /* '\x00' */
    cpy_r_r29.f0 = cpy_r_r26;
    cpy_r_r29.f1 = cpy_r_r27;
    cpy_r_r29.f2 = cpy_r_r28;
    CPy_INCREF(cpy_r_r29.f0);
    CPy_INCREF(cpy_r_r29.f1);
    CPy_INCREF(cpy_r_r29.f2);
    cpy_r_r30 = PyTuple_New(3);
    if (unlikely(cpy_r_r30 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9193 = cpy_r_r29.f0;
    PyTuple_SET_ITEM(cpy_r_r30, 0, __tmp9193);
    PyObject *__tmp9194 = cpy_r_r29.f1;
    PyTuple_SET_ITEM(cpy_r_r30, 1, __tmp9194);
    PyObject *__tmp9195 = cpy_r_r29.f2;
    PyTuple_SET_ITEM(cpy_r_r30, 2, __tmp9195);
    cpy_r_r31 = PyObject_GetIter(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 207, CPyStatic_emit___globals);
        goto CPyL41;
    }
CPyL11: ;
    cpy_r_r32 = PyIter_Next(cpy_r_r31);
    if (cpy_r_r32 == NULL) goto CPyL42;
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 207, CPyStatic_emit___globals, "str", cpy_r_r32);
        goto CPyL43;
    }
    cpy_r_x = cpy_r_r33;
    cpy_r_r34 = PySequence_Contains(cpy_r_formatted, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 207, CPyStatic_emit___globals);
        goto CPyL43;
    }
    cpy_r_r36 = cpy_r_r34;
    if (cpy_r_r36) {
        goto CPyL44;
    } else
        goto CPyL11;
CPyL15: ;
    cpy_r_r25 = 1;
    goto CPyL17;
CPyL16: ;
    cpy_r_r37 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 207, CPyStatic_emit___globals);
        goto CPyL41;
    }
CPyL17: ;
    if (cpy_r_r25) {
        goto CPyL45;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r38 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r38);
    return cpy_r_r38;
CPyL19: ;
    cpy_r_r39 = CPyStatics[189]; /* '\n' */
    cpy_r_r40 = PySequence_Contains(cpy_r_formatted, cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 210, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL46;
    cpy_r_r43 = CPyStatics[189]; /* '\n' */
    cpy_r_r44 = CPyStatics[369]; /* 'split' */
    cpy_r_r45 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r46[3] = {cpy_r_formatted, cpy_r_r43, cpy_r_r45};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r49 = PyObject_VectorcallMethod(cpy_r_r44, cpy_r_r47, 9223372036854775810ULL, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 211, CPyStatic_emit___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_formatted);
    if (likely(PyList_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 211, CPyStatic_emit___globals, "list", cpy_r_r49);
        goto CPyL40;
    }
    cpy_r_r51 = CPySequence_CheckUnpackCount(cpy_r_r50, 2);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 211, CPyStatic_emit___globals);
        goto CPyL47;
    }
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_r50, 0);
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_r50, 2);
    CPy_DECREF(cpy_r_r50);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r55 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 211, CPyStatic_emit___globals, "str", cpy_r_r53);
        goto CPyL48;
    }
    cpy_r_first_line = cpy_r_r55;
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r56 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 211, CPyStatic_emit___globals, "str", cpy_r_r54);
        goto CPyL49;
    }
    cpy_r_rest = cpy_r_r56;
    cpy_r_r57 = CPyTagged_Add(cpy_r_line_width, 6);
    CPyTagged_DECREF(cpy_r_line_width);
    cpy_r_r58 = CPyStatics[295]; /* ' ' */
    cpy_r_r59 = CPyTagged_StealAsObject(cpy_r_r57);
    cpy_r_r60 = PyNumber_Multiply(cpy_r_r59, cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 212, CPyStatic_emit___globals);
        goto CPyL50;
    }
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 212, CPyStatic_emit___globals, "str", cpy_r_r60);
        goto CPyL50;
    }
    cpy_r_r62 = CPyModule_textwrap;
    cpy_r_r63 = CPyStatics[336]; /* 'indent' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 212, CPyStatic_emit___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r65[2] = {cpy_r_rest, cpy_r_r61};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = _PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 2, 0);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 212, CPyStatic_emit___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_rest);
    CPy_DECREF(cpy_r_r61);
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "object_annotation", 212, CPyStatic_emit___globals, "str", cpy_r_r67);
        goto CPyL52;
    }
    cpy_r_comment_continued = cpy_r_r68;
    cpy_r_r69 = CPyStatics[6867];
    cpy_r_r70 = CPyStatics[189]; /* '\n' */
    cpy_r_r71 = CPyStatics[6868];
    cpy_r_r72 = CPyStr_Build(5, cpy_r_r69, cpy_r_first_line, cpy_r_r70, cpy_r_comment_continued, cpy_r_r71);
    CPy_DECREF(cpy_r_first_line);
    CPy_DECREF(cpy_r_comment_continued);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 213, CPyStatic_emit___globals);
        goto CPyL35;
    }
    return cpy_r_r72;
CPyL33: ;
    cpy_r_r73 = CPyStatics[6867];
    cpy_r_r74 = CPyStatics[6868];
    cpy_r_r75 = CPyStr_Build(3, cpy_r_r73, cpy_r_formatted, cpy_r_r74);
    CPy_DECREF(cpy_r_formatted);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 215, CPyStatic_emit___globals);
        goto CPyL35;
    }
    return cpy_r_r75;
CPyL35: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL35;
CPyL37: ;
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL5;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPyTagged_DecRef(cpy_r_r14);
    goto CPyL35;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_r19);
    goto CPyL35;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_line_width);
    goto CPyL35;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_formatted);
    goto CPyL35;
CPyL42: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL16;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_formatted);
    CPy_DecRef(cpy_r_r31);
    goto CPyL35;
CPyL44: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL15;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_line_width);
    CPy_DECREF(cpy_r_formatted);
    goto CPyL18;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_line_width);
    goto CPyL33;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_r50);
    goto CPyL35;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_r54);
    goto CPyL35;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_line_width);
    CPy_DecRef(cpy_r_first_line);
    goto CPyL35;
CPyL50: ;
    CPy_DecRef(cpy_r_first_line);
    CPy_DecRef(cpy_r_rest);
    goto CPyL35;
CPyL51: ;
    CPy_DecRef(cpy_r_first_line);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r61);
    goto CPyL35;
CPyL52: ;
    CPy_DecRef(cpy_r_first_line);
    goto CPyL35;
}

PyObject *CPyPy_emit___Emitter___object_annotation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "line", 0};
    static CPyArg_Parser parser = {"OO:object_annotation", kwlist, 0};
    PyObject *obj_obj;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_obj = obj_obj;
    PyObject *arg_line;
    if (likely(PyUnicode_Check(obj_line)))
        arg_line = obj_line;
    else {
        CPy_TypeError("str", obj_line); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___object_annotation(arg_self, arg_obj, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "object_annotation", 197, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_line(PyObject *cpy_r_self, PyObject *cpy_r_line, PyObject *cpy_r_ann) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_comment;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    if (cpy_r_line != NULL) goto CPyL20;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_line = cpy_r_r0;
CPyL2: ;
    if (cpy_r_ann != NULL) goto CPyL21;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_ann = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyStatics[1406]; /* '}' */
    cpy_r_r3 = CPyStr_Startswith(cpy_r_line, cpy_r_r2);
    if (!cpy_r_r3) goto CPyL6;
    cpy_r_r4 = CPyDef_emit___Emitter___dedent(cpy_r_self);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 219, CPyStatic_emit___globals);
        goto CPyL22;
    }
CPyL6: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_ann != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL23;
    cpy_r_r7 = CPyDef_emit___Emitter___object_annotation(cpy_r_self, cpy_r_ann, cpy_r_line);
    CPy_DECREF(cpy_r_ann);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 220, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r8 = cpy_r_r7;
    goto CPyL10;
CPyL9: ;
    cpy_r_r9 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_r8 = cpy_r_r9;
CPyL10: ;
    cpy_r_comment = cpy_r_r8;
    cpy_r_r10 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_fragments;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->__indent;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[295]; /* ' ' */
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r11);
    cpy_r_r14 = PyNumber_Multiply(cpy_r_r13, cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals, "str", cpy_r_r14);
        goto CPyL25;
    }
    cpy_r_r16 = PyUnicode_Concat(cpy_r_r15, cpy_r_line);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_r17 = PyUnicode_Concat(cpy_r_r16, cpy_r_comment);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_comment);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r18 = CPyStatics[189]; /* '\n' */
    cpy_r_r19 = PyUnicode_Concat(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r20 = PyList_Append(cpy_r_r10, cpy_r_r19);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 221, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r22 = CPyStatics[1405]; /* '{' */
    cpy_r_r23 = CPyStr_Endswith(cpy_r_line, cpy_r_r22);
    CPy_DECREF(cpy_r_line);
    if (!cpy_r_r23) goto CPyL18;
    cpy_r_r24 = CPyDef_emit___Emitter___indent(cpy_r_self);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 223, CPyStatic_emit___globals);
        goto CPyL19;
    }
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL20: ;
    CPy_INCREF(cpy_r_line);
    goto CPyL2;
CPyL21: ;
    CPy_INCREF(cpy_r_ann);
    goto CPyL4;
CPyL22: ;
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ann);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_ann);
    goto CPyL9;
CPyL24: ;
    CPy_DecRef(cpy_r_line);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_comment);
    CPy_DecRef(cpy_r_r10);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r10);
    goto CPyL19;
}

PyObject *CPyPy_emit___Emitter___emit_line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "ann", 0};
    static CPyArg_Parser parser = {"|O$O:emit_line", kwlist, 0};
    PyObject *obj_line = NULL;
    PyObject *obj_ann = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_line, &obj_ann)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_line;
    if (obj_line == NULL) {
        arg_line = NULL;
    } else if (likely(PyUnicode_Check(obj_line)))
        arg_line = obj_line;
    else {
        CPy_TypeError("str", obj_line); 
        goto fail;
    }
    PyObject *arg_ann;
    if (obj_ann == NULL) {
        arg_ann = NULL;
    } else {
        arg_ann = obj_ann; 
    }
    char retval = CPyDef_emit___Emitter___emit_line(arg_self, arg_line, arg_ann);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_line", 217, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_lines(PyObject *cpy_r_self, PyObject *cpy_r_lines) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_lines)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_lines, cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_lines", 226, CPyStatic_emit___globals);
        goto CPyL7;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_lines", 226, CPyStatic_emit___globals, "str", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_line = cpy_r_r6;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_line, cpy_r_r7);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_lines", 227, CPyStatic_emit___globals);
        goto CPyL7;
    }
    cpy_r_r9 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r9;
    goto CPyL1;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_emit___Emitter___emit_lines(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:emit_lines", kwlist, 0};
    PyObject *obj_lines;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_lines, NULL)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_lines = obj_lines;
    char retval = CPyDef_emit___Emitter___emit_lines(arg_self, arg_lines);
    CPy_DECREF(obj_lines);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_lines);
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_lines", 225, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_label(PyObject *cpy_r_self, PyObject *cpy_r_label) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_text;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_label, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_label", 230, CPyStatic_emit___globals);
        goto CPyL15;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_label);
    if (likely(PyUnicode_Check(cpy_r_label)))
        cpy_r_r4 = cpy_r_label;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_label", 231, CPyStatic_emit___globals, "str", cpy_r_label);
        goto CPyL15;
    }
    cpy_r_text = cpy_r_r4;
    goto CPyL12;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_label) == CPyType_ops___BasicBlock))
        cpy_r_r5 = cpy_r_label;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_label", 233, CPyStatic_emit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_label);
        goto CPyL15;
    }
    cpy_r_r6 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_r5)->_label;
    cpy_r_r7 = cpy_r_r6 == 0;
    if (cpy_r_r7) goto CPyL8;
    if (likely(Py_TYPE(cpy_r_label) == CPyType_ops___BasicBlock))
        cpy_r_r8 = cpy_r_label;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_label", 233, CPyStatic_emit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_label);
        goto CPyL15;
    }
    cpy_r_r9 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_r8)->_referenced;
    if (cpy_r_r9) goto CPyL9;
CPyL8: ;
    return 1;
CPyL9: ;
    CPy_INCREF(cpy_r_label);
    if (likely(Py_TYPE(cpy_r_label) == CPyType_ops___BasicBlock))
        cpy_r_r10 = cpy_r_label;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_label", 236, CPyStatic_emit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_label);
        goto CPyL15;
    }
    cpy_r_r11 = CPyDef_emit___Emitter___label(cpy_r_self, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_label", 236, CPyStatic_emit___globals);
        goto CPyL15;
    }
    cpy_r_text = cpy_r_r11;
CPyL12: ;
    cpy_r_r12 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_fragments;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[6869]; /* ': ;\n' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_text, cpy_r_r13);
    CPy_DECREF(cpy_r_text);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_label", 238, CPyStatic_emit___globals);
        goto CPyL16;
    }
    cpy_r_r15 = PyList_Append(cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_label", 238, CPyStatic_emit___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
}

PyObject *CPyPy_emit___Emitter___emit_label(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"label", 0};
    static CPyArg_Parser parser = {"O:emit_label", kwlist, 0};
    PyObject *obj_label;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_label)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_label;
    if (Py_TYPE(obj_label) == CPyType_ops___BasicBlock)
        arg_label = obj_label;
    else {
        arg_label = NULL;
    }
    if (arg_label != NULL) goto __LL9196;
    if (PyUnicode_Check(obj_label))
        arg_label = obj_label;
    else {
        arg_label = NULL;
    }
    if (arg_label != NULL) goto __LL9196;
    CPy_TypeError("union[mypyc.ir.ops.BasicBlock, str]", obj_label); 
    goto fail;
__LL9196: ;
    char retval = CPyDef_emit___Emitter___emit_label(arg_self, arg_label);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_label", 229, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_from_emitter(PyObject *cpy_r_self, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_fragments;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_fragments;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyList_Extend(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_from_emitter", 241, CPyStatic_emit___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL3: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL1;
}

PyObject *CPyPy_emit___Emitter___emit_from_emitter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"emitter", 0};
    static CPyArg_Parser parser = {"O:emit_from_emitter", kwlist, 0};
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_from_emitter(arg_self, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_from_emitter", 240, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_printf(PyObject *cpy_r_self, PyObject *cpy_r_fmt, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyStatics[189]; /* '\n' */
    cpy_r_r1 = CPyStatics[6870]; /* '\\n' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_fmt, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 244, CPyStatic_emit___globals);
        goto CPyL11;
    }
    cpy_r_fmt = cpy_r_r2;
    cpy_r_r3 = CPyStatics[71]; /* ', ' */
    cpy_r_r4 = CPyStatics[178]; /* '"' */
    cpy_r_r5 = CPyStatics[178]; /* '"' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r4, cpy_r_fmt, cpy_r_r5);
    CPy_DECREF(cpy_r_fmt);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL11;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL12;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = PySequence_List(cpy_r_args);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL13;
    }
    cpy_r_r11 = PyNumber_Add(cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL11;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals, "list", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_r13 = PyUnicode_Join(cpy_r_r3, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL11;
    }
    cpy_r_r14 = CPyStatics[6871]; /* 'printf(' */
    cpy_r_r15 = CPyStatics[6872]; /* ');' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL11;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 245, CPyStatic_emit___globals);
        goto CPyL11;
    }
    cpy_r_r19 = CPyStatics[6873]; /* 'fflush(stdout);' */
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 246, CPyStatic_emit___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL11;
}

PyObject *CPyPy_emit___Emitter___emit_printf(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fmt", 0};
    static CPyArg_Parser parser = {"%O:emit_printf", kwlist, 0};
    PyObject *obj_fmt;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, NULL, &obj_fmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_fmt;
    if (likely(PyUnicode_Check(obj_fmt)))
        arg_fmt = obj_fmt;
    else {
        CPy_TypeError("str", obj_fmt); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_emit___Emitter___emit_printf(arg_self, arg_fmt, arg_args);
    CPy_DECREF(obj_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_printf", 243, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___temp_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter;
    cpy_r_r2 = CPyTagged_Add(cpy_r_r1, 2);
    CPyTagged_DECREF(((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter);
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter = cpy_r_r2;
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r5 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r4)->_temp_counter;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_Str(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "temp_name", 250, CPyStatic_emit___globals);
        goto CPyL3;
    }
    cpy_r_r7 = CPyStatics[6874]; /* '__tmp' */
    cpy_r_r8 = CPyStr_Build(2, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "temp_name", 250, CPyStatic_emit___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_emit___Emitter___temp_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":temp_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___temp_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "temp_name", 248, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___new_label(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter;
    cpy_r_r2 = CPyTagged_Add(cpy_r_r1, 2);
    CPyTagged_DECREF(((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter);
    ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_temp_counter = cpy_r_r2;
    cpy_r_r4 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r5 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r4)->_temp_counter;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_Str(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "new_label", 254, CPyStatic_emit___globals);
        goto CPyL3;
    }
    cpy_r_r7 = CPyStatics[6875]; /* '__LL' */
    cpy_r_r8 = CPyStr_Build(2, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "new_label", 254, CPyStatic_emit___globals);
        goto CPyL3;
    }
    return cpy_r_r8;
CPyL3: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_emit___Emitter___new_label(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":new_label", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___new_label(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "new_label", 252, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___get_module_group_prefix(PyObject *cpy_r_self, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_target_group_name;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_group_map;
    CPy_INCREF(cpy_r_r1);
    cpy_r_groups = cpy_r_r1;
    cpy_r_r2 = CPyDict_GetWithNone(cpy_r_groups, cpy_r_module_name);
    CPy_DECREF(cpy_r_groups);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 275, CPyStatic_emit___globals);
        goto CPyL16;
    }
    if (PyUnicode_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL9197;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL9197;
    CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 275, CPyStatic_emit___globals, "str or None", cpy_r_r2);
    goto CPyL16;
__LL9197: ;
    cpy_r_target_group_name = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_target_group_name != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL17;
    CPy_INCREF(cpy_r_target_group_name);
    if (likely(cpy_r_target_group_name != Py_None))
        cpy_r_r6 = cpy_r_target_group_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 275, CPyStatic_emit___globals, "str", cpy_r_target_group_name);
        goto CPyL18;
    }
    cpy_r_r7 = CPyStr_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL17;
    CPy_INCREF(cpy_r_target_group_name);
    if (likely(cpy_r_target_group_name != Py_None))
        cpy_r_r8 = cpy_r_target_group_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 276, CPyStatic_emit___globals, "str", cpy_r_target_group_name);
        goto CPyL18;
    }
    cpy_r_r9 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r10 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r9)->_group_name;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r8, cpy_r_r10, 3);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 276, CPyStatic_emit___globals);
        goto CPyL18;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 276, CPyStatic_emit___globals);
        goto CPyL18;
    }
    if (!cpy_r_r12) goto CPyL17;
    cpy_r_r13 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r14 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r13)->_group_deps;
    CPy_INCREF(cpy_r_r14);
    CPy_INCREF(cpy_r_target_group_name);
    if (likely(cpy_r_target_group_name != Py_None))
        cpy_r_r15 = cpy_r_target_group_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 277, CPyStatic_emit___globals, "str", cpy_r_target_group_name);
        goto CPyL19;
    }
    cpy_r_r16 = PySet_Add(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 277, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r18 = CPyStatics[6876]; /* 'exports_' */
    if (likely(cpy_r_target_group_name != Py_None))
        cpy_r_r19 = cpy_r_target_group_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 278, CPyStatic_emit___globals, "str", cpy_r_target_group_name);
        goto CPyL16;
    }
    cpy_r_r20 = CPyDef_namegen___exported_name(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 278, CPyStatic_emit___globals);
        goto CPyL16;
    }
    cpy_r_r21 = CPyStatics[224]; /* '.' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r18, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 278, CPyStatic_emit___globals);
        goto CPyL16;
    }
    return cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r23);
    return cpy_r_r23;
CPyL16: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL17: ;
    CPy_DECREF(cpy_r_target_group_name);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_target_group_name);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_target_group_name);
    CPy_DecRef(cpy_r_r14);
    goto CPyL16;
}

PyObject *CPyPy_emit___Emitter___get_module_group_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module_name", 0};
    static CPyArg_Parser parser = {"O:get_module_group_prefix", kwlist, 0};
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___get_module_group_prefix(arg_self, arg_module_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "get_module_group_prefix", 256, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___get_group_prefix(PyObject *cpy_r_self, PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = (PyObject *)CPyType_class_ir___ClassIR;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_obj)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    CPy_INCREF(cpy_r_obj);
    if (likely(Py_TYPE(cpy_r_obj) == CPyType_class_ir___ClassIR))
        cpy_r_r4 = cpy_r_obj;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_group_prefix", 285, CPyStatic_emit___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_obj);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r4)->_module_name;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL3: ;
    CPy_INCREF(cpy_r_obj);
    if (likely(Py_TYPE(cpy_r_obj) == CPyType_func_ir___FuncDecl))
        cpy_r_r7 = cpy_r_obj;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "get_group_prefix", 285, CPyStatic_emit___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_obj);
        goto CPyL7;
    }
    cpy_r_r8 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r7)->_module_name;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyDef_emit___Emitter___get_module_group_prefix(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "get_group_prefix", 285, CPyStatic_emit___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_emit___Emitter___get_group_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:get_group_prefix", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (Py_TYPE(obj_obj) == CPyType_class_ir___ClassIR)
        arg_obj = obj_obj;
    else {
        arg_obj = NULL;
    }
    if (arg_obj != NULL) goto __LL9198;
    if (Py_TYPE(obj_obj) == CPyType_func_ir___FuncDecl)
        arg_obj = obj_obj;
    else {
        arg_obj = NULL;
    }
    if (arg_obj != NULL) goto __LL9198;
    CPy_TypeError("union[mypyc.ir.class_ir.ClassIR, mypyc.ir.func_ir.FuncDecl]", obj_obj); 
    goto fail;
__LL9198: ;
    PyObject *retval = CPyDef_emit___Emitter___get_group_prefix(arg_self, arg_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "get_group_prefix", 282, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___static_name(PyObject *cpy_r_self, PyObject *cpy_r_id, PyObject *cpy_r_module, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_lib_prefix;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_star_maybe;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_suffix;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_prefix != NULL) goto CPyL22;
    cpy_r_r0 = CPyStatics[6877]; /* 'CPyStatic_' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_prefix = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_module != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL5;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r3 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "static_name", 287, CPyStatic_emit___globals, "str", cpy_r_module);
        goto CPyL23;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL6;
CPyL5: ;
    cpy_r_r5 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL9;
CPyL6: ;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r7 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "static_name", 297, CPyStatic_emit___globals, "str", cpy_r_module);
        goto CPyL23;
    }
    cpy_r_r8 = CPyDef_emit___Emitter___get_module_group_prefix(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "static_name", 297, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r6 = cpy_r_r8;
CPyL9: ;
    cpy_r_lib_prefix = cpy_r_r6;
    cpy_r_r9 = CPyStr_IsTrue(cpy_r_lib_prefix);
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyStatics[282]; /* '*' */
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r10;
    goto CPyL12;
CPyL11: ;
    cpy_r_r12 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r12);
    cpy_r_r11 = cpy_r_r12;
CPyL12: ;
    cpy_r_star_maybe = cpy_r_r11;
    cpy_r_r13 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_module != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL17;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r16 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "static_name", 287, CPyStatic_emit___globals, "str", cpy_r_module);
        goto CPyL24;
    }
    cpy_r_r17 = CPyStr_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r17) goto CPyL17;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r18 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "static_name", 301, CPyStatic_emit___globals, "str", cpy_r_module);
        goto CPyL24;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL18;
CPyL17: ;
    cpy_r_r20 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r20);
    cpy_r_r19 = cpy_r_r20;
CPyL18: ;
    cpy_r_r21 = CPyDef_namegen___NameGenerator___private_name(cpy_r_r13, cpy_r_r19, cpy_r_id);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "static_name", 301, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_suffix = cpy_r_r21;
    cpy_r_r22 = CPyStr_Build(4, cpy_r_star_maybe, cpy_r_lib_prefix, cpy_r_prefix, cpy_r_suffix);
    CPy_DECREF(cpy_r_star_maybe);
    CPy_DECREF(cpy_r_lib_prefix);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_suffix);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "static_name", 302, CPyStatic_emit___globals);
        goto CPyL21;
    }
    return cpy_r_r22;
CPyL21: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL22: ;
    CPy_INCREF(cpy_r_prefix);
    goto CPyL2;
CPyL23: ;
    CPy_DecRef(cpy_r_prefix);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_lib_prefix);
    CPy_DecRef(cpy_r_star_maybe);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_lib_prefix);
    CPy_DecRef(cpy_r_star_maybe);
    goto CPyL21;
}

PyObject *CPyPy_emit___Emitter___static_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "module", "prefix", 0};
    static CPyArg_Parser parser = {"OO|O:static_name", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_module;
    PyObject *obj_prefix = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_module, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL9199;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL9199;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL9199: ;
    PyObject *arg_prefix;
    if (obj_prefix == NULL) {
        arg_prefix = NULL;
    } else if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___static_name(arg_self, arg_id, arg_module, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "static_name", 287, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___type_struct_name(PyObject *cpy_r_self, PyObject *cpy_r_cl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_module_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[6878]; /* 'CPyType_' */
    cpy_r_r3 = CPyDef_emit___Emitter___static_name(cpy_r_self, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "type_struct_name", 305, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_emit___Emitter___type_struct_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cl", 0};
    static CPyArg_Parser parser = {"O:type_struct_name", kwlist, 0};
    PyObject *obj_cl;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cl)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___type_struct_name(arg_self, arg_cl);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "type_struct_name", 304, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___ctype(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->__ctype;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "ctype", "RType", "_ctype", 308, CPyStatic_emit___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_emit___Emitter___ctype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:ctype", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___ctype(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "ctype", 307, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___ctype_spaced(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_ctype;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyDef_emit___Emitter___ctype(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "ctype_spaced", 312, CPyStatic_emit___globals);
        goto CPyL9;
    }
    cpy_r_ctype = cpy_r_r0;
    cpy_r_r1 = CPyStr_GetItem(cpy_r_ctype, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "ctype_spaced", 313, CPyStatic_emit___globals);
        goto CPyL10;
    }
    cpy_r_r2 = CPyStatics[282]; /* '*' */
    cpy_r_r3 = PyUnicode_Compare(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 == -1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = PyErr_Occurred();
    cpy_r_r6 = cpy_r_r5 != NULL;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "ctype_spaced", 313, CPyStatic_emit___globals);
        goto CPyL10;
    }
CPyL5: ;
    cpy_r_r8 = cpy_r_r3 == 0;
    if (!cpy_r_r8) goto CPyL7;
    return cpy_r_ctype;
CPyL7: ;
    cpy_r_r9 = CPyStatics[295]; /* ' ' */
    cpy_r_r10 = PyUnicode_Concat(cpy_r_ctype, cpy_r_r9);
    CPy_DECREF(cpy_r_ctype);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "ctype_spaced", 316, CPyStatic_emit___globals);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DecRef(cpy_r_ctype);
    goto CPyL9;
}

PyObject *CPyPy_emit___Emitter___ctype_spaced(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:ctype_spaced", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___ctype_spaced(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "ctype_spaced", 310, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___c_undefined_value(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_unboxed;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r6 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_undefined_value", 322, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL16;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r6)->_c_undefined;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "c_undefined_value", "RPrimitive", "c_undefined", 322, CPyStatic_emit___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r12 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_undefined_value", 324, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL16;
    }
    cpy_r_r13 = CPyDef_emit___Emitter___tuple_undefined_value(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_undefined_value", 324, CPyStatic_emit___globals);
        goto CPyL16;
    }
    return cpy_r_r13;
CPyL10: ;
    if (0) goto CPyL15;
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_undefined_value", 325, CPyStatic_emit___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_rtype};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_undefined_value", 325, CPyStatic_emit___globals);
        goto CPyL16;
    }
    CPy_Raise(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_undefined_value", 325, CPyStatic_emit___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
}

PyObject *CPyPy_emit___Emitter___c_undefined_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:c_undefined_value", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___c_undefined_value(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "c_undefined_value", 318, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___c_error_value(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_error_value", 328, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_emit___Emitter___c_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:c_error_value", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___c_error_value(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "c_error_value", 327, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___native_function_name(PyObject *cpy_r_self, PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_func_ir___FuncDecl___cname(cpy_r_fn, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "native_function_name", 331, CPyStatic_emit___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "native_function_name", 331, CPyStatic_emit___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_emit___Emitter___native_function_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:native_function_name", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncDecl))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___native_function_name(arg_self, arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "native_function_name", 330, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___tuple_c_declaration(PyObject *cpy_r_self, PyObject *cpy_r_rtuple) {
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
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    cpy_r_r0 = CPyStatics[6881]; /* '#ifndef MYPYC_DECLARED_' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_struct_name;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "tuple_c_declaration", "RTuple", "struct_name", 335, CPyStatic_emit___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyStr_Build(2, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 335, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_r3 = CPyStatics[6882]; /* '#define MYPYC_DECLARED_' */
    cpy_r_r4 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_struct_name;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "tuple_c_declaration", "RTuple", "struct_name", 336, CPyStatic_emit___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStr_Build(2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 336, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r6 = CPyStatics[6883]; /* 'typedef struct ' */
    cpy_r_r7 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_struct_name;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "tuple_c_declaration", "RTuple", "struct_name", 337, CPyStatic_emit___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = CPyStatics[6884]; /* ' {' */
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 337, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r10 = PyList_New(3);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 334, CPyStatic_emit___globals);
        goto CPyL28;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r2;
    cpy_r_r13 = cpy_r_r12 + 8;
    *(PyObject * *)cpy_r_r13 = cpy_r_r5;
    cpy_r_r14 = cpy_r_r12 + 16;
    *(PyObject * *)cpy_r_r14 = cpy_r_r9;
    cpy_r_result = cpy_r_r10;
    cpy_r_r15 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    if (!cpy_r_r19) goto CPyL9;
    cpy_r_r20 = CPyStatics[6885]; /* 'int empty_struct_error_flag;' */
    cpy_r_r21 = PyList_Append(cpy_r_result, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 342, CPyStatic_emit___globals);
        goto CPyL29;
    } else
        goto CPyL19;
CPyL9: ;
    cpy_r_i = 0;
    cpy_r_r23 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = 0;
CPyL10: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL30;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 345, CPyStatic_emit___globals);
        goto CPyL31;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_rtypes___RType)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 345, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r29);
        goto CPyL31;
    }
    cpy_r_typ = cpy_r_r30;
    cpy_r_r31 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_self, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 346, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r32 = CPyStatics[1466]; /* 'f' */
    cpy_r_r33 = CPyTagged_Str(cpy_r_i);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 346, CPyStatic_emit___globals);
        goto CPyL32;
    }
    cpy_r_r34 = CPyStatics[6886]; /* ';' */
    cpy_r_r35 = CPyStr_Build(4, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 346, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r36 = PyList_Append(cpy_r_result, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 346, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r38;
    cpy_r_r39 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r39;
    goto CPyL10;
CPyL19: ;
    cpy_r_r40 = CPyStatics[6887]; /* '} ' */
    cpy_r_r41 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_struct_name;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "tuple_c_declaration", "RTuple", "struct_name", 348, CPyStatic_emit___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r41);
CPyL20: ;
    cpy_r_r42 = CPyStatics[6886]; /* ';' */
    cpy_r_r43 = CPyStr_Build(3, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 348, CPyStatic_emit___globals);
        goto CPyL29;
    }
    cpy_r_r44 = PyList_Append(cpy_r_result, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 348, CPyStatic_emit___globals);
        goto CPyL29;
    }
    cpy_r_r46 = CPyStatics[6888]; /* '#endif' */
    cpy_r_r47 = PyList_Append(cpy_r_result, cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 349, CPyStatic_emit___globals);
        goto CPyL29;
    }
    cpy_r_r49 = CPyStatics[163]; /* '' */
    cpy_r_r50 = PyList_Append(cpy_r_result, cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 350, CPyStatic_emit___globals);
        goto CPyL29;
    }
    return cpy_r_result;
CPyL25: ;
    cpy_r_r52 = NULL;
    return cpy_r_r52;
CPyL26: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL25;
CPyL30: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r23);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r23);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r31);
    goto CPyL25;
}

PyObject *CPyPy_emit___Emitter___tuple_c_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtuple", 0};
    static CPyArg_Parser parser = {"O:tuple_c_declaration", kwlist, 0};
    PyObject *obj_rtuple;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtuple)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtuple;
    if (likely(Py_TYPE(obj_rtuple) == CPyType_rtypes___RTuple))
        arg_rtuple = obj_rtuple;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_rtuple); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___tuple_c_declaration(arg_self, arg_rtuple);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_c_declaration", 333, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___bitmap_field(PyObject *cpy_r_self, CPyTagged cpy_r_index) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_n;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyTagged_FloorDivide(cpy_r_index, 64);
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "bitmap_field", 356, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_n = cpy_r_r0;
    cpy_r_r1 = cpy_r_n == 0;
    if (cpy_r_r1) {
        goto CPyL7;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r2 = CPyStatics[6889]; /* 'bitmap' */
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = CPyStatics[6889]; /* 'bitmap' */
    cpy_r_r4 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_r5 = CPyTagged_Str(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "bitmap_field", 359, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_r6 = CPyStr_Build(2, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "bitmap_field", 359, CPyStatic_emit___globals);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL2;
}

PyObject *CPyPy_emit___Emitter___bitmap_field(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"index", 0};
    static CPyArg_Parser parser = {"O:bitmap_field", kwlist, 0};
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___bitmap_field(arg_self, arg_index);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "bitmap_field", 354, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___attr_bitmap_expr(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_cl, CPyTagged cpy_r_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_cast;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatics[2381]; /* '(' */
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "attr_bitmap_expr", 363, CPyStatic_emit___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "attr_bitmap_expr", 363, CPyStatic_emit___globals);
        goto CPyL5;
    }
    cpy_r_cast = cpy_r_r4;
    cpy_r_r5 = CPyDef_emit___Emitter___bitmap_field(cpy_r_self, cpy_r_index);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "attr_bitmap_expr", 364, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_attr = cpy_r_r5;
    cpy_r_r6 = CPyStatics[2381]; /* '(' */
    cpy_r_r7 = CPyStatics[6891]; /* ')->' */
    cpy_r_r8 = CPyStr_Build(5, cpy_r_r6, cpy_r_cast, cpy_r_obj, cpy_r_r7, cpy_r_attr);
    CPy_DECREF(cpy_r_cast);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "attr_bitmap_expr", 365, CPyStatic_emit___globals);
        goto CPyL5;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_cast);
    goto CPyL5;
}

PyObject *CPyPy_emit___Emitter___attr_bitmap_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "cl", "index", 0};
    static CPyArg_Parser parser = {"OOO:attr_bitmap_expr", kwlist, 0};
    PyObject *obj_obj;
    PyObject *obj_cl;
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_cl, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___attr_bitmap_expr(arg_self, arg_obj, arg_cl, arg_index);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "attr_bitmap_expr", 361, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_attr_bitmap_set(PyObject *cpy_r_self, PyObject *cpy_r_value, PyObject *cpy_r_obj, PyObject *cpy_r_rtype, PyObject *cpy_r_cl, PyObject *cpy_r_attr) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_emit___Emitter____emit_attr_bitmap_update(cpy_r_self, cpy_r_value, cpy_r_obj, cpy_r_rtype, cpy_r_cl, cpy_r_attr, 0);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_attr_bitmap_set", 375, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_emit___Emitter___emit_attr_bitmap_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", "obj", "rtype", "cl", "attr", 0};
    static CPyArg_Parser parser = {"OOOOO:emit_attr_bitmap_set", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_obj;
    PyObject *obj_rtype;
    PyObject *obj_cl;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_obj, &obj_rtype, &obj_cl, &obj_attr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_attr_bitmap_set(arg_self, arg_value, arg_obj, arg_rtype, arg_cl, arg_attr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_attr_bitmap_set", 367, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_attr_bitmap_clear(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_rtype, PyObject *cpy_r_cl, PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = CPyDef_emit___Emitter____emit_attr_bitmap_update(cpy_r_self, cpy_r_r0, cpy_r_obj, cpy_r_rtype, cpy_r_cl, cpy_r_attr, 1);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_attr_bitmap_clear", 382, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_emit___Emitter___emit_attr_bitmap_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "rtype", "cl", "attr", 0};
    static CPyArg_Parser parser = {"OOOO:emit_attr_bitmap_clear", kwlist, 0};
    PyObject *obj_obj;
    PyObject *obj_rtype;
    PyObject *obj_cl;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_rtype, &obj_cl, &obj_attr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_attr_bitmap_clear(arg_self, arg_obj, arg_rtype, arg_cl, arg_attr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_attr_bitmap_clear", 377, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter____emit_attr_bitmap_update(PyObject *cpy_r_self, PyObject *cpy_r_value, PyObject *cpy_r_obj, PyObject *cpy_r_rtype, PyObject *cpy_r_cl, PyObject *cpy_r_attr, char cpy_r_clear) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_check;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_index;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_mask;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_bitmap;
    PyObject *cpy_r_r13;
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
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStr_IsTrue(cpy_r_value);
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyStatics[860]; /* '==' */
    cpy_r_r2 = CPyDef_emit___Emitter___error_value_check(cpy_r_self, cpy_r_rtype, cpy_r_value, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 388, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_check = cpy_r_r2;
    cpy_r_r3 = CPyStatics[6892]; /* 'if (unlikely(' */
    cpy_r_r4 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r5 = CPyStr_Build(3, cpy_r_r3, cpy_r_check, cpy_r_r4);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 389, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 389, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL4: ;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", "ClassIR", "bitmap_attrs", 390, CPyStatic_emit___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = CPyList_Index(cpy_r_r8, cpy_r_attr);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 390, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_index = cpy_r_r9;
    cpy_r_r10 = CPyTagged_And(cpy_r_index, 62);
    cpy_r_r11 = CPyTagged_Lshift(2, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 391, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_mask = cpy_r_r11;
    cpy_r_r12 = CPyDef_emit___Emitter___attr_bitmap_expr(cpy_r_self, cpy_r_obj, cpy_r_cl, cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 392, CPyStatic_emit___globals);
        goto CPyL20;
    }
    cpy_r_bitmap = cpy_r_r12;
    if (!cpy_r_clear) goto CPyL12;
    cpy_r_r13 = CPyStatics[6894]; /* ' &= ~' */
    cpy_r_r14 = CPyTagged_Str(cpy_r_mask);
    CPyTagged_DECREF(cpy_r_mask);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 394, CPyStatic_emit___globals);
        goto CPyL21;
    }
    cpy_r_r15 = CPyStatics[6886]; /* ';' */
    cpy_r_r16 = CPyStr_Build(4, cpy_r_bitmap, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_bitmap);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 394, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 394, CPyStatic_emit___globals);
        goto CPyL18;
    } else
        goto CPyL15;
CPyL12: ;
    cpy_r_r19 = CPyStatics[6895]; /* ' |= ' */
    cpy_r_r20 = CPyTagged_Str(cpy_r_mask);
    CPyTagged_DECREF(cpy_r_mask);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 396, CPyStatic_emit___globals);
        goto CPyL21;
    }
    cpy_r_r21 = CPyStatics[6886]; /* ';' */
    cpy_r_r22 = CPyStr_Build(4, cpy_r_bitmap, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_bitmap);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 396, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 396, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL15: ;
    cpy_r_r25 = CPyStr_IsTrue(cpy_r_value);
    if (!cpy_r_r25) goto CPyL17;
    cpy_r_r26 = CPyStatics[1406]; /* '}' */
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 398, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL18;
CPyL20: ;
    CPyTagged_DecRef(cpy_r_mask);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_bitmap);
    goto CPyL18;
}

PyObject *CPyPy_emit___Emitter____emit_attr_bitmap_update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", "obj", "rtype", "cl", "attr", "clear", 0};
    static CPyArg_Parser parser = {"OOOOOO:_emit_attr_bitmap_update", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_obj;
    PyObject *obj_rtype;
    PyObject *obj_cl;
    PyObject *obj_attr;
    PyObject *obj_clear;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_obj, &obj_rtype, &obj_cl, &obj_attr, &obj_clear)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char arg_clear;
    if (unlikely(!PyBool_Check(obj_clear))) {
        CPy_TypeError("bool", obj_clear); goto fail;
    } else
        arg_clear = obj_clear == Py_True;
    char retval = CPyDef_emit___Emitter____emit_attr_bitmap_update(arg_self, arg_value, arg_obj, arg_rtype, arg_cl, arg_attr, arg_clear);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_attr_bitmap_update", 384, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___use_vectorcall(PyObject *cpy_r_self) {
    tuple_T2II cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_capi_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = CPyDef_mypyc___common___use_vectorcall(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0.f0);
    CPyTagged_DECREF(cpy_r_r0.f1);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "use_vectorcall", 401, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_emit___Emitter___use_vectorcall(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":use_vectorcall", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___use_vectorcall(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "use_vectorcall", 400, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_undefined_attr_check(PyObject *cpy_r_self, PyObject *cpy_r_rtype, PyObject *cpy_r_attr_expr, PyObject *cpy_r_compare, PyObject *cpy_r_obj, PyObject *cpy_r_attr, PyObject *cpy_r_cl, char cpy_r_unlikely) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_check;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_index;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_bit;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_obj_expr;
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
    char cpy_r_r25;
    char cpy_r_r26;
    if (cpy_r_unlikely != 2) goto CPyL2;
    cpy_r_unlikely = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_emit___Emitter___error_value_check(cpy_r_self, cpy_r_rtype, cpy_r_attr_expr, cpy_r_compare);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 414, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_check = cpy_r_r0;
    if (!cpy_r_unlikely) goto CPyL6;
    cpy_r_r1 = CPyStatics[6896]; /* 'unlikely(' */
    cpy_r_r2 = CPyStatics[72]; /* ')' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_check, cpy_r_r2);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 416, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_check = cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_error_overlap;
    if (!cpy_r_r4) goto CPyL16;
CPyL7: ;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_bitmap_attrs;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "emit_undefined_attr_check", "ClassIR", "bitmap_attrs", 418, CPyStatic_emit___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r5);
CPyL8: ;
    cpy_r_r6 = CPyList_Index(cpy_r_r5, cpy_r_attr);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 418, CPyStatic_emit___globals);
        goto CPyL20;
    }
    cpy_r_index = cpy_r_r6;
    cpy_r_r7 = CPyTagged_And(cpy_r_index, 62);
    cpy_r_r8 = CPyTagged_Lshift(2, cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 419, CPyStatic_emit___globals);
        goto CPyL21;
    }
    cpy_r_bit = cpy_r_r8;
    cpy_r_r9 = CPyDef_emit___Emitter___bitmap_field(cpy_r_self, cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 420, CPyStatic_emit___globals);
        goto CPyL22;
    }
    cpy_r_attr = cpy_r_r9;
    cpy_r_r10 = CPyStatics[2381]; /* '(' */
    cpy_r_r11 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_names;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_cl, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 421, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r13 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r14 = CPyStr_Build(4, cpy_r_r10, cpy_r_r12, cpy_r_r13, cpy_r_obj);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 421, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_obj_expr = cpy_r_r14;
    cpy_r_r15 = CPyStatics[6897]; /* ' && !((' */
    cpy_r_r16 = CPyStatics[6891]; /* ')->' */
    cpy_r_r17 = CPyStatics[6898]; /* ' & ' */
    cpy_r_r18 = CPyTagged_Str(cpy_r_bit);
    CPyTagged_DECREF(cpy_r_bit);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 422, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r19 = CPyStatics[72]; /* ')' */
    cpy_r_r20 = CPyStr_Build(8, cpy_r_check, cpy_r_r15, cpy_r_obj_expr, cpy_r_r16, cpy_r_attr, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_check);
    CPy_DECREF(cpy_r_obj_expr);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 422, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_check = cpy_r_r20;
CPyL16: ;
    cpy_r_r21 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r22 = CPyStatics[6900]; /* ') {' */
    cpy_r_r23 = CPyStr_Build(3, cpy_r_r21, cpy_r_check, cpy_r_r22);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 423, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 423, CPyStatic_emit___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL20: ;
    CPy_DecRef(cpy_r_check);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_check);
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_check);
    CPyTagged_DecRef(cpy_r_bit);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_check);
    CPyTagged_DecRef(cpy_r_bit);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_check);
    CPy_DecRef(cpy_r_obj_expr);
    goto CPyL19;
}

PyObject *CPyPy_emit___Emitter___emit_undefined_attr_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", "attr_expr", "compare", "obj", "attr", "cl", "unlikely", 0};
    static CPyArg_Parser parser = {"OOOOOO|$O:emit_undefined_attr_check", kwlist, 0};
    PyObject *obj_rtype;
    PyObject *obj_attr_expr;
    PyObject *obj_compare;
    PyObject *obj_obj;
    PyObject *obj_attr;
    PyObject *obj_cl;
    PyObject *obj_unlikely = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_rtype, &obj_attr_expr, &obj_compare, &obj_obj, &obj_attr, &obj_cl, &obj_unlikely)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_attr_expr;
    if (likely(PyUnicode_Check(obj_attr_expr)))
        arg_attr_expr = obj_attr_expr;
    else {
        CPy_TypeError("str", obj_attr_expr); 
        goto fail;
    }
    PyObject *arg_compare;
    if (likely(PyUnicode_Check(obj_compare)))
        arg_compare = obj_compare;
    else {
        CPy_TypeError("str", obj_compare); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    char arg_unlikely;
    if (obj_unlikely == NULL) {
        arg_unlikely = 2;
    } else if (unlikely(!PyBool_Check(obj_unlikely))) {
        CPy_TypeError("bool", obj_unlikely); goto fail;
    } else
        arg_unlikely = obj_unlikely == Py_True;
    char retval = CPyDef_emit___Emitter___emit_undefined_attr_check(arg_self, arg_rtype, arg_attr_expr, arg_compare, arg_obj, arg_attr, arg_cl, arg_unlikely);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_undefined_attr_check", 403, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___error_value_check(PyObject *cpy_r_self, PyObject *cpy_r_rtype, PyObject *cpy_r_value, PyObject *cpy_r_compare) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r4 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "error_value_check", 428, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL8;
    }
    cpy_r_r5 = CPyStatics[6901]; /* 'c_error_value' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_self, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "error_value_check", 428, CPyStatic_emit___globals);
        goto CPyL9;
    }
    cpy_r_r7 = CPyDef_emit___Emitter___tuple_undefined_check_cond(cpy_r_self, cpy_r_r4, cpy_r_value, cpy_r_r6, cpy_r_compare, 0);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "error_value_check", 427, CPyStatic_emit___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = CPyStatics[295]; /* ' ' */
    cpy_r_r9 = CPyStatics[295]; /* ' ' */
    cpy_r_r10 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "error_value_check", 431, CPyStatic_emit___globals);
        goto CPyL8;
    }
    cpy_r_r11 = CPyStr_Build(5, cpy_r_value, cpy_r_r8, cpy_r_compare, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "error_value_check", 431, CPyStatic_emit___globals);
        goto CPyL8;
    }
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy_emit___Emitter___error_value_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", "value", "compare", 0};
    static CPyArg_Parser parser = {"OOO:error_value_check", kwlist, 0};
    PyObject *obj_rtype;
    PyObject *obj_value;
    PyObject *obj_compare;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_rtype, &obj_value, &obj_compare)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *arg_compare;
    if (likely(PyUnicode_Check(obj_compare)))
        arg_compare = obj_compare;
    else {
        CPy_TypeError("str", obj_compare); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___error_value_check(arg_self, arg_rtype, arg_value, arg_compare);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "error_value_check", 425, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___tuple_undefined_check_cond(PyObject *cpy_r_self, PyObject *cpy_r_rtuple, PyObject *cpy_r_tuple_expr_in_c, PyObject *cpy_r_c_type_compare_val, PyObject *cpy_r_compare, char cpy_r_check_exception) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_typ;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_check;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = NULL;
    cpy_r_item_type = cpy_r_r0;
    if (cpy_r_check_exception != 2) goto CPyL2;
    cpy_r_check_exception = 1;
CPyL2: ;
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 == 0;
    if (cpy_r_r5) {
        goto CPyL58;
    } else
        goto CPyL10;
CPyL3: ;
    cpy_r_r6 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r6 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 445, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL6: ;
    PyObject *cpy_r_r8[1] = {cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_c_type_compare_val, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 445, CPyStatic_emit___globals);
        goto CPyL57;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 445, CPyStatic_emit___globals, "str", cpy_r_r10);
        goto CPyL57;
    }
    cpy_r_r12 = CPyStatics[6902]; /* '.empty_struct_error_flag ' */
    cpy_r_r13 = CPyStatics[295]; /* ' ' */
    cpy_r_r14 = CPyStr_Build(5, cpy_r_tuple_expr_in_c, cpy_r_r12, cpy_r_compare, cpy_r_r13, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 444, CPyStatic_emit___globals);
        goto CPyL57;
    }
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_error_overlap;
    if (cpy_r_r15) {
        goto CPyL59;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_i = 0;
    cpy_r_r16 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_r16, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 449, CPyStatic_emit___globals);
        goto CPyL60;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_rtypes___RType)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 449, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r17);
        goto CPyL60;
    }
    cpy_r_item_type = cpy_r_r18;
    goto CPyL26;
CPyL14: ;
    cpy_r_r19 = 0;
    cpy_r_i = 0;
    cpy_r_r20 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = 0;
CPyL15: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL61;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 451, CPyStatic_emit___globals);
        goto CPyL62;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_rtypes___RType)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 451, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r26);
        goto CPyL62;
    }
    cpy_r_typ = cpy_r_r27;
    cpy_r_r28 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_error_overlap;
    CPy_DECREF(cpy_r_typ);
    if (cpy_r_r28) {
        goto CPyL63;
    } else
        goto CPyL64;
CPyL19: ;
    cpy_r_r29 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_types;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPySequenceTuple_GetItem(cpy_r_r29, cpy_r_i);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 453, CPyStatic_emit___globals);
        goto CPyL60;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_rtypes___RType)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 453, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r30);
        goto CPyL60;
    }
    cpy_r_item_type = cpy_r_r31;
    goto CPyL26;
CPyL22: ;
    cpy_r_r32 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r32;
    cpy_r_i = cpy_r_r32;
    cpy_r_r33 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r33;
    goto CPyL15;
CPyL23: ;
    if (0) {
        goto CPyL26;
    } else
        goto CPyL65;
CPyL24: ;
    PyErr_SetString(PyExc_AssertionError, "not expecting tuple with error overlap");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 456, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r35 = (PyObject *)CPyType_rtypes___RTuple;
    if (cpy_r_item_type == NULL) {
        goto CPyL66;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"item_type\" referenced before assignment");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 457, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_item_type)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    if (cpy_r_item_type == NULL) {
        goto CPyL67;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"item_type\" referenced before assignment");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", -1, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r40 = cpy_r_r38 == cpy_r_r35;
    if (!cpy_r_r40) goto CPyL42;
    if (cpy_r_item_type == NULL) {
        goto CPyL68;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"item_type\" referenced before assignment");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 459, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_item_type) == CPyType_rtypes___RTuple))
        cpy_r_r42 = cpy_r_item_type;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 459, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_item_type);
        goto CPyL60;
    }
    cpy_r_r43 = CPyStatics[6903]; /* '.f' */
    cpy_r_r44 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 459, CPyStatic_emit___globals);
        goto CPyL69;
    }
    cpy_r_r45 = CPyStr_Build(2, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 459, CPyStatic_emit___globals);
        goto CPyL69;
    }
    cpy_r_r46 = PyUnicode_Concat(cpy_r_tuple_expr_in_c, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 459, CPyStatic_emit___globals);
        goto CPyL69;
    }
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_emit___Emitter___tuple_undefined_check_cond(cpy_r_self, cpy_r_r42, cpy_r_r46, cpy_r_c_type_compare_val, cpy_r_compare, cpy_r_r47);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 458, CPyStatic_emit___globals);
        goto CPyL57;
    }
    return cpy_r_r48;
CPyL42: ;
    cpy_r_r49 = CPyStatics[6903]; /* '.f' */
    cpy_r_r50 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 462, CPyStatic_emit___globals);
        goto CPyL70;
    }
    cpy_r_r51 = CPyStatics[295]; /* ' ' */
    cpy_r_r52 = CPyStatics[295]; /* ' ' */
    if (cpy_r_item_type == NULL) {
        goto CPyL71;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"item_type\" referenced before assignment");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", -1, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL46: ;
    PyObject *cpy_r_r54[1] = {cpy_r_item_type};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_c_type_compare_val, cpy_r_r55, 1, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 462, CPyStatic_emit___globals);
        goto CPyL72;
    }
    if (cpy_r_item_type == NULL) {
        goto CPyL73;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"item_type\" referenced before assignment");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", -1, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL50: ;
    CPy_XDECREF(cpy_r_item_type);
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r58 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 462, CPyStatic_emit___globals, "str", cpy_r_r56);
        goto CPyL74;
    }
    cpy_r_r59 = CPyStr_Build(7, cpy_r_tuple_expr_in_c, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_compare, cpy_r_r52, cpy_r_r58);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 462, CPyStatic_emit___globals);
        goto CPyL57;
    }
    cpy_r_check = cpy_r_r59;
    cpy_r_r60 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_error_overlap;
    if (!cpy_r_r60) goto CPyL56;
CPyL53: ;
    if (!cpy_r_check_exception) goto CPyL56;
    cpy_r_r61 = CPyStatics[6904]; /* ' && PyErr_Occurred()' */
    cpy_r_r62 = CPyStr_Append(cpy_r_check, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 464, CPyStatic_emit___globals);
        goto CPyL57;
    }
    cpy_r_check = cpy_r_r62;
CPyL56: ;
    return cpy_r_check;
CPyL57: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL58: ;
    CPy_XDECREF(cpy_r_item_type);
    goto CPyL3;
CPyL59: ;
    CPy_XDECREF(cpy_r_item_type);
    goto CPyL11;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL57;
CPyL61: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL23;
CPyL62: ;
    CPy_XDecRef(cpy_r_item_type);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r20);
    goto CPyL57;
CPyL63: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL22;
CPyL64: ;
    CPy_XDECREF(cpy_r_item_type);
    CPy_DECREF(cpy_r_r20);
    goto CPyL19;
CPyL65: ;
    CPy_XDECREF(cpy_r_item_type);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL24;
CPyL66: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL27;
CPyL67: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL30;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL34;
CPyL69: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL57;
CPyL70: ;
    CPy_XDecRef(cpy_r_item_type);
    goto CPyL57;
CPyL71: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL44;
CPyL72: ;
    CPy_XDecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_r50);
    goto CPyL57;
CPyL73: ;
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r56);
    goto CPyL48;
CPyL74: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL57;
}

PyObject *CPyPy_emit___Emitter___tuple_undefined_check_cond(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtuple", "tuple_expr_in_c", "c_type_compare_val", "compare", "check_exception", 0};
    static CPyArg_Parser parser = {"OOOO|$O:tuple_undefined_check_cond", kwlist, 0};
    PyObject *obj_rtuple;
    PyObject *obj_tuple_expr_in_c;
    PyObject *obj_c_type_compare_val;
    PyObject *obj_compare;
    PyObject *obj_check_exception = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_rtuple, &obj_tuple_expr_in_c, &obj_c_type_compare_val, &obj_compare, &obj_check_exception)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtuple;
    if (likely(Py_TYPE(obj_rtuple) == CPyType_rtypes___RTuple))
        arg_rtuple = obj_rtuple;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_rtuple); 
        goto fail;
    }
    PyObject *arg_tuple_expr_in_c;
    if (likely(PyUnicode_Check(obj_tuple_expr_in_c)))
        arg_tuple_expr_in_c = obj_tuple_expr_in_c;
    else {
        CPy_TypeError("str", obj_tuple_expr_in_c); 
        goto fail;
    }
    PyObject *arg_c_type_compare_val = obj_c_type_compare_val;
    PyObject *arg_compare;
    if (likely(PyUnicode_Check(obj_compare)))
        arg_compare = obj_compare;
    else {
        CPy_TypeError("str", obj_compare); 
        goto fail;
    }
    char arg_check_exception;
    if (obj_check_exception == NULL) {
        arg_check_exception = 2;
    } else if (unlikely(!PyBool_Check(obj_check_exception))) {
        CPy_TypeError("bool", obj_check_exception); goto fail;
    } else
        arg_check_exception = obj_check_exception == Py_True;
    PyObject *retval = CPyDef_emit___Emitter___tuple_undefined_check_cond(arg_self, arg_rtuple, arg_tuple_expr_in_c, arg_c_type_compare_val, arg_compare, arg_check_exception);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_check_cond", 433, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___tuple_undefined_value(PyObject *cpy_r_self, PyObject *cpy_r_rtuple) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2381]; /* '(' */
    cpy_r_r1 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_rtuple)->_struct_name;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "tuple_undefined_value", "RTuple", "struct_name", 469, CPyStatic_emit___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyStatics[6905]; /* ') ' */
    cpy_r_r3 = CPyDef_emit___Emitter___c_initializer_undefined_value(cpy_r_self, cpy_r_rtuple);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_value", 469, CPyStatic_emit___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyStr_Build(4, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_value", 469, CPyStatic_emit___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_emit___Emitter___tuple_undefined_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtuple", 0};
    static CPyArg_Parser parser = {"O:tuple_undefined_value", kwlist, 0};
    PyObject *obj_rtuple;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtuple)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtuple;
    if (likely(Py_TYPE(obj_rtuple) == CPyType_rtypes___RTuple))
        arg_rtuple = obj_rtuple;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_rtuple); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___tuple_undefined_value(arg_self, arg_rtuple);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "tuple_undefined_value", 467, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___c_initializer_undefined_value(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r4 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 474, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL24;
    }
    cpy_r_r5 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r4)->_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 474, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL10;
    cpy_r_r9 = CPyStatics[6906]; /* '{ ' */
    cpy_r_r10 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r10 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 477, CPyStatic_emit___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r12 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r10)->_c_undefined;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "c_initializer_undefined_value", "RPrimitive", "c_undefined", 477, CPyStatic_emit___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = CPyStatics[6907]; /* ' }' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r9, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 477, CPyStatic_emit___globals);
        goto CPyL24;
    }
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = CPyStatics[71]; /* ', ' */
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r16 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL24;
    }
    cpy_r_r17 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r16)->_types;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = PyList_New(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_r21 = 0;
CPyL13: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL26;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_r17, cpy_r_r21);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_rtypes___RType)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r26);
        goto CPyL27;
    }
    cpy_r_t = cpy_r_r27;
    cpy_r_r28 = CPyDef_emit___Emitter___c_initializer_undefined_value(cpy_r_self, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r29 = CPyList_SetItemUnsafe(cpy_r_r20, cpy_r_r21, cpy_r_r28);
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r30 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r30;
    goto CPyL13;
CPyL19: ;
    cpy_r_r31 = PyUnicode_Join(cpy_r_r15, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 478, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_items = cpy_r_r31;
    cpy_r_r32 = CPyStatics[6906]; /* '{ ' */
    cpy_r_r33 = CPyStatics[6907]; /* ' }' */
    cpy_r_r34 = CPyStr_Build(3, cpy_r_r32, cpy_r_items, cpy_r_r33);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 479, CPyStatic_emit___globals);
        goto CPyL24;
    }
    return cpy_r_r34;
CPyL22: ;
    cpy_r_r35 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 481, CPyStatic_emit___globals);
        goto CPyL24;
    }
    return cpy_r_r35;
CPyL24: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL25: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL19;
CPyL27: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    goto CPyL24;
}

PyObject *CPyPy_emit___Emitter___c_initializer_undefined_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:c_initializer_undefined_value", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___c_initializer_undefined_value(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "c_initializer_undefined_value", 471, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___declare_tuple_struct(PyObject *cpy_r_self, PyObject *cpy_r_tuple_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_dependencies;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_tuple_type)->_struct_name;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "declare_tuple_struct", "RTuple", "struct_name", 486, CPyStatic_emit___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r1)->_declarations;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyDict_Contains(cpy_r_r2, cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 486, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ^ 1;
    if (!cpy_r_r6) goto CPyL17;
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 487, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_dependencies = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_tuple_type)->_types;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL5: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 488, CPyStatic_emit___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_rtypes___RType)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 488, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r14);
        goto CPyL20;
    }
    cpy_r_typ = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r20 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 491, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL22;
    }
    cpy_r_r21 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r20)->_struct_name;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "declare_tuple_struct", "RTuple", "struct_name", 491, CPyStatic_emit___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r21);
CPyL11: ;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r22 = PySet_Add(cpy_r_dependencies, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 491, CPyStatic_emit___globals);
        goto CPyL20;
    }
CPyL12: ;
    cpy_r_r24 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r24;
    goto CPyL5;
CPyL13: ;
    cpy_r_r25 = CPyDef_emit___Emitter___tuple_c_declaration(cpy_r_self, cpy_r_tuple_type);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 494, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_emit___HeaderDeclaration(cpy_r_r25, cpy_r_r26, cpy_r_dependencies, 1, cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_dependencies);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 493, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r29 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_self)->_context;
    cpy_r_r30 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r29)->_declarations;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_tuple_type)->_struct_name;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "declare_tuple_struct", "RTuple", "struct_name", 493, CPyStatic_emit___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r31);
CPyL16: ;
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 493, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL19: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_dependencies);
    CPy_DecRef(cpy_r_r8);
    goto CPyL18;
CPyL21: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL12;
CPyL22: ;
    CPy_DecRef(cpy_r_dependencies);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_typ);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_dependencies);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    goto CPyL18;
}

PyObject *CPyPy_emit___Emitter___declare_tuple_struct(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tuple_type", 0};
    static CPyArg_Parser parser = {"O:declare_tuple_struct", kwlist, 0};
    PyObject *obj_tuple_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tuple_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_tuple_type;
    if (likely(Py_TYPE(obj_tuple_type) == CPyType_rtypes___RTuple))
        arg_tuple_type = obj_tuple_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_tuple_type); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___declare_tuple_struct(arg_self, arg_tuple_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "declare_tuple_struct", 485, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_inc_ref(PyObject *cpy_r_self, PyObject *cpy_r_dest, PyObject *cpy_r_rtype, char cpy_r_rare) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    if (cpy_r_rare != 2) goto CPyL2;
    cpy_r_rare = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_rtypes___is_int_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 505, CPyStatic_emit___globals);
        goto CPyL23;
    }
    if (!cpy_r_r0) goto CPyL9;
    if (!cpy_r_rare) goto CPyL7;
    cpy_r_r1 = CPyStatics[6908]; /* 'CPyTagged_IncRef(' */
    cpy_r_r2 = CPyStatics[6872]; /* ');' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_dest, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 507, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 507, CPyStatic_emit___globals);
        goto CPyL23;
    } else
        goto CPyL22;
CPyL7: ;
    cpy_r_r6 = CPyStatics[6909]; /* 'CPyTagged_INCREF(' */
    cpy_r_r7 = CPyStatics[6872]; /* ');' */
    cpy_r_r8 = CPyStr_Build(3, cpy_r_r6, cpy_r_dest, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 509, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 509, CPyStatic_emit___globals);
        goto CPyL23;
    } else
        goto CPyL22;
CPyL9: ;
    cpy_r_r11 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL19;
    cpy_r_r15 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r16 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 511, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL24;
    }
    cpy_r_r17 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r16)->_types;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 0;
CPyL12: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL25;
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 511, CPyStatic_emit___globals);
        goto CPyL26;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_rtypes___RType)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 511, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r23);
        goto CPyL26;
    }
    cpy_r_item_type = cpy_r_r24;
    cpy_r_r25 = CPyStatics[6903]; /* '.f' */
    cpy_r_r26 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 512, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r27 = CPyStr_Build(3, cpy_r_dest, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 512, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_self, cpy_r_r27, cpy_r_item_type, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 512, CPyStatic_emit___globals);
        goto CPyL28;
    }
    cpy_r_r30 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r30;
    cpy_r_i = cpy_r_r30;
    cpy_r_r31 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r31;
    goto CPyL12;
CPyL19: ;
    cpy_r_r32 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_unboxed;
    if (cpy_r_r32) goto CPyL22;
CPyL20: ;
    cpy_r_r33 = CPyStatics[6910]; /* 'CPy_INCREF(' */
    cpy_r_r34 = CPyStatics[6872]; /* ');' */
    cpy_r_r35 = CPyStr_Build(3, cpy_r_r33, cpy_r_dest, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 515, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 515, CPyStatic_emit___globals);
        goto CPyL23;
    }
CPyL22: ;
    return 1;
CPyL23: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL24: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL23;
CPyL25: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r17);
    goto CPyL22;
CPyL26: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
}

PyObject *CPyPy_emit___Emitter___emit_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", "rtype", "rare", 0};
    static CPyArg_Parser parser = {"OO|$O:emit_inc_ref", kwlist, 0};
    PyObject *obj_dest;
    PyObject *obj_rtype;
    PyObject *obj_rare = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_dest, &obj_rtype, &obj_rare)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char arg_rare;
    if (obj_rare == NULL) {
        arg_rare = 2;
    } else if (unlikely(!PyBool_Check(obj_rare))) {
        CPy_TypeError("bool", obj_rare); goto fail;
    } else
        arg_rare = obj_rare == Py_True;
    char retval = CPyDef_emit___Emitter___emit_inc_ref(arg_self, arg_dest, arg_rtype, arg_rare);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_inc_ref", 497, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_dec_ref(PyObject *cpy_r_self, PyObject *cpy_r_dest, PyObject *cpy_r_rtype, char cpy_r_is_xdec, char cpy_r_rare) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_x;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    if (cpy_r_is_xdec != 2) goto CPyL2;
    cpy_r_is_xdec = 0;
CPyL2: ;
    if (cpy_r_rare != 2) goto CPyL4;
    cpy_r_rare = 0;
CPyL4: ;
    if (!cpy_r_is_xdec) goto CPyL6;
    cpy_r_r0 = CPyStatics[1463]; /* 'X' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0;
    goto CPyL7;
CPyL6: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_r1 = cpy_r_r2;
CPyL7: ;
    cpy_r_x = cpy_r_r1;
    cpy_r_r3 = CPyDef_rtypes___is_int_rprimitive(cpy_r_rtype);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 529, CPyStatic_emit___globals);
        goto CPyL32;
    }
    if (!cpy_r_r3) goto CPyL14;
    if (!cpy_r_rare) goto CPyL12;
    cpy_r_r4 = CPyStatics[6911]; /* 'CPyTagged_' */
    cpy_r_r5 = CPyStatics[6912]; /* 'DecRef(' */
    cpy_r_r6 = CPyStatics[6872]; /* ');' */
    cpy_r_r7 = CPyStr_Build(5, cpy_r_r4, cpy_r_x, cpy_r_r5, cpy_r_dest, cpy_r_r6);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 531, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 531, CPyStatic_emit___globals);
        goto CPyL31;
    } else
        goto CPyL30;
CPyL12: ;
    cpy_r_r10 = CPyStatics[6911]; /* 'CPyTagged_' */
    cpy_r_r11 = CPyStatics[6913]; /* 'DECREF(' */
    cpy_r_r12 = CPyStatics[6872]; /* ');' */
    cpy_r_r13 = CPyStr_Build(5, cpy_r_r10, cpy_r_x, cpy_r_r11, cpy_r_dest, cpy_r_r12);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 534, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 534, CPyStatic_emit___globals);
        goto CPyL31;
    } else
        goto CPyL30;
CPyL14: ;
    cpy_r_r16 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (cpy_r_r19) {
        goto CPyL33;
    } else
        goto CPyL24;
CPyL15: ;
    cpy_r_r20 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r21 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 536, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL34;
    }
    cpy_r_r22 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r21)->_types;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = 0;
CPyL17: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL35;
    cpy_r_r28 = CPySequenceTuple_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 536, CPyStatic_emit___globals);
        goto CPyL36;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_rtypes___RType)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 536, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r28);
        goto CPyL36;
    }
    cpy_r_item_type = cpy_r_r29;
    cpy_r_r30 = CPyStatics[6903]; /* '.f' */
    cpy_r_r31 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 537, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r32 = CPyStr_Build(3, cpy_r_dest, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 537, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r33 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_self, cpy_r_r32, cpy_r_item_type, cpy_r_is_xdec, cpy_r_rare);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 537, CPyStatic_emit___globals);
        goto CPyL38;
    }
    cpy_r_r34 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r34;
    cpy_r_i = cpy_r_r34;
    cpy_r_r35 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r35;
    goto CPyL17;
CPyL24: ;
    cpy_r_r36 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_unboxed;
    if (cpy_r_r36) goto CPyL39;
CPyL25: ;
    if (!cpy_r_rare) goto CPyL28;
    cpy_r_r37 = CPyStatics[6914]; /* 'CPy_' */
    cpy_r_r38 = CPyStatics[6912]; /* 'DecRef(' */
    cpy_r_r39 = CPyStatics[6872]; /* ');' */
    cpy_r_r40 = CPyStr_Build(5, cpy_r_r37, cpy_r_x, cpy_r_r38, cpy_r_dest, cpy_r_r39);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 540, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 540, CPyStatic_emit___globals);
        goto CPyL31;
    } else
        goto CPyL30;
CPyL28: ;
    cpy_r_r43 = CPyStatics[6914]; /* 'CPy_' */
    cpy_r_r44 = CPyStatics[6913]; /* 'DECREF(' */
    cpy_r_r45 = CPyStatics[6872]; /* ');' */
    cpy_r_r46 = CPyStr_Build(5, cpy_r_r43, cpy_r_x, cpy_r_r44, cpy_r_dest, cpy_r_r45);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 543, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 543, CPyStatic_emit___globals);
        goto CPyL31;
    }
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL32: ;
    CPy_DecRef(cpy_r_x);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL15;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL31;
CPyL35: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r22);
    goto CPyL30;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r22);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL31;
CPyL39: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL30;
}

PyObject *CPyPy_emit___Emitter___emit_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", "rtype", "is_xdec", "rare", 0};
    static CPyArg_Parser parser = {"OO|$OO:emit_dec_ref", kwlist, 0};
    PyObject *obj_dest;
    PyObject *obj_rtype;
    PyObject *obj_is_xdec = NULL;
    PyObject *obj_rare = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_dest, &obj_rtype, &obj_is_xdec, &obj_rare)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char arg_is_xdec;
    if (obj_is_xdec == NULL) {
        arg_is_xdec = 2;
    } else if (unlikely(!PyBool_Check(obj_is_xdec))) {
        CPy_TypeError("bool", obj_is_xdec); goto fail;
    } else
        arg_is_xdec = obj_is_xdec == Py_True;
    char arg_rare;
    if (obj_rare == NULL) {
        arg_rare = 2;
    } else if (unlikely(!PyBool_Check(obj_rare))) {
        CPy_TypeError("bool", obj_rare); goto fail;
    } else
        arg_rare = obj_rare == Py_True;
    char retval = CPyDef_emit___Emitter___emit_dec_ref(arg_self, arg_dest, arg_rtype, arg_is_xdec, arg_rare);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_dec_ref", 518, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___Emitter___pretty_name(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_rtypes___optional_value_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "pretty_name", 547, CPyStatic_emit___globals);
        goto CPyL8;
    }
    cpy_r_value_type = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_value_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL9;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r3 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "pretty_name", 549, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_value_type);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_emit___Emitter___pretty_name(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "pretty_name", 549, CPyStatic_emit___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPyStatics[6915]; /* ' or None' */
    cpy_r_r6 = CPyStr_Build(2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "pretty_name", 549, CPyStatic_emit___globals);
        goto CPyL8;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = PyObject_Str(cpy_r_typ);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "pretty_name", 550, CPyStatic_emit___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DECREF(cpy_r_value_type);
    goto CPyL6;
}

PyObject *CPyPy_emit___Emitter___pretty_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:pretty_name", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_emit___Emitter___pretty_name(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "pretty_name", 546, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_cast(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_declare_dest, PyObject *cpy_r_error, char cpy_r_raise_exception, char cpy_r_optional, PyObject *cpy_r_src_type, char cpy_r_likely) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_value_type;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_check;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyPtr cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_concrete;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyPtr cpy_r_r185;
    int64_t cpy_r_r186;
    CPyTagged cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    CPyPtr cpy_r_r190;
    int64_t cpy_r_r191;
    CPyTagged cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_full_str;
    PyObject *cpy_r_r202;
    CPyPtr cpy_r_r203;
    int64_t cpy_r_r204;
    CPyTagged cpy_r_r205;
    CPyTagged cpy_r_r206;
    CPyTagged cpy_r_i;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    CPyTagged cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyPtr cpy_r_r215;
    int64_t cpy_r_r216;
    CPyTagged cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyPtr cpy_r_r223;
    int64_t cpy_r_r224;
    PyObject *cpy_r_r225;
    CPyTagged cpy_r_r226;
    CPyPtr cpy_r_r227;
    int64_t cpy_r_r228;
    CPyTagged cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    CPyTagged cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject **cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject **cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    char cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject **cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    char cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    CPyPtr cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    CPyPtr cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    char cpy_r_r320;
    char cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject **cpy_r_r332;
    PyObject *cpy_r_r333;
    char cpy_r_r334;
    cpy_r_r0 = NULL;
    cpy_r_prefix = cpy_r_r0;
    if (cpy_r_declare_dest != 2) goto CPyL2;
    cpy_r_declare_dest = 0;
CPyL2: ;
    if (cpy_r_error != NULL) goto CPyL257;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_error = cpy_r_r1;
CPyL4: ;
    if (cpy_r_raise_exception != 2) goto CPyL6;
    cpy_r_raise_exception = 1;
CPyL6: ;
    if (cpy_r_optional != 2) goto CPyL8;
    cpy_r_optional = 0;
CPyL8: ;
    if (cpy_r_src_type != NULL) goto CPyL258;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_src_type = cpy_r_r2;
CPyL10: ;
    if (cpy_r_likely != 2) goto CPyL12;
    cpy_r_likely = 1;
CPyL12: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_error != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL259;
    if (likely(cpy_r_error != Py_None))
        cpy_r_r5 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 586, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL260;
    }
    cpy_r_r6 = cpy_r_r5;
    goto CPyL17;
CPyL15: ;
    cpy_r_r7 = CPyDef_emit___AssignHandler();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 586, CPyStatic_emit___globals);
        goto CPyL260;
    }
    cpy_r_r6 = cpy_r_r7;
CPyL17: ;
    cpy_r_error = cpy_r_r6;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_src_type != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL47;
    CPy_INCREF(cpy_r_src_type);
    if (likely(cpy_r_src_type != Py_None))
        cpy_r_r10 = cpy_r_src_type;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 589, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_src_type);
        goto CPyL261;
    }
    cpy_r_r11 = CPyDef_rtypes___is_optional_type(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 589, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (!cpy_r_r11) goto CPyL47;
    cpy_r_r12 = CPyDef_rtypes___is_object_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 589, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r12) goto CPyL47;
    CPy_INCREF(cpy_r_src_type);
    if (likely(cpy_r_src_type != Py_None))
        cpy_r_r13 = cpy_r_src_type;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 590, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_src_type);
        goto CPyL261;
    }
    cpy_r_r14 = CPyDef_rtypes___optional_value_type(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 590, CPyStatic_emit___globals);
        goto CPyL261;
    }
    cpy_r_value_type = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_value_type != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL28;
    } else
        goto CPyL262;
CPyL26: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 591, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL28: ;
    if (likely(cpy_r_value_type != Py_None))
        cpy_r_r18 = cpy_r_value_type;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 592, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_value_type);
        goto CPyL261;
    }
    cpy_r_r19 = CPyDef_sametype___is_same_type(cpy_r_r18, cpy_r_typ);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 592, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r19) {
        goto CPyL263;
    } else
        goto CPyL47;
CPyL31: ;
    if (!cpy_r_declare_dest) goto CPyL34;
    cpy_r_r20 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r21 = CPyStatics[6886]; /* ';' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_dest, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 594, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 594, CPyStatic_emit___globals);
        goto CPyL264;
    }
CPyL34: ;
    cpy_r_r25 = CPyStatics[6917]; /* '({} != Py_None)' */
    CPy_INCREF(cpy_r_r25);
    cpy_r_check = cpy_r_r25;
    if (!cpy_r_likely) goto CPyL37;
    cpy_r_r26 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r27 = CPyStatics[72]; /* ')' */
    cpy_r_r28 = CPyStr_Build(3, cpy_r_r26, cpy_r_check, cpy_r_r27);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 597, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r28;
CPyL37: ;
    cpy_r_r29 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r30[2] = {cpy_r_check, cpy_r_src};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 598, CPyStatic_emit___globals);
        goto CPyL265;
    }
    CPy_DECREF(cpy_r_check);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 598, CPyStatic_emit___globals, "str", cpy_r_r32);
        goto CPyL264;
    }
    cpy_r_r34 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r33, cpy_r_optional);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 598, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r35 = CPyStatics[309]; /* '    ' */
    cpy_r_r36 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r37 = CPyStatics[6886]; /* ';' */
    cpy_r_r38 = CPyStr_Build(5, cpy_r_r35, cpy_r_dest, cpy_r_r36, cpy_r_src, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 599, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r39 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r40 = PyTuple_Pack(2, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 599, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r41 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 599, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r42 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 600, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    cpy_r_r43 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r42, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 600, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r44 = CPyStatics[1406]; /* '}' */
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 601, CPyStatic_emit___globals);
        goto CPyL256;
    }
    return 1;
CPyL47: ;
    cpy_r_r47 = CPyDef_rtypes___is_list_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 606, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r47) goto CPyL266;
    cpy_r_r48 = CPyDef_rtypes___is_dict_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 607, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r48) goto CPyL266;
    cpy_r_r49 = CPyDef_rtypes___is_set_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 608, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r49) goto CPyL266;
    cpy_r_r50 = CPyDef_rtypes___is_str_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 609, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r50) goto CPyL266;
    cpy_r_r51 = CPyDef_rtypes___is_range_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 610, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r51) goto CPyL266;
    cpy_r_r52 = CPyDef_rtypes___is_float_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 611, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r52) goto CPyL266;
    cpy_r_r53 = CPyDef_rtypes___is_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 612, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r53) goto CPyL266;
    cpy_r_r54 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 613, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r54) goto CPyL266;
    cpy_r_r55 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 614, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r55) goto CPyL266;
    cpy_r_r56 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_typ);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 615, CPyStatic_emit___globals);
        goto CPyL261;
    }
    if (cpy_r_r56) {
        goto CPyL266;
    } else
        goto CPyL267;
CPyL67: ;
    if (!cpy_r_declare_dest) goto CPyL70;
    cpy_r_r57 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r58 = CPyStatics[6886]; /* ';' */
    cpy_r_r59 = CPyStr_Build(3, cpy_r_r57, cpy_r_dest, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 618, CPyStatic_emit___globals);
        goto CPyL268;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 618, CPyStatic_emit___globals);
        goto CPyL268;
    }
CPyL70: ;
    cpy_r_r62 = CPyDef_rtypes___is_list_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 619, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r62) {
        goto CPyL269;
    } else
        goto CPyL73;
CPyL72: ;
    cpy_r_r63 = CPyStatics[6920]; /* 'PyList' */
    CPy_INCREF(cpy_r_r63);
    cpy_r_prefix = cpy_r_r63;
    goto CPyL105;
CPyL73: ;
    cpy_r_r64 = CPyDef_rtypes___is_dict_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 621, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r64) {
        goto CPyL270;
    } else
        goto CPyL76;
CPyL75: ;
    cpy_r_r65 = CPyStatics[6921]; /* 'PyDict' */
    CPy_INCREF(cpy_r_r65);
    cpy_r_prefix = cpy_r_r65;
    goto CPyL105;
CPyL76: ;
    cpy_r_r66 = CPyDef_rtypes___is_set_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 623, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r66) {
        goto CPyL271;
    } else
        goto CPyL79;
CPyL78: ;
    cpy_r_r67 = CPyStatics[6922]; /* 'PySet' */
    CPy_INCREF(cpy_r_r67);
    cpy_r_prefix = cpy_r_r67;
    goto CPyL105;
CPyL79: ;
    cpy_r_r68 = CPyDef_rtypes___is_str_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 625, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r68) {
        goto CPyL272;
    } else
        goto CPyL82;
CPyL81: ;
    cpy_r_r69 = CPyStatics[6923]; /* 'PyUnicode' */
    CPy_INCREF(cpy_r_r69);
    cpy_r_prefix = cpy_r_r69;
    goto CPyL105;
CPyL82: ;
    cpy_r_r70 = CPyDef_rtypes___is_range_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 627, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r70) {
        goto CPyL273;
    } else
        goto CPyL85;
CPyL84: ;
    cpy_r_r71 = CPyStatics[6924]; /* 'PyRange' */
    CPy_INCREF(cpy_r_r71);
    cpy_r_prefix = cpy_r_r71;
    goto CPyL105;
CPyL85: ;
    cpy_r_r72 = CPyDef_rtypes___is_float_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 629, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r72) {
        goto CPyL274;
    } else
        goto CPyL88;
CPyL87: ;
    cpy_r_r73 = CPyStatics[6925]; /* 'CPyFloat' */
    CPy_INCREF(cpy_r_r73);
    cpy_r_prefix = cpy_r_r73;
    goto CPyL105;
CPyL88: ;
    cpy_r_r74 = CPyDef_rtypes___is_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 631, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r74) goto CPyL275;
    cpy_r_r75 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_typ);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 631, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r75) {
        goto CPyL275;
    } else
        goto CPyL93;
CPyL92: ;
    cpy_r_r76 = CPyStatics[6926]; /* 'PyLong' */
    CPy_INCREF(cpy_r_r76);
    cpy_r_prefix = cpy_r_r76;
    goto CPyL105;
CPyL93: ;
    cpy_r_r77 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 634, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r77) goto CPyL276;
    cpy_r_r78 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 634, CPyStatic_emit___globals);
        goto CPyL268;
    }
    if (cpy_r_r78) {
        goto CPyL276;
    } else
        goto CPyL98;
CPyL97: ;
    cpy_r_r79 = CPyStatics[6927]; /* 'PyBool' */
    CPy_INCREF(cpy_r_r79);
    cpy_r_prefix = cpy_r_r79;
    goto CPyL105;
CPyL98: ;
    if (0) {
        goto CPyL105;
    } else
        goto CPyL277;
CPyL99: ;
    cpy_r_r80 = CPyStatics[6928]; /* 'unexpected primitive type: ' */
    cpy_r_r81 = PyObject_Str(cpy_r_typ);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 637, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r82 = CPyStr_Build(2, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 637, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r83 = CPyModule_builtins;
    cpy_r_r84 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 637, CPyStatic_emit___globals);
        goto CPyL278;
    }
    PyObject *cpy_r_r86[1] = {cpy_r_r82};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 637, CPyStatic_emit___globals);
        goto CPyL278;
    }
    CPy_DECREF(cpy_r_r82);
    CPy_Raise(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 637, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r89 = CPyStatics[6929]; /* '({}_Check({}))' */
    CPy_INCREF(cpy_r_r89);
    cpy_r_check = cpy_r_r89;
    if (!cpy_r_likely) goto CPyL108;
    cpy_r_r90 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r91 = CPyStatics[72]; /* ')' */
    cpy_r_r92 = CPyStr_Build(3, cpy_r_r90, cpy_r_check, cpy_r_r91);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 640, CPyStatic_emit___globals);
        goto CPyL268;
    }
    cpy_r_check = cpy_r_r92;
CPyL108: ;
    cpy_r_r93 = CPyStatics[193]; /* 'format' */
    if (cpy_r_prefix == NULL) {
        goto CPyL279;
    } else
        goto CPyL111;
CPyL109: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"prefix\" referenced before assignment");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", -1, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL111: ;
    PyObject *cpy_r_r95[3] = {cpy_r_check, cpy_r_prefix, cpy_r_src};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = PyObject_VectorcallMethod(cpy_r_r93, cpy_r_r96, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 641, CPyStatic_emit___globals);
        goto CPyL280;
    }
    if (cpy_r_prefix == NULL) {
        goto CPyL281;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"prefix\" referenced before assignment");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", -1, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL115: ;
    CPy_DECREF(cpy_r_check);
    CPy_XDECREF(cpy_r_prefix);
    if (likely(PyUnicode_Check(cpy_r_r97)))
        cpy_r_r99 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 641, CPyStatic_emit___globals, "str", cpy_r_r97);
        goto CPyL264;
    }
    cpy_r_r100 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r99, cpy_r_optional);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 641, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r101 = CPyStatics[309]; /* '    ' */
    cpy_r_r102 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r103 = CPyStatics[6886]; /* ';' */
    cpy_r_r104 = CPyStr_Build(5, cpy_r_r101, cpy_r_dest, cpy_r_r102, cpy_r_src, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 642, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r105 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r106 = PyTuple_Pack(2, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 642, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r107 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 642, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r108 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 643, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    cpy_r_r109 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r108, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 643, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r110 = CPyStatics[1406]; /* '}' */
    cpy_r_r111 = NULL;
    cpy_r_r112 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 644, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL123: ;
    cpy_r_r113 = CPyDef_rtypes___is_bytes_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 645, CPyStatic_emit___globals);
        goto CPyL282;
    }
    if (cpy_r_r113) {
        goto CPyL283;
    } else
        goto CPyL140;
CPyL125: ;
    if (!cpy_r_declare_dest) goto CPyL128;
    cpy_r_r114 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r115 = CPyStatics[6886]; /* ';' */
    cpy_r_r116 = CPyStr_Build(3, cpy_r_r114, cpy_r_dest, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 647, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r117 = NULL;
    cpy_r_r118 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 647, CPyStatic_emit___globals);
        goto CPyL264;
    }
CPyL128: ;
    cpy_r_r119 = CPyStatics[6930]; /* '(PyBytes_Check({}) || PyByteArray_Check({}))' */
    CPy_INCREF(cpy_r_r119);
    cpy_r_check = cpy_r_r119;
    if (!cpy_r_likely) goto CPyL131;
    cpy_r_r120 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r121 = CPyStatics[72]; /* ')' */
    cpy_r_r122 = CPyStr_Build(3, cpy_r_r120, cpy_r_check, cpy_r_r121);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 650, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r122;
CPyL131: ;
    cpy_r_r123 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r124[3] = {cpy_r_check, cpy_r_src, cpy_r_src};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_VectorcallMethod(cpy_r_r123, cpy_r_r125, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 651, CPyStatic_emit___globals);
        goto CPyL265;
    }
    CPy_DECREF(cpy_r_check);
    if (likely(PyUnicode_Check(cpy_r_r126)))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 651, CPyStatic_emit___globals, "str", cpy_r_r126);
        goto CPyL264;
    }
    cpy_r_r128 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r127, cpy_r_optional);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 651, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r129 = CPyStatics[309]; /* '    ' */
    cpy_r_r130 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r131 = CPyStatics[6886]; /* ';' */
    cpy_r_r132 = CPyStr_Build(5, cpy_r_r129, cpy_r_dest, cpy_r_r130, cpy_r_src, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 652, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r133 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r134 = PyTuple_Pack(2, cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 652, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r135 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 652, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r136 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 653, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    cpy_r_r137 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r136, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 653, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r138 = CPyStatics[1406]; /* '}' */
    cpy_r_r139 = NULL;
    cpy_r_r140 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 654, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL140: ;
    cpy_r_r141 = CPyDef_rtypes___is_tuple_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 655, CPyStatic_emit___globals);
        goto CPyL282;
    }
    if (cpy_r_r141) {
        goto CPyL284;
    } else
        goto CPyL158;
CPyL142: ;
    if (!cpy_r_declare_dest) goto CPyL146;
    cpy_r_r142 = CPyDef_emit___Emitter___ctype(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 657, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r143 = CPyStatics[295]; /* ' ' */
    cpy_r_r144 = CPyStatics[6886]; /* ';' */
    cpy_r_r145 = CPyStr_Build(4, cpy_r_r142, cpy_r_r143, cpy_r_dest, cpy_r_r144);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 657, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r146 = NULL;
    cpy_r_r147 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 657, CPyStatic_emit___globals);
        goto CPyL264;
    }
CPyL146: ;
    cpy_r_r148 = CPyStatics[6931]; /* '(PyTuple_Check({}))' */
    CPy_INCREF(cpy_r_r148);
    cpy_r_check = cpy_r_r148;
    if (!cpy_r_likely) goto CPyL149;
    cpy_r_r149 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r150 = CPyStatics[72]; /* ')' */
    cpy_r_r151 = CPyStr_Build(3, cpy_r_r149, cpy_r_check, cpy_r_r150);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 660, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r151;
CPyL149: ;
    cpy_r_r152 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r153[2] = {cpy_r_check, cpy_r_src};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = PyObject_VectorcallMethod(cpy_r_r152, cpy_r_r154, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 661, CPyStatic_emit___globals);
        goto CPyL265;
    }
    CPy_DECREF(cpy_r_check);
    if (likely(PyUnicode_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 661, CPyStatic_emit___globals, "str", cpy_r_r155);
        goto CPyL264;
    }
    cpy_r_r157 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r156, cpy_r_optional);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 661, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r158 = CPyStatics[309]; /* '    ' */
    cpy_r_r159 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r160 = CPyStatics[6886]; /* ';' */
    cpy_r_r161 = CPyStr_Build(5, cpy_r_r158, cpy_r_dest, cpy_r_r159, cpy_r_src, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 662, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r162 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r163 = PyTuple_Pack(2, cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 662, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r164 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 662, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r165 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 663, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    cpy_r_r166 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r165, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 663, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r167 = CPyStatics[1406]; /* '}' */
    cpy_r_r168 = NULL;
    cpy_r_r169 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 664, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL158: ;
    cpy_r_r170 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r171 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r172 = *(PyObject * *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 == cpy_r_r170;
    if (cpy_r_r173) {
        goto CPyL285;
    } else
        goto CPyL210;
CPyL159: ;
    if (!cpy_r_declare_dest) goto CPyL162;
    cpy_r_r174 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r175 = CPyStatics[6886]; /* ';' */
    cpy_r_r176 = CPyStr_Build(3, cpy_r_r174, cpy_r_dest, cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 667, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r177 = NULL;
    cpy_r_r178 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r176, cpy_r_r177);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 667, CPyStatic_emit___globals);
        goto CPyL264;
    }
CPyL162: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RInstance))
        cpy_r_r179 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 668, CPyStatic_emit___globals, "mypyc.ir.rtypes.RInstance", cpy_r_typ);
        goto CPyL264;
    }
    cpy_r_r180 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r179)->_class_ir;
    CPy_INCREF(cpy_r_r180);
    cpy_r_r181 = CPyDef_class_ir___all_concrete_classes(cpy_r_r180);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 668, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_concrete = cpy_r_r181;
    cpy_r_r182 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r183 = cpy_r_concrete != cpy_r_r182;
    if (!cpy_r_r183) goto CPyL286;
    CPy_INCREF(cpy_r_concrete);
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r184 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 668, CPyStatic_emit___globals, "list", cpy_r_concrete);
        goto CPyL287;
    }
    cpy_r_r185 = (CPyPtr)&((PyVarObject *)cpy_r_r184)->ob_size;
    cpy_r_r186 = *(int64_t *)cpy_r_r185;
    CPy_DECREF(cpy_r_r184);
    cpy_r_r187 = cpy_r_r186 << 1;
    cpy_r_r188 = cpy_r_r187 != 0;
    if (!cpy_r_r188) goto CPyL286;
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r189 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 673, CPyStatic_emit___globals, "list", cpy_r_concrete);
        goto CPyL287;
    }
    cpy_r_r190 = (CPyPtr)&((PyVarObject *)cpy_r_r189)->ob_size;
    cpy_r_r191 = *(int64_t *)cpy_r_r190;
    cpy_r_r192 = cpy_r_r191 << 1;
    cpy_r_r193 = (Py_ssize_t)cpy_r_r192 > (Py_ssize_t)6;
    if (cpy_r_r193) {
        goto CPyL286;
    } else
        goto CPyL173;
CPyL169: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RInstance))
        cpy_r_r194 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 675, CPyStatic_emit___globals, "mypyc.ir.rtypes.RInstance", cpy_r_typ);
        goto CPyL264;
    }
    cpy_r_r195 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r194)->_class_ir;
    CPy_INCREF(cpy_r_r195);
    cpy_r_r196 = CPyDef_emit___Emitter___type_struct_name(cpy_r_self, cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 675, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r197 = CPyStatics[6932]; /* '(PyObject_TypeCheck(' */
    cpy_r_r198 = CPyStatics[71]; /* ', ' */
    cpy_r_r199 = CPyStatics[6933]; /* '))' */
    cpy_r_r200 = CPyStr_Build(5, cpy_r_r197, cpy_r_src, cpy_r_r198, cpy_r_r196, cpy_r_r199);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 674, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r200;
    goto CPyL196;
CPyL173: ;
    cpy_r_r201 = CPyStatics[6934]; /* '(Py_TYPE({src}) == {targets[0]})' */
    CPy_INCREF(cpy_r_r201);
    cpy_r_full_str = cpy_r_r201;
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r202 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 679, CPyStatic_emit___globals, "list", cpy_r_concrete);
        goto CPyL288;
    }
    cpy_r_r203 = (CPyPtr)&((PyVarObject *)cpy_r_r202)->ob_size;
    cpy_r_r204 = *(int64_t *)cpy_r_r203;
    cpy_r_r205 = cpy_r_r204 << 1;
    cpy_r_r206 = 2;
    cpy_r_i = cpy_r_r206;
CPyL175: ;
    cpy_r_r207 = (Py_ssize_t)cpy_r_r206 < (Py_ssize_t)cpy_r_r205;
    if (!cpy_r_r207) goto CPyL289;
    cpy_r_r208 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 680, CPyStatic_emit___globals);
        goto CPyL288;
    }
    cpy_r_r209 = CPyStatics[6935]; /* ' || (Py_TYPE({src}) == {targets[' */
    cpy_r_r210 = CPyStatics[6936]; /* ']})' */
    cpy_r_r211 = CPyStr_Build(3, cpy_r_r209, cpy_r_r208, cpy_r_r210);
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 680, CPyStatic_emit___globals);
        goto CPyL288;
    }
    cpy_r_r212 = CPyStr_Append(cpy_r_full_str, cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 680, CPyStatic_emit___globals);
        goto CPyL287;
    }
    cpy_r_full_str = cpy_r_r212;
    cpy_r_r213 = cpy_r_r206 + 2;
    cpy_r_r206 = cpy_r_r213;
    cpy_r_i = cpy_r_r213;
    goto CPyL175;
CPyL181: ;
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r214 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 681, CPyStatic_emit___globals, "list", cpy_r_concrete);
        goto CPyL288;
    }
    cpy_r_r215 = (CPyPtr)&((PyVarObject *)cpy_r_r214)->ob_size;
    cpy_r_r216 = *(int64_t *)cpy_r_r215;
    cpy_r_r217 = cpy_r_r216 << 1;
    cpy_r_r218 = (Py_ssize_t)cpy_r_r217 > (Py_ssize_t)2;
    if (!cpy_r_r218) goto CPyL185;
    cpy_r_r219 = CPyStatics[2381]; /* '(' */
    cpy_r_r220 = CPyStatics[72]; /* ')' */
    cpy_r_r221 = CPyStr_Build(3, cpy_r_r219, cpy_r_full_str, cpy_r_r220);
    CPy_DECREF(cpy_r_full_str);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 682, CPyStatic_emit___globals);
        goto CPyL287;
    }
    cpy_r_full_str = cpy_r_r221;
CPyL185: ;
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r222 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 684, CPyStatic_emit___globals, "list", cpy_r_concrete);
        goto CPyL290;
    }
    cpy_r_r223 = (CPyPtr)&((PyVarObject *)cpy_r_r222)->ob_size;
    cpy_r_r224 = *(int64_t *)cpy_r_r223;
    cpy_r_r225 = PyList_New(cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 684, CPyStatic_emit___globals);
        goto CPyL291;
    }
    cpy_r_r226 = 0;
CPyL188: ;
    cpy_r_r227 = (CPyPtr)&((PyVarObject *)cpy_r_r222)->ob_size;
    cpy_r_r228 = *(int64_t *)cpy_r_r227;
    cpy_r_r229 = cpy_r_r228 << 1;
    cpy_r_r230 = (Py_ssize_t)cpy_r_r226 < (Py_ssize_t)cpy_r_r229;
    if (!cpy_r_r230) goto CPyL292;
    cpy_r_r231 = CPyList_GetItemUnsafe(cpy_r_r222, cpy_r_r226);
    if (likely(Py_TYPE(cpy_r_r231) == CPyType_class_ir___ClassIR))
        cpy_r_r232 = cpy_r_r231;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 684, CPyStatic_emit___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r231);
        goto CPyL293;
    }
    cpy_r_ir = cpy_r_r232;
    cpy_r_r233 = CPyDef_emit___Emitter___type_struct_name(cpy_r_self, cpy_r_ir);
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 684, CPyStatic_emit___globals);
        goto CPyL293;
    }
    cpy_r_r234 = CPyList_SetItemUnsafe(cpy_r_r225, cpy_r_r226, cpy_r_r233);
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 684, CPyStatic_emit___globals);
        goto CPyL293;
    }
    cpy_r_r235 = cpy_r_r226 + 2;
    cpy_r_r226 = cpy_r_r235;
    goto CPyL188;
CPyL193: ;
    cpy_r_r236 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r237[3] = {cpy_r_full_str, cpy_r_src, cpy_r_r225};
    cpy_r_r238 = (PyObject **)&cpy_r_r237;
    cpy_r_r239 = CPyStatics[9936]; /* ('src', 'targets') */
    cpy_r_r240 = PyObject_VectorcallMethod(cpy_r_r236, cpy_r_r238, 9223372036854775809ULL, cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 683, CPyStatic_emit___globals);
        goto CPyL294;
    }
    CPy_DECREF(cpy_r_full_str);
    CPy_DECREF(cpy_r_r225);
    if (likely(PyUnicode_Check(cpy_r_r240)))
        cpy_r_r241 = cpy_r_r240;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 683, CPyStatic_emit___globals, "str", cpy_r_r240);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r241;
CPyL196: ;
    if (!cpy_r_likely) goto CPyL199;
    cpy_r_r242 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r243 = CPyStatics[72]; /* ')' */
    cpy_r_r244 = CPyStr_Build(3, cpy_r_r242, cpy_r_check, cpy_r_r243);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 687, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r244;
CPyL199: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RInstance))
        cpy_r_r245 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 688, CPyStatic_emit___globals, "mypyc.ir.rtypes.RInstance", cpy_r_typ);
        goto CPyL265;
    }
    cpy_r_r246 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_r245, cpy_r_check, cpy_r_optional);
    CPy_DECREF(cpy_r_r245);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r246 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 688, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r247 = CPyStatics[309]; /* '    ' */
    cpy_r_r248 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r249 = CPyStatics[6886]; /* ';' */
    cpy_r_r250 = CPyStr_Build(5, cpy_r_r247, cpy_r_dest, cpy_r_r248, cpy_r_src, cpy_r_r249);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 689, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r251 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r252[3] = {cpy_r_r250, cpy_r_dest, cpy_r_src};
    cpy_r_r253 = (PyObject **)&cpy_r_r252;
    cpy_r_r254 = PyObject_VectorcallMethod(cpy_r_r251, cpy_r_r253, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 689, CPyStatic_emit___globals);
        goto CPyL295;
    }
    CPy_DECREF(cpy_r_r250);
    if (likely(PyUnicode_Check(cpy_r_r254)))
        cpy_r_r255 = cpy_r_r254;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 689, CPyStatic_emit___globals, "str", cpy_r_r254);
        goto CPyL264;
    }
    cpy_r_r256 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r257 = PyTuple_Pack(2, cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 689, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r258 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r257);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r258 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 689, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r259 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 690, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RInstance))
        cpy_r_r260 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 690, CPyStatic_emit___globals, "mypyc.ir.rtypes.RInstance", cpy_r_typ);
        goto CPyL296;
    }
    cpy_r_r261 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r259, cpy_r_src, cpy_r_dest, cpy_r_r260, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r259);
    CPy_DECREF(cpy_r_r260);
    if (unlikely(cpy_r_r261 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 690, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r262 = CPyStatics[1406]; /* '}' */
    cpy_r_r263 = NULL;
    cpy_r_r264 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r262, cpy_r_r263);
    if (unlikely(cpy_r_r264 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 691, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL210: ;
    cpy_r_r265 = CPyDef_rtypes___is_none_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r265 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 692, CPyStatic_emit___globals);
        goto CPyL282;
    }
    if (cpy_r_r265) {
        goto CPyL297;
    } else
        goto CPyL227;
CPyL212: ;
    if (!cpy_r_declare_dest) goto CPyL215;
    cpy_r_r266 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r267 = CPyStatics[6886]; /* ';' */
    cpy_r_r268 = CPyStr_Build(3, cpy_r_r266, cpy_r_dest, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 694, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r269 = NULL;
    cpy_r_r270 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r268, cpy_r_r269);
    CPy_DECREF(cpy_r_r268);
    if (unlikely(cpy_r_r270 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 694, CPyStatic_emit___globals);
        goto CPyL264;
    }
CPyL215: ;
    cpy_r_r271 = CPyStatics[6938]; /* '({} == Py_None)' */
    CPy_INCREF(cpy_r_r271);
    cpy_r_check = cpy_r_r271;
    if (!cpy_r_likely) goto CPyL218;
    cpy_r_r272 = CPyStatics[6918]; /* '(likely' */
    cpy_r_r273 = CPyStatics[72]; /* ')' */
    cpy_r_r274 = CPyStr_Build(3, cpy_r_r272, cpy_r_check, cpy_r_r273);
    CPy_DECREF(cpy_r_check);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 697, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_check = cpy_r_r274;
CPyL218: ;
    cpy_r_r275 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r276[2] = {cpy_r_check, cpy_r_src};
    cpy_r_r277 = (PyObject **)&cpy_r_r276;
    cpy_r_r278 = PyObject_VectorcallMethod(cpy_r_r275, cpy_r_r277, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 698, CPyStatic_emit___globals);
        goto CPyL265;
    }
    CPy_DECREF(cpy_r_check);
    if (likely(PyUnicode_Check(cpy_r_r278)))
        cpy_r_r279 = cpy_r_r278;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 698, CPyStatic_emit___globals, "str", cpy_r_r278);
        goto CPyL264;
    }
    cpy_r_r280 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r279, cpy_r_optional);
    CPy_DECREF(cpy_r_r279);
    if (unlikely(cpy_r_r280 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 698, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r281 = CPyStatics[309]; /* '    ' */
    cpy_r_r282 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r283 = CPyStatics[6886]; /* ';' */
    cpy_r_r284 = CPyStr_Build(5, cpy_r_r281, cpy_r_dest, cpy_r_r282, cpy_r_src, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 699, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r285 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r286 = PyTuple_Pack(2, cpy_r_r284, cpy_r_r285);
    CPy_DECREF(cpy_r_r284);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 699, CPyStatic_emit___globals);
        goto CPyL264;
    }
    cpy_r_r287 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r286);
    CPy_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r287 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 699, CPyStatic_emit___globals);
        goto CPyL264;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r288 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 700, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL256;
    }
    cpy_r_r289 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_r288, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r288);
    if (unlikely(cpy_r_r289 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 700, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r290 = CPyStatics[1406]; /* '}' */
    cpy_r_r291 = NULL;
    cpy_r_r292 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r290, cpy_r_r291);
    if (unlikely(cpy_r_r292 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 701, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL227: ;
    cpy_r_r293 = CPyDef_rtypes___is_object_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r293 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 702, CPyStatic_emit___globals);
        goto CPyL282;
    }
    if (cpy_r_r293) {
        goto CPyL298;
    } else
        goto CPyL237;
CPyL229: ;
    if (!cpy_r_declare_dest) goto CPyL232;
    cpy_r_r294 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r295 = CPyStatics[6886]; /* ';' */
    cpy_r_r296 = CPyStr_Build(3, cpy_r_r294, cpy_r_dest, cpy_r_r295);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 704, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r297 = NULL;
    cpy_r_r298 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r296, cpy_r_r297);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r298 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 704, CPyStatic_emit___globals);
        goto CPyL256;
    }
CPyL232: ;
    cpy_r_r299 = CPyStatics[163]; /* '' */
    cpy_r_r300 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r299, cpy_r_optional);
    if (unlikely(cpy_r_r300 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 705, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r301 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r302 = CPyStatics[6886]; /* ';' */
    cpy_r_r303 = CPyStr_Build(4, cpy_r_dest, cpy_r_r301, cpy_r_src, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 706, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r304 = NULL;
    cpy_r_r305 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r303, cpy_r_r304);
    CPy_DECREF(cpy_r_r303);
    if (unlikely(cpy_r_r305 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 706, CPyStatic_emit___globals);
        goto CPyL256;
    }
    if (!cpy_r_optional) goto CPyL255;
    cpy_r_r306 = CPyStatics[1406]; /* '}' */
    cpy_r_r307 = NULL;
    cpy_r_r308 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r306, cpy_r_r307);
    if (unlikely(cpy_r_r308 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 708, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL237: ;
    cpy_r_r309 = (PyObject *)CPyType_rtypes___RUnion;
    cpy_r_r310 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r311 = *(PyObject * *)cpy_r_r310;
    cpy_r_r312 = cpy_r_r311 == cpy_r_r309;
    if (!cpy_r_r312) goto CPyL241;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RUnion))
        cpy_r_r313 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 711, CPyStatic_emit___globals, "mypyc.ir.rtypes.RUnion", cpy_r_typ);
        goto CPyL282;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r314 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 711, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL299;
    }
    cpy_r_r315 = CPyDef_emit___Emitter___emit_union_cast(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_r313, cpy_r_declare_dest, cpy_r_r314, cpy_r_optional, cpy_r_src_type, cpy_r_raise_exception);
    CPy_DECREF(cpy_r_r313);
    CPy_DECREF(cpy_r_r314);
    CPy_DECREF(cpy_r_src_type);
    if (unlikely(cpy_r_r315 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 710, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL241: ;
    cpy_r_r316 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r317 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r318 = *(PyObject * *)cpy_r_r317;
    cpy_r_r319 = cpy_r_r318 == cpy_r_r316;
    if (!cpy_r_r319) goto CPyL300;
    cpy_r_r320 = cpy_r_optional ^ 1;
    if (cpy_r_r320) {
        goto CPyL245;
    } else
        goto CPyL301;
CPyL243: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r321 = 0;
    if (unlikely(!cpy_r_r321)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 714, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL245: ;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r322 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 715, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL282;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r323 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast", 715, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL302;
    }
    cpy_r_r324 = CPyDef_emit___Emitter___emit_tuple_cast(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_r322, cpy_r_declare_dest, cpy_r_r323, cpy_r_src_type);
    CPy_DECREF(cpy_r_r322);
    CPy_DECREF(cpy_r_r323);
    CPy_DECREF(cpy_r_src_type);
    if (unlikely(cpy_r_r324 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 715, CPyStatic_emit___globals);
        goto CPyL256;
    } else
        goto CPyL255;
CPyL248: ;
    if (0) goto CPyL255;
    cpy_r_r325 = PyObject_Str(cpy_r_typ);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 717, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r326 = CPyStatics[6939]; /* 'Cast not implemented: ' */
    cpy_r_r327 = CPyStr_Build(2, cpy_r_r326, cpy_r_r325);
    CPy_DECREF(cpy_r_r325);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 717, CPyStatic_emit___globals);
        goto CPyL256;
    }
    cpy_r_r328 = CPyModule_builtins;
    cpy_r_r329 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r330 = CPyObject_GetAttr(cpy_r_r328, cpy_r_r329);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 717, CPyStatic_emit___globals);
        goto CPyL303;
    }
    PyObject *cpy_r_r331[1] = {cpy_r_r327};
    cpy_r_r332 = (PyObject **)&cpy_r_r331;
    cpy_r_r333 = _PyObject_Vectorcall(cpy_r_r330, cpy_r_r332, 1, 0);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 717, CPyStatic_emit___globals);
        goto CPyL303;
    }
    CPy_DECREF(cpy_r_r327);
    CPy_Raise(cpy_r_r333);
    CPy_DECREF(cpy_r_r333);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 717, CPyStatic_emit___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL255: ;
    return 1;
CPyL256: ;
    cpy_r_r334 = 2;
    return cpy_r_r334;
CPyL257: ;
    CPy_INCREF(cpy_r_error);
    goto CPyL4;
CPyL258: ;
    CPy_INCREF(cpy_r_src_type);
    goto CPyL10;
CPyL259: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL15;
CPyL260: ;
    CPy_DecRef(cpy_r_src_type);
    CPy_XDecRef(cpy_r_prefix);
    goto CPyL256;
CPyL261: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_src_type);
    CPy_XDecRef(cpy_r_prefix);
    goto CPyL256;
CPyL262: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_src_type);
    CPy_XDECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_value_type);
    goto CPyL26;
CPyL263: ;
    CPy_DECREF(cpy_r_src_type);
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL31;
CPyL264: ;
    CPy_DecRef(cpy_r_error);
    goto CPyL256;
CPyL265: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_check);
    goto CPyL256;
CPyL266: ;
    CPy_DECREF(cpy_r_src_type);
    goto CPyL67;
CPyL267: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL123;
CPyL268: ;
    CPy_DecRef(cpy_r_error);
    CPy_XDecRef(cpy_r_prefix);
    goto CPyL256;
CPyL269: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL72;
CPyL270: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL75;
CPyL271: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL78;
CPyL272: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL81;
CPyL273: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL84;
CPyL274: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL87;
CPyL275: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL92;
CPyL276: ;
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL97;
CPyL277: ;
    CPy_DECREF(cpy_r_error);
    CPy_XDECREF(cpy_r_prefix);
    goto CPyL99;
CPyL278: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL256;
CPyL279: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_check);
    goto CPyL109;
CPyL280: ;
    CPy_DecRef(cpy_r_error);
    CPy_XDecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_check);
    goto CPyL256;
CPyL281: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_check);
    CPy_DECREF(cpy_r_r97);
    goto CPyL113;
CPyL282: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_src_type);
    goto CPyL256;
CPyL283: ;
    CPy_DECREF(cpy_r_src_type);
    goto CPyL125;
CPyL284: ;
    CPy_DECREF(cpy_r_src_type);
    goto CPyL142;
CPyL285: ;
    CPy_DECREF(cpy_r_src_type);
    goto CPyL159;
CPyL286: ;
    CPy_DECREF(cpy_r_concrete);
    goto CPyL169;
CPyL287: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_concrete);
    goto CPyL256;
CPyL288: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_full_str);
    goto CPyL256;
CPyL289: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL181;
CPyL290: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_full_str);
    goto CPyL256;
CPyL291: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_full_str);
    CPy_DecRef(cpy_r_r222);
    goto CPyL256;
CPyL292: ;
    CPy_DECREF(cpy_r_r222);
    goto CPyL193;
CPyL293: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_full_str);
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r225);
    goto CPyL256;
CPyL294: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_full_str);
    CPy_DecRef(cpy_r_r225);
    goto CPyL256;
CPyL295: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r250);
    goto CPyL256;
CPyL296: ;
    CPy_DecRef(cpy_r_r259);
    goto CPyL256;
CPyL297: ;
    CPy_DECREF(cpy_r_src_type);
    goto CPyL212;
CPyL298: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_src_type);
    goto CPyL229;
CPyL299: ;
    CPy_DecRef(cpy_r_src_type);
    CPy_DecRef(cpy_r_r313);
    goto CPyL256;
CPyL300: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_src_type);
    goto CPyL248;
CPyL301: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_src_type);
    goto CPyL243;
CPyL302: ;
    CPy_DecRef(cpy_r_src_type);
    CPy_DecRef(cpy_r_r322);
    goto CPyL256;
CPyL303: ;
    CPy_DecRef(cpy_r_r327);
    goto CPyL256;
}

PyObject *CPyPy_emit___Emitter___emit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "declare_dest", "error", "raise_exception", "optional", "src_type", "likely", 0};
    static CPyArg_Parser parser = {"OOO|$OOOOOO:emit_cast", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_declare_dest = NULL;
    PyObject *obj_error = NULL;
    PyObject *obj_raise_exception = NULL;
    PyObject *obj_optional = NULL;
    PyObject *obj_src_type = NULL;
    PyObject *obj_likely = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_declare_dest, &obj_error, &obj_raise_exception, &obj_optional, &obj_src_type, &obj_likely)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_declare_dest;
    if (obj_declare_dest == NULL) {
        arg_declare_dest = 2;
    } else if (unlikely(!PyBool_Check(obj_declare_dest))) {
        CPy_TypeError("bool", obj_declare_dest); goto fail;
    } else
        arg_declare_dest = obj_declare_dest == Py_True;
    PyObject *arg_error;
    if (obj_error == NULL) {
        arg_error = NULL;
        goto __LL9200;
    }
    if (PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler))
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9200;
    if (obj_error == Py_None)
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9200;
    CPy_TypeError("mypyc.codegen.emit.ErrorHandler or None", obj_error); 
    goto fail;
__LL9200: ;
    char arg_raise_exception;
    if (obj_raise_exception == NULL) {
        arg_raise_exception = 2;
    } else if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    char arg_optional;
    if (obj_optional == NULL) {
        arg_optional = 2;
    } else if (unlikely(!PyBool_Check(obj_optional))) {
        CPy_TypeError("bool", obj_optional); goto fail;
    } else
        arg_optional = obj_optional == Py_True;
    PyObject *arg_src_type;
    if (obj_src_type == NULL) {
        arg_src_type = NULL;
        goto __LL9201;
    }
    if (PyObject_TypeCheck(obj_src_type, CPyType_rtypes___RType))
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9201;
    if (obj_src_type == Py_None)
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9201;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_src_type); 
    goto fail;
__LL9201: ;
    char arg_likely;
    if (obj_likely == NULL) {
        arg_likely = 2;
    } else if (unlikely(!PyBool_Check(obj_likely))) {
        CPy_TypeError("bool", obj_likely); goto fail;
    } else
        arg_likely = obj_likely == Py_True;
    char retval = CPyDef_emit___Emitter___emit_cast(arg_self, arg_src, arg_dest, arg_typ, arg_declare_dest, arg_error, arg_raise_exception, arg_optional, arg_src_type, arg_likely);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast", 552, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_cast_error_handler(PyObject *cpy_r_self, PyObject *cpy_r_error, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_raise_exception) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OI cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OI cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    if (!cpy_r_raise_exception) goto CPyL13;
    cpy_r_r0 = (PyObject *)CPyType_emit___TracebackAndGotoHandler;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r4 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 726, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r5 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r4)->_source_path;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r6 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 726, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL38;
    }
    cpy_r_r7 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r6)->_module_name;
    CPy_INCREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r8 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 726, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL39;
    }
    cpy_r_r9 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r8)->_traceback_entry;
    CPy_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    cpy_r_r10 = CPyDef_emit___Emitter___emit_type_error_traceback(cpy_r_self, cpy_r_r5, cpy_r_r7, cpy_r_r9, cpy_r_typ, cpy_r_src);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9.f0);
    CPyTagged_DECREF(cpy_r_r9.f1);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 725, CPyStatic_emit___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r11 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 728, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r12 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r11)->_label;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r14 = CPyStatics[6886]; /* ';' */
    cpy_r_r15 = CPyStr_Build(3, cpy_r_r13, cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 728, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 728, CPyStatic_emit___globals);
        goto CPyL37;
    }
    return 1;
CPyL10: ;
    cpy_r_r18 = CPyStatics[6941]; /* 'CPy_TypeError("' */
    cpy_r_r19 = CPyDef_emit___Emitter___pretty_name(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 730, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r20 = CPyStatics[6942]; /* '", ' */
    cpy_r_r21 = CPyStatics[6943]; /* '); ' */
    cpy_r_r22 = CPyStr_Build(5, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_src, cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 730, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 730, CPyStatic_emit___globals);
        goto CPyL37;
    }
CPyL13: ;
    cpy_r_r25 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = CPyStatics[6944]; /* ' = NULL;' */
    cpy_r_r30 = CPyStr_Build(2, cpy_r_dest, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 732, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 732, CPyStatic_emit___globals);
        goto CPyL37;
    } else
        goto CPyL36;
CPyL16: ;
    cpy_r_r33 = (PyObject *)CPyType_emit___GotoHandler;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___GotoHandler))
        cpy_r_r37 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 734, CPyStatic_emit___globals, "mypyc.codegen.emit.GotoHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r38 = ((mypyc___codegen___emit___GotoHandlerObject *)cpy_r_r37)->_label;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r40 = CPyStatics[6886]; /* ';' */
    cpy_r_r41 = CPyStr_Build(3, cpy_r_r39, cpy_r_r38, cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 734, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 734, CPyStatic_emit___globals);
        goto CPyL37;
    } else
        goto CPyL36;
CPyL20: ;
    cpy_r_r44 = (PyObject *)CPyType_emit___TracebackAndGotoHandler;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL30;
    cpy_r_r48 = CPyStatics[6944]; /* ' = NULL;' */
    cpy_r_r49 = CPyStr_Build(2, cpy_r_dest, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 736, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 736, CPyStatic_emit___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r52 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 737, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r53 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r52)->_source_path;
    CPy_INCREF(cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r54 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 737, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL40;
    }
    cpy_r_r55 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r54)->_module_name;
    CPy_INCREF(cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r56 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 737, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL41;
    }
    cpy_r_r57 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r56)->_traceback_entry;
    CPy_INCREF(cpy_r_r57.f0);
    CPyTagged_INCREF(cpy_r_r57.f1);
    cpy_r_r58 = CPyDef_emit___Emitter___emit_traceback(cpy_r_self, cpy_r_r53, cpy_r_r55, cpy_r_r57);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57.f0);
    CPyTagged_DECREF(cpy_r_r57.f1);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 737, CPyStatic_emit___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___TracebackAndGotoHandler))
        cpy_r_r59 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 738, CPyStatic_emit___globals, "mypyc.codegen.emit.TracebackAndGotoHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r60 = ((mypyc___codegen___emit___TracebackAndGotoHandlerObject *)cpy_r_r59)->_label;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r62 = CPyStatics[6886]; /* ';' */
    cpy_r_r63 = CPyStr_Build(3, cpy_r_r61, cpy_r_r60, cpy_r_r62);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 738, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 738, CPyStatic_emit___globals);
        goto CPyL37;
    } else
        goto CPyL36;
CPyL30: ;
    cpy_r_r66 = (PyObject *)CPyType_emit___ReturnHandler;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (cpy_r_r69) goto CPyL33;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 740, CPyStatic_emit___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___ReturnHandler))
        cpy_r_r71 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 741, CPyStatic_emit___globals, "mypyc.codegen.emit.ReturnHandler", cpy_r_error);
        goto CPyL37;
    }
    cpy_r_r72 = ((mypyc___codegen___emit___ReturnHandlerObject *)cpy_r_r71)->_value;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r74 = CPyStatics[6886]; /* ';' */
    cpy_r_r75 = CPyStr_Build(3, cpy_r_r73, cpy_r_r72, cpy_r_r74);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 741, CPyStatic_emit___globals);
        goto CPyL37;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 741, CPyStatic_emit___globals);
        goto CPyL37;
    }
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL38: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r55);
    goto CPyL37;
}

PyObject *CPyPy_emit___Emitter___emit_cast_error_handler(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"error", "src", "dest", "typ", "raise_exception", 0};
    static CPyArg_Parser parser = {"OOOOO:emit_cast_error_handler", kwlist, 0};
    PyObject *obj_error;
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_raise_exception;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_error, &obj_src, &obj_dest, &obj_typ, &obj_raise_exception)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_error;
    if (likely(PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler)))
        arg_error = obj_error;
    else {
        CPy_TypeError("mypyc.codegen.emit.ErrorHandler", obj_error); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_raise_exception;
    if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    char retval = CPyDef_emit___Emitter___emit_cast_error_handler(arg_self, arg_error, arg_src, arg_dest, arg_typ, arg_raise_exception);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_cast_error_handler", 719, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_union_cast(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_declare_dest, PyObject *cpy_r_error, char cpy_r_optional, PyObject *cpy_r_src_type, char cpy_r_raise_exception) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_good_label;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    if (!cpy_r_declare_dest) goto CPyL3;
    cpy_r_r0 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r1 = CPyStatics[6886]; /* ';' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_dest, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 759, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 759, CPyStatic_emit___globals);
        goto CPyL23;
    }
CPyL3: ;
    cpy_r_r5 = CPyDef_emit___Emitter___new_label(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 760, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_good_label = cpy_r_r5;
    if (!cpy_r_optional) goto CPyL13;
    cpy_r_r6 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r7 = CPyStatics[6946]; /* ' == NULL) {' */
    cpy_r_r8 = CPyStr_Build(3, cpy_r_r6, cpy_r_src, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 762, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 762, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r11 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r12 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 763, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r13 = CPyStatics[6886]; /* ';' */
    cpy_r_r14 = CPyStr_Build(4, cpy_r_dest, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 763, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 763, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r17 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r18 = CPyStatics[6886]; /* ';' */
    cpy_r_r19 = CPyStr_Build(3, cpy_r_r17, cpy_r_good_label, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 764, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 764, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r22 = CPyStatics[1406]; /* '}' */
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 765, CPyStatic_emit___globals);
        goto CPyL24;
    }
CPyL13: ;
    cpy_r_r25 = ((mypyc___ir___rtypes___RUnionObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = 0;
CPyL14: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL25;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_r25, cpy_r_r26);
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_rtypes___RType)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_union_cast", 766, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r31);
        goto CPyL26;
    }
    cpy_r_item = cpy_r_r32;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_emit___Emitter___emit_cast(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_item, 0, cpy_r_r33, 0, 0, cpy_r_r34, 0);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 767, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r36 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r37 = CPyStatics[6947]; /* ' != NULL) goto ' */
    cpy_r_r38 = CPyStatics[6886]; /* ';' */
    cpy_r_r39 = CPyStr_Build(5, cpy_r_r36, cpy_r_dest, cpy_r_r37, cpy_r_good_label, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 776, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 776, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r42 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r42;
    goto CPyL14;
CPyL20: ;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_cast_error_handler(cpy_r_self, cpy_r_error, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_raise_exception);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 778, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r44 = CPyDef_emit___Emitter___emit_label(cpy_r_self, cpy_r_good_label);
    CPy_DECREF(cpy_r_good_label);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 779, CPyStatic_emit___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL24: ;
    CPy_DecRef(cpy_r_good_label);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_good_label);
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
}

PyObject *CPyPy_emit___Emitter___emit_union_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "declare_dest", "error", "optional", "src_type", "raise_exception", 0};
    static CPyArg_Parser parser = {"OOOOOOOO:emit_union_cast", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_declare_dest;
    PyObject *obj_error;
    PyObject *obj_optional;
    PyObject *obj_src_type;
    PyObject *obj_raise_exception;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_declare_dest, &obj_error, &obj_optional, &obj_src_type, &obj_raise_exception)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RUnion))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RUnion", obj_typ); 
        goto fail;
    }
    char arg_declare_dest;
    if (unlikely(!PyBool_Check(obj_declare_dest))) {
        CPy_TypeError("bool", obj_declare_dest); goto fail;
    } else
        arg_declare_dest = obj_declare_dest == Py_True;
    PyObject *arg_error;
    if (likely(PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler)))
        arg_error = obj_error;
    else {
        CPy_TypeError("mypyc.codegen.emit.ErrorHandler", obj_error); 
        goto fail;
    }
    char arg_optional;
    if (unlikely(!PyBool_Check(obj_optional))) {
        CPy_TypeError("bool", obj_optional); goto fail;
    } else
        arg_optional = obj_optional == Py_True;
    PyObject *arg_src_type;
    if (PyObject_TypeCheck(obj_src_type, CPyType_rtypes___RType))
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9202;
    if (obj_src_type == Py_None)
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9202;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_src_type); 
    goto fail;
__LL9202: ;
    char arg_raise_exception;
    if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    char retval = CPyDef_emit___Emitter___emit_union_cast(arg_self, arg_src, arg_dest, arg_typ, arg_declare_dest, arg_error, arg_optional, arg_src_type, arg_raise_exception);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_union_cast", 743, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_tuple_cast(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_declare_dest, PyObject *cpy_r_error, PyObject *cpy_r_src_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_out_label;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
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
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    if (!cpy_r_declare_dest) goto CPyL3;
    cpy_r_r0 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r1 = CPyStatics[6886]; /* ';' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_dest, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 795, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 795, CPyStatic_emit___globals);
        goto CPyL24;
    }
CPyL3: ;
    cpy_r_r5 = CPyDef_emit___Emitter___new_label(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 799, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_out_label = cpy_r_r5;
    cpy_r_r6 = CPyStatics[6948]; /* ('if (unlikely(!(PyTuple_Check({r}) && '
                                    'PyTuple_GET_SIZE({r}) == {size}))) {{') */
    cpy_r_r7 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_typ)->_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = CPyStatics[193]; /* 'format' */
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r10);
    PyObject *cpy_r_r13[3] = {cpy_r_r6, cpy_r_src, cpy_r_r12};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9937]; /* ('r', 'size') */
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r14, 9223372036854775809ULL, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 801, CPyStatic_emit___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 801, CPyStatic_emit___globals, "str", cpy_r_r16);
        goto CPyL26;
    }
    cpy_r_r18 = CPyStatics[6944]; /* ' = NULL;' */
    cpy_r_r19 = CPyStr_Build(2, cpy_r_dest, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 804, CPyStatic_emit___globals);
        goto CPyL27;
    }
    cpy_r_r20 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r21 = CPyStatics[6886]; /* ';' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_out_label, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 805, CPyStatic_emit___globals);
        goto CPyL28;
    }
    cpy_r_r23 = CPyStatics[1406]; /* '}' */
    cpy_r_r24 = PyTuple_Pack(4, cpy_r_r17, cpy_r_r19, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 800, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r25 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 800, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r26 = 0;
    cpy_r_i = 0;
    cpy_r_r27 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_typ)->_types;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = 0;
CPyL11: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL29;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 808, CPyStatic_emit___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_rtypes___RType)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 808, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r33);
        goto CPyL30;
    }
    cpy_r_item = cpy_r_r34;
    cpy_r_r35 = CPyStatics[6949]; /* 'PyTuple_GET_ITEM(' */
    cpy_r_r36 = CPyStatics[71]; /* ', ' */
    cpy_r_r37 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 811, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPyStatics[72]; /* ')' */
    cpy_r_r39 = CPyStr_Build(5, cpy_r_r35, cpy_r_src, cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 811, CPyStatic_emit___globals);
        goto CPyL31;
    }
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_cast(cpy_r_self, cpy_r_r39, cpy_r_dest, cpy_r_item, 0, cpy_r_r40, 0, 0, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 810, CPyStatic_emit___globals);
        goto CPyL32;
    }
    cpy_r_r44 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r45 = CPyStatics[6950]; /* ' == NULL) goto ' */
    cpy_r_r46 = CPyStatics[6886]; /* ';' */
    cpy_r_r47 = CPyStr_Build(5, cpy_r_r44, cpy_r_dest, cpy_r_r45, cpy_r_out_label, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 818, CPyStatic_emit___globals);
        goto CPyL32;
    }
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 818, CPyStatic_emit___globals);
        goto CPyL32;
    }
    cpy_r_r50 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r50;
    cpy_r_i = cpy_r_r50;
    cpy_r_r51 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r51;
    goto CPyL11;
CPyL20: ;
    cpy_r_r52 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r53 = CPyStatics[6886]; /* ';' */
    cpy_r_r54 = CPyStr_Build(4, cpy_r_dest, cpy_r_r52, cpy_r_src, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 820, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 820, CPyStatic_emit___globals);
        goto CPyL26;
    }
    cpy_r_r57 = CPyDef_emit___Emitter___emit_label(cpy_r_self, cpy_r_out_label);
    CPy_DECREF(cpy_r_out_label);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 821, CPyStatic_emit___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL25: ;
    CPy_DecRef(cpy_r_out_label);
    CPy_DecRef(cpy_r_r12);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_out_label);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_out_label);
    CPy_DecRef(cpy_r_r17);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_out_label);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL24;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_out_label);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r27);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_out_label);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_item);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_out_label);
    CPy_DecRef(cpy_r_r27);
    goto CPyL24;
}

PyObject *CPyPy_emit___Emitter___emit_tuple_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "declare_dest", "error", "src_type", 0};
    static CPyArg_Parser parser = {"OOOOOO:emit_tuple_cast", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_declare_dest;
    PyObject *obj_error;
    PyObject *obj_src_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_declare_dest, &obj_error, &obj_src_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_rtypes___RTuple))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RTuple", obj_typ); 
        goto fail;
    }
    char arg_declare_dest;
    if (unlikely(!PyBool_Check(obj_declare_dest))) {
        CPy_TypeError("bool", obj_declare_dest); goto fail;
    } else
        arg_declare_dest = obj_declare_dest == Py_True;
    PyObject *arg_error;
    if (likely(PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler)))
        arg_error = obj_error;
    else {
        CPy_TypeError("mypyc.codegen.emit.ErrorHandler", obj_error); 
        goto fail;
    }
    PyObject *arg_src_type;
    if (PyObject_TypeCheck(obj_src_type, CPyType_rtypes___RType))
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9203;
    if (obj_src_type == Py_None)
        arg_src_type = obj_src_type;
    else {
        arg_src_type = NULL;
    }
    if (arg_src_type != NULL) goto __LL9203;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_src_type); 
    goto fail;
__LL9203: ;
    char retval = CPyDef_emit___Emitter___emit_tuple_cast(arg_self, arg_src, arg_dest, arg_typ, arg_declare_dest, arg_error, arg_src_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_tuple_cast", 781, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_arg_check(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, PyObject *cpy_r_check, char cpy_r_optional) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    if (!cpy_r_optional) goto CPyL6;
    cpy_r_r0 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r1 = CPyStatics[6946]; /* ' == NULL) {' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_src, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 825, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 825, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r5 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r6 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 826, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r7 = CPyStatics[6886]; /* ';' */
    cpy_r_r8 = CPyStr_Build(4, cpy_r_dest, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 826, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 826, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL6: ;
    cpy_r_r11 = CPyStatics[163]; /* '' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_check, cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 827, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r17 = cpy_r_r12 != 0;
    if (!cpy_r_r17) goto CPyL15;
    if (!cpy_r_optional) goto CPyL12;
    cpy_r_r18 = CPyStatics[6951]; /* '} else ' */
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL12: ;
    cpy_r_r20 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r20);
    cpy_r_r19 = cpy_r_r20;
CPyL13: ;
    cpy_r_r21 = CPyStatics[6952]; /* 'if ' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r19, cpy_r_r21, cpy_r_check);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 828, CPyStatic_emit___globals);
        goto CPyL18;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 828, CPyStatic_emit___globals);
        goto CPyL18;
    } else
        goto CPyL17;
CPyL15: ;
    if (!cpy_r_optional) goto CPyL17;
    cpy_r_r25 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 830, CPyStatic_emit___globals);
        goto CPyL18;
    }
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
}

PyObject *CPyPy_emit___Emitter___emit_arg_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "check", "optional", 0};
    static CPyArg_Parser parser = {"OOOOO:emit_arg_check", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_check;
    PyObject *obj_optional;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_check, &obj_optional)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_check;
    if (likely(PyUnicode_Check(obj_check)))
        arg_check = obj_check;
    else {
        CPy_TypeError("str", obj_check); 
        goto fail;
    }
    char arg_optional;
    if (unlikely(!PyBool_Check(obj_optional))) {
        CPy_TypeError("bool", obj_optional); goto fail;
    } else
        arg_optional = obj_optional == Py_True;
    char retval = CPyDef_emit___Emitter___emit_arg_check(arg_self, arg_src, arg_dest, arg_typ, arg_check, arg_optional);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_arg_check", 823, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_declare_dest, PyObject *cpy_r_error, char cpy_r_raise_exception, char cpy_r_optional, char cpy_r_borrow) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_failure;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
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
    PyObject *cpy_r_raise_exc;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_conversion;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyPtr cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyPtr cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyPtr cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    char cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    CPyPtr cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_cast_temp;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    int32_t cpy_r_r253;
    char cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    CPyTagged cpy_r_r260;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    CPyTagged cpy_r_r263;
    CPyPtr cpy_r_r264;
    int64_t cpy_r_r265;
    CPyTagged cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_temp;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_temp2;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    char cpy_r_r285;
    char cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    CPyTagged cpy_r_r301;
    CPyTagged cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    char cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject **cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    if (cpy_r_declare_dest != 2) goto CPyL2;
    cpy_r_declare_dest = 0;
CPyL2: ;
    if (cpy_r_error != NULL) goto CPyL204;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_error = cpy_r_r0;
CPyL4: ;
    if (cpy_r_raise_exception != 2) goto CPyL6;
    cpy_r_raise_exception = 1;
CPyL6: ;
    if (cpy_r_optional != 2) goto CPyL8;
    cpy_r_optional = 0;
CPyL8: ;
    if (cpy_r_borrow != 2) goto CPyL10;
    cpy_r_borrow = 0;
CPyL10: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_error != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL205;
    if (likely(cpy_r_error != Py_None))
        cpy_r_r3 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 862, CPyStatic_emit___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL203;
    }
    cpy_r_r4 = cpy_r_r3;
    goto CPyL15;
CPyL13: ;
    cpy_r_r5 = CPyDef_emit___AssignHandler();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 862, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r4 = cpy_r_r5;
CPyL15: ;
    cpy_r_error = cpy_r_r4;
    cpy_r_r6 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL19;
    cpy_r_r10 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r11 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 865, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_r12 = CPyStatics[6886]; /* ';' */
    cpy_r_r13 = CPyStr_Build(4, cpy_r_dest, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 865, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_failure = cpy_r_r13;
    goto CPyL29;
CPyL19: ;
    cpy_r_r14 = (PyObject *)CPyType_emit___GotoHandler;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___GotoHandler))
        cpy_r_r18 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 867, CPyStatic_emit___globals, "mypyc.codegen.emit.GotoHandler", cpy_r_error);
        goto CPyL206;
    }
    cpy_r_r19 = ((mypyc___codegen___emit___GotoHandlerObject *)cpy_r_r18)->_label;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r21 = CPyStatics[6886]; /* ';' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 867, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_failure = cpy_r_r22;
    goto CPyL29;
CPyL23: ;
    cpy_r_r23 = (PyObject *)CPyType_emit___ReturnHandler;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) {
        goto CPyL26;
    } else
        goto CPyL207;
CPyL24: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 869, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_error) == CPyType_emit___ReturnHandler))
        cpy_r_r28 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 870, CPyStatic_emit___globals, "mypyc.codegen.emit.ReturnHandler", cpy_r_error);
        goto CPyL206;
    }
    cpy_r_r29 = ((mypyc___codegen___emit___ReturnHandlerObject *)cpy_r_r28)->_value;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r31 = CPyStatics[6886]; /* ';' */
    cpy_r_r32 = CPyStr_Build(3, cpy_r_r30, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 870, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_failure = cpy_r_r32;
CPyL29: ;
    if (!cpy_r_raise_exception) goto CPyL34;
    cpy_r_r33 = CPyStatics[6941]; /* 'CPy_TypeError("' */
    cpy_r_r34 = CPyDef_emit___Emitter___pretty_name(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 872, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r35 = CPyStatics[6942]; /* '", ' */
    cpy_r_r36 = CPyStatics[6943]; /* '); ' */
    cpy_r_r37 = CPyStr_Build(5, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_src, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 872, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_raise_exc = cpy_r_r37;
    cpy_r_r38 = PyUnicode_Concat(cpy_r_raise_exc, cpy_r_failure);
    CPy_DECREF(cpy_r_raise_exc);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 873, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_failure = cpy_r_r38;
CPyL34: ;
    cpy_r_r39 = CPyDef_rtypes___is_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 874, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r39) goto CPyL209;
    cpy_r_r40 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 874, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r40) {
        goto CPyL209;
    } else
        goto CPyL51;
CPyL38: ;
    if (!cpy_r_declare_dest) goto CPyL41;
    cpy_r_r41 = CPyStatics[6953]; /* 'CPyTagged ' */
    cpy_r_r42 = CPyStatics[6886]; /* ';' */
    cpy_r_r43 = CPyStr_Build(3, cpy_r_r41, cpy_r_dest, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 876, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 876, CPyStatic_emit___globals);
        goto CPyL210;
    }
CPyL41: ;
    cpy_r_r46 = CPyStatics[6954]; /* '(likely(PyLong_Check(' */
    cpy_r_r47 = CPyStatics[6955]; /* ')))' */
    cpy_r_r48 = CPyStr_Build(3, cpy_r_r46, cpy_r_src, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 877, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r49 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r48, cpy_r_optional);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 877, CPyStatic_emit___globals);
        goto CPyL210;
    }
    if (!cpy_r_borrow) goto CPyL46;
    cpy_r_r50 = CPyStatics[309]; /* '    ' */
    cpy_r_r51 = CPyStatics[6956]; /* ' = CPyTagged_BorrowFromObject(' */
    cpy_r_r52 = CPyStatics[6872]; /* ');' */
    cpy_r_r53 = CPyStr_Build(5, cpy_r_r50, cpy_r_dest, cpy_r_r51, cpy_r_src, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 879, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 879, CPyStatic_emit___globals);
        goto CPyL210;
    } else
        goto CPyL48;
CPyL46: ;
    cpy_r_r56 = CPyStatics[309]; /* '    ' */
    cpy_r_r57 = CPyStatics[6957]; /* ' = CPyTagged_FromObject(' */
    cpy_r_r58 = CPyStatics[6872]; /* ');' */
    cpy_r_r59 = CPyStr_Build(5, cpy_r_r56, cpy_r_dest, cpy_r_r57, cpy_r_src, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 881, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 881, CPyStatic_emit___globals);
        goto CPyL210;
    }
CPyL48: ;
    cpy_r_r62 = CPyStatics[6919]; /* 'else {' */
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 882, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_failure, cpy_r_r65);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 883, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r67 = CPyStatics[1406]; /* '}' */
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 884, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL51: ;
    cpy_r_r70 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 885, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r70) goto CPyL211;
    cpy_r_r71 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 885, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r71) {
        goto CPyL211;
    } else
        goto CPyL65;
CPyL55: ;
    if (!cpy_r_declare_dest) goto CPyL58;
    cpy_r_r72 = CPyStatics[6958]; /* 'char ' */
    cpy_r_r73 = CPyStatics[6886]; /* ';' */
    cpy_r_r74 = CPyStr_Build(3, cpy_r_r72, cpy_r_dest, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 888, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 888, CPyStatic_emit___globals);
        goto CPyL210;
    }
CPyL58: ;
    cpy_r_r77 = CPyStatics[6959]; /* '(unlikely(!PyBool_Check(' */
    cpy_r_r78 = CPyStatics[6960]; /* '))) {' */
    cpy_r_r79 = CPyStr_Build(3, cpy_r_r77, cpy_r_src, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 889, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r80 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r79, cpy_r_optional);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 889, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_failure, cpy_r_r81);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 890, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r83 = CPyStatics[6961]; /* '} else' */
    cpy_r_r84 = NULL;
    cpy_r_r85 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 891, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r86 = CPyStatics[6962]; /* ' == Py_True' */
    cpy_r_r87 = CPyStr_Build(2, cpy_r_src, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 892, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_conversion = cpy_r_r87;
    cpy_r_r88 = CPyStatics[309]; /* '    ' */
    cpy_r_r89 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r90 = CPyStatics[6886]; /* ';' */
    cpy_r_r91 = CPyStr_Build(5, cpy_r_r88, cpy_r_dest, cpy_r_r89, cpy_r_conversion, cpy_r_r90);
    CPy_DECREF(cpy_r_conversion);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 893, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 893, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL65: ;
    cpy_r_r94 = CPyDef_rtypes___is_none_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 894, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r94) {
        goto CPyL212;
    } else
        goto CPyL76;
CPyL67: ;
    if (!cpy_r_declare_dest) goto CPyL70;
    cpy_r_r95 = CPyStatics[6958]; /* 'char ' */
    cpy_r_r96 = CPyStatics[6886]; /* ';' */
    cpy_r_r97 = CPyStr_Build(3, cpy_r_r95, cpy_r_dest, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 897, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r98 = NULL;
    cpy_r_r99 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r97, cpy_r_r98);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 897, CPyStatic_emit___globals);
        goto CPyL210;
    }
CPyL70: ;
    cpy_r_r100 = CPyStatics[6963]; /* '(unlikely(' */
    cpy_r_r101 = CPyStatics[6964]; /* ' != Py_None)) {' */
    cpy_r_r102 = CPyStr_Build(3, cpy_r_r100, cpy_r_src, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 898, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r103 = CPyDef_emit___Emitter___emit_arg_check(cpy_r_self, cpy_r_src, cpy_r_dest, cpy_r_typ, cpy_r_r102, cpy_r_optional);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 898, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_failure, cpy_r_r104);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 899, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r106 = CPyStatics[6961]; /* '} else' */
    cpy_r_r107 = NULL;
    cpy_r_r108 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 900, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r109 = CPyStatics[309]; /* '    ' */
    cpy_r_r110 = CPyStatics[6965]; /* ' = 1;' */
    cpy_r_r111 = CPyStr_Build(3, cpy_r_r109, cpy_r_dest, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 901, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 901, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL76: ;
    cpy_r_r114 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 902, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (!cpy_r_r114) goto CPyL88;
    cpy_r_r115 = cpy_r_optional ^ 1;
    if (cpy_r_r115) {
        goto CPyL81;
    } else
        goto CPyL213;
CPyL79: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 904, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL81: ;
    if (!cpy_r_declare_dest) goto CPyL84;
    cpy_r_r117 = CPyStatics[6966]; /* 'int64_t ' */
    cpy_r_r118 = CPyStatics[6886]; /* ';' */
    cpy_r_r119 = CPyStr_Build(3, cpy_r_r117, cpy_r_dest, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 906, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 906, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL84: ;
    cpy_r_r122 = CPyStatics[6967]; /* ' = CPyLong_AsInt64(' */
    cpy_r_r123 = CPyStatics[6872]; /* ');' */
    cpy_r_r124 = CPyStr_Build(4, cpy_r_dest, cpy_r_r122, cpy_r_src, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 907, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 907, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r127 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    CPy_DECREF(cpy_r_error);
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (cpy_r_r130) goto CPyL214;
    cpy_r_r131 = CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(cpy_r_self, cpy_r_dest, cpy_r_typ, cpy_r_failure);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 909, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL88: ;
    cpy_r_r132 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r132 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 910, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (!cpy_r_r132) goto CPyL101;
    cpy_r_r133 = cpy_r_optional ^ 1;
    if (cpy_r_r133) {
        goto CPyL93;
    } else
        goto CPyL215;
CPyL91: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r134 = 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 912, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL93: ;
    if (!cpy_r_declare_dest) goto CPyL96;
    cpy_r_r135 = CPyStatics[6968]; /* 'int32_t ' */
    cpy_r_r136 = CPyStatics[6886]; /* ';' */
    cpy_r_r137 = CPyStr_Build(3, cpy_r_r135, cpy_r_dest, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 914, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r138 = NULL;
    cpy_r_r139 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r139 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 914, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL96: ;
    cpy_r_r140 = CPyStatics[6969]; /* ' = CPyLong_AsInt32(' */
    cpy_r_r141 = CPyStatics[6872]; /* ');' */
    cpy_r_r142 = CPyStr_Build(4, cpy_r_dest, cpy_r_r140, cpy_r_src, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 915, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r143 = NULL;
    cpy_r_r144 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r142, cpy_r_r143);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 915, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r145 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r146 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r147 = *(PyObject * *)cpy_r_r146;
    CPy_DECREF(cpy_r_error);
    cpy_r_r148 = cpy_r_r147 == cpy_r_r145;
    if (cpy_r_r148) goto CPyL214;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RPrimitive))
        cpy_r_r149 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 917, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_typ);
        goto CPyL210;
    }
    cpy_r_r150 = CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(cpy_r_self, cpy_r_dest, cpy_r_r149, cpy_r_failure);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r150 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 917, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL101: ;
    cpy_r_r151 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 918, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (!cpy_r_r151) goto CPyL114;
    cpy_r_r152 = cpy_r_optional ^ 1;
    if (cpy_r_r152) {
        goto CPyL106;
    } else
        goto CPyL216;
CPyL104: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r153 = 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 920, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL106: ;
    if (!cpy_r_declare_dest) goto CPyL109;
    cpy_r_r154 = CPyStatics[6970]; /* 'int16_t ' */
    cpy_r_r155 = CPyStatics[6886]; /* ';' */
    cpy_r_r156 = CPyStr_Build(3, cpy_r_r154, cpy_r_dest, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 922, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r157 = NULL;
    cpy_r_r158 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r156, cpy_r_r157);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 922, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL109: ;
    cpy_r_r159 = CPyStatics[6971]; /* ' = CPyLong_AsInt16(' */
    cpy_r_r160 = CPyStatics[6872]; /* ');' */
    cpy_r_r161 = CPyStr_Build(4, cpy_r_dest, cpy_r_r159, cpy_r_src, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 923, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r162 = NULL;
    cpy_r_r163 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 923, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r164 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r165 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r166 = *(PyObject * *)cpy_r_r165;
    CPy_DECREF(cpy_r_error);
    cpy_r_r167 = cpy_r_r166 == cpy_r_r164;
    if (cpy_r_r167) goto CPyL214;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RPrimitive))
        cpy_r_r168 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 925, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_typ);
        goto CPyL210;
    }
    cpy_r_r169 = CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(cpy_r_self, cpy_r_dest, cpy_r_r168, cpy_r_failure);
    CPy_DECREF(cpy_r_r168);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r169 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 925, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL114: ;
    cpy_r_r170 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r170 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 926, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (!cpy_r_r170) goto CPyL127;
    cpy_r_r171 = cpy_r_optional ^ 1;
    if (cpy_r_r171) {
        goto CPyL119;
    } else
        goto CPyL217;
CPyL117: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 928, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL119: ;
    if (!cpy_r_declare_dest) goto CPyL122;
    cpy_r_r173 = CPyStatics[6972]; /* 'uint8_t ' */
    cpy_r_r174 = CPyStatics[6886]; /* ';' */
    cpy_r_r175 = CPyStr_Build(3, cpy_r_r173, cpy_r_dest, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 930, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r176 = NULL;
    cpy_r_r177 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 930, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL122: ;
    cpy_r_r178 = CPyStatics[6973]; /* ' = CPyLong_AsUInt8(' */
    cpy_r_r179 = CPyStatics[6872]; /* ');' */
    cpy_r_r180 = CPyStr_Build(4, cpy_r_dest, cpy_r_r178, cpy_r_src, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 931, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r181 = NULL;
    cpy_r_r182 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r182 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 931, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r183 = (PyObject *)CPyType_emit___AssignHandler;
    cpy_r_r184 = (CPyPtr)&((PyObject *)cpy_r_error)->ob_type;
    cpy_r_r185 = *(PyObject * *)cpy_r_r184;
    CPy_DECREF(cpy_r_error);
    cpy_r_r186 = cpy_r_r185 == cpy_r_r183;
    if (cpy_r_r186) goto CPyL214;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RPrimitive))
        cpy_r_r187 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 933, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_typ);
        goto CPyL210;
    }
    cpy_r_r188 = CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(cpy_r_self, cpy_r_dest, cpy_r_r187, cpy_r_failure);
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r188 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 933, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL127: ;
    cpy_r_r189 = CPyDef_rtypes___is_float_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 934, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (cpy_r_r189) {
        goto CPyL218;
    } else
        goto CPyL140;
CPyL129: ;
    cpy_r_r190 = cpy_r_optional ^ 1;
    if (cpy_r_r190) {
        goto CPyL132;
    } else
        goto CPyL219;
CPyL130: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r191 = 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 935, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL132: ;
    if (!cpy_r_declare_dest) goto CPyL135;
    cpy_r_r192 = CPyStatics[6974]; /* 'double ' */
    cpy_r_r193 = CPyStatics[6886]; /* ';' */
    cpy_r_r194 = CPyStr_Build(3, cpy_r_r192, cpy_r_dest, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 937, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r195 = NULL;
    cpy_r_r196 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r194, cpy_r_r195);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 937, CPyStatic_emit___globals);
        goto CPyL210;
    }
CPyL135: ;
    cpy_r_r197 = CPyStatics[6975]; /* ' = PyFloat_AsDouble(' */
    cpy_r_r198 = CPyStatics[6872]; /* ');' */
    cpy_r_r199 = CPyStr_Build(4, cpy_r_dest, cpy_r_r197, cpy_r_src, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 939, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r200 = NULL;
    cpy_r_r201 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 939, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r202 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r203 = CPyStatics[6976]; /* ' == -1.0 && PyErr_Occurred()) {' */
    cpy_r_r204 = CPyStr_Build(3, cpy_r_r202, cpy_r_dest, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 940, CPyStatic_emit___globals);
        goto CPyL210;
    }
    cpy_r_r205 = CPyStatics[1406]; /* '}' */
    cpy_r_r206 = PyTuple_Pack(3, cpy_r_r204, cpy_r_failure, cpy_r_r205);
    CPy_DECREF(cpy_r_r204);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 940, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r207 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 940, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL140: ;
    cpy_r_r208 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r209 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r210 = *(PyObject * *)cpy_r_r209;
    cpy_r_r211 = cpy_r_r210 == cpy_r_r208;
    if (!cpy_r_r211) goto CPyL220;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r212 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 942, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL208;
    }
    cpy_r_r213 = CPyDef_emit___Emitter___declare_tuple_struct(cpy_r_self, cpy_r_r212);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r213 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 942, CPyStatic_emit___globals);
        goto CPyL208;
    }
    if (!cpy_r_declare_dest) goto CPyL148;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r214 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 944, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL208;
    }
    cpy_r_r215 = CPyDef_emit___Emitter___ctype(cpy_r_self, cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 944, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r216 = CPyStatics[295]; /* ' ' */
    cpy_r_r217 = CPyStatics[6886]; /* ';' */
    cpy_r_r218 = CPyStr_Build(4, cpy_r_r215, cpy_r_r216, cpy_r_dest, cpy_r_r217);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 944, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r219 = NULL;
    cpy_r_r220 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r218, cpy_r_r219);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r220 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 944, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL148: ;
    if (!cpy_r_optional) goto CPyL156;
    cpy_r_r221 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r222 = CPyStatics[6946]; /* ' == NULL) {' */
    cpy_r_r223 = CPyStr_Build(3, cpy_r_r221, cpy_r_src, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 949, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r224 = NULL;
    cpy_r_r225 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r223, cpy_r_r224);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r225 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 949, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r226 = CPyStatics[1538]; /* ' = ' */
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r227 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 950, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL208;
    }
    cpy_r_r228 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_r227);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 950, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r229 = CPyStatics[6886]; /* ';' */
    cpy_r_r230 = CPyStr_Build(4, cpy_r_dest, cpy_r_r226, cpy_r_r228, cpy_r_r229);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 950, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r231 = NULL;
    cpy_r_r232 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r230, cpy_r_r231);
    CPy_DECREF(cpy_r_r230);
    if (unlikely(cpy_r_r232 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 950, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r233 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r234 = NULL;
    cpy_r_r235 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r233, cpy_r_r234);
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 951, CPyStatic_emit___globals);
        goto CPyL208;
    }
CPyL156: ;
    cpy_r_r236 = CPyDef_emit___Emitter___temp_name(cpy_r_self);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 953, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_cast_temp = cpy_r_r236;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r237 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 955, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_error);
    if (Py_TYPE(cpy_r_error) == CPyType_emit___AssignHandler)
        cpy_r_r238 = cpy_r_error;
    else {
        cpy_r_r238 = NULL;
    }
    if (cpy_r_r238 != NULL) goto __LL9204;
    if (Py_TYPE(cpy_r_error) == CPyType_emit___GotoHandler)
        cpy_r_r238 = cpy_r_error;
    else {
        cpy_r_r238 = NULL;
    }
    if (cpy_r_r238 != NULL) goto __LL9204;
    if (Py_TYPE(cpy_r_error) == CPyType_emit___ReturnHandler)
        cpy_r_r238 = cpy_r_error;
    else {
        cpy_r_r238 = NULL;
    }
    if (cpy_r_r238 != NULL) goto __LL9204;
    CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 955, CPyStatic_emit___globals, "union[mypyc.codegen.emit.AssignHandler, mypyc.codegen.emit.GotoHandler, mypyc.codegen.emit.ReturnHandler]", cpy_r_error);
    goto CPyL222;
__LL9204: ;
    cpy_r_r239 = Py_None;
    cpy_r_r240 = CPyDef_emit___Emitter___emit_tuple_cast(cpy_r_self, cpy_r_src, cpy_r_cast_temp, cpy_r_r237, 1, cpy_r_r238, cpy_r_r239);
    CPy_DECREF(cpy_r_r237);
    CPy_DECREF(cpy_r_r238);
    if (unlikely(cpy_r_r240 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 954, CPyStatic_emit___globals);
        goto CPyL221;
    }
    cpy_r_r241 = CPyStatics[6892]; /* 'if (unlikely(' */
    cpy_r_r242 = CPyStatics[6978]; /* ' == NULL)) {' */
    cpy_r_r243 = CPyStr_Build(3, cpy_r_r241, cpy_r_cast_temp, cpy_r_r242);
    CPy_DECREF(cpy_r_cast_temp);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 957, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r244 = NULL;
    cpy_r_r245 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r243, cpy_r_r244);
    CPy_DECREF(cpy_r_r243);
    if (unlikely(cpy_r_r245 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 957, CPyStatic_emit___globals);
        goto CPyL208;
    }
    cpy_r_r246 = NULL;
    cpy_r_r247 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_failure, cpy_r_r246);
    CPy_DECREF(cpy_r_failure);
    if (unlikely(cpy_r_r247 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 962, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_r248 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r249 = NULL;
    cpy_r_r250 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r248, cpy_r_r249);
    if (unlikely(cpy_r_r250 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 963, CPyStatic_emit___globals);
        goto CPyL206;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r251 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 964, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL206;
    }
    cpy_r_r252 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r251)->_types;
    CPy_INCREF(cpy_r_r252);
    cpy_r_r253 = PyObject_IsTrue(cpy_r_r252);
    CPy_DECREF(cpy_r_r252);
    cpy_r_r254 = cpy_r_r253 >= 0;
    if (unlikely(!cpy_r_r254)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 964, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_r255 = cpy_r_r253;
    if (cpy_r_r255) goto CPyL169;
    cpy_r_r256 = CPyStatics[6979]; /* '.empty_struct_error_flag = 0;' */
    cpy_r_r257 = CPyStr_Build(2, cpy_r_dest, cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 965, CPyStatic_emit___globals);
        goto CPyL206;
    }
    cpy_r_r258 = NULL;
    cpy_r_r259 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r257, cpy_r_r258);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r259 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 965, CPyStatic_emit___globals);
        goto CPyL206;
    }
CPyL169: ;
    cpy_r_r260 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r261 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 966, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL223;
    }
    cpy_r_r262 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r261)->_types;
    CPy_INCREF(cpy_r_r262);
    cpy_r_r263 = 0;
CPyL171: ;
    cpy_r_r264 = (CPyPtr)&((PyVarObject *)cpy_r_r262)->ob_size;
    cpy_r_r265 = *(int64_t *)cpy_r_r264;
    cpy_r_r266 = cpy_r_r265 << 1;
    cpy_r_r267 = (Py_ssize_t)cpy_r_r263 < (Py_ssize_t)cpy_r_r266;
    if (!cpy_r_r267) goto CPyL224;
    cpy_r_r268 = CPySequenceTuple_GetItem(cpy_r_r262, cpy_r_r263);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 966, CPyStatic_emit___globals);
        goto CPyL225;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r268, CPyType_rtypes___RType)))
        cpy_r_r269 = cpy_r_r268;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 966, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r268);
        goto CPyL225;
    }
    cpy_r_item_type = cpy_r_r269;
    cpy_r_r270 = CPyDef_emit___Emitter___temp_name(cpy_r_self);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 967, CPyStatic_emit___globals);
        goto CPyL226;
    }
    cpy_r_temp = cpy_r_r270;
    cpy_r_r271 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r272 = CPyStatics[6980]; /* ' = PyTuple_GET_ITEM(' */
    cpy_r_r273 = CPyStatics[71]; /* ', ' */
    cpy_r_r274 = CPyTagged_Str(cpy_r_i);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 969, CPyStatic_emit___globals);
        goto CPyL227;
    }
    cpy_r_r275 = CPyStatics[6872]; /* ');' */
    cpy_r_r276 = CPyStr_Build(7, cpy_r_r271, cpy_r_temp, cpy_r_r272, cpy_r_src, cpy_r_r273, cpy_r_r274, cpy_r_r275);
    CPy_DECREF(cpy_r_r274);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 969, CPyStatic_emit___globals);
        goto CPyL227;
    }
    cpy_r_r277 = NULL;
    cpy_r_r278 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r276, cpy_r_r277);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r278 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 969, CPyStatic_emit___globals);
        goto CPyL227;
    }
    cpy_r_r279 = CPyDef_emit___Emitter___temp_name(cpy_r_self);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 970, CPyStatic_emit___globals);
        goto CPyL227;
    }
    cpy_r_temp2 = cpy_r_r279;
    cpy_r_r280 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_item_type)->_is_unboxed;
    if (!cpy_r_r280) goto CPyL182;
CPyL180: ;
    CPy_INCREF(cpy_r_error);
    if (Py_TYPE(cpy_r_error) == CPyType_emit___AssignHandler)
        cpy_r_r281 = cpy_r_error;
    else {
        cpy_r_r281 = NULL;
    }
    if (cpy_r_r281 != NULL) goto __LL9205;
    if (Py_TYPE(cpy_r_error) == CPyType_emit___GotoHandler)
        cpy_r_r281 = cpy_r_error;
    else {
        cpy_r_r281 = NULL;
    }
    if (cpy_r_r281 != NULL) goto __LL9205;
    if (Py_TYPE(cpy_r_error) == CPyType_emit___ReturnHandler)
        cpy_r_r281 = cpy_r_error;
    else {
        cpy_r_r281 = NULL;
    }
    if (cpy_r_r281 != NULL) goto __LL9205;
    CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_unbox", 978, CPyStatic_emit___globals, "union[mypyc.codegen.emit.AssignHandler, mypyc.codegen.emit.GotoHandler, mypyc.codegen.emit.ReturnHandler]", cpy_r_error);
    goto CPyL228;
__LL9205: ;
    cpy_r_r282 = 2;
    cpy_r_r283 = CPyDef_emit___Emitter___emit_unbox(cpy_r_self, cpy_r_temp, cpy_r_temp2, cpy_r_item_type, 1, cpy_r_r281, cpy_r_raise_exception, cpy_r_r282, cpy_r_borrow);
    CPy_DECREF(cpy_r_temp);
    CPy_DECREF(cpy_r_item_type);
    CPy_DECREF(cpy_r_r281);
    if (unlikely(cpy_r_r283 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 973, CPyStatic_emit___globals);
        goto CPyL229;
    } else
        goto CPyL188;
CPyL182: ;
    if (cpy_r_borrow) goto CPyL187;
    cpy_r_r284 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r284 == NULL)) {
        goto CPyL230;
    } else
        goto CPyL186;
CPyL184: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r285 = 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 984, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL186: ;
    cpy_r_r286 = 2;
    cpy_r_r287 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_self, cpy_r_temp, cpy_r_r284, cpy_r_r286);
    if (unlikely(cpy_r_r287 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 984, CPyStatic_emit___globals);
        goto CPyL228;
    }
CPyL187: ;
    cpy_r_r288 = NULL;
    cpy_r_r289 = 2;
    cpy_r_r290 = 2;
    cpy_r_r291 = NULL;
    cpy_r_r292 = 2;
    cpy_r_r293 = CPyDef_emit___Emitter___emit_cast(cpy_r_self, cpy_r_temp, cpy_r_temp2, cpy_r_item_type, 1, cpy_r_r288, cpy_r_r289, cpy_r_r290, cpy_r_r291, cpy_r_r292);
    CPy_DECREF(cpy_r_temp);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r293 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 985, CPyStatic_emit___globals);
        goto CPyL229;
    }
CPyL188: ;
    cpy_r_r294 = CPyStatics[6903]; /* '.f' */
    cpy_r_r295 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 986, CPyStatic_emit___globals);
        goto CPyL231;
    }
    cpy_r_r296 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r297 = CPyStatics[6886]; /* ';' */
    cpy_r_r298 = CPyStr_Build(6, cpy_r_dest, cpy_r_r294, cpy_r_r295, cpy_r_r296, cpy_r_temp2, cpy_r_r297);
    CPy_DECREF(cpy_r_r295);
    CPy_DECREF(cpy_r_temp2);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 986, CPyStatic_emit___globals);
        goto CPyL232;
    }
    cpy_r_r299 = NULL;
    cpy_r_r300 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r298, cpy_r_r299);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r300 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 986, CPyStatic_emit___globals);
        goto CPyL232;
    }
    cpy_r_r301 = cpy_r_r260 + 2;
    cpy_r_r260 = cpy_r_r301;
    cpy_r_i = cpy_r_r301;
    cpy_r_r302 = cpy_r_r263 + 2;
    cpy_r_r263 = cpy_r_r302;
    goto CPyL171;
CPyL192: ;
    cpy_r_r303 = CPyStatics[1406]; /* '}' */
    cpy_r_r304 = NULL;
    cpy_r_r305 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r303, cpy_r_r304);
    if (unlikely(cpy_r_r305 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 987, CPyStatic_emit___globals);
        goto CPyL203;
    }
    if (!cpy_r_optional) goto CPyL202;
    cpy_r_r306 = CPyStatics[1406]; /* '}' */
    cpy_r_r307 = NULL;
    cpy_r_r308 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r306, cpy_r_r307);
    if (unlikely(cpy_r_r308 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 989, CPyStatic_emit___globals);
        goto CPyL203;
    } else
        goto CPyL202;
CPyL195: ;
    if (0) goto CPyL202;
    cpy_r_r309 = PyObject_Str(cpy_r_typ);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 992, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r310 = CPyStatics[6981]; /* 'Unboxing not implemented: ' */
    cpy_r_r311 = CPyStr_Build(2, cpy_r_r310, cpy_r_r309);
    CPy_DECREF(cpy_r_r309);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 992, CPyStatic_emit___globals);
        goto CPyL203;
    }
    cpy_r_r312 = CPyModule_builtins;
    cpy_r_r313 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r314 = CPyObject_GetAttr(cpy_r_r312, cpy_r_r313);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 992, CPyStatic_emit___globals);
        goto CPyL233;
    }
    PyObject *cpy_r_r315[1] = {cpy_r_r311};
    cpy_r_r316 = (PyObject **)&cpy_r_r315;
    cpy_r_r317 = _PyObject_Vectorcall(cpy_r_r314, cpy_r_r316, 1, 0);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 992, CPyStatic_emit___globals);
        goto CPyL233;
    }
    CPy_DECREF(cpy_r_r311);
    CPy_Raise(cpy_r_r317);
    CPy_DECREF(cpy_r_r317);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 992, CPyStatic_emit___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL202: ;
    return 1;
CPyL203: ;
    cpy_r_r318 = 2;
    return cpy_r_r318;
CPyL204: ;
    CPy_INCREF(cpy_r_error);
    goto CPyL4;
CPyL205: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL13;
CPyL206: ;
    CPy_DecRef(cpy_r_error);
    goto CPyL203;
CPyL207: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL24;
CPyL208: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_failure);
    goto CPyL203;
CPyL209: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL38;
CPyL210: ;
    CPy_DecRef(cpy_r_failure);
    goto CPyL203;
CPyL211: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL55;
CPyL212: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL67;
CPyL213: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_failure);
    goto CPyL79;
CPyL214: ;
    CPy_DECREF(cpy_r_failure);
    goto CPyL202;
CPyL215: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_failure);
    goto CPyL91;
CPyL216: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_failure);
    goto CPyL104;
CPyL217: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_failure);
    goto CPyL117;
CPyL218: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL129;
CPyL219: ;
    CPy_DECREF(cpy_r_failure);
    goto CPyL130;
CPyL220: ;
    CPy_DECREF(cpy_r_error);
    CPy_DECREF(cpy_r_failure);
    goto CPyL195;
CPyL221: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_failure);
    CPy_DecRef(cpy_r_cast_temp);
    goto CPyL203;
CPyL222: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_failure);
    CPy_DecRef(cpy_r_cast_temp);
    CPy_DecRef(cpy_r_r237);
    goto CPyL203;
CPyL223: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL203;
CPyL224: ;
    CPy_DECREF(cpy_r_error);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r262);
    goto CPyL192;
CPyL225: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    goto CPyL203;
CPyL226: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL203;
CPyL227: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_temp);
    goto CPyL203;
CPyL228: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_temp);
    CPy_DecRef(cpy_r_temp2);
    goto CPyL203;
CPyL229: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_temp2);
    goto CPyL203;
CPyL230: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_item_type);
    CPy_DecRef(cpy_r_temp);
    CPy_DecRef(cpy_r_temp2);
    goto CPyL184;
CPyL231: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_temp2);
    goto CPyL203;
CPyL232: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r262);
    goto CPyL203;
CPyL233: ;
    CPy_DecRef(cpy_r_r311);
    goto CPyL203;
}

PyObject *CPyPy_emit___Emitter___emit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "declare_dest", "error", "raise_exception", "optional", "borrow", 0};
    static CPyArg_Parser parser = {"OOO|$OOOOO:emit_unbox", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_declare_dest = NULL;
    PyObject *obj_error = NULL;
    PyObject *obj_raise_exception = NULL;
    PyObject *obj_optional = NULL;
    PyObject *obj_borrow = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_declare_dest, &obj_error, &obj_raise_exception, &obj_optional, &obj_borrow)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_declare_dest;
    if (obj_declare_dest == NULL) {
        arg_declare_dest = 2;
    } else if (unlikely(!PyBool_Check(obj_declare_dest))) {
        CPy_TypeError("bool", obj_declare_dest); goto fail;
    } else
        arg_declare_dest = obj_declare_dest == Py_True;
    PyObject *arg_error;
    if (obj_error == NULL) {
        arg_error = NULL;
        goto __LL9206;
    }
    if (PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler))
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9206;
    if (obj_error == Py_None)
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9206;
    CPy_TypeError("mypyc.codegen.emit.ErrorHandler or None", obj_error); 
    goto fail;
__LL9206: ;
    char arg_raise_exception;
    if (obj_raise_exception == NULL) {
        arg_raise_exception = 2;
    } else if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    char arg_optional;
    if (obj_optional == NULL) {
        arg_optional = 2;
    } else if (unlikely(!PyBool_Check(obj_optional))) {
        CPy_TypeError("bool", obj_optional); goto fail;
    } else
        arg_optional = obj_optional == Py_True;
    char arg_borrow;
    if (obj_borrow == NULL) {
        arg_borrow = 2;
    } else if (unlikely(!PyBool_Check(obj_borrow))) {
        CPy_TypeError("bool", obj_borrow); goto fail;
    } else
        arg_borrow = obj_borrow == Py_True;
    char retval = CPyDef_emit___Emitter___emit_unbox(arg_self, arg_src, arg_dest, arg_typ, arg_declare_dest, arg_error, arg_raise_exception, arg_optional, arg_borrow);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox", 832, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_box(PyObject *cpy_r_self, PyObject *cpy_r_src, PyObject *cpy_r_dest, PyObject *cpy_r_typ, char cpy_r_declare_dest, char cpy_r_can_borrow) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_declaration;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_i;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_inner_name;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    if (cpy_r_declare_dest != 2) goto CPyL2;
    cpy_r_declare_dest = 0;
CPyL2: ;
    if (cpy_r_can_borrow != 2) goto CPyL4;
    cpy_r_can_borrow = 0;
CPyL4: ;
    if (!cpy_r_declare_dest) goto CPyL6;
    cpy_r_r0 = CPyStatics[6916]; /* 'PyObject *' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_declaration = cpy_r_r0;
    goto CPyL7;
CPyL6: ;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_declaration = cpy_r_r1;
CPyL7: ;
    cpy_r_r2 = CPyDef_rtypes___is_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1008, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (cpy_r_r2) goto CPyL11;
    cpy_r_r3 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1008, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r3) goto CPyL13;
CPyL11: ;
    cpy_r_r4 = CPyStatics[6982]; /* ' = CPyTagged_StealAsObject(' */
    cpy_r_r5 = CPyStatics[6872]; /* ');' */
    cpy_r_r6 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r4, cpy_r_src, cpy_r_r5);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1010, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1010, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL13: ;
    cpy_r_r9 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1011, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (cpy_r_r9) goto CPyL17;
    cpy_r_r10 = CPyDef_rtypes___is_bit_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1011, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r10) goto CPyL25;
CPyL17: ;
    cpy_r_r11 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r12 = CPyStatics[6983]; /* ' ? Py_True : Py_False;' */
    cpy_r_r13 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r11, cpy_r_src, cpy_r_r12);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1015, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r14 = PyTuple_Pack(1, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1015, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r15 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1015, CPyStatic_emit___globals);
        goto CPyL87;
    }
    if (cpy_r_can_borrow) goto CPyL86;
    cpy_r_r16 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r16 != NULL)) goto CPyL24;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1017, CPyStatic_emit___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_self, cpy_r_dest, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1017, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL25: ;
    cpy_r_r20 = CPyDef_rtypes___is_none_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1018, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r20) goto CPyL35;
    cpy_r_r21 = CPyStatics[6984]; /* ' = Py_None;' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_declaration, cpy_r_dest, cpy_r_r21);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1022, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r23 = PyTuple_Pack(1, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1022, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r24 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1022, CPyStatic_emit___globals);
        goto CPyL87;
    }
    if (cpy_r_can_borrow) goto CPyL86;
    cpy_r_r25 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r25 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1024, CPyStatic_emit___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_self, cpy_r_dest, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1024, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL35: ;
    cpy_r_r29 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1025, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (cpy_r_r29) goto CPyL41;
    cpy_r_r30 = CPyDef_rtypes___is_int16_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1025, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (cpy_r_r30) goto CPyL41;
    cpy_r_r31 = CPyDef_rtypes___is_uint8_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1025, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r31) goto CPyL43;
CPyL41: ;
    cpy_r_r32 = CPyStatics[6985]; /* ' = PyLong_FromLong(' */
    cpy_r_r33 = CPyStatics[6872]; /* ');' */
    cpy_r_r34 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r32, cpy_r_src, cpy_r_r33);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1026, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1026, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL43: ;
    cpy_r_r37 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1027, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r37) goto CPyL47;
    cpy_r_r38 = CPyStatics[6986]; /* ' = PyLong_FromLongLong(' */
    cpy_r_r39 = CPyStatics[6872]; /* ');' */
    cpy_r_r40 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r38, cpy_r_src, cpy_r_r39);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1028, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1028, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL47: ;
    cpy_r_r43 = CPyDef_rtypes___is_float_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1029, CPyStatic_emit___globals);
        goto CPyL88;
    }
    if (!cpy_r_r43) goto CPyL51;
    cpy_r_r44 = CPyStatics[6987]; /* ' = PyFloat_FromDouble(' */
    cpy_r_r45 = CPyStatics[6872]; /* ');' */
    cpy_r_r46 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r44, cpy_r_src, cpy_r_r45);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1030, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1030, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL86;
CPyL51: ;
    cpy_r_r49 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL81;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r53 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1032, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL88;
    }
    cpy_r_r54 = CPyDef_emit___Emitter___declare_tuple_struct(cpy_r_self, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1032, CPyStatic_emit___globals);
        goto CPyL88;
    }
    cpy_r_r55 = CPyStatics[6988]; /* ' = PyTuple_New(' */
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r56 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1033, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL88;
    }
    cpy_r_r57 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r56)->_types;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    CPy_DECREF(cpy_r_r57);
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = CPyTagged_Str(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1033, CPyStatic_emit___globals);
        goto CPyL88;
    }
    cpy_r_r62 = CPyStatics[6872]; /* ');' */
    cpy_r_r63 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r55, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_declaration);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1033, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1033, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r66 = CPyStatics[6892]; /* 'if (unlikely(' */
    cpy_r_r67 = CPyStatics[6989]; /* ' == NULL))' */
    cpy_r_r68 = CPyStr_Build(3, cpy_r_r66, cpy_r_dest, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1034, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1034, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r71 = CPyStatics[6990]; /* '    CPyError_OutOfMemory();' */
    cpy_r_r72 = NULL;
    cpy_r_r73 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1035, CPyStatic_emit___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r74 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1037, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL87;
    }
    cpy_r_r75 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r74)->_types;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r75)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    CPy_DECREF(cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = 0;
    cpy_r_i = cpy_r_r79;
CPyL63: ;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r80) goto CPyL89;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r81 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1038, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL90;
    }
    cpy_r_r82 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r81)->_is_unboxed;
    if (cpy_r_r82) goto CPyL70;
CPyL66: ;
    cpy_r_r83 = CPyStatics[6991]; /* 'PyTuple_SET_ITEM(' */
    cpy_r_r84 = CPyStatics[71]; /* ', ' */
    cpy_r_r85 = CPyTagged_Str(cpy_r_i);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1039, CPyStatic_emit___globals);
        goto CPyL90;
    }
    cpy_r_r86 = CPyStatics[71]; /* ', ' */
    cpy_r_r87 = CPyStatics[6903]; /* '.f' */
    cpy_r_r88 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1039, CPyStatic_emit___globals);
        goto CPyL91;
    }
    cpy_r_r89 = CPyStr_Build(8, cpy_r_r83, cpy_r_dest, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_src, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1039, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1039, CPyStatic_emit___globals);
        goto CPyL87;
    } else
        goto CPyL80;
CPyL70: ;
    cpy_r_r92 = CPyDef_emit___Emitter___temp_name(cpy_r_self);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1041, CPyStatic_emit___globals);
        goto CPyL90;
    }
    cpy_r_inner_name = cpy_r_r92;
    cpy_r_r93 = CPyStatics[6903]; /* '.f' */
    cpy_r_r94 = CPyTagged_Str(cpy_r_i);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals);
        goto CPyL92;
    }
    cpy_r_r95 = CPyStr_Build(3, cpy_r_src, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r96 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL93;
    }
    cpy_r_r97 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r96)->_types;
    CPy_INCREF(cpy_r_r97);
    cpy_r_r98 = CPySequenceTuple_GetItem(cpy_r_r97, cpy_r_i);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_rtypes___RType)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r98);
        goto CPyL93;
    }
    cpy_r_r100 = 2;
    cpy_r_r101 = CPyDef_emit___Emitter___emit_box(cpy_r_self, cpy_r_r95, cpy_r_inner_name, cpy_r_r99, 1, cpy_r_r100);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1042, CPyStatic_emit___globals);
        goto CPyL92;
    }
    cpy_r_r102 = CPyStatics[6991]; /* 'PyTuple_SET_ITEM(' */
    cpy_r_r103 = CPyStatics[71]; /* ', ' */
    cpy_r_r104 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1043, CPyStatic_emit___globals);
        goto CPyL94;
    }
    cpy_r_r105 = CPyStatics[71]; /* ', ' */
    cpy_r_r106 = CPyStatics[6872]; /* ');' */
    cpy_r_r107 = CPyStr_Build(7, cpy_r_r102, cpy_r_dest, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_inner_name, cpy_r_r106);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_inner_name);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1043, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1043, CPyStatic_emit___globals);
        goto CPyL87;
    }
CPyL80: ;
    cpy_r_r110 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r110;
    cpy_r_i = cpy_r_r110;
    goto CPyL63;
CPyL81: ;
    cpy_r_r111 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_is_unboxed;
    cpy_r_r112 = cpy_r_r111 ^ 1;
    if (cpy_r_r112) {
        goto CPyL84;
    } else
        goto CPyL95;
CPyL82: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1045, CPyStatic_emit___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r114 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r115 = CPyStatics[6886]; /* ';' */
    cpy_r_r116 = CPyStr_Build(5, cpy_r_declaration, cpy_r_dest, cpy_r_r114, cpy_r_src, cpy_r_r115);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1047, CPyStatic_emit___globals);
        goto CPyL87;
    }
    cpy_r_r117 = NULL;
    cpy_r_r118 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 1047, CPyStatic_emit___globals);
        goto CPyL87;
    }
CPyL86: ;
    return 1;
CPyL87: ;
    cpy_r_r119 = 2;
    return cpy_r_r119;
CPyL88: ;
    CPy_DecRef(cpy_r_declaration);
    goto CPyL87;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL86;
CPyL90: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL87;
CPyL91: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL87;
CPyL92: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_inner_name);
    goto CPyL87;
CPyL93: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_inner_name);
    CPy_DecRef(cpy_r_r95);
    goto CPyL87;
CPyL94: ;
    CPy_DecRef(cpy_r_inner_name);
    goto CPyL87;
CPyL95: ;
    CPy_DECREF(cpy_r_declaration);
    goto CPyL82;
}

PyObject *CPyPy_emit___Emitter___emit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"src", "dest", "typ", "declare_dest", "can_borrow", 0};
    static CPyArg_Parser parser = {"OOO|OO:emit_box", kwlist, 0};
    PyObject *obj_src;
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_declare_dest = NULL;
    PyObject *obj_can_borrow = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_src, &obj_dest, &obj_typ, &obj_declare_dest, &obj_can_borrow)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    char arg_declare_dest;
    if (obj_declare_dest == NULL) {
        arg_declare_dest = 2;
    } else if (unlikely(!PyBool_Check(obj_declare_dest))) {
        CPy_TypeError("bool", obj_declare_dest); goto fail;
    } else
        arg_declare_dest = obj_declare_dest == Py_True;
    char arg_can_borrow;
    if (obj_can_borrow == NULL) {
        arg_can_borrow = 2;
    } else if (unlikely(!PyBool_Check(obj_can_borrow))) {
        CPy_TypeError("bool", obj_can_borrow); goto fail;
    } else
        arg_can_borrow = obj_can_borrow == Py_True;
    char retval = CPyDef_emit___Emitter___emit_box(arg_self, arg_src, arg_dest, arg_typ, arg_declare_dest, arg_can_borrow);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_box", 994, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_error_check(PyObject *cpy_r_self, PyObject *cpy_r_value, PyObject *cpy_r_rtype, PyObject *cpy_r_failure) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r4 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_error_check", 1052, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL19;
    }
    cpy_r_r5 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r4)->_types;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    if (!cpy_r_r9) goto CPyL4;
    return 1;
CPyL4: ;
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r10 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_error_check", 1055, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL19;
    }
    cpy_r_r11 = CPyStatics[6901]; /* 'c_error_value' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_self, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1055, CPyStatic_emit___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPyStatics[860]; /* '==' */
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_emit___Emitter___tuple_undefined_check_cond(cpy_r_self, cpy_r_r10, cpy_r_value, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1055, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_cond = cpy_r_r15;
    cpy_r_r16 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r17 = CPyStatics[6900]; /* ') {' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_cond, cpy_r_r17);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1056, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1056, CPyStatic_emit___globals);
        goto CPyL19;
    } else
        goto CPyL16;
CPyL9: ;
    cpy_r_r21 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_error_overlap;
    if (!cpy_r_r21) goto CPyL13;
CPyL10: ;
    cpy_r_r22 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r23 = CPyStatics[6992]; /* ' == ' */
    cpy_r_r24 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1060, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r25 = CPyStatics[6993]; /* ' && PyErr_Occurred()) {' */
    cpy_r_r26 = CPyStr_Build(5, cpy_r_r22, cpy_r_value, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1060, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1060, CPyStatic_emit___globals);
        goto CPyL19;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_r29 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r30 = CPyStatics[6992]; /* ' == ' */
    cpy_r_r31 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1062, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r32 = CPyStatics[6900]; /* ') {' */
    cpy_r_r33 = CPyStr_Build(5, cpy_r_r29, cpy_r_value, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1062, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1062, CPyStatic_emit___globals);
        goto CPyL19;
    }
CPyL16: ;
    cpy_r_r36 = CPyStatics[1406]; /* '}' */
    cpy_r_r37 = PyTuple_Pack(2, cpy_r_failure, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1063, CPyStatic_emit___globals);
        goto CPyL19;
    }
    cpy_r_r38 = CPyDef_emit___Emitter___emit_lines(cpy_r_self, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1063, CPyStatic_emit___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL20: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL19;
}

PyObject *CPyPy_emit___Emitter___emit_error_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", "rtype", "failure", 0};
    static CPyArg_Parser parser = {"OOO:emit_error_check", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_rtype;
    PyObject *obj_failure;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_rtype, &obj_failure)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *arg_failure;
    if (likely(PyUnicode_Check(obj_failure)))
        arg_failure = obj_failure;
    else {
        CPy_TypeError("str", obj_failure); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_error_check(arg_self, arg_value, arg_rtype, arg_failure);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_error_check", 1049, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_gc_visit(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_rtype) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_refcounted;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1074, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL41;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "emit_gc_visit", "RPrimitive", "name", 1074, CPyStatic_emit___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1074, CPyStatic_emit___globals);
        goto CPyL41;
    }
CPyL8: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r14 = CPyStatics[6994]; /* 'if (CPyTagged_CheckLong(' */
    cpy_r_r15 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_target, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1075, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1075, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r19 = CPyStatics[6995]; /* 'Py_VISIT(CPyTagged_LongAsObject(' */
    cpy_r_r20 = CPyStatics[6996]; /* '));' */
    cpy_r_r21 = CPyStr_Build(3, cpy_r_r19, cpy_r_target, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1076, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1076, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r24 = CPyStatics[1406]; /* '}' */
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1077, CPyStatic_emit___globals);
        goto CPyL41;
    } else
        goto CPyL40;
CPyL14: ;
    cpy_r_r27 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL24;
    cpy_r_r31 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r32 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1079, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL42;
    }
    cpy_r_r33 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r32)->_types;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = 0;
CPyL17: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL43;
    cpy_r_r39 = CPySequenceTuple_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1079, CPyStatic_emit___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_rtypes___RType)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1079, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r39);
        goto CPyL44;
    }
    cpy_r_item_type = cpy_r_r40;
    cpy_r_r41 = CPyStatics[6903]; /* '.f' */
    cpy_r_r42 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1080, CPyStatic_emit___globals);
        goto CPyL45;
    }
    cpy_r_r43 = CPyStr_Build(3, cpy_r_target, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1080, CPyStatic_emit___globals);
        goto CPyL45;
    }
    cpy_r_r44 = CPyDef_emit___Emitter___emit_gc_visit(cpy_r_self, cpy_r_r43, cpy_r_item_type);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1080, CPyStatic_emit___globals);
        goto CPyL46;
    }
    cpy_r_r45 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r45;
    cpy_r_i = cpy_r_r45;
    cpy_r_r46 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r46;
    goto CPyL17;
CPyL24: ;
    cpy_r_r47 = CPyDef_emit___Emitter___ctype(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1081, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r48 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL28;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL28;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1081, CPyStatic_emit___globals);
        goto CPyL41;
    }
CPyL28: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    if (!cpy_r_r54) goto CPyL31;
    cpy_r_r55 = CPyStatics[6997]; /* 'Py_VISIT(' */
    cpy_r_r56 = CPyStatics[6872]; /* ');' */
    cpy_r_r57 = CPyStr_Build(3, cpy_r_r55, cpy_r_target, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1083, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1083, CPyStatic_emit___globals);
        goto CPyL41;
    } else
        goto CPyL40;
CPyL31: ;
    if (0) goto CPyL40;
    cpy_r_r60 = CPyModule_builtins;
    cpy_r_r61 = CPyStatics[146]; /* 'repr' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r63[1] = {cpy_r_rtype};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals, "str", cpy_r_r65);
        goto CPyL41;
    }
    cpy_r_r67 = CPyStatics[6998]; /* 'emit_gc_visit() not implemented for ' */
    cpy_r_r68 = CPyStr_Build(2, cpy_r_r67, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r69 = CPyModule_builtins;
    cpy_r_r70 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r72[1] = {cpy_r_r68};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 1, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r68);
    CPy_Raise(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1085, CPyStatic_emit___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL40: ;
    return 1;
CPyL41: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL41;
CPyL43: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r33);
    goto CPyL40;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r33);
    goto CPyL41;
CPyL45: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL41;
CPyL46: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL41;
CPyL47: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL41;
}

PyObject *CPyPy_emit___Emitter___emit_gc_visit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "rtype", 0};
    static CPyArg_Parser parser = {"OO:emit_gc_visit", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_gc_visit(arg_self, arg_target, arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_visit", 1065, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_gc_clear(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_rtype) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    cpy_r_r0 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_rtype)->_is_refcounted;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RPrimitive;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r5 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1096, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL51;
    }
    cpy_r_r6 = ((mypyc___ir___rtypes___RPrimitiveObject *)cpy_r_r5)->_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emit.py", "emit_gc_clear", "RPrimitive", "name", 1096, CPyStatic_emit___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1096, CPyStatic_emit___globals);
        goto CPyL51;
    }
CPyL8: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = CPyStatics[6994]; /* 'if (CPyTagged_CheckLong(' */
    cpy_r_r15 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_target, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1097, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1097, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r19 = CPyStatics[6999]; /* 'CPyTagged __tmp = ' */
    cpy_r_r20 = CPyStatics[6886]; /* ';' */
    cpy_r_r21 = CPyStr_Build(3, cpy_r_r19, cpy_r_target, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1098, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1098, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r24 = CPyStatics[1538]; /* ' = ' */
    CPy_INCREF(cpy_r_rtype);
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RPrimitive))
        cpy_r_r25 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1099, CPyStatic_emit___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_rtype);
        goto CPyL51;
    }
    cpy_r_r26 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1099, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r27 = CPyStatics[6886]; /* ';' */
    cpy_r_r28 = CPyStr_Build(4, cpy_r_target, cpy_r_r24, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1099, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1099, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r31 = CPyStatics[7000]; /* 'Py_XDECREF(CPyTagged_LongAsObject(__tmp));' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1100, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r34 = CPyStatics[1406]; /* '}' */
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1101, CPyStatic_emit___globals);
        goto CPyL51;
    } else
        goto CPyL50;
CPyL19: ;
    cpy_r_r37 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_rtype)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL29;
    cpy_r_r41 = 0;
    cpy_r_i = 0;
    if (likely(Py_TYPE(cpy_r_rtype) == CPyType_rtypes___RTuple))
        cpy_r_r42 = cpy_r_rtype;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1103, CPyStatic_emit___globals, "mypyc.ir.rtypes.RTuple", cpy_r_rtype);
        goto CPyL52;
    }
    cpy_r_r43 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r42)->_types;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = 0;
CPyL22: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL53;
    cpy_r_r49 = CPySequenceTuple_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1103, CPyStatic_emit___globals);
        goto CPyL54;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_rtypes___RType)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1103, CPyStatic_emit___globals, "mypyc.ir.rtypes.RType", cpy_r_r49);
        goto CPyL54;
    }
    cpy_r_item_type = cpy_r_r50;
    cpy_r_r51 = CPyStatics[6903]; /* '.f' */
    cpy_r_r52 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1104, CPyStatic_emit___globals);
        goto CPyL55;
    }
    cpy_r_r53 = CPyStr_Build(3, cpy_r_target, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1104, CPyStatic_emit___globals);
        goto CPyL55;
    }
    cpy_r_r54 = CPyDef_emit___Emitter___emit_gc_clear(cpy_r_self, cpy_r_r53, cpy_r_item_type);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1104, CPyStatic_emit___globals);
        goto CPyL56;
    }
    cpy_r_r55 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r55;
    cpy_r_i = cpy_r_r55;
    cpy_r_r56 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r56;
    goto CPyL22;
CPyL29: ;
    cpy_r_r57 = CPyDef_emit___Emitter___ctype(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1105, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r58 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r59 = PyUnicode_Compare(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r60 = cpy_r_r59 == -1;
    if (!cpy_r_r60) goto CPyL33;
    cpy_r_r61 = PyErr_Occurred();
    cpy_r_r62 = cpy_r_r61 != NULL;
    if (!cpy_r_r62) goto CPyL33;
    cpy_r_r63 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1105, CPyStatic_emit___globals);
        goto CPyL51;
    }
CPyL33: ;
    cpy_r_r64 = cpy_r_r59 == 0;
    if (!cpy_r_r64) goto CPyL41;
    cpy_r_r65 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_self, cpy_r_rtype);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1105, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r66 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r67 = PyUnicode_Compare(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 == -1;
    if (!cpy_r_r68) goto CPyL38;
    cpy_r_r69 = PyErr_Occurred();
    cpy_r_r70 = cpy_r_r69 != NULL;
    if (!cpy_r_r70) goto CPyL38;
    cpy_r_r71 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1105, CPyStatic_emit___globals);
        goto CPyL51;
    }
CPyL38: ;
    cpy_r_r72 = cpy_r_r67 == 0;
    if (!cpy_r_r72) goto CPyL41;
    cpy_r_r73 = CPyStatics[7001]; /* 'Py_CLEAR(' */
    cpy_r_r74 = CPyStatics[6872]; /* ');' */
    cpy_r_r75 = CPyStr_Build(3, cpy_r_r73, cpy_r_target, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1107, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1107, CPyStatic_emit___globals);
        goto CPyL51;
    } else
        goto CPyL50;
CPyL41: ;
    if (0) goto CPyL50;
    cpy_r_r78 = CPyModule_builtins;
    cpy_r_r79 = CPyStatics[146]; /* 'repr' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_rtype};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL51;
    }
    if (likely(PyUnicode_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals, "str", cpy_r_r83);
        goto CPyL51;
    }
    cpy_r_r85 = CPyStatics[7002]; /* 'emit_gc_clear() not implemented for ' */
    cpy_r_r86 = CPyStr_Build(2, cpy_r_r85, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL51;
    }
    cpy_r_r87 = CPyModule_builtins;
    cpy_r_r88 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r89 = CPyObject_GetAttr(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r90[1] = {cpy_r_r86};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r91, 1, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r86);
    CPy_Raise(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1109, CPyStatic_emit___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL50: ;
    return 1;
CPyL51: ;
    cpy_r_r93 = 2;
    return cpy_r_r93;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL51;
CPyL53: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r43);
    goto CPyL50;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r43);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_item_type);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL51;
}

PyObject *CPyPy_emit___Emitter___emit_gc_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "rtype", 0};
    static CPyArg_Parser parser = {"OO:emit_gc_clear", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_gc_clear(arg_self, arg_target, arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_gc_clear", 1087, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_traceback(PyObject *cpy_r_self, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyStatics[7003]; /* 'CPy_AddTraceback' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter____emit_traceback(cpy_r_self, cpy_r_r0, cpy_r_source_path, cpy_r_module_name, cpy_r_traceback_entry, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_traceback", 1114, CPyStatic_emit___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_emit___Emitter___emit_traceback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"source_path", "module_name", "traceback_entry", 0};
    static CPyArg_Parser parser = {"OOO:emit_traceback", kwlist, 0};
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    PyObject *obj_traceback_entry;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_source_path, &obj_module_name, &obj_traceback_entry)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    tuple_T2OI arg_traceback_entry;
    PyObject *__tmp9207;
    if (unlikely(!(PyTuple_Check(obj_traceback_entry) && PyTuple_GET_SIZE(obj_traceback_entry) == 2))) {
        __tmp9207 = NULL;
        goto __LL9208;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_traceback_entry, 0))))
        __tmp9207 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
    else {
        __tmp9207 = NULL;
    }
    if (__tmp9207 == NULL) goto __LL9208;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_traceback_entry, 1))))
        __tmp9207 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
    else {
        __tmp9207 = NULL;
    }
    if (__tmp9207 == NULL) goto __LL9208;
    __tmp9207 = obj_traceback_entry;
__LL9208: ;
    if (unlikely(__tmp9207 == NULL)) {
        CPy_TypeError("tuple[str, int]", obj_traceback_entry); goto fail;
    } else {
        PyObject *__tmp9209 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
        PyObject *__tmp9210;
        if (likely(PyUnicode_Check(__tmp9209)))
            __tmp9210 = __tmp9209;
        else {
            CPy_TypeError("str", __tmp9209); 
            __tmp9210 = NULL;
        }
        arg_traceback_entry.f0 = __tmp9210;
        PyObject *__tmp9211 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
        CPyTagged __tmp9212;
        if (likely(PyLong_Check(__tmp9211)))
            __tmp9212 = CPyTagged_BorrowFromObject(__tmp9211);
        else {
            CPy_TypeError("int", __tmp9211); goto fail;
        }
        arg_traceback_entry.f1 = __tmp9212;
    }
    char retval = CPyDef_emit___Emitter___emit_traceback(arg_self, arg_source_path, arg_module_name, arg_traceback_entry);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_traceback", 1111, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_type_error_traceback(PyObject *cpy_r_self, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry, PyObject *cpy_r_typ, PyObject *cpy_r_src) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_type_str;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyStatics[7004]; /* 'CPy_TypeErrorTraceback' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_func = cpy_r_r0;
    cpy_r_r1 = CPyStatics[178]; /* '"' */
    cpy_r_r2 = CPyDef_emit___Emitter___pretty_name(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_type_error_traceback", 1126, CPyStatic_emit___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyStatics[178]; /* '"' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_type_error_traceback", 1126, CPyStatic_emit___globals);
        goto CPyL5;
    }
    cpy_r_type_str = cpy_r_r4;
    cpy_r_r5 = CPyDef_emit___Emitter____emit_traceback(cpy_r_self, cpy_r_func, cpy_r_source_path, cpy_r_module_name, cpy_r_traceback_entry, cpy_r_type_str, cpy_r_src);
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_type_str);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_type_error_traceback", 1127, CPyStatic_emit___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL4;
}

PyObject *CPyPy_emit___Emitter___emit_type_error_traceback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"source_path", "module_name", "traceback_entry", "typ", "src", 0};
    static CPyArg_Parser parser = {"OOO|$@OO:emit_type_error_traceback", kwlist, 0};
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    PyObject *obj_traceback_entry;
    PyObject *obj_typ;
    PyObject *obj_src;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_source_path, &obj_module_name, &obj_traceback_entry, &obj_typ, &obj_src)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    tuple_T2OI arg_traceback_entry;
    PyObject *__tmp9213;
    if (unlikely(!(PyTuple_Check(obj_traceback_entry) && PyTuple_GET_SIZE(obj_traceback_entry) == 2))) {
        __tmp9213 = NULL;
        goto __LL9214;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_traceback_entry, 0))))
        __tmp9213 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
    else {
        __tmp9213 = NULL;
    }
    if (__tmp9213 == NULL) goto __LL9214;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_traceback_entry, 1))))
        __tmp9213 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
    else {
        __tmp9213 = NULL;
    }
    if (__tmp9213 == NULL) goto __LL9214;
    __tmp9213 = obj_traceback_entry;
__LL9214: ;
    if (unlikely(__tmp9213 == NULL)) {
        CPy_TypeError("tuple[str, int]", obj_traceback_entry); goto fail;
    } else {
        PyObject *__tmp9215 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
        PyObject *__tmp9216;
        if (likely(PyUnicode_Check(__tmp9215)))
            __tmp9216 = __tmp9215;
        else {
            CPy_TypeError("str", __tmp9215); 
            __tmp9216 = NULL;
        }
        arg_traceback_entry.f0 = __tmp9216;
        PyObject *__tmp9217 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
        CPyTagged __tmp9218;
        if (likely(PyLong_Check(__tmp9217)))
            __tmp9218 = CPyTagged_BorrowFromObject(__tmp9217);
        else {
            CPy_TypeError("int", __tmp9217); goto fail;
        }
        arg_traceback_entry.f1 = __tmp9218;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_type_error_traceback(arg_self, arg_source_path, arg_module_name, arg_traceback_entry, arg_typ, arg_src);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_type_error_traceback", 1116, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter____emit_traceback(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name, tuple_T2OI cpy_r_traceback_entry, PyObject *cpy_r_type_str, PyObject *cpy_r_src) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_globals_static;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_line;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    if (cpy_r_type_str != NULL) goto CPyL21;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_type_str = cpy_r_r0;
CPyL2: ;
    if (cpy_r_src != NULL) goto CPyL22;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_src = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_emit___Emitter___static_name(cpy_r_self, cpy_r_r2, cpy_r_module_name, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1140, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_globals_static = cpy_r_r4;
    cpy_r_r5 = CPyStatics[5539]; /* '\\' */
    cpy_r_r6 = CPyStatics[7005]; /* '\\\\' */
    cpy_r_r7 = PyUnicode_Replace(cpy_r_source_path, cpy_r_r5, cpy_r_r6, -1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1143, CPyStatic_emit___globals);
        goto CPyL24;
    }
    cpy_r_r8 = cpy_r_traceback_entry.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_traceback_entry.f1;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyTagged_Str(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1141, CPyStatic_emit___globals);
        goto CPyL25;
    }
    cpy_r_r11 = CPyStatics[7006]; /* '("' */
    cpy_r_r12 = CPyStatics[3415]; /* '", "' */
    cpy_r_r13 = CPyStatics[6942]; /* '", ' */
    cpy_r_r14 = CPyStatics[71]; /* ', ' */
    cpy_r_r15 = CPyStr_Build(9, cpy_r_func, cpy_r_r11, cpy_r_r7, cpy_r_r12, cpy_r_r8, cpy_r_r13, cpy_r_r10, cpy_r_r14, cpy_r_globals_static);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_globals_static);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1141, CPyStatic_emit___globals);
        goto CPyL23;
    }
    cpy_r_line = cpy_r_r15;
    cpy_r_r16 = CPyStr_IsTrue(cpy_r_type_str);
    if (!cpy_r_r16) goto CPyL26;
    cpy_r_r17 = CPyStr_IsTrue(cpy_r_src);
    if (cpy_r_r17) {
        goto CPyL12;
    } else
        goto CPyL27;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1149, CPyStatic_emit___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r19 = CPyStatics[71]; /* ', ' */
    cpy_r_r20 = CPyStatics[71]; /* ', ' */
    cpy_r_r21 = CPyStr_Build(4, cpy_r_r19, cpy_r_type_str, cpy_r_r20, cpy_r_src);
    CPy_DECREF(cpy_r_type_str);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1150, CPyStatic_emit___globals);
        goto CPyL28;
    }
    cpy_r_r22 = CPyStr_Append(cpy_r_line, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1150, CPyStatic_emit___globals);
        goto CPyL20;
    }
    cpy_r_line = cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = CPyStatics[6872]; /* ');' */
    cpy_r_r24 = CPyStr_Append(cpy_r_line, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1151, CPyStatic_emit___globals);
        goto CPyL20;
    }
    cpy_r_line = cpy_r_r24;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_line, cpy_r_r25);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1152, CPyStatic_emit___globals);
        goto CPyL20;
    }
    if (!0) goto CPyL19;
    cpy_r_r27 = CPyStatics[7007]; /* 'assert(PyErr_Occurred() != NULL && "failure w/o err!");' */
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1154, CPyStatic_emit___globals);
        goto CPyL20;
    }
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL21: ;
    CPy_INCREF(cpy_r_type_str);
    goto CPyL2;
CPyL22: ;
    CPy_INCREF(cpy_r_src);
    goto CPyL4;
CPyL23: ;
    CPy_DecRef(cpy_r_type_str);
    CPy_DecRef(cpy_r_src);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_type_str);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_globals_static);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_type_str);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_type_str);
    CPy_DECREF(cpy_r_src);
    goto CPyL15;
CPyL27: ;
    CPy_DECREF(cpy_r_type_str);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_line);
    goto CPyL10;
CPyL28: ;
    CPy_DecRef(cpy_r_line);
    goto CPyL20;
}

PyObject *CPyPy_emit___Emitter____emit_traceback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", "source_path", "module_name", "traceback_entry", "type_str", "src", 0};
    static CPyArg_Parser parser = {"OOOO|OO:_emit_traceback", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    PyObject *obj_traceback_entry;
    PyObject *obj_type_str = NULL;
    PyObject *obj_src = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_source_path, &obj_module_name, &obj_traceback_entry, &obj_type_str, &obj_src)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(PyUnicode_Check(obj_func)))
        arg_func = obj_func;
    else {
        CPy_TypeError("str", obj_func); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    tuple_T2OI arg_traceback_entry;
    PyObject *__tmp9219;
    if (unlikely(!(PyTuple_Check(obj_traceback_entry) && PyTuple_GET_SIZE(obj_traceback_entry) == 2))) {
        __tmp9219 = NULL;
        goto __LL9220;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_traceback_entry, 0))))
        __tmp9219 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
    else {
        __tmp9219 = NULL;
    }
    if (__tmp9219 == NULL) goto __LL9220;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_traceback_entry, 1))))
        __tmp9219 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
    else {
        __tmp9219 = NULL;
    }
    if (__tmp9219 == NULL) goto __LL9220;
    __tmp9219 = obj_traceback_entry;
__LL9220: ;
    if (unlikely(__tmp9219 == NULL)) {
        CPy_TypeError("tuple[str, int]", obj_traceback_entry); goto fail;
    } else {
        PyObject *__tmp9221 = PyTuple_GET_ITEM(obj_traceback_entry, 0);
        PyObject *__tmp9222;
        if (likely(PyUnicode_Check(__tmp9221)))
            __tmp9222 = __tmp9221;
        else {
            CPy_TypeError("str", __tmp9221); 
            __tmp9222 = NULL;
        }
        arg_traceback_entry.f0 = __tmp9222;
        PyObject *__tmp9223 = PyTuple_GET_ITEM(obj_traceback_entry, 1);
        CPyTagged __tmp9224;
        if (likely(PyLong_Check(__tmp9223)))
            __tmp9224 = CPyTagged_BorrowFromObject(__tmp9223);
        else {
            CPy_TypeError("int", __tmp9223); goto fail;
        }
        arg_traceback_entry.f1 = __tmp9224;
    }
    PyObject *arg_type_str;
    if (obj_type_str == NULL) {
        arg_type_str = NULL;
    } else if (likely(PyUnicode_Check(obj_type_str)))
        arg_type_str = obj_type_str;
    else {
        CPy_TypeError("str", obj_type_str); 
        goto fail;
    }
    PyObject *arg_src;
    if (obj_src == NULL) {
        arg_src = NULL;
    } else if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter____emit_traceback(arg_self, arg_func, arg_source_path, arg_module_name, arg_traceback_entry, arg_type_str, arg_src);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "_emit_traceback", 1131, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(PyObject *cpy_r_self, PyObject *cpy_r_dest, PyObject *cpy_r_typ, PyObject *cpy_r_failure) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r1 = CPyStatics[6992]; /* ' == ' */
    cpy_r_r2 = CPyDef_emit___Emitter___c_error_value(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1159, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatics[6993]; /* ' && PyErr_Occurred()) {' */
    cpy_r_r4 = CPyStr_Build(5, cpy_r_r0, cpy_r_dest, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1159, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1159, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_failure, cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1160, CPyStatic_emit___globals);
        goto CPyL6;
    }
    cpy_r_r9 = CPyStatics[1406]; /* '}' */
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_emit___Emitter___emit_line(cpy_r_self, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1161, CPyStatic_emit___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
}

PyObject *CPyPy_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", "typ", "failure", 0};
    static CPyArg_Parser parser = {"OOO:emit_unbox_failure_with_overlapping_error_value", kwlist, 0};
    PyObject *obj_dest;
    PyObject *obj_typ;
    PyObject *obj_failure;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dest, &obj_typ, &obj_failure)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emit___Emitter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_self); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_failure;
    if (likely(PyUnicode_Check(obj_failure)))
        arg_failure = obj_failure;
    else {
        CPy_TypeError("str", obj_failure); 
        goto fail;
    }
    char retval = CPyDef_emit___Emitter___emit_unbox_failure_with_overlapping_error_value(arg_self, arg_dest, arg_typ, arg_failure);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "emit_unbox_failure_with_overlapping_error_value", 1156, CPyStatic_emit___globals);
    return NULL;
}

PyObject *CPyDef_emit___c_array_initializer(PyObject *cpy_r_components, char cpy_r_indented) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_indent;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_current;
    CPyTagged cpy_r_cur_len;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_c;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
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
    if (cpy_r_indented != 2) goto CPyL2;
    cpy_r_indented = 0;
CPyL2: ;
    if (!cpy_r_indented) goto CPyL4;
    cpy_r_r0 = CPyStatics[309]; /* '    ' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0;
    goto CPyL5;
CPyL4: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_r1 = cpy_r_r2;
CPyL5: ;
    cpy_r_indent = cpy_r_r1;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1177, CPyStatic_emit___globals);
        goto CPyL40;
    }
    cpy_r_res = cpy_r_r3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1178, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_current = cpy_r_r4;
    cpy_r_cur_len = 0;
    cpy_r_r5 = 0;
CPyL8: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL42;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_components, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1180, CPyStatic_emit___globals, "str", cpy_r_r10);
        goto CPyL43;
    }
    cpy_r_c = cpy_r_r11;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_current)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = CPyTagged_Add(cpy_r_cur_len, 4);
    cpy_r_r17 = CPyStr_Size_size_t(cpy_r_indent);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1181, CPyStatic_emit___globals);
        goto CPyL44;
    }
    cpy_r_r19 = cpy_r_r17 << 1;
    cpy_r_r20 = CPyTagged_Add(cpy_r_r16, cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r16);
    cpy_r_r21 = CPyStr_Size_size_t(cpy_r_c);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1181, CPyStatic_emit___globals);
        goto CPyL45;
    }
    cpy_r_r23 = cpy_r_r21 << 1;
    cpy_r_r24 = CPyTagged_Add(cpy_r_r20, cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_r25 = cpy_r_r24 & 1;
    cpy_r_r26 = cpy_r_r25 != 0;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = CPyTagged_IsLt_(cpy_r_r24, 140);
    CPyTagged_DECREF(cpy_r_r24);
    if (cpy_r_r27) {
        goto CPyL16;
    } else
        goto CPyL46;
CPyL15: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)140;
    CPyTagged_DECREF(cpy_r_r24);
    if (!cpy_r_r28) goto CPyL46;
CPyL16: ;
    cpy_r_r29 = PyList_Append(cpy_r_current, cpy_r_c);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1182, CPyStatic_emit___globals);
        goto CPyL47;
    }
    cpy_r_r31 = CPyStr_Size_size_t(cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1183, CPyStatic_emit___globals);
        goto CPyL43;
    }
    cpy_r_r33 = cpy_r_r31 << 1;
    cpy_r_r34 = CPyTagged_Add(cpy_r_r33, 4);
    cpy_r_r35 = CPyTagged_Add(cpy_r_cur_len, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_cur_len);
    CPyTagged_DECREF(cpy_r_r34);
    cpy_r_cur_len = cpy_r_r35;
    goto CPyL25;
CPyL19: ;
    cpy_r_r36 = CPyStatics[71]; /* ', ' */
    cpy_r_r37 = PyUnicode_Join(cpy_r_r36, cpy_r_current);
    CPy_DECREF(cpy_r_current);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1185, CPyStatic_emit___globals);
        goto CPyL48;
    }
    cpy_r_r38 = PyUnicode_Concat(cpy_r_indent, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1185, CPyStatic_emit___globals);
        goto CPyL48;
    }
    cpy_r_r39 = PyList_Append(cpy_r_res, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1185, CPyStatic_emit___globals);
        goto CPyL48;
    }
    cpy_r_r41 = PyList_New(1);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1186, CPyStatic_emit___globals);
        goto CPyL48;
    }
    cpy_r_r42 = (CPyPtr)&((PyListObject *)cpy_r_r41)->ob_item;
    cpy_r_r43 = *(CPyPtr *)cpy_r_r42;
    CPy_INCREF(cpy_r_c);
    *(PyObject * *)cpy_r_r43 = cpy_r_c;
    cpy_r_current = cpy_r_r41;
    cpy_r_r44 = CPyStr_Size_size_t(cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1187, CPyStatic_emit___globals);
        goto CPyL49;
    }
    cpy_r_r46 = cpy_r_r44 << 1;
    cpy_r_cur_len = cpy_r_r46;
CPyL25: ;
    cpy_r_r47 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r47;
    goto CPyL8;
CPyL26: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_res)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (cpy_r_r51) {
        goto CPyL30;
    } else
        goto CPyL50;
CPyL27: ;
    cpy_r_r52 = CPyStatics[71]; /* ', ' */
    cpy_r_r53 = PyUnicode_Join(cpy_r_r52, cpy_r_current);
    CPy_DECREF(cpy_r_current);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1190, CPyStatic_emit___globals);
        goto CPyL39;
    }
    cpy_r_r54 = CPyStatics[1405]; /* '{' */
    cpy_r_r55 = CPyStatics[1406]; /* '}' */
    cpy_r_r56 = CPyStr_Build(3, cpy_r_r54, cpy_r_r53, cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1190, CPyStatic_emit___globals);
        goto CPyL39;
    }
    return cpy_r_r56;
CPyL30: ;
    cpy_r_r57 = CPyStatics[71]; /* ', ' */
    cpy_r_r58 = PyUnicode_Join(cpy_r_r57, cpy_r_current);
    CPy_DECREF(cpy_r_current);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1192, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r59 = PyUnicode_Concat(cpy_r_indent, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1192, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r60 = PyList_Append(cpy_r_res, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1192, CPyStatic_emit___globals);
        goto CPyL41;
    }
    cpy_r_r62 = CPyStatics[7008]; /* '{\n    ' */
    cpy_r_r63 = CPyStatics[7009]; /* ',\n    ' */
    cpy_r_r64 = PyUnicode_Join(cpy_r_r63, cpy_r_res);
    CPy_DECREF(cpy_r_res);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1193, CPyStatic_emit___globals);
        goto CPyL40;
    }
    cpy_r_r65 = PyUnicode_Concat(cpy_r_r62, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1193, CPyStatic_emit___globals);
        goto CPyL40;
    }
    cpy_r_r66 = CPyStatics[189]; /* '\n' */
    cpy_r_r67 = PyUnicode_Concat(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1193, CPyStatic_emit___globals);
        goto CPyL40;
    }
    cpy_r_r68 = PyUnicode_Concat(cpy_r_r67, cpy_r_indent);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_indent);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1193, CPyStatic_emit___globals);
        goto CPyL39;
    }
    cpy_r_r69 = CPyStatics[1406]; /* '}' */
    cpy_r_r70 = PyUnicode_Concat(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1193, CPyStatic_emit___globals);
        goto CPyL39;
    }
    return cpy_r_r70;
CPyL39: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL40: ;
    CPy_DecRef(cpy_r_indent);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    goto CPyL39;
CPyL42: ;
    CPyTagged_DECREF(cpy_r_cur_len);
    goto CPyL26;
CPyL43: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_current);
    CPyTagged_DecRef(cpy_r_cur_len);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_current);
    CPyTagged_DecRef(cpy_r_cur_len);
    CPy_DecRef(cpy_r_c);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_current);
    CPyTagged_DecRef(cpy_r_cur_len);
    CPy_DecRef(cpy_r_c);
    CPyTagged_DecRef(cpy_r_r20);
    goto CPyL39;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_cur_len);
    goto CPyL19;
CPyL47: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_current);
    CPyTagged_DecRef(cpy_r_cur_len);
    CPy_DecRef(cpy_r_c);
    goto CPyL39;
CPyL48: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_c);
    goto CPyL39;
CPyL49: ;
    CPy_DecRef(cpy_r_indent);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_current);
    goto CPyL39;
CPyL50: ;
    CPy_DECREF(cpy_r_indent);
    CPy_DECREF(cpy_r_res);
    goto CPyL27;
}

PyObject *CPyPy_emit___c_array_initializer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"components", "indented", 0};
    static CPyArg_Parser parser = {"O|$O:c_array_initializer", kwlist, 0};
    PyObject *obj_components;
    PyObject *obj_indented = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_components, &obj_indented)) {
        return NULL;
    }
    PyObject *arg_components;
    if (likely(PyList_Check(obj_components)))
        arg_components = obj_components;
    else {
        CPy_TypeError("list", obj_components); 
        goto fail;
    }
    char arg_indented;
    if (obj_indented == NULL) {
        arg_indented = 2;
    } else if (unlikely(!PyBool_Check(obj_indented))) {
        CPy_TypeError("bool", obj_indented); goto fail;
    } else
        arg_indented = obj_indented == Py_True;
    PyObject *retval = CPyDef_emit___c_array_initializer(arg_components, arg_indented);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emit.py", "c_array_initializer", 1164, CPyStatic_emit___globals);
    return NULL;
}

char CPyDef_emit_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    PyObject **cpy_r_r11;
    void *cpy_r_r13;
    void *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
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
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_emit___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 3, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_pprint;
    cpy_r_r10 = (PyObject **)&CPyModule_sys;
    cpy_r_r11 = (PyObject **)&CPyModule_textwrap;
    PyObject **cpy_r_r12[3] = {cpy_r_r9, cpy_r_r10, cpy_r_r11};
    cpy_r_r13 = (void *)&cpy_r_r12;
    int64_t cpy_r_r14[3] = {5, 6, 7};
    cpy_r_r15 = (void *)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9939]; /* (('pprint', 'pprint', 'pprint'), ('sys', 'sys', 'sys'),
                                     ('textwrap', 'textwrap', 'textwrap')) */
    cpy_r_r17 = CPyStatic_emit___globals;
    cpy_r_r18 = CPyStatics[7010]; /* 'mypyc/codegen/emit.py' */
    cpy_r_r19 = CPyStatics[17]; /* '<module>' */
    cpy_r_r20 = CPyImport_ImportMany(cpy_r_r16, cpy_r_r13, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r15);
    if (!cpy_r_r20) goto CPyL60;
    cpy_r_r21 = CPyStatics[9443]; /* ('Callable', 'Final') */
    cpy_r_r22 = CPyStatics[21]; /* 'typing' */
    cpy_r_r23 = CPyStatic_emit___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 8, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_typing = cpy_r_r24;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9940]; /* ('Literals',) */
    cpy_r_r26 = CPyStatics[7012]; /* 'mypyc.codegen.literals' */
    cpy_r_r27 = CPyStatic_emit___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 10, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___codegen___literals = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___codegen___literals);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9941]; /* ('ATTR_PREFIX', 'BITMAP_BITS',
                                     'FAST_ISINSTANCE_MAX_SUBCLASSES', 'NATIVE_PREFIX',
                                     'REG_PREFIX', 'STATIC_PREFIX', 'TYPE_PREFIX',
                                     'use_vectorcall') */
    cpy_r_r30 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r31 = CPyStatic_emit___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 11, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___common = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9942]; /* ('ClassIR', 'all_concrete_classes') */
    cpy_r_r34 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r35 = CPyStatic_emit___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 21, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9943]; /* ('FuncDecl',) */
    cpy_r_r38 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r39 = CPyStatic_emit___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 22, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9944]; /* ('BasicBlock', 'Value') */
    cpy_r_r42 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r43 = CPyStatic_emit___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 23, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9945]; /* ('RInstance', 'RPrimitive', 'RTuple', 'RType', 'RUnion',
                                     'int_rprimitive', 'is_bit_rprimitive',
                                     'is_bool_rprimitive', 'is_bytes_rprimitive',
                                     'is_dict_rprimitive', 'is_fixed_width_rtype',
                                     'is_float_rprimitive', 'is_int16_rprimitive',
                                     'is_int32_rprimitive', 'is_int64_rprimitive',
                                     'is_int_rprimitive', 'is_list_rprimitive',
                                     'is_none_rprimitive', 'is_object_rprimitive',
                                     'is_optional_type', 'is_range_rprimitive',
                                     'is_set_rprimitive', 'is_short_int_rprimitive',
                                     'is_str_rprimitive', 'is_tuple_rprimitive',
                                     'is_uint8_rprimitive', 'object_rprimitive',
                                     'optional_value_type') */
    cpy_r_r46 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r47 = CPyStatic_emit___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 24, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9946]; /* ('NameGenerator', 'exported_name') */
    cpy_r_r50 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r51 = CPyStatic_emit___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 54, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___namegen = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9947]; /* ('is_same_type',) */
    cpy_r_r54 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r55 = CPyStatic_emit___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 55, CPyStatic_emit___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___sametype = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___sametype);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatic_emit___globals;
    cpy_r_r58 = CPyStatics[7046]; /* 'DEBUG_ERRORS' */
    cpy_r_r59 = 0 ? Py_True : Py_False;
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 59, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r64 = (PyObject *)CPyType_emit___HeaderDeclaration_template;
    cpy_r_r65 = CPyType_FromTemplate(cpy_r_r64, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 62, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r66 = CPyDef_emit___HeaderDeclaration_trait_vtable_setup();
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL61;
    }
    cpy_r_r67 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r68 = CPyStatics[7048]; /* 'decl' */
    cpy_r_r69 = CPyStatics[3996]; /* 'defn' */
    cpy_r_r70 = CPyStatics[125]; /* 'dependencies' */
    cpy_r_r71 = CPyStatics[7049]; /* 'is_type' */
    cpy_r_r72 = CPyStatics[7050]; /* 'needs_export' */
    cpy_r_r73 = PyTuple_Pack(5, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 62, CPyStatic_emit___globals);
        goto CPyL61;
    }
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r65, cpy_r_r67, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 62, CPyStatic_emit___globals);
        goto CPyL61;
    }
    CPyType_emit___HeaderDeclaration = (PyTypeObject *)cpy_r_r65;
    CPy_INCREF(CPyType_emit___HeaderDeclaration);
    cpy_r_r76 = CPyStatic_emit___globals;
    cpy_r_r77 = CPyStatics[7051]; /* 'HeaderDeclaration' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 62, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r82 = (PyObject *)CPyType_emit___EmitterContext_template;
    cpy_r_r83 = CPyType_FromTemplate(cpy_r_r82, cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 94, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r84 = CPyDef_emit___EmitterContext_trait_vtable_setup();
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL62;
    }
    cpy_r_r85 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r86 = CPyStatics[7052]; /* 'temp_counter' */
    cpy_r_r87 = CPyStatics[2403]; /* 'names' */
    cpy_r_r88 = CPyStatics[7053]; /* 'group_name' */
    cpy_r_r89 = CPyStatics[7054]; /* 'group_map' */
    cpy_r_r90 = CPyStatics[7055]; /* 'group_deps' */
    cpy_r_r91 = CPyStatics[124]; /* 'declarations' */
    cpy_r_r92 = CPyStatics[7056]; /* 'literals' */
    cpy_r_r93 = PyTuple_Pack(7, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 94, CPyStatic_emit___globals);
        goto CPyL62;
    }
    cpy_r_r94 = PyObject_SetAttr(cpy_r_r83, cpy_r_r85, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 94, CPyStatic_emit___globals);
        goto CPyL62;
    }
    CPyType_emit___EmitterContext = (PyTypeObject *)cpy_r_r83;
    CPy_INCREF(CPyType_emit___EmitterContext);
    cpy_r_r96 = CPyStatic_emit___globals;
    cpy_r_r97 = CPyStatics[7057]; /* 'EmitterContext' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 94, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r102 = (PyObject *)CPyType_emit___ErrorHandler_template;
    cpy_r_r103 = CPyType_FromTemplate(cpy_r_r102, cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 129, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r104 = CPyDef_emit___ErrorHandler_trait_vtable_setup();
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL63;
    }
    cpy_r_r105 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r106 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 129, CPyStatic_emit___globals);
        goto CPyL63;
    }
    cpy_r_r107 = PyObject_SetAttr(cpy_r_r103, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 129, CPyStatic_emit___globals);
        goto CPyL63;
    }
    CPyType_emit___ErrorHandler = (PyTypeObject *)cpy_r_r103;
    CPy_INCREF(CPyType_emit___ErrorHandler);
    cpy_r_r109 = CPyStatic_emit___globals;
    cpy_r_r110 = CPyStatics[7058]; /* 'ErrorHandler' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 129, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r113 = (PyObject *)CPyType_emit___ErrorHandler;
    cpy_r_r114 = PyTuple_Pack(1, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 133, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r115 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r116 = (PyObject *)CPyType_emit___AssignHandler_template;
    cpy_r_r117 = CPyType_FromTemplate(cpy_r_r116, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 133, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r118 = CPyDef_emit___AssignHandler_trait_vtable_setup();
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL64;
    }
    cpy_r_r119 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r120 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 133, CPyStatic_emit___globals);
        goto CPyL64;
    }
    cpy_r_r121 = PyObject_SetAttr(cpy_r_r117, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 133, CPyStatic_emit___globals);
        goto CPyL64;
    }
    CPyType_emit___AssignHandler = (PyTypeObject *)cpy_r_r117;
    CPy_INCREF(CPyType_emit___AssignHandler);
    cpy_r_r123 = CPyStatic_emit___globals;
    cpy_r_r124 = CPyStatics[7059]; /* 'AssignHandler' */
    cpy_r_r125 = CPyDict_SetItem(cpy_r_r123, cpy_r_r124, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 133, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r127 = (PyObject *)CPyType_emit___ErrorHandler;
    cpy_r_r128 = PyTuple_Pack(1, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 137, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r129 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r130 = (PyObject *)CPyType_emit___GotoHandler_template;
    cpy_r_r131 = CPyType_FromTemplate(cpy_r_r130, cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 137, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r132 = CPyDef_emit___GotoHandler_trait_vtable_setup();
    if (unlikely(cpy_r_r132 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL65;
    }
    cpy_r_r133 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r134 = CPyStatics[6684]; /* 'label' */
    cpy_r_r135 = PyTuple_Pack(1, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 137, CPyStatic_emit___globals);
        goto CPyL65;
    }
    cpy_r_r136 = PyObject_SetAttr(cpy_r_r131, cpy_r_r133, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 137, CPyStatic_emit___globals);
        goto CPyL65;
    }
    CPyType_emit___GotoHandler = (PyTypeObject *)cpy_r_r131;
    CPy_INCREF(CPyType_emit___GotoHandler);
    cpy_r_r138 = CPyStatic_emit___globals;
    cpy_r_r139 = CPyStatics[7060]; /* 'GotoHandler' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r138, cpy_r_r139, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 137, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r142 = (PyObject *)CPyType_emit___ErrorHandler;
    cpy_r_r143 = PyTuple_Pack(1, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 144, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r144 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r145 = (PyObject *)CPyType_emit___TracebackAndGotoHandler_template;
    cpy_r_r146 = CPyType_FromTemplate(cpy_r_r145, cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 144, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r147 = CPyDef_emit___TracebackAndGotoHandler_trait_vtable_setup();
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL66;
    }
    cpy_r_r148 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r149 = CPyStatics[6684]; /* 'label' */
    cpy_r_r150 = CPyStatics[7061]; /* 'source_path' */
    cpy_r_r151 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r152 = CPyStatics[7062]; /* 'traceback_entry' */
    cpy_r_r153 = PyTuple_Pack(4, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 144, CPyStatic_emit___globals);
        goto CPyL66;
    }
    cpy_r_r154 = PyObject_SetAttr(cpy_r_r146, cpy_r_r148, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 144, CPyStatic_emit___globals);
        goto CPyL66;
    }
    CPyType_emit___TracebackAndGotoHandler = (PyTypeObject *)cpy_r_r146;
    CPy_INCREF(CPyType_emit___TracebackAndGotoHandler);
    cpy_r_r156 = CPyStatic_emit___globals;
    cpy_r_r157 = CPyStatics[7063]; /* 'TracebackAndGotoHandler' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r156, cpy_r_r157, cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 144, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r160 = (PyObject *)CPyType_emit___ErrorHandler;
    cpy_r_r161 = PyTuple_Pack(1, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 156, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r162 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r163 = (PyObject *)CPyType_emit___ReturnHandler_template;
    cpy_r_r164 = CPyType_FromTemplate(cpy_r_r163, cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 156, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r165 = CPyDef_emit___ReturnHandler_trait_vtable_setup();
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL67;
    }
    cpy_r_r166 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r167 = CPyStatics[2242]; /* 'value' */
    cpy_r_r168 = PyTuple_Pack(1, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 156, CPyStatic_emit___globals);
        goto CPyL67;
    }
    cpy_r_r169 = PyObject_SetAttr(cpy_r_r164, cpy_r_r166, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 156, CPyStatic_emit___globals);
        goto CPyL67;
    }
    CPyType_emit___ReturnHandler = (PyTypeObject *)cpy_r_r164;
    CPy_INCREF(CPyType_emit___ReturnHandler);
    cpy_r_r171 = CPyStatic_emit___globals;
    cpy_r_r172 = CPyStatics[7064]; /* 'ReturnHandler' */
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r171, cpy_r_r172, cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 156, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r175 = NULL;
    cpy_r_r176 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r177 = (PyObject *)CPyType_emit___Emitter_template;
    cpy_r_r178 = CPyType_FromTemplate(cpy_r_r177, cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 163, CPyStatic_emit___globals);
        goto CPyL60;
    }
    cpy_r_r179 = CPyDef_emit___Emitter_trait_vtable_setup();
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", -1, CPyStatic_emit___globals);
        goto CPyL68;
    }
    cpy_r_r180 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r181 = CPyStatics[68]; /* 'context' */
    cpy_r_r182 = CPyStatics[7065]; /* 'capi_version' */
    cpy_r_r183 = CPyStatics[2403]; /* 'names' */
    cpy_r_r184 = CPyStatics[7066]; /* 'value_names' */
    cpy_r_r185 = CPyStatics[7067]; /* 'fragments' */
    cpy_r_r186 = CPyStatics[5748]; /* '_indent' */
    cpy_r_r187 = PyTuple_Pack(6, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 163, CPyStatic_emit___globals);
        goto CPyL68;
    }
    cpy_r_r188 = PyObject_SetAttr(cpy_r_r178, cpy_r_r180, cpy_r_r187);
    CPy_DECREF(cpy_r_r187);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 163, CPyStatic_emit___globals);
        goto CPyL68;
    }
    CPyType_emit___Emitter = (PyTypeObject *)cpy_r_r178;
    CPy_INCREF(CPyType_emit___Emitter);
    cpy_r_r190 = CPyStatic_emit___globals;
    cpy_r_r191 = CPyStatics[7068]; /* 'Emitter' */
    cpy_r_r192 = CPyDict_SetItem(cpy_r_r190, cpy_r_r191, cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/codegen/emit.py", "<module>", 163, CPyStatic_emit___globals);
        goto CPyL60;
    }
    return 1;
CPyL60: ;
    cpy_r_r194 = 2;
    return cpy_r_r194;
CPyL61: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL60;
CPyL62: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL60;
CPyL63: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL60;
CPyL64: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_r131);
    goto CPyL60;
CPyL66: ;
    CPy_DecRef(cpy_r_r146);
    goto CPyL60;
CPyL67: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL60;
CPyL68: ;
    CPy_DecRef(cpy_r_r178);
    goto CPyL60;
}
