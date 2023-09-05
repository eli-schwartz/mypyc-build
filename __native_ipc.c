#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef ipc___IPCException_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef ipc___IPCException_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef ipc___IPCException_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ipc___IPCException_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IPCException",
    .tp_getset = ipc___IPCException_getseters,
    .tp_methods = ipc___IPCException_methods,
    .tp_members = ipc___IPCException_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_ipc___IPCException_template = &CPyType_ipc___IPCException_template_;


static int
ipc___IPCBase_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *ipc___IPCBase_setup(PyTypeObject *type);
PyObject *CPyDef_ipc___IPCBase(PyObject *cpy_r_name, PyObject *cpy_r_timeout);

static PyObject *
ipc___IPCBase_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ipc___IPCBase) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = ipc___IPCBase_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_ipc___IPCBase_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
ipc___IPCBase_traverse(mypy___ipc___IPCBaseObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_connection);
    Py_VISIT(self->_name);
    Py_VISIT(self->_timeout);
    return 0;
}

static int
ipc___IPCBase_clear(mypy___ipc___IPCBaseObject *self)
{
    Py_CLEAR(self->_connection);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_timeout);
    return 0;
}

static void
ipc___IPCBase_dealloc(mypy___ipc___IPCBaseObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ipc___IPCBase_dealloc)
    ipc___IPCBase_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem ipc___IPCBase_vtable[4];
static bool
CPyDef_ipc___IPCBase_trait_vtable_setup(void)
{
    CPyVTableItem ipc___IPCBase_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_ipc___IPCBase_____init__,
        (CPyVTableItem)CPyDef_ipc___IPCBase___read,
        (CPyVTableItem)CPyDef_ipc___IPCBase___write,
        (CPyVTableItem)CPyDef_ipc___IPCBase___close,
    };
    memcpy(ipc___IPCBase_vtable, ipc___IPCBase_vtable_scratch, sizeof(ipc___IPCBase_vtable));
    return 1;
}

static PyObject *
ipc___IPCBase_get_connection(mypy___ipc___IPCBaseObject *self, void *closure);
static int
ipc___IPCBase_set_connection(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure);
static PyObject *
ipc___IPCBase_get_name(mypy___ipc___IPCBaseObject *self, void *closure);
static int
ipc___IPCBase_set_name(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure);
static PyObject *
ipc___IPCBase_get_timeout(mypy___ipc___IPCBaseObject *self, void *closure);
static int
ipc___IPCBase_set_timeout(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure);

static PyGetSetDef ipc___IPCBase_getseters[] = {
    {"connection",
     (getter)ipc___IPCBase_get_connection, (setter)ipc___IPCBase_set_connection,
     NULL, NULL},
    {"name",
     (getter)ipc___IPCBase_get_name, (setter)ipc___IPCBase_set_name,
     NULL, NULL},
    {"timeout",
     (getter)ipc___IPCBase_get_timeout, (setter)ipc___IPCBase_set_timeout,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef ipc___IPCBase_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ipc___IPCBase_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_ipc___IPCBase___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"write",
     (PyCFunction)CPyPy_ipc___IPCBase___write,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_ipc___IPCBase___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ipc___IPCBase_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IPCBase",
    .tp_new = ipc___IPCBase_new,
    .tp_dealloc = (destructor)ipc___IPCBase_dealloc,
    .tp_traverse = (traverseproc)ipc___IPCBase_traverse,
    .tp_clear = (inquiry)ipc___IPCBase_clear,
    .tp_getset = ipc___IPCBase_getseters,
    .tp_methods = ipc___IPCBase_methods,
    .tp_init = ipc___IPCBase_init,
    .tp_basicsize = sizeof(mypy___ipc___IPCBaseObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_ipc___IPCBase_template = &CPyType_ipc___IPCBase_template_;

static PyObject *
ipc___IPCBase_setup(PyTypeObject *type)
{
    mypy___ipc___IPCBaseObject *self;
    self = (mypy___ipc___IPCBaseObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ipc___IPCBase_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_ipc___IPCBase(PyObject *cpy_r_name, PyObject *cpy_r_timeout)
{
    PyObject *self = ipc___IPCBase_setup(CPyType_ipc___IPCBase);
    if (self == NULL)
        return NULL;
    char res = CPyDef_ipc___IPCBase_____init__(self, cpy_r_name, cpy_r_timeout);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
ipc___IPCBase_get_connection(mypy___ipc___IPCBaseObject *self, void *closure)
{
    if (unlikely(self->_connection == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'connection' of 'IPCBase' undefined");
        return NULL;
    }
    CPy_INCREF(self->_connection);
    PyObject *retval = self->_connection;
    return retval;
}

static int
ipc___IPCBase_set_connection(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCBase' object attribute 'connection' cannot be deleted");
        return -1;
    }
    if (self->_connection != NULL) {
        CPy_DECREF(self->_connection);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_connection = tmp;
    return 0;
}

static PyObject *
ipc___IPCBase_get_name(mypy___ipc___IPCBaseObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'IPCBase' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
ipc___IPCBase_set_name(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCBase' object attribute 'name' cannot be deleted");
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
ipc___IPCBase_get_timeout(mypy___ipc___IPCBaseObject *self, void *closure)
{
    if (unlikely(self->_timeout == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'timeout' of 'IPCBase' undefined");
        return NULL;
    }
    CPy_INCREF(self->_timeout);
    PyObject *retval = self->_timeout;
    return retval;
}

static int
ipc___IPCBase_set_timeout(mypy___ipc___IPCBaseObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCBase' object attribute 'timeout' cannot be deleted");
        return -1;
    }
    if (self->_timeout != NULL) {
        CPy_DECREF(self->_timeout);
    }
    PyObject *tmp;
    if (CPyFloat_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2982;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2982;
    CPy_TypeError("float or None", value); 
    tmp = NULL;
__LL2982: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_timeout = tmp;
    return 0;
}

static int
ipc___IPCClient_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *ipc___IPCClient_setup(PyTypeObject *type);
PyObject *CPyDef_ipc___IPCClient(PyObject *cpy_r_name, PyObject *cpy_r_timeout);

static PyObject *
ipc___IPCClient_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ipc___IPCClient) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = ipc___IPCClient_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_ipc___IPCClient_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
ipc___IPCClient_traverse(mypy___ipc___IPCClientObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_connection);
    Py_VISIT(self->_name);
    Py_VISIT(self->_timeout);
    return 0;
}

static int
ipc___IPCClient_clear(mypy___ipc___IPCClientObject *self)
{
    Py_CLEAR(self->_connection);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_timeout);
    return 0;
}

static void
ipc___IPCClient_dealloc(mypy___ipc___IPCClientObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ipc___IPCClient_dealloc)
    ipc___IPCClient_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem ipc___IPCClient_vtable[7];
static bool
CPyDef_ipc___IPCClient_trait_vtable_setup(void)
{
    CPyVTableItem ipc___IPCClient_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_ipc___IPCClient_____init__,
        (CPyVTableItem)CPyDef_ipc___IPCBase___read,
        (CPyVTableItem)CPyDef_ipc___IPCBase___write,
        (CPyVTableItem)CPyDef_ipc___IPCBase___close,
        (CPyVTableItem)CPyDef_ipc___IPCClient_____init__,
        (CPyVTableItem)CPyDef_ipc___IPCClient_____enter__,
        (CPyVTableItem)CPyDef_ipc___IPCClient_____exit__,
    };
    memcpy(ipc___IPCClient_vtable, ipc___IPCClient_vtable_scratch, sizeof(ipc___IPCClient_vtable));
    return 1;
}


static PyGetSetDef ipc___IPCClient_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef ipc___IPCClient_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ipc___IPCClient_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__enter__",
     (PyCFunction)CPyPy_ipc___IPCClient_____enter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__exit__",
     (PyCFunction)CPyPy_ipc___IPCClient_____exit__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ipc___IPCClient_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IPCClient",
    .tp_new = ipc___IPCClient_new,
    .tp_dealloc = (destructor)ipc___IPCClient_dealloc,
    .tp_traverse = (traverseproc)ipc___IPCClient_traverse,
    .tp_clear = (inquiry)ipc___IPCClient_clear,
    .tp_getset = ipc___IPCClient_getseters,
    .tp_methods = ipc___IPCClient_methods,
    .tp_init = ipc___IPCClient_init,
    .tp_basicsize = sizeof(mypy___ipc___IPCClientObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_ipc___IPCClient_template = &CPyType_ipc___IPCClient_template_;

static PyObject *
ipc___IPCClient_setup(PyTypeObject *type)
{
    mypy___ipc___IPCClientObject *self;
    self = (mypy___ipc___IPCClientObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ipc___IPCClient_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_ipc___IPCClient(PyObject *cpy_r_name, PyObject *cpy_r_timeout)
{
    PyObject *self = ipc___IPCClient_setup(CPyType_ipc___IPCClient);
    if (self == NULL)
        return NULL;
    char res = CPyDef_ipc___IPCClient_____init__(self, cpy_r_name, cpy_r_timeout);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static int
ipc___IPCServer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *ipc___IPCServer_setup(PyTypeObject *type);
PyObject *CPyDef_ipc___IPCServer(PyObject *cpy_r_name, PyObject *cpy_r_timeout);

static PyObject *
ipc___IPCServer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_ipc___IPCServer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = ipc___IPCServer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_ipc___IPCServer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
ipc___IPCServer_traverse(mypy___ipc___IPCServerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_connection);
    Py_VISIT(self->_name);
    Py_VISIT(self->_timeout);
    if (CPyTagged_CheckLong(self->_BUFFER_SIZE)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_BUFFER_SIZE));
    }
    Py_VISIT(self->_sock_directory);
    Py_VISIT(self->_sock);
    return 0;
}

static int
ipc___IPCServer_clear(mypy___ipc___IPCServerObject *self)
{
    Py_CLEAR(self->_connection);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_timeout);
    if (CPyTagged_CheckLong(self->_BUFFER_SIZE)) {
        CPyTagged __tmp = self->_BUFFER_SIZE;
        self->_BUFFER_SIZE = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_sock_directory);
    Py_CLEAR(self->_sock);
    return 0;
}

static void
ipc___IPCServer_dealloc(mypy___ipc___IPCServerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, ipc___IPCServer_dealloc)
    ipc___IPCServer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem ipc___IPCServer_vtable[10];
static bool
CPyDef_ipc___IPCServer_trait_vtable_setup(void)
{
    CPyVTableItem ipc___IPCServer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_ipc___IPCServer_____init__,
        (CPyVTableItem)CPyDef_ipc___IPCBase___read,
        (CPyVTableItem)CPyDef_ipc___IPCBase___write,
        (CPyVTableItem)CPyDef_ipc___IPCBase___close,
        (CPyVTableItem)CPyDef_ipc___IPCServer_____init__,
        (CPyVTableItem)CPyDef_ipc___IPCServer_____enter__,
        (CPyVTableItem)CPyDef_ipc___IPCServer_____exit__,
        (CPyVTableItem)CPyDef_ipc___IPCServer___cleanup,
        (CPyVTableItem)CPyDef_ipc___IPCServer___connection_name,
        (CPyVTableItem)CPyDef_ipc___IPCServer_____mypyc_defaults_setup,
    };
    memcpy(ipc___IPCServer_vtable, ipc___IPCServer_vtable_scratch, sizeof(ipc___IPCServer_vtable));
    return 1;
}

static PyObject *
ipc___IPCServer_get_BUFFER_SIZE(mypy___ipc___IPCServerObject *self, void *closure);
static int
ipc___IPCServer_set_BUFFER_SIZE(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure);
static PyObject *
ipc___IPCServer_get_sock_directory(mypy___ipc___IPCServerObject *self, void *closure);
static int
ipc___IPCServer_set_sock_directory(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure);
static PyObject *
ipc___IPCServer_get_sock(mypy___ipc___IPCServerObject *self, void *closure);
static int
ipc___IPCServer_set_sock(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure);
static PyObject *
ipc___IPCServer_get_connection_name(mypy___ipc___IPCServerObject *self, void *closure);

static PyGetSetDef ipc___IPCServer_getseters[] = {
    {"BUFFER_SIZE",
     (getter)ipc___IPCServer_get_BUFFER_SIZE, (setter)ipc___IPCServer_set_BUFFER_SIZE,
     NULL, NULL},
    {"sock_directory",
     (getter)ipc___IPCServer_get_sock_directory, (setter)ipc___IPCServer_set_sock_directory,
     NULL, NULL},
    {"sock",
     (getter)ipc___IPCServer_get_sock, (setter)ipc___IPCServer_set_sock,
     NULL, NULL},
    {"connection_name",
     (getter)ipc___IPCServer_get_connection_name,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef ipc___IPCServer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_ipc___IPCServer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__enter__",
     (PyCFunction)CPyPy_ipc___IPCServer_____enter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__exit__",
     (PyCFunction)CPyPy_ipc___IPCServer_____exit__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cleanup",
     (PyCFunction)CPyPy_ipc___IPCServer___cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_ipc___IPCServer_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_ipc___IPCServer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IPCServer",
    .tp_new = ipc___IPCServer_new,
    .tp_dealloc = (destructor)ipc___IPCServer_dealloc,
    .tp_traverse = (traverseproc)ipc___IPCServer_traverse,
    .tp_clear = (inquiry)ipc___IPCServer_clear,
    .tp_getset = ipc___IPCServer_getseters,
    .tp_methods = ipc___IPCServer_methods,
    .tp_init = ipc___IPCServer_init,
    .tp_basicsize = sizeof(mypy___ipc___IPCServerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_ipc___IPCServer_template = &CPyType_ipc___IPCServer_template_;

static PyObject *
ipc___IPCServer_setup(PyTypeObject *type)
{
    mypy___ipc___IPCServerObject *self;
    self = (mypy___ipc___IPCServerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = ipc___IPCServer_vtable;
    self->_BUFFER_SIZE = CPY_INT_TAG;
    if (CPyDef_ipc___IPCServer_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_ipc___IPCServer(PyObject *cpy_r_name, PyObject *cpy_r_timeout)
{
    PyObject *self = ipc___IPCServer_setup(CPyType_ipc___IPCServer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_ipc___IPCServer_____init__(self, cpy_r_name, cpy_r_timeout);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
ipc___IPCServer_get_BUFFER_SIZE(mypy___ipc___IPCServerObject *self, void *closure)
{
    if (unlikely(self->_BUFFER_SIZE == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'BUFFER_SIZE' of 'IPCServer' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_BUFFER_SIZE);
    PyObject *retval = CPyTagged_StealAsObject(self->_BUFFER_SIZE);
    return retval;
}

static int
ipc___IPCServer_set_BUFFER_SIZE(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCServer' object attribute 'BUFFER_SIZE' cannot be deleted");
        return -1;
    }
    if (self->_BUFFER_SIZE != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_BUFFER_SIZE);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_BUFFER_SIZE = tmp;
    return 0;
}

static PyObject *
ipc___IPCServer_get_sock_directory(mypy___ipc___IPCServerObject *self, void *closure)
{
    if (unlikely(self->_sock_directory == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'sock_directory' of 'IPCServer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_sock_directory);
    PyObject *retval = self->_sock_directory;
    return retval;
}

static int
ipc___IPCServer_set_sock_directory(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCServer' object attribute 'sock_directory' cannot be deleted");
        return -1;
    }
    if (self->_sock_directory != NULL) {
        CPy_DECREF(self->_sock_directory);
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
    self->_sock_directory = tmp;
    return 0;
}

static PyObject *
ipc___IPCServer_get_sock(mypy___ipc___IPCServerObject *self, void *closure)
{
    if (unlikely(self->_sock == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'sock' of 'IPCServer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_sock);
    PyObject *retval = self->_sock;
    return retval;
}

static int
ipc___IPCServer_set_sock(mypy___ipc___IPCServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IPCServer' object attribute 'sock' cannot be deleted");
        return -1;
    }
    if (self->_sock != NULL) {
        CPy_DECREF(self->_sock);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_sock = tmp;
    return 0;
}

static PyObject *
ipc___IPCServer_get_connection_name(mypy___ipc___IPCServerObject *self, void *closure)
{
    return CPyDef_ipc___IPCServer___connection_name((PyObject *) self);
}
static PyMethodDef ipcmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ipcmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.ipc",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ipcmodule_methods
};

PyObject *CPyInit_mypy___ipc(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___ipc_internal) {
        Py_INCREF(CPyModule_mypy___ipc_internal);
        return CPyModule_mypy___ipc_internal;
    }
    CPyModule_mypy___ipc_internal = PyModule_Create(&ipcmodule);
    if (unlikely(CPyModule_mypy___ipc_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___ipc_internal, "__name__");
    CPyStatic_ipc___globals = PyModule_GetDict(CPyModule_mypy___ipc_internal);
    if (unlikely(CPyStatic_ipc___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ipc_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___ipc_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___ipc_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_ipc___IPCException);
    Py_CLEAR(CPyType_ipc___IPCBase);
    Py_CLEAR(CPyType_ipc___IPCClient);
    Py_CLEAR(CPyType_ipc___IPCServer);
    return NULL;
}

char CPyDef_ipc___IPCBase_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_timeout) {
    CPy_INCREF(cpy_r_name);
    ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_timeout);
    ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_timeout = cpy_r_timeout;
    return 1;
}

PyObject *CPyPy_ipc___IPCBase_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "timeout", 0};
    PyObject *obj_name;
    PyObject *obj_timeout;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_name, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_ipc___IPCClient) || (Py_TYPE(obj_self) == CPyType_ipc___IPCServer) || (Py_TYPE(obj_self) == CPyType_ipc___IPCBase)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCBase", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (CPyFloat_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2983;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2983;
    CPy_TypeError("float or None", obj_timeout); 
    goto fail;
__LL2983: ;
    char retval = CPyDef_ipc___IPCBase_____init__(arg_self, arg_name, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__init__", 47, CPyStatic_ipc___globals);
    return NULL;
}

PyObject *CPyDef_ipc___IPCBase___read(PyObject *cpy_r_self, CPyTagged cpy_r_size) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_bdata;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_more;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    if (cpy_r_size != CPY_INT_TAG) goto CPyL24;
    cpy_r_size = 200000;
CPyL2: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[2671]; /* 'bytearray' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 53, CPyStatic_ipc___globals);
        goto CPyL25;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 53, CPyStatic_ipc___globals);
        goto CPyL25;
    }
    cpy_r_bdata = cpy_r_r3;
    cpy_r_r4 = CPyModule_sys;
    cpy_r_r5 = CPyStatics[305]; /* 'platform' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 54, CPyStatic_ipc___globals);
        goto CPyL26;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "read", 54, CPyStatic_ipc___globals, "str", cpy_r_r6);
        goto CPyL26;
    }
    cpy_r_r8 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 54, CPyStatic_ipc___globals);
        goto CPyL26;
    }
CPyL9: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (cpy_r_r14) {
        goto CPyL27;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 55, CPyStatic_ipc___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL12: ;
    if (!1) goto CPyL28;
    cpy_r_r16 = ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_connection;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/ipc.py", "read", "IPCBase", "connection", 80, CPyStatic_ipc___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = CPyStatics[2672]; /* 'recv' */
    CPyTagged_INCREF(cpy_r_size);
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_size);
    PyObject *cpy_r_r19[2] = {cpy_r_r16, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r20, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 80, CPyStatic_ipc___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (likely(PyBytes_Check(cpy_r_r21) || PyByteArray_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "read", 80, CPyStatic_ipc___globals, "bytes", cpy_r_r21);
        goto CPyL26;
    }
    cpy_r_more = cpy_r_r22;
    cpy_r_r23 = PyObject_IsTrue(cpy_r_more);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 80, CPyStatic_ipc___globals);
        goto CPyL30;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL31;
    cpy_r_r26 = CPyStatics[1307]; /* 'extend' */
    PyObject *cpy_r_r27[2] = {cpy_r_bdata, cpy_r_more};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 83, CPyStatic_ipc___globals);
        goto CPyL30;
    } else
        goto CPyL32;
CPyL19: ;
    CPy_DECREF(cpy_r_more);
    goto CPyL12;
CPyL20: ;
    cpy_r_r30 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r31[1] = {cpy_r_bdata};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 1, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "read", 84, CPyStatic_ipc___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_bdata);
    if (likely(PyBytes_Check(cpy_r_r33) || PyByteArray_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "read", 84, CPyStatic_ipc___globals, "bytes", cpy_r_r33);
        goto CPyL23;
    }
    return cpy_r_r34;
CPyL23: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL24: ;
    CPyTagged_INCREF(cpy_r_size);
    goto CPyL2;
CPyL25: ;
    CPyTagged_DecRef(cpy_r_size);
    goto CPyL23;
CPyL26: ;
    CPyTagged_DecRef(cpy_r_size);
    CPy_DecRef(cpy_r_bdata);
    goto CPyL23;
CPyL27: ;
    CPyTagged_DECREF(cpy_r_size);
    CPy_DECREF(cpy_r_bdata);
    goto CPyL10;
CPyL28: ;
    CPyTagged_DECREF(cpy_r_size);
    goto CPyL20;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_size);
    CPy_DecRef(cpy_r_bdata);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL23;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_size);
    CPy_DecRef(cpy_r_bdata);
    CPy_DecRef(cpy_r_more);
    goto CPyL23;
CPyL31: ;
    CPyTagged_DECREF(cpy_r_size);
    CPy_DECREF(cpy_r_more);
    goto CPyL20;
CPyL32: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL19;
CPyL33: ;
    CPy_DecRef(cpy_r_bdata);
    goto CPyL23;
}

PyObject *CPyPy_ipc___IPCBase___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"size", 0};
    static CPyArg_Parser parser = {"|O:read", kwlist, 0};
    PyObject *obj_size = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_size)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_ipc___IPCClient) || (Py_TYPE(obj_self) == CPyType_ipc___IPCServer) || (Py_TYPE(obj_self) == CPyType_ipc___IPCBase)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCBase", obj_self); 
        goto fail;
    }
    CPyTagged arg_size;
    if (obj_size == NULL) {
        arg_size = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_size)))
        arg_size = CPyTagged_BorrowFromObject(obj_size);
    else {
        CPy_TypeError("int", obj_size); goto fail;
    }
    PyObject *retval = CPyDef_ipc___IPCBase___read(arg_self, arg_size);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "read", 51, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCBase___write(PyObject *cpy_r_self, PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 88, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "write", 88, CPyStatic_ipc___globals, "str", cpy_r_r2);
        goto CPyL16;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 88, CPyStatic_ipc___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 89, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_connection;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/ipc.py", "write", "IPCBase", "connection", 108, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyStatics[2673]; /* 'sendall' */
    PyObject *cpy_r_r14[2] = {cpy_r_r12, cpy_r_data};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 108, CPyStatic_ipc___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL10: ;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r17 = ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_connection;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/ipc.py", "write", "IPCBase", "connection", 109, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r17);
CPyL11: ;
    cpy_r_r18 = CPyModule_socket;
    cpy_r_r19 = CPyStatics[2674]; /* 'SHUT_WR' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 109, CPyStatic_ipc___globals);
        goto CPyL19;
    }
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 109, CPyStatic_ipc___globals);
        goto CPyL19;
    }
    cpy_r_r22 = CPyStatics[2675]; /* 'shutdown' */
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_r21);
    PyObject *cpy_r_r24[2] = {cpy_r_r17, cpy_r_r23};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r22, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "write", 109, CPyStatic_ipc___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL14: ;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r23);
    return 1;
CPyL16: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL17: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL10;
CPyL19: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r23);
    goto CPyL16;
CPyL21: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL14;
}

PyObject *CPyPy_ipc___IPCBase___write(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"data", 0};
    static CPyArg_Parser parser = {"O:write", kwlist, 0};
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_data)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_ipc___IPCClient) || (Py_TYPE(obj_self) == CPyType_ipc___IPCServer) || (Py_TYPE(obj_self) == CPyType_ipc___IPCBase)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCBase", obj_self); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyBytes_Check(obj_data) || PyByteArray_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("bytes", obj_data); 
        goto fail;
    }
    char retval = CPyDef_ipc___IPCBase___write(arg_self, arg_data);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "write", 86, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCBase___close(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "close", 112, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "close", 112, CPyStatic_ipc___globals, "str", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/ipc.py", "close", 112, CPyStatic_ipc___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/ipc.py", "close", 113, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___ipc___IPCBaseObject *)cpy_r_self)->_connection;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/ipc.py", "close", "IPCBase", "connection", 116, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyStatics[1927]; /* 'close' */
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "close", 116, CPyStatic_ipc___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL10: ;
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL12: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL13: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL10;
}

PyObject *CPyPy_ipc___IPCBase___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_ipc___IPCClient) || (Py_TYPE(obj_self) == CPyType_ipc___IPCServer) || (Py_TYPE(obj_self) == CPyType_ipc___IPCBase)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCBase", obj_self); 
        goto fail;
    }
    char retval = CPyDef_ipc___IPCBase___close(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "close", 111, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCClient_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_timeout) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPyDef_ipc___IPCBase_____init__(cpy_r_self, cpy_r_name, cpy_r_timeout);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 123, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[305]; /* 'platform' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 124, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__init__", 124, CPyStatic_ipc___globals, "str", cpy_r_r3);
        goto CPyL16;
    }
    cpy_r_r5 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 124, CPyStatic_ipc___globals);
        goto CPyL16;
    }
CPyL6: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (!cpy_r_r11) goto CPyL9;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 125, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r13 = CPyModule_socket;
    cpy_r_r14 = CPyStatics[2676]; /* 'AF_UNIX' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 154, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    cpy_r_r16 = CPyModule_socket;
    cpy_r_r17 = CPyStatics[2677]; /* 'socket' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 154, CPyStatic_ipc___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r15};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 154, CPyStatic_ipc___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r15);
    ((mypy___ipc___IPCClientObject *)cpy_r_self)->_connection = cpy_r_r21;
    cpy_r_r22 = ((mypy___ipc___IPCClientObject *)cpy_r_self)->_connection;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[2678]; /* 'settimeout' */
    PyObject *cpy_r_r24[2] = {cpy_r_r22, cpy_r_timeout};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 155, CPyStatic_ipc___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL13: ;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r27 = ((mypy___ipc___IPCClientObject *)cpy_r_self)->_connection;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[2679]; /* 'connect' */
    PyObject *cpy_r_r29[2] = {cpy_r_r27, cpy_r_name};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 156, CPyStatic_ipc___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL14: ;
    CPy_DECREF(cpy_r_r27);
    return 1;
CPyL16: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL17: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL16;
CPyL21: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL14;
}

PyObject *CPyPy_ipc___IPCClient_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "timeout", 0};
    PyObject *obj_name;
    PyObject *obj_timeout;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_name, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCClient))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCClient", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (CPyFloat_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2984;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2984;
    CPy_TypeError("float or None", obj_timeout); 
    goto fail;
__LL2984: ;
    char retval = CPyDef_ipc___IPCClient_____init__(arg_self, arg_name, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__init__", 122, CPyStatic_ipc___globals);
    return NULL;
}

PyObject *CPyDef_ipc___IPCClient_____enter__(PyObject *cpy_r_self) {
    CPy_INCREF(cpy_r_self);
    return cpy_r_self;
}

PyObject *CPyPy_ipc___IPCClient_____enter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__enter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCClient))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCClient", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_ipc___IPCClient_____enter__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__enter__", 158, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCClient_____exit__(PyObject *cpy_r_self, PyObject *cpy_r_exc_ty, PyObject *cpy_r_exc_val, PyObject *cpy_r_exc_tb) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_exc_ty != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_exc_ty = cpy_r_r0;
    CPy_DECREF(cpy_r_exc_ty);
CPyL2: ;
    if (cpy_r_exc_val != NULL) goto CPyL4;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_exc_val = cpy_r_r1;
    CPy_DECREF(cpy_r_exc_val);
CPyL4: ;
    if (cpy_r_exc_tb != NULL) goto CPyL6;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_exc_tb = cpy_r_r2;
    CPy_DECREF(cpy_r_exc_tb);
CPyL6: ;
    cpy_r_r3 = CPyDef_ipc___IPCBase___close(cpy_r_self);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "__exit__", 167, CPyStatic_ipc___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_ipc___IPCClient_____exit__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"exc_ty", "exc_val", "exc_tb", 0};
    static CPyArg_Parser parser = {"|OOO:__exit__", kwlist, 0};
    PyObject *obj_exc_ty = NULL;
    PyObject *obj_exc_val = NULL;
    PyObject *obj_exc_tb = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_exc_ty, &obj_exc_val, &obj_exc_tb)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCClient))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCClient", obj_self); 
        goto fail;
    }
    PyObject *arg_exc_ty;
    if (obj_exc_ty == NULL) {
        arg_exc_ty = NULL;
        goto __LL2985;
    }
    arg_exc_ty = obj_exc_ty;
    if (arg_exc_ty != NULL) goto __LL2985;
    if (obj_exc_ty == Py_None)
        arg_exc_ty = obj_exc_ty;
    else {
        arg_exc_ty = NULL;
    }
    if (arg_exc_ty != NULL) goto __LL2985;
    CPy_TypeError("object or None", obj_exc_ty); 
    goto fail;
__LL2985: ;
    PyObject *arg_exc_val;
    if (obj_exc_val == NULL) {
        arg_exc_val = NULL;
        goto __LL2986;
    }
    arg_exc_val = obj_exc_val;
    if (arg_exc_val != NULL) goto __LL2986;
    if (obj_exc_val == Py_None)
        arg_exc_val = obj_exc_val;
    else {
        arg_exc_val = NULL;
    }
    if (arg_exc_val != NULL) goto __LL2986;
    CPy_TypeError("object or None", obj_exc_val); 
    goto fail;
__LL2986: ;
    PyObject *arg_exc_tb;
    if (obj_exc_tb == NULL) {
        arg_exc_tb = NULL;
        goto __LL2987;
    }
    arg_exc_tb = obj_exc_tb;
    if (arg_exc_tb != NULL) goto __LL2987;
    if (obj_exc_tb == Py_None)
        arg_exc_tb = obj_exc_tb;
    else {
        arg_exc_tb = NULL;
    }
    if (arg_exc_tb != NULL) goto __LL2987;
    CPy_TypeError("object or None", obj_exc_tb); 
    goto fail;
__LL2987: ;
    char retval = CPyDef_ipc___IPCClient_____exit__(arg_self, arg_exc_ty, arg_exc_val, arg_exc_tb);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__exit__", 161, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCServer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_timeout) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
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
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_sockfile;
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
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    double cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    if (cpy_r_timeout != NULL) goto CPyL40;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_timeout = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[305]; /* 'platform' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 174, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__init__", 174, CPyStatic_ipc___globals, "str", cpy_r_r3);
        goto CPyL41;
    }
    cpy_r_r5 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 174, CPyStatic_ipc___globals);
        goto CPyL41;
    }
CPyL7: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (cpy_r_r11) {
        goto CPyL42;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 175, CPyStatic_ipc___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r13 = CPyStatics[2680]; /* '.sock' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_name, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 179, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    cpy_r_name = cpy_r_r14;
    cpy_r_r15 = CPyDef_ipc___IPCBase_____init__(cpy_r_self, cpy_r_name, cpy_r_timeout);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 180, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    cpy_r_r16 = CPyModule_sys;
    cpy_r_r17 = CPyStatics[305]; /* 'platform' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 181, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__init__", 181, CPyStatic_ipc___globals, "str", cpy_r_r18);
        goto CPyL41;
    }
    cpy_r_r20 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL18;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 181, CPyStatic_ipc___globals);
        goto CPyL41;
    }
CPyL18: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (cpy_r_r26) {
        goto CPyL43;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 182, CPyStatic_ipc___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r28 = CPyModule_tempfile;
    cpy_r_r29 = CPyStatics[2681]; /* 'mkdtemp' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 201, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r30, 0, 0, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 201, CPyStatic_ipc___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__init__", 201, CPyStatic_ipc___globals, "str", cpy_r_r31);
        goto CPyL41;
    }
    ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock_directory = cpy_r_r32;
    cpy_r_r33 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock_directory;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyModule_os;
    cpy_r_r36 = CPyStatics[142]; /* 'path' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 202, CPyStatic_ipc___globals);
        goto CPyL44;
    }
    cpy_r_r38 = CPyStatics[175]; /* 'join' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 202, CPyStatic_ipc___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r40[2] = {cpy_r_r33, cpy_r_r34};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 2, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 202, CPyStatic_ipc___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__init__", 202, CPyStatic_ipc___globals, "str", cpy_r_r42);
        goto CPyL41;
    }
    cpy_r_sockfile = cpy_r_r43;
    cpy_r_r44 = CPyModule_socket;
    cpy_r_r45 = CPyStatics[2676]; /* 'AF_UNIX' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 203, CPyStatic_ipc___globals);
        goto CPyL45;
    }
    cpy_r_r47 = CPyModule_socket;
    cpy_r_r48 = CPyStatics[2677]; /* 'socket' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 203, CPyStatic_ipc___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 203, CPyStatic_ipc___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r46);
    ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock = cpy_r_r52;
    cpy_r_r53 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[2682]; /* 'bind' */
    PyObject *cpy_r_r55[2] = {cpy_r_r53, cpy_r_sockfile};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_VectorcallMethod(cpy_r_r54, cpy_r_r56, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 204, CPyStatic_ipc___globals);
        goto CPyL47;
    } else
        goto CPyL48;
CPyL32: ;
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_sockfile);
    cpy_r_r58 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[2683]; /* 'listen' */
    cpy_r_r60 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r61[2] = {cpy_r_r58, cpy_r_r60};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r59, cpy_r_r62, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 205, CPyStatic_ipc___globals);
        goto CPyL49;
    } else
        goto CPyL50;
CPyL33: ;
    CPy_DECREF(cpy_r_r58);
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_timeout != cpy_r_r64;
    if (!cpy_r_r65) goto CPyL51;
    cpy_r_r66 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = PyFloat_AsDouble(cpy_r_timeout);
    if (cpy_r_r67 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_timeout); cpy_r_r67 = -113.0;
    }
    CPy_DECREF(cpy_r_timeout);
    cpy_r_r68 = cpy_r_r67 == -113.0;
    if (unlikely(cpy_r_r68)) goto CPyL36;
CPyL35: ;
    cpy_r_r69 = CPyStatics[2678]; /* 'settimeout' */
    cpy_r_r70 = PyFloat_FromDouble(cpy_r_r67);
    PyObject *cpy_r_r71[2] = {cpy_r_r66, cpy_r_r70};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r72, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 207, CPyStatic_ipc___globals);
        goto CPyL52;
    } else
        goto CPyL53;
CPyL36: ;
    cpy_r_r74 = PyErr_Occurred();
    if (unlikely(cpy_r_r74 != NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__init__", 207, CPyStatic_ipc___globals);
        goto CPyL54;
    } else
        goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r70);
CPyL38: ;
    return 1;
CPyL39: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL40: ;
    CPy_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL41: ;
    CPy_DecRef(cpy_r_timeout);
    goto CPyL39;
CPyL42: ;
    CPy_DECREF(cpy_r_timeout);
    goto CPyL8;
CPyL43: ;
    CPy_DECREF(cpy_r_timeout);
    goto CPyL19;
CPyL44: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_sockfile);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_sockfile);
    CPy_DecRef(cpy_r_r46);
    goto CPyL39;
CPyL47: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_sockfile);
    CPy_DecRef(cpy_r_r53);
    goto CPyL39;
CPyL48: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL32;
CPyL49: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_r58);
    goto CPyL39;
CPyL50: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL33;
CPyL51: ;
    CPy_DECREF(cpy_r_timeout);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r70);
    goto CPyL39;
CPyL53: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL37;
CPyL54: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL39;
}

PyObject *CPyPy_ipc___IPCServer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "timeout", 0};
    PyObject *obj_name;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_name, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCServer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = NULL;
        goto __LL2988;
    }
    if (CPyFloat_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2988;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL2988;
    CPy_TypeError("float or None", obj_timeout); 
    goto fail;
__LL2988: ;
    char retval = CPyDef_ipc___IPCServer_____init__(arg_self, arg_name, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__init__", 173, CPyStatic_ipc___globals);
    return NULL;
}

PyObject *CPyDef_ipc___IPCServer_____enter__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r__;
    tuple_T3OOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 210, CPyStatic_ipc___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__enter__", 210, CPyStatic_ipc___globals, "str", cpy_r_r2);
        goto CPyL23;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 210, CPyStatic_ipc___globals);
        goto CPyL23;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 213, CPyStatic_ipc___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[2684]; /* 'accept' */
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 232, CPyStatic_ipc___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r12);
    PyObject *__tmp2989;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 2))) {
        __tmp2989 = NULL;
        goto __LL2990;
    }
    __tmp2989 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    if (__tmp2989 == NULL) goto __LL2990;
    __tmp2989 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    if (__tmp2989 == NULL) goto __LL2990;
    __tmp2989 = cpy_r_r16;
__LL2990: ;
    if (unlikely(__tmp2989 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r16); cpy_r_r17 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2991 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPy_INCREF(__tmp2991);
        PyObject *__tmp2992;
        __tmp2992 = __tmp2991;
        cpy_r_r17.f0 = __tmp2992;
        PyObject *__tmp2993 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPy_INCREF(__tmp2993);
        PyObject *__tmp2994;
        __tmp2994 = __tmp2993;
        cpy_r_r17.f1 = __tmp2994;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 232, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    if (((mypy___ipc___IPCServerObject *)cpy_r_self)->_connection != NULL) {
        CPy_DECREF(((mypy___ipc___IPCServerObject *)cpy_r_self)->_connection);
    }
    ((mypy___ipc___IPCServerObject *)cpy_r_self)->_connection = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 232, CPyStatic_ipc___globals);
        goto CPyL25;
    }
    cpy_r_r20 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r17.f1);
    cpy_r__ = cpy_r_r20;
    CPy_DECREF(cpy_r__);
    goto CPyL22;
CPyL12: ;
    cpy_r_r21 = CPy_CatchError();
    cpy_r_r22 = CPyModule_socket;
    cpy_r_r23 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 233, CPyStatic_ipc___globals);
        goto CPyL20;
    }
    cpy_r_r25 = CPy_ExceptionMatches(cpy_r_r24);
    CPy_DecRef(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r26 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r26;
    CPy_DecRef(cpy_r_e);
    cpy_r_r27 = CPyStatics[2685]; /* 'The socket timed out' */
    cpy_r_r28 = (PyObject *)CPyType_ipc___IPCException;
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 234, CPyStatic_ipc___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_ipc___IPCException))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__enter__", 234, CPyStatic_ipc___globals, "mypy.ipc.IPCException", cpy_r_r31);
        goto CPyL20;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/ipc.py", "__enter__", 234, CPyStatic_ipc___globals);
        goto CPyL20;
    } else
        goto CPyL26;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL27;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL23;
    CPy_Unreachable();
CPyL22: ;
    CPy_INCREF(cpy_r_self);
    return cpy_r_self;
CPyL23: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL24: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL25: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    goto CPyL12;
CPyL26: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL17;
CPyL27: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL19;
}

PyObject *CPyPy_ipc___IPCServer_____enter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__enter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCServer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_ipc___IPCServer_____enter__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__enter__", 209, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCServer_____exit__(PyObject *cpy_r_self, PyObject *cpy_r_exc_ty, PyObject *cpy_r_exc_val, PyObject *cpy_r_exc_tb) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    if (cpy_r_exc_ty != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_exc_ty = cpy_r_r0;
    CPy_DECREF(cpy_r_exc_ty);
CPyL2: ;
    if (cpy_r_exc_val != NULL) goto CPyL4;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_exc_val = cpy_r_r1;
    CPy_DECREF(cpy_r_exc_val);
CPyL4: ;
    if (cpy_r_exc_tb != NULL) goto CPyL6;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_exc_tb = cpy_r_r2;
    CPy_DECREF(cpy_r_exc_tb);
CPyL6: ;
    cpy_r_r3 = CPyModule_sys;
    cpy_r_r4 = CPyStatics[305]; /* 'platform' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "__exit__", 243, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "__exit__", 243, CPyStatic_ipc___globals, "str", cpy_r_r5);
        goto CPyL16;
    }
    cpy_r_r7 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/ipc.py", "__exit__", 243, CPyStatic_ipc___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL14;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/ipc.py", "__exit__", 244, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r15 = CPyDef_ipc___IPCBase___close(cpy_r_self);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "__exit__", 253, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_ipc___IPCServer_____exit__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"exc_ty", "exc_val", "exc_tb", 0};
    static CPyArg_Parser parser = {"|OOO:__exit__", kwlist, 0};
    PyObject *obj_exc_ty = NULL;
    PyObject *obj_exc_val = NULL;
    PyObject *obj_exc_tb = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_exc_ty, &obj_exc_val, &obj_exc_tb)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCServer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj_self); 
        goto fail;
    }
    PyObject *arg_exc_ty;
    if (obj_exc_ty == NULL) {
        arg_exc_ty = NULL;
        goto __LL2995;
    }
    arg_exc_ty = obj_exc_ty;
    if (arg_exc_ty != NULL) goto __LL2995;
    if (obj_exc_ty == Py_None)
        arg_exc_ty = obj_exc_ty;
    else {
        arg_exc_ty = NULL;
    }
    if (arg_exc_ty != NULL) goto __LL2995;
    CPy_TypeError("object or None", obj_exc_ty); 
    goto fail;
__LL2995: ;
    PyObject *arg_exc_val;
    if (obj_exc_val == NULL) {
        arg_exc_val = NULL;
        goto __LL2996;
    }
    arg_exc_val = obj_exc_val;
    if (arg_exc_val != NULL) goto __LL2996;
    if (obj_exc_val == Py_None)
        arg_exc_val = obj_exc_val;
    else {
        arg_exc_val = NULL;
    }
    if (arg_exc_val != NULL) goto __LL2996;
    CPy_TypeError("object or None", obj_exc_val); 
    goto fail;
__LL2996: ;
    PyObject *arg_exc_tb;
    if (obj_exc_tb == NULL) {
        arg_exc_tb = NULL;
        goto __LL2997;
    }
    arg_exc_tb = obj_exc_tb;
    if (arg_exc_tb != NULL) goto __LL2997;
    if (obj_exc_tb == Py_None)
        arg_exc_tb = obj_exc_tb;
    else {
        arg_exc_tb = NULL;
    }
    if (arg_exc_tb != NULL) goto __LL2997;
    CPy_TypeError("object or None", obj_exc_tb); 
    goto fail;
__LL2997: ;
    char retval = CPyDef_ipc___IPCServer_____exit__(arg_self, arg_exc_ty, arg_exc_val, arg_exc_tb);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__exit__", 237, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCServer___cleanup(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "cleanup", 256, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "cleanup", 256, CPyStatic_ipc___globals, "str", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/ipc.py", "cleanup", 256, CPyStatic_ipc___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/ipc.py", "cleanup", 257, CPyStatic_ipc___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock_directory;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyModule_shutil;
    cpy_r_r14 = CPyStatics[2686]; /* 'rmtree' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "cleanup", 259, CPyStatic_ipc___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "cleanup", 259, CPyStatic_ipc___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL10: ;
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL12: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL13: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL10;
}

PyObject *CPyPy_ipc___IPCServer___cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cleanup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCServer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj_self); 
        goto fail;
    }
    char retval = CPyDef_ipc___IPCServer___cleanup(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "cleanup", 255, CPyStatic_ipc___globals);
    return NULL;
}

PyObject *CPyDef_ipc___IPCServer___connection_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 263, CPyStatic_ipc___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "connection_name", 263, CPyStatic_ipc___globals, "str", cpy_r_r2);
        goto CPyL15;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 263, CPyStatic_ipc___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 264, CPyStatic_ipc___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___ipc___IPCServerObject *)cpy_r_self)->_sock;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[2687]; /* 'getsockname' */
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 266, CPyStatic_ipc___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_name = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&PyUnicode_Type;
    cpy_r_r18 = PyObject_IsInstance(cpy_r_name, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 267, CPyStatic_ipc___globals);
        goto CPyL17;
    }
    cpy_r_r20 = cpy_r_r18;
    if (cpy_r_r20) {
        goto CPyL13;
    } else
        goto CPyL18;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/ipc.py", "connection_name", 267, CPyStatic_ipc___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL13: ;
    if (likely(PyUnicode_Check(cpy_r_name)))
        cpy_r_r22 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "connection_name", 268, CPyStatic_ipc___globals, "str", cpy_r_name);
        goto CPyL15;
    }
    return cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL11;
}

PyObject *CPyPy_ipc___IPCServer___connection_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":connection_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_ipc___IPCServer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_ipc___IPCServer___connection_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "connection_name", 262, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc___IPCServer_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypy___ipc___IPCServerObject *)cpy_r___mypyc_self__)->_BUFFER_SIZE = 131072;
    return 1;
}

PyObject *CPyPy_ipc___IPCServer_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_ipc___IPCServer))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.ipc.IPCServer", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_ipc___IPCServer_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/ipc.py", "__mypyc_defaults_setup", -1, CPyStatic_ipc___globals);
    return NULL;
}

char CPyDef_ipc_____top_level__(void) {
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
    void *cpy_r_r15;
    void *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
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
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject **cpy_r_r43;
    void *cpy_r_r45;
    void *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
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
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", -1, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_ipc___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 7, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_base64;
    cpy_r_r10 = (PyObject **)&CPyModule_os;
    cpy_r_r11 = (PyObject **)&CPyModule_shutil;
    cpy_r_r12 = (PyObject **)&CPyModule_sys;
    cpy_r_r13 = (PyObject **)&CPyModule_tempfile;
    PyObject **cpy_r_r14[5] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[5] = {9, 10, 11, 12, 13};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9441]; /* (('base64', 'base64', 'base64'), ('os', 'os', 'os'),
                                     ('shutil', 'shutil', 'shutil'), ('sys', 'sys', 'sys'),
                                     ('tempfile', 'tempfile', 'tempfile')) */
    cpy_r_r19 = CPyStatic_ipc___globals;
    cpy_r_r20 = CPyStatics[2690]; /* 'mypy/ipc.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL43;
    cpy_r_r23 = CPyStatics[9442]; /* ('TracebackType',) */
    cpy_r_r24 = CPyStatics[114]; /* 'types' */
    cpy_r_r25 = CPyStatic_ipc___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 14, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    CPyModule_types = cpy_r_r26;
    CPy_INCREF(CPyModule_types);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9443]; /* ('Callable', 'Final') */
    cpy_r_r28 = CPyStatics[21]; /* 'typing' */
    cpy_r_r29 = CPyStatic_ipc___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 15, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    CPyModule_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyModule_sys;
    cpy_r_r32 = CPyStatics[305]; /* 'platform' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 17, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/ipc.py", "<module>", 17, CPyStatic_ipc___globals, "str", cpy_r_r33);
        goto CPyL43;
    }
    cpy_r_r35 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL12;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL12;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 17, CPyStatic_ipc___globals);
        goto CPyL43;
    }
CPyL12: ;
    cpy_r_r41 = cpy_r_r36 == 0;
    if (!cpy_r_r41) goto CPyL15;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 19, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r43 = (PyObject **)&CPyModule_socket;
    PyObject **cpy_r_r44[1] = {cpy_r_r43};
    cpy_r_r45 = (void *)&cpy_r_r44;
    int64_t cpy_r_r46[1] = {29};
    cpy_r_r47 = (void *)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[9445]; /* (('socket', 'socket', 'socket'),) */
    cpy_r_r49 = CPyStatic_ipc___globals;
    cpy_r_r50 = CPyStatics[2690]; /* 'mypy/ipc.py' */
    cpy_r_r51 = CPyStatics[17]; /* '<module>' */
    cpy_r_r52 = CPyImport_ImportMany(cpy_r_r48, cpy_r_r45, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r47);
    if (!cpy_r_r52) goto CPyL43;
    cpy_r_r53 = CPyModule_socket;
    cpy_r_r54 = CPyStatics[2677]; /* 'socket' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 31, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r56 = CPyStatic_ipc___globals;
    cpy_r_r57 = CPyStatics[2692]; /* '_IPCHandle' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 31, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r60 = CPyModule_builtins;
    cpy_r_r61 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r63 = PyTuple_Pack(1, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r64 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r65 = (PyObject *)CPyType_ipc___IPCException_template;
    cpy_r_r66 = CPyType_FromTemplate(cpy_r_r65, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r67 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r68 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r69 = PyTuple_Pack(1, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL44;
    }
    cpy_r_r70 = PyObject_SetAttr(cpy_r_r66, cpy_r_r67, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL44;
    }
    CPyType_ipc___IPCException = (PyTypeObject *)cpy_r_r66;
    CPy_INCREF(CPyType_ipc___IPCException);
    cpy_r_r72 = CPyStatic_ipc___globals;
    cpy_r_r73 = CPyStatics[1776]; /* 'IPCException' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 34, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r78 = (PyObject *)CPyType_ipc___IPCBase_template;
    cpy_r_r79 = CPyType_FromTemplate(cpy_r_r78, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 38, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r80 = CPyDef_ipc___IPCBase_trait_vtable_setup();
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", -1, CPyStatic_ipc___globals);
        goto CPyL45;
    }
    cpy_r_r81 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r82 = CPyStatics[2693]; /* 'connection' */
    cpy_r_r83 = CPyStatics[2329]; /* 'name' */
    cpy_r_r84 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r85 = PyTuple_Pack(3, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 38, CPyStatic_ipc___globals);
        goto CPyL45;
    }
    cpy_r_r86 = PyObject_SetAttr(cpy_r_r79, cpy_r_r81, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 38, CPyStatic_ipc___globals);
        goto CPyL45;
    }
    CPyType_ipc___IPCBase = (PyTypeObject *)cpy_r_r79;
    CPy_INCREF(CPyType_ipc___IPCBase);
    cpy_r_r88 = CPyStatic_ipc___globals;
    cpy_r_r89 = CPyStatics[2019]; /* 'IPCBase' */
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r88, cpy_r_r89, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 38, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r92 = (PyObject *)CPyType_ipc___IPCBase;
    cpy_r_r93 = PyTuple_Pack(1, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 119, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r94 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r95 = (PyObject *)CPyType_ipc___IPCClient_template;
    cpy_r_r96 = CPyType_FromTemplate(cpy_r_r95, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 119, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r97 = CPyDef_ipc___IPCClient_trait_vtable_setup();
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", -1, CPyStatic_ipc___globals);
        goto CPyL46;
    }
    cpy_r_r98 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r99 = CPyStatics[2693]; /* 'connection' */
    cpy_r_r100 = CPyStatics[2329]; /* 'name' */
    cpy_r_r101 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r102 = PyTuple_Pack(3, cpy_r_r99, cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 119, CPyStatic_ipc___globals);
        goto CPyL46;
    }
    cpy_r_r103 = PyObject_SetAttr(cpy_r_r96, cpy_r_r98, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 119, CPyStatic_ipc___globals);
        goto CPyL46;
    }
    CPyType_ipc___IPCClient = (PyTypeObject *)cpy_r_r96;
    CPy_INCREF(CPyType_ipc___IPCClient);
    cpy_r_r105 = CPyStatic_ipc___globals;
    cpy_r_r106 = CPyStatics[1775]; /* 'IPCClient' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 119, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r109 = (PyObject *)CPyType_ipc___IPCBase;
    cpy_r_r110 = PyTuple_Pack(1, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 170, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r111 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r112 = (PyObject *)CPyType_ipc___IPCServer_template;
    cpy_r_r113 = CPyType_FromTemplate(cpy_r_r112, cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 170, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r114 = CPyDef_ipc___IPCServer_trait_vtable_setup();
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", -1, CPyStatic_ipc___globals);
        goto CPyL47;
    }
    cpy_r_r115 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r116 = CPyStatics[2694]; /* 'BUFFER_SIZE' */
    cpy_r_r117 = CPyStatics[2695]; /* 'sock_directory' */
    cpy_r_r118 = CPyStatics[2696]; /* 'sock' */
    cpy_r_r119 = CPyStatics[2693]; /* 'connection' */
    cpy_r_r120 = CPyStatics[2329]; /* 'name' */
    cpy_r_r121 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r122 = PyTuple_Pack(6, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 170, CPyStatic_ipc___globals);
        goto CPyL47;
    }
    cpy_r_r123 = PyObject_SetAttr(cpy_r_r113, cpy_r_r115, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 170, CPyStatic_ipc___globals);
        goto CPyL47;
    }
    CPyType_ipc___IPCServer = (PyTypeObject *)cpy_r_r113;
    CPy_INCREF(CPyType_ipc___IPCServer);
    cpy_r_r125 = CPyStatic_ipc___globals;
    cpy_r_r126 = CPyStatics[1996]; /* 'IPCServer' */
    cpy_r_r127 = CPyDict_SetItem(cpy_r_r125, cpy_r_r126, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 170, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    cpy_r_r129 = (PyObject *)CPyType_ipc___IPCServer;
    cpy_r_r130 = CPyStatics[2694]; /* 'BUFFER_SIZE' */
    cpy_r_r131 = CPyStatics[9031]; /* 65536 */
    cpy_r_r132 = PyObject_SetAttr(cpy_r_r129, cpy_r_r130, cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/ipc.py", "<module>", 171, CPyStatic_ipc___globals);
        goto CPyL43;
    }
    return 1;
CPyL43: ;
    cpy_r_r134 = 2;
    return cpy_r_r134;
CPyL44: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL43;
CPyL46: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL43;
}
