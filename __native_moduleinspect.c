#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
moduleinspect___ModuleProperties_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *moduleinspect___ModuleProperties_setup(PyTypeObject *type);
PyObject *CPyDef_moduleinspect___ModuleProperties(PyObject *cpy_r_name, PyObject *cpy_r_file, PyObject *cpy_r_path, PyObject *cpy_r_all, char cpy_r_is_c_module, PyObject *cpy_r_subpackages);

static PyObject *
moduleinspect___ModuleProperties_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_moduleinspect___ModuleProperties) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = moduleinspect___ModuleProperties_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_moduleinspect___ModuleProperties_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
moduleinspect___ModuleProperties_traverse(mypy___moduleinspect___ModulePropertiesObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_file);
    Py_VISIT(self->_path);
    Py_VISIT(self->_all);
    Py_VISIT(self->_subpackages);
    return 0;
}

static int
moduleinspect___ModuleProperties_clear(mypy___moduleinspect___ModulePropertiesObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_file);
    Py_CLEAR(self->_path);
    Py_CLEAR(self->_all);
    Py_CLEAR(self->_subpackages);
    return 0;
}

static void
moduleinspect___ModuleProperties_dealloc(mypy___moduleinspect___ModulePropertiesObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, moduleinspect___ModuleProperties_dealloc)
    moduleinspect___ModuleProperties_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem moduleinspect___ModuleProperties_vtable[1];
static bool
CPyDef_moduleinspect___ModuleProperties_trait_vtable_setup(void)
{
    CPyVTableItem moduleinspect___ModuleProperties_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_moduleinspect___ModuleProperties_____init__,
    };
    memcpy(moduleinspect___ModuleProperties_vtable, moduleinspect___ModuleProperties_vtable_scratch, sizeof(moduleinspect___ModuleProperties_vtable));
    return 1;
}

static PyObject *
moduleinspect___ModuleProperties_get_name(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_name(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleProperties_get_file(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_file(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleProperties_get_path(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_path(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleProperties_get_all(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_all(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleProperties_get_is_c_module(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_is_c_module(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleProperties_get_subpackages(mypy___moduleinspect___ModulePropertiesObject *self, void *closure);
static int
moduleinspect___ModuleProperties_set_subpackages(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure);

static PyGetSetDef moduleinspect___ModuleProperties_getseters[] = {
    {"name",
     (getter)moduleinspect___ModuleProperties_get_name, (setter)moduleinspect___ModuleProperties_set_name,
     NULL, NULL},
    {"file",
     (getter)moduleinspect___ModuleProperties_get_file, (setter)moduleinspect___ModuleProperties_set_file,
     NULL, NULL},
    {"path",
     (getter)moduleinspect___ModuleProperties_get_path, (setter)moduleinspect___ModuleProperties_set_path,
     NULL, NULL},
    {"all",
     (getter)moduleinspect___ModuleProperties_get_all, (setter)moduleinspect___ModuleProperties_set_all,
     NULL, NULL},
    {"is_c_module",
     (getter)moduleinspect___ModuleProperties_get_is_c_module, (setter)moduleinspect___ModuleProperties_set_is_c_module,
     NULL, NULL},
    {"subpackages",
     (getter)moduleinspect___ModuleProperties_get_subpackages, (setter)moduleinspect___ModuleProperties_set_subpackages,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef moduleinspect___ModuleProperties_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_moduleinspect___ModuleProperties_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_moduleinspect___ModuleProperties_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ModuleProperties",
    .tp_new = moduleinspect___ModuleProperties_new,
    .tp_dealloc = (destructor)moduleinspect___ModuleProperties_dealloc,
    .tp_traverse = (traverseproc)moduleinspect___ModuleProperties_traverse,
    .tp_clear = (inquiry)moduleinspect___ModuleProperties_clear,
    .tp_getset = moduleinspect___ModuleProperties_getseters,
    .tp_methods = moduleinspect___ModuleProperties_methods,
    .tp_init = moduleinspect___ModuleProperties_init,
    .tp_basicsize = sizeof(mypy___moduleinspect___ModulePropertiesObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_moduleinspect___ModuleProperties_template = &CPyType_moduleinspect___ModuleProperties_template_;

static PyObject *
moduleinspect___ModuleProperties_setup(PyTypeObject *type)
{
    mypy___moduleinspect___ModulePropertiesObject *self;
    self = (mypy___moduleinspect___ModulePropertiesObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = moduleinspect___ModuleProperties_vtable;
    self->_is_c_module = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_moduleinspect___ModuleProperties(PyObject *cpy_r_name, PyObject *cpy_r_file, PyObject *cpy_r_path, PyObject *cpy_r_all, char cpy_r_is_c_module, PyObject *cpy_r_subpackages)
{
    PyObject *self = moduleinspect___ModuleProperties_setup(CPyType_moduleinspect___ModuleProperties);
    if (self == NULL)
        return NULL;
    char res = CPyDef_moduleinspect___ModuleProperties_____init__(self, cpy_r_name, cpy_r_file, cpy_r_path, cpy_r_all, cpy_r_is_c_module, cpy_r_subpackages);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
moduleinspect___ModuleProperties_get_name(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'ModuleProperties' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
moduleinspect___ModuleProperties_set_name(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'name' cannot be deleted");
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
moduleinspect___ModuleProperties_get_file(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    if (unlikely(self->_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'file' of 'ModuleProperties' undefined");
        return NULL;
    }
    CPy_INCREF(self->_file);
    PyObject *retval = self->_file;
    return retval;
}

static int
moduleinspect___ModuleProperties_set_file(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'file' cannot be deleted");
        return -1;
    }
    if (self->_file != NULL) {
        CPy_DECREF(self->_file);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3673;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3673;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL3673: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_file = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleProperties_get_path(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    if (unlikely(self->_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'path' of 'ModuleProperties' undefined");
        return NULL;
    }
    CPy_INCREF(self->_path);
    PyObject *retval = self->_path;
    return retval;
}

static int
moduleinspect___ModuleProperties_set_path(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'path' cannot be deleted");
        return -1;
    }
    if (self->_path != NULL) {
        CPy_DECREF(self->_path);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3674;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3674;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL3674: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_path = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleProperties_get_all(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    if (unlikely(self->_all == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'all' of 'ModuleProperties' undefined");
        return NULL;
    }
    CPy_INCREF(self->_all);
    PyObject *retval = self->_all;
    return retval;
}

static int
moduleinspect___ModuleProperties_set_all(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'all' cannot be deleted");
        return -1;
    }
    if (self->_all != NULL) {
        CPy_DECREF(self->_all);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3675;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3675;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL3675: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_all = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleProperties_get_is_c_module(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    PyObject *retval = self->_is_c_module ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
moduleinspect___ModuleProperties_set_is_c_module(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'is_c_module' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_c_module = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleProperties_get_subpackages(mypy___moduleinspect___ModulePropertiesObject *self, void *closure)
{
    if (unlikely(self->_subpackages == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'subpackages' of 'ModuleProperties' undefined");
        return NULL;
    }
    CPy_INCREF(self->_subpackages);
    PyObject *retval = self->_subpackages;
    return retval;
}

static int
moduleinspect___ModuleProperties_set_subpackages(mypy___moduleinspect___ModulePropertiesObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleProperties' object attribute 'subpackages' cannot be deleted");
        return -1;
    }
    if (self->_subpackages != NULL) {
        CPy_DECREF(self->_subpackages);
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
    self->_subpackages = tmp;
    return 0;
}

PyMemberDef moduleinspect___InspectError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef moduleinspect___InspectError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef moduleinspect___InspectError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_moduleinspect___InspectError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "InspectError",
    .tp_getset = moduleinspect___InspectError_getseters,
    .tp_methods = moduleinspect___InspectError_methods,
    .tp_members = moduleinspect___InspectError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_moduleinspect___InspectError_template = &CPyType_moduleinspect___InspectError_template_;


static int
moduleinspect___ModuleInspect_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *moduleinspect___ModuleInspect_setup(PyTypeObject *type);
PyObject *CPyDef_moduleinspect___ModuleInspect(void);

static PyObject *
moduleinspect___ModuleInspect_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_moduleinspect___ModuleInspect) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = moduleinspect___ModuleInspect_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_moduleinspect___ModuleInspect_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
moduleinspect___ModuleInspect_traverse(mypy___moduleinspect___ModuleInspectObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_tasks);
    Py_VISIT(self->_results);
    Py_VISIT(self->_proc);
    if (CPyTagged_CheckLong(self->_counter)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_counter));
    }
    return 0;
}

static int
moduleinspect___ModuleInspect_clear(mypy___moduleinspect___ModuleInspectObject *self)
{
    Py_CLEAR(self->_tasks);
    Py_CLEAR(self->_results);
    Py_CLEAR(self->_proc);
    if (CPyTagged_CheckLong(self->_counter)) {
        CPyTagged __tmp = self->_counter;
        self->_counter = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
moduleinspect___ModuleInspect_dealloc(mypy___moduleinspect___ModuleInspectObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, moduleinspect___ModuleInspect_dealloc)
    moduleinspect___ModuleInspect_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem moduleinspect___ModuleInspect_vtable[7];
static bool
CPyDef_moduleinspect___ModuleInspect_trait_vtable_setup(void)
{
    CPyVTableItem moduleinspect___ModuleInspect_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect_____init__,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect____start,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect___close,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect___get_package_properties,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect____get_from_queue,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect_____enter__,
        (CPyVTableItem)CPyDef_moduleinspect___ModuleInspect_____exit__,
    };
    memcpy(moduleinspect___ModuleInspect_vtable, moduleinspect___ModuleInspect_vtable_scratch, sizeof(moduleinspect___ModuleInspect_vtable));
    return 1;
}

static PyObject *
moduleinspect___ModuleInspect_get_tasks(mypy___moduleinspect___ModuleInspectObject *self, void *closure);
static int
moduleinspect___ModuleInspect_set_tasks(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleInspect_get_results(mypy___moduleinspect___ModuleInspectObject *self, void *closure);
static int
moduleinspect___ModuleInspect_set_results(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleInspect_get_proc(mypy___moduleinspect___ModuleInspectObject *self, void *closure);
static int
moduleinspect___ModuleInspect_set_proc(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure);
static PyObject *
moduleinspect___ModuleInspect_get_counter(mypy___moduleinspect___ModuleInspectObject *self, void *closure);
static int
moduleinspect___ModuleInspect_set_counter(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure);

static PyGetSetDef moduleinspect___ModuleInspect_getseters[] = {
    {"tasks",
     (getter)moduleinspect___ModuleInspect_get_tasks, (setter)moduleinspect___ModuleInspect_set_tasks,
     NULL, NULL},
    {"results",
     (getter)moduleinspect___ModuleInspect_get_results, (setter)moduleinspect___ModuleInspect_set_results,
     NULL, NULL},
    {"proc",
     (getter)moduleinspect___ModuleInspect_get_proc, (setter)moduleinspect___ModuleInspect_set_proc,
     NULL, NULL},
    {"counter",
     (getter)moduleinspect___ModuleInspect_get_counter, (setter)moduleinspect___ModuleInspect_set_counter,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef moduleinspect___ModuleInspect_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_start",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect____start,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_package_properties",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect___get_package_properties,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_from_queue",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect____get_from_queue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__enter__",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect_____enter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__exit__",
     (PyCFunction)CPyPy_moduleinspect___ModuleInspect_____exit__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_moduleinspect___ModuleInspect_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ModuleInspect",
    .tp_new = moduleinspect___ModuleInspect_new,
    .tp_dealloc = (destructor)moduleinspect___ModuleInspect_dealloc,
    .tp_traverse = (traverseproc)moduleinspect___ModuleInspect_traverse,
    .tp_clear = (inquiry)moduleinspect___ModuleInspect_clear,
    .tp_getset = moduleinspect___ModuleInspect_getseters,
    .tp_methods = moduleinspect___ModuleInspect_methods,
    .tp_init = moduleinspect___ModuleInspect_init,
    .tp_basicsize = sizeof(mypy___moduleinspect___ModuleInspectObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_moduleinspect___ModuleInspect_template = &CPyType_moduleinspect___ModuleInspect_template_;

static PyObject *
moduleinspect___ModuleInspect_setup(PyTypeObject *type)
{
    mypy___moduleinspect___ModuleInspectObject *self;
    self = (mypy___moduleinspect___ModuleInspectObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = moduleinspect___ModuleInspect_vtable;
    self->_counter = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_moduleinspect___ModuleInspect(void)
{
    PyObject *self = moduleinspect___ModuleInspect_setup(CPyType_moduleinspect___ModuleInspect);
    if (self == NULL)
        return NULL;
    char res = CPyDef_moduleinspect___ModuleInspect_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
moduleinspect___ModuleInspect_get_tasks(mypy___moduleinspect___ModuleInspectObject *self, void *closure)
{
    if (unlikely(self->_tasks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'tasks' of 'ModuleInspect' undefined");
        return NULL;
    }
    CPy_INCREF(self->_tasks);
    PyObject *retval = self->_tasks;
    return retval;
}

static int
moduleinspect___ModuleInspect_set_tasks(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleInspect' object attribute 'tasks' cannot be deleted");
        return -1;
    }
    if (self->_tasks != NULL) {
        CPy_DECREF(self->_tasks);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_tasks = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleInspect_get_results(mypy___moduleinspect___ModuleInspectObject *self, void *closure)
{
    if (unlikely(self->_results == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'results' of 'ModuleInspect' undefined");
        return NULL;
    }
    CPy_INCREF(self->_results);
    PyObject *retval = self->_results;
    return retval;
}

static int
moduleinspect___ModuleInspect_set_results(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleInspect' object attribute 'results' cannot be deleted");
        return -1;
    }
    if (self->_results != NULL) {
        CPy_DECREF(self->_results);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_results = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleInspect_get_proc(mypy___moduleinspect___ModuleInspectObject *self, void *closure)
{
    if (unlikely(self->_proc == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'proc' of 'ModuleInspect' undefined");
        return NULL;
    }
    CPy_INCREF(self->_proc);
    PyObject *retval = self->_proc;
    return retval;
}

static int
moduleinspect___ModuleInspect_set_proc(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleInspect' object attribute 'proc' cannot be deleted");
        return -1;
    }
    if (self->_proc != NULL) {
        CPy_DECREF(self->_proc);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_proc = tmp;
    return 0;
}

static PyObject *
moduleinspect___ModuleInspect_get_counter(mypy___moduleinspect___ModuleInspectObject *self, void *closure)
{
    if (unlikely(self->_counter == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'counter' of 'ModuleInspect' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_counter);
    PyObject *retval = CPyTagged_StealAsObject(self->_counter);
    return retval;
}

static int
moduleinspect___ModuleInspect_set_counter(mypy___moduleinspect___ModuleInspectObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ModuleInspect' object attribute 'counter' cannot be deleted");
        return -1;
    }
    if (self->_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_counter);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_counter = tmp;
    return 0;
}

static PyObject *moduleinspect___get_package_properties_env_setup(PyTypeObject *type);
PyObject *CPyDef_moduleinspect___get_package_properties_env(void);

static PyObject *
moduleinspect___get_package_properties_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_moduleinspect___get_package_properties_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return moduleinspect___get_package_properties_env_setup(type);
}

static int
moduleinspect___get_package_properties_env_traverse(mypy___moduleinspect___get_package_properties_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_package_id);
    Py_VISIT(self->_package);
    Py_VISIT(self->_e);
    Py_VISIT(self->_name);
    Py_VISIT(self->_file);
    Py_VISIT(self->_path);
    Py_VISIT(self->_pkg_all);
    Py_VISIT(self->_val);
    Py_VISIT(self->_subpackages);
    return 0;
}

static int
moduleinspect___get_package_properties_env_clear(mypy___moduleinspect___get_package_properties_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_package_id);
    Py_CLEAR(self->_package);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_file);
    Py_CLEAR(self->_path);
    Py_CLEAR(self->_pkg_all);
    Py_CLEAR(self->_val);
    Py_CLEAR(self->_subpackages);
    return 0;
}

static void
moduleinspect___get_package_properties_env_dealloc(mypy___moduleinspect___get_package_properties_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, moduleinspect___get_package_properties_env_dealloc)
    moduleinspect___get_package_properties_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem moduleinspect___get_package_properties_env_vtable[1];
static bool
CPyDef_moduleinspect___get_package_properties_env_trait_vtable_setup(void)
{
    CPyVTableItem moduleinspect___get_package_properties_env_vtable_scratch[] = {
        NULL
    };
    memcpy(moduleinspect___get_package_properties_env_vtable, moduleinspect___get_package_properties_env_vtable_scratch, sizeof(moduleinspect___get_package_properties_env_vtable));
    return 1;
}

static PyMethodDef moduleinspect___get_package_properties_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_moduleinspect___get_package_properties_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_package_properties_env",
    .tp_new = moduleinspect___get_package_properties_env_new,
    .tp_dealloc = (destructor)moduleinspect___get_package_properties_env_dealloc,
    .tp_traverse = (traverseproc)moduleinspect___get_package_properties_env_traverse,
    .tp_clear = (inquiry)moduleinspect___get_package_properties_env_clear,
    .tp_methods = moduleinspect___get_package_properties_env_methods,
    .tp_basicsize = sizeof(mypy___moduleinspect___get_package_properties_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_moduleinspect___get_package_properties_env_template = &CPyType_moduleinspect___get_package_properties_env_template_;

static PyObject *
moduleinspect___get_package_properties_env_setup(PyTypeObject *type)
{
    mypy___moduleinspect___get_package_properties_envObject *self;
    self = (mypy___moduleinspect___get_package_properties_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = moduleinspect___get_package_properties_env_vtable;
    self->_is_c = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_moduleinspect___get_package_properties_env(void)
{
    PyObject *self = moduleinspect___get_package_properties_env_setup(CPyType_moduleinspect___get_package_properties_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__moduleinspect_____mypyc_lambda__0_get_package_properties_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__(self, instance, owner);
}
PyMemberDef moduleinspect_____mypyc_lambda__0_get_package_properties_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *moduleinspect_____mypyc_lambda__0_get_package_properties_obj_setup(PyTypeObject *type);
PyObject *CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj(void);

static PyObject *
moduleinspect_____mypyc_lambda__0_get_package_properties_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return moduleinspect_____mypyc_lambda__0_get_package_properties_obj_setup(type);
}

static int
moduleinspect_____mypyc_lambda__0_get_package_properties_obj_traverse(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject))));
    return 0;
}

static int
moduleinspect_____mypyc_lambda__0_get_package_properties_obj_clear(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject))));
    return 0;
}

static void
moduleinspect_____mypyc_lambda__0_get_package_properties_obj_dealloc(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, moduleinspect_____mypyc_lambda__0_get_package_properties_obj_dealloc)
    moduleinspect_____mypyc_lambda__0_get_package_properties_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable[2];
static bool
CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_trait_vtable_setup(void)
{
    CPyVTableItem moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__,
        (CPyVTableItem)CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__,
    };
    memcpy(moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable, moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable_scratch, sizeof(moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable));
    return 1;
}

static PyMethodDef moduleinspect_____mypyc_lambda__0_get_package_properties_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_get_package_properties_obj",
    .tp_new = moduleinspect_____mypyc_lambda__0_get_package_properties_obj_new,
    .tp_dealloc = (destructor)moduleinspect_____mypyc_lambda__0_get_package_properties_obj_dealloc,
    .tp_traverse = (traverseproc)moduleinspect_____mypyc_lambda__0_get_package_properties_obj_traverse,
    .tp_clear = (inquiry)moduleinspect_____mypyc_lambda__0_get_package_properties_obj_clear,
    .tp_methods = moduleinspect_____mypyc_lambda__0_get_package_properties_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__moduleinspect_____mypyc_lambda__0_get_package_properties_obj,
    .tp_members = moduleinspect_____mypyc_lambda__0_get_package_properties_obj_members,
    .tp_basicsize = sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject),
    .tp_weaklistoffset = sizeof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_template = &CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_template_;

static PyObject *
moduleinspect_____mypyc_lambda__0_get_package_properties_obj_setup(PyTypeObject *type)
{
    mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *self;
    self = (mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = moduleinspect_____mypyc_lambda__0_get_package_properties_obj_vtable;
    self->vectorcall = CPyPy_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj(void)
{
    PyObject *self = moduleinspect_____mypyc_lambda__0_get_package_properties_obj_setup(CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef moduleinspectmodule_methods[] = {
    {"is_c_module", (PyCFunction)CPyPy_moduleinspect___is_c_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_package_properties", (PyCFunction)CPyPy_moduleinspect___get_package_properties, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"worker", (PyCFunction)CPyPy_moduleinspect___worker, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef moduleinspectmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.moduleinspect",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    moduleinspectmodule_methods
};

PyObject *CPyInit_mypy___moduleinspect(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___moduleinspect_internal) {
        Py_INCREF(CPyModule_mypy___moduleinspect_internal);
        return CPyModule_mypy___moduleinspect_internal;
    }
    CPyModule_mypy___moduleinspect_internal = PyModule_Create(&moduleinspectmodule);
    if (unlikely(CPyModule_mypy___moduleinspect_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___moduleinspect_internal, "__name__");
    CPyStatic_moduleinspect___globals = PyModule_GetDict(CPyModule_mypy___moduleinspect_internal);
    if (unlikely(CPyStatic_moduleinspect___globals == NULL))
        goto fail;
    CPyType_moduleinspect___get_package_properties_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_moduleinspect___get_package_properties_env_template, NULL, modname);
    if (unlikely(!CPyType_moduleinspect___get_package_properties_env))
        goto fail;
    CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_template, NULL, modname);
    if (unlikely(!CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_moduleinspect_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___moduleinspect_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___moduleinspect_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_moduleinspect___ModuleProperties);
    Py_CLEAR(CPyType_moduleinspect___InspectError);
    Py_CLEAR(CPyType_moduleinspect___ModuleInspect);
    Py_CLEAR(CPyType_moduleinspect___get_package_properties_env);
    Py_CLEAR(CPyType_moduleinspect_____mypyc_lambda__0_get_package_properties_obj);
    return NULL;
}

char CPyDef_moduleinspect___ModuleProperties_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_file, PyObject *cpy_r_path, PyObject *cpy_r_all, char cpy_r_is_c_module, PyObject *cpy_r_subpackages) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    if (cpy_r_name != NULL) goto CPyL21;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
CPyL2: ;
    if (cpy_r_file != NULL) goto CPyL22;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_file = cpy_r_r1;
CPyL4: ;
    if (cpy_r_path != NULL) goto CPyL23;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_path = cpy_r_r2;
CPyL6: ;
    if (cpy_r_all != NULL) goto CPyL24;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_all = cpy_r_r3;
CPyL8: ;
    if (cpy_r_is_c_module != 2) goto CPyL10;
    cpy_r_is_c_module = 0;
CPyL10: ;
    if (cpy_r_subpackages != NULL) goto CPyL25;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    cpy_r_subpackages = cpy_r_r4;
CPyL12: ;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_name = cpy_r_name;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_file = cpy_r_file;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_path = cpy_r_path;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_all = cpy_r_all;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_is_c_module = cpy_r_is_c_module;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_subpackages != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL26;
    CPy_INCREF(cpy_r_subpackages);
    if (likely(cpy_r_subpackages != Py_None))
        cpy_r_r7 = cpy_r_subpackages;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "__init__", 24, CPyStatic_moduleinspect___globals, "list", cpy_r_subpackages);
        goto CPyL27;
    }
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL26;
    if (likely(cpy_r_subpackages != Py_None))
        cpy_r_r12 = cpy_r_subpackages;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "__init__", 31, CPyStatic_moduleinspect___globals, "list", cpy_r_subpackages);
        goto CPyL20;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL19;
CPyL17: ;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "__init__", 31, CPyStatic_moduleinspect___globals);
        goto CPyL20;
    }
    cpy_r_r13 = cpy_r_r14;
CPyL19: ;
    ((mypy___moduleinspect___ModulePropertiesObject *)cpy_r_self)->_subpackages = cpy_r_r13;
    return 1;
CPyL20: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL21: ;
    CPy_INCREF(cpy_r_name);
    goto CPyL2;
CPyL22: ;
    CPy_INCREF(cpy_r_file);
    goto CPyL4;
CPyL23: ;
    CPy_INCREF(cpy_r_path);
    goto CPyL6;
CPyL24: ;
    CPy_INCREF(cpy_r_all);
    goto CPyL8;
CPyL25: ;
    CPy_INCREF(cpy_r_subpackages);
    goto CPyL12;
CPyL26: ;
    CPy_DECREF(cpy_r_subpackages);
    goto CPyL17;
CPyL27: ;
    CPy_DecRef(cpy_r_subpackages);
    goto CPyL20;
}

PyObject *CPyPy_moduleinspect___ModuleProperties_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "file", "path", "all", "is_c_module", "subpackages", 0};
    PyObject *obj_name = NULL;
    PyObject *obj_file = NULL;
    PyObject *obj_path = NULL;
    PyObject *obj_all = NULL;
    PyObject *obj_is_c_module = NULL;
    PyObject *obj_subpackages = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OOOOOO", "__init__", kwlist, &obj_name, &obj_file, &obj_path, &obj_all, &obj_is_c_module, &obj_subpackages)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleProperties))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleProperties", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (obj_name == NULL) {
        arg_name = NULL;
    } else if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_file;
    if (obj_file == NULL) {
        arg_file = NULL;
        goto __LL3676;
    }
    if (PyUnicode_Check(obj_file))
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL3676;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL3676;
    CPy_TypeError("str or None", obj_file); 
    goto fail;
__LL3676: ;
    PyObject *arg_path;
    if (obj_path == NULL) {
        arg_path = NULL;
        goto __LL3677;
    }
    if (PyList_Check(obj_path))
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL3677;
    if (obj_path == Py_None)
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL3677;
    CPy_TypeError("list or None", obj_path); 
    goto fail;
__LL3677: ;
    PyObject *arg_all;
    if (obj_all == NULL) {
        arg_all = NULL;
        goto __LL3678;
    }
    if (PyList_Check(obj_all))
        arg_all = obj_all;
    else {
        arg_all = NULL;
    }
    if (arg_all != NULL) goto __LL3678;
    if (obj_all == Py_None)
        arg_all = obj_all;
    else {
        arg_all = NULL;
    }
    if (arg_all != NULL) goto __LL3678;
    CPy_TypeError("list or None", obj_all); 
    goto fail;
__LL3678: ;
    char arg_is_c_module;
    if (obj_is_c_module == NULL) {
        arg_is_c_module = 2;
    } else if (unlikely(!PyBool_Check(obj_is_c_module))) {
        CPy_TypeError("bool", obj_is_c_module); goto fail;
    } else
        arg_is_c_module = obj_is_c_module == Py_True;
    PyObject *arg_subpackages;
    if (obj_subpackages == NULL) {
        arg_subpackages = NULL;
        goto __LL3679;
    }
    if (PyList_Check(obj_subpackages))
        arg_subpackages = obj_subpackages;
    else {
        arg_subpackages = NULL;
    }
    if (arg_subpackages != NULL) goto __LL3679;
    if (obj_subpackages == Py_None)
        arg_subpackages = obj_subpackages;
    else {
        arg_subpackages = NULL;
    }
    if (arg_subpackages != NULL) goto __LL3679;
    CPy_TypeError("list or None", obj_subpackages); 
    goto fail;
__LL3679: ;
    char retval = CPyDef_moduleinspect___ModuleProperties_____init__(arg_self, arg_name, arg_file, arg_path, arg_all, arg_is_c_module, arg_subpackages);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "__init__", 17, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___is_c_module(PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
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
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
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
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    cpy_r_r0 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_module, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 35, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "is_c_module", 35, CPyStatic_moduleinspect___globals, "dict", cpy_r_r1);
        goto CPyL42;
    }
    cpy_r_r3 = CPyStatics[150]; /* '__file__' */
    cpy_r_r4 = CPyDict_GetWithNone(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 35, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 == cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r7 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_module, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals, "dict", cpy_r_r8);
        goto CPyL42;
    }
    cpy_r_r10 = CPyStatics[150]; /* '__file__' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r12 = CPyModule_os;
    cpy_r_r13 = CPyStatics[142]; /* 'path' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL43;
    }
    cpy_r_r15 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r11};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r11);
    PyObject *__tmp3680;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        __tmp3680 = NULL;
        goto __LL3681;
    }
    __tmp3680 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    if (__tmp3680 == NULL) goto __LL3681;
    __tmp3680 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    if (__tmp3680 == NULL) goto __LL3681;
    __tmp3680 = cpy_r_r19;
__LL3681: ;
    if (unlikely(__tmp3680 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r19); cpy_r_r20 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3682 = PyTuple_GET_ITEM(cpy_r_r19, 0);
        CPy_INCREF(__tmp3682);
        PyObject *__tmp3683;
        __tmp3683 = __tmp3682;
        cpy_r_r20.f0 = __tmp3683;
        PyObject *__tmp3684 = PyTuple_GET_ITEM(cpy_r_r19, 1);
        CPy_INCREF(__tmp3684);
        PyObject *__tmp3685;
        __tmp3685 = __tmp3684;
        cpy_r_r20.f1 = __tmp3685;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20.f0 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3686 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp3686);
    PyObject *__tmp3687 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp3687);
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_r21, -2);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r23 = CPyStatics[3896]; /* '.so' */
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r22, cpy_r_r23, 2);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (!cpy_r_r25) goto CPyL17;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL28;
CPyL17: ;
    cpy_r_r27 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_module, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals, "dict", cpy_r_r28);
        goto CPyL42;
    }
    cpy_r_r30 = CPyStatics[150]; /* '__file__' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r32 = CPyModule_os;
    cpy_r_r33 = CPyStatics[142]; /* 'path' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL44;
    }
    cpy_r_r35 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r31};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r31);
    PyObject *__tmp3688;
    if (unlikely(!(PyTuple_Check(cpy_r_r39) && PyTuple_GET_SIZE(cpy_r_r39) == 2))) {
        __tmp3688 = NULL;
        goto __LL3689;
    }
    __tmp3688 = PyTuple_GET_ITEM(cpy_r_r39, 0);
    if (__tmp3688 == NULL) goto __LL3689;
    __tmp3688 = PyTuple_GET_ITEM(cpy_r_r39, 1);
    if (__tmp3688 == NULL) goto __LL3689;
    __tmp3688 = cpy_r_r39;
__LL3689: ;
    if (unlikely(__tmp3688 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r39); cpy_r_r40 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3690 = PyTuple_GET_ITEM(cpy_r_r39, 0);
        CPy_INCREF(__tmp3690);
        PyObject *__tmp3691;
        __tmp3691 = __tmp3690;
        cpy_r_r40.f0 = __tmp3691;
        PyObject *__tmp3692 = PyTuple_GET_ITEM(cpy_r_r39, 1);
        CPy_INCREF(__tmp3692);
        PyObject *__tmp3693;
        __tmp3693 = __tmp3692;
        cpy_r_r40.f1 = __tmp3693;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40.f0 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3694 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp3694);
    PyObject *__tmp3695 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp3695);
    cpy_r_r42 = CPySequenceTuple_GetItem(cpy_r_r41, -2);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r43 = CPyStatics[383]; /* '.pyd' */
    cpy_r_r44 = PyObject_RichCompare(cpy_r_r42, cpy_r_r43, 2);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r26 = cpy_r_r45;
CPyL28: ;
    if (!cpy_r_r26) goto CPyL30;
    cpy_r_r46 = cpy_r_r26;
    goto CPyL41;
CPyL30: ;
    cpy_r_r47 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_module, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals, "dict", cpy_r_r48);
        goto CPyL42;
    }
    cpy_r_r50 = CPyStatics[150]; /* '__file__' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r52 = CPyModule_os;
    cpy_r_r53 = CPyStatics[142]; /* 'path' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL45;
    }
    cpy_r_r55 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r57[1] = {cpy_r_r51};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r51);
    PyObject *__tmp3696;
    if (unlikely(!(PyTuple_Check(cpy_r_r59) && PyTuple_GET_SIZE(cpy_r_r59) == 2))) {
        __tmp3696 = NULL;
        goto __LL3697;
    }
    __tmp3696 = PyTuple_GET_ITEM(cpy_r_r59, 0);
    if (__tmp3696 == NULL) goto __LL3697;
    __tmp3696 = PyTuple_GET_ITEM(cpy_r_r59, 1);
    if (__tmp3696 == NULL) goto __LL3697;
    __tmp3696 = cpy_r_r59;
__LL3697: ;
    if (unlikely(__tmp3696 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r59); cpy_r_r60 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3698 = PyTuple_GET_ITEM(cpy_r_r59, 0);
        CPy_INCREF(__tmp3698);
        PyObject *__tmp3699;
        __tmp3699 = __tmp3698;
        cpy_r_r60.f0 = __tmp3699;
        PyObject *__tmp3700 = PyTuple_GET_ITEM(cpy_r_r59, 1);
        CPy_INCREF(__tmp3700);
        PyObject *__tmp3701;
        __tmp3701 = __tmp3700;
        cpy_r_r60.f1 = __tmp3701;
    }
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60.f0 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r61 = PyTuple_New(2);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3702 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp3702);
    PyObject *__tmp3703 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp3703);
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_r61, -2);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 39, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r63 = CPyStatics[3897]; /* '.dll' */
    cpy_r_r64 = PyObject_RichCompare(cpy_r_r62, cpy_r_r63, 2);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r64))) {
        CPy_TypeError("bool", cpy_r_r64); cpy_r_r65 = 2;
    } else
        cpy_r_r65 = cpy_r_r64 == Py_True;
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", -1, CPyStatic_moduleinspect___globals);
        goto CPyL42;
    }
    cpy_r_r46 = cpy_r_r65;
CPyL41: ;
    return cpy_r_r46;
CPyL42: ;
    cpy_r_r66 = 2;
    return cpy_r_r66;
CPyL43: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL42;
}

PyObject *CPyPy_moduleinspect___is_c_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:is_c_module", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_module = obj_module;
    char retval = CPyDef_moduleinspect___is_c_module(arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "is_c_module", 34, CPyStatic_moduleinspect___globals);
    return NULL;
}

PyObject *CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "__get__", -1, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_r) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "<lambda>", "__mypyc_lambda__0_get_package_properties_obj", "__mypyc_env__", 81, CPyStatic_moduleinspect___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"r", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_r;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_r)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_r;
    if (likely(PyUnicode_Check(obj_r)))
        arg_r = obj_r;
    else {
        CPy_TypeError("str", obj_r); 
        goto fail;
    }
    char retval = CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj_____call__(arg___mypyc_self__, arg_r);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "<lambda>", 81, CPyStatic_moduleinspect___globals);
    return NULL;
}

PyObject *CPyDef_moduleinspect___get_package_properties(PyObject *cpy_r_package_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_package;
    tuple_T3OOO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_pkg_all;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_is_c;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_subpackages;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_all_packages;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_importer;
    PyObject *cpy_r_qualified_name;
    char cpy_r_ispkg;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    cpy_r_r0 = CPyDef_moduleinspect___get_package_properties_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 46, CPyStatic_moduleinspect___globals);
        goto CPyL95;
    }
    cpy_r_r1 = CPyModule_importlib;
    cpy_r_r2 = CPyStatics[183]; /* 'import_module' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 49, CPyStatic_moduleinspect___globals);
        goto CPyL96;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_package_id};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 49, CPyStatic_moduleinspect___globals);
        goto CPyL96;
    }
    cpy_r_package = cpy_r_r6;
    goto CPyL15;
CPyL4: ;
    cpy_r_r7 = CPy_CatchError();
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[3898]; /* 'BaseException' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 50, CPyStatic_moduleinspect___globals);
        goto CPyL13;
    }
    cpy_r_r11 = CPy_ExceptionMatches(cpy_r_r10);
    CPy_DecRef(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r12;
    cpy_r_r13 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 51, CPyStatic_moduleinspect___globals);
        goto CPyL13;
    }
    cpy_r_r14 = (PyObject *)CPyType_moduleinspect___InspectError;
    PyObject *cpy_r_r15[1] = {cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 51, CPyStatic_moduleinspect___globals);
        goto CPyL97;
    }
    CPy_DecRef(cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_moduleinspect___InspectError))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 51, CPyStatic_moduleinspect___globals, "mypy.moduleinspect.InspectError", cpy_r_r17);
        goto CPyL13;
    }
    CPy_Raise(cpy_r_r18);
    CPy_DecRef(cpy_r_r18);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 51, CPyStatic_moduleinspect___globals);
        goto CPyL13;
    } else
        goto CPyL98;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL99;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r7);
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    cpy_r_r19 = CPy_KeepPropagating();
    if (!cpy_r_r19) goto CPyL95;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r20 = CPyStatics[197]; /* '__name__' */
    cpy_r_r21 = CPyObject_GetAttr3(cpy_r_package, cpy_r_r20, cpy_r_package_id);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 52, CPyStatic_moduleinspect___globals);
        goto CPyL100;
    }
    cpy_r_name = cpy_r_r21;
    cpy_r_r22 = CPyStatics[150]; /* '__file__' */
    cpy_r_r23 = Py_None;
    cpy_r_r24 = CPyObject_GetAttr3(cpy_r_package, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 53, CPyStatic_moduleinspect___globals);
        goto CPyL101;
    }
    cpy_r_file = cpy_r_r24;
    cpy_r_r25 = CPyStatics[3899]; /* '__path__' */
    cpy_r_r26 = Py_None;
    cpy_r_r27 = CPyObject_GetAttr3(cpy_r_package, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 54, CPyStatic_moduleinspect___globals);
        goto CPyL102;
    }
    if (PyList_Check(cpy_r_r27))
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL3704;
    if (cpy_r_r27 == Py_None)
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL3704;
    CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 54, CPyStatic_moduleinspect___globals, "list or None", cpy_r_r27);
    goto CPyL102;
__LL3704: ;
    cpy_r_path = cpy_r_r28;
    cpy_r_r29 = (PyObject *)&PyList_Type;
    cpy_r_r30 = PyObject_IsInstance(cpy_r_path, cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 55, CPyStatic_moduleinspect___globals);
        goto CPyL103;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL22;
    } else
        goto CPyL104;
CPyL21: ;
    cpy_r_r33 = Py_None;
    CPy_INCREF(cpy_r_r33);
    cpy_r_path = cpy_r_r33;
CPyL22: ;
    cpy_r_r34 = CPyStatics[695]; /* '__all__' */
    cpy_r_r35 = Py_None;
    cpy_r_r36 = CPyObject_GetAttr3(cpy_r_package, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 57, CPyStatic_moduleinspect___globals);
        goto CPyL103;
    }
    cpy_r_pkg_all = cpy_r_r36;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_pkg_all != cpy_r_r37;
    if (!cpy_r_r38) goto CPyL34;
    cpy_r_r39 = PySequence_List(cpy_r_pkg_all);
    CPy_DECREF(cpy_r_pkg_all);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 60, CPyStatic_moduleinspect___globals);
        goto CPyL26;
    }
    cpy_r_pkg_all = cpy_r_r39;
    goto CPyL34;
CPyL26: ;
    cpy_r_r40 = CPy_CatchError();
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 61, CPyStatic_moduleinspect___globals);
        goto CPyL105;
    }
    cpy_r_r44 = CPy_ExceptionMatches(cpy_r_r43);
    CPy_DecRef(cpy_r_r43);
    if (!cpy_r_r44) goto CPyL106;
    cpy_r_r45 = Py_None;
    CPy_INCREF(cpy_r_r45);
    cpy_r_pkg_all = cpy_r_r45;
    goto CPyL31;
CPyL29: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL32;
    } else
        goto CPyL107;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL34;
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL95;
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r47 = CPyDef_moduleinspect___is_c_module(cpy_r_package);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 63, CPyStatic_moduleinspect___globals);
        goto CPyL108;
    }
    cpy_r_is_c = cpy_r_r47;
    cpy_r_r48 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r49 = cpy_r_path == cpy_r_r48;
    if (cpy_r_r49) {
        goto CPyL109;
    } else
        goto CPyL69;
CPyL36: ;
    if (!cpy_r_is_c) goto CPyL110;
    cpy_r_r50 = PyList_New(0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 71, CPyStatic_moduleinspect___globals);
        goto CPyL111;
    }
    cpy_r_r51 = CPyModule_inspect;
    cpy_r_r52 = CPyStatics[3900]; /* 'getmembers' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 73, CPyStatic_moduleinspect___globals);
        goto CPyL112;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_package};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 73, CPyStatic_moduleinspect___globals);
        goto CPyL112;
    }
    if (likely(PyList_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 73, CPyStatic_moduleinspect___globals, "list", cpy_r_r56);
        goto CPyL112;
    }
    cpy_r_r58 = 0;
CPyL42: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL113;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_r57, cpy_r_r58);
    PyObject *__tmp3705;
    if (unlikely(!(PyTuple_Check(cpy_r_r63) && PyTuple_GET_SIZE(cpy_r_r63) == 2))) {
        __tmp3705 = NULL;
        goto __LL3706;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 0))))
        __tmp3705 = PyTuple_GET_ITEM(cpy_r_r63, 0);
    else {
        __tmp3705 = NULL;
    }
    if (__tmp3705 == NULL) goto __LL3706;
    __tmp3705 = PyTuple_GET_ITEM(cpy_r_r63, 1);
    if (__tmp3705 == NULL) goto __LL3706;
    __tmp3705 = cpy_r_r63;
__LL3706: ;
    if (unlikely(__tmp3705 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_r63); cpy_r_r64 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3707 = PyTuple_GET_ITEM(cpy_r_r63, 0);
        CPy_INCREF(__tmp3707);
        PyObject *__tmp3708;
        if (likely(PyUnicode_Check(__tmp3707)))
            __tmp3708 = __tmp3707;
        else {
            CPy_TypeError("str", __tmp3707); 
            __tmp3708 = NULL;
        }
        cpy_r_r64.f0 = __tmp3708;
        PyObject *__tmp3709 = PyTuple_GET_ITEM(cpy_r_r63, 1);
        CPy_INCREF(__tmp3709);
        PyObject *__tmp3710;
        __tmp3710 = __tmp3709;
        cpy_r_r64.f1 = __tmp3710;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 71, CPyStatic_moduleinspect___globals);
        goto CPyL114;
    }
    cpy_r_r65 = cpy_r_r64.f0;
    CPy_INCREF(cpy_r_r65);
    cpy_r_name_2 = cpy_r_r65;
    cpy_r_r66 = cpy_r_r64.f1;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r64.f0);
    CPy_DECREF(cpy_r_r64.f1);
    cpy_r_val = cpy_r_r66;
    cpy_r_r67 = CPyModule_inspect;
    cpy_r_r68 = CPyStatics[3901]; /* 'ismodule' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_val};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL115;
    }
    if (unlikely(!PyBool_Check(cpy_r_r72))) {
        CPy_TypeError("bool", cpy_r_r72); cpy_r_r73 = 2;
    } else
        cpy_r_r73 = cpy_r_r72 == Py_True;
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL115;
    }
    if (cpy_r_r73) {
        goto CPyL49;
    } else
        goto CPyL116;
CPyL48: ;
    cpy_r_r74 = cpy_r_r73;
    goto CPyL59;
CPyL49: ;
    cpy_r_r75 = CPyStatics[197]; /* '__name__' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_val, cpy_r_r75);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL117;
    }
    if (likely(PyUnicode_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals, "str", cpy_r_r76);
        goto CPyL117;
    }
    cpy_r_r78 = CPyStatics[197]; /* '__name__' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_package, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL118;
    }
    if (likely(PyUnicode_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals, "str", cpy_r_r79);
        goto CPyL118;
    }
    cpy_r_r81 = CPyStatics[224]; /* '.' */
    cpy_r_r82 = PyUnicode_Concat(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL118;
    }
    cpy_r_r83 = PyUnicode_Concat(cpy_r_r82, cpy_r_name_2);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL118;
    }
    cpy_r_r84 = PyUnicode_Compare(cpy_r_r77, cpy_r_r83);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 == -1;
    if (!cpy_r_r85) goto CPyL58;
    cpy_r_r86 = PyErr_Occurred();
    cpy_r_r87 = cpy_r_r86 != NULL;
    if (!cpy_r_r87) goto CPyL58;
    cpy_r_r88 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 74, CPyStatic_moduleinspect___globals);
        goto CPyL117;
    }
CPyL58: ;
    cpy_r_r89 = cpy_r_r84 == 0;
    cpy_r_r74 = cpy_r_r89;
CPyL59: ;
    if (!cpy_r_r74) goto CPyL119;
    cpy_r_r90 = CPyStatics[197]; /* '__name__' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_package, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 72, CPyStatic_moduleinspect___globals);
        goto CPyL117;
    }
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 72, CPyStatic_moduleinspect___globals, "str", cpy_r_r91);
        goto CPyL117;
    }
    cpy_r_r93 = CPyStatics[224]; /* '.' */
    cpy_r_r94 = PyUnicode_Concat(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 72, CPyStatic_moduleinspect___globals);
        goto CPyL117;
    }
    cpy_r_r95 = PyUnicode_Concat(cpy_r_r94, cpy_r_name_2);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_name_2);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 72, CPyStatic_moduleinspect___globals);
        goto CPyL114;
    }
    cpy_r_r96 = PyList_Append(cpy_r_r50, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 71, CPyStatic_moduleinspect___globals);
        goto CPyL114;
    }
CPyL65: ;
    cpy_r_r98 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r98;
    goto CPyL42;
CPyL66: ;
    cpy_r_subpackages = cpy_r_r50;
    goto CPyL90;
CPyL67: ;
    cpy_r_r99 = PyList_New(0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 78, CPyStatic_moduleinspect___globals);
        goto CPyL120;
    }
    cpy_r_subpackages = cpy_r_r99;
    goto CPyL90;
CPyL69: ;
    CPy_INCREF(cpy_r_path);
    if (likely(cpy_r_path != Py_None))
        cpy_r_r100 = cpy_r_path;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals, "list", cpy_r_path);
        goto CPyL108;
    }
    cpy_r_r101 = CPyStatics[197]; /* '__name__' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_package, cpy_r_r101);
    CPy_DECREF(cpy_r_package);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals);
        goto CPyL121;
    }
    if (likely(PyUnicode_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals, "str", cpy_r_r102);
        goto CPyL121;
    }
    cpy_r_r104 = CPyStatics[224]; /* '.' */
    cpy_r_r105 = PyUnicode_Concat(cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals);
        goto CPyL121;
    }
    cpy_r_r106 = CPyDef_moduleinspect_____mypyc_lambda__0_get_package_properties_obj();
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals);
        goto CPyL122;
    }
    if (((mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *)cpy_r_r106)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *)cpy_r_r106)->___mypyc_env__);
    }
    ((mypy___moduleinspect_____mypyc_lambda__0_get_package_properties_objObject *)cpy_r_r106)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r107 = 1;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 81, CPyStatic_moduleinspect___globals);
        goto CPyL123;
    }
    cpy_r_r108 = CPyModule_pkgutil;
    cpy_r_r109 = CPyStatics[3902]; /* 'walk_packages' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 80, CPyStatic_moduleinspect___globals);
        goto CPyL123;
    }
    PyObject *cpy_r_r111[3] = {cpy_r_r100, cpy_r_r105, cpy_r_r106};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = CPyStatics[9539]; /* ('prefix', 'onerror') */
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, cpy_r_r113);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 80, CPyStatic_moduleinspect___globals);
        goto CPyL123;
    }
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r106);
    cpy_r_all_packages = cpy_r_r114;
    cpy_r_r115 = PyList_New(0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL124;
    }
    cpy_r_r116 = PyObject_GetIter(cpy_r_all_packages);
    CPy_DECREF(cpy_r_all_packages);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL125;
    }
CPyL79: ;
    cpy_r_r117 = PyIter_Next(cpy_r_r116);
    if (cpy_r_r117 == NULL) goto CPyL126;
    if (likely(PyTuple_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals, "tuple", cpy_r_r117);
        goto CPyL127;
    }
    cpy_r_r119 = CPySequence_CheckUnpackCount(cpy_r_r118, 3);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL128;
    }
    cpy_r_r121 = CPySequenceTuple_GetItem(cpy_r_r118, 0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL128;
    }
    cpy_r_r122 = CPySequenceTuple_GetItem(cpy_r_r118, 2);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL129;
    }
    if (likely(PyUnicode_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals, "str", cpy_r_r122);
        goto CPyL129;
    }
    cpy_r_r124 = CPySequenceTuple_GetItem(cpy_r_r118, 4);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL130;
    }
    if (unlikely(!PyBool_Check(cpy_r_r124))) {
        CPy_TypeError("bool", cpy_r_r124); cpy_r_r125 = 2;
    } else
        cpy_r_r125 = cpy_r_r124 == Py_True;
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL130;
    }
    cpy_r_importer = cpy_r_r121;
    CPy_DECREF(cpy_r_importer);
    cpy_r_qualified_name = cpy_r_r123;
    cpy_r_ispkg = cpy_r_r125;
    cpy_r_r126 = PyList_Append(cpy_r_r115, cpy_r_qualified_name);
    CPy_DECREF(cpy_r_qualified_name);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL127;
    } else
        goto CPyL79;
CPyL88: ;
    cpy_r_r128 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 83, CPyStatic_moduleinspect___globals);
        goto CPyL125;
    }
    cpy_r_subpackages = cpy_r_r115;
CPyL90: ;
    if (likely(PyUnicode_Check(cpy_r_name)))
        cpy_r_r129 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 84, CPyStatic_moduleinspect___globals, "str", cpy_r_name);
        goto CPyL131;
    }
    if (PyUnicode_Check(cpy_r_file))
        cpy_r_r130 = cpy_r_file;
    else {
        cpy_r_r130 = NULL;
    }
    if (cpy_r_r130 != NULL) goto __LL3711;
    if (cpy_r_file == Py_None)
        cpy_r_r130 = cpy_r_file;
    else {
        cpy_r_r130 = NULL;
    }
    if (cpy_r_r130 != NULL) goto __LL3711;
    CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 84, CPyStatic_moduleinspect___globals, "str or None", cpy_r_file);
    goto CPyL132;
__LL3711: ;
    if (PyList_Check(cpy_r_pkg_all))
        cpy_r_r131 = cpy_r_pkg_all;
    else {
        cpy_r_r131 = NULL;
    }
    if (cpy_r_r131 != NULL) goto __LL3712;
    if (cpy_r_pkg_all == Py_None)
        cpy_r_r131 = cpy_r_pkg_all;
    else {
        cpy_r_r131 = NULL;
    }
    if (cpy_r_r131 != NULL) goto __LL3712;
    CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 84, CPyStatic_moduleinspect___globals, "list or None", cpy_r_pkg_all);
    goto CPyL133;
__LL3712: ;
    cpy_r_r132 = CPyDef_moduleinspect___ModuleProperties(cpy_r_r129, cpy_r_r130, cpy_r_path, cpy_r_r131, cpy_r_is_c, cpy_r_subpackages);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_subpackages);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 84, CPyStatic_moduleinspect___globals);
        goto CPyL95;
    }
    return cpy_r_r132;
CPyL95: ;
    cpy_r_r133 = NULL;
    return cpy_r_r133;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL97: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
CPyL98: ;
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL10;
CPyL99: ;
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL12;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    goto CPyL95;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    goto CPyL95;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    goto CPyL95;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    goto CPyL95;
CPyL104: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL21;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    goto CPyL32;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    goto CPyL29;
CPyL107: ;
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL30;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    goto CPyL95;
CPyL109: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
CPyL110: ;
    CPy_DECREF(cpy_r_package);
    goto CPyL67;
CPyL111: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    goto CPyL95;
CPyL112: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r50);
    goto CPyL95;
CPyL113: ;
    CPy_DECREF(cpy_r_package);
    CPy_DECREF(cpy_r_r57);
    goto CPyL66;
CPyL114: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r57);
    goto CPyL95;
CPyL115: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_val);
    goto CPyL95;
CPyL116: ;
    CPy_DECREF(cpy_r_val);
    goto CPyL48;
CPyL117: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL95;
CPyL118: ;
    CPy_DecRef(cpy_r_package);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_r77);
    goto CPyL95;
CPyL119: ;
    CPy_DECREF(cpy_r_name_2);
    goto CPyL65;
CPyL120: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    goto CPyL95;
CPyL121: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r100);
    goto CPyL95;
CPyL122: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r105);
    goto CPyL95;
CPyL123: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r106);
    goto CPyL95;
CPyL124: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_all_packages);
    goto CPyL95;
CPyL125: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r115);
    goto CPyL95;
CPyL126: ;
    CPy_DECREF(cpy_r_r116);
    goto CPyL88;
CPyL127: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    goto CPyL95;
CPyL128: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r118);
    goto CPyL95;
CPyL129: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r121);
    goto CPyL95;
CPyL130: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    goto CPyL95;
CPyL131: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_subpackages);
    goto CPyL95;
CPyL132: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_all);
    CPy_DecRef(cpy_r_subpackages);
    CPy_DecRef(cpy_r_r129);
    goto CPyL95;
CPyL133: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_subpackages);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r130);
    goto CPyL95;
}

PyObject *CPyPy_moduleinspect___get_package_properties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"package_id", 0};
    static CPyArg_Parser parser = {"O:get_package_properties", kwlist, 0};
    PyObject *obj_package_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_package_id)) {
        return NULL;
    }
    PyObject *arg_package_id;
    if (likely(PyUnicode_Check(obj_package_id)))
        arg_package_id = obj_package_id;
    else {
        CPy_TypeError("str", obj_package_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_moduleinspect___get_package_properties(arg_package_id);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 46, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___worker(PyObject *cpy_r_tasks, PyObject *cpy_r_results, PyObject *cpy_r_sys_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_prop;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = PyObject_SetAttr(cpy_r_r0, cpy_r_r1, cpy_r_sys_path);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 91, CPyStatic_moduleinspect___globals);
        goto CPyL19;
    }
CPyL1: ;
    if (!1) goto CPyL18;
    cpy_r_r4 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r5[1] = {cpy_r_tasks};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 93, CPyStatic_moduleinspect___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "worker", 93, CPyStatic_moduleinspect___globals, "str", cpy_r_r7);
        goto CPyL19;
    }
    cpy_r_mod = cpy_r_r8;
    cpy_r_r9 = CPyDef_moduleinspect___get_package_properties(cpy_r_mod);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 95, CPyStatic_moduleinspect___globals);
        goto CPyL7;
    }
    cpy_r_prop = cpy_r_r9;
    goto CPyL16;
CPyL7: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = (PyObject *)CPyType_moduleinspect___InspectError;
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL12;
    cpy_r_r13 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_moduleinspect___InspectError))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "worker", 96, CPyStatic_moduleinspect___globals, "mypy.moduleinspect.InspectError", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_e = cpy_r_r14;
    cpy_r_r15 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 97, CPyStatic_moduleinspect___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyStatics[3905]; /* 'put' */
    PyObject *cpy_r_r17[2] = {cpy_r_results, cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 97, CPyStatic_moduleinspect___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL11: ;
    CPy_DecRef(cpy_r_r15);
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL1;
CPyL12: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL14;
    } else
        goto CPyL22;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r20 = CPy_KeepPropagating();
    if (!cpy_r_r20) goto CPyL19;
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r21 = CPyStatics[3905]; /* 'put' */
    PyObject *cpy_r_r22[2] = {cpy_r_results, cpy_r_prop};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "worker", 99, CPyStatic_moduleinspect___globals);
        goto CPyL23;
    } else
        goto CPyL24;
CPyL17: ;
    CPy_DECREF(cpy_r_prop);
    goto CPyL1;
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL20: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL11;
CPyL22: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL13;
CPyL23: ;
    CPy_DecRef(cpy_r_prop);
    goto CPyL19;
CPyL24: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL17;
}

PyObject *CPyPy_moduleinspect___worker(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tasks", "results", "sys_path", 0};
    static CPyArg_Parser parser = {"OOO:worker", kwlist, 0};
    PyObject *obj_tasks;
    PyObject *obj_results;
    PyObject *obj_sys_path;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tasks, &obj_results, &obj_sys_path)) {
        return NULL;
    }
    PyObject *arg_tasks = obj_tasks;
    PyObject *arg_results = obj_results;
    PyObject *arg_sys_path;
    if (likely(PyList_Check(obj_sys_path)))
        arg_sys_path = obj_sys_path;
    else {
        CPy_TypeError("list", obj_sys_path); 
        goto fail;
    }
    char retval = CPyDef_moduleinspect___worker(arg_tasks, arg_results, arg_sys_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "worker", 89, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___ModuleInspect_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_moduleinspect___ModuleInspect____start(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "__init__", 119, CPyStatic_moduleinspect___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_moduleinspect___ModuleInspect_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    char retval = CPyDef_moduleinspect___ModuleInspect_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "__init__", 118, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___ModuleInspect____start(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyStatic_moduleinspect___globals;
    cpy_r_r1 = CPyStatics[3906]; /* 'Queue' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 122, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 122, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    if (((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_tasks != NULL) {
        CPy_DECREF(((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_tasks);
    }
    ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_tasks = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 122, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r5 = CPyStatic_moduleinspect___globals;
    cpy_r_r6 = CPyStatics[3906]; /* 'Queue' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 123, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 123, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    if (((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_results != NULL) {
        CPy_DECREF(((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_results);
    }
    ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_results = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 123, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r10 = CPyStatic_moduleinspect___globals;
    cpy_r_r11 = CPyStatics[3907]; /* 'worker' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r13 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_tasks;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "_start", "ModuleInspect", "tasks", 124, CPyStatic_moduleinspect___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_results;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "_start", "ModuleInspect", "results", 124, CPyStatic_moduleinspect___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyModule_sys;
    cpy_r_r16 = CPyStatics[142]; /* 'path' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals);
        goto CPyL21;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals, "list", cpy_r_r17);
        goto CPyL21;
    }
    cpy_r_r19.f0 = cpy_r_r13;
    cpy_r_r19.f1 = cpy_r_r14;
    cpy_r_r19.f2 = cpy_r_r18;
    CPy_INCREF(cpy_r_r19.f0);
    CPy_INCREF(cpy_r_r19.f1);
    CPy_INCREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = CPyStatic_moduleinspect___globals;
    cpy_r_r21 = CPyStatics[1976]; /* 'Process' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals);
        goto CPyL22;
    }
    cpy_r_r23 = PyTuple_New(3);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3713 = cpy_r_r19.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp3713);
    PyObject *__tmp3714 = cpy_r_r19.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp3714);
    PyObject *__tmp3715 = cpy_r_r19.f2;
    PyTuple_SET_ITEM(cpy_r_r23, 2, __tmp3715);
    PyObject *cpy_r_r24[2] = {cpy_r_r12, cpy_r_r23};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = CPyStatics[9540]; /* ('target', 'args') */
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r25, 0, cpy_r_r26);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r23);
    if (((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc != NULL) {
        CPy_DECREF(((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc);
    }
    ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 124, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    cpy_r_r29 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "_start", "ModuleInspect", "proc", 125, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r29);
CPyL15: ;
    cpy_r_r30 = CPyStatics[1402]; /* 'start' */
    PyObject *cpy_r_r31[1] = {cpy_r_r29};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r32, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 125, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL16: ;
    CPy_DECREF(cpy_r_r29);
    if (((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter);
    }
    ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter = 0;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_start", 126, CPyStatic_moduleinspect___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL19: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r23);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL18;
CPyL25: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL16;
}

PyObject *CPyPy_moduleinspect___ModuleInspect____start(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_start", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    char retval = CPyDef_moduleinspect___ModuleInspect____start(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "_start", 121, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___ModuleInspect___close(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "close", "ModuleInspect", "proc", 130, CPyStatic_moduleinspect___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[3908]; /* 'terminate' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "close", 130, CPyStatic_moduleinspect___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL2: ;
    CPy_DECREF(cpy_r_r0);
    return 1;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
CPyL5: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL2;
}

PyObject *CPyPy_moduleinspect___ModuleInspect___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    char retval = CPyDef_moduleinspect___ModuleInspect___close(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "close", 128, CPyStatic_moduleinspect___globals);
    return NULL;
}

PyObject *CPyDef_moduleinspect___ModuleInspect___get_package_properties(PyObject *cpy_r_self, PyObject *cpy_r_package_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_tasks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "get_package_properties", "ModuleInspect", "tasks", 137, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[3905]; /* 'put' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_package_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 137, CPyStatic_moduleinspect___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL2: ;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r5 = CPyDef_moduleinspect___ModuleInspect____get_from_queue(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 138, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_res = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_res == cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL35;
    } else
        goto CPyL13;
CPyL4: ;
    cpy_r_r8 = CPyDef_moduleinspect___ModuleInspect____start(cpy_r_self);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 141, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_r9 = CPyStatics[163]; /* '' */
    cpy_r_r10 = CPyStatics[3909]; /* 'Process died when importing ' */
    cpy_r_r11 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r12 = CPyStatics[163]; /* '' */
    cpy_r_r13 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r14[3] = {cpy_r_r11, cpy_r_package_id, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals, "str", cpy_r_r16);
        goto CPyL32;
    }
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals);
        goto CPyL36;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r20 = cpy_r_r10;
    cpy_r_r21 = cpy_r_r20 + 8;
    *(PyObject * *)cpy_r_r21 = cpy_r_r17;
    cpy_r_r22 = PyUnicode_Join(cpy_r_r9, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_r23 = (PyObject *)CPyType_moduleinspect___InspectError;
    PyObject *cpy_r_r24[1] = {cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_moduleinspect___InspectError))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals, "mypy.moduleinspect.InspectError", cpy_r_r26);
        goto CPyL32;
    }
    CPy_Raise(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 142, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r28 = (PyObject *)&PyUnicode_Type;
    cpy_r_r29 = PyObject_IsInstance(cpy_r_res, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 143, CPyStatic_moduleinspect___globals);
        goto CPyL38;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL28;
    cpy_r_r32 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter;
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/moduleinspect.py", "get_package_properties", "ModuleInspect", "counter", 145, CPyStatic_moduleinspect___globals);
        goto CPyL38;
    }
CPyL16: ;
    cpy_r_r33 = cpy_r_r32 & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = CPyTagged_IsLt_(0, cpy_r_r32);
    if (cpy_r_r35) {
        goto CPyL39;
    } else
        goto CPyL23;
CPyL18: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 > (Py_ssize_t)0;
    if (cpy_r_r36) {
        goto CPyL39;
    } else
        goto CPyL23;
CPyL19: ;
    cpy_r_r37 = CPyDef_moduleinspect___ModuleInspect___close(cpy_r_self);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 148, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_r38 = CPyDef_moduleinspect___ModuleInspect____start(cpy_r_self);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 149, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_r39 = CPyDef_moduleinspect___ModuleInspect___get_package_properties(cpy_r_self, cpy_r_package_id);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 150, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    return cpy_r_r39;
CPyL23: ;
    if (likely(PyUnicode_Check(cpy_r_res)))
        cpy_r_r40 = cpy_r_res;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 151, CPyStatic_moduleinspect___globals, "str", cpy_r_res);
        goto CPyL32;
    }
    cpy_r_r41 = (PyObject *)CPyType_moduleinspect___InspectError;
    PyObject *cpy_r_r42[1] = {cpy_r_r40};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 151, CPyStatic_moduleinspect___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_moduleinspect___InspectError))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 151, CPyStatic_moduleinspect___globals, "mypy.moduleinspect.InspectError", cpy_r_r44);
        goto CPyL32;
    }
    CPy_Raise(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 151, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r46 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter;
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/moduleinspect.py", "get_package_properties", "ModuleInspect", "counter", 152, CPyStatic_moduleinspect___globals);
        goto CPyL38;
    }
CPyL29: ;
    cpy_r_r47 = CPyTagged_Add(cpy_r_r46, 2);
    if (((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter);
    }
    ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_counter = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 152, CPyStatic_moduleinspect___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_res) == CPyType_moduleinspect___ModuleProperties))
        cpy_r_r49 = cpy_r_res;
    else {
        CPy_TypeErrorTraceback("mypy/moduleinspect.py", "get_package_properties", 153, CPyStatic_moduleinspect___globals, "mypy.moduleinspect.ModuleProperties", cpy_r_res);
        goto CPyL32;
    }
    return cpy_r_r49;
CPyL32: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL32;
CPyL34: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL2;
CPyL35: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL4;
CPyL36: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL32;
CPyL39: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL19;
CPyL40: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL32;
}

PyObject *CPyPy_moduleinspect___ModuleInspect___get_package_properties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"package_id", 0};
    static CPyArg_Parser parser = {"O:get_package_properties", kwlist, 0};
    PyObject *obj_package_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_package_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    PyObject *arg_package_id;
    if (likely(PyUnicode_Check(obj_package_id)))
        arg_package_id = obj_package_id;
    else {
        CPy_TypeError("str", obj_package_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_moduleinspect___ModuleInspect___get_package_properties(arg_self, arg_package_id);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "get_package_properties", 132, CPyStatic_moduleinspect___globals);
    return NULL;
}

PyObject *CPyDef_moduleinspect___ModuleInspect____get_from_queue(PyObject *cpy_r_self) {
    CPyTagged cpy_r_max_iter;
    CPyTagged cpy_r_n;
    int64_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_max_iter = 1200;
    cpy_r_n = 0;
CPyL1: ;
    if (!1) goto CPyL28;
    cpy_r_r0 = cpy_r_n & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = CPyTagged_IsEq_(cpy_r_n, cpy_r_max_iter);
    if (cpy_r_r2) {
        goto CPyL29;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r3 = cpy_r_n == cpy_r_max_iter;
    if (cpy_r_r3) {
        goto CPyL29;
    } else
        goto CPyL9;
CPyL5: ;
    cpy_r_r4 = CPyStatics[3910]; /* 'Timeout waiting for subprocess' */
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 164, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 164, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 164, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r11 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_results;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "_get_from_queue", "ModuleInspect", "results", 166, CPyStatic_moduleinspect___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r11);
CPyL10: ;
    cpy_r_r12 = CPyStatics[308]; /* 'get' */
    cpy_r_r13 = PyFloat_FromDouble(0.05);
    PyObject *cpy_r_r14[2] = {cpy_r_r11, cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9541]; /* ('timeout',) */
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r15, 9223372036854775809ULL, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 166, CPyStatic_moduleinspect___globals);
        goto CPyL30;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    if (Py_TYPE(cpy_r_r17) == CPyType_moduleinspect___ModuleProperties)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL3716;
    if (PyUnicode_Check(cpy_r_r17))
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL3716;
    CPy_TypeError("union[mypy.moduleinspect.ModuleProperties, str]", cpy_r_r17); 
    cpy_r_r18 = NULL;
__LL3716: ;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 166, CPyStatic_moduleinspect___globals);
        goto CPyL13;
    } else
        goto CPyL31;
CPyL12: ;
    return cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = CPy_CatchError();
    cpy_r_r20 = CPyModule_queue;
    cpy_r_r21 = CPyStatics[3911]; /* 'Empty' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 167, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    cpy_r_r23 = CPy_ExceptionMatches(cpy_r_r22);
    CPy_DecRef(cpy_r_r22);
    if (!cpy_r_r23) goto CPyL33;
    cpy_r_r24 = ((mypy___moduleinspect___ModuleInspectObject *)cpy_r_self)->_proc;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/moduleinspect.py", "_get_from_queue", "ModuleInspect", "proc", 168, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r24);
CPyL16: ;
    cpy_r_r25 = CPyStatics[3912]; /* 'is_alive' */
    PyObject *cpy_r_r26[1] = {cpy_r_r24};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 168, CPyStatic_moduleinspect___globals);
        goto CPyL34;
    }
    CPy_DecRef(cpy_r_r24);
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DecRef(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 168, CPyStatic_moduleinspect___globals);
        goto CPyL32;
    }
    if (cpy_r_r29) {
        goto CPyL22;
    } else
        goto CPyL35;
CPyL19: ;
    cpy_r_r30 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL20: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL36;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    goto CPyL25;
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    cpy_r_r31 = CPy_KeepPropagating();
    if (!cpy_r_r31) goto CPyL27;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r32 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DecRef(cpy_r_n);
    cpy_r_n = cpy_r_r32;
    goto CPyL1;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_max_iter);
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL26;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_max_iter);
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL5;
CPyL30: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
CPyL31: ;
    CPyTagged_DECREF(cpy_r_max_iter);
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL12;
CPyL32: ;
    CPyTagged_DecRef(cpy_r_max_iter);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL23;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_max_iter);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL20;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_max_iter);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r24);
    goto CPyL23;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_max_iter);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL19;
CPyL36: ;
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    goto CPyL21;
}

PyObject *CPyPy_moduleinspect___ModuleInspect____get_from_queue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_get_from_queue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_moduleinspect___ModuleInspect____get_from_queue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "_get_from_queue", 155, CPyStatic_moduleinspect___globals);
    return NULL;
}

PyObject *CPyDef_moduleinspect___ModuleInspect_____enter__(PyObject *cpy_r_self) {
    CPy_INCREF(cpy_r_self);
    return cpy_r_self;
}

PyObject *CPyPy_moduleinspect___ModuleInspect_____enter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__enter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_moduleinspect___ModuleInspect_____enter__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/moduleinspect.py", "__enter__", 172, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect___ModuleInspect_____exit__(PyObject *cpy_r_self, PyObject *cpy_r_args) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_moduleinspect___ModuleInspect___close(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "__exit__", 176, CPyStatic_moduleinspect___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_moduleinspect___ModuleInspect_____exit__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__exit__", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, NULL)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_moduleinspect___ModuleInspect))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.moduleinspect.ModuleInspect", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_moduleinspect___ModuleInspect_____exit__(arg_self, arg_args);
    CPy_DECREF(obj_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_AddTraceback("mypy/moduleinspect.py", "__exit__", 175, CPyStatic_moduleinspect___globals);
    return NULL;
}

char CPyDef_moduleinspect_____top_level__(void) {
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
    PyObject **cpy_r_r12;
    PyObject **cpy_r_r13;
    PyObject **cpy_r_r14;
    void *cpy_r_r16;
    void *cpy_r_r18;
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
    char cpy_r_r36;
    PyObject *cpy_r_r37;
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
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", -1, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_moduleinspect___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 3, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_importlib;
    cpy_r_r10 = (PyObject **)&CPyModule_inspect;
    cpy_r_r11 = (PyObject **)&CPyModule_os;
    cpy_r_r12 = (PyObject **)&CPyModule_pkgutil;
    cpy_r_r13 = (PyObject **)&CPyModule_queue;
    cpy_r_r14 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r15[6] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14};
    cpy_r_r16 = (void *)&cpy_r_r15;
    int64_t cpy_r_r17[6] = {5, 6, 7, 8, 9, 10};
    cpy_r_r18 = (void *)&cpy_r_r17;
    cpy_r_r19 = CPyStatics[9546]; /* (('importlib', 'importlib', 'importlib'),
                                     ('inspect', 'inspect', 'inspect'), ('os', 'os', 'os'),
                                     ('pkgutil', 'pkgutil', 'pkgutil'),
                                     ('queue', 'queue', 'queue'), ('sys', 'sys', 'sys')) */
    cpy_r_r20 = CPyStatic_moduleinspect___globals;
    cpy_r_r21 = CPyStatics[3915]; /* 'mypy/moduleinspect.py' */
    cpy_r_r22 = CPyStatics[17]; /* '<module>' */
    cpy_r_r23 = CPyImport_ImportMany(cpy_r_r19, cpy_r_r16, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r18);
    if (!cpy_r_r23) goto CPyL24;
    cpy_r_r24 = CPyStatics[9547]; /* ('Process', 'Queue') */
    cpy_r_r25 = CPyStatics[3916]; /* 'multiprocessing' */
    cpy_r_r26 = CPyStatic_moduleinspect___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 11, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    CPyModule_multiprocessing = cpy_r_r27;
    CPy_INCREF(CPyModule_multiprocessing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9548]; /* ('ModuleType',) */
    cpy_r_r29 = CPyStatics[114]; /* 'types' */
    cpy_r_r30 = CPyStatic_moduleinspect___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 12, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    CPyModule_types = cpy_r_r31;
    CPy_INCREF(CPyModule_types);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyStatics[3918]; /* 'mypy.moduleinspect' */
    cpy_r_r34 = (PyObject *)CPyType_moduleinspect___ModuleProperties_template;
    cpy_r_r35 = CPyType_FromTemplate(cpy_r_r34, cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 15, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r36 = CPyDef_moduleinspect___ModuleProperties_trait_vtable_setup();
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", -1, CPyStatic_moduleinspect___globals);
        goto CPyL25;
    }
    cpy_r_r37 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r38 = CPyStatics[2329]; /* 'name' */
    cpy_r_r39 = CPyStatics[191]; /* 'file' */
    cpy_r_r40 = CPyStatics[142]; /* 'path' */
    cpy_r_r41 = CPyStatics[761]; /* 'all' */
    cpy_r_r42 = CPyStatics[3919]; /* 'is_c_module' */
    cpy_r_r43 = CPyStatics[3920]; /* 'subpackages' */
    cpy_r_r44 = PyTuple_Pack(6, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 15, CPyStatic_moduleinspect___globals);
        goto CPyL25;
    }
    cpy_r_r45 = PyObject_SetAttr(cpy_r_r35, cpy_r_r37, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 15, CPyStatic_moduleinspect___globals);
        goto CPyL25;
    }
    CPyType_moduleinspect___ModuleProperties = (PyTypeObject *)cpy_r_r35;
    CPy_INCREF(CPyType_moduleinspect___ModuleProperties);
    cpy_r_r47 = CPyStatic_moduleinspect___globals;
    cpy_r_r48 = CPyStatics[3921]; /* 'ModuleProperties' */
    cpy_r_r49 = CPyDict_SetItem(cpy_r_r47, cpy_r_r48, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 15, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r54 = PyTuple_Pack(1, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r55 = CPyStatics[3918]; /* 'mypy.moduleinspect' */
    cpy_r_r56 = (PyObject *)CPyType_moduleinspect___InspectError_template;
    cpy_r_r57 = CPyType_FromTemplate(cpy_r_r56, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r58 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r60 = PyTuple_Pack(1, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL26;
    }
    cpy_r_r61 = PyObject_SetAttr(cpy_r_r57, cpy_r_r58, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL26;
    }
    CPyType_moduleinspect___InspectError = (PyTypeObject *)cpy_r_r57;
    CPy_INCREF(CPyType_moduleinspect___InspectError);
    cpy_r_r63 = CPyStatic_moduleinspect___globals;
    cpy_r_r64 = CPyStatics[3922]; /* 'InspectError' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 42, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyStatics[3918]; /* 'mypy.moduleinspect' */
    cpy_r_r69 = (PyObject *)CPyType_moduleinspect___ModuleInspect_template;
    cpy_r_r70 = CPyType_FromTemplate(cpy_r_r69, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 102, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    cpy_r_r71 = CPyDef_moduleinspect___ModuleInspect_trait_vtable_setup();
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", -1, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    cpy_r_r72 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r73 = CPyStatics[3923]; /* 'tasks' */
    cpy_r_r74 = CPyStatics[3892]; /* 'results' */
    cpy_r_r75 = CPyStatics[3924]; /* 'proc' */
    cpy_r_r76 = CPyStatics[3925]; /* 'counter' */
    cpy_r_r77 = PyTuple_Pack(4, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 102, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r70, cpy_r_r72, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 102, CPyStatic_moduleinspect___globals);
        goto CPyL27;
    }
    CPyType_moduleinspect___ModuleInspect = (PyTypeObject *)cpy_r_r70;
    CPy_INCREF(CPyType_moduleinspect___ModuleInspect);
    cpy_r_r80 = CPyStatic_moduleinspect___globals;
    cpy_r_r81 = CPyStatics[3926]; /* 'ModuleInspect' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/moduleinspect.py", "<module>", 102, CPyStatic_moduleinspect___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL25: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL24;
}
