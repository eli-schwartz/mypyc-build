#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
classdef___ClassBuilder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *classdef___ClassBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_classdef___ClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef);

static PyObject *
classdef___ClassBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_classdef___ClassBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = classdef___ClassBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_classdef___ClassBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
classdef___ClassBuilder_traverse(mypyc___irbuild___classdef___ClassBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_attrs_to_cache);
    return 0;
}

static int
classdef___ClassBuilder_clear(mypyc___irbuild___classdef___ClassBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_attrs_to_cache);
    return 0;
}

static void
classdef___ClassBuilder_dealloc(mypyc___irbuild___classdef___ClassBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, classdef___ClassBuilder_dealloc)
    classdef___ClassBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem classdef___ClassBuilder_vtable[4];
static bool
CPyDef_classdef___ClassBuilder_trait_vtable_setup(void)
{
    CPyVTableItem classdef___ClassBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_classdef___ClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___ClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___ClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___ClassBuilder___finalize,
    };
    memcpy(classdef___ClassBuilder_vtable, classdef___ClassBuilder_vtable_scratch, sizeof(classdef___ClassBuilder_vtable));
    return 1;
}

static PyObject *
classdef___ClassBuilder_get_builder(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure);
static int
classdef___ClassBuilder_set_builder(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure);
static PyObject *
classdef___ClassBuilder_get_cdef(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure);
static int
classdef___ClassBuilder_set_cdef(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure);
static PyObject *
classdef___ClassBuilder_get_attrs_to_cache(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure);
static int
classdef___ClassBuilder_set_attrs_to_cache(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef classdef___ClassBuilder_getseters[] = {
    {"builder",
     (getter)classdef___ClassBuilder_get_builder, (setter)classdef___ClassBuilder_set_builder,
     NULL, NULL},
    {"cdef",
     (getter)classdef___ClassBuilder_get_cdef, (setter)classdef___ClassBuilder_set_cdef,
     NULL, NULL},
    {"attrs_to_cache",
     (getter)classdef___ClassBuilder_get_attrs_to_cache, (setter)classdef___ClassBuilder_set_attrs_to_cache,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef classdef___ClassBuilder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_classdef___ClassBuilder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_method",
     (PyCFunction)CPyPy_classdef___ClassBuilder___add_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attr",
     (PyCFunction)CPyPy_classdef___ClassBuilder___add_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"finalize",
     (PyCFunction)CPyPy_classdef___ClassBuilder___finalize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_classdef___ClassBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ClassBuilder",
    .tp_new = classdef___ClassBuilder_new,
    .tp_dealloc = (destructor)classdef___ClassBuilder_dealloc,
    .tp_traverse = (traverseproc)classdef___ClassBuilder_traverse,
    .tp_clear = (inquiry)classdef___ClassBuilder_clear,
    .tp_getset = classdef___ClassBuilder_getseters,
    .tp_methods = classdef___ClassBuilder_methods,
    .tp_init = classdef___ClassBuilder_init,
    .tp_basicsize = sizeof(mypyc___irbuild___classdef___ClassBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_classdef___ClassBuilder_template = &CPyType_classdef___ClassBuilder_template_;

static PyObject *
classdef___ClassBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___classdef___ClassBuilderObject *self;
    self = (mypyc___irbuild___classdef___ClassBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = classdef___ClassBuilder_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_classdef___ClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef)
{
    PyObject *self = classdef___ClassBuilder_setup(CPyType_classdef___ClassBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_classdef___ClassBuilder_____init__(self, cpy_r_builder, cpy_r_cdef);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
classdef___ClassBuilder_get_builder(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_builder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builder' of 'ClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builder);
    PyObject *retval = self->_builder;
    return retval;
}

static int
classdef___ClassBuilder_set_builder(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassBuilder' object attribute 'builder' cannot be deleted");
        return -1;
    }
    if (self->_builder != NULL) {
        CPy_DECREF(self->_builder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_builder___IRBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builder = tmp;
    return 0;
}

static PyObject *
classdef___ClassBuilder_get_cdef(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_cdef == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cdef' of 'ClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cdef);
    PyObject *retval = self->_cdef;
    return retval;
}

static int
classdef___ClassBuilder_set_cdef(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassBuilder' object attribute 'cdef' cannot be deleted");
        return -1;
    }
    if (self->_cdef != NULL) {
        CPy_DECREF(self->_cdef);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___ClassDef))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_cdef = tmp;
    return 0;
}

static PyObject *
classdef___ClassBuilder_get_attrs_to_cache(mypyc___irbuild___classdef___ClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_attrs_to_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'attrs_to_cache' of 'ClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_attrs_to_cache);
    PyObject *retval = self->_attrs_to_cache;
    return retval;
}

static int
classdef___ClassBuilder_set_attrs_to_cache(mypyc___irbuild___classdef___ClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassBuilder' object attribute 'attrs_to_cache' cannot be deleted");
        return -1;
    }
    if (self->_attrs_to_cache != NULL) {
        CPy_DECREF(self->_attrs_to_cache);
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
    self->_attrs_to_cache = tmp;
    return 0;
}

static int
classdef___NonExtClassBuilder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *classdef___NonExtClassBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_classdef___NonExtClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef);

static PyObject *
classdef___NonExtClassBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_classdef___NonExtClassBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = classdef___NonExtClassBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_classdef___NonExtClassBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
classdef___NonExtClassBuilder_traverse(mypyc___irbuild___classdef___NonExtClassBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_attrs_to_cache);
    Py_VISIT(self->_non_ext);
    return 0;
}

static int
classdef___NonExtClassBuilder_clear(mypyc___irbuild___classdef___NonExtClassBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_attrs_to_cache);
    Py_CLEAR(self->_non_ext);
    return 0;
}

static void
classdef___NonExtClassBuilder_dealloc(mypyc___irbuild___classdef___NonExtClassBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, classdef___NonExtClassBuilder_dealloc)
    classdef___NonExtClassBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem classdef___NonExtClassBuilder_vtable[9];
static bool
CPyDef_classdef___NonExtClassBuilder_trait_vtable_setup(void)
{
    CPyVTableItem classdef___NonExtClassBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___create_non_ext_info,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___NonExtClassBuilder___finalize,
    };
    memcpy(classdef___NonExtClassBuilder_vtable, classdef___NonExtClassBuilder_vtable_scratch, sizeof(classdef___NonExtClassBuilder_vtable));
    return 1;
}

static PyObject *
classdef___NonExtClassBuilder_get_non_ext(mypyc___irbuild___classdef___NonExtClassBuilderObject *self, void *closure);
static int
classdef___NonExtClassBuilder_set_non_ext(mypyc___irbuild___classdef___NonExtClassBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef classdef___NonExtClassBuilder_getseters[] = {
    {"non_ext",
     (getter)classdef___NonExtClassBuilder_get_non_ext, (setter)classdef___NonExtClassBuilder_set_non_ext,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef classdef___NonExtClassBuilder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_classdef___NonExtClassBuilder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"create_non_ext_info",
     (PyCFunction)CPyPy_classdef___NonExtClassBuilder___create_non_ext_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_method",
     (PyCFunction)CPyPy_classdef___NonExtClassBuilder___add_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attr",
     (PyCFunction)CPyPy_classdef___NonExtClassBuilder___add_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"finalize",
     (PyCFunction)CPyPy_classdef___NonExtClassBuilder___finalize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_classdef___NonExtClassBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NonExtClassBuilder",
    .tp_new = classdef___NonExtClassBuilder_new,
    .tp_dealloc = (destructor)classdef___NonExtClassBuilder_dealloc,
    .tp_traverse = (traverseproc)classdef___NonExtClassBuilder_traverse,
    .tp_clear = (inquiry)classdef___NonExtClassBuilder_clear,
    .tp_getset = classdef___NonExtClassBuilder_getseters,
    .tp_methods = classdef___NonExtClassBuilder_methods,
    .tp_init = classdef___NonExtClassBuilder_init,
    .tp_basicsize = sizeof(mypyc___irbuild___classdef___NonExtClassBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_classdef___NonExtClassBuilder_template = &CPyType_classdef___NonExtClassBuilder_template_;

static PyObject *
classdef___NonExtClassBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___classdef___NonExtClassBuilderObject *self;
    self = (mypyc___irbuild___classdef___NonExtClassBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = classdef___NonExtClassBuilder_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_classdef___NonExtClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef)
{
    PyObject *self = classdef___NonExtClassBuilder_setup(CPyType_classdef___NonExtClassBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_classdef___NonExtClassBuilder_____init__(self, cpy_r_builder, cpy_r_cdef);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
classdef___NonExtClassBuilder_get_non_ext(mypyc___irbuild___classdef___NonExtClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_non_ext == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'non_ext' of 'NonExtClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_non_ext);
    PyObject *retval = self->_non_ext;
    return retval;
}

static int
classdef___NonExtClassBuilder_set_non_ext(mypyc___irbuild___classdef___NonExtClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NonExtClassBuilder' object attribute 'non_ext' cannot be deleted");
        return -1;
    }
    if (self->_non_ext != NULL) {
        CPy_DECREF(self->_non_ext);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_class_ir___NonExtClassInfo))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_non_ext = tmp;
    return 0;
}

static int
classdef___ExtClassBuilder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *classdef___ExtClassBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_classdef___ExtClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef);

static PyObject *
classdef___ExtClassBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_classdef___ExtClassBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = classdef___ExtClassBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_classdef___ExtClassBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
classdef___ExtClassBuilder_traverse(mypyc___irbuild___classdef___ExtClassBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_attrs_to_cache);
    Py_VISIT(self->_type_obj);
    return 0;
}

static int
classdef___ExtClassBuilder_clear(mypyc___irbuild___classdef___ExtClassBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_attrs_to_cache);
    Py_CLEAR(self->_type_obj);
    return 0;
}

static void
classdef___ExtClassBuilder_dealloc(mypyc___irbuild___classdef___ExtClassBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, classdef___ExtClassBuilder_dealloc)
    classdef___ExtClassBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem classdef___ExtClassBuilder_vtable[9];
static bool
CPyDef_classdef___ExtClassBuilder_trait_vtable_setup(void)
{
    CPyVTableItem classdef___ExtClassBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___finalize,
    };
    memcpy(classdef___ExtClassBuilder_vtable, classdef___ExtClassBuilder_vtable_scratch, sizeof(classdef___ExtClassBuilder_vtable));
    return 1;
}

static PyObject *
classdef___ExtClassBuilder_get_type_obj(mypyc___irbuild___classdef___ExtClassBuilderObject *self, void *closure);
static int
classdef___ExtClassBuilder_set_type_obj(mypyc___irbuild___classdef___ExtClassBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef classdef___ExtClassBuilder_getseters[] = {
    {"type_obj",
     (getter)classdef___ExtClassBuilder_get_type_obj, (setter)classdef___ExtClassBuilder_set_type_obj,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef classdef___ExtClassBuilder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_classdef___ExtClassBuilder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"skip_attr_default",
     (PyCFunction)CPyPy_classdef___ExtClassBuilder___skip_attr_default,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_method",
     (PyCFunction)CPyPy_classdef___ExtClassBuilder___add_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attr",
     (PyCFunction)CPyPy_classdef___ExtClassBuilder___add_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"finalize",
     (PyCFunction)CPyPy_classdef___ExtClassBuilder___finalize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_classdef___ExtClassBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ExtClassBuilder",
    .tp_new = classdef___ExtClassBuilder_new,
    .tp_dealloc = (destructor)classdef___ExtClassBuilder_dealloc,
    .tp_traverse = (traverseproc)classdef___ExtClassBuilder_traverse,
    .tp_clear = (inquiry)classdef___ExtClassBuilder_clear,
    .tp_getset = classdef___ExtClassBuilder_getseters,
    .tp_methods = classdef___ExtClassBuilder_methods,
    .tp_init = classdef___ExtClassBuilder_init,
    .tp_basicsize = sizeof(mypyc___irbuild___classdef___ExtClassBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_classdef___ExtClassBuilder_template = &CPyType_classdef___ExtClassBuilder_template_;

static PyObject *
classdef___ExtClassBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___classdef___ExtClassBuilderObject *self;
    self = (mypyc___irbuild___classdef___ExtClassBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = classdef___ExtClassBuilder_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_classdef___ExtClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef)
{
    PyObject *self = classdef___ExtClassBuilder_setup(CPyType_classdef___ExtClassBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_classdef___ExtClassBuilder_____init__(self, cpy_r_builder, cpy_r_cdef);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
classdef___ExtClassBuilder_get_type_obj(mypyc___irbuild___classdef___ExtClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_type_obj == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_obj' of 'ExtClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_obj);
    PyObject *retval = self->_type_obj;
    return retval;
}

static int
classdef___ExtClassBuilder_set_type_obj(mypyc___irbuild___classdef___ExtClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ExtClassBuilder' object attribute 'type_obj' cannot be deleted");
        return -1;
    }
    if (self->_type_obj != NULL) {
        CPy_DECREF(self->_type_obj);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10001;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10001;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10001: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type_obj = tmp;
    return 0;
}

static int
classdef___DataClassBuilder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *classdef___DataClassBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_classdef___DataClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef);

static PyObject *
classdef___DataClassBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_classdef___DataClassBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = classdef___DataClassBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_classdef___DataClassBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
classdef___DataClassBuilder_traverse(mypyc___irbuild___classdef___DataClassBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_attrs_to_cache);
    Py_VISIT(self->_type_obj);
    Py_VISIT(self->_non_ext);
    return 0;
}

static int
classdef___DataClassBuilder_clear(mypyc___irbuild___classdef___DataClassBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_attrs_to_cache);
    Py_CLEAR(self->_type_obj);
    Py_CLEAR(self->_non_ext);
    return 0;
}

static void
classdef___DataClassBuilder_dealloc(mypyc___irbuild___classdef___DataClassBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, classdef___DataClassBuilder_dealloc)
    classdef___DataClassBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem classdef___DataClassBuilder_vtable[16];
static bool
CPyDef_classdef___DataClassBuilder_trait_vtable_setup(void)
{
    CPyVTableItem classdef___DataClassBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___create_non_ext_info,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___get_type_annotation,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____mypyc_defaults_setup,
    };
    memcpy(classdef___DataClassBuilder_vtable, classdef___DataClassBuilder_vtable_scratch, sizeof(classdef___DataClassBuilder_vtable));
    return 1;
}

static PyObject *
classdef___DataClassBuilder_get_add_annotations_to_dict(mypyc___irbuild___classdef___DataClassBuilderObject *self, void *closure);
static int
classdef___DataClassBuilder_set_add_annotations_to_dict(mypyc___irbuild___classdef___DataClassBuilderObject *self, PyObject *value, void *closure);
static PyObject *
classdef___DataClassBuilder_get_non_ext(mypyc___irbuild___classdef___DataClassBuilderObject *self, void *closure);
static int
classdef___DataClassBuilder_set_non_ext(mypyc___irbuild___classdef___DataClassBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef classdef___DataClassBuilder_getseters[] = {
    {"add_annotations_to_dict",
     (getter)classdef___DataClassBuilder_get_add_annotations_to_dict, (setter)classdef___DataClassBuilder_set_add_annotations_to_dict,
     NULL, NULL},
    {"non_ext",
     (getter)classdef___DataClassBuilder_get_non_ext, (setter)classdef___DataClassBuilder_set_non_ext,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef classdef___DataClassBuilder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_classdef___DataClassBuilder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"create_non_ext_info",
     (PyCFunction)CPyPy_classdef___DataClassBuilder___create_non_ext_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"skip_attr_default",
     (PyCFunction)CPyPy_classdef___DataClassBuilder___skip_attr_default,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_annotation",
     (PyCFunction)CPyPy_classdef___DataClassBuilder___get_type_annotation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_attr",
     (PyCFunction)CPyPy_classdef___DataClassBuilder___add_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"finalize",
     (PyCFunction)CPyPy_classdef___DataClassBuilder___finalize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_classdef___DataClassBuilder_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_classdef___DataClassBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DataClassBuilder",
    .tp_new = classdef___DataClassBuilder_new,
    .tp_dealloc = (destructor)classdef___DataClassBuilder_dealloc,
    .tp_traverse = (traverseproc)classdef___DataClassBuilder_traverse,
    .tp_clear = (inquiry)classdef___DataClassBuilder_clear,
    .tp_getset = classdef___DataClassBuilder_getseters,
    .tp_methods = classdef___DataClassBuilder_methods,
    .tp_init = classdef___DataClassBuilder_init,
    .tp_basicsize = sizeof(mypyc___irbuild___classdef___DataClassBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_classdef___DataClassBuilder_template = &CPyType_classdef___DataClassBuilder_template_;

static PyObject *
classdef___DataClassBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___classdef___DataClassBuilderObject *self;
    self = (mypyc___irbuild___classdef___DataClassBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = classdef___DataClassBuilder_vtable;
    self->_add_annotations_to_dict = 2;
    if (CPyDef_classdef___DataClassBuilder_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_classdef___DataClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef)
{
    PyObject *self = classdef___DataClassBuilder_setup(CPyType_classdef___DataClassBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_classdef___DataClassBuilder_____init__(self, cpy_r_builder, cpy_r_cdef);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
classdef___DataClassBuilder_get_add_annotations_to_dict(mypyc___irbuild___classdef___DataClassBuilderObject *self, void *closure)
{
    PyObject *retval = self->_add_annotations_to_dict ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
classdef___DataClassBuilder_set_add_annotations_to_dict(mypyc___irbuild___classdef___DataClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataClassBuilder' object attribute 'add_annotations_to_dict' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_add_annotations_to_dict = tmp;
    return 0;
}

static PyObject *
classdef___DataClassBuilder_get_non_ext(mypyc___irbuild___classdef___DataClassBuilderObject *self, void *closure)
{
    if (unlikely(self->_non_ext == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'non_ext' of 'DataClassBuilder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_non_ext);
    PyObject *retval = self->_non_ext;
    return retval;
}

static int
classdef___DataClassBuilder_set_non_ext(mypyc___irbuild___classdef___DataClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataClassBuilder' object attribute 'non_ext' cannot be deleted");
        return -1;
    }
    if (self->_non_ext != NULL) {
        CPy_DECREF(self->_non_ext);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_class_ir___NonExtClassInfo))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_non_ext = tmp;
    return 0;
}

static PyObject *classdef___AttrsClassBuilder_setup(PyTypeObject *type);
PyObject *CPyDef_classdef___AttrsClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef);

static PyObject *
classdef___AttrsClassBuilder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_classdef___AttrsClassBuilder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = classdef___AttrsClassBuilder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_classdef___DataClassBuilder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
classdef___AttrsClassBuilder_traverse(mypyc___irbuild___classdef___AttrsClassBuilderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_attrs_to_cache);
    Py_VISIT(self->_type_obj);
    Py_VISIT(self->_non_ext);
    return 0;
}

static int
classdef___AttrsClassBuilder_clear(mypyc___irbuild___classdef___AttrsClassBuilderObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_attrs_to_cache);
    Py_CLEAR(self->_type_obj);
    Py_CLEAR(self->_non_ext);
    return 0;
}

static void
classdef___AttrsClassBuilder_dealloc(mypyc___irbuild___classdef___AttrsClassBuilderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, classdef___AttrsClassBuilder_dealloc)
    classdef___AttrsClassBuilder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem classdef___AttrsClassBuilder_vtable[19];
static bool
CPyDef_classdef___AttrsClassBuilder_trait_vtable_setup(void)
{
    CPyVTableItem classdef___AttrsClassBuilder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___ExtClassBuilder___add_method,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder_____init__,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___create_non_ext_info,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder___get_type_annotation,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___add_attr,
        (CPyVTableItem)CPyDef_classdef___DataClassBuilder___finalize,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder_____mypyc_defaults_setup,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder___skip_attr_default,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder___get_type_annotation,
        (CPyVTableItem)CPyDef_classdef___AttrsClassBuilder_____mypyc_defaults_setup,
    };
    memcpy(classdef___AttrsClassBuilder_vtable, classdef___AttrsClassBuilder_vtable_scratch, sizeof(classdef___AttrsClassBuilder_vtable));
    return 1;
}

static PyObject *
classdef___AttrsClassBuilder_get_add_annotations_to_dict(mypyc___irbuild___classdef___AttrsClassBuilderObject *self, void *closure);
static int
classdef___AttrsClassBuilder_set_add_annotations_to_dict(mypyc___irbuild___classdef___AttrsClassBuilderObject *self, PyObject *value, void *closure);

static PyGetSetDef classdef___AttrsClassBuilder_getseters[] = {
    {"add_annotations_to_dict",
     (getter)classdef___AttrsClassBuilder_get_add_annotations_to_dict, (setter)classdef___AttrsClassBuilder_set_add_annotations_to_dict,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef classdef___AttrsClassBuilder_methods[] = {
    {"skip_attr_default",
     (PyCFunction)CPyPy_classdef___AttrsClassBuilder___skip_attr_default,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_annotation",
     (PyCFunction)CPyPy_classdef___AttrsClassBuilder___get_type_annotation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_classdef___AttrsClassBuilder_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_classdef___AttrsClassBuilder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AttrsClassBuilder",
    .tp_new = classdef___AttrsClassBuilder_new,
    .tp_dealloc = (destructor)classdef___AttrsClassBuilder_dealloc,
    .tp_traverse = (traverseproc)classdef___AttrsClassBuilder_traverse,
    .tp_clear = (inquiry)classdef___AttrsClassBuilder_clear,
    .tp_getset = classdef___AttrsClassBuilder_getseters,
    .tp_methods = classdef___AttrsClassBuilder_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___classdef___AttrsClassBuilderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_classdef___AttrsClassBuilder_template = &CPyType_classdef___AttrsClassBuilder_template_;

static PyObject *
classdef___AttrsClassBuilder_setup(PyTypeObject *type)
{
    mypyc___irbuild___classdef___AttrsClassBuilderObject *self;
    self = (mypyc___irbuild___classdef___AttrsClassBuilderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = classdef___AttrsClassBuilder_vtable;
    self->_add_annotations_to_dict = 2;
    self->_add_annotations_to_dict = 2;
    if (CPyDef_classdef___AttrsClassBuilder_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_classdef___AttrsClassBuilder(PyObject *cpy_r_builder, PyObject *cpy_r_cdef)
{
    PyObject *self = classdef___AttrsClassBuilder_setup(CPyType_classdef___AttrsClassBuilder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_classdef___DataClassBuilder_____init__(self, cpy_r_builder, cpy_r_cdef);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
classdef___AttrsClassBuilder_get_add_annotations_to_dict(mypyc___irbuild___classdef___AttrsClassBuilderObject *self, void *closure)
{
    PyObject *retval = self->_add_annotations_to_dict ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
classdef___AttrsClassBuilder_set_add_annotations_to_dict(mypyc___irbuild___classdef___AttrsClassBuilderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AttrsClassBuilder' object attribute 'add_annotations_to_dict' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_add_annotations_to_dict = tmp;
    return 0;
}
static PyMethodDef classdefmodule_methods[] = {
    {"transform_class_def", (PyCFunction)CPyPy_classdef___transform_class_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"allocate_class", (PyCFunction)CPyPy_classdef___allocate_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"populate_non_ext_bases", (PyCFunction)CPyPy_classdef___populate_non_ext_bases, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_non_ext_metaclass", (PyCFunction)CPyPy_classdef___find_non_ext_metaclass, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setup_non_ext_dict", (PyCFunction)CPyPy_classdef___setup_non_ext_dict, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_non_ext_class_attr_ann", (PyCFunction)CPyPy_classdef___add_non_ext_class_attr_ann, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_non_ext_class_attr", (PyCFunction)CPyPy_classdef___add_non_ext_class_attr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_attr_initializers", (PyCFunction)CPyPy_classdef___find_attr_initializers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_attr_defaults_init", (PyCFunction)CPyPy_classdef___generate_attr_defaults_init, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_deletable_declaration", (PyCFunction)CPyPy_classdef___check_deletable_declaration, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"create_ne_from_eq", (PyCFunction)CPyPy_classdef___create_ne_from_eq, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_glue_ne_method", (PyCFunction)CPyPy_classdef___gen_glue_ne_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_non_ext_class", (PyCFunction)CPyPy_classdef___load_non_ext_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_decorated_class", (PyCFunction)CPyPy_classdef___load_decorated_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"cache_class_attrs", (PyCFunction)CPyPy_classdef___cache_class_attrs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"create_mypyc_attrs_tuple", (PyCFunction)CPyPy_classdef___create_mypyc_attrs_tuple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_dunders_to_non_ext_dict", (PyCFunction)CPyPy_classdef___add_dunders_to_non_ext_dict, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef classdefmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.classdef",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    classdefmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___classdef(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___classdef_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___classdef_internal);
        return CPyModule_mypyc___irbuild___classdef_internal;
    }
    CPyModule_mypyc___irbuild___classdef_internal = PyModule_Create(&classdefmodule);
    if (unlikely(CPyModule_mypyc___irbuild___classdef_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___classdef_internal, "__name__");
    CPyStatic_classdef___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___classdef_internal);
    if (unlikely(CPyStatic_classdef___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_classdef_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___classdef_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___classdef_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES);
    CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES = NULL;
    Py_CLEAR(CPyType_classdef___ClassBuilder);
    Py_CLEAR(CPyType_classdef___NonExtClassBuilder);
    Py_CLEAR(CPyType_classdef___ExtClassBuilder);
    Py_CLEAR(CPyType_classdef___DataClassBuilder);
    Py_CLEAR(CPyType_classdef___AttrsClassBuilder);
    return NULL;
}

char CPyDef_classdef___transform_class_def(PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_ir;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_parent;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_cls_type;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_cls_builder;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
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
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyPtr cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyPtr cpy_r_r117;
    int64_t cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    tuple_T3OOO cpy_r_r137;
    tuple_T3OOO cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    tuple_T3OOO cpy_r_r149;
    tuple_T3OOO cpy_r_r150;
    tuple_T3OOO cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    CPyTagged cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyPtr cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    CPyPtr cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    CPyPtr cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    CPyPtr cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    CPyTagged cpy_r_r199;
    CPyTagged cpy_r_r200;
    PyObject *cpy_r_r201;
    CPyPtr cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    CPyTagged cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyTagged cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    tuple_T3OOO cpy_r_r222;
    tuple_T3OOO cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    char cpy_r_r232;
    char cpy_r_r233;
    tuple_T3OOO cpy_r_r234;
    tuple_T3OOO cpy_r_r235;
    tuple_T3OOO cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject **cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    CPyPtr cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    CPyPtr cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    CPyPtr cpy_r_r252;
    int64_t cpy_r_r253;
    CPyTagged cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    CPyTagged cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r264;
    CPyPtr cpy_r_r265;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    CPyTagged cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    CPyPtr cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    CPyPtr cpy_r_r282;
    PyObject *cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    CPyTagged cpy_r_r286;
    char cpy_r_r287;
    CPyTagged cpy_r_r288;
    PyObject *cpy_r_r289;
    CPyTagged cpy_r_r290;
    int64_t cpy_r_r291;
    CPyTagged cpy_r_r292;
    PyObject *cpy_r_r293;
    tuple_T4CIOO cpy_r_r294;
    CPyTagged cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_name;
    PyObject *cpy_r_decl;
    char cpy_r_r301;
    char cpy_r_r302;
    char cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_getter_ir;
    PyObject *cpy_r_r305;
    int32_t cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    int32_t cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_setter_ir;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_setter_name;
    PyObject *cpy_r_r316;
    int32_t cpy_r_r317;
    char cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    int32_t cpy_r_r327;
    char cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    int32_t cpy_r_r331;
    char cpy_r_r332;
    tuple_T2OO cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    int32_t cpy_r_r336;
    char cpy_r_r337;
    char cpy_r_r338;
    char cpy_r_r339;
    char cpy_r_r340;
    char cpy_r_r341;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r1 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r0)->_type_to_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 88, CPyStatic_classdef___globals);
        goto CPyL218;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_class_ir___ClassIR))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 88, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r3);
        goto CPyL218;
    }
    cpy_r_ir = cpy_r_r4;
    cpy_r_r5 = 0;
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "base_mro", 93, CPyStatic_classdef___globals);
        goto CPyL219;
    }
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = CPyTagged_Subtract(cpy_r_r9, 2);
    cpy_r_r11 = 0;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_i = cpy_r_r11;
CPyL4: ;
    cpy_r_r12 = cpy_r_r11 & 1;
    cpy_r_r13 = cpy_r_r12 == 0;
    cpy_r_r14 = cpy_r_r10 & 1;
    cpy_r_r15 = cpy_r_r14 == 0;
    cpy_r_r16 = cpy_r_r13 & cpy_r_r15;
    if (!cpy_r_r16) goto CPyL6;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r10;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL7;
CPyL6: ;
    cpy_r_r19 = CPyTagged_IsLt_(cpy_r_r11, cpy_r_r10);
    cpy_r_r18 = cpy_r_r19;
CPyL7: ;
    if (!cpy_r_r18) goto CPyL220;
    cpy_r_r20 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "base_mro", 93, CPyStatic_classdef___globals);
        goto CPyL221;
    }
CPyL9: ;
    cpy_r_r21 = CPyList_GetItemBorrow(cpy_r_r20, cpy_r_i);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals);
        goto CPyL221;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_class_ir___ClassIR))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r21);
        goto CPyL221;
    }
    cpy_r_r23 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r22)->_base;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "base", 93, CPyStatic_classdef___globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r23);
CPyL12: ;
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "base_mro", 93, CPyStatic_classdef___globals);
        goto CPyL222;
    }
    CPy_INCREF(cpy_r_r24);
CPyL13: ;
    cpy_r_r25 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r26 = CPyList_GetItem(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals);
        goto CPyL223;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_class_ir___ClassIR))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r26);
        goto CPyL223;
    }
    cpy_r_r28 = PyObject_RichCompare(cpy_r_r23, cpy_r_r27, 3);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals);
        goto CPyL224;
    }
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 93, CPyStatic_classdef___globals);
        goto CPyL224;
    }
    if (cpy_r_r29) {
        goto CPyL225;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r5 = 1;
    goto CPyL20;
CPyL19: ;
    cpy_r_r30 = CPyTagged_Add(cpy_r_r11, 2);
    CPyTagged_DECREF(cpy_r_r11);
    CPyTagged_INCREF(cpy_r_r30);
    cpy_r_r11 = cpy_r_r30;
    cpy_r_i = cpy_r_r30;
    goto CPyL4;
CPyL20: ;
    if (!cpy_r_r5) goto CPyL22;
    cpy_r_r31 = CPyStatics[8140]; /* ('Multiple inheritance is not supported (except for '
                                     'traits)') */
    cpy_r_r32 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r31, cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 94, CPyStatic_classdef___globals);
        goto CPyL219;
    }
CPyL22: ;
    cpy_r_r34 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_allow_interpreted_subclasses;
    if (!cpy_r_r34) goto CPyL32;
CPyL23: ;
    cpy_r_r35 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "mro", 97, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    CPy_INCREF(cpy_r_r35);
CPyL24: ;
    cpy_r_r36 = 0;
CPyL25: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL226;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r36);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_class_ir___ClassIR))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 97, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r41);
        goto CPyL227;
    }
    cpy_r_parent = cpy_r_r42;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_parent)->_allow_interpreted_subclasses;
    if (cpy_r_r43) goto CPyL228;
CPyL28: ;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_parent, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 101, CPyStatic_classdef___globals);
        goto CPyL227;
    }
CPyL29: ;
    cpy_r_r45 = CPyStatics[8141]; /* 'Base class "' */
    cpy_r_r46 = CPyStatics[8142]; /* '" does not allow interpreted subclasses' */
    cpy_r_r47 = CPyStr_Build(3, cpy_r_r45, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 100, CPyStatic_classdef___globals);
        goto CPyL227;
    }
    cpy_r_r48 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 99, CPyStatic_classdef___globals);
        goto CPyL227;
    }
CPyL31: ;
    cpy_r_r50 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r50;
    goto CPyL25;
CPyL32: ;
    cpy_r_r51 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    if (!cpy_r_r51) goto CPyL63;
CPyL33: ;
    cpy_r_r52 = CPyDef_irbuild___util___dataclass_type(cpy_r_cdef);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 110, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    cpy_r_cls_type = cpy_r_r52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r54 = cpy_r_cls_type == cpy_r_r53;
    if (cpy_r_r54) {
        goto CPyL229;
    } else
        goto CPyL37;
CPyL35: ;
    cpy_r_r55 = CPyDef_classdef___ExtClassBuilder(cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 112, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    cpy_r_cls_builder = cpy_r_r55;
    goto CPyL65;
CPyL37: ;
    CPy_INCREF(cpy_r_cls_type);
    if (likely(cpy_r_cls_type != Py_None))
        cpy_r_r56 = cpy_r_cls_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 113, CPyStatic_classdef___globals, "str", cpy_r_cls_type);
        goto CPyL230;
    }
    cpy_r_r57 = CPyStatics[1006]; /* 'dataclasses' */
    cpy_r_r58 = PyUnicode_Compare(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 == -1;
    if (!cpy_r_r59) goto CPyL41;
    cpy_r_r60 = PyErr_Occurred();
    cpy_r_r61 = cpy_r_r60 != NULL;
    if (!cpy_r_r61) goto CPyL41;
    cpy_r_r62 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", -1, CPyStatic_classdef___globals);
        goto CPyL230;
    }
CPyL41: ;
    cpy_r_r63 = cpy_r_r58 == 0;
    if (!cpy_r_r63) goto CPyL43;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL48;
CPyL43: ;
    CPy_INCREF(cpy_r_cls_type);
    if (likely(cpy_r_cls_type != Py_None))
        cpy_r_r65 = cpy_r_cls_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 113, CPyStatic_classdef___globals, "str", cpy_r_cls_type);
        goto CPyL230;
    }
    cpy_r_r66 = CPyStatics[8143]; /* 'attr-auto' */
    cpy_r_r67 = PyUnicode_Compare(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 == -1;
    if (!cpy_r_r68) goto CPyL47;
    cpy_r_r69 = PyErr_Occurred();
    cpy_r_r70 = cpy_r_r69 != NULL;
    if (!cpy_r_r70) goto CPyL47;
    cpy_r_r71 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", -1, CPyStatic_classdef___globals);
        goto CPyL230;
    }
CPyL47: ;
    cpy_r_r72 = cpy_r_r67 == 0;
    cpy_r_r64 = cpy_r_r72;
CPyL48: ;
    if (cpy_r_r64) {
        goto CPyL231;
    } else
        goto CPyL51;
CPyL49: ;
    cpy_r_r73 = CPyDef_classdef___DataClassBuilder(cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 114, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    cpy_r_cls_builder = cpy_r_r73;
    goto CPyL65;
CPyL51: ;
    CPy_INCREF(cpy_r_cls_type);
    if (likely(cpy_r_cls_type != Py_None))
        cpy_r_r74 = cpy_r_cls_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 115, CPyStatic_classdef___globals, "str", cpy_r_cls_type);
        goto CPyL230;
    }
    cpy_r_r75 = CPyStatics[2363]; /* 'attr' */
    cpy_r_r76 = PyUnicode_Compare(cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 == -1;
    if (!cpy_r_r77) goto CPyL55;
    cpy_r_r78 = PyErr_Occurred();
    cpy_r_r79 = cpy_r_r78 != NULL;
    if (!cpy_r_r79) goto CPyL55;
    cpy_r_r80 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 115, CPyStatic_classdef___globals);
        goto CPyL230;
    }
CPyL55: ;
    cpy_r_r81 = cpy_r_r76 == 0;
    if (cpy_r_r81) {
        goto CPyL232;
    } else
        goto CPyL233;
CPyL56: ;
    cpy_r_r82 = CPyDef_classdef___AttrsClassBuilder(cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 116, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    cpy_r_cls_builder = cpy_r_r82;
    goto CPyL65;
CPyL58: ;
    if (likely(cpy_r_cls_type != Py_None))
        cpy_r_r83 = cpy_r_cls_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 118, CPyStatic_classdef___globals, "str", cpy_r_cls_type);
        goto CPyL218;
    }
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 118, CPyStatic_classdef___globals);
        goto CPyL234;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r83};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 118, CPyStatic_classdef___globals);
        goto CPyL234;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_Raise(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 118, CPyStatic_classdef___globals);
        goto CPyL218;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r90 = CPyDef_classdef___NonExtClassBuilder(cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 120, CPyStatic_classdef___globals);
        goto CPyL219;
    }
    cpy_r_cls_builder = cpy_r_r90;
CPyL65: ;
    cpy_r_r91 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_defs;
    cpy_r_r92 = ((mypy___nodes___BlockObject *)cpy_r_r91)->_body;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = 0;
CPyL66: ;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r93 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL235;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_r92, cpy_r_r93);
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_nodes___Statement)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 122, CPyStatic_classdef___globals, "mypy.nodes.Statement", cpy_r_r98);
        goto CPyL236;
    }
    cpy_r_stmt = cpy_r_r99;
    cpy_r_r100 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    if (!cpy_r_r103) goto CPyL107;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r104 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 123, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r105 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r104)->_is_property;
    if (!cpy_r_r105) goto CPyL107;
CPyL71: ;
    cpy_r_r106 = (PyObject *)CPyType_classdef___NonExtClassBuilder;
    cpy_r_r107 = (CPyPtr)&((PyObject *)cpy_r_cls_builder)->ob_type;
    cpy_r_r108 = *(PyObject * *)cpy_r_r107;
    cpy_r_r109 = cpy_r_r108 == cpy_r_r106;
    if (!cpy_r_r109) goto CPyL74;
    cpy_r_r110 = CPyStatics[8144]; /* ('Property setters not supported in non-extension '
                                      'classes') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r111 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 127, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r112 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r111)->_line;
    CPyTagged_INCREF(cpy_r_r112);
    cpy_r_r113 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r110, cpy_r_r112);
    CPyTagged_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 127, CPyStatic_classdef___globals);
        goto CPyL237;
    }
CPyL74: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r114 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 128, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r115 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r114)->_items;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = 0;
CPyL76: ;
    cpy_r_r117 = (CPyPtr)&((PyVarObject *)cpy_r_r115)->ob_size;
    cpy_r_r118 = *(int64_t *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 << 1;
    cpy_r_r120 = (Py_ssize_t)cpy_r_r116 < (Py_ssize_t)cpy_r_r119;
    if (!cpy_r_r120) goto CPyL238;
    cpy_r_r121 = CPyList_GetItemUnsafe(cpy_r_r115, cpy_r_r116);
    if (Py_TYPE(cpy_r_r121) == CPyType_nodes___FuncDef)
        cpy_r_r122 = cpy_r_r121;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL10002;
    if (Py_TYPE(cpy_r_r121) == CPyType_nodes___Decorator)
        cpy_r_r122 = cpy_r_r121;
    else {
        cpy_r_r122 = NULL;
    }
    if (cpy_r_r122 != NULL) goto __LL10002;
    CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 128, CPyStatic_classdef___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r121);
    goto CPyL239;
__LL10002: ;
    cpy_r_item = cpy_r_r122;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r123 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_stmt);
        goto CPyL240;
    }
    cpy_r_r124 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r123)->_line;
    CPyTagged_INCREF(cpy_r_r124);
    cpy_r_r125 = CPyDef_builder___IRBuilder___catch_errors(cpy_r_builder, cpy_r_r124);
    CPyTagged_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL240;
    }
    cpy_r_r126 = PyObject_Type(cpy_r_r125);
    cpy_r_r127 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r128 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL241;
    }
    cpy_r_r129 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r129);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL242;
    }
    PyObject *cpy_r_r131[1] = {cpy_r_r125};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r130, cpy_r_r132, 1, 0);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL242;
    } else
        goto CPyL243;
CPyL83: ;
    cpy_r_r134 = 1;
    cpy_r_r135 = CPyDef_irbuild___util___get_func_def(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 130, CPyStatic_classdef___globals);
        goto CPyL86;
    }
    cpy_r_r136 = CPY_GET_METHOD(cpy_r_cls_builder, CPyType_classdef___ClassBuilder, 1, mypyc___irbuild___classdef___ClassBuilderObject, char (*)(PyObject *, PyObject *))(cpy_r_cls_builder, cpy_r_r135); /* add_method */
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 130, CPyStatic_classdef___globals);
    } else
        goto CPyL94;
CPyL86: ;
    cpy_r_r137 = CPy_CatchError();
    cpy_r_r134 = 0;
    cpy_r_r138 = CPy_GetExcInfo();
    cpy_r_r139 = cpy_r_r138.f0;
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140 = cpy_r_r138.f1;
    CPy_INCREF(cpy_r_r140);
    cpy_r_r141 = cpy_r_r138.f2;
    CPy_INCREF(cpy_r_r141);
    CPy_DecRef(cpy_r_r138.f0);
    CPy_DecRef(cpy_r_r138.f1);
    CPy_DecRef(cpy_r_r138.f2);
    PyObject *cpy_r_r142[4] = {cpy_r_r125, cpy_r_r139, cpy_r_r140, cpy_r_r141};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = _PyObject_Vectorcall(cpy_r_r128, cpy_r_r143, 4, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL244;
    }
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r141);
    cpy_r_r145 = PyObject_IsTrue(cpy_r_r144);
    CPy_DecRef(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL92;
    }
    cpy_r_r147 = cpy_r_r145;
    if (cpy_r_r147) goto CPyL91;
    CPy_Reraise();
    if (!0) {
        goto CPyL92;
    } else
        goto CPyL245;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    CPy_RestoreExcInfo(cpy_r_r137);
    CPy_DecRef(cpy_r_r137.f0);
    CPy_DecRef(cpy_r_r137.f1);
    CPy_DecRef(cpy_r_r137.f2);
    goto CPyL94;
CPyL92: ;
    CPy_RestoreExcInfo(cpy_r_r137);
    CPy_DecRef(cpy_r_r137.f0);
    CPy_DecRef(cpy_r_r137.f1);
    CPy_DecRef(cpy_r_r137.f2);
    cpy_r_r148 = CPy_KeepPropagating();
    if (!cpy_r_r148) {
        goto CPyL95;
    } else
        goto CPyL246;
CPyL93: ;
    CPy_Unreachable();
CPyL94: ;
    tuple_T3OOO __tmp10003 = { NULL, NULL, NULL };
    cpy_r_r149 = __tmp10003;
    cpy_r_r150 = cpy_r_r149;
    goto CPyL96;
CPyL95: ;
    cpy_r_r151 = CPy_CatchError();
    cpy_r_r150 = cpy_r_r151;
CPyL96: ;
    if (!cpy_r_r134) goto CPyL247;
    cpy_r_r152 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r153[4] = {cpy_r_r125, cpy_r_r152, cpy_r_r152, cpy_r_r152};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = _PyObject_Vectorcall(cpy_r_r128, cpy_r_r154, 4, 0);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 129, CPyStatic_classdef___globals);
        goto CPyL248;
    } else
        goto CPyL249;
CPyL98: ;
    CPy_DECREF(cpy_r_r125);
CPyL99: ;
    if (cpy_r_r150.f0 == NULL) {
        goto CPyL106;
    } else
        goto CPyL250;
CPyL100: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL102;
    } else
        goto CPyL251;
CPyL101: ;
    CPy_Unreachable();
CPyL102: ;
    if (cpy_r_r150.f0 == NULL) goto CPyL104;
    CPy_RestoreExcInfo(cpy_r_r150);
    CPy_XDECREF(cpy_r_r150.f0);
    CPy_XDECREF(cpy_r_r150.f1);
    CPy_XDECREF(cpy_r_r150.f2);
CPyL104: ;
    cpy_r_r156 = CPy_KeepPropagating();
    if (!cpy_r_r156) goto CPyL218;
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r157 = cpy_r_r116 + 2;
    cpy_r_r116 = cpy_r_r157;
    goto CPyL76;
CPyL107: ;
    cpy_r_r158 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r159 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r160 = *(PyObject * *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 == cpy_r_r158;
    if (!cpy_r_r161) goto CPyL109;
    cpy_r_r162 = cpy_r_r161;
    goto CPyL110;
CPyL109: ;
    cpy_r_r163 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r164 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r165 = *(PyObject * *)cpy_r_r164;
    cpy_r_r166 = cpy_r_r165 == cpy_r_r163;
    cpy_r_r162 = cpy_r_r166;
CPyL110: ;
    if (!cpy_r_r162) goto CPyL112;
    cpy_r_r167 = cpy_r_r162;
    goto CPyL113;
CPyL112: ;
    cpy_r_r168 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r169 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r170 = *(PyObject * *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 == cpy_r_r168;
    cpy_r_r167 = cpy_r_r171;
CPyL113: ;
    if (!cpy_r_r167) goto CPyL167;
    cpy_r_r172 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r173 = ((mypy___nodes___TypeInfoObject *)cpy_r_r172)->_names;
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "TypeInfo", "names", 135, CPyStatic_classdef___globals);
        goto CPyL237;
    }
    CPy_INCREF(cpy_r_r173);
CPyL115: ;
    CPy_INCREF(cpy_r_stmt);
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___FuncDef)
        cpy_r_r174 = cpy_r_stmt;
    else {
        cpy_r_r174 = NULL;
    }
    if (cpy_r_r174 != NULL) goto __LL10004;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___Decorator)
        cpy_r_r174 = cpy_r_stmt;
    else {
        cpy_r_r174 = NULL;
    }
    if (cpy_r_r174 != NULL) goto __LL10004;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r174 = cpy_r_stmt;
    else {
        cpy_r_r174 = NULL;
    }
    if (cpy_r_r174 != NULL) goto __LL10004;
    CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", cpy_r_stmt);
    goto CPyL252;
__LL10004: ;
    cpy_r_r175 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r176 = (CPyPtr)&((PyObject *)cpy_r_r174)->ob_type;
    cpy_r_r177 = *(PyObject * *)cpy_r_r176;
    cpy_r_r178 = cpy_r_r177 == cpy_r_r175;
    if (!cpy_r_r178) goto CPyL120;
    if (likely(Py_TYPE(cpy_r_r174) == CPyType_nodes___FuncDef))
        cpy_r_r179 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals, "mypy.nodes.FuncDef", cpy_r_r174);
        goto CPyL252;
    }
    cpy_r_r180 = CPY_GET_ATTR(cpy_r_r179, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals);
        goto CPyL252;
    }
CPyL119: ;
    cpy_r_r181 = cpy_r_r180;
    goto CPyL127;
CPyL120: ;
    cpy_r_r182 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r183 = (CPyPtr)&((PyObject *)cpy_r_r174)->ob_type;
    cpy_r_r184 = *(PyObject * *)cpy_r_r183;
    cpy_r_r185 = cpy_r_r184 == cpy_r_r182;
    if (!cpy_r_r185) goto CPyL124;
    if (likely(Py_TYPE(cpy_r_r174) == CPyType_nodes___Decorator))
        cpy_r_r186 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals, "mypy.nodes.Decorator", cpy_r_r174);
        goto CPyL252;
    }
    cpy_r_r187 = CPY_GET_ATTR(cpy_r_r186, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals);
        goto CPyL252;
    }
CPyL123: ;
    cpy_r_r181 = cpy_r_r187;
    goto CPyL127;
CPyL124: ;
    if (likely(Py_TYPE(cpy_r_r174) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r188 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r174);
        goto CPyL252;
    }
    cpy_r_r189 = CPY_GET_ATTR(cpy_r_r188, CPyType_nodes___OverloadedFuncDef, 9, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals);
        goto CPyL252;
    }
CPyL126: ;
    cpy_r_r181 = cpy_r_r189;
CPyL127: ;
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r173, cpy_r_r181);
    CPy_DECREF(cpy_r_r173);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals);
        goto CPyL237;
    }
    if (likely(Py_TYPE(cpy_r_r190) == CPyType_nodes___SymbolTableNode))
        cpy_r_r191 = cpy_r_r190;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 135, CPyStatic_classdef___globals, "mypy.nodes.SymbolTableNode", cpy_r_r190);
        goto CPyL237;
    }
    cpy_r_r192 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r191)->_plugin_generated;
    CPy_DECREF(cpy_r_r191);
    if (cpy_r_r192) goto CPyL253;
CPyL130: ;
    CPy_INCREF(cpy_r_stmt);
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___FuncDef)
        cpy_r_r193 = cpy_r_stmt;
    else {
        cpy_r_r193 = NULL;
    }
    if (cpy_r_r193 != NULL) goto __LL10005;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___Decorator)
        cpy_r_r193 = cpy_r_stmt;
    else {
        cpy_r_r193 = NULL;
    }
    if (cpy_r_r193 != NULL) goto __LL10005;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r193 = cpy_r_stmt;
    else {
        cpy_r_r193 = NULL;
    }
    if (cpy_r_r193 != NULL) goto __LL10005;
    CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", cpy_r_stmt);
    goto CPyL237;
__LL10005: ;
    cpy_r_r194 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r195 = (CPyPtr)&((PyObject *)cpy_r_r193)->ob_type;
    cpy_r_r196 = *(PyObject * *)cpy_r_r195;
    cpy_r_r197 = cpy_r_r196 == cpy_r_r194;
    if (!cpy_r_r197) goto CPyL134;
    if (likely(Py_TYPE(cpy_r_r193) == CPyType_nodes___FuncDef))
        cpy_r_r198 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals, "mypy.nodes.FuncDef", cpy_r_r193);
        goto CPyL237;
    }
    cpy_r_r199 = ((mypy___nodes___FuncDefObject *)cpy_r_r198)->_line;
    CPyTagged_INCREF(cpy_r_r199);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r200 = cpy_r_r199;
    goto CPyL139;
CPyL134: ;
    cpy_r_r201 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r202 = (CPyPtr)&((PyObject *)cpy_r_r193)->ob_type;
    cpy_r_r203 = *(PyObject * *)cpy_r_r202;
    cpy_r_r204 = cpy_r_r203 == cpy_r_r201;
    if (!cpy_r_r204) goto CPyL137;
    if (likely(Py_TYPE(cpy_r_r193) == CPyType_nodes___Decorator))
        cpy_r_r205 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals, "mypy.nodes.Decorator", cpy_r_r193);
        goto CPyL237;
    }
    cpy_r_r206 = ((mypy___nodes___DecoratorObject *)cpy_r_r205)->_line;
    CPyTagged_INCREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r205);
    cpy_r_r200 = cpy_r_r206;
    goto CPyL139;
CPyL137: ;
    if (likely(Py_TYPE(cpy_r_r193) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r207 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r193);
        goto CPyL237;
    }
    cpy_r_r208 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r207)->_line;
    CPyTagged_INCREF(cpy_r_r208);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r200 = cpy_r_r208;
CPyL139: ;
    cpy_r_r209 = CPyDef_builder___IRBuilder___catch_errors(cpy_r_builder, cpy_r_r200);
    CPyTagged_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL237;
    }
    cpy_r_r210 = PyObject_Type(cpy_r_r209);
    cpy_r_r211 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r212 = CPyObject_GetAttr(cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL254;
    }
    cpy_r_r213 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r214 = CPyObject_GetAttr(cpy_r_r210, cpy_r_r213);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL255;
    }
    PyObject *cpy_r_r215[1] = {cpy_r_r209};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = _PyObject_Vectorcall(cpy_r_r214, cpy_r_r216, 1, 0);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL255;
    } else
        goto CPyL256;
CPyL143: ;
    cpy_r_r218 = 1;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___FuncDef)
        cpy_r_r219 = cpy_r_stmt;
    else {
        cpy_r_r219 = NULL;
    }
    if (cpy_r_r219 != NULL) goto __LL10006;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___Decorator)
        cpy_r_r219 = cpy_r_stmt;
    else {
        cpy_r_r219 = NULL;
    }
    if (cpy_r_r219 != NULL) goto __LL10006;
    if (Py_TYPE(cpy_r_stmt) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r219 = cpy_r_stmt;
    else {
        cpy_r_r219 = NULL;
    }
    if (cpy_r_r219 != NULL) goto __LL10006;
    CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 138, CPyStatic_classdef___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", cpy_r_stmt);
    goto CPyL147;
__LL10006: ;
    cpy_r_r220 = CPyDef_irbuild___util___get_func_def(cpy_r_r219);
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 138, CPyStatic_classdef___globals);
        goto CPyL147;
    }
    cpy_r_r221 = CPY_GET_METHOD(cpy_r_cls_builder, CPyType_classdef___ClassBuilder, 1, mypyc___irbuild___classdef___ClassBuilderObject, char (*)(PyObject *, PyObject *))(cpy_r_cls_builder, cpy_r_r220); /* add_method */
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r221 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 138, CPyStatic_classdef___globals);
    } else
        goto CPyL155;
CPyL147: ;
    cpy_r_r222 = CPy_CatchError();
    cpy_r_r218 = 0;
    cpy_r_r223 = CPy_GetExcInfo();
    cpy_r_r224 = cpy_r_r223.f0;
    CPy_INCREF(cpy_r_r224);
    cpy_r_r225 = cpy_r_r223.f1;
    CPy_INCREF(cpy_r_r225);
    cpy_r_r226 = cpy_r_r223.f2;
    CPy_INCREF(cpy_r_r226);
    CPy_DecRef(cpy_r_r223.f0);
    CPy_DecRef(cpy_r_r223.f1);
    CPy_DecRef(cpy_r_r223.f2);
    PyObject *cpy_r_r227[4] = {cpy_r_r209, cpy_r_r224, cpy_r_r225, cpy_r_r226};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = _PyObject_Vectorcall(cpy_r_r212, cpy_r_r228, 4, 0);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL257;
    }
    CPy_DecRef(cpy_r_r224);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r226);
    cpy_r_r230 = PyObject_IsTrue(cpy_r_r229);
    CPy_DecRef(cpy_r_r229);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL153;
    }
    cpy_r_r232 = cpy_r_r230;
    if (cpy_r_r232) goto CPyL152;
    CPy_Reraise();
    if (!0) {
        goto CPyL153;
    } else
        goto CPyL258;
CPyL151: ;
    CPy_Unreachable();
CPyL152: ;
    CPy_RestoreExcInfo(cpy_r_r222);
    CPy_DecRef(cpy_r_r222.f0);
    CPy_DecRef(cpy_r_r222.f1);
    CPy_DecRef(cpy_r_r222.f2);
    goto CPyL155;
CPyL153: ;
    CPy_RestoreExcInfo(cpy_r_r222);
    CPy_DecRef(cpy_r_r222.f0);
    CPy_DecRef(cpy_r_r222.f1);
    CPy_DecRef(cpy_r_r222.f2);
    cpy_r_r233 = CPy_KeepPropagating();
    if (!cpy_r_r233) {
        goto CPyL156;
    } else
        goto CPyL259;
CPyL154: ;
    CPy_Unreachable();
CPyL155: ;
    tuple_T3OOO __tmp10007 = { NULL, NULL, NULL };
    cpy_r_r234 = __tmp10007;
    cpy_r_r235 = cpy_r_r234;
    goto CPyL157;
CPyL156: ;
    cpy_r_r236 = CPy_CatchError();
    cpy_r_r235 = cpy_r_r236;
CPyL157: ;
    if (!cpy_r_r218) goto CPyL260;
    cpy_r_r237 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r238[4] = {cpy_r_r209, cpy_r_r237, cpy_r_r237, cpy_r_r237};
    cpy_r_r239 = (PyObject **)&cpy_r_r238;
    cpy_r_r240 = _PyObject_Vectorcall(cpy_r_r212, cpy_r_r239, 4, 0);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 137, CPyStatic_classdef___globals);
        goto CPyL261;
    } else
        goto CPyL262;
CPyL159: ;
    CPy_DECREF(cpy_r_r209);
CPyL160: ;
    if (cpy_r_r235.f0 == NULL) {
        goto CPyL187;
    } else
        goto CPyL263;
CPyL161: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL163;
    } else
        goto CPyL264;
CPyL162: ;
    CPy_Unreachable();
CPyL163: ;
    if (cpy_r_r235.f0 == NULL) goto CPyL165;
    CPy_RestoreExcInfo(cpy_r_r235);
    CPy_XDECREF(cpy_r_r235.f0);
    CPy_XDECREF(cpy_r_r235.f1);
    CPy_XDECREF(cpy_r_r235.f2);
CPyL165: ;
    cpy_r_r241 = CPy_KeepPropagating();
    if (!cpy_r_r241) goto CPyL218;
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r242 = (PyObject *)CPyType_nodes___PassStmt;
    cpy_r_r243 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r244 = *(PyObject * *)cpy_r_r243;
    cpy_r_r245 = cpy_r_r244 == cpy_r_r242;
    if (cpy_r_r245) goto CPyL253;
    cpy_r_r246 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r247 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r248 = *(PyObject * *)cpy_r_r247;
    cpy_r_r249 = cpy_r_r248 == cpy_r_r246;
    if (!cpy_r_r249) goto CPyL182;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r250 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 142, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r251 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r250)->_lvalues;
    cpy_r_r252 = (CPyPtr)&((PyVarObject *)cpy_r_r251)->ob_size;
    cpy_r_r253 = *(int64_t *)cpy_r_r252;
    cpy_r_r254 = cpy_r_r253 << 1;
    cpy_r_r255 = cpy_r_r254 != 2;
    if (!cpy_r_r255) goto CPyL173;
    cpy_r_r256 = CPyStatics[8145]; /* 'Multiple assignment in class bodies not supported' */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r257 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 143, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r258 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r257)->_line;
    CPyTagged_INCREF(cpy_r_r258);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r259 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r256, cpy_r_r258);
    CPyTagged_DECREF(cpy_r_r258);
    if (unlikely(cpy_r_r259 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 143, CPyStatic_classdef___globals);
        goto CPyL236;
    } else
        goto CPyL187;
CPyL173: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r260 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 145, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r261 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r260)->_lvalues;
    cpy_r_r262 = CPyList_GetItemShort(cpy_r_r261, 0);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 145, CPyStatic_classdef___globals);
        goto CPyL237;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r262, CPyType_nodes___Expression)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 145, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r262);
        goto CPyL237;
    }
    cpy_r_lvalue = cpy_r_r263;
    cpy_r_r264 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r265 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r266 = *(PyObject * *)cpy_r_r265;
    cpy_r_r267 = cpy_r_r266 == cpy_r_r264;
    if (cpy_r_r267) {
        goto CPyL179;
    } else
        goto CPyL265;
CPyL177: ;
    cpy_r_r268 = CPyStatics[8146]; /* ('Only assignment to variables is supported in class '
                                      'bodies') */
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r269 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 148, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r270 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r269)->_line;
    CPyTagged_INCREF(cpy_r_r270);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r271 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r268, cpy_r_r270);
    CPyTagged_DECREF(cpy_r_r270);
    if (unlikely(cpy_r_r271 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 147, CPyStatic_classdef___globals);
        goto CPyL236;
    } else
        goto CPyL187;
CPyL179: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r272 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 153, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL237;
    }
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r273 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 153, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL266;
    }
    cpy_r_r274 = CPY_GET_METHOD(cpy_r_cls_builder, CPyType_classdef___ClassBuilder, 2, mypyc___irbuild___classdef___ClassBuilderObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_cls_builder, cpy_r_r272, cpy_r_r273); /* add_attr */
    CPy_DECREF(cpy_r_r272);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r274 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 153, CPyStatic_classdef___globals);
        goto CPyL236;
    } else
        goto CPyL187;
CPyL182: ;
    cpy_r_r275 = (PyObject *)CPyType_nodes___ExpressionStmt;
    cpy_r_r276 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r277 = *(PyObject * *)cpy_r_r276;
    cpy_r_r278 = cpy_r_r277 == cpy_r_r275;
    if (!cpy_r_r278) goto CPyL185;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___ExpressionStmt))
        cpy_r_r279 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 155, CPyStatic_classdef___globals, "mypy.nodes.ExpressionStmt", cpy_r_stmt);
        goto CPyL237;
    }
    cpy_r_r280 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_r279)->_expr;
    cpy_r_r281 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r282 = (CPyPtr)&((PyObject *)cpy_r_r280)->ob_type;
    cpy_r_r283 = *(PyObject * *)cpy_r_r282;
    cpy_r_r284 = cpy_r_r283 == cpy_r_r281;
    if (cpy_r_r284) goto CPyL253;
CPyL185: ;
    cpy_r_r285 = CPyStatics[8147]; /* 'Unsupported statement in class body' */
    cpy_r_r286 = ((mypy___nodes___ContextObject *)cpy_r_stmt)->_line;
    if (unlikely(cpy_r_r286 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Statement' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r286);
    }
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r286 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 159, CPyStatic_classdef___globals);
        goto CPyL236;
    }
CPyL186: ;
    cpy_r_r287 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r285, cpy_r_r286);
    CPyTagged_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r287 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 159, CPyStatic_classdef___globals);
        goto CPyL236;
    }
CPyL187: ;
    cpy_r_r288 = cpy_r_r93 + 2;
    cpy_r_r93 = cpy_r_r288;
    goto CPyL66;
CPyL188: ;
    cpy_r_r289 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "method_decls", 162, CPyStatic_classdef___globals);
        goto CPyL267;
    }
    CPy_INCREF(cpy_r_r289);
CPyL189: ;
    cpy_r_r290 = 0;
    cpy_r_r291 = PyDict_Size(cpy_r_r289);
    cpy_r_r292 = cpy_r_r291 << 1;
    cpy_r_r293 = CPyDict_GetItemsIter(cpy_r_r289);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 162, CPyStatic_classdef___globals);
        goto CPyL268;
    }
CPyL190: ;
    cpy_r_r294 = CPyDict_NextItem(cpy_r_r293, cpy_r_r290);
    cpy_r_r295 = cpy_r_r294.f1;
    cpy_r_r290 = cpy_r_r295;
    cpy_r_r296 = cpy_r_r294.f0;
    if (!cpy_r_r296) goto CPyL269;
    cpy_r_r297 = cpy_r_r294.f2;
    CPy_INCREF(cpy_r_r297);
    cpy_r_r298 = cpy_r_r294.f3;
    CPy_INCREF(cpy_r_r298);
    CPy_DECREF(cpy_r_r294.f2);
    CPy_DECREF(cpy_r_r294.f3);
    if (likely(PyUnicode_Check(cpy_r_r297)))
        cpy_r_r299 = cpy_r_r297;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 162, CPyStatic_classdef___globals, "str", cpy_r_r297);
        goto CPyL270;
    }
    if (likely(Py_TYPE(cpy_r_r298) == CPyType_func_ir___FuncDecl))
        cpy_r_r300 = cpy_r_r298;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 162, CPyStatic_classdef___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r298);
        goto CPyL271;
    }
    cpy_r_name = cpy_r_r299;
    cpy_r_decl = cpy_r_r300;
    cpy_r_r301 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_implicit;
    if (!cpy_r_r301) goto CPyL272;
CPyL194: ;
    cpy_r_r302 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_is_prop_getter;
    if (!cpy_r_r302) goto CPyL272;
CPyL195: ;
    cpy_r_r303 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    cpy_r_r304 = CPyDef_function___gen_property_getter_ir(cpy_r_builder, cpy_r_decl, cpy_r_cdef, cpy_r_r303);
    CPy_DECREF(cpy_r_decl);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 164, CPyStatic_classdef___globals);
        goto CPyL273;
    }
    cpy_r_getter_ir = cpy_r_r304;
    cpy_r_r305 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r305);
    cpy_r_r306 = PyList_Append(cpy_r_r305, cpy_r_getter_ir);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r307 = cpy_r_r306 >= 0;
    if (unlikely(!cpy_r_r307)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 165, CPyStatic_classdef___globals);
        goto CPyL274;
    }
    cpy_r_r308 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "methods", 166, CPyStatic_classdef___globals);
        goto CPyL274;
    }
    CPy_INCREF(cpy_r_r308);
CPyL198: ;
    cpy_r_r309 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_getter_ir)->_decl;
    cpy_r_r310 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r309)->_name;
    CPy_INCREF(cpy_r_r310);
    cpy_r_r311 = CPyDict_SetItem(cpy_r_r308, cpy_r_r310, cpy_r_getter_ir);
    CPy_DECREF(cpy_r_r308);
    CPy_DECREF(cpy_r_r310);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 166, CPyStatic_classdef___globals);
        goto CPyL274;
    }
    cpy_r_r313 = Py_None;
    CPy_INCREF(cpy_r_r313);
    cpy_r_setter_ir = cpy_r_r313;
    cpy_r_r314 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r315 = PyUnicode_Concat(cpy_r_r314, cpy_r_name);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 169, CPyStatic_classdef___globals);
        goto CPyL275;
    }
    cpy_r_setter_name = cpy_r_r315;
    cpy_r_r316 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "method_decls", 170, CPyStatic_classdef___globals);
        goto CPyL276;
    }
    CPy_INCREF(cpy_r_r316);
CPyL201: ;
    cpy_r_r317 = PyDict_Contains(cpy_r_r316, cpy_r_setter_name);
    CPy_DECREF(cpy_r_r316);
    cpy_r_r318 = cpy_r_r317 >= 0;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 170, CPyStatic_classdef___globals);
        goto CPyL276;
    }
    cpy_r_r319 = cpy_r_r317;
    if (cpy_r_r319) {
        goto CPyL277;
    } else
        goto CPyL278;
CPyL203: ;
    cpy_r_r320 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "method_decls", 172, CPyStatic_classdef___globals);
        goto CPyL279;
    }
    CPy_INCREF(cpy_r_r320);
CPyL204: ;
    cpy_r_r321 = CPyDict_GetItem(cpy_r_r320, cpy_r_setter_name);
    CPy_DECREF(cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 172, CPyStatic_classdef___globals);
        goto CPyL279;
    }
    if (likely(Py_TYPE(cpy_r_r321) == CPyType_func_ir___FuncDecl))
        cpy_r_r322 = cpy_r_r321;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 172, CPyStatic_classdef___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r321);
        goto CPyL279;
    }
    cpy_r_r323 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    cpy_r_r324 = CPyDef_function___gen_property_setter_ir(cpy_r_builder, cpy_r_r322, cpy_r_cdef, cpy_r_r323);
    CPy_DECREF(cpy_r_r322);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 171, CPyStatic_classdef___globals);
        goto CPyL279;
    }
    cpy_r_setter_ir = cpy_r_r324;
    cpy_r_r325 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r325);
    CPy_INCREF(cpy_r_setter_ir);
    if (likely(cpy_r_setter_ir != Py_None))
        cpy_r_r326 = cpy_r_setter_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 174, CPyStatic_classdef___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_setter_ir);
        goto CPyL280;
    }
    cpy_r_r327 = PyList_Append(cpy_r_r325, cpy_r_r326);
    CPy_DECREF(cpy_r_r325);
    CPy_DECREF(cpy_r_r326);
    cpy_r_r328 = cpy_r_r327 >= 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 174, CPyStatic_classdef___globals);
        goto CPyL276;
    }
    CPy_INCREF(cpy_r_setter_ir);
    if (likely(cpy_r_setter_ir != Py_None))
        cpy_r_r329 = cpy_r_setter_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 175, CPyStatic_classdef___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_setter_ir);
        goto CPyL276;
    }
    cpy_r_r330 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "methods", 175, CPyStatic_classdef___globals);
        goto CPyL281;
    }
    CPy_INCREF(cpy_r_r330);
CPyL211: ;
    cpy_r_r331 = CPyDict_SetItem(cpy_r_r330, cpy_r_setter_name, cpy_r_r329);
    CPy_DECREF(cpy_r_r330);
    CPy_DECREF(cpy_r_setter_name);
    CPy_DECREF(cpy_r_r329);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 175, CPyStatic_classdef___globals);
        goto CPyL275;
    }
CPyL212: ;
    cpy_r_r333.f0 = cpy_r_getter_ir;
    cpy_r_r333.f1 = cpy_r_setter_ir;
    CPy_INCREF(cpy_r_r333.f0);
    CPy_INCREF(cpy_r_r333.f1);
    CPy_DECREF(cpy_r_getter_ir);
    CPy_DECREF(cpy_r_setter_ir);
    cpy_r_r334 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_properties;
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "transform_class_def", "ClassIR", "properties", 177, CPyStatic_classdef___globals);
        goto CPyL282;
    }
    CPy_INCREF(cpy_r_r334);
CPyL213: ;
    cpy_r_r335 = PyTuple_New(2);
    if (unlikely(cpy_r_r335 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10008 = cpy_r_r333.f0;
    PyTuple_SET_ITEM(cpy_r_r335, 0, __tmp10008);
    PyObject *__tmp10009 = cpy_r_r333.f1;
    PyTuple_SET_ITEM(cpy_r_r335, 1, __tmp10009);
    cpy_r_r336 = CPyDict_SetItem(cpy_r_r334, cpy_r_name, cpy_r_r335);
    CPy_DECREF(cpy_r_r334);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r335);
    cpy_r_r337 = cpy_r_r336 >= 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 177, CPyStatic_classdef___globals);
        goto CPyL283;
    }
CPyL214: ;
    cpy_r_r338 = CPyDict_CheckSize(cpy_r_r289, cpy_r_r292);
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 162, CPyStatic_classdef___globals);
        goto CPyL283;
    } else
        goto CPyL190;
CPyL215: ;
    cpy_r_r339 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r339)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 162, CPyStatic_classdef___globals);
        goto CPyL267;
    }
    cpy_r_r340 = CPY_GET_METHOD(cpy_r_cls_builder, CPyType_classdef___ClassBuilder, 3, mypyc___irbuild___classdef___ClassBuilderObject, char (*)(PyObject *, PyObject *))(cpy_r_cls_builder, cpy_r_ir); /* finalize */
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_cls_builder);
    if (unlikely(cpy_r_r340 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 181, CPyStatic_classdef___globals);
        goto CPyL218;
    }
    return 1;
CPyL218: ;
    cpy_r_r341 = 2;
    return cpy_r_r341;
CPyL219: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL218;
CPyL220: ;
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL20;
CPyL221: ;
    CPy_DecRef(cpy_r_ir);
    CPyTagged_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r11);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL218;
CPyL222: ;
    CPy_DecRef(cpy_r_ir);
    CPyTagged_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r11);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r23);
    goto CPyL218;
CPyL223: ;
    CPy_DecRef(cpy_r_ir);
    CPyTagged_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r23);
    goto CPyL218;
CPyL224: ;
    CPy_DecRef(cpy_r_ir);
    CPyTagged_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r11);
    goto CPyL218;
CPyL225: ;
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    goto CPyL18;
CPyL226: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL32;
CPyL227: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r35);
    goto CPyL218;
CPyL228: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL31;
CPyL229: ;
    CPy_DECREF(cpy_r_cls_type);
    goto CPyL35;
CPyL230: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_type);
    goto CPyL218;
CPyL231: ;
    CPy_DECREF(cpy_r_cls_type);
    goto CPyL49;
CPyL232: ;
    CPy_DECREF(cpy_r_cls_type);
    goto CPyL56;
CPyL233: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL58;
CPyL234: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL218;
CPyL235: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL188;
CPyL236: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    goto CPyL218;
CPyL237: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL218;
CPyL238: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_r115);
    goto CPyL187;
CPyL239: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    goto CPyL218;
CPyL240: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_item);
    goto CPyL218;
CPyL241: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r126);
    goto CPyL218;
CPyL242: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r128);
    goto CPyL218;
CPyL243: ;
    CPy_DECREF(cpy_r_r133);
    goto CPyL83;
CPyL244: ;
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r141);
    goto CPyL92;
CPyL245: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r137.f0);
    CPy_DecRef(cpy_r_r137.f1);
    CPy_DecRef(cpy_r_r137.f2);
    goto CPyL90;
CPyL246: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r128);
    goto CPyL93;
CPyL247: ;
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r128);
    goto CPyL99;
CPyL248: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r125);
    goto CPyL102;
CPyL249: ;
    CPy_DECREF(cpy_r_r155);
    goto CPyL98;
CPyL250: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_cls_builder);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_r115);
    goto CPyL100;
CPyL251: ;
    CPy_XDECREF(cpy_r_r150.f0);
    CPy_XDECREF(cpy_r_r150.f1);
    CPy_XDECREF(cpy_r_r150.f2);
    goto CPyL101;
CPyL252: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r173);
    goto CPyL218;
CPyL253: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL187;
CPyL254: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r210);
    goto CPyL218;
CPyL255: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r212);
    goto CPyL218;
CPyL256: ;
    CPy_DECREF(cpy_r_r217);
    goto CPyL143;
CPyL257: ;
    CPy_DecRef(cpy_r_r224);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r226);
    goto CPyL153;
CPyL258: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r212);
    CPy_DecRef(cpy_r_r222.f0);
    CPy_DecRef(cpy_r_r222.f1);
    CPy_DecRef(cpy_r_r222.f2);
    goto CPyL151;
CPyL259: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r212);
    goto CPyL154;
CPyL260: ;
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r212);
    goto CPyL160;
CPyL261: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r209);
    goto CPyL163;
CPyL262: ;
    CPy_DECREF(cpy_r_r240);
    goto CPyL159;
CPyL263: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_cls_builder);
    CPy_DECREF(cpy_r_r92);
    goto CPyL161;
CPyL264: ;
    CPy_XDECREF(cpy_r_r235.f0);
    CPy_XDECREF(cpy_r_r235.f1);
    CPy_XDECREF(cpy_r_r235.f2);
    goto CPyL162;
CPyL265: ;
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL177;
CPyL266: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r272);
    goto CPyL218;
CPyL267: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    goto CPyL218;
CPyL268: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    goto CPyL218;
CPyL269: ;
    CPy_DECREF(cpy_r_r289);
    CPy_DECREF(cpy_r_r293);
    CPy_DECREF(cpy_r_r294.f2);
    CPy_DECREF(cpy_r_r294.f3);
    goto CPyL215;
CPyL270: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r298);
    goto CPyL218;
CPyL271: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r299);
    goto CPyL218;
CPyL272: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_decl);
    goto CPyL214;
CPyL273: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    goto CPyL218;
CPyL274: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    goto CPyL218;
CPyL275: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    CPy_DecRef(cpy_r_setter_ir);
    goto CPyL218;
CPyL276: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    CPy_DecRef(cpy_r_setter_ir);
    CPy_DecRef(cpy_r_setter_name);
    goto CPyL218;
CPyL277: ;
    CPy_DECREF(cpy_r_setter_ir);
    goto CPyL203;
CPyL278: ;
    CPy_DECREF(cpy_r_setter_name);
    goto CPyL212;
CPyL279: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    CPy_DecRef(cpy_r_setter_name);
    goto CPyL218;
CPyL280: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    CPy_DecRef(cpy_r_setter_ir);
    CPy_DecRef(cpy_r_setter_name);
    CPy_DecRef(cpy_r_r325);
    goto CPyL218;
CPyL281: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_getter_ir);
    CPy_DecRef(cpy_r_setter_ir);
    CPy_DecRef(cpy_r_setter_name);
    CPy_DecRef(cpy_r_r329);
    goto CPyL218;
CPyL282: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r333.f0);
    CPy_DecRef(cpy_r_r333.f1);
    goto CPyL218;
CPyL283: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls_builder);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    goto CPyL218;
}

PyObject *CPyPy_classdef___transform_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", 0};
    static CPyArg_Parser parser = {"OO:transform_class_def", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___transform_class_def(arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "transform_class_def", 76, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ClassBuilder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_builder);
    ((mypyc___irbuild___classdef___ClassBuilderObject *)cpy_r_self)->_builder = cpy_r_builder;
    CPy_INCREF(cpy_r_cdef);
    ((mypyc___irbuild___classdef___ClassBuilderObject *)cpy_r_self)->_cdef = cpy_r_cdef;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 193, CPyStatic_classdef___globals);
        goto CPyL2;
    }
    ((mypyc___irbuild___classdef___ClassBuilderObject *)cpy_r_self)->_attrs_to_cache = cpy_r_r0;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_classdef___ClassBuilder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "cdef", 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_classdef___ClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___ClassBuilder_____init__(arg_self, arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 190, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ClassBuilder___add_method(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    return 1;
}

PyObject *CPyPy_classdef___ClassBuilder___add_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:add_method", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_classdef___ClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___ClassBuilder___add_method(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_method", 196, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ClassBuilder___add_attr(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt) {
    return 1;
}

PyObject *CPyPy_classdef___ClassBuilder___add_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OO:add_attr", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_classdef___ClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___ClassBuilder___add_attr(arg_self, arg_lvalue, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 200, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ClassBuilder___finalize(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    return 1;
}

PyObject *CPyPy_classdef___ClassBuilder___finalize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:finalize", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_classdef___ClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_classdef___ClassBuilder___finalize(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 204, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___NonExtClassBuilder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_classdef___ClassBuilder_____init__(cpy_r_self, cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 210, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPyDef_classdef___NonExtClassBuilder___create_non_ext_info(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 211, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    if (((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext != NULL) {
        CPy_DECREF(((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext);
    }
    ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 211, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_classdef___NonExtClassBuilder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "cdef", 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___NonExtClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.NonExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___NonExtClassBuilder_____init__(arg_self, arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 209, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___NonExtClassBuilder___create_non_ext_info(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_non_ext_bases;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_non_ext_metaclass;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_non_ext_dict;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_non_ext_anns;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_classdef___populate_non_ext_bases(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 214, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    cpy_r_non_ext_bases = cpy_r_r2;
    cpy_r_r3 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_classdef___find_non_ext_metaclass(cpy_r_r3, cpy_r_r4, cpy_r_non_ext_bases);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 215, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    cpy_r_non_ext_metaclass = cpy_r_r5;
    cpy_r_r6 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_classdef___setup_non_ext_dict(cpy_r_r6, cpy_r_r7, cpy_r_non_ext_metaclass, cpy_r_non_ext_bases);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 216, CPyStatic_classdef___globals);
        goto CPyL11;
    }
    cpy_r_non_ext_dict = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatic_classdef___globals;
    cpy_r_r11 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 222, CPyStatic_classdef___globals);
        goto CPyL12;
    }
    if (likely(PyTuple_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 222, CPyStatic_classdef___globals, "tuple", cpy_r_r12);
        goto CPyL12;
    }
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 222, CPyStatic_classdef___globals);
        goto CPyL13;
    }
    cpy_r_r15 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r16 = ((mypy___nodes___ClassDefObject *)cpy_r_r15)->_line;
    CPyTagged_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_builder___IRBuilder___call_c(cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 222, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    cpy_r_non_ext_anns = cpy_r_r17;
    cpy_r_r18 = CPyDef_class_ir___NonExtClassInfo(cpy_r_non_ext_dict, cpy_r_non_ext_bases, cpy_r_non_ext_anns, cpy_r_non_ext_metaclass);
    CPy_DECREF(cpy_r_non_ext_dict);
    CPy_DECREF(cpy_r_non_ext_bases);
    CPy_DECREF(cpy_r_non_ext_anns);
    CPy_DECREF(cpy_r_non_ext_metaclass);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 223, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    return cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL10: ;
    CPy_DecRef(cpy_r_non_ext_bases);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_non_ext_bases);
    CPy_DecRef(cpy_r_non_ext_metaclass);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_non_ext_bases);
    CPy_DecRef(cpy_r_non_ext_metaclass);
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_non_ext_bases);
    CPy_DecRef(cpy_r_non_ext_metaclass);
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_non_ext_bases);
    CPy_DecRef(cpy_r_non_ext_metaclass);
    CPy_DecRef(cpy_r_non_ext_dict);
    goto CPyL9;
}

PyObject *CPyPy_classdef___NonExtClassBuilder___create_non_ext_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":create_non_ext_info", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___NonExtClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.NonExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___NonExtClassBuilder___create_non_ext_info(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 213, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___NonExtClassBuilder___add_method(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_method", "NonExtClassBuilder", "non_ext", 226, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_function___handle_non_ext_method(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_fdef);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_method", 226, CPyStatic_classdef___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_classdef___NonExtClassBuilder___add_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:add_method", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___NonExtClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.NonExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___NonExtClassBuilder___add_method(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_method", 225, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___NonExtClassBuilder___add_attr(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_attr", "NonExtClassBuilder", "non_ext", 229, CPyStatic_classdef___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_classdef___add_non_ext_class_attr_ann(cpy_r_r0, cpy_r_r1, cpy_r_lvalue, cpy_r_stmt, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 229, CPyStatic_classdef___globals);
        goto CPyL5;
    }
    cpy_r_r4 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_attr", "NonExtClassBuilder", "non_ext", 231, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_attrs_to_cache;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_classdef___add_non_ext_class_attr(cpy_r_r4, cpy_r_r5, cpy_r_lvalue, cpy_r_stmt, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 230, CPyStatic_classdef___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_classdef___NonExtClassBuilder___add_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OO:add_attr", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___NonExtClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.NonExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___NonExtClassBuilder___add_attr(arg_self, arg_lvalue, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 228, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___NonExtClassBuilder___finalize(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_non_ext_class;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
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
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "NonExtClassBuilder", "non_ext", 236, CPyStatic_classdef___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_classdef___load_non_ext_class(cpy_r_r0, cpy_r_ir, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 236, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    cpy_r_non_ext_class = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_classdef___load_decorated_class(cpy_r_r5, cpy_r_r6, cpy_r_non_ext_class);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_non_ext_class);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 237, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    cpy_r_non_ext_class = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r10 = ((mypy___nodes___ClassDefObject *)cpy_r_r9)->_name;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r11)->_module_name;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "IRBuilder", "module_name", 241, CPyStatic_classdef___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r12);
CPyL4: ;
    cpy_r_r13 = CPyStatics[802]; /* 'type' */
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___InitStatic(cpy_r_non_ext_class, cpy_r_r10, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 241, CPyStatic_classdef___globals);
        goto CPyL17;
    }
    cpy_r_r16 = CPyDef_builder___IRBuilder___add(cpy_r_r8, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 240, CPyStatic_classdef___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL6: ;
    cpy_r_r17 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyStatic_classdef___globals;
    cpy_r_r19 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 246, CPyStatic_classdef___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "finalize", 246, CPyStatic_classdef___globals, "tuple", cpy_r_r20);
        goto CPyL20;
    }
    cpy_r_r22 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 248, CPyStatic_classdef___globals);
        goto CPyL21;
    }
    cpy_r_r24 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r26 = ((mypy___nodes___ClassDefObject *)cpy_r_r25)->_name;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyDef_builder___IRBuilder___load_str(cpy_r_r24, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 249, CPyStatic_classdef___globals);
        goto CPyL22;
    }
    cpy_r_r28 = PyList_New(3);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 247, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_r23;
    cpy_r_r31 = cpy_r_r30 + 8;
    *(PyObject * *)cpy_r_r31 = cpy_r_r27;
    cpy_r_r32 = cpy_r_r30 + 16;
    *(PyObject * *)cpy_r_r32 = cpy_r_non_ext_class;
    cpy_r_r33 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r34 = ((mypy___nodes___ClassDefObject *)cpy_r_r33)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___call_c(cpy_r_r17, cpy_r_r21, cpy_r_r28, cpy_r_r34);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 245, CPyStatic_classdef___globals);
        goto CPyL14;
    } else
        goto CPyL24;
CPyL12: ;
    cpy_r_r36 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_attrs_to_cache;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = ((mypyc___irbuild___classdef___NonExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_classdef___cache_class_attrs(cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 256, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_non_ext_class);
    goto CPyL14;
CPyL19: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    goto CPyL14;
CPyL22: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    goto CPyL14;
CPyL23: ;
    CPy_DecRef(cpy_r_non_ext_class);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r27);
    goto CPyL14;
CPyL24: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL12;
}

PyObject *CPyPy_classdef___NonExtClassBuilder___finalize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:finalize", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___NonExtClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.NonExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_classdef___NonExtClassBuilder___finalize(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 234, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ExtClassBuilder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_classdef___ClassBuilder_____init__(cpy_r_self, cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 261, CPyStatic_classdef___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_classdef___allocate_class(cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 263, CPyStatic_classdef___globals);
        goto CPyL3;
    }
    ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_type_obj = cpy_r_r1;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_classdef___ExtClassBuilder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "cdef", 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___ExtClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___ExtClassBuilder_____init__(arg_self, arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 260, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ExtClassBuilder___skip_attr_default(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_stmt) {
    return 0;
}

PyObject *CPyPy_classdef___ExtClassBuilder___skip_attr_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "stmt", 0};
    static CPyArg_Parser parser = {"OO:skip_attr_default", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___ExtClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___ExtClassBuilder___skip_attr_default(arg_self, arg_name, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "skip_attr_default", 265, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ExtClassBuilder___add_method(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_function___handle_ext_method(cpy_r_r0, cpy_r_r1, cpy_r_fdef);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_method", 270, CPyStatic_classdef___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_classdef___ExtClassBuilder___add_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:add_method", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___ExtClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___ExtClassBuilder___add_method(arg_self, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_method", 269, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ExtClassBuilder___add_attr(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r1 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r5 = CPyDef_nodes___is_class_var(cpy_r_lvalue);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 277, CPyStatic_classdef___globals);
        goto CPyL20;
    }
    if (cpy_r_r5) goto CPyL6;
    cpy_r_r6 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_is_final_def;
    if (cpy_r_r6) goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r7 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 279, CPyStatic_classdef___globals);
        goto CPyL21;
    }
CPyL7: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 279, CPyStatic_classdef___globals);
        goto CPyL20;
    }
    cpy_r_typ = cpy_r_r10;
    cpy_r_r11 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_builder___IRBuilder___accept(cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 280, CPyStatic_classdef___globals);
        goto CPyL22;
    }
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_attr", 280, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r14);
        goto CPyL22;
    }
    cpy_r_value = cpy_r_r15;
    cpy_r_r16 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyStatic_classdef___globals;
    cpy_r_r18 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 282, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_attr", 282, CPyStatic_classdef___globals, "tuple", cpy_r_r19);
        goto CPyL23;
    }
    cpy_r_r21 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((mypy___nodes___NameExprObject *)cpy_r_lvalue)->_name;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDef_builder___IRBuilder___load_str(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 282, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    cpy_r_r24 = PyList_New(3);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 282, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_typ;
    cpy_r_r27 = cpy_r_r26 + 8;
    *(PyObject * *)cpy_r_r27 = cpy_r_r23;
    cpy_r_r28 = cpy_r_r26 + 16;
    CPy_INCREF(cpy_r_value);
    *(PyObject * *)cpy_r_r28 = cpy_r_value;
    cpy_r_r29 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_builder___IRBuilder___call_c(cpy_r_r16, cpy_r_r20, cpy_r_r24, cpy_r_r29);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 281, CPyStatic_classdef___globals);
        goto CPyL26;
    } else
        goto CPyL27;
CPyL15: ;
    cpy_r_r31 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_builder___IRBuilder___non_function_scope(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 284, CPyStatic_classdef___globals);
        goto CPyL26;
    }
    if (!cpy_r_r32) goto CPyL28;
    cpy_r_r33 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_is_final_def;
    if (!cpy_r_r33) goto CPyL28;
CPyL18: ;
    cpy_r_r34 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r36 = ((mypy___nodes___ClassDefObject *)cpy_r_r35)->_name;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPyDef_builder___IRBuilder___init_final_static(cpy_r_r34, cpy_r_lvalue, cpy_r_value, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 285, CPyStatic_classdef___globals);
        goto CPyL20;
    }
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL21: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r16);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL20;
CPyL27: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL15;
CPyL28: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL19;
}

PyObject *CPyPy_classdef___ExtClassBuilder___add_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OO:add_attr", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___ExtClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___ExtClassBuilder___add_attr(arg_self, arg_lvalue, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 272, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___ExtClassBuilder___finalize(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_attrs_with_defaults;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_default_assignments;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[8149]; /* 'skip_attr_default' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_self, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 289, CPyStatic_classdef___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_classdef___find_attr_initializers(cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 288, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_attrs_with_defaults = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    cpy_r_default_assignments = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attrs_with_defaults;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "ClassIR", "attrs_with_defaults", 291, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r7);
CPyL3: ;
    cpy_r_r8 = _PySet_Update(cpy_r_r7, cpy_r_attrs_with_defaults);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_attrs_with_defaults);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 291, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    cpy_r_r10 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_classdef___generate_attr_defaults_init(cpy_r_r10, cpy_r_r11, cpy_r_default_assignments);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_default_assignments);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 292, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    cpy_r_r13 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypyc___irbuild___classdef___ExtClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_classdef___create_ne_from_eq(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 293, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_default_assignments);
    goto CPyL7;
}

PyObject *CPyPy_classdef___ExtClassBuilder___finalize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:finalize", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___ExtClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.ExtClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_classdef___ExtClassBuilder___finalize(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 287, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___DataClassBuilder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_classdef___ExtClassBuilder_____init__(cpy_r_self, cpy_r_builder, cpy_r_cdef);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 303, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPyDef_classdef___DataClassBuilder___create_non_ext_info(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 304, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    if (((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext != NULL) {
        CPy_DECREF(((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext);
    }
    ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 304, CPyStatic_classdef___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_classdef___DataClassBuilder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "cdef", 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___DataClassBuilder_____init__(arg_self, arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__init__", 302, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___DataClassBuilder___create_non_ext_info(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
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
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_classdef___globals;
    cpy_r_r2 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 314, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 314, CPyStatic_classdef___globals, "tuple", cpy_r_r3);
        goto CPyL24;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 314, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    cpy_r_r6 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r7 = ((mypy___nodes___ClassDefObject *)cpy_r_r6)->_line;
    CPyTagged_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_builder___IRBuilder___call_c(cpy_r_r0, cpy_r_r4, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 314, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    cpy_r_r9 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyList_New(0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 315, CPyStatic_classdef___globals);
        goto CPyL26;
    }
    cpy_r_r11 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_r11)->_line;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_ops___TupleSet(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 315, CPyStatic_classdef___globals);
        goto CPyL26;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___add(cpy_r_r9, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 315, CPyStatic_classdef___globals);
        goto CPyL27;
    }
    cpy_r_r15 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatic_classdef___globals;
    cpy_r_r17 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 316, CPyStatic_classdef___globals);
        goto CPyL28;
    }
    if (likely(PyTuple_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 316, CPyStatic_classdef___globals, "tuple", cpy_r_r18);
        goto CPyL28;
    }
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 316, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    cpy_r_r21 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r22 = ((mypy___nodes___ClassDefObject *)cpy_r_r21)->_line;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDef_builder___IRBuilder___call_c(cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 316, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    cpy_r_r24 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyStatic_classdef___globals;
    cpy_r_r26 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL31;
    }
    if (likely(PyTuple_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals, "tuple", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_r28, 2);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL31;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_rtypes___RType)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals, "mypyc.ir.rtypes.RType", cpy_r_r29);
        goto CPyL31;
    }
    cpy_r_r31 = CPyStatic_classdef___globals;
    cpy_r_r32 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL32;
    }
    if (likely(PyTuple_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals, "tuple", cpy_r_r33);
        goto CPyL32;
    }
    cpy_r_r35 = CPySequenceTuple_GetItem(cpy_r_r34, 4);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals, "str", cpy_r_r35);
        goto CPyL32;
    }
    cpy_r_r37 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r38 = ((mypy___nodes___ClassDefObject *)cpy_r_r37)->_line;
    CPyTagged_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_ops___LoadAddress(cpy_r_r30, cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL31;
    }
    cpy_r_r40 = CPyDef_builder___IRBuilder___add(cpy_r_r24, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 317, CPyStatic_classdef___globals);
        goto CPyL33;
    }
    cpy_r_r41 = CPyDef_class_ir___NonExtClassInfo(cpy_r_r8, cpy_r_r14, cpy_r_r23, cpy_r_r40);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 313, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    return cpy_r_r41;
CPyL23: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r19);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r23);
    goto CPyL23;
}

PyObject *CPyPy_classdef___DataClassBuilder___create_non_ext_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":create_non_ext_info", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___DataClassBuilder___create_non_ext_info(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_non_ext_info", 306, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___DataClassBuilder___skip_attr_default(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_type;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    return cpy_r_r2;
}

PyObject *CPyPy_classdef___DataClassBuilder___skip_attr_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "stmt", 0};
    static CPyArg_Parser parser = {"OO:skip_attr_default", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___DataClassBuilder___skip_attr_default(arg_self, arg_name, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "skip_attr_default", 320, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___DataClassBuilder___get_type_annotation(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_ann_type;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 326, CPyStatic_classdef___globals);
        goto CPyL5;
    }
    cpy_r_ann_type = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_ann_type)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_ann_type) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_ann_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 328, CPyStatic_classdef___globals, "mypy.types.Instance", cpy_r_ann_type);
        goto CPyL7;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_ann_type);
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DECREF(cpy_r_ann_type);
    goto CPyL4;
CPyL7: ;
    CPy_DecRef(cpy_r_ann_type);
    goto CPyL5;
}

PyObject *CPyPy_classdef___DataClassBuilder___get_type_annotation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:get_type_annotation", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___DataClassBuilder___get_type_annotation(arg_self, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 323, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___DataClassBuilder___add_attr(PyObject *cpy_r_self, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_attr", "DataClassBuilder", "non_ext", 333, CPyStatic_classdef___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyStatics[8151]; /* 'get_type_annotation' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_self, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 333, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyDef_classdef___add_non_ext_class_attr_ann(cpy_r_r0, cpy_r_r1, cpy_r_lvalue, cpy_r_stmt, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 332, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_attr", "DataClassBuilder", "non_ext", 336, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_attrs_to_cache;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_classdef___add_non_ext_class_attr(cpy_r_r5, cpy_r_r6, cpy_r_lvalue, cpy_r_stmt, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 335, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    cpy_r_r10 = CPyDef_classdef___ExtClassBuilder___add_attr(cpy_r_self, cpy_r_lvalue, cpy_r_stmt);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 338, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_classdef___DataClassBuilder___add_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OO:add_attr", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___DataClassBuilder___add_attr(arg_self, arg_lvalue, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_attr", 331, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___DataClassBuilder___finalize(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_d;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_dec;
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
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = CPyDef_classdef___ExtClassBuilder___finalize(cpy_r_self, cpy_r_ir);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 358, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    cpy_r_r1 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_type_obj;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 359, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "DataClassBuilder", "non_ext", 361, CPyStatic_classdef___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r8 = ((mypy___nodes___ClassDefObject *)cpy_r_r7)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_add_annotations_to_dict;
    cpy_r_r10 = CPyDef_classdef___add_dunders_to_non_ext_dict(cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 360, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    cpy_r_r11 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r13 = ((mypy___nodes___ClassDefObject *)cpy_r_r12)->_decorators;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL7: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL27;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "finalize", 364, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL28;
    }
    cpy_r_d = cpy_r_r20;
    cpy_r_r21 = CPyDef_irbuild___util___is_dataclass_decorator(cpy_r_d);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 364, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    if (cpy_r_r21) {
        goto CPyL30;
    } else
        goto CPyL31;
CPyL11: ;
    cpy_r_r22 = cpy_r_d;
    goto CPyL15;
CPyL12: ;
    cpy_r_r23 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r23;
    goto CPyL7;
CPyL13: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 364, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_builder___IRBuilder___accept(cpy_r_r11, cpy_r_r22, cpy_r_r25);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 363, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "finalize", 363, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r26);
        goto CPyL25;
    }
    cpy_r_dec = cpy_r_r27;
    cpy_r_r28 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_classdef___globals;
    cpy_r_r30 = CPyStatics[8152]; /* 'dataclass_sleight_of_hand' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 367, CPyStatic_classdef___globals);
        goto CPyL32;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "finalize", 367, CPyStatic_classdef___globals, "tuple", cpy_r_r31);
        goto CPyL32;
    }
    cpy_r_r33 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_type_obj;
    CPy_INCREF(cpy_r_r33);
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "finalize", 368, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r33);
        goto CPyL33;
    }
    cpy_r_r35 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "DataClassBuilder", "non_ext", 368, CPyStatic_classdef___globals);
        goto CPyL34;
    }
CPyL21: ;
    cpy_r_r36 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_r35)->_dict;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_non_ext;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "finalize", "DataClassBuilder", "non_ext", 368, CPyStatic_classdef___globals);
        goto CPyL35;
    }
CPyL22: ;
    cpy_r_r38 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_r37)->_anns;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PyList_New(4);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 368, CPyStatic_classdef___globals);
        goto CPyL36;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_dec;
    cpy_r_r42 = cpy_r_r41 + 8;
    *(PyObject * *)cpy_r_r42 = cpy_r_r34;
    cpy_r_r43 = cpy_r_r41 + 16;
    *(PyObject * *)cpy_r_r43 = cpy_r_r36;
    cpy_r_r44 = cpy_r_r41 + 24;
    *(PyObject * *)cpy_r_r44 = cpy_r_r38;
    cpy_r_r45 = ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r_self)->_cdef;
    cpy_r_r46 = ((mypy___nodes___ClassDefObject *)cpy_r_r45)->_line;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_builder___IRBuilder___call_c(cpy_r_r28, cpy_r_r32, cpy_r_r39, cpy_r_r46);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 366, CPyStatic_classdef___globals);
        goto CPyL25;
    } else
        goto CPyL37;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    goto CPyL13;
CPyL28: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_d);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL11;
CPyL31: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL12;
CPyL32: ;
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_r28);
    goto CPyL25;
CPyL33: ;
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL25;
CPyL35: ;
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r38);
    goto CPyL25;
CPyL37: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL24;
}

PyObject *CPyPy_classdef___DataClassBuilder___finalize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:finalize", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj_self) == CPyType_classdef___DataClassBuilder)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_classdef___DataClassBuilder___finalize(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "finalize", 340, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___DataClassBuilder_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___irbuild___classdef___DataClassBuilderObject *)cpy_r___mypyc_self__)->_add_annotations_to_dict = 1;
    return 1;
}

PyObject *CPyPy_classdef___DataClassBuilder_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely((Py_TYPE(obj___mypyc_self__) == CPyType_classdef___AttrsClassBuilder) || (Py_TYPE(obj___mypyc_self__) == CPyType_classdef___DataClassBuilder)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.DataClassBuilder", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_classdef___DataClassBuilder_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__mypyc_defaults_setup", -1, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___AttrsClassBuilder___skip_attr_default(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_stmt) {
    return 1;
}

PyObject *CPyPy_classdef___AttrsClassBuilder___skip_attr_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "stmt", 0};
    static CPyArg_Parser parser = {"OO:skip_attr_default", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.AttrsClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_classdef___AttrsClassBuilder___skip_attr_default(arg_self, arg_name, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "skip_attr_default", 384, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___AttrsClassBuilder___get_type_annotation(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_type_name;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_lvalue;
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
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r1 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL39;
    cpy_r_r5 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___CallExpr))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 390, CPyStatic_classdef___globals, "mypy.nodes.CallExpr", cpy_r_r5);
        goto CPyL40;
    }
    cpy_r_r7 = ((mypy___nodes___CallExprObject *)cpy_r_r6)->_callee;
    CPy_INCREF(cpy_r_r7);
    cpy_r_callee = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL41;
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r12 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 393, CPyStatic_classdef___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL42;
    }
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_nodes___MemberExpr, 6, mypy___nodes___MemberExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 393, CPyStatic_classdef___globals);
        goto CPyL42;
    }
CPyL5: ;
    cpy_r_r14 = CPyStatics[4458]; /* 'attr.ib' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL8;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", -1, CPyStatic_classdef___globals);
        goto CPyL42;
    }
CPyL8: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (cpy_r_r20) {
        goto CPyL43;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL16;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r22 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 393, CPyStatic_classdef___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL40;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___MemberExpr, 6, mypy___nodes___MemberExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 393, CPyStatic_classdef___globals);
        goto CPyL40;
    }
CPyL12: ;
    cpy_r_r24 = CPyStatics[4460]; /* 'attr.attr' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL15;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", -1, CPyStatic_classdef___globals);
        goto CPyL40;
    }
CPyL15: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    cpy_r_r21 = cpy_r_r30;
CPyL16: ;
    if (!cpy_r_r21) goto CPyL39;
    cpy_r_r31 = CPyStatics[802]; /* 'type' */
    cpy_r_r32 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_nodes___CallExpr))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 394, CPyStatic_classdef___globals, "mypy.nodes.CallExpr", cpy_r_r32);
        goto CPyL40;
    }
    cpy_r_r34 = ((mypy___nodes___CallExprObject *)cpy_r_r33)->_arg_names;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = PySequence_Contains(cpy_r_r34, cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 394, CPyStatic_classdef___globals);
        goto CPyL40;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL39;
    cpy_r_r38 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___CallExpr))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 396, CPyStatic_classdef___globals, "mypy.nodes.CallExpr", cpy_r_r38);
        goto CPyL40;
    }
    cpy_r_r40 = ((mypy___nodes___CallExprObject *)cpy_r_r39)->_arg_names;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[802]; /* 'type' */
    cpy_r_r42 = CPyList_Index(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 396, CPyStatic_classdef___globals);
        goto CPyL40;
    }
    cpy_r_index = cpy_r_r42;
    cpy_r_r43 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_nodes___CallExpr))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 397, CPyStatic_classdef___globals, "mypy.nodes.CallExpr", cpy_r_r43);
        goto CPyL44;
    }
    cpy_r_r45 = ((mypy___nodes___CallExprObject *)cpy_r_r44)->_args;
    cpy_r_r46 = CPyList_GetItem(cpy_r_r45, cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 397, CPyStatic_classdef___globals);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nodes___Expression)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 397, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r46);
        goto CPyL40;
    }
    cpy_r_type_name = cpy_r_r47;
    cpy_r_r48 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_type_name)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (!cpy_r_r51) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_type_name) == CPyType_nodes___NameExpr))
        cpy_r_r52 = cpy_r_type_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 398, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_type_name);
        goto CPyL46;
    }
    cpy_r_r53 = ((mypy___nodes___NameExprObject *)cpy_r_r52)->_node;
    cpy_r_r54 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r55 = (CPyPtr)&((PyObject *)cpy_r_r53)->ob_type;
    cpy_r_r56 = *(PyObject * *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 == cpy_r_r54;
    if (!cpy_r_r57) goto CPyL29;
    cpy_r_r58 = cpy_r_r57;
    goto CPyL30;
CPyL29: ;
    cpy_r_r59 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r60 = (CPyPtr)&((PyObject *)cpy_r_r53)->ob_type;
    cpy_r_r61 = *(PyObject * *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 == cpy_r_r59;
    cpy_r_r58 = cpy_r_r62;
CPyL30: ;
    if (!cpy_r_r58) goto CPyL45;
    cpy_r_r63 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_lvalues;
    cpy_r_r64 = CPyList_GetItemShort(cpy_r_r63, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 399, CPyStatic_classdef___globals);
        goto CPyL46;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_nodes___Expression)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 399, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r64);
        goto CPyL46;
    }
    cpy_r_lvalue = cpy_r_r65;
    cpy_r_r66 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    CPy_DECREF(cpy_r_lvalue);
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (cpy_r_r69) {
        goto CPyL36;
    } else
        goto CPyL47;
CPyL34: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 400, CPyStatic_classdef___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_type_name) == CPyType_nodes___NameExpr))
        cpy_r_r71 = cpy_r_type_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 401, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_type_name);
        goto CPyL46;
    }
    cpy_r_r72 = ((mypy___nodes___NameExprObject *)cpy_r_r71)->_node;
    CPy_INCREF(cpy_r_r72);
    if (likely((Py_TYPE(cpy_r_r72) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r72) == CPyType_nodes___TypeInfo)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 401, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo", cpy_r_r72);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_type_name);
    return cpy_r_r73;
CPyL39: ;
    cpy_r_r74 = Py_None;
    CPy_INCREF(cpy_r_r74);
    return cpy_r_r74;
CPyL40: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL41: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_callee);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_callee);
    goto CPyL9;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL40;
CPyL45: ;
    CPy_DECREF(cpy_r_type_name);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_type_name);
    goto CPyL40;
CPyL47: ;
    CPy_DECREF(cpy_r_type_name);
    goto CPyL34;
}

PyObject *CPyPy_classdef___AttrsClassBuilder___get_type_annotation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:get_type_annotation", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_classdef___AttrsClassBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.AttrsClassBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___AttrsClassBuilder___get_type_annotation(arg_self, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "get_type_annotation", 387, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___AttrsClassBuilder_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypyc___irbuild___classdef___AttrsClassBuilderObject *)cpy_r___mypyc_self__)->_add_annotations_to_dict = 1;
    ((mypyc___irbuild___classdef___AttrsClassBuilderObject *)cpy_r___mypyc_self__)->_add_annotations_to_dict = 0;
    return 1;
}

PyObject *CPyPy_classdef___AttrsClassBuilder_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_classdef___AttrsClassBuilder))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.classdef.AttrsClassBuilder", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_classdef___AttrsClassBuilder_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "__mypyc_defaults_setup", -1, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___allocate_class(PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_base_exprs;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_x;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_bases;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_tp_bases;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_modname;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_template;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_tp;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_ir;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
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
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyPtr cpy_r_r117;
    CPyPtr cpy_r_r118;
    CPyPtr cpy_r_r119;
    CPyPtr cpy_r_r120;
    CPyTagged cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_base_type_exprs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_removed_base_type_exprs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyNumber_Add(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 407, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 407, CPyStatic_classdef___globals, "list", cpy_r_r2);
        goto CPyL67;
    }
    cpy_r_base_exprs = cpy_r_r3;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_base_exprs)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL68;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_base_exprs)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 409, CPyStatic_classdef___globals);
        goto CPyL69;
    }
    cpy_r_r11 = 0;
CPyL5: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_base_exprs)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL70;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_base_exprs, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Expression)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 409, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL71;
    }
    cpy_r_x = cpy_r_r17;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r18);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 409, CPyStatic_classdef___globals);
        goto CPyL71;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 409, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r19);
        goto CPyL71;
    }
    cpy_r_r21 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 409, CPyStatic_classdef___globals);
        goto CPyL71;
    }
    cpy_r_r22 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r22;
    goto CPyL5;
CPyL11: ;
    cpy_r_bases = cpy_r_r10;
    cpy_r_r23 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_builder___IRBuilder___new_tuple(cpy_r_builder, cpy_r_bases, cpy_r_r23);
    CPy_DECREF(cpy_r_bases);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 410, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    cpy_r_tp_bases = cpy_r_r24;
    goto CPyL19;
CPyL13: ;
    cpy_r_r25 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r25 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 412, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_ops___LoadErrorValue(cpy_r_r25, cpy_r_r27, 1, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 412, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    cpy_r_r30 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 412, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    cpy_r_tp_bases = cpy_r_r30;
CPyL19: ;
    cpy_r_r31 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "allocate_class", "IRBuilder", "module_name", 413, CPyStatic_classdef___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r31);
CPyL20: ;
    cpy_r_r32 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 413, CPyStatic_classdef___globals);
        goto CPyL72;
    }
    cpy_r_modname = cpy_r_r32;
    cpy_r_r33 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL73;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 415, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r35 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[8153]; /* '_template' */
    cpy_r_r37 = PyUnicode_Concat(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 415, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    cpy_r_r38 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "allocate_class", "IRBuilder", "module_name", 415, CPyStatic_classdef___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r38);
CPyL26: ;
    cpy_r_r39 = CPyStatics[802]; /* 'type' */
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_ops___LoadStatic(cpy_r_r33, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 415, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    cpy_r_r43 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 414, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    cpy_r_template = cpy_r_r43;
    cpy_r_r44 = CPyStatic_classdef___globals;
    cpy_r_r45 = CPyStatics[8154]; /* 'pytype_from_template_op' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 418, CPyStatic_classdef___globals);
        goto CPyL76;
    }
    if (likely(PyTuple_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 418, CPyStatic_classdef___globals, "tuple", cpy_r_r46);
        goto CPyL76;
    }
    cpy_r_r48 = PyList_New(3);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 418, CPyStatic_classdef___globals);
        goto CPyL77;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    *(PyObject * *)cpy_r_r50 = cpy_r_template;
    cpy_r_r51 = cpy_r_r50 + 8;
    *(PyObject * *)cpy_r_r51 = cpy_r_tp_bases;
    cpy_r_r52 = cpy_r_r50 + 16;
    *(PyObject * *)cpy_r_r52 = cpy_r_modname;
    cpy_r_r53 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r47, cpy_r_r48, cpy_r_r53);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 418, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    cpy_r_tp = cpy_r_r54;
    cpy_r_r55 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r56 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r55)->_type_to_ir;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 420, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_class_ir___ClassIR))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 420, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r58);
        goto CPyL78;
    }
    cpy_r_ir = cpy_r_r59;
    cpy_r_r60 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    if (cpy_r_r60) goto CPyL79;
CPyL35: ;
    cpy_r_r61 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_ir);
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_r61 != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL80;
    if (likely(cpy_r_r61 != Py_None))
        cpy_r_r64 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 421, CPyStatic_classdef___globals, "str", cpy_r_r61);
        goto CPyL78;
    }
    cpy_r_r65 = CPyStr_IsTrue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (cpy_r_r65) goto CPyL49;
CPyL38: ;
    cpy_r_r66 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[7082]; /* '_trait_vtable_setup' */
    cpy_r_r68 = PyUnicode_Concat(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 425, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r69 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "allocate_class", "IRBuilder", "module_name", 427, CPyStatic_classdef___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r69);
CPyL40: ;
    cpy_r_r70 = PyList_New(0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 428, CPyStatic_classdef___globals);
        goto CPyL82;
    }
    cpy_r_r71 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL83;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 428, CPyStatic_classdef___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r73 = CPyDef_func_ir___FuncSignature(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 428, CPyStatic_classdef___globals);
        goto CPyL82;
    }
    cpy_r_r74 = Py_None;
    cpy_r_r75 = CPY_INT_TAG;
    cpy_r_r76 = 2;
    cpy_r_r77 = 2;
    cpy_r_r78 = 2;
    cpy_r_r79 = CPyDef_func_ir___FuncDecl(cpy_r_r68, cpy_r_r74, cpy_r_r69, cpy_r_r73, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 424, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r80 = PyList_New(0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 430, CPyStatic_classdef___globals);
        goto CPyL84;
    }
    cpy_r_r81 = CPyDef_ops___Call(cpy_r_r79, cpy_r_r80, -2);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 423, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r82 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 422, CPyStatic_classdef___globals);
        goto CPyL78;
    } else
        goto CPyL85;
CPyL49: ;
    cpy_r_r83 = CPyStatic_classdef___globals;
    cpy_r_r84 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r85 = CPyDict_GetItem(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 436, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    if (likely(PyTuple_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 436, CPyStatic_classdef___globals, "tuple", cpy_r_r85);
        goto CPyL78;
    }
    cpy_r_r87 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r88 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 439, CPyStatic_classdef___globals);
        goto CPyL86;
    }
    cpy_r_r89 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r90 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r89)->_type_to_ir;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 440, CPyStatic_classdef___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_class_ir___ClassIR))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 440, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r92);
        goto CPyL87;
    }
    cpy_r_r94 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyDef_classdef___create_mypyc_attrs_tuple(cpy_r_builder, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    CPyTagged_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 440, CPyStatic_classdef___globals);
        goto CPyL87;
    }
    cpy_r_r96 = PyList_New(3);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 437, CPyStatic_classdef___globals);
        goto CPyL88;
    }
    cpy_r_r97 = (CPyPtr)&((PyListObject *)cpy_r_r96)->ob_item;
    cpy_r_r98 = *(CPyPtr *)cpy_r_r97;
    CPy_INCREF(cpy_r_tp);
    *(PyObject * *)cpy_r_r98 = cpy_r_tp;
    cpy_r_r99 = cpy_r_r98 + 8;
    *(PyObject * *)cpy_r_r99 = cpy_r_r88;
    cpy_r_r100 = cpy_r_r98 + 16;
    *(PyObject * *)cpy_r_r100 = cpy_r_r95;
    cpy_r_r101 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r101);
    cpy_r_r102 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r86, cpy_r_r96, cpy_r_r101);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r96);
    CPyTagged_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 435, CPyStatic_classdef___globals);
        goto CPyL78;
    } else
        goto CPyL89;
CPyL57: ;
    cpy_r_r103 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "allocate_class", "IRBuilder", "module_name", 446, CPyStatic_classdef___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r104);
CPyL58: ;
    cpy_r_r105 = CPyStatics[802]; /* 'type' */
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPyDef_ops___InitStatic(cpy_r_tp, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 446, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r108 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 446, CPyStatic_classdef___globals);
        goto CPyL78;
    } else
        goto CPyL91;
CPyL60: ;
    cpy_r_r109 = CPyStatic_classdef___globals;
    cpy_r_r110 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 450, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    if (likely(PyTuple_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "allocate_class", 450, CPyStatic_classdef___globals, "tuple", cpy_r_r111);
        goto CPyL78;
    }
    cpy_r_r113 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 450, CPyStatic_classdef___globals);
        goto CPyL92;
    }
    cpy_r_r114 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 450, CPyStatic_classdef___globals);
        goto CPyL93;
    }
    cpy_r_r116 = PyList_New(3);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 450, CPyStatic_classdef___globals);
        goto CPyL94;
    }
    cpy_r_r117 = (CPyPtr)&((PyListObject *)cpy_r_r116)->ob_item;
    cpy_r_r118 = *(CPyPtr *)cpy_r_r117;
    *(PyObject * *)cpy_r_r118 = cpy_r_r113;
    cpy_r_r119 = cpy_r_r118 + 8;
    *(PyObject * *)cpy_r_r119 = cpy_r_r115;
    cpy_r_r120 = cpy_r_r118 + 16;
    CPy_INCREF(cpy_r_tp);
    *(PyObject * *)cpy_r_r120 = cpy_r_tp;
    cpy_r_r121 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r121);
    cpy_r_r122 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r112, cpy_r_r116, cpy_r_r121);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r116);
    CPyTagged_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 449, CPyStatic_classdef___globals);
        goto CPyL78;
    } else
        goto CPyL95;
CPyL66: ;
    return cpy_r_tp;
CPyL67: ;
    cpy_r_r123 = NULL;
    return cpy_r_r123;
CPyL68: ;
    CPy_DECREF(cpy_r_base_exprs);
    goto CPyL13;
CPyL69: ;
    CPy_DecRef(cpy_r_base_exprs);
    goto CPyL67;
CPyL70: ;
    CPy_DECREF(cpy_r_base_exprs);
    goto CPyL11;
CPyL71: ;
    CPy_DecRef(cpy_r_base_exprs);
    CPy_DecRef(cpy_r_r10);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_tp_bases);
    goto CPyL67;
CPyL73: ;
    CPy_DecRef(cpy_r_tp_bases);
    CPy_DecRef(cpy_r_modname);
    goto CPyL22;
CPyL74: ;
    CPy_DecRef(cpy_r_tp_bases);
    CPy_DecRef(cpy_r_modname);
    goto CPyL67;
CPyL75: ;
    CPy_DecRef(cpy_r_tp_bases);
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_r37);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_tp_bases);
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_template);
    goto CPyL67;
CPyL77: ;
    CPy_DecRef(cpy_r_tp_bases);
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_template);
    CPy_DecRef(cpy_r_r47);
    goto CPyL67;
CPyL78: ;
    CPy_DecRef(cpy_r_tp);
    goto CPyL67;
CPyL79: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL49;
CPyL80: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL38;
CPyL81: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r68);
    goto CPyL67;
CPyL82: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    goto CPyL67;
CPyL83: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    goto CPyL42;
CPyL84: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r79);
    goto CPyL67;
CPyL85: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL49;
CPyL86: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r86);
    goto CPyL67;
CPyL87: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    goto CPyL67;
CPyL88: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    goto CPyL67;
CPyL89: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL57;
CPyL90: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r103);
    goto CPyL67;
CPyL91: ;
    CPy_DECREF(cpy_r_r108);
    goto CPyL60;
CPyL92: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r112);
    goto CPyL67;
CPyL93: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    goto CPyL67;
CPyL94: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r115);
    goto CPyL67;
CPyL95: ;
    CPy_DECREF(cpy_r_r122);
    goto CPyL66;
}

PyObject *CPyPy_classdef___allocate_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", 0};
    static CPyArg_Parser parser = {"OO:allocate_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___allocate_class(arg_builder, arg_cdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "allocate_class", 405, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___populate_non_ext_bases(PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_is_named_tuple;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_bases;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
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
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_base_ir;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r103;
    tuple_T2II cpy_r_r104;
    tuple_T2II cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r111;
    tuple_T2II cpy_r_r112;
    tuple_T2II cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    tuple_T2II cpy_r_r146;
    tuple_T2II cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_cls_module;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyTagged cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    CPyTagged cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    CPyTagged cpy_r_r188;
    CPyTagged cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_is_named_tuple;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "populate_non_ext_bases", "TypeInfo", "is_named_tuple", 469, CPyStatic_classdef___globals);
        goto CPyL125;
    }
CPyL1: ;
    cpy_r_is_named_tuple = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r3 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r2)->_type_to_ir;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 470, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_class_ir___ClassIR))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 470, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r5);
        goto CPyL125;
    }
    cpy_r_ir = cpy_r_r6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 471, CPyStatic_classdef___globals);
        goto CPyL126;
    }
    cpy_r_bases = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_r8)->_mro;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "populate_non_ext_bases", "TypeInfo", "mro", 472, CPyStatic_classdef___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = CPyList_GetSlice(cpy_r_r9, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 472, CPyStatic_classdef___globals);
        goto CPyL127;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 472, CPyStatic_classdef___globals, "list", cpy_r_r10);
        goto CPyL127;
    }
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL128;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely((Py_TYPE(cpy_r_r17) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r17) == CPyType_nodes___TypeInfo)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 472, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo", cpy_r_r17);
        goto CPyL129;
    }
    cpy_r_cls = cpy_r_r18;
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 473, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL11: ;
    cpy_r_r20 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL14;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL14;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 473, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL14: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (cpy_r_r26) goto CPyL131;
    if (!cpy_r_is_named_tuple) goto CPyL56;
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL17: ;
    cpy_r_r28 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL20;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL20;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL20: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    if (!cpy_r_r34) goto CPyL22;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL27;
CPyL22: ;
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL23: ;
    cpy_r_r37 = CPyStatics[757]; /* 'typing.Iterable' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL26;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL26;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL26: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    cpy_r_r35 = cpy_r_r43;
CPyL27: ;
    if (!cpy_r_r35) goto CPyL29;
    cpy_r_r44 = cpy_r_r35;
    goto CPyL34;
CPyL29: ;
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL30: ;
    cpy_r_r46 = CPyStatics[8155]; /* 'typing.Collection' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL33;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL33;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL33: ;
    cpy_r_r52 = cpy_r_r47 == 0;
    cpy_r_r44 = cpy_r_r52;
CPyL34: ;
    if (!cpy_r_r44) goto CPyL36;
    cpy_r_r53 = cpy_r_r44;
    goto CPyL41;
CPyL36: ;
    cpy_r_r54 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL37: ;
    cpy_r_r55 = CPyStatics[6438]; /* 'typing.Reversible' */
    cpy_r_r56 = PyUnicode_Compare(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = cpy_r_r56 == -1;
    if (!cpy_r_r57) goto CPyL40;
    cpy_r_r58 = PyErr_Occurred();
    cpy_r_r59 = cpy_r_r58 != NULL;
    if (!cpy_r_r59) goto CPyL40;
    cpy_r_r60 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL40: ;
    cpy_r_r61 = cpy_r_r56 == 0;
    cpy_r_r53 = cpy_r_r61;
CPyL41: ;
    if (!cpy_r_r53) goto CPyL43;
    cpy_r_r62 = cpy_r_r53;
    goto CPyL48;
CPyL43: ;
    cpy_r_r63 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL44: ;
    cpy_r_r64 = CPyStatics[826]; /* 'typing.Container' */
    cpy_r_r65 = PyUnicode_Compare(cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r66 = cpy_r_r65 == -1;
    if (!cpy_r_r66) goto CPyL47;
    cpy_r_r67 = PyErr_Occurred();
    cpy_r_r68 = cpy_r_r67 != NULL;
    if (!cpy_r_r68) goto CPyL47;
    cpy_r_r69 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL47: ;
    cpy_r_r70 = cpy_r_r65 == 0;
    cpy_r_r62 = cpy_r_r70;
CPyL48: ;
    if (!cpy_r_r62) goto CPyL50;
    cpy_r_r71 = cpy_r_r62;
    goto CPyL55;
CPyL50: ;
    cpy_r_r72 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 475, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL51: ;
    cpy_r_r73 = CPyStatics[6037]; /* 'typing.Sized' */
    cpy_r_r74 = PyUnicode_Compare(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r75 = cpy_r_r74 == -1;
    if (!cpy_r_r75) goto CPyL54;
    cpy_r_r76 = PyErr_Occurred();
    cpy_r_r77 = cpy_r_r76 != NULL;
    if (!cpy_r_r77) goto CPyL54;
    cpy_r_r78 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", -1, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL54: ;
    cpy_r_r79 = cpy_r_r74 == 0;
    cpy_r_r71 = cpy_r_r79;
CPyL55: ;
    if (cpy_r_r71) goto CPyL131;
CPyL56: ;
    cpy_r_r80 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r81 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r80)->_type_to_ir;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = PyDict_Contains(cpy_r_r81, cpy_r_cls);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 487, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_r84 = cpy_r_r82;
    if (!cpy_r_r84) goto CPyL65;
    cpy_r_r85 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r86 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r85)->_type_to_ir;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r86, cpy_r_cls);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 488, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_class_ir___ClassIR))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 488, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r87);
        goto CPyL130;
    }
    cpy_r_base_ir = cpy_r_r88;
    cpy_r_r89 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_children;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "populate_non_ext_bases", "ClassIR", "children", 489, CPyStatic_classdef___globals);
        goto CPyL132;
    }
CPyL61: ;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r91 = cpy_r_r89 != cpy_r_r90;
    if (!cpy_r_r91) goto CPyL133;
    cpy_r_r92 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_children;
    if (unlikely(cpy_r_r92 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'children' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r92);
    }
    CPy_DECREF(cpy_r_base_ir);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 490, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL63: ;
    if (likely(cpy_r_r92 != Py_None))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 490, CPyStatic_classdef___globals, "list", cpy_r_r92);
        goto CPyL130;
    }
    cpy_r_r94 = PyList_Append(cpy_r_r93, cpy_r_ir);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 490, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL65: ;
    cpy_r_r96 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 492, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL66: ;
    cpy_r_r97 = CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES;
    if (unlikely(cpy_r_r97 == NULL)) {
        goto CPyL134;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAGIC_TYPED_DICT_CLASSES\" was not set");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 492, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r99 = PySequence_Contains(cpy_r_r97, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 492, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_r101 = cpy_r_r99;
    if (!cpy_r_r101) goto CPyL87;
    cpy_r_r102 = CPyStatics[21]; /* 'typing' */
    CPy_INCREF(cpy_r_r102);
    cpy_r_module = cpy_r_r102;
    cpy_r_r103 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r104 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r103)->_capi_version;
    CPyTagged_INCREF(cpy_r_r104.f0);
    CPyTagged_INCREF(cpy_r_r104.f1);
    cpy_r_r105.f0 = 6;
    cpy_r_r105.f1 = 18;
    CPyTagged_INCREF(cpy_r_r105.f0);
    CPyTagged_INCREF(cpy_r_r105.f1);
    cpy_r_r106 = PyTuple_New(2);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10010 = CPyTagged_StealAsObject(cpy_r_r104.f0);
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp10010);
    PyObject *__tmp10011 = CPyTagged_StealAsObject(cpy_r_r104.f1);
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp10011);
    cpy_r_r107 = PyTuple_New(2);
    if (unlikely(cpy_r_r107 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10012 = CPyTagged_StealAsObject(cpy_r_r105.f0);
    PyTuple_SET_ITEM(cpy_r_r107, 0, __tmp10012);
    PyObject *__tmp10013 = CPyTagged_StealAsObject(cpy_r_r105.f1);
    PyTuple_SET_ITEM(cpy_r_r107, 1, __tmp10013);
    cpy_r_r108 = PyObject_RichCompare(cpy_r_r106, cpy_r_r107, 0);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 496, CPyStatic_classdef___globals);
        goto CPyL135;
    }
    if (unlikely(!PyBool_Check(cpy_r_r108))) {
        CPy_TypeError("bool", cpy_r_r108); cpy_r_r109 = 2;
    } else
        cpy_r_r109 = cpy_r_r108 == Py_True;
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 496, CPyStatic_classdef___globals);
        goto CPyL135;
    }
    if (!cpy_r_r109) goto CPyL84;
    cpy_r_r110 = CPyStatics[514]; /* 'TypedDict' */
    CPy_INCREF(cpy_r_r110);
    cpy_r_name = cpy_r_r110;
    cpy_r_r111 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r112 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r111)->_capi_version;
    CPyTagged_INCREF(cpy_r_r112.f0);
    CPyTagged_INCREF(cpy_r_r112.f1);
    cpy_r_r113.f0 = 6;
    cpy_r_r113.f1 = 16;
    CPyTagged_INCREF(cpy_r_r113.f0);
    CPyTagged_INCREF(cpy_r_r113.f1);
    cpy_r_r114 = PyTuple_New(2);
    if (unlikely(cpy_r_r114 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10014 = CPyTagged_StealAsObject(cpy_r_r112.f0);
    PyTuple_SET_ITEM(cpy_r_r114, 0, __tmp10014);
    PyObject *__tmp10015 = CPyTagged_StealAsObject(cpy_r_r112.f1);
    PyTuple_SET_ITEM(cpy_r_r114, 1, __tmp10015);
    cpy_r_r115 = PyTuple_New(2);
    if (unlikely(cpy_r_r115 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10016 = CPyTagged_StealAsObject(cpy_r_r113.f0);
    PyTuple_SET_ITEM(cpy_r_r115, 0, __tmp10016);
    PyObject *__tmp10017 = CPyTagged_StealAsObject(cpy_r_r113.f1);
    PyTuple_SET_ITEM(cpy_r_r115, 1, __tmp10017);
    cpy_r_r116 = PyObject_RichCompare(cpy_r_r114, cpy_r_r115, 0);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 498, CPyStatic_classdef___globals);
        goto CPyL136;
    }
    if (unlikely(!PyBool_Check(cpy_r_r116))) {
        CPy_TypeError("bool", cpy_r_r116); cpy_r_r117 = 2;
    } else
        cpy_r_r117 = cpy_r_r116 == Py_True;
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 498, CPyStatic_classdef___globals);
        goto CPyL136;
    }
    if (cpy_r_r117) {
        goto CPyL137;
    } else
        goto CPyL85;
CPyL77: ;
    cpy_r_r118 = CPyStatics[88]; /* 'typing_extensions' */
    CPy_INCREF(cpy_r_r118);
    cpy_r_module = cpy_r_r118;
    cpy_r_r119 = CPyStatics[620]; /* '_TypedDict' */
    CPy_INCREF(cpy_r_r119);
    cpy_r_name = cpy_r_r119;
    cpy_r_r120 = CPyModule_typing_extensions;
    cpy_r_r121 = CPyStatics[514]; /* 'TypedDict' */
    cpy_r_r122 = CPyObject_GetAttr(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 503, CPyStatic_classdef___globals);
        goto CPyL136;
    }
    cpy_r_r123 = (PyObject *)&PyType_Type;
    cpy_r_r124 = PyObject_IsInstance(cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 503, CPyStatic_classdef___globals);
        goto CPyL136;
    }
    cpy_r_r126 = cpy_r_r124;
    if (cpy_r_r126) {
        goto CPyL138;
    } else
        goto CPyL85;
CPyL80: ;
    cpy_r_r127 = CPyStatics[8156]; /* ('It looks like you may have an old version of '
                                      'typing_extensions installed. '
                                      'typing_extensions>=4.7.0 is required on Python 3.7.') */
    cpy_r_r128 = CPyModule_builtins;
    cpy_r_r129 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 504, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    PyObject *cpy_r_r131[1] = {cpy_r_r127};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r130, cpy_r_r132, 1, 0);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 504, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    CPy_Raise(cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 504, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r134 = CPyStatics[620]; /* '_TypedDict' */
    CPy_INCREF(cpy_r_r134);
    cpy_r_name = cpy_r_r134;
CPyL85: ;
    cpy_r_r135 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyDef_builder___IRBuilder___get_module_attr(cpy_r_builder, cpy_r_module, cpy_r_name, cpy_r_r135);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 512, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_base = cpy_r_r136;
    goto CPyL115;
CPyL87: ;
    if (!cpy_r_is_named_tuple) goto CPyL100;
    cpy_r_r137 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 513, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL89: ;
    cpy_r_r138 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r139 = PyUnicode_Compare(cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r140 = cpy_r_r139 == -1;
    if (!cpy_r_r140) goto CPyL92;
    cpy_r_r141 = PyErr_Occurred();
    cpy_r_r142 = cpy_r_r141 != NULL;
    if (!cpy_r_r142) goto CPyL92;
    cpy_r_r143 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 513, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL92: ;
    cpy_r_r144 = cpy_r_r139 == 0;
    if (!cpy_r_r144) goto CPyL100;
    cpy_r_r145 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r146 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r145)->_capi_version;
    CPyTagged_INCREF(cpy_r_r146.f0);
    CPyTagged_INCREF(cpy_r_r146.f1);
    cpy_r_r147.f0 = 6;
    cpy_r_r147.f1 = 18;
    CPyTagged_INCREF(cpy_r_r147.f0);
    CPyTagged_INCREF(cpy_r_r147.f1);
    cpy_r_r148 = PyTuple_New(2);
    if (unlikely(cpy_r_r148 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10018 = CPyTagged_StealAsObject(cpy_r_r146.f0);
    PyTuple_SET_ITEM(cpy_r_r148, 0, __tmp10018);
    PyObject *__tmp10019 = CPyTagged_StealAsObject(cpy_r_r146.f1);
    PyTuple_SET_ITEM(cpy_r_r148, 1, __tmp10019);
    cpy_r_r149 = PyTuple_New(2);
    if (unlikely(cpy_r_r149 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10020 = CPyTagged_StealAsObject(cpy_r_r147.f0);
    PyTuple_SET_ITEM(cpy_r_r149, 0, __tmp10020);
    PyObject *__tmp10021 = CPyTagged_StealAsObject(cpy_r_r147.f1);
    PyTuple_SET_ITEM(cpy_r_r149, 1, __tmp10021);
    cpy_r_r150 = PyObject_RichCompare(cpy_r_r148, cpy_r_r149, 0);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 514, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    if (unlikely(!PyBool_Check(cpy_r_r150))) {
        CPy_TypeError("bool", cpy_r_r150); cpy_r_r151 = 2;
    } else
        cpy_r_r151 = cpy_r_r150 == Py_True;
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 514, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    if (!cpy_r_r151) goto CPyL97;
    cpy_r_r152 = CPyStatics[512]; /* 'NamedTuple' */
    CPy_INCREF(cpy_r_r152);
    cpy_r_name = cpy_r_r152;
    goto CPyL98;
CPyL97: ;
    cpy_r_r153 = CPyStatics[612]; /* '_NamedTuple' */
    CPy_INCREF(cpy_r_r153);
    cpy_r_name = cpy_r_r153;
CPyL98: ;
    cpy_r_r154 = CPyStatics[21]; /* 'typing' */
    cpy_r_r155 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r155);
    cpy_r_r156 = CPyDef_builder___IRBuilder___get_module_attr(cpy_r_builder, cpy_r_r154, cpy_r_name, cpy_r_r155);
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 519, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_base = cpy_r_r156;
    goto CPyL115;
CPyL100: ;
    cpy_r_r157 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 521, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL101: ;
    cpy_r_r158 = CPyStatics[224]; /* '.' */
    cpy_r_r159 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r160 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r161[3] = {cpy_r_r157, cpy_r_r158, cpy_r_r160};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = PyObject_VectorcallMethod(cpy_r_r159, cpy_r_r162, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 521, CPyStatic_classdef___globals);
        goto CPyL139;
    }
    CPy_DECREF(cpy_r_r157);
    if (likely(PyList_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 521, CPyStatic_classdef___globals, "list", cpy_r_r163);
        goto CPyL140;
    }
    cpy_r_r165 = CPyList_GetItemShort(cpy_r_r164, 0);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 521, CPyStatic_classdef___globals);
        goto CPyL140;
    }
    if (likely(PyUnicode_Check(cpy_r_r165)))
        cpy_r_r166 = cpy_r_r165;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 521, CPyStatic_classdef___globals, "str", cpy_r_r165);
        goto CPyL140;
    }
    CPy_DECREF(cpy_r_r163);
    cpy_r_cls_module = cpy_r_r166;
    cpy_r_r167 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_current_module;
    CPy_INCREF(cpy_r_r167);
    cpy_r_r168 = PyUnicode_Compare(cpy_r_cls_module, cpy_r_r167);
    CPy_DECREF(cpy_r_cls_module);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r169 = cpy_r_r168 == -1;
    if (!cpy_r_r169) goto CPyL108;
    cpy_r_r170 = PyErr_Occurred();
    cpy_r_r171 = cpy_r_r170 != NULL;
    if (!cpy_r_r171) goto CPyL108;
    cpy_r_r172 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 522, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL108: ;
    cpy_r_r173 = cpy_r_r168 == 0;
    if (!cpy_r_r173) goto CPyL112;
    cpy_r_r174 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 523, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL110: ;
    cpy_r_r175 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r175);
    cpy_r_r176 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    CPyTagged_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 523, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_base = cpy_r_r176;
    goto CPyL115;
CPyL112: ;
    cpy_r_r177 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 525, CPyStatic_classdef___globals);
        goto CPyL130;
    }
CPyL113: ;
    cpy_r_r178 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r178);
    cpy_r_r179 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r177);
    CPyTagged_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 525, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_base = cpy_r_r179;
CPyL115: ;
    cpy_r_r180 = PyList_Append(cpy_r_bases, cpy_r_base);
    CPy_DECREF(cpy_r_base);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 526, CPyStatic_classdef___globals);
        goto CPyL130;
    }
    cpy_r_r182 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 527, CPyStatic_classdef___globals);
        goto CPyL129;
    }
CPyL117: ;
    cpy_r_r183 = CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES;
    if (unlikely(cpy_r_r183 == NULL)) {
        goto CPyL141;
    } else
        goto CPyL120;
CPyL118: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAGIC_TYPED_DICT_CLASSES\" was not set");
    cpy_r_r184 = 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 527, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    CPy_Unreachable();
CPyL120: ;
    cpy_r_r185 = PySequence_Contains(cpy_r_r183, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 527, CPyStatic_classdef___globals);
        goto CPyL129;
    }
    cpy_r_r187 = cpy_r_r185;
    if (cpy_r_r187) goto CPyL128;
CPyL122: ;
    cpy_r_r188 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r188;
    goto CPyL8;
CPyL123: ;
    cpy_r_r189 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r189);
    cpy_r_r190 = CPyDef_builder___IRBuilder___new_tuple(cpy_r_builder, cpy_r_bases, cpy_r_r189);
    CPy_DECREF(cpy_r_bases);
    CPyTagged_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 530, CPyStatic_classdef___globals);
        goto CPyL125;
    }
    return cpy_r_r190;
CPyL125: ;
    cpy_r_r191 = NULL;
    return cpy_r_r191;
CPyL126: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL125;
CPyL127: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    goto CPyL125;
CPyL128: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r11);
    goto CPyL123;
CPyL129: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    goto CPyL125;
CPyL130: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    goto CPyL125;
CPyL131: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL122;
CPyL132: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_base_ir);
    goto CPyL125;
CPyL133: ;
    CPy_DECREF(cpy_r_base_ir);
    goto CPyL65;
CPyL134: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r96);
    goto CPyL67;
CPyL135: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_module);
    goto CPyL125;
CPyL136: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_name);
    goto CPyL125;
CPyL137: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_name);
    goto CPyL77;
CPyL138: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_bases);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_name);
    goto CPyL80;
CPyL139: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r157);
    goto CPyL125;
CPyL140: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r163);
    goto CPyL125;
CPyL141: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r182);
    goto CPyL118;
}

PyObject *CPyPy_classdef___populate_non_ext_bases(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", 0};
    static CPyArg_Parser parser = {"OO:populate_non_ext_bases", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___populate_non_ext_bases(arg_builder, arg_cdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "populate_non_ext_bases", 464, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___find_non_ext_metaclass(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_bases) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_declared_metaclass;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2II cpy_r_r13;
    tuple_T2II cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2II cpy_r_r26;
    tuple_T2II cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
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
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_metaclass;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_metaclass;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 536, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r3);
        goto CPyL35;
    }
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 536, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 536, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL35;
    }
    cpy_r_declared_metaclass = cpy_r_r7;
    goto CPyL30;
CPyL5: ;
    cpy_r_r8 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_r8)->_typeddict_type;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", "TypeInfo", "typeddict_type", 538, CPyStatic_classdef___globals);
        goto CPyL35;
    }
CPyL6: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL12;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r13 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r12)->_capi_version;
    CPyTagged_INCREF(cpy_r_r13.f0);
    CPyTagged_INCREF(cpy_r_r13.f1);
    cpy_r_r14.f0 = 6;
    cpy_r_r14.f1 = 18;
    CPyTagged_INCREF(cpy_r_r14.f0);
    CPyTagged_INCREF(cpy_r_r14.f1);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10022 = CPyTagged_StealAsObject(cpy_r_r13.f0);
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp10022);
    PyObject *__tmp10023 = CPyTagged_StealAsObject(cpy_r_r13.f1);
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp10023);
    cpy_r_r16 = PyTuple_New(2);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10024 = CPyTagged_StealAsObject(cpy_r_r14.f0);
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp10024);
    PyObject *__tmp10025 = CPyTagged_StealAsObject(cpy_r_r14.f1);
    PyTuple_SET_ITEM(cpy_r_r16, 1, __tmp10025);
    cpy_r_r17 = PyObject_RichCompare(cpy_r_r15, cpy_r_r16, 5);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 538, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r17))) {
        CPy_TypeError("bool", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r17 == Py_True;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 538, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPyStatics[21]; /* 'typing' */
    cpy_r_r20 = CPyStatics[621]; /* '_TypedDictMeta' */
    cpy_r_r21 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_builder___IRBuilder___get_module_attr(cpy_r_builder, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 541, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    return cpy_r_r22;
CPyL12: ;
    cpy_r_r23 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r24 = ((mypy___nodes___TypeInfoObject *)cpy_r_r23)->_is_named_tuple;
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", "TypeInfo", "is_named_tuple", 542, CPyStatic_classdef___globals);
        goto CPyL35;
    }
CPyL13: ;
    if (!cpy_r_r24) goto CPyL19;
CPyL14: ;
    cpy_r_r25 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r26 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r25)->_capi_version;
    CPyTagged_INCREF(cpy_r_r26.f0);
    CPyTagged_INCREF(cpy_r_r26.f1);
    cpy_r_r27.f0 = 6;
    cpy_r_r27.f1 = 18;
    CPyTagged_INCREF(cpy_r_r27.f0);
    CPyTagged_INCREF(cpy_r_r27.f1);
    cpy_r_r28 = PyTuple_New(2);
    if (unlikely(cpy_r_r28 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10026 = CPyTagged_StealAsObject(cpy_r_r26.f0);
    PyTuple_SET_ITEM(cpy_r_r28, 0, __tmp10026);
    PyObject *__tmp10027 = CPyTagged_StealAsObject(cpy_r_r26.f1);
    PyTuple_SET_ITEM(cpy_r_r28, 1, __tmp10027);
    cpy_r_r29 = PyTuple_New(2);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10028 = CPyTagged_StealAsObject(cpy_r_r27.f0);
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp10028);
    PyObject *__tmp10029 = CPyTagged_StealAsObject(cpy_r_r27.f1);
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp10029);
    cpy_r_r30 = PyObject_RichCompare(cpy_r_r28, cpy_r_r29, 5);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 542, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r30))) {
        CPy_TypeError("bool", cpy_r_r30); cpy_r_r31 = 2;
    } else
        cpy_r_r31 = cpy_r_r30 == Py_True;
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 542, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (!cpy_r_r31) goto CPyL19;
    cpy_r_r32 = CPyStatics[21]; /* 'typing' */
    cpy_r_r33 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r34 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___get_module_attr(cpy_r_builder, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 545, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    return cpy_r_r35;
CPyL19: ;
    cpy_r_r36 = CPyStatic_classdef___globals;
    cpy_r_r37 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (likely(PyTuple_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals, "tuple", cpy_r_r38);
        goto CPyL35;
    }
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_r39, 2);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_rtypes___RType)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals, "mypyc.ir.rtypes.RType", cpy_r_r40);
        goto CPyL35;
    }
    cpy_r_r42 = CPyStatic_classdef___globals;
    cpy_r_r43 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals);
        goto CPyL36;
    }
    if (likely(PyTuple_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals, "tuple", cpy_r_r44);
        goto CPyL36;
    }
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_r45, 4);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals, "str", cpy_r_r46);
        goto CPyL36;
    }
    cpy_r_r48 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_ops___LoadAddress(cpy_r_r41, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 548, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 547, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    cpy_r_declared_metaclass = cpy_r_r50;
CPyL30: ;
    cpy_r_r51 = CPyStatic_classdef___globals;
    cpy_r_r52 = CPyStatics[8157]; /* 'py_calc_meta_op' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 551, CPyStatic_classdef___globals);
        goto CPyL37;
    }
    if (likely(PyTuple_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 551, CPyStatic_classdef___globals, "tuple", cpy_r_r53);
        goto CPyL37;
    }
    cpy_r_r55 = PyList_New(2);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 551, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    *(PyObject * *)cpy_r_r57 = cpy_r_declared_metaclass;
    cpy_r_r58 = cpy_r_r57 + 8;
    CPy_INCREF(cpy_r_bases);
    *(PyObject * *)cpy_r_r58 = cpy_r_bases;
    cpy_r_r59 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r54, cpy_r_r55, cpy_r_r59);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 551, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    return cpy_r_r60;
CPyL35: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL36: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_declared_metaclass);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_declared_metaclass);
    CPy_DecRef(cpy_r_r54);
    goto CPyL35;
}

PyObject *CPyPy_classdef___find_non_ext_metaclass(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "bases", 0};
    static CPyArg_Parser parser = {"OOO:find_non_ext_metaclass", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_bases;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_bases)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_bases;
    if (likely(PyObject_TypeCheck(obj_bases, CPyType_ops___Value)))
        arg_bases = obj_bases;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_bases); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___find_non_ext_metaclass(arg_builder, arg_cdef, arg_bases);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_non_ext_metaclass", 533, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___setup_non_ext_dict(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_metaclass, PyObject *cpy_r_bases) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_has_prepare;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_non_ext_dict;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_true_block;
    PyObject *cpy_r_false_block;
    PyObject *cpy_r_exit_block;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_cls_name;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_prepare_meth;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_prepare_dict;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    cpy_r_r0 = CPyStatic_classdef___globals;
    cpy_r_r1 = CPyStatics[8158]; /* 'py_hasattr_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 563, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 563, CPyStatic_classdef___globals, "tuple", cpy_r_r2);
        goto CPyL29;
    }
    cpy_r_r4 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r5 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 563, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    cpy_r_r6 = PyList_New(2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 563, CPyStatic_classdef___globals);
        goto CPyL31;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_metaclass);
    *(PyObject * *)cpy_r_r8 = cpy_r_metaclass;
    cpy_r_r9 = cpy_r_r8 + 8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r5;
    cpy_r_r10 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r3, cpy_r_r6, cpy_r_r10);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 562, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    cpy_r_has_prepare = cpy_r_r11;
    cpy_r_r12 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 566, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r14 = NULL;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___Register(cpy_r_r12, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 566, CPyStatic_classdef___globals);
        goto CPyL33;
    }
    cpy_r_non_ext_dict = cpy_r_r17;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___BasicBlock(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 568, CPyStatic_classdef___globals);
        goto CPyL34;
    }
    cpy_r_r20 = cpy_r_r19;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___BasicBlock(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 568, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    cpy_r_r23 = cpy_r_r22;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPyDef_ops___BasicBlock(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 568, CPyStatic_classdef___globals);
        goto CPyL36;
    }
    cpy_r_r26 = cpy_r_r25;
    cpy_r_true_block = cpy_r_r20;
    cpy_r_false_block = cpy_r_r23;
    cpy_r_exit_block = cpy_r_r26;
    cpy_r_r27 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_has_prepare, cpy_r_true_block, cpy_r_false_block);
    CPy_DECREF(cpy_r_has_prepare);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 569, CPyStatic_classdef___globals);
        goto CPyL37;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_true_block);
    CPy_DECREF(cpy_r_true_block);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 571, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_r29 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 572, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_cls_name = cpy_r_r30;
    cpy_r_r31 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r32 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_metaclass, cpy_r_r31, cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 573, CPyStatic_classdef___globals);
        goto CPyL39;
    }
    cpy_r_prepare_meth = cpy_r_r33;
    cpy_r_r34 = PyList_New(2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 574, CPyStatic_classdef___globals);
        goto CPyL40;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    *(PyObject * *)cpy_r_r36 = cpy_r_cls_name;
    cpy_r_r37 = cpy_r_r36 + 8;
    CPy_INCREF(cpy_r_bases);
    *(PyObject * *)cpy_r_r37 = cpy_r_bases;
    cpy_r_r38 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r38);
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_prepare_meth, cpy_r_r34, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_prepare_meth);
    CPy_DECREF(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 574, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_prepare_dict = cpy_r_r41;
    cpy_r_r42 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_non_ext_dict, cpy_r_prepare_dict, cpy_r_r42);
    CPy_DECREF(cpy_r_prepare_dict);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 575, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_r44 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_exit_block);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 576, CPyStatic_classdef___globals);
        goto CPyL38;
    }
    cpy_r_r45 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_false_block);
    CPy_DECREF(cpy_r_false_block);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 578, CPyStatic_classdef___globals);
        goto CPyL41;
    }
    cpy_r_r46 = CPyStatic_classdef___globals;
    cpy_r_r47 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 579, CPyStatic_classdef___globals);
        goto CPyL41;
    }
    if (likely(PyTuple_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 579, CPyStatic_classdef___globals, "tuple", cpy_r_r48);
        goto CPyL41;
    }
    cpy_r_r50 = PyList_New(0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 579, CPyStatic_classdef___globals);
        goto CPyL42;
    }
    cpy_r_r51 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 579, CPyStatic_classdef___globals);
        goto CPyL41;
    }
    cpy_r_r53 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_non_ext_dict, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 579, CPyStatic_classdef___globals);
        goto CPyL41;
    }
    cpy_r_r55 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_exit_block);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 580, CPyStatic_classdef___globals);
        goto CPyL41;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_exit_block);
    CPy_DECREF(cpy_r_exit_block);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 581, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    return cpy_r_non_ext_dict;
CPyL29: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_has_prepare);
    goto CPyL6;
CPyL33: ;
    CPy_DecRef(cpy_r_has_prepare);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_has_prepare);
    CPy_DecRef(cpy_r_non_ext_dict);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_has_prepare);
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_r20);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_has_prepare);
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_true_block);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cls_name);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cls_name);
    CPy_DecRef(cpy_r_prepare_meth);
    goto CPyL29;
CPyL41: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL29;
CPyL42: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_r49);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_non_ext_dict);
    goto CPyL29;
}

PyObject *CPyPy_classdef___setup_non_ext_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "metaclass", "bases", 0};
    static CPyArg_Parser parser = {"OOOO:setup_non_ext_dict", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_metaclass;
    PyObject *obj_bases;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_metaclass, &obj_bases)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_metaclass;
    if (likely(PyObject_TypeCheck(obj_metaclass, CPyType_ops___Value)))
        arg_metaclass = obj_metaclass;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_metaclass); 
        goto fail;
    }
    PyObject *arg_bases;
    if (likely(PyObject_TypeCheck(obj_bases, CPyType_ops___Value)))
        arg_bases = obj_bases;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_bases); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___setup_non_ext_dict(arg_builder, arg_cdef, arg_metaclass, arg_bases);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "setup_non_ext_dict", 554, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___add_non_ext_class_attr_ann(PyObject *cpy_r_builder, PyObject *cpy_r_non_ext, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt, PyObject *cpy_r_get_type_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_type_info;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_ann_type;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
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
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
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
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    if (cpy_r_get_type_info != NULL) goto CPyL44;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_get_type_info = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_get_type_info != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL45;
    PyObject *cpy_r_r4[1] = {cpy_r_stmt};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_get_type_info, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_get_type_info);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 597, CPyStatic_classdef___globals);
        goto CPyL46;
    }
    if ((Py_TYPE(cpy_r_r6) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeInfo))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL10030;
    if (cpy_r_r6 == Py_None)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL10030;
    CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 597, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo or None", cpy_r_r6);
    goto CPyL46;
__LL10030: ;
    cpy_r_type_info = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_type_info != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL47;
    CPy_INCREF(cpy_r_type_info);
    if (likely(cpy_r_type_info != Py_None))
        cpy_r_r10 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 597, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo", cpy_r_type_info);
        goto CPyL48;
    }
    cpy_r_r11 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 597, CPyStatic_classdef___globals);
        goto CPyL48;
    }
    if (cpy_r_r11) {
        goto CPyL49;
    } else
        goto CPyL47;
CPyL9: ;
    if (likely(cpy_r_type_info != Py_None))
        cpy_r_r12 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 599, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo", cpy_r_type_info);
        goto CPyL43;
    }
    cpy_r_r13 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_function___load_type(cpy_r_builder, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 599, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_typ = cpy_r_r14;
CPyL12: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_typ == cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL50;
    } else
        goto CPyL36;
CPyL13: ;
    cpy_r_r17 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_type;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_types___get_proper_type(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 603, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_ann_type = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_unanalyzed_type;
    cpy_r_r20 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL21;
    cpy_r_r24 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_unanalyzed_type;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_types___UnboundType))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 606, CPyStatic_classdef___globals, "mypy.types.UnboundType", cpy_r_r24);
        goto CPyL51;
    }
    cpy_r_r26 = ((mypy___types___UnboundTypeObject *)cpy_r_r25)->_original_str_expr;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL52;
    } else
        goto CPyL21;
CPyL17: ;
    cpy_r_r29 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_unanalyzed_type;
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___UnboundType))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 613, CPyStatic_classdef___globals, "mypy.types.UnboundType", cpy_r_r29);
        goto CPyL43;
    }
    cpy_r_r31 = ((mypy___types___UnboundTypeObject *)cpy_r_r30)->_original_str_expr;
    CPy_INCREF(cpy_r_r31);
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 613, CPyStatic_classdef___globals, "str", cpy_r_r31);
        goto CPyL43;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 613, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_typ = cpy_r_r33;
    goto CPyL36;
CPyL21: ;
    cpy_r_r34 = (PyObject *)CPyType_types___Instance;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_ann_type)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL53;
    if (likely(Py_TYPE(cpy_r_ann_type) == CPyType_types___Instance))
        cpy_r_r38 = cpy_r_ann_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 615, CPyStatic_classdef___globals, "mypy.types.Instance", cpy_r_ann_type);
        goto CPyL51;
    }
    cpy_r_r39 = ((mypy___types___InstanceObject *)cpy_r_r38)->_type;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_ann_type);
    cpy_r_r40 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_function___load_type(cpy_r_builder, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 615, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_typ = cpy_r_r41;
    goto CPyL36;
CPyL25: ;
    cpy_r_r42 = CPyStatic_classdef___globals;
    cpy_r_r43 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    if (likely(PyTuple_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals, "tuple", cpy_r_r44);
        goto CPyL43;
    }
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_r45, 2);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_rtypes___RType)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals, "mypyc.ir.rtypes.RType", cpy_r_r46);
        goto CPyL43;
    }
    cpy_r_r48 = CPyStatic_classdef___globals;
    cpy_r_r49 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL54;
    }
    if (likely(PyTuple_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals, "tuple", cpy_r_r50);
        goto CPyL54;
    }
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_r51, 4);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL54;
    }
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals, "str", cpy_r_r52);
        goto CPyL54;
    }
    cpy_r_r54 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyDef_ops___LoadAddress(cpy_r_r47, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 617, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_typ = cpy_r_r56;
CPyL36: ;
    cpy_r_r57 = ((mypy___nodes___NameExprObject *)cpy_r_lvalue)->_name;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 619, CPyStatic_classdef___globals);
        goto CPyL46;
    }
    cpy_r_key = cpy_r_r58;
    cpy_r_r59 = CPyStatic_classdef___globals;
    cpy_r_r60 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 620, CPyStatic_classdef___globals);
        goto CPyL55;
    }
    if (likely(PyTuple_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 620, CPyStatic_classdef___globals, "tuple", cpy_r_r61);
        goto CPyL55;
    }
    cpy_r_r63 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_anns;
    CPy_INCREF(cpy_r_r63);
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r64 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 620, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_typ);
        goto CPyL56;
    }
    cpy_r_r65 = PyList_New(3);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 620, CPyStatic_classdef___globals);
        goto CPyL57;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    *(PyObject * *)cpy_r_r67 = cpy_r_r63;
    cpy_r_r68 = cpy_r_r67 + 8;
    *(PyObject * *)cpy_r_r68 = cpy_r_key;
    cpy_r_r69 = cpy_r_r67 + 16;
    *(PyObject * *)cpy_r_r69 = cpy_r_r64;
    cpy_r_r70 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r70);
    cpy_r_r71 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r62, cpy_r_r65, cpy_r_r70);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 620, CPyStatic_classdef___globals);
        goto CPyL43;
    } else
        goto CPyL58;
CPyL42: ;
    return 1;
CPyL43: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL44: ;
    CPy_INCREF(cpy_r_get_type_info);
    goto CPyL2;
CPyL45: ;
    CPy_DECREF(cpy_r_get_type_info);
    goto CPyL12;
CPyL46: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL43;
CPyL47: ;
    CPy_DECREF(cpy_r_type_info);
    goto CPyL12;
CPyL48: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_type_info);
    goto CPyL43;
CPyL49: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL9;
CPyL50: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL13;
CPyL51: ;
    CPy_DecRef(cpy_r_ann_type);
    goto CPyL43;
CPyL52: ;
    CPy_DECREF(cpy_r_ann_type);
    goto CPyL17;
CPyL53: ;
    CPy_DECREF(cpy_r_ann_type);
    goto CPyL25;
CPyL54: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL43;
CPyL55: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_key);
    goto CPyL43;
CPyL56: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL43;
CPyL57: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    goto CPyL43;
CPyL58: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL42;
}

PyObject *CPyPy_classdef___add_non_ext_class_attr_ann(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "non_ext", "lvalue", "stmt", "get_type_info", 0};
    static CPyArg_Parser parser = {"OOOO|O:add_non_ext_class_attr_ann", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_non_ext;
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    PyObject *obj_get_type_info = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_non_ext, &obj_lvalue, &obj_stmt, &obj_get_type_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *arg_get_type_info;
    if (obj_get_type_info == NULL) {
        arg_get_type_info = NULL;
        goto __LL10031;
    }
    arg_get_type_info = obj_get_type_info;
    if (arg_get_type_info != NULL) goto __LL10031;
    if (obj_get_type_info == Py_None)
        arg_get_type_info = obj_get_type_info;
    else {
        arg_get_type_info = NULL;
    }
    if (arg_get_type_info != NULL) goto __LL10031;
    CPy_TypeError("object or None", obj_get_type_info); 
    goto fail;
__LL10031: ;
    char retval = CPyDef_classdef___add_non_ext_class_attr_ann(arg_builder, arg_non_ext, arg_lvalue, arg_stmt, arg_get_type_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr_ann", 586, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___add_non_ext_class_attr(PyObject *cpy_r_builder, PyObject *cpy_r_non_ext, PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt, PyObject *cpy_r_cdef, PyObject *cpy_r_attr_to_cache) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_rvalue;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r1 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL23;
    cpy_r_r5 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 635, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 635, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r7);
        goto CPyL24;
    }
    cpy_r_rvalue = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___NameExprObject *)cpy_r_lvalue)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_builder___IRBuilder___add_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_r9, cpy_r_rvalue, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_rvalue);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 636, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_r12)->_bases;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", "TypeInfo", "bases", 640, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r13);
CPyL5: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL23;
    cpy_r_r18 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_r18)->_bases;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", "TypeInfo", "bases", 641, CPyStatic_classdef___globals);
        goto CPyL24;
    }
CPyL7: ;
    cpy_r_r20 = CPyList_GetItemShortBorrow(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 641, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___Instance))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 641, CPyStatic_classdef___globals, "mypy.types.Instance", cpy_r_r20);
        goto CPyL24;
    }
    cpy_r_r22 = ((mypy___types___InstanceObject *)cpy_r_r21)->_type;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 641, CPyStatic_classdef___globals);
        goto CPyL24;
    }
CPyL10: ;
    cpy_r_r24 = CPyStatics[4609]; /* 'enum.Enum' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL13;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 641, CPyStatic_classdef___globals);
        goto CPyL24;
    }
CPyL13: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL23;
    cpy_r_r31 = ((mypy___nodes___NameExprObject *)cpy_r_lvalue)->_name;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyStatic_types___ENUM_REMOVED_PROPS;
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        goto CPyL25;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_REMOVED_PROPS\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 643, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL17: ;
    CPy_INCREF(cpy_r_r32.f0);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_INCREF(cpy_r_r32.f2);
    cpy_r_r34 = PyTuple_New(3);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10032 = cpy_r_r32.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp10032);
    PyObject *__tmp10033 = cpy_r_r32.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp10033);
    PyObject *__tmp10034 = cpy_r_r32.f2;
    PyTuple_SET_ITEM(cpy_r_r34, 2, __tmp10034);
    cpy_r_r35 = PySequence_Contains(cpy_r_r34, cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 643, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    cpy_r_r37 = cpy_r_r35;
    cpy_r_r38 = cpy_r_r37 ^ 1;
    if (!cpy_r_r38) goto CPyL23;
    cpy_r_r39 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r39 != NULL)) goto CPyL22;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 646, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r41.f0 = cpy_r_lvalue;
    cpy_r_r41.f1 = cpy_r_r39;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10035 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp10035);
    PyObject *__tmp10036 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp10036);
    cpy_r_r43 = PyList_Append(cpy_r_attr_to_cache, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 646, CPyStatic_classdef___globals);
        goto CPyL24;
    }
CPyL23: ;
    return 1;
CPyL24: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL25: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL15;
}

PyObject *CPyPy_classdef___add_non_ext_class_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "non_ext", "lvalue", "stmt", "cdef", "attr_to_cache", 0};
    static CPyArg_Parser parser = {"OOOOOO:add_non_ext_class_attr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_non_ext;
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    PyObject *obj_cdef;
    PyObject *obj_attr_to_cache;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_non_ext, &obj_lvalue, &obj_stmt, &obj_cdef, &obj_attr_to_cache)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (likely(Py_TYPE(obj_lvalue) == CPyType_nodes___NameExpr))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_attr_to_cache;
    if (likely(PyList_Check(obj_attr_to_cache)))
        arg_attr_to_cache = obj_attr_to_cache;
    else {
        CPy_TypeError("list", obj_attr_to_cache); 
        goto fail;
    }
    char retval = CPyDef_classdef___add_non_ext_class_attr(arg_builder, arg_non_ext, arg_lvalue, arg_stmt, arg_cdef, arg_attr_to_cache);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_non_ext_class_attr", 623, CPyStatic_classdef___globals);
    return NULL;
}

tuple_T2OO CPyDef_classdef___find_attr_initializers(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_skip) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_attrs_with_defaults;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_default_assignments;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
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
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_attr_type;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyPtr cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    CPyTagged cpy_r_r151;
    tuple_T2OO cpy_r_r152;
    tuple_T2OO cpy_r_r153;
    if (cpy_r_skip != NULL) goto CPyL88;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_skip = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r2 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r1)->_type_to_ir;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 658, CPyStatic_classdef___globals);
        goto CPyL89;
    }
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_class_ir___ClassIR))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 658, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r4);
        goto CPyL89;
    }
    cpy_r_cls = cpy_r_r5;
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_builtin_base;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL90;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r9 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 659, CPyStatic_classdef___globals, "str", cpy_r_r6);
        goto CPyL91;
    }
    cpy_r_r10 = CPyStr_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10) {
        goto CPyL92;
    } else
        goto CPyL10;
CPyL7: ;
    cpy_r_r11 = PySet_New(NULL);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 660, CPyStatic_classdef___globals);
        goto CPyL87;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 660, CPyStatic_classdef___globals);
        goto CPyL93;
    }
    cpy_r_r13.f0 = cpy_r_r11;
    cpy_r_r13.f1 = cpy_r_r12;
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    return cpy_r_r13;
CPyL10: ;
    cpy_r_r14 = PySet_New(NULL);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 662, CPyStatic_classdef___globals);
        goto CPyL91;
    }
    cpy_r_attrs_with_defaults = cpy_r_r14;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 666, CPyStatic_classdef___globals);
        goto CPyL94;
    }
    cpy_r_default_assignments = cpy_r_r15;
    cpy_r_r16 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r17 = ((mypy___nodes___TypeInfoObject *)cpy_r_r16)->_mro;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "find_attr_initializers", "TypeInfo", "mro", 667, CPyStatic_classdef___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = CPyTagged_Subtract(cpy_r_r20, 2);
    cpy_r_r22 = cpy_r_r21;
CPyL14: ;
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = 0 & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & cpy_r_r26;
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r22 >= (Py_ssize_t)0;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_r22, 0);
    cpy_r_r31 = cpy_r_r30 ^ 1;
    cpy_r_r29 = cpy_r_r31;
CPyL17: ;
    if (!cpy_r_r29) goto CPyL96;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = cpy_r_r22 & 1;
    cpy_r_r36 = cpy_r_r35 == 0;
    cpy_r_r37 = cpy_r_r34 & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    cpy_r_r39 = cpy_r_r36 & cpy_r_r38;
    if (!cpy_r_r39) goto CPyL20;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r34;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL21;
CPyL20: ;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_r22, cpy_r_r34);
    cpy_r_r41 = cpy_r_r42;
CPyL21: ;
    if (!cpy_r_r41) goto CPyL96;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_r43 = CPyTagged_StealAsObject(cpy_r_r22);
    if (likely(PyLong_Check(cpy_r_r43)))
        cpy_r_r44 = CPyTagged_FromObject(cpy_r_r43);
    else {
        CPy_TypeError("short_int", cpy_r_r43); cpy_r_r44 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 667, CPyStatic_classdef___globals);
        goto CPyL97;
    }
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r44);
    if (likely((Py_TYPE(cpy_r_r45) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r45) == CPyType_nodes___TypeInfo)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 667, CPyStatic_classdef___globals, "mypy.nodes.TypeInfo", cpy_r_r45);
        goto CPyL97;
    }
    cpy_r_info = cpy_r_r46;
    cpy_r_r47 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r48 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r47)->_type_to_ir;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = PyDict_Contains(cpy_r_r48, cpy_r_info);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 668, CPyStatic_classdef___globals);
        goto CPyL98;
    }
    cpy_r_r51 = cpy_r_r49;
    cpy_r_r52 = cpy_r_r51 ^ 1;
    if (cpy_r_r52) goto CPyL99;
    cpy_r_r53 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "find_attr_initializers", "TypeInfo", "defn", 670, CPyStatic_classdef___globals);
        goto CPyL98;
    }
CPyL27: ;
    cpy_r_r54 = ((mypy___nodes___ClassDefObject *)cpy_r_r53)->_defs;
    cpy_r_r55 = ((mypy___nodes___BlockObject *)cpy_r_r54)->_body;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_info);
    cpy_r_r56 = 0;
CPyL28: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL100;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r56);
    if (likely(PyObject_TypeCheck(cpy_r_r61, CPyType_nodes___Statement)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 670, CPyStatic_classdef___globals, "mypy.nodes.Statement", cpy_r_r61);
        goto CPyL101;
    }
    cpy_r_stmt = cpy_r_r62;
    cpy_r_r63 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r67 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 673, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL103;
    }
    cpy_r_r68 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r67)->_lvalues;
    cpy_r_r69 = CPyList_GetItemShortBorrow(cpy_r_r68, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 673, CPyStatic_classdef___globals);
        goto CPyL103;
    }
    cpy_r_r70 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_r69)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r74 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 674, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL103;
    }
    cpy_r_r75 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r74)->_lvalues;
    cpy_r_r76 = CPyList_GetItemShort(cpy_r_r75, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 674, CPyStatic_classdef___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___NameExpr))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 674, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_r76);
        goto CPyL103;
    }
    cpy_r_r78 = CPyDef_nodes___is_class_var(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 674, CPyStatic_classdef___globals);
        goto CPyL103;
    }
    if (cpy_r_r78) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r79 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 675, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL103;
    }
    cpy_r_r80 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r79)->_rvalue;
    cpy_r_r81 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_r80)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (cpy_r_r84) goto CPyL102;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r85 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 677, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL103;
    }
    cpy_r_r86 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r85)->_lvalues;
    cpy_r_r87 = CPyList_GetItemShortBorrow(cpy_r_r86, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 677, CPyStatic_classdef___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_nodes___NameExpr))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 677, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_r87);
        goto CPyL103;
    }
    cpy_r_r89 = ((mypy___nodes___NameExprObject *)cpy_r_r88)->_name;
    CPy_INCREF(cpy_r_r89);
    cpy_r_name = cpy_r_r89;
    cpy_r_r90 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r91 = PyUnicode_Compare(cpy_r_name, cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 == -1;
    if (!cpy_r_r92) goto CPyL47;
    cpy_r_r93 = PyErr_Occurred();
    cpy_r_r94 = cpy_r_r93 != NULL;
    if (!cpy_r_r94) goto CPyL47;
    cpy_r_r95 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 678, CPyStatic_classdef___globals);
        goto CPyL104;
    }
CPyL47: ;
    cpy_r_r96 = cpy_r_r91 == 0;
    if (cpy_r_r96) goto CPyL105;
    cpy_r_r97 = CPyStatics[4998]; /* '__deletable__' */
    cpy_r_r98 = PyUnicode_Compare(cpy_r_name, cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 == -1;
    if (!cpy_r_r99) goto CPyL51;
    cpy_r_r100 = PyErr_Occurred();
    cpy_r_r101 = cpy_r_r100 != NULL;
    if (!cpy_r_r101) goto CPyL51;
    cpy_r_r102 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 681, CPyStatic_classdef___globals);
        goto CPyL104;
    }
CPyL51: ;
    cpy_r_r103 = cpy_r_r98 == 0;
    if (cpy_r_r103) {
        goto CPyL106;
    } else
        goto CPyL54;
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r104 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 682, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL103;
    }
    cpy_r_r105 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r104)->_line;
    CPyTagged_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r106 = CPyDef_classdef___check_deletable_declaration(cpy_r_builder, cpy_r_cls, cpy_r_r105);
    CPyTagged_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 682, CPyStatic_classdef___globals);
        goto CPyL101;
    } else
        goto CPyL84;
CPyL54: ;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r108 = cpy_r_skip != cpy_r_r107;
    if (!cpy_r_r108) goto CPyL59;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r109 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 685, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL104;
    }
    PyObject *cpy_r_r110[2] = {cpy_r_name, cpy_r_r109};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_skip, cpy_r_r111, 2, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 685, CPyStatic_classdef___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r109);
    if (unlikely(!PyBool_Check(cpy_r_r112))) {
        CPy_TypeError("bool", cpy_r_r112); cpy_r_r113 = 2;
    } else
        cpy_r_r113 = cpy_r_r112 == Py_True;
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 685, CPyStatic_classdef___globals);
        goto CPyL104;
    }
    if (cpy_r_r113) goto CPyL105;
CPyL59: ;
    cpy_r_r114 = CPyDef_class_ir___ClassIR___attr_type(cpy_r_cls, cpy_r_name);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 688, CPyStatic_classdef___globals);
        goto CPyL104;
    }
    cpy_r_attr_type = cpy_r_r114;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r115 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 692, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL108;
    }
    cpy_r_r116 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r115)->_rvalue;
    cpy_r_r117 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r118 = (CPyPtr)&((PyObject *)cpy_r_r116)->ob_type;
    cpy_r_r119 = *(PyObject * *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 == cpy_r_r117;
    if (!cpy_r_r120) goto CPyL63;
    cpy_r_r121 = cpy_r_r120;
    goto CPyL64;
CPyL63: ;
    cpy_r_r122 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r123 = (CPyPtr)&((PyObject *)cpy_r_r116)->ob_type;
    cpy_r_r124 = *(PyObject * *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 == cpy_r_r122;
    cpy_r_r121 = cpy_r_r125;
CPyL64: ;
    if (!cpy_r_r121) goto CPyL66;
    cpy_r_r126 = cpy_r_r121;
    goto CPyL67;
CPyL66: ;
    cpy_r_r127 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r116)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    cpy_r_r126 = cpy_r_r130;
CPyL67: ;
    if (!cpy_r_r126) goto CPyL109;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r131 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 692, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL108;
    }
    cpy_r_r132 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r131)->_rvalue;
    CPy_INCREF(cpy_r_r132);
    if (likely((Py_TYPE(cpy_r_r132) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r132) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r132) == CPyType_nodes___RefExpr)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 692, CPyStatic_classdef___globals, "mypy.nodes.RefExpr", cpy_r_r132);
        goto CPyL108;
    }
    cpy_r_r134 = CPY_GET_ATTR(cpy_r_r133, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 692, CPyStatic_classdef___globals);
        goto CPyL108;
    }
CPyL71: ;
    cpy_r_r135 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r136 = PyUnicode_Compare(cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 == -1;
    if (!cpy_r_r137) goto CPyL74;
    cpy_r_r138 = PyErr_Occurred();
    cpy_r_r139 = cpy_r_r138 != NULL;
    if (!cpy_r_r139) goto CPyL74;
    cpy_r_r140 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 692, CPyStatic_classdef___globals);
        goto CPyL108;
    }
CPyL74: ;
    cpy_r_r141 = cpy_r_r136 == 0;
    if (!cpy_r_r141) goto CPyL109;
    cpy_r_r142 = CPyDef_rtypes___is_optional_type(cpy_r_attr_type);
    if (unlikely(cpy_r_r142 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 694, CPyStatic_classdef___globals);
        goto CPyL108;
    }
    if (cpy_r_r142) goto CPyL109;
    cpy_r_r143 = CPyDef_rtypes___is_object_rprimitive(cpy_r_attr_type);
    if (unlikely(cpy_r_r143 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 695, CPyStatic_classdef___globals);
        goto CPyL108;
    }
    if (cpy_r_r143) goto CPyL109;
    cpy_r_r144 = CPyDef_rtypes___is_none_rprimitive(cpy_r_attr_type);
    CPy_DECREF(cpy_r_attr_type);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 696, CPyStatic_classdef___globals);
        goto CPyL104;
    }
    if (!cpy_r_r144) goto CPyL105;
CPyL81: ;
    cpy_r_r145 = PySet_Add(cpy_r_attrs_with_defaults, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 700, CPyStatic_classdef___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r147 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 701, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL101;
    }
    cpy_r_r148 = PyList_Append(cpy_r_default_assignments, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 701, CPyStatic_classdef___globals);
        goto CPyL101;
    }
CPyL84: ;
    cpy_r_r150 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r150;
    goto CPyL28;
CPyL85: ;
    cpy_r_r151 = cpy_r_r22 + -2;
    CPyTagged_DECREF(cpy_r_r22);
    cpy_r_r22 = cpy_r_r151;
    goto CPyL14;
CPyL86: ;
    cpy_r_r152.f0 = cpy_r_attrs_with_defaults;
    cpy_r_r152.f1 = cpy_r_default_assignments;
    CPy_INCREF(cpy_r_r152.f0);
    CPy_INCREF(cpy_r_r152.f1);
    CPy_DECREF(cpy_r_attrs_with_defaults);
    CPy_DECREF(cpy_r_default_assignments);
    return cpy_r_r152;
CPyL87: ;
    tuple_T2OO __tmp10037 = { NULL, NULL };
    cpy_r_r153 = __tmp10037;
    return cpy_r_r153;
CPyL88: ;
    CPy_INCREF(cpy_r_skip);
    goto CPyL2;
CPyL89: ;
    CPy_DecRef(cpy_r_skip);
    goto CPyL87;
CPyL90: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL10;
CPyL91: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    goto CPyL87;
CPyL92: ;
    CPy_DECREF(cpy_r_skip);
    CPy_DECREF(cpy_r_cls);
    goto CPyL7;
CPyL93: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL87;
CPyL94: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    goto CPyL87;
CPyL95: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    goto CPyL87;
CPyL96: ;
    CPy_DECREF(cpy_r_skip);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r22);
    goto CPyL86;
CPyL97: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL87;
CPyL98: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_info);
    goto CPyL87;
CPyL99: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL85;
CPyL100: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL85;
CPyL101: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r55);
    goto CPyL87;
CPyL102: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL87;
CPyL104: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    goto CPyL87;
CPyL105: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_name);
    goto CPyL84;
CPyL106: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL52;
CPyL107: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r109);
    goto CPyL87;
CPyL108: ;
    CPy_DecRef(cpy_r_skip);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attrs_with_defaults);
    CPy_DecRef(cpy_r_default_assignments);
    CPy_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr_type);
    goto CPyL87;
CPyL109: ;
    CPy_DECREF(cpy_r_attr_type);
    goto CPyL81;
}

PyObject *CPyPy_classdef___find_attr_initializers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "skip", 0};
    static CPyArg_Parser parser = {"OO|O:find_attr_initializers", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_skip = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_skip)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_skip;
    if (obj_skip == NULL) {
        arg_skip = NULL;
        goto __LL10038;
    }
    arg_skip = obj_skip;
    if (arg_skip != NULL) goto __LL10038;
    if (obj_skip == Py_None)
        arg_skip = obj_skip;
    else {
        arg_skip = NULL;
    }
    if (arg_skip != NULL) goto __LL10038;
    CPy_TypeError("object or None", obj_skip); 
    goto fail;
__LL10038: ;
    tuple_T2OO retval = CPyDef_classdef___find_attr_initializers(arg_builder, arg_cdef, arg_skip);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10039 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10039);
    PyObject *__tmp10040 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10040);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "find_attr_initializers", 649, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___generate_attr_defaults_init(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_default_assignments) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_self_var;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_attr_type;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_init;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    tuple_T3OOO cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_default_assignments)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r5 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r4)->_type_to_ir;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 712, CPyStatic_classdef___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 712, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL64;
    }
    cpy_r_cls = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_builtin_base;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL65;
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r12 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 713, CPyStatic_classdef___globals, "str", cpy_r_r9);
        goto CPyL66;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL67;
    } else
        goto CPyL8;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r14 = CPyStatics[7093]; /* '__mypyc_defaults_setup' */
    cpy_r_r15 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r17 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r18[4] = {cpy_r_builder, cpy_r_cls, cpy_r_r14, cpy_r_r15};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL66;
    }
    cpy_r_r21 = PyObject_Type(cpy_r_r20);
    cpy_r_r22 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL69;
    }
    cpy_r_r24 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r24);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r20};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL70;
    } else
        goto CPyL71;
CPyL15: ;
    cpy_r_r29 = 1;
    cpy_r_r30 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 717, CPyStatic_classdef___globals);
        goto CPyL72;
    }
    cpy_r_self_var = cpy_r_r30;
    cpy_r_r31 = 0;
CPyL18: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_default_assignments)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL73;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_default_assignments, cpy_r_r31);
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___AssignmentStmt))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 718, CPyStatic_classdef___globals, "mypy.nodes.AssignmentStmt", cpy_r_r36);
        goto CPyL74;
    }
    cpy_r_stmt = cpy_r_r37;
    cpy_r_r38 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_lvalues;
    cpy_r_r39 = CPyList_GetItemShort(cpy_r_r38, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 719, CPyStatic_classdef___globals);
        goto CPyL75;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_nodes___Expression)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 719, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r39);
        goto CPyL75;
    }
    cpy_r_lvalue = cpy_r_r40;
    cpy_r_r41 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (cpy_r_r44) {
        goto CPyL25;
    } else
        goto CPyL76;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 720, CPyStatic_classdef___globals);
        goto CPyL43;
    } else
        goto CPyL77;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r46 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_is_final_def;
    if (cpy_r_r46) goto CPyL30;
CPyL26: ;
    cpy_r_r47 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_irbuild___util___is_constant(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 721, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    if (cpy_r_r48) goto CPyL30;
    cpy_r_r49 = CPyStatics[8159]; /* 'Unsupported default attribute value' */
    cpy_r_r50 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r51 = ((mypy___nodes___ContextObject *)cpy_r_r50)->_line;
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", "Expression", "line", 722, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    CPyTagged_INCREF(cpy_r_r51);
CPyL29: ;
    cpy_r_r52 = CPyDef_builder___IRBuilder___warning(cpy_r_builder, cpy_r_r49, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 722, CPyStatic_classdef___globals);
        goto CPyL78;
    }
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r53 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 724, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL78;
    }
    cpy_r_r54 = ((mypy___nodes___NameExprObject *)cpy_r_r53)->_name;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyDef_class_ir___ClassIR___attr_type(cpy_r_cls, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 724, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_attr_type = cpy_r_r55;
    cpy_r_r56 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 725, CPyStatic_classdef___globals);
        goto CPyL79;
    }
    if (likely(cpy_r_r58 != Py_None))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 725, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r58);
        goto CPyL79;
    }
    cpy_r_r60 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r61 = 2;
    cpy_r_r62 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r59, cpy_r_attr_type, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_attr_type);
    CPyTagged_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 725, CPyStatic_classdef___globals);
        goto CPyL80;
    }
    cpy_r_val = cpy_r_r62;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r63 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 726, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL81;
    }
    cpy_r_r64 = ((mypy___nodes___NameExprObject *)cpy_r_r63)->_name;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_lvalue);
    cpy_r_r65 = CPyDef_ops___SetAttr(cpy_r_self_var, cpy_r_r64, cpy_r_val, -2);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 726, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    cpy_r_init = cpy_r_r65;
    cpy_r_r66 = CPyDef_ops___SetAttr___mark_as_initializer(cpy_r_init);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 727, CPyStatic_classdef___globals);
        goto CPyL82;
    }
    cpy_r_r67 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_init);
    CPy_DECREF(cpy_r_init);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 728, CPyStatic_classdef___globals);
        goto CPyL74;
    } else
        goto CPyL83;
CPyL39: ;
    cpy_r_r68 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r68;
    goto CPyL18;
CPyL40: ;
    cpy_r_r69 = CPyDef_builder___IRBuilder___true(cpy_r_builder);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 730, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_r70 = CPY_INT_TAG;
    cpy_r_r71 = CPyDef_ops___Return(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 730, CPyStatic_classdef___globals);
        goto CPyL43;
    }
    cpy_r_r72 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 730, CPyStatic_classdef___globals);
    } else
        goto CPyL84;
CPyL43: ;
    cpy_r_r73 = CPy_CatchError();
    cpy_r_r29 = 0;
    cpy_r_r74 = CPy_GetExcInfo();
    cpy_r_r75 = cpy_r_r74.f0;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = cpy_r_r74.f1;
    CPy_INCREF(cpy_r_r76);
    cpy_r_r77 = cpy_r_r74.f2;
    CPy_INCREF(cpy_r_r77);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    PyObject *cpy_r_r78[4] = {cpy_r_r20, cpy_r_r75, cpy_r_r76, cpy_r_r77};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r79, 4, 0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL85;
    }
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r77);
    cpy_r_r81 = PyObject_IsTrue(cpy_r_r80);
    CPy_DecRef(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL49;
    }
    cpy_r_r83 = cpy_r_r81;
    if (cpy_r_r83) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL86;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_DecRef(cpy_r_r73.f0);
    CPy_DecRef(cpy_r_r73.f1);
    CPy_DecRef(cpy_r_r73.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_DecRef(cpy_r_r73.f0);
    CPy_DecRef(cpy_r_r73.f1);
    CPy_DecRef(cpy_r_r73.f2);
    cpy_r_r84 = CPy_KeepPropagating();
    if (!cpy_r_r84) {
        goto CPyL52;
    } else
        goto CPyL87;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    tuple_T3OOO __tmp10041 = { NULL, NULL, NULL };
    cpy_r_r85 = __tmp10041;
    cpy_r_r86 = cpy_r_r85;
    goto CPyL53;
CPyL52: ;
    cpy_r_r87 = CPy_CatchError();
    cpy_r_r86 = cpy_r_r87;
CPyL53: ;
    if (!cpy_r_r29) goto CPyL88;
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r89[4] = {cpy_r_r20, cpy_r_r88, cpy_r_r88, cpy_r_r88};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r90, 4, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 716, CPyStatic_classdef___globals);
        goto CPyL89;
    } else
        goto CPyL90;
CPyL55: ;
    CPy_DECREF(cpy_r_r20);
CPyL56: ;
    if (cpy_r_r86.f0 == NULL) goto CPyL63;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL91;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    if (cpy_r_r86.f0 == NULL) goto CPyL61;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_XDECREF(cpy_r_r86.f0);
    CPy_XDECREF(cpy_r_r86.f1);
    CPy_XDECREF(cpy_r_r86.f2);
CPyL61: ;
    cpy_r_r92 = CPy_KeepPropagating();
    if (!cpy_r_r92) goto CPyL64;
    CPy_Unreachable();
CPyL63: ;
    return 1;
CPyL64: ;
    cpy_r_r93 = 2;
    return cpy_r_r93;
CPyL65: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL8;
CPyL66: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL64;
CPyL67: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL7;
CPyL68: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL9;
CPyL69: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL64;
CPyL70: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    goto CPyL64;
CPyL71: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL15;
CPyL72: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL43;
CPyL73: ;
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_self_var);
    goto CPyL40;
CPyL74: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    goto CPyL43;
CPyL75: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL43;
CPyL76: ;
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_self_var);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL23;
CPyL77: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r23);
    goto CPyL24;
CPyL78: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL43;
CPyL79: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lvalue);
    CPy_DecRef(cpy_r_attr_type);
    goto CPyL43;
CPyL80: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL43;
CPyL81: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_lvalue);
    CPy_DecRef(cpy_r_val);
    goto CPyL43;
CPyL82: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_var);
    CPy_DecRef(cpy_r_init);
    goto CPyL43;
CPyL83: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL39;
CPyL84: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL51;
CPyL85: ;
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r77);
    goto CPyL49;
CPyL86: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r73.f0);
    CPy_DecRef(cpy_r_r73.f1);
    CPy_DecRef(cpy_r_r73.f2);
    goto CPyL47;
CPyL87: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r23);
    goto CPyL50;
CPyL88: ;
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r23);
    goto CPyL56;
CPyL89: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL59;
CPyL90: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL55;
CPyL91: ;
    CPy_XDECREF(cpy_r_r86.f0);
    CPy_XDECREF(cpy_r_r86.f1);
    CPy_XDECREF(cpy_r_r86.f2);
    goto CPyL58;
}

PyObject *CPyPy_classdef___generate_attr_defaults_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "default_assignments", 0};
    static CPyArg_Parser parser = {"OOO:generate_attr_defaults_init", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_default_assignments;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_default_assignments)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_default_assignments;
    if (likely(PyList_Check(obj_default_assignments)))
        arg_default_assignments = obj_default_assignments;
    else {
        CPy_TypeError("list", obj_default_assignments); 
        goto fail;
    }
    char retval = CPyDef_classdef___generate_attr_defaults_init(arg_builder, arg_cdef, arg_default_assignments);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "generate_attr_defaults_init", 706, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___check_deletable_declaration(PyObject *cpy_r_builder, PyObject *cpy_r_cl, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r__;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_deletable;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "check_deletable_declaration", "ClassIR", "deletable", 734, CPyStatic_classdef___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL28;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 734, CPyStatic_classdef___globals, "str", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_attr = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_attributes;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "check_deletable_declaration", "ClassIR", "attributes", 735, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_attr);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 735, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    cpy_r_r11 = cpy_r_r9;
    cpy_r_r12 = cpy_r_r11 ^ 1;
    if (!cpy_r_r12) goto CPyL31;
    cpy_r_r13 = CPyDef_class_ir___ClassIR___has_attr(cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 736, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    if (cpy_r_r13) goto CPyL11;
    cpy_r_r14 = CPyStatics[8160]; /* 'Attribute "' */
    cpy_r_r15 = CPyStatics[8161]; /* '" not defined' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_attr, cpy_r_r15);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 737, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r16, cpy_r_line);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 737, CPyStatic_classdef___globals);
        goto CPyL29;
    } else
        goto CPyL25;
CPyL11: ;
    cpy_r_r18 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_mro;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "check_deletable_declaration", "ClassIR", "mro", 739, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r18);
CPyL12: ;
    cpy_r_r19 = 0;
CPyL13: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL32;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_class_ir___ClassIR))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 739, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r24);
        goto CPyL33;
    }
    cpy_r_base = cpy_r_r25;
    cpy_r_r26 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_property_types;
    if (unlikely(cpy_r_r26 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'property_types' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r26);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 740, CPyStatic_classdef___globals);
        goto CPyL33;
    }
CPyL16: ;
    cpy_r_r27 = PyDict_Contains(cpy_r_r26, cpy_r_attr);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 740, CPyStatic_classdef___globals);
        goto CPyL33;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) {
        goto CPyL34;
    } else
        goto CPyL20;
CPyL18: ;
    cpy_r_r30 = CPyStatics[8162]; /* 'Cannot make property "' */
    cpy_r_r31 = CPyStatics[8163]; /* '" deletable' */
    cpy_r_r32 = CPyStr_Build(3, cpy_r_r30, cpy_r_attr, cpy_r_r31);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 741, CPyStatic_classdef___globals);
        goto CPyL29;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r32, cpy_r_line);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 741, CPyStatic_classdef___globals);
        goto CPyL29;
    } else
        goto CPyL25;
CPyL20: ;
    cpy_r_r34 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r34;
    goto CPyL13;
CPyL21: ;
    cpy_r_r35 = CPyDef_class_ir___ClassIR___attr_details(cpy_r_cl, cpy_r_attr);
    if (unlikely(cpy_r_r35.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 744, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    cpy_r_r36 = cpy_r_r35.f0;
    CPy_INCREF(cpy_r_r36);
    cpy_r__ = cpy_r_r36;
    CPy_DECREF(cpy_r__);
    cpy_r_r37 = cpy_r_r35.f1;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r35.f0);
    CPy_DECREF(cpy_r_r35.f1);
    cpy_r_base = cpy_r_r37;
    cpy_r_r38 = CPyStatics[8164]; /* 'Attribute "{}" not defined in "{}" (defined in "{}")' */
    cpy_r_r39 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_name;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_base);
    cpy_r_r41 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r42[4] = {cpy_r_r38, cpy_r_attr, cpy_r_r39, cpy_r_r40};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_VectorcallMethod(cpy_r_r41, cpy_r_r43, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 746, CPyStatic_classdef___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 746, CPyStatic_classdef___globals, "str", cpy_r_r44);
        goto CPyL29;
    }
    cpy_r_r46 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r45, cpy_r_line);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 745, CPyStatic_classdef___globals);
        goto CPyL29;
    }
CPyL25: ;
    cpy_r_r47 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r47;
    goto CPyL2;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL28: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attr);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL21;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r18);
    goto CPyL27;
CPyL34: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL18;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL27;
}

PyObject *CPyPy_classdef___check_deletable_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cl", "line", 0};
    static CPyArg_Parser parser = {"OOO:check_deletable_declaration", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cl;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cl, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_classdef___check_deletable_declaration(arg_builder, arg_cl, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "check_deletable_declaration", 733, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___create_ne_from_eq(PyObject *cpy_r_builder, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r1 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r0)->_type_to_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 755, CPyStatic_classdef___globals);
        goto CPyL8;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_class_ir___ClassIR))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 755, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r3);
        goto CPyL8;
    }
    cpy_r_cls = cpy_r_r4;
    cpy_r_r5 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r6 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cls, cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 756, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    if (!cpy_r_r6) goto CPyL10;
    cpy_r_r7 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r8 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cls, cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 756, CPyStatic_classdef___globals);
        goto CPyL9;
    }
    if (cpy_r_r8) goto CPyL10;
    cpy_r_r9 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_classdef___gen_glue_ne_method(cpy_r_builder, cpy_r_cls, cpy_r_r9);
    CPy_DECREF(cpy_r_cls);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 757, CPyStatic_classdef___globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL7;
}

PyObject *CPyPy_classdef___create_ne_from_eq(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", 0};
    static CPyArg_Parser parser = {"OO:create_ne_from_eq", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___create_ne_from_eq(arg_builder, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_ne_from_eq", 753, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___gen_glue_ne_method(PyObject *cpy_r_builder, PyObject *cpy_r_cls, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_rhs_arg;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_not_implemented_block;
    PyObject *cpy_r_regular_block;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_eqval;
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
    PyObject *cpy_r_not_implemented;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_retval;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    tuple_T3OOO cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    cpy_r_r0 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r1 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r4[4] = {cpy_r_builder, cpy_r_cls, cpy_r_r0, cpy_r_r1};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL63;
    }
    cpy_r_r7 = PyObject_Type(cpy_r_r6);
    cpy_r_r8 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL64;
    }
    cpy_r_r10 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r6};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL65;
    } else
        goto CPyL66;
CPyL7: ;
    cpy_r_r15 = 1;
    cpy_r_r16 = CPyStatics[7630]; /* 'rhs' */
    cpy_r_r17 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r17 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 763, CPyStatic_classdef___globals);
        goto CPyL42;
    } else
        goto CPyL67;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r16, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 763, CPyStatic_classdef___globals);
        goto CPyL42;
    }
    cpy_r_rhs_arg = cpy_r_r20;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___BasicBlock(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 766, CPyStatic_classdef___globals);
        goto CPyL68;
    }
    cpy_r_r23 = cpy_r_r22;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPyDef_ops___BasicBlock(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 766, CPyStatic_classdef___globals);
        goto CPyL69;
    }
    cpy_r_r26 = cpy_r_r25;
    cpy_r_not_implemented_block = cpy_r_r23;
    cpy_r_regular_block = cpy_r_r26;
    cpy_r_r27 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 767, CPyStatic_classdef___globals);
        goto CPyL70;
    }
    cpy_r_r28 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r29 = PyList_New(1);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 767, CPyStatic_classdef___globals);
        goto CPyL71;
    }
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r29)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    *(PyObject * *)cpy_r_r31 = cpy_r_rhs_arg;
    cpy_r_r32 = CPyDef_ops___MethodCall(cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_line);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 767, CPyStatic_classdef___globals);
        goto CPyL72;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 767, CPyStatic_classdef___globals);
        goto CPyL72;
    }
    cpy_r_eqval = cpy_r_r33;
    cpy_r_r34 = CPyStatic_classdef___globals;
    cpy_r_r35 = CPyStatics[8165]; /* 'not_implemented_op' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals);
        goto CPyL73;
    }
    if (likely(PyTuple_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals, "tuple", cpy_r_r36);
        goto CPyL73;
    }
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_r37, 2);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals);
        goto CPyL73;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_rtypes___RType)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals, "mypyc.ir.rtypes.RType", cpy_r_r38);
        goto CPyL73;
    }
    cpy_r_r40 = CPyStatic_classdef___globals;
    cpy_r_r41 = CPyStatics[8165]; /* 'not_implemented_op' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    if (likely(PyTuple_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals, "tuple", cpy_r_r42);
        goto CPyL74;
    }
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_r43, 4);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals);
        goto CPyL74;
    }
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals, "str", cpy_r_r44);
        goto CPyL74;
    }
    cpy_r_r46 = CPyDef_ops___LoadAddress(cpy_r_r39, cpy_r_r45, cpy_r_line);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 769, CPyStatic_classdef___globals);
        goto CPyL73;
    }
    cpy_r_r47 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 768, CPyStatic_classdef___globals);
        goto CPyL73;
    }
    cpy_r_not_implemented = cpy_r_r47;
    cpy_r_r48 = CPyStatics[861]; /* 'is' */
    cpy_r_r49 = CPyDef_builder___IRBuilder___translate_is_op(cpy_r_builder, cpy_r_eqval, cpy_r_not_implemented, cpy_r_r48, cpy_r_line);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 773, CPyStatic_classdef___globals);
        goto CPyL75;
    }
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_ops___Branch(cpy_r_r49, cpy_r_not_implemented_block, cpy_r_regular_block, 200, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 772, CPyStatic_classdef___globals);
        goto CPyL75;
    }
    cpy_r_r53 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 771, CPyStatic_classdef___globals);
        goto CPyL75;
    } else
        goto CPyL76;
CPyL31: ;
    cpy_r_r54 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_regular_block);
    CPy_DECREF(cpy_r_regular_block);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 780, CPyStatic_classdef___globals);
        goto CPyL77;
    }
    cpy_r_r55 = CPyStatics[869]; /* 'not' */
    cpy_r_r56 = CPyDef_builder___IRBuilder___unary_op(cpy_r_builder, cpy_r_eqval, cpy_r_r55, cpy_r_line);
    CPy_DECREF(cpy_r_eqval);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 781, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r57 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r57 == NULL)) {
        goto CPyL79;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 781, CPyStatic_classdef___globals);
        goto CPyL42;
    } else
        goto CPyL80;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r59 = 2;
    cpy_r_r60 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r56, cpy_r_r57, cpy_r_line, cpy_r_r59);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 781, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_retval = cpy_r_r60;
    cpy_r_r61 = CPY_INT_TAG;
    cpy_r_r62 = CPyDef_ops___Return(cpy_r_retval, cpy_r_r61);
    CPy_DECREF(cpy_r_retval);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 782, CPyStatic_classdef___globals);
        goto CPyL78;
    }
    cpy_r_r63 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 782, CPyStatic_classdef___globals);
        goto CPyL78;
    } else
        goto CPyL81;
CPyL39: ;
    cpy_r_r64 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_not_implemented_block);
    CPy_DECREF(cpy_r_not_implemented_block);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 784, CPyStatic_classdef___globals);
        goto CPyL82;
    }
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_ops___Return(cpy_r_not_implemented, cpy_r_r65);
    CPy_DECREF(cpy_r_not_implemented);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 785, CPyStatic_classdef___globals);
        goto CPyL42;
    }
    cpy_r_r67 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 785, CPyStatic_classdef___globals);
    } else
        goto CPyL83;
CPyL42: ;
    cpy_r_r68 = CPy_CatchError();
    cpy_r_r15 = 0;
    cpy_r_r69 = CPy_GetExcInfo();
    cpy_r_r70 = cpy_r_r69.f0;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = cpy_r_r69.f1;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = cpy_r_r69.f2;
    CPy_INCREF(cpy_r_r72);
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    CPy_DecRef(cpy_r_r69.f2);
    PyObject *cpy_r_r73[4] = {cpy_r_r6, cpy_r_r70, cpy_r_r71, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r74, 4, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL84;
    }
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DecRef(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL48;
    }
    cpy_r_r78 = cpy_r_r76;
    if (cpy_r_r78) goto CPyL47;
    CPy_Reraise();
    if (!0) {
        goto CPyL48;
    } else
        goto CPyL85;
CPyL46: ;
    CPy_Unreachable();
CPyL47: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL50;
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) {
        goto CPyL51;
    } else
        goto CPyL86;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    tuple_T3OOO __tmp10042 = { NULL, NULL, NULL };
    cpy_r_r80 = __tmp10042;
    cpy_r_r81 = cpy_r_r80;
    goto CPyL52;
CPyL51: ;
    cpy_r_r82 = CPy_CatchError();
    cpy_r_r81 = cpy_r_r82;
CPyL52: ;
    if (!cpy_r_r15) goto CPyL87;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r84[4] = {cpy_r_r6, cpy_r_r83, cpy_r_r83, cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r85, 4, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 762, CPyStatic_classdef___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL54: ;
    CPy_DECREF(cpy_r_r6);
CPyL55: ;
    if (cpy_r_r81.f0 == NULL) goto CPyL62;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL90;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    if (cpy_r_r81.f0 == NULL) goto CPyL60;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
CPyL60: ;
    cpy_r_r87 = CPy_KeepPropagating();
    if (!cpy_r_r87) goto CPyL63;
    CPy_Unreachable();
CPyL62: ;
    return 1;
CPyL63: ;
    cpy_r_r88 = 2;
    return cpy_r_r88;
CPyL64: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL63;
CPyL65: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL63;
CPyL66: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL7;
CPyL67: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL68: ;
    CPy_DecRef(cpy_r_rhs_arg);
    goto CPyL42;
CPyL69: ;
    CPy_DecRef(cpy_r_rhs_arg);
    CPy_DecRef(cpy_r_r23);
    goto CPyL42;
CPyL70: ;
    CPy_DecRef(cpy_r_rhs_arg);
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    goto CPyL42;
CPyL71: ;
    CPy_DecRef(cpy_r_rhs_arg);
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    CPy_DecRef(cpy_r_r27);
    goto CPyL42;
CPyL72: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    goto CPyL42;
CPyL73: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    CPy_DecRef(cpy_r_eqval);
    goto CPyL42;
CPyL74: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    CPy_DecRef(cpy_r_eqval);
    CPy_DecRef(cpy_r_r39);
    goto CPyL42;
CPyL75: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_regular_block);
    CPy_DecRef(cpy_r_eqval);
    CPy_DecRef(cpy_r_not_implemented);
    goto CPyL42;
CPyL76: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL31;
CPyL77: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_eqval);
    CPy_DecRef(cpy_r_not_implemented);
    goto CPyL42;
CPyL78: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_not_implemented);
    goto CPyL42;
CPyL79: ;
    CPy_DecRef(cpy_r_not_implemented_block);
    CPy_DecRef(cpy_r_not_implemented);
    CPy_DecRef(cpy_r_r56);
    goto CPyL34;
CPyL80: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL35;
CPyL81: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL39;
CPyL82: ;
    CPy_DecRef(cpy_r_not_implemented);
    goto CPyL42;
CPyL83: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL50;
CPyL84: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    goto CPyL48;
CPyL85: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL46;
CPyL86: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL49;
CPyL87: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    goto CPyL55;
CPyL88: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL58;
CPyL89: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL54;
CPyL90: ;
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
    goto CPyL57;
}

PyObject *CPyPy_classdef___gen_glue_ne_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cls", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_glue_ne_method", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cls;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cls, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_classdef___gen_glue_ne_method(arg_builder, arg_cls, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "gen_glue_ne_method", 760, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___load_non_ext_class(PyObject *cpy_r_builder, PyObject *cpy_r_ir, PyObject *cpy_r_non_ext, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cls_name;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_class_type_obj;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_non_ext_class", 791, CPyStatic_classdef___globals);
        goto CPyL5;
    }
    cpy_r_cls_name = cpy_r_r1;
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_classdef___add_dunders_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_line, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_non_ext_class", 793, CPyStatic_classdef___globals);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_metaclass;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_bases;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_dict;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyList_New(3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_non_ext_class", 796, CPyStatic_classdef___globals);
        goto CPyL7;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_cls_name;
    cpy_r_r10 = cpy_r_r9 + 8;
    *(PyObject * *)cpy_r_r10 = cpy_r_r5;
    cpy_r_r11 = cpy_r_r9 + 16;
    *(PyObject * *)cpy_r_r11 = cpy_r_r6;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_r4, cpy_r_r7, cpy_r_line, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_non_ext_class", 795, CPyStatic_classdef___globals);
        goto CPyL5;
    }
    cpy_r_class_type_obj = cpy_r_r14;
    return cpy_r_class_type_obj;
CPyL5: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL6: ;
    CPy_DecRef(cpy_r_cls_name);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_cls_name);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL5;
}

PyObject *CPyPy_classdef___load_non_ext_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "ir", "non_ext", "line", 0};
    static CPyArg_Parser parser = {"OOOO:load_non_ext_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_ir;
    PyObject *obj_non_ext;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_ir, &obj_non_ext, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_classdef___load_non_ext_class(arg_builder, arg_ir, arg_non_ext, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_non_ext_class", 788, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___load_decorated_class(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_type_obj) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_decorators;
    PyObject *cpy_r_dec_class;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_decorators = cpy_r_r0;
    CPy_INCREF(cpy_r_type_obj);
    cpy_r_dec_class = cpy_r_type_obj;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_decorators)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
    cpy_r_r5 = cpy_r_r4;
CPyL1: ;
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = 0 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL3;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)0;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL4;
CPyL3: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, 0);
    cpy_r_r14 = cpy_r_r13 ^ 1;
    cpy_r_r12 = cpy_r_r14;
CPyL4: ;
    if (!cpy_r_r12) goto CPyL22;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_decorators)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r5 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_r17 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    cpy_r_r22 = cpy_r_r19 & cpy_r_r21;
    if (!cpy_r_r22) goto CPyL7;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r17;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL8;
CPyL7: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r17);
    cpy_r_r24 = cpy_r_r25;
CPyL8: ;
    if (!cpy_r_r24) goto CPyL22;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r5);
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("short_int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 812, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_decorators, cpy_r_r27);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Expression)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 812, CPyStatic_classdef___globals, "mypy.nodes.Expression", cpy_r_r28);
        goto CPyL23;
    }
    cpy_r_d = cpy_r_r29;
    cpy_r_r30 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_visitor;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPY_GET_METHOD_TRAIT(cpy_r_d, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_d, cpy_r_r30); /* accept */
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 813, CPyStatic_classdef___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_ops___Value)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 813, CPyStatic_classdef___globals, "mypyc.ir.ops.Value", cpy_r_r31);
        goto CPyL23;
    }
    cpy_r_decorator = cpy_r_r32;
    cpy_r_r33 = (PyObject *)CPyType_ops___Value;
    cpy_r_r34 = CPy_TypeCheck(cpy_r_decorator, cpy_r_r33);
    if (cpy_r_r34) {
        goto CPyL16;
    } else
        goto CPyL24;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 814, CPyStatic_classdef___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 815, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    CPy_INCREF(cpy_r_dec_class);
    *(PyObject * *)cpy_r_r38 = cpy_r_dec_class;
    cpy_r_r39 = ((mypyc___ir___ops___ValueObject *)cpy_r_dec_class)->_line;
    CPyTagged_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_dec_class);
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_decorator, cpy_r_r36, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_decorator);
    CPy_DECREF(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 815, CPyStatic_classdef___globals);
        goto CPyL26;
    }
    cpy_r_dec_class = cpy_r_r42;
    cpy_r_r43 = cpy_r_r5 + -2;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r5 = cpy_r_r43;
    goto CPyL1;
CPyL20: ;
    return cpy_r_dec_class;
CPyL21: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL22: ;
    CPy_DECREF(cpy_r_decorators);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_decorators);
    CPy_DecRef(cpy_r_dec_class);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_decorators);
    CPy_DECREF(cpy_r_dec_class);
    CPyTagged_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_decorator);
    goto CPyL14;
CPyL25: ;
    CPy_DecRef(cpy_r_decorators);
    CPy_DecRef(cpy_r_dec_class);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_decorator);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_decorators);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL21;
}

PyObject *CPyPy_classdef___load_decorated_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "type_obj", 0};
    static CPyArg_Parser parser = {"OOO:load_decorated_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_type_obj;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_type_obj)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_type_obj;
    if (likely(PyObject_TypeCheck(obj_type_obj, CPyType_ops___Value)))
        arg_type_obj = obj_type_obj;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_type_obj); 
        goto fail;
    }
    PyObject *retval = CPyDef_classdef___load_decorated_class(arg_builder, arg_cdef, arg_type_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "load_decorated_class", 801, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___cache_class_attrs(PyObject *cpy_r_builder, PyObject *cpy_r_attrs_to_cache, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_typ;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_lval;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_rval;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 823, CPyStatic_classdef___globals);
        goto CPyL14;
    }
CPyL1: ;
    cpy_r_r2 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_builder, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 823, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    cpy_r_typ = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_attrs_to_cache)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL15;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_attrs_to_cache, cpy_r_r3);
    PyObject *__tmp10043;
    if (unlikely(!(PyTuple_Check(cpy_r_r8) && PyTuple_GET_SIZE(cpy_r_r8) == 2))) {
        __tmp10043 = NULL;
        goto __LL10044;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r8, 0), CPyType_nodes___Expression)))
        __tmp10043 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp10043 = NULL;
    }
    if (__tmp10043 == NULL) goto __LL10044;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r8, 1), CPyType_rtypes___RType)))
        __tmp10043 = PyTuple_GET_ITEM(cpy_r_r8, 1);
    else {
        __tmp10043 = NULL;
    }
    if (__tmp10043 == NULL) goto __LL10044;
    __tmp10043 = cpy_r_r8;
__LL10044: ;
    if (unlikely(__tmp10043 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.Expression, mypyc.ir.rtypes.RType]", cpy_r_r8); cpy_r_r9 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10045 = PyTuple_GET_ITEM(cpy_r_r8, 0);
        CPy_INCREF(__tmp10045);
        PyObject *__tmp10046;
        if (likely(PyObject_TypeCheck(__tmp10045, CPyType_nodes___Expression)))
            __tmp10046 = __tmp10045;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp10045); 
            __tmp10046 = NULL;
        }
        cpy_r_r9.f0 = __tmp10046;
        PyObject *__tmp10047 = PyTuple_GET_ITEM(cpy_r_r8, 1);
        CPy_INCREF(__tmp10047);
        PyObject *__tmp10048;
        if (likely(PyObject_TypeCheck(__tmp10047, CPyType_rtypes___RType)))
            __tmp10048 = __tmp10047;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp10047); 
            __tmp10048 = NULL;
        }
        cpy_r_r9.f1 = __tmp10048;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 824, CPyStatic_classdef___globals);
        goto CPyL16;
    }
    cpy_r_r10 = cpy_r_r9.f0;
    CPy_INCREF(cpy_r_r10);
    cpy_r_lval = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f1;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9.f0);
    CPy_DECREF(cpy_r_r9.f1);
    cpy_r_rtype = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_lval)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) {
        goto CPyL8;
    } else
        goto CPyL17;
CPyL6: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 825, CPyStatic_classdef___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_lval) == CPyType_nodes___NameExpr))
        cpy_r_r17 = cpy_r_lval;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 826, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_lval);
        goto CPyL18;
    }
    cpy_r_r18 = ((mypy___nodes___NameExprObject *)cpy_r_r17)->_name;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_typ, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 826, CPyStatic_classdef___globals);
        goto CPyL18;
    }
    cpy_r_rval = cpy_r_r20;
    if (likely(Py_TYPE(cpy_r_lval) == CPyType_nodes___NameExpr))
        cpy_r_r21 = cpy_r_lval;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 827, CPyStatic_classdef___globals, "mypy.nodes.NameExpr", cpy_r_lval);
        goto CPyL19;
    }
    cpy_r_r22 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDef_builder___IRBuilder___init_final_static(cpy_r_builder, cpy_r_r21, cpy_r_rval, cpy_r_r22, cpy_r_rtype);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_rval);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 827, CPyStatic_classdef___globals);
        goto CPyL16;
    }
    cpy_r_r24 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r24;
    goto CPyL3;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL15: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_lval);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL6;
CPyL18: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_lval);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_rval);
    goto CPyL14;
}

PyObject *CPyPy_classdef___cache_class_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "attrs_to_cache", "cdef", 0};
    static CPyArg_Parser parser = {"OOO:cache_class_attrs", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_attrs_to_cache;
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_attrs_to_cache, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_attrs_to_cache;
    if (likely(PyList_Check(obj_attrs_to_cache)))
        arg_attrs_to_cache = obj_attrs_to_cache;
    else {
        CPy_TypeError("list", obj_attrs_to_cache); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_classdef___cache_class_attrs(arg_builder, arg_attrs_to_cache, arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "cache_class_attrs", 819, CPyStatic_classdef___globals);
    return NULL;
}

PyObject *CPyDef_classdef___create_mypyc_attrs_tuple(PyObject *cpy_r_builder, PyObject *cpy_r_ir, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ancestor;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T3CIO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_name;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_attrs;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", "ClassIR", "mro", 831, CPyStatic_classdef___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL26;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL27;
    }
    cpy_r_ancestor = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ancestor)->_attributes;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_ancestor);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL27;
    }
CPyL6: ;
    cpy_r_r10 = 0;
    cpy_r_r11 = PyDict_Size(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPyDict_GetKeysIter(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL28;
    }
CPyL7: ;
    cpy_r_r14 = CPyDict_NextKey(cpy_r_r13, cpy_r_r10);
    cpy_r_r15 = cpy_r_r14.f1;
    cpy_r_r10 = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f0;
    if (!cpy_r_r16) goto CPyL29;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r14.f2);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals, "str", cpy_r_r17);
        goto CPyL30;
    }
    cpy_r_name = cpy_r_r18;
    cpy_r_r19 = PyList_Append(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL30;
    }
    cpy_r_r21 = CPyDict_CheckSize(cpy_r_r9, cpy_r_r12);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL30;
    } else
        goto CPyL7;
CPyL11: ;
    cpy_r_r22 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 831, CPyStatic_classdef___globals);
        goto CPyL27;
    }
    cpy_r_r23 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r23;
    goto CPyL3;
CPyL13: ;
    cpy_r_attrs = cpy_r_r0;
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python;
    if (!cpy_r_r24) goto CPyL15;
CPyL14: ;
    cpy_r_r25 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r26 = PyList_Append(cpy_r_attrs, cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 833, CPyStatic_classdef___globals);
        goto CPyL31;
    }
CPyL15: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_attrs)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = PyList_New(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 834, CPyStatic_classdef___globals);
        goto CPyL31;
    }
    cpy_r_r31 = 0;
CPyL17: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_attrs)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL32;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_attrs, cpy_r_r31);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 834, CPyStatic_classdef___globals, "str", cpy_r_r36);
        goto CPyL33;
    }
    cpy_r_attr = cpy_r_r37;
    cpy_r_r38 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 834, CPyStatic_classdef___globals);
        goto CPyL33;
    }
    cpy_r_r39 = CPyList_SetItemUnsafe(cpy_r_r30, cpy_r_r31, cpy_r_r38);
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 834, CPyStatic_classdef___globals);
        goto CPyL33;
    }
    cpy_r_r40 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r40;
    goto CPyL17;
CPyL22: ;
    cpy_r_items = cpy_r_r30;
    cpy_r_r41 = CPyDef_builder___IRBuilder___new_tuple(cpy_r_builder, cpy_r_items, cpy_r_line);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 835, CPyStatic_classdef___globals);
        goto CPyL24;
    }
    return cpy_r_r41;
CPyL24: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14.f2);
    goto CPyL11;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_attrs);
    goto CPyL24;
CPyL32: ;
    CPy_DECREF(cpy_r_attrs);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r30);
    goto CPyL24;
}

PyObject *CPyPy_classdef___create_mypyc_attrs_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "ir", "line", 0};
    static CPyArg_Parser parser = {"OOO:create_mypyc_attrs_tuple", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_ir;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_ir, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_classdef___create_mypyc_attrs_tuple(arg_builder, arg_ir, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "create_mypyc_attrs_tuple", 830, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef___add_dunders_to_non_ext_dict(PyObject *cpy_r_builder, PyObject *cpy_r_non_ext, CPyTagged cpy_r_line, char cpy_r_add_annotations) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_filler_doc_str;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    if (cpy_r_add_annotations != 2) goto CPyL2;
    cpy_r_add_annotations = 1;
CPyL2: ;
    if (!cpy_r_add_annotations) goto CPyL4;
    cpy_r_r0 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r1 = ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_non_ext)->_anns;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_builder___IRBuilder___add_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_r0, cpy_r_r1, cpy_r_line);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 843, CPyStatic_classdef___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r3 = CPyStatics[617]; /* 'mypyc filler docstring' */
    CPy_INCREF(cpy_r_r3);
    cpy_r_filler_doc_str = cpy_r_r3;
    cpy_r_r4 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r5 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_filler_doc_str);
    CPy_DECREF(cpy_r_filler_doc_str);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 849, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    cpy_r_r6 = CPyDef_builder___IRBuilder___add_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_r4, cpy_r_r5, cpy_r_line);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 849, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyStatics[619]; /* '__module__' */
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", "IRBuilder", "module_name", 850, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 850, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___add_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_r7, cpy_r_r9, cpy_r_line);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 850, CPyStatic_classdef___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_classdef___add_dunders_to_non_ext_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "non_ext", "line", "add_annotations", 0};
    static CPyArg_Parser parser = {"OOO|O:add_dunders_to_non_ext_dict", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_non_ext;
    PyObject *obj_line;
    PyObject *obj_add_annotations = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_non_ext, &obj_line, &obj_add_annotations)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_add_annotations;
    if (obj_add_annotations == NULL) {
        arg_add_annotations = 2;
    } else if (unlikely(!PyBool_Check(obj_add_annotations))) {
        CPy_TypeError("bool", obj_add_annotations); goto fail;
    } else
        arg_add_annotations = obj_add_annotations == Py_True;
    char retval = CPyDef_classdef___add_dunders_to_non_ext_dict(arg_builder, arg_non_ext, arg_line, arg_add_annotations);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/classdef.py", "add_dunders_to_non_ext_dict", 838, CPyStatic_classdef___globals);
    return NULL;
}

char CPyDef_classdef_____top_level__(void) {
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
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
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
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    tuple_T2OO cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_classdef___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 3, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_typing_extensions;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {5};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[10065]; /* (('typing_extensions', 'typing_extensions',
                                       'typing_extensions'),) */
    cpy_r_r15 = CPyStatic_classdef___globals;
    cpy_r_r16 = CPyStatics[8166]; /* 'mypyc/irbuild/classdef.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL51;
    cpy_r_r19 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r20 = CPyStatics[602]; /* 'abc' */
    cpy_r_r21 = CPyStatic_classdef___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 6, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_abc = cpy_r_r22;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9443]; /* ('Callable', 'Final') */
    cpy_r_r24 = CPyStatics[21]; /* 'typing' */
    cpy_r_r25 = CPyStatic_classdef___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 7, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[10066]; /* ('AssignmentStmt', 'CallExpr', 'ClassDef', 'Decorator',
                                      'ExpressionStmt', 'FuncDef', 'Lvalue', 'MemberExpr',
                                      'NameExpr', 'OverloadedFuncDef', 'PassStmt', 'RefExpr',
                                      'StrExpr', 'TempNode', 'TypeInfo', 'is_class_var') */
    cpy_r_r28 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r29 = CPyStatic_classdef___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 9, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypy___nodes = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[10067]; /* ('ENUM_REMOVED_PROPS', 'Instance', 'UnboundType',
                                      'get_proper_type') */
    cpy_r_r32 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r33 = CPyStatic_classdef___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 27, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypy___types = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[10068]; /* ('PROPSET_PREFIX',) */
    cpy_r_r36 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r37 = CPyStatic_classdef___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 28, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___common = cpy_r_r38;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[10042]; /* ('ClassIR', 'NonExtClassInfo') */
    cpy_r_r40 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r41 = CPyStatic_classdef___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 29, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r42;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[10069]; /* ('FuncDecl', 'FuncSignature') */
    cpy_r_r44 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r45 = CPyStatic_classdef___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 30, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r46;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[10070]; /* ('NAMESPACE_TYPE', 'BasicBlock', 'Branch', 'Call',
                                      'InitStatic', 'LoadAddress', 'LoadErrorValue',
                                      'LoadStatic', 'MethodCall', 'Register', 'Return',
                                      'SetAttr', 'TupleSet', 'Value') */
    cpy_r_r48 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r49 = CPyStatic_classdef___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 31, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r50;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[10071]; /* ('RType', 'bool_rprimitive', 'dict_rprimitive',
                                      'is_none_rprimitive', 'is_object_rprimitive',
                                      'is_optional_type', 'object_rprimitive') */
    cpy_r_r52 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r53 = CPyStatic_classdef___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 47, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r54;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r56 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r57 = CPyStatic_classdef___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 56, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r58;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[10072]; /* ('gen_property_getter_ir', 'gen_property_setter_ir',
                                      'handle_ext_method', 'handle_non_ext_method',
                                      'load_type') */
    cpy_r_r60 = CPyStatics[8172]; /* 'mypyc.irbuild.function' */
    cpy_r_r61 = CPyStatic_classdef___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 57, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___irbuild___function = cpy_r_r62;
    CPy_INCREF(CPyModule_mypyc___irbuild___function);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[10073]; /* ('dataclass_type', 'get_func_def', 'is_constant',
                                      'is_dataclass_decorator') */
    cpy_r_r64 = CPyStatics[8101]; /* 'mypyc.irbuild.util' */
    cpy_r_r65 = CPyStatic_classdef___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 64, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___irbuild___util = cpy_r_r66;
    CPy_INCREF(CPyModule_mypyc___irbuild___util);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[10074]; /* ('dict_new_op', 'dict_set_item_op') */
    cpy_r_r68 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r69 = CPyStatic_classdef___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 65, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r70;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[10075]; /* ('py_hasattr_op', 'py_setattr_op') */
    cpy_r_r72 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r73 = CPyStatic_classdef___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 66, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r74;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatics[10076]; /* ('dataclass_sleight_of_hand', 'not_implemented_op',
                                      'py_calc_meta_op', 'pytype_from_template_op',
                                      'type_object_op') */
    cpy_r_r76 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r77 = CPyStatic_classdef___globals;
    cpy_r_r78 = CPyImport_ImportFromMany(cpy_r_r76, cpy_r_r75, cpy_r_r75, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 67, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r78;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r79 = NULL;
    cpy_r_r80 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r81 = (PyObject *)CPyType_classdef___ClassBuilder_template;
    cpy_r_r82 = CPyType_FromTemplate(cpy_r_r81, cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 184, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r83 = CPyDef_classdef___ClassBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL52;
    }
    cpy_r_r84 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r85 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r86 = CPyStatics[8177]; /* 'cdef' */
    cpy_r_r87 = CPyStatics[8178]; /* 'attrs_to_cache' */
    cpy_r_r88 = PyTuple_Pack(3, cpy_r_r85, cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 184, CPyStatic_classdef___globals);
        goto CPyL52;
    }
    cpy_r_r89 = PyObject_SetAttr(cpy_r_r82, cpy_r_r84, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 184, CPyStatic_classdef___globals);
        goto CPyL52;
    }
    CPyType_classdef___ClassBuilder = (PyTypeObject *)cpy_r_r82;
    CPy_INCREF(CPyType_classdef___ClassBuilder);
    cpy_r_r91 = CPyStatic_classdef___globals;
    cpy_r_r92 = CPyStatics[8179]; /* 'ClassBuilder' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r91, cpy_r_r92, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 184, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r95 = (PyObject *)CPyType_classdef___ClassBuilder;
    cpy_r_r96 = PyTuple_Pack(1, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 208, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r97 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r98 = (PyObject *)CPyType_classdef___NonExtClassBuilder_template;
    cpy_r_r99 = CPyType_FromTemplate(cpy_r_r98, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 208, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r100 = CPyDef_classdef___NonExtClassBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL53;
    }
    cpy_r_r101 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r102 = CPyStatics[8180]; /* 'non_ext' */
    cpy_r_r103 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r104 = CPyStatics[8177]; /* 'cdef' */
    cpy_r_r105 = CPyStatics[8178]; /* 'attrs_to_cache' */
    cpy_r_r106 = PyTuple_Pack(4, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 208, CPyStatic_classdef___globals);
        goto CPyL53;
    }
    cpy_r_r107 = PyObject_SetAttr(cpy_r_r99, cpy_r_r101, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 208, CPyStatic_classdef___globals);
        goto CPyL53;
    }
    CPyType_classdef___NonExtClassBuilder = (PyTypeObject *)cpy_r_r99;
    CPy_INCREF(CPyType_classdef___NonExtClassBuilder);
    cpy_r_r109 = CPyStatic_classdef___globals;
    cpy_r_r110 = CPyStatics[8181]; /* 'NonExtClassBuilder' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 208, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r113 = (PyObject *)CPyType_classdef___ClassBuilder;
    cpy_r_r114 = PyTuple_Pack(1, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 259, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r115 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r116 = (PyObject *)CPyType_classdef___ExtClassBuilder_template;
    cpy_r_r117 = CPyType_FromTemplate(cpy_r_r116, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 259, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r118 = CPyDef_classdef___ExtClassBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL54;
    }
    cpy_r_r119 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r120 = CPyStatics[8182]; /* 'type_obj' */
    cpy_r_r121 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r122 = CPyStatics[8177]; /* 'cdef' */
    cpy_r_r123 = CPyStatics[8178]; /* 'attrs_to_cache' */
    cpy_r_r124 = PyTuple_Pack(4, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 259, CPyStatic_classdef___globals);
        goto CPyL54;
    }
    cpy_r_r125 = PyObject_SetAttr(cpy_r_r117, cpy_r_r119, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 259, CPyStatic_classdef___globals);
        goto CPyL54;
    }
    CPyType_classdef___ExtClassBuilder = (PyTypeObject *)cpy_r_r117;
    CPy_INCREF(CPyType_classdef___ExtClassBuilder);
    cpy_r_r127 = CPyStatic_classdef___globals;
    cpy_r_r128 = CPyStatics[8183]; /* 'ExtClassBuilder' */
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r127, cpy_r_r128, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 259, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r131 = (PyObject *)CPyType_classdef___ExtClassBuilder;
    cpy_r_r132 = PyTuple_Pack(1, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 296, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r133 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r134 = (PyObject *)CPyType_classdef___DataClassBuilder_template;
    cpy_r_r135 = CPyType_FromTemplate(cpy_r_r134, cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 296, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r136 = CPyDef_classdef___DataClassBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL55;
    }
    cpy_r_r137 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r138 = CPyStatics[8184]; /* 'add_annotations_to_dict' */
    cpy_r_r139 = CPyStatics[8180]; /* 'non_ext' */
    cpy_r_r140 = CPyStatics[8182]; /* 'type_obj' */
    cpy_r_r141 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r142 = CPyStatics[8177]; /* 'cdef' */
    cpy_r_r143 = CPyStatics[8178]; /* 'attrs_to_cache' */
    cpy_r_r144 = PyTuple_Pack(6, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 296, CPyStatic_classdef___globals);
        goto CPyL55;
    }
    cpy_r_r145 = PyObject_SetAttr(cpy_r_r135, cpy_r_r137, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 296, CPyStatic_classdef___globals);
        goto CPyL55;
    }
    CPyType_classdef___DataClassBuilder = (PyTypeObject *)cpy_r_r135;
    CPy_INCREF(CPyType_classdef___DataClassBuilder);
    cpy_r_r147 = CPyStatic_classdef___globals;
    cpy_r_r148 = CPyStatics[8185]; /* 'DataClassBuilder' */
    cpy_r_r149 = CPyDict_SetItem(cpy_r_r147, cpy_r_r148, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 296, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r151 = (PyObject *)CPyType_classdef___DataClassBuilder;
    cpy_r_r152 = PyTuple_Pack(1, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 373, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r153 = CPyStatics[8176]; /* 'mypyc.irbuild.classdef' */
    cpy_r_r154 = (PyObject *)CPyType_classdef___AttrsClassBuilder_template;
    cpy_r_r155 = CPyType_FromTemplate(cpy_r_r154, cpy_r_r152, cpy_r_r153);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 373, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r156 = CPyDef_classdef___AttrsClassBuilder_trait_vtable_setup();
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", -1, CPyStatic_classdef___globals);
        goto CPyL56;
    }
    cpy_r_r157 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r158 = CPyStatics[8184]; /* 'add_annotations_to_dict' */
    cpy_r_r159 = CPyStatics[8184]; /* 'add_annotations_to_dict' */
    cpy_r_r160 = CPyStatics[8180]; /* 'non_ext' */
    cpy_r_r161 = CPyStatics[8182]; /* 'type_obj' */
    cpy_r_r162 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r163 = CPyStatics[8177]; /* 'cdef' */
    cpy_r_r164 = CPyStatics[8178]; /* 'attrs_to_cache' */
    cpy_r_r165 = PyTuple_Pack(7, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 373, CPyStatic_classdef___globals);
        goto CPyL56;
    }
    cpy_r_r166 = PyObject_SetAttr(cpy_r_r155, cpy_r_r157, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 373, CPyStatic_classdef___globals);
        goto CPyL56;
    }
    CPyType_classdef___AttrsClassBuilder = (PyTypeObject *)cpy_r_r155;
    CPy_INCREF(CPyType_classdef___AttrsClassBuilder);
    cpy_r_r168 = CPyStatic_classdef___globals;
    cpy_r_r169 = CPyStatics[8186]; /* 'AttrsClassBuilder' */
    cpy_r_r170 = CPyDict_SetItem(cpy_r_r168, cpy_r_r169, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 373, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    cpy_r_r172 = CPyStatics[2558]; /* 'typing._TypedDict' */
    cpy_r_r173 = CPyStatics[5284]; /* 'typing_extensions._TypedDict' */
    cpy_r_r174.f0 = cpy_r_r172;
    cpy_r_r174.f1 = cpy_r_r173;
    CPy_INCREF(cpy_r_r174.f0);
    CPy_INCREF(cpy_r_r174.f1);
    CPy_INCREF(cpy_r_r174.f0);
    CPy_INCREF(cpy_r_r174.f1);
    cpy_r_r175 = PyTuple_New(2);
    if (unlikely(cpy_r_r175 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10049 = cpy_r_r174.f0;
    PyTuple_SET_ITEM(cpy_r_r175, 0, __tmp10049);
    PyObject *__tmp10050 = cpy_r_r174.f1;
    PyTuple_SET_ITEM(cpy_r_r175, 1, __tmp10050);
    CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES = cpy_r_r175;
    CPy_INCREF(CPyStatic_classdef___MAGIC_TYPED_DICT_CLASSES);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r176 = CPyStatic_classdef___globals;
    cpy_r_r177 = CPyStatics[8187]; /* 'MAGIC_TYPED_DICT_CLASSES' */
    cpy_r_r178 = PyTuple_New(2);
    if (unlikely(cpy_r_r178 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10051 = cpy_r_r174.f0;
    PyTuple_SET_ITEM(cpy_r_r178, 0, __tmp10051);
    PyObject *__tmp10052 = cpy_r_r174.f1;
    PyTuple_SET_ITEM(cpy_r_r178, 1, __tmp10052);
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r176, cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypyc/irbuild/classdef.py", "<module>", 458, CPyStatic_classdef___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r181 = 2;
    return cpy_r_r181;
CPyL52: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r135);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL51;
}
