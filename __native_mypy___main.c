#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mypy___main___AugmentedHelpFormatter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef mypy___main___AugmentedHelpFormatter_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___AugmentedHelpFormatterObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___AugmentedHelpFormatterObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___AugmentedHelpFormatter_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___AugmentedHelpFormatter(PyObject *cpy_r_prog);

static PyObject *
mypy___main___AugmentedHelpFormatter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___AugmentedHelpFormatter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___main___AugmentedHelpFormatter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___main___AugmentedHelpFormatter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___main___AugmentedHelpFormatter_traverse(mypy___main___AugmentedHelpFormatterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___AugmentedHelpFormatterObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___AugmentedHelpFormatterObject))));
    return 0;
}

static int
mypy___main___AugmentedHelpFormatter_clear(mypy___main___AugmentedHelpFormatterObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___AugmentedHelpFormatterObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___AugmentedHelpFormatterObject))));
    return 0;
}

static void
mypy___main___AugmentedHelpFormatter_dealloc(mypy___main___AugmentedHelpFormatterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___AugmentedHelpFormatter_dealloc)
    mypy___main___AugmentedHelpFormatter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___AugmentedHelpFormatter_vtable[2];
static bool
CPyDef_mypy___main___AugmentedHelpFormatter_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___AugmentedHelpFormatter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___AugmentedHelpFormatter_____init__,
        (CPyVTableItem)CPyDef_mypy___main___AugmentedHelpFormatter____fill_text,
    };
    memcpy(mypy___main___AugmentedHelpFormatter_vtable, mypy___main___AugmentedHelpFormatter_vtable_scratch, sizeof(mypy___main___AugmentedHelpFormatter_vtable));
    return 1;
}


static PyGetSetDef mypy___main___AugmentedHelpFormatter_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___main___AugmentedHelpFormatter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___main___AugmentedHelpFormatter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_fill_text",
     (PyCFunction)CPyPy_mypy___main___AugmentedHelpFormatter____fill_text,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___AugmentedHelpFormatter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AugmentedHelpFormatter",
    .tp_new = mypy___main___AugmentedHelpFormatter_new,
    .tp_dealloc = (destructor)mypy___main___AugmentedHelpFormatter_dealloc,
    .tp_traverse = (traverseproc)mypy___main___AugmentedHelpFormatter_traverse,
    .tp_clear = (inquiry)mypy___main___AugmentedHelpFormatter_clear,
    .tp_getset = mypy___main___AugmentedHelpFormatter_getseters,
    .tp_methods = mypy___main___AugmentedHelpFormatter_methods,
    .tp_init = mypy___main___AugmentedHelpFormatter_init,
    .tp_members = mypy___main___AugmentedHelpFormatter_members,
    .tp_basicsize = sizeof(mypy___main___AugmentedHelpFormatterObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___AugmentedHelpFormatterObject),
    .tp_weaklistoffset = sizeof(mypy___main___AugmentedHelpFormatterObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___main___AugmentedHelpFormatter_template = &CPyType_mypy___main___AugmentedHelpFormatter_template_;

static PyObject *
mypy___main___AugmentedHelpFormatter_setup(PyTypeObject *type)
{
    mypy___main___AugmentedHelpFormatterObject *self;
    self = (mypy___main___AugmentedHelpFormatterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___AugmentedHelpFormatter_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___AugmentedHelpFormatter(PyObject *cpy_r_prog)
{
    PyObject *self = mypy___main___AugmentedHelpFormatter_setup(CPyType_mypy___main___AugmentedHelpFormatter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___main___AugmentedHelpFormatter_____init__(self, cpy_r_prog);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


PyMemberDef mypy___main___PythonExecutableInferenceError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef mypy___main___PythonExecutableInferenceError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___main___PythonExecutableInferenceError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___PythonExecutableInferenceError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "PythonExecutableInferenceError",
    .tp_getset = mypy___main___PythonExecutableInferenceError_getseters,
    .tp_methods = mypy___main___PythonExecutableInferenceError_methods,
    .tp_members = mypy___main___PythonExecutableInferenceError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_mypy___main___PythonExecutableInferenceError_template = &CPyType_mypy___main___PythonExecutableInferenceError_template_;


static int
mypy___main___CapturableArgumentParser_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef mypy___main___CapturableArgumentParser_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___CapturableArgumentParserObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___CapturableArgumentParserObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___CapturableArgumentParser_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___CapturableArgumentParser(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
mypy___main___CapturableArgumentParser_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___CapturableArgumentParser) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___main___CapturableArgumentParser_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___main___CapturableArgumentParser_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___main___CapturableArgumentParser_traverse(mypy___main___CapturableArgumentParserObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_stdout);
    Py_VISIT(self->_stderr);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___CapturableArgumentParserObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___CapturableArgumentParserObject))));
    return 0;
}

static int
mypy___main___CapturableArgumentParser_clear(mypy___main___CapturableArgumentParserObject *self)
{
    Py_CLEAR(self->_stdout);
    Py_CLEAR(self->_stderr);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___CapturableArgumentParserObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___CapturableArgumentParserObject))));
    return 0;
}

static void
mypy___main___CapturableArgumentParser_dealloc(mypy___main___CapturableArgumentParserObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___CapturableArgumentParser_dealloc)
    mypy___main___CapturableArgumentParser_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___CapturableArgumentParser_vtable[6];
static bool
CPyDef_mypy___main___CapturableArgumentParser_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___CapturableArgumentParser_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser_____init__,
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser___print_usage,
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser___print_help,
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser____print_message,
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser___exit,
        (CPyVTableItem)CPyDef_mypy___main___CapturableArgumentParser___error,
    };
    memcpy(mypy___main___CapturableArgumentParser_vtable, mypy___main___CapturableArgumentParser_vtable_scratch, sizeof(mypy___main___CapturableArgumentParser_vtable));
    return 1;
}

static PyObject *
mypy___main___CapturableArgumentParser_get_stdout(mypy___main___CapturableArgumentParserObject *self, void *closure);
static int
mypy___main___CapturableArgumentParser_set_stdout(mypy___main___CapturableArgumentParserObject *self, PyObject *value, void *closure);
static PyObject *
mypy___main___CapturableArgumentParser_get_stderr(mypy___main___CapturableArgumentParserObject *self, void *closure);
static int
mypy___main___CapturableArgumentParser_set_stderr(mypy___main___CapturableArgumentParserObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___main___CapturableArgumentParser_getseters[] = {
    {"stdout",
     (getter)mypy___main___CapturableArgumentParser_get_stdout, (setter)mypy___main___CapturableArgumentParser_set_stdout,
     NULL, NULL},
    {"stderr",
     (getter)mypy___main___CapturableArgumentParser_get_stderr, (setter)mypy___main___CapturableArgumentParser_set_stderr,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___main___CapturableArgumentParser_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"print_usage",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser___print_usage,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"print_help",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser___print_help,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_print_message",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser____print_message,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"exit",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser___exit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"error",
     (PyCFunction)CPyPy_mypy___main___CapturableArgumentParser___error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___CapturableArgumentParser_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CapturableArgumentParser",
    .tp_new = mypy___main___CapturableArgumentParser_new,
    .tp_dealloc = (destructor)mypy___main___CapturableArgumentParser_dealloc,
    .tp_traverse = (traverseproc)mypy___main___CapturableArgumentParser_traverse,
    .tp_clear = (inquiry)mypy___main___CapturableArgumentParser_clear,
    .tp_getset = mypy___main___CapturableArgumentParser_getseters,
    .tp_methods = mypy___main___CapturableArgumentParser_methods,
    .tp_init = mypy___main___CapturableArgumentParser_init,
    .tp_members = mypy___main___CapturableArgumentParser_members,
    .tp_basicsize = sizeof(mypy___main___CapturableArgumentParserObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___CapturableArgumentParserObject),
    .tp_weaklistoffset = sizeof(mypy___main___CapturableArgumentParserObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___main___CapturableArgumentParser_template = &CPyType_mypy___main___CapturableArgumentParser_template_;

static PyObject *
mypy___main___CapturableArgumentParser_setup(PyTypeObject *type)
{
    mypy___main___CapturableArgumentParserObject *self;
    self = (mypy___main___CapturableArgumentParserObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___CapturableArgumentParser_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___CapturableArgumentParser(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = mypy___main___CapturableArgumentParser_setup(CPyType_mypy___main___CapturableArgumentParser);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___main___CapturableArgumentParser_____init__(self, cpy_r_args, cpy_r_kwargs);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___main___CapturableArgumentParser_get_stdout(mypy___main___CapturableArgumentParserObject *self, void *closure)
{
    if (unlikely(self->_stdout == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stdout' of 'CapturableArgumentParser' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stdout);
    PyObject *retval = self->_stdout;
    return retval;
}

static int
mypy___main___CapturableArgumentParser_set_stdout(mypy___main___CapturableArgumentParserObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CapturableArgumentParser' object attribute 'stdout' cannot be deleted");
        return -1;
    }
    if (self->_stdout != NULL) {
        CPy_DECREF(self->_stdout);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_stdout = tmp;
    return 0;
}

static PyObject *
mypy___main___CapturableArgumentParser_get_stderr(mypy___main___CapturableArgumentParserObject *self, void *closure)
{
    if (unlikely(self->_stderr == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stderr' of 'CapturableArgumentParser' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stderr);
    PyObject *retval = self->_stderr;
    return retval;
}

static int
mypy___main___CapturableArgumentParser_set_stderr(mypy___main___CapturableArgumentParserObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CapturableArgumentParser' object attribute 'stderr' cannot be deleted");
        return -1;
    }
    if (self->_stderr != NULL) {
        CPy_DECREF(self->_stderr);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_stderr = tmp;
    return 0;
}

static int
mypy___main___CapturableVersionAction_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef mypy___main___CapturableVersionAction_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___CapturableVersionActionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___CapturableVersionActionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___CapturableVersionAction_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___CapturableVersionAction(PyObject *cpy_r_option_strings, PyObject *cpy_r_version, PyObject *cpy_r_dest, PyObject *cpy_r_default, PyObject *cpy_r_help, PyObject *cpy_r_stdout);

static PyObject *
mypy___main___CapturableVersionAction_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___CapturableVersionAction) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___main___CapturableVersionAction_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___main___CapturableVersionAction_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___main___CapturableVersionAction_traverse(mypy___main___CapturableVersionActionObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_version);
    Py_VISIT(self->_stdout);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___CapturableVersionActionObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___CapturableVersionActionObject))));
    return 0;
}

static int
mypy___main___CapturableVersionAction_clear(mypy___main___CapturableVersionActionObject *self)
{
    Py_CLEAR(self->_version);
    Py_CLEAR(self->_stdout);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___CapturableVersionActionObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___CapturableVersionActionObject))));
    return 0;
}

static void
mypy___main___CapturableVersionAction_dealloc(mypy___main___CapturableVersionActionObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___CapturableVersionAction_dealloc)
    mypy___main___CapturableVersionAction_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___CapturableVersionAction_vtable[2];
static bool
CPyDef_mypy___main___CapturableVersionAction_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___CapturableVersionAction_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___CapturableVersionAction_____init__,
        (CPyVTableItem)CPyDef_mypy___main___CapturableVersionAction_____call__,
    };
    memcpy(mypy___main___CapturableVersionAction_vtable, mypy___main___CapturableVersionAction_vtable_scratch, sizeof(mypy___main___CapturableVersionAction_vtable));
    return 1;
}

static PyObject *
mypy___main___CapturableVersionAction_get_version(mypy___main___CapturableVersionActionObject *self, void *closure);
static int
mypy___main___CapturableVersionAction_set_version(mypy___main___CapturableVersionActionObject *self, PyObject *value, void *closure);
static PyObject *
mypy___main___CapturableVersionAction_get_stdout(mypy___main___CapturableVersionActionObject *self, void *closure);
static int
mypy___main___CapturableVersionAction_set_stdout(mypy___main___CapturableVersionActionObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___main___CapturableVersionAction_getseters[] = {
    {"version",
     (getter)mypy___main___CapturableVersionAction_get_version, (setter)mypy___main___CapturableVersionAction_set_version,
     NULL, NULL},
    {"stdout",
     (getter)mypy___main___CapturableVersionAction_get_stdout, (setter)mypy___main___CapturableVersionAction_set_stdout,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___main___CapturableVersionAction_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___main___CapturableVersionAction_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__call__",
     (PyCFunction)CPyPy_mypy___main___CapturableVersionAction_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___CapturableVersionAction_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CapturableVersionAction",
    .tp_new = mypy___main___CapturableVersionAction_new,
    .tp_dealloc = (destructor)mypy___main___CapturableVersionAction_dealloc,
    .tp_traverse = (traverseproc)mypy___main___CapturableVersionAction_traverse,
    .tp_clear = (inquiry)mypy___main___CapturableVersionAction_clear,
    .tp_getset = mypy___main___CapturableVersionAction_getseters,
    .tp_methods = mypy___main___CapturableVersionAction_methods,
    .tp_call = PyVectorcall_Call,
    .tp_init = mypy___main___CapturableVersionAction_init,
    .tp_members = mypy___main___CapturableVersionAction_members,
    .tp_basicsize = sizeof(mypy___main___CapturableVersionActionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___CapturableVersionActionObject),
    .tp_weaklistoffset = sizeof(mypy___main___CapturableVersionActionObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___main___CapturableVersionActionObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___main___CapturableVersionAction_template = &CPyType_mypy___main___CapturableVersionAction_template_;

static PyObject *
mypy___main___CapturableVersionAction_setup(PyTypeObject *type)
{
    mypy___main___CapturableVersionActionObject *self;
    self = (mypy___main___CapturableVersionActionObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___CapturableVersionAction_vtable;
    self->vectorcall = CPyPy_mypy___main___CapturableVersionAction_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___CapturableVersionAction(PyObject *cpy_r_option_strings, PyObject *cpy_r_version, PyObject *cpy_r_dest, PyObject *cpy_r_default, PyObject *cpy_r_help, PyObject *cpy_r_stdout)
{
    PyObject *self = mypy___main___CapturableVersionAction_setup(CPyType_mypy___main___CapturableVersionAction);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___main___CapturableVersionAction_____init__(self, cpy_r_option_strings, cpy_r_version, cpy_r_dest, cpy_r_default, cpy_r_help, cpy_r_stdout);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___main___CapturableVersionAction_get_version(mypy___main___CapturableVersionActionObject *self, void *closure)
{
    if (unlikely(self->_version == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'version' of 'CapturableVersionAction' undefined");
        return NULL;
    }
    CPy_INCREF(self->_version);
    PyObject *retval = self->_version;
    return retval;
}

static int
mypy___main___CapturableVersionAction_set_version(mypy___main___CapturableVersionActionObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CapturableVersionAction' object attribute 'version' cannot be deleted");
        return -1;
    }
    if (self->_version != NULL) {
        CPy_DECREF(self->_version);
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
    self->_version = tmp;
    return 0;
}

static PyObject *
mypy___main___CapturableVersionAction_get_stdout(mypy___main___CapturableVersionActionObject *self, void *closure)
{
    if (unlikely(self->_stdout == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stdout' of 'CapturableVersionAction' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stdout);
    PyObject *retval = self->_stdout;
    return retval;
}

static int
mypy___main___CapturableVersionAction_set_stdout(mypy___main___CapturableVersionActionObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CapturableVersionAction' object attribute 'stdout' cannot be deleted");
        return -1;
    }
    if (self->_stdout != NULL) {
        CPy_DECREF(self->_stdout);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_stdout = tmp;
    return 0;
}

static PyObject *mypy___main___run_build_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___run_build_env(void);

static PyObject *
mypy___main___run_build_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___run_build_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___main___run_build_env_setup(type);
}

static int
mypy___main___run_build_env_traverse(mypy___main___run_build_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_options);
    Py_VISIT(self->_stdout);
    Py_VISIT(self->_stderr);
    Py_VISIT(self->_formatter);
    Py_VISIT(self->_messages);
    Py_VISIT(self->_flush_errors);
    Py_VISIT(self->_sources);
    Py_VISIT(self->_fscache);
    return 0;
}

static int
mypy___main___run_build_env_clear(mypy___main___run_build_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_stdout);
    Py_CLEAR(self->_stderr);
    Py_CLEAR(self->_formatter);
    Py_CLEAR(self->_messages);
    Py_CLEAR(self->_flush_errors);
    Py_CLEAR(self->_sources);
    Py_CLEAR(self->_fscache);
    return 0;
}

static void
mypy___main___run_build_env_dealloc(mypy___main___run_build_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___run_build_env_dealloc)
    mypy___main___run_build_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___run_build_env_vtable[1];
static bool
CPyDef_mypy___main___run_build_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___run_build_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___main___run_build_env_vtable, mypy___main___run_build_env_vtable_scratch, sizeof(mypy___main___run_build_env_vtable));
    return 1;
}

static PyMethodDef mypy___main___run_build_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___run_build_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "run_build_env",
    .tp_new = mypy___main___run_build_env_new,
    .tp_dealloc = (destructor)mypy___main___run_build_env_dealloc,
    .tp_traverse = (traverseproc)mypy___main___run_build_env_traverse,
    .tp_clear = (inquiry)mypy___main___run_build_env_clear,
    .tp_methods = mypy___main___run_build_env_methods,
    .tp_basicsize = sizeof(mypy___main___run_build_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___main___run_build_env_template = &CPyType_mypy___main___run_build_env_template_;

static PyObject *
mypy___main___run_build_env_setup(PyTypeObject *type)
{
    mypy___main___run_build_envObject *self;
    self = (mypy___main___run_build_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___run_build_env_vtable;
    self->bitmap = 0;
    self->_t0 = -113.0;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___run_build_env(void)
{
    PyObject *self = mypy___main___run_build_env_setup(CPyType_mypy___main___run_build_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___main___flush_errors_run_build_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___main___flush_errors_run_build_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___main___flush_errors_run_build_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___flush_errors_run_build_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___flush_errors_run_build_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___flush_errors_run_build_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___flush_errors_run_build_obj(void);

static PyObject *
mypy___main___flush_errors_run_build_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___flush_errors_run_build_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___main___flush_errors_run_build_obj_setup(type);
}

static int
mypy___main___flush_errors_run_build_obj_traverse(mypy___main___flush_errors_run_build_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___flush_errors_run_build_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___flush_errors_run_build_objObject))));
    return 0;
}

static int
mypy___main___flush_errors_run_build_obj_clear(mypy___main___flush_errors_run_build_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___flush_errors_run_build_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___flush_errors_run_build_objObject))));
    return 0;
}

static void
mypy___main___flush_errors_run_build_obj_dealloc(mypy___main___flush_errors_run_build_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___flush_errors_run_build_obj_dealloc)
    mypy___main___flush_errors_run_build_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___flush_errors_run_build_obj_vtable[2];
static bool
CPyDef_mypy___main___flush_errors_run_build_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___flush_errors_run_build_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___flush_errors_run_build_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___main___flush_errors_run_build_obj_____get__,
    };
    memcpy(mypy___main___flush_errors_run_build_obj_vtable, mypy___main___flush_errors_run_build_obj_vtable_scratch, sizeof(mypy___main___flush_errors_run_build_obj_vtable));
    return 1;
}

static PyMethodDef mypy___main___flush_errors_run_build_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___main___flush_errors_run_build_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___main___flush_errors_run_build_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___flush_errors_run_build_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "flush_errors_run_build_obj",
    .tp_new = mypy___main___flush_errors_run_build_obj_new,
    .tp_dealloc = (destructor)mypy___main___flush_errors_run_build_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___main___flush_errors_run_build_obj_traverse,
    .tp_clear = (inquiry)mypy___main___flush_errors_run_build_obj_clear,
    .tp_methods = mypy___main___flush_errors_run_build_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___main___flush_errors_run_build_obj,
    .tp_members = mypy___main___flush_errors_run_build_obj_members,
    .tp_basicsize = sizeof(mypy___main___flush_errors_run_build_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___flush_errors_run_build_objObject),
    .tp_weaklistoffset = sizeof(mypy___main___flush_errors_run_build_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___main___flush_errors_run_build_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___main___flush_errors_run_build_obj_template = &CPyType_mypy___main___flush_errors_run_build_obj_template_;

static PyObject *
mypy___main___flush_errors_run_build_obj_setup(PyTypeObject *type)
{
    mypy___main___flush_errors_run_build_objObject *self;
    self = (mypy___main___flush_errors_run_build_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___flush_errors_run_build_obj_vtable;
    self->vectorcall = CPyPy_mypy___main___flush_errors_run_build_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___flush_errors_run_build_obj(void)
{
    PyObject *self = mypy___main___flush_errors_run_build_obj_setup(CPyType_mypy___main___flush_errors_run_build_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *mypy___main___process_options_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___process_options_env(void);

static PyObject *
mypy___main___process_options_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___process_options_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___main___process_options_env_setup(type);
}

static int
mypy___main___process_options_env_traverse(mypy___main___process_options_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_options);
    Py_VISIT(self->_parser);
    Py_VISIT(self->_strict_flag_assignments);
    Py_VISIT(self->_strict_flag_names);
    Py_VISIT(self->_add_invertible_flag);
    Py_VISIT(self->_set_strict_flags);
    Py_VISIT(self->_args);
    Py_VISIT(self->_stdout);
    Py_VISIT(self->_stderr);
    Py_VISIT(self->_fscache);
    Py_VISIT(self->_program);
    Py_VISIT(self->_header);
    Py_VISIT(self->_general_group);
    Py_VISIT(self->_compilation_status);
    Py_VISIT(self->_config_group);
    Py_VISIT(self->_imports_group);
    Py_VISIT(self->_platform_group);
    Py_VISIT(self->_disallow_any_group);
    Py_VISIT(self->_untyped_group);
    Py_VISIT(self->_none_group);
    Py_VISIT(self->_lint_group);
    Py_VISIT(self->_strictness_group);
    Py_VISIT(self->_strict_help);
    Py_VISIT(self->_error_group);
    Py_VISIT(self->_incremental_group);
    Py_VISIT(self->_internals_group);
    Py_VISIT(self->_report_group);
    Py_VISIT(self->_report_type);
    Py_VISIT(self->_other_group);
    Py_VISIT(self->_code_group);
    Py_VISIT(self->_dummy);
    Py_VISIT(self->_config_file);
    return 0;
}

static int
mypy___main___process_options_env_clear(mypy___main___process_options_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_parser);
    Py_CLEAR(self->_strict_flag_assignments);
    Py_CLEAR(self->_strict_flag_names);
    Py_CLEAR(self->_add_invertible_flag);
    Py_CLEAR(self->_set_strict_flags);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_stdout);
    Py_CLEAR(self->_stderr);
    Py_CLEAR(self->_fscache);
    Py_CLEAR(self->_program);
    Py_CLEAR(self->_header);
    Py_CLEAR(self->_general_group);
    Py_CLEAR(self->_compilation_status);
    Py_CLEAR(self->_config_group);
    Py_CLEAR(self->_imports_group);
    Py_CLEAR(self->_platform_group);
    Py_CLEAR(self->_disallow_any_group);
    Py_CLEAR(self->_untyped_group);
    Py_CLEAR(self->_none_group);
    Py_CLEAR(self->_lint_group);
    Py_CLEAR(self->_strictness_group);
    Py_CLEAR(self->_strict_help);
    Py_CLEAR(self->_error_group);
    Py_CLEAR(self->_incremental_group);
    Py_CLEAR(self->_internals_group);
    Py_CLEAR(self->_report_group);
    Py_CLEAR(self->_report_type);
    Py_CLEAR(self->_other_group);
    Py_CLEAR(self->_code_group);
    Py_CLEAR(self->_dummy);
    Py_CLEAR(self->_config_file);
    return 0;
}

static void
mypy___main___process_options_env_dealloc(mypy___main___process_options_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___process_options_env_dealloc)
    mypy___main___process_options_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___process_options_env_vtable[1];
static bool
CPyDef_mypy___main___process_options_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___process_options_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___main___process_options_env_vtable, mypy___main___process_options_env_vtable_scratch, sizeof(mypy___main___process_options_env_vtable));
    return 1;
}

static PyMethodDef mypy___main___process_options_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___process_options_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "process_options_env",
    .tp_new = mypy___main___process_options_env_new,
    .tp_dealloc = (destructor)mypy___main___process_options_env_dealloc,
    .tp_traverse = (traverseproc)mypy___main___process_options_env_traverse,
    .tp_clear = (inquiry)mypy___main___process_options_env_clear,
    .tp_methods = mypy___main___process_options_env_methods,
    .tp_basicsize = sizeof(mypy___main___process_options_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___main___process_options_env_template = &CPyType_mypy___main___process_options_env_template_;

static PyObject *
mypy___main___process_options_env_setup(PyTypeObject *type)
{
    mypy___main___process_options_envObject *self;
    self = (mypy___main___process_options_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___process_options_env_vtable;
    self->_strict_option_set = 2;
    self->_require_targets = 2;
    self->_server_options = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___process_options_env(void)
{
    PyObject *self = mypy___main___process_options_env_setup(CPyType_mypy___main___process_options_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___main___add_invertible_flag_process_options_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___main___add_invertible_flag_process_options_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___main___add_invertible_flag_process_options_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___add_invertible_flag_process_options_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___add_invertible_flag_process_options_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___add_invertible_flag_process_options_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___add_invertible_flag_process_options_obj(void);

static PyObject *
mypy___main___add_invertible_flag_process_options_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___add_invertible_flag_process_options_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___main___add_invertible_flag_process_options_obj_setup(type);
}

static int
mypy___main___add_invertible_flag_process_options_obj_traverse(mypy___main___add_invertible_flag_process_options_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___add_invertible_flag_process_options_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___add_invertible_flag_process_options_objObject))));
    return 0;
}

static int
mypy___main___add_invertible_flag_process_options_obj_clear(mypy___main___add_invertible_flag_process_options_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___add_invertible_flag_process_options_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___add_invertible_flag_process_options_objObject))));
    return 0;
}

static void
mypy___main___add_invertible_flag_process_options_obj_dealloc(mypy___main___add_invertible_flag_process_options_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___add_invertible_flag_process_options_obj_dealloc)
    mypy___main___add_invertible_flag_process_options_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___add_invertible_flag_process_options_obj_vtable[2];
static bool
CPyDef_mypy___main___add_invertible_flag_process_options_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___add_invertible_flag_process_options_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___add_invertible_flag_process_options_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___main___add_invertible_flag_process_options_obj_____get__,
    };
    memcpy(mypy___main___add_invertible_flag_process_options_obj_vtable, mypy___main___add_invertible_flag_process_options_obj_vtable_scratch, sizeof(mypy___main___add_invertible_flag_process_options_obj_vtable));
    return 1;
}

static PyMethodDef mypy___main___add_invertible_flag_process_options_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___main___add_invertible_flag_process_options_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___main___add_invertible_flag_process_options_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___add_invertible_flag_process_options_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "add_invertible_flag_process_options_obj",
    .tp_new = mypy___main___add_invertible_flag_process_options_obj_new,
    .tp_dealloc = (destructor)mypy___main___add_invertible_flag_process_options_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___main___add_invertible_flag_process_options_obj_traverse,
    .tp_clear = (inquiry)mypy___main___add_invertible_flag_process_options_obj_clear,
    .tp_methods = mypy___main___add_invertible_flag_process_options_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___main___add_invertible_flag_process_options_obj,
    .tp_members = mypy___main___add_invertible_flag_process_options_obj_members,
    .tp_basicsize = sizeof(mypy___main___add_invertible_flag_process_options_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___add_invertible_flag_process_options_objObject),
    .tp_weaklistoffset = sizeof(mypy___main___add_invertible_flag_process_options_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___main___add_invertible_flag_process_options_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___main___add_invertible_flag_process_options_obj_template = &CPyType_mypy___main___add_invertible_flag_process_options_obj_template_;

static PyObject *
mypy___main___add_invertible_flag_process_options_obj_setup(PyTypeObject *type)
{
    mypy___main___add_invertible_flag_process_options_objObject *self;
    self = (mypy___main___add_invertible_flag_process_options_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___add_invertible_flag_process_options_obj_vtable;
    self->vectorcall = CPyPy_mypy___main___add_invertible_flag_process_options_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___add_invertible_flag_process_options_obj(void)
{
    PyObject *self = mypy___main___add_invertible_flag_process_options_obj_setup(CPyType_mypy___main___add_invertible_flag_process_options_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___main___set_strict_flags_process_options_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___main___set_strict_flags_process_options_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___main___set_strict_flags_process_options_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___main___set_strict_flags_process_options_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___main___set_strict_flags_process_options_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___main___set_strict_flags_process_options_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___main___set_strict_flags_process_options_obj(void);

static PyObject *
mypy___main___set_strict_flags_process_options_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___main___set_strict_flags_process_options_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___main___set_strict_flags_process_options_obj_setup(type);
}

static int
mypy___main___set_strict_flags_process_options_obj_traverse(mypy___main___set_strict_flags_process_options_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___main___set_strict_flags_process_options_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___set_strict_flags_process_options_objObject))));
    return 0;
}

static int
mypy___main___set_strict_flags_process_options_obj_clear(mypy___main___set_strict_flags_process_options_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___main___set_strict_flags_process_options_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___main___set_strict_flags_process_options_objObject))));
    return 0;
}

static void
mypy___main___set_strict_flags_process_options_obj_dealloc(mypy___main___set_strict_flags_process_options_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___main___set_strict_flags_process_options_obj_dealloc)
    mypy___main___set_strict_flags_process_options_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___main___set_strict_flags_process_options_obj_vtable[2];
static bool
CPyDef_mypy___main___set_strict_flags_process_options_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___main___set_strict_flags_process_options_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___main___set_strict_flags_process_options_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___main___set_strict_flags_process_options_obj_____get__,
    };
    memcpy(mypy___main___set_strict_flags_process_options_obj_vtable, mypy___main___set_strict_flags_process_options_obj_vtable_scratch, sizeof(mypy___main___set_strict_flags_process_options_obj_vtable));
    return 1;
}

static PyMethodDef mypy___main___set_strict_flags_process_options_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___main___set_strict_flags_process_options_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___main___set_strict_flags_process_options_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___main___set_strict_flags_process_options_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "set_strict_flags_process_options_obj",
    .tp_new = mypy___main___set_strict_flags_process_options_obj_new,
    .tp_dealloc = (destructor)mypy___main___set_strict_flags_process_options_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___main___set_strict_flags_process_options_obj_traverse,
    .tp_clear = (inquiry)mypy___main___set_strict_flags_process_options_obj_clear,
    .tp_methods = mypy___main___set_strict_flags_process_options_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___main___set_strict_flags_process_options_obj,
    .tp_members = mypy___main___set_strict_flags_process_options_obj_members,
    .tp_basicsize = sizeof(mypy___main___set_strict_flags_process_options_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___main___set_strict_flags_process_options_objObject),
    .tp_weaklistoffset = sizeof(mypy___main___set_strict_flags_process_options_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___main___set_strict_flags_process_options_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___main___set_strict_flags_process_options_obj_template = &CPyType_mypy___main___set_strict_flags_process_options_obj_template_;

static PyObject *
mypy___main___set_strict_flags_process_options_obj_setup(PyTypeObject *type)
{
    mypy___main___set_strict_flags_process_options_objObject *self;
    self = (mypy___main___set_strict_flags_process_options_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___main___set_strict_flags_process_options_obj_vtable;
    self->vectorcall = CPyPy_mypy___main___set_strict_flags_process_options_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___main___set_strict_flags_process_options_obj(void)
{
    PyObject *self = mypy___main___set_strict_flags_process_options_obj_setup(CPyType_mypy___main___set_strict_flags_process_options_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef mypy___mainmodule_methods[] = {
    {"stat_proxy", (PyCFunction)CPyPy_mypy___main___stat_proxy, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"main", (PyCFunction)CPyPy_mypy___main___main, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"run_build", (PyCFunction)CPyPy_mypy___main___run_build, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"show_messages", (PyCFunction)CPyPy_mypy___main___show_messages, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"invert_flag_name", (PyCFunction)CPyPy_mypy___main___invert_flag_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"python_executable_prefix", (PyCFunction)CPyPy_mypy___main___python_executable_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_python_executable_from_version", (PyCFunction)CPyPy_mypy___main____python_executable_from_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_python_executable", (PyCFunction)CPyPy_mypy___main___infer_python_executable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_options", (PyCFunction)CPyPy_mypy___main___process_options, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_package_roots", (PyCFunction)CPyPy_mypy___main___process_package_roots, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_cache_map", (PyCFunction)CPyPy_mypy___main___process_cache_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"maybe_write_junit_xml", (PyCFunction)CPyPy_mypy___main___maybe_write_junit_xml, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fail", (PyCFunction)CPyPy_mypy___main___fail, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"read_types_packages_to_install", (PyCFunction)CPyPy_mypy___main___read_types_packages_to_install, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"install_types", (PyCFunction)CPyPy_mypy___main___install_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___mainmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___mainmodule_methods
};

PyObject *CPyInit_mypy___main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___main_internal) {
        Py_INCREF(CPyModule_mypy___main_internal);
        return CPyModule_mypy___main_internal;
    }
    CPyModule_mypy___main_internal = PyModule_Create(&mypy___mainmodule);
    if (unlikely(CPyModule_mypy___main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___main_internal, "__name__");
    CPyStatic_mypy___main___globals = PyModule_GetDict(CPyModule_mypy___main_internal);
    if (unlikely(CPyStatic_mypy___main___globals == NULL))
        goto fail;
    CPyType_mypy___main___run_build_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___main___run_build_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___main___run_build_env))
        goto fail;
    CPyType_mypy___main___flush_errors_run_build_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___main___flush_errors_run_build_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___main___flush_errors_run_build_obj))
        goto fail;
    CPyType_mypy___main___process_options_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___main___process_options_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___main___process_options_env))
        goto fail;
    CPyType_mypy___main___add_invertible_flag_process_options_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___main___add_invertible_flag_process_options_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___main___add_invertible_flag_process_options_obj))
        goto fail;
    CPyType_mypy___main___set_strict_flags_process_options_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___main___set_strict_flags_process_options_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___main___set_strict_flags_process_options_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___main_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___main_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___main___orig_stat);
    CPyStatic_mypy___main___orig_stat = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___mypy___main___main___stdout);
    CPyStatic_mypy___main___mypy___main___main___stdout = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___mypy___main___main___stderr);
    CPyStatic_mypy___main___mypy___main___main___stderr = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___flag_prefix_pairs);
    CPyStatic_mypy___main___flag_prefix_pairs = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___flag_prefix_map);
    CPyStatic_mypy___main___flag_prefix_map = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____dest);
    CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____dest = NULL;
    CPy_XDECREF(CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____default);
    CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____default = NULL;
    Py_CLEAR(CPyType_mypy___main___AugmentedHelpFormatter);
    Py_CLEAR(CPyType_mypy___main___PythonExecutableInferenceError);
    Py_CLEAR(CPyType_mypy___main___CapturableArgumentParser);
    Py_CLEAR(CPyType_mypy___main___CapturableVersionAction);
    Py_CLEAR(CPyType_mypy___main___run_build_env);
    Py_CLEAR(CPyType_mypy___main___flush_errors_run_build_obj);
    Py_CLEAR(CPyType_mypy___main___process_options_env);
    Py_CLEAR(CPyType_mypy___main___add_invertible_flag_process_options_obj);
    Py_CLEAR(CPyType_mypy___main___set_strict_flags_process_options_obj);
    return NULL;
}

PyObject *CPyDef_mypy___main___stat_proxy(PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    double cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    tuple_T4OIFI cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    cpy_r_r0 = CPyStatic_mypy___main___orig_stat;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"orig_stat\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 30, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    PyObject *cpy_r_r2[1] = {cpy_r_path};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r0, cpy_r_r3, 1, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 30, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "stat_proxy", 30, CPyStatic_mypy___main___globals, "tuple", cpy_r_r4);
        goto CPyL7;
    }
    cpy_r_st = cpy_r_r5;
    goto CPyL23;
CPyL7: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[401]; /* 'error' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 31, CPyStatic_mypy___main___globals);
        goto CPyL21;
    }
    cpy_r_r10 = CPy_ExceptionMatches(cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL19;
    cpy_r_r11 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r11;
    cpy_r_r12 = CPyStatics[163]; /* '' */
    cpy_r_r13 = CPyStatics[2719]; /* 'stat(' */
    cpy_r_r14 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r15 = CPyStatics[163]; /* '' */
    cpy_r_r16 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r17[3] = {cpy_r_r14, cpy_r_path, cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals, "str", cpy_r_r19);
        goto CPyL36;
    }
    cpy_r_r21 = CPyStatics[2720]; /* ') -> ' */
    cpy_r_r22 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r23 = CPyStatics[163]; /* '' */
    cpy_r_r24 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r25[3] = {cpy_r_r22, cpy_r_err, cpy_r_r23};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL37;
    }
    CPy_DecRef(cpy_r_err);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals, "str", cpy_r_r27);
        goto CPyL38;
    }
    cpy_r_r29 = PyList_New(4);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL39;
    }
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r29)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    CPy_INCREF(cpy_r_r13);
    *(PyObject * *)cpy_r_r31 = cpy_r_r13;
    cpy_r_r32 = cpy_r_r31 + 8;
    *(PyObject * *)cpy_r_r32 = cpy_r_r20;
    cpy_r_r33 = cpy_r_r31 + 16;
    CPy_INCREF(cpy_r_r21);
    *(PyObject * *)cpy_r_r33 = cpy_r_r21;
    cpy_r_r34 = cpy_r_r31 + 24;
    *(PyObject * *)cpy_r_r34 = cpy_r_r28;
    cpy_r_r35 = PyUnicode_Join(cpy_r_r12, cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL21;
    }
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[190]; /* 'print' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DecRef(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 32, CPyStatic_mypy___main___globals);
        goto CPyL40;
    } else
        goto CPyL41;
CPyL17: ;
    CPy_DecRef(cpy_r_r35);
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL42;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL43;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    cpy_r_r42 = CPy_KeepPropagating();
    if (!cpy_r_r42) goto CPyL35;
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r43 = CPyStatics[2721]; /* 'stat(%r) -> (st_mode=%o, st_mtime=%d, st_size=%d)' */
    cpy_r_r44 = CPyStatics[320]; /* 'st_mode' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_st, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL44;
    }
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL44;
    }
    cpy_r_r47 = CPyStatics[329]; /* 'st_mtime' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_st, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL45;
    }
    cpy_r_r49 = PyFloat_AsDouble(cpy_r_r48);
    if (cpy_r_r49 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r48); cpy_r_r49 = -113.0;
    }
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 == -113.0;
    if (unlikely(cpy_r_r50)) goto CPyL28;
CPyL27: ;
    cpy_r_r51 = CPyStatics[326]; /* 'st_size' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_st, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL45;
    } else
        goto CPyL29;
CPyL28: ;
    cpy_r_r53 = PyErr_Occurred();
    if (unlikely(cpy_r_r53 != NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL45;
    } else
        goto CPyL27;
CPyL29: ;
    if (likely(PyLong_Check(cpy_r_r52)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r52);
    else {
        CPy_TypeError("int", cpy_r_r52); cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 37, CPyStatic_mypy___main___globals);
        goto CPyL45;
    }
    cpy_r_r55.f0 = cpy_r_path;
    cpy_r_r55.f1 = cpy_r_r46;
    cpy_r_r55.f2 = cpy_r_r49;
    cpy_r_r55.f3 = cpy_r_r54;
    CPy_INCREF(cpy_r_r55.f0);
    CPyTagged_INCREF(cpy_r_r55.f1);
    CPyTagged_INCREF(cpy_r_r55.f3);
    CPyTagged_DECREF(cpy_r_r46);
    CPyTagged_DECREF(cpy_r_r54);
    cpy_r_r56 = PyTuple_New(4);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3105 = cpy_r_r55.f0;
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp3105);
    PyObject *__tmp3106 = CPyTagged_StealAsObject(cpy_r_r55.f1);
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp3106);
    PyObject *__tmp3107 = PyFloat_FromDouble(cpy_r_r55.f2);
    PyTuple_SET_ITEM(cpy_r_r56, 2, __tmp3107);
    PyObject *__tmp3108 = CPyTagged_StealAsObject(cpy_r_r55.f3);
    PyTuple_SET_ITEM(cpy_r_r56, 3, __tmp3108);
    cpy_r_r57 = PyNumber_Remainder(cpy_r_r43, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 36, CPyStatic_mypy___main___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "stat_proxy", 36, CPyStatic_mypy___main___globals, "str", cpy_r_r57);
        goto CPyL44;
    }
    cpy_r_r59 = CPyModule_builtins;
    cpy_r_r60 = CPyStatics[190]; /* 'print' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 35, CPyStatic_mypy___main___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r62[1] = {cpy_r_r58};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 1, 0);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "stat_proxy", 35, CPyStatic_mypy___main___globals);
        goto CPyL46;
    } else
        goto CPyL47;
CPyL34: ;
    CPy_DECREF(cpy_r_r58);
    return cpy_r_st;
CPyL35: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL36: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL21;
CPyL37: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r20);
    goto CPyL21;
CPyL38: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r28);
    goto CPyL21;
CPyL40: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL21;
CPyL41: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL17;
CPyL42: ;
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL18;
CPyL43: ;
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL20;
CPyL44: ;
    CPy_DecRef(cpy_r_st);
    goto CPyL35;
CPyL45: ;
    CPy_DecRef(cpy_r_st);
    CPyTagged_DecRef(cpy_r_r46);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_r58);
    goto CPyL35;
CPyL47: ;
    CPy_DECREF(cpy_r_r64);
    goto CPyL34;
}

PyObject *CPyPy_mypy___main___stat_proxy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:stat_proxy", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___stat_proxy(arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "stat_proxy", 28, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___main(PyObject *cpy_r_args, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr, char cpy_r_clean_exit) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    double cpy_r_r9;
    char cpy_r_r10;
    double cpy_r_t0;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
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
    PyObject *cpy_r_fscache;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_options;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_formatter;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    tuple_T3OOC cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_messages;
    char cpy_r_r77;
    char cpy_r_blockers;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_missing_pkgs;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    tuple_T3OOC cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    CPyTagged cpy_r_code;
    tuple_T3III cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_n_errors;
    CPyTagged cpy_r_r104;
    CPyTagged cpy_r_n_notes;
    CPyTagged cpy_r_r105;
    CPyTagged cpy_r_n_files;
    CPyPtr cpy_r_r106;
    int64_t cpy_r_r107;
    CPyTagged cpy_r_r108;
    char cpy_r_r109;
    CPyPtr cpy_r_r110;
    int64_t cpy_r_r111;
    CPyTagged cpy_r_r112;
    int64_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    CPyPtr cpy_r_r120;
    int64_t cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_summary;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyPtr cpy_r_r131;
    int64_t cpy_r_r132;
    CPyTagged cpy_r_r133;
    char cpy_r_r134;
    CPyPtr cpy_r_r135;
    int64_t cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    CPyPtr cpy_r_r139;
    int64_t cpy_r_r140;
    CPyTagged cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject **cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_result;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject **cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyPtr cpy_r_r179;
    CPyPtr cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    if (cpy_r_args != NULL) goto CPyL102;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
CPyL2: ;
    if (cpy_r_stdout != NULL) goto CPyL103;
    cpy_r_r1 = CPyStatic_mypy___main___mypy___main___main___stdout;
    CPy_INCREF(cpy_r_r1);
    cpy_r_stdout = cpy_r_r1;
CPyL4: ;
    if (cpy_r_stderr != NULL) goto CPyL104;
    cpy_r_r2 = CPyStatic_mypy___main___mypy___main___main___stderr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_stderr = cpy_r_r2;
CPyL6: ;
    if (cpy_r_clean_exit != 2) goto CPyL8;
    cpy_r_clean_exit = 0;
CPyL8: ;
    cpy_r_r3 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r4 = CPyDef_mypy___util___check_python_version(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 57, CPyStatic_mypy___main___globals);
        goto CPyL105;
    }
    cpy_r_r5 = CPyModule_time;
    cpy_r_r6 = CPyStatics[147]; /* 'time' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 58, CPyStatic_mypy___main___globals);
        goto CPyL105;
    }
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 58, CPyStatic_mypy___main___globals);
        goto CPyL105;
    }
    cpy_r_r9 = PyFloat_AsDouble(cpy_r_r8);
    if (cpy_r_r9 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r8); cpy_r_r9 = -113.0;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -113.0;
    if (unlikely(cpy_r_r10)) goto CPyL13;
CPyL12: ;
    cpy_r_t0 = cpy_r_r9;
    cpy_r_r11 = CPyModule_sys;
    cpy_r_r12 = CPyStatics[2722]; /* 'setrecursionlimit' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 60, CPyStatic_mypy___main___globals);
        goto CPyL105;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r14 = PyErr_Occurred();
    if (unlikely(cpy_r_r14 != NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 58, CPyStatic_mypy___main___globals);
        goto CPyL105;
    } else
        goto CPyL12;
CPyL14: ;
    cpy_r_r15 = CPyStatics[9032]; /* 16384 */
    PyObject *cpy_r_r16[1] = {cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 60, CPyStatic_mypy___main___globals);
        goto CPyL105;
    } else
        goto CPyL106;
CPyL15: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_args == cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL107;
    } else
        goto CPyL21;
CPyL16: ;
    cpy_r_r21 = CPyModule_sys;
    cpy_r_r22 = CPyStatics[1704]; /* 'argv' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 62, CPyStatic_mypy___main___globals);
        goto CPyL108;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "main", 62, CPyStatic_mypy___main___globals, "list", cpy_r_r23);
        goto CPyL108;
    }
    cpy_r_r25 = CPyList_GetSlice(cpy_r_r24, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 62, CPyStatic_mypy___main___globals);
        goto CPyL108;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "main", 62, CPyStatic_mypy___main___globals, "list", cpy_r_r25);
        goto CPyL108;
    }
    cpy_r_args = cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = CPyDef_fscache___FileSystemCache();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 64, CPyStatic_mypy___main___globals);
        goto CPyL105;
    }
    cpy_r_fscache = cpy_r_r27;
    if (likely(cpy_r_args != Py_None))
        cpy_r_r28 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "main", 65, CPyStatic_mypy___main___globals, "list", cpy_r_args);
        goto CPyL109;
    }
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_mypy___main___process_options(cpy_r_r28, cpy_r_stdout, cpy_r_stderr, cpy_r_r29, cpy_r_r30, cpy_r_fscache, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 65, CPyStatic_mypy___main___globals);
        goto CPyL109;
    }
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_sources = cpy_r_r34;
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r33.f0);
    CPy_DECREF(cpy_r_r33.f1);
    cpy_r_options = cpy_r_r35;
    if (!cpy_r_clean_exit) goto CPyL26;
    ((mypy___options___OptionsObject *)cpy_r_options)->_fast_exit = 0;
CPyL26: ;
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_options)->_hide_error_codes;
    cpy_r_r38 = CPyDef_mypy___util___FancyFormatter(cpy_r_stdout, cpy_r_stderr, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 69, CPyStatic_mypy___main___globals);
        goto CPyL110;
    }
    cpy_r_formatter = cpy_r_r38;
    cpy_r_r39 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (!cpy_r_r39) goto CPyL33;
CPyL28: ;
    cpy_r_r40 = CPyModule_sys;
    cpy_r_r41 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 71, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r43 = cpy_r_stdout == cpy_r_r42;
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 ^ 1;
    if (cpy_r_r44) goto CPyL32;
    cpy_r_r45 = CPyModule_sys;
    cpy_r_r46 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 71, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r48 = cpy_r_stderr == cpy_r_r47;
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 ^ 1;
    if (!cpy_r_r49) goto CPyL33;
CPyL32: ;
    cpy_r_r50 = CPyStatics[2723]; /* ('error: --install-types not supported in this mode of '
                                     'running mypy') */
    cpy_r_r51 = CPyDef_mypy___main___fail(cpy_r_r50, cpy_r_stderr, cpy_r_options);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 73, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL112;
CPyL33: ;
    cpy_r_r52 = ((mypy___options___OptionsObject *)cpy_r_options)->_non_interactive;
    if (!cpy_r_r52) goto CPyL36;
CPyL34: ;
    cpy_r_r53 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (cpy_r_r53) goto CPyL36;
CPyL35: ;
    cpy_r_r54 = CPyStatics[2724]; /* ('error: --non-interactive is only supported with '
                                     '--install-types') */
    cpy_r_r55 = CPyDef_mypy___main___fail(cpy_r_r54, cpy_r_stderr, cpy_r_options);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 76, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL113;
CPyL36: ;
    cpy_r_r56 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (!cpy_r_r56) goto CPyL39;
CPyL37: ;
    cpy_r_r57 = ((mypy___options___OptionsObject *)cpy_r_options)->_incremental;
    if (cpy_r_r57) goto CPyL39;
CPyL38: ;
    cpy_r_r58 = CPyStatics[2725]; /* ('error: --install-types not supported with incremental '
                                     'mode disabled') */
    cpy_r_r59 = CPyDef_mypy___main___fail(cpy_r_r58, cpy_r_stderr, cpy_r_options);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 79, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL114;
CPyL39: ;
    cpy_r_r60 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (!cpy_r_r60) goto CPyL42;
CPyL40: ;
    cpy_r_r61 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_r61 == cpy_r_r62;
    if (!cpy_r_r63) goto CPyL42;
    cpy_r_r64 = CPyStatics[2726]; /* ('error: --install-types not supported without python '
                                     'executable or site packages') */
    cpy_r_r65 = CPyDef_mypy___main___fail(cpy_r_r64, cpy_r_stderr, cpy_r_options);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 84, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL115;
CPyL42: ;
    cpy_r_r66 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (!cpy_r_r66) goto CPyL46;
CPyL43: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = cpy_r_r69 != 0;
    if (cpy_r_r70) {
        goto CPyL46;
    } else
        goto CPyL116;
CPyL44: ;
    cpy_r_r71 = ((mypy___options___OptionsObject *)cpy_r_options)->_non_interactive;
    cpy_r_r72 = 2;
    cpy_r_r73 = CPyDef_mypy___main___install_types(cpy_r_formatter, cpy_r_options, cpy_r_r72, cpy_r_r71);
    CPy_DECREF(cpy_r_formatter);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 91, CPyStatic_mypy___main___globals);
        goto CPyL101;
    }
    return 1;
CPyL46: ;
    cpy_r_r74 = CPyDef_mypy___main___run_build(cpy_r_sources, cpy_r_options, cpy_r_fscache, cpy_r_t0, cpy_r_stdout, cpy_r_stderr);
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 94, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r75 = cpy_r_r74.f0;
    CPy_INCREF(cpy_r_r75);
    cpy_r_res = cpy_r_r75;
    cpy_r_r76 = cpy_r_r74.f1;
    CPy_INCREF(cpy_r_r76);
    cpy_r_messages = cpy_r_r76;
    cpy_r_r77 = cpy_r_r74.f2;
    CPy_DECREF(cpy_r_r74.f0);
    CPy_DECREF(cpy_r_r74.f1);
    cpy_r_blockers = cpy_r_r77;
    cpy_r_r78 = ((mypy___options___OptionsObject *)cpy_r_options)->_non_interactive;
    if (!cpy_r_r78) goto CPyL117;
CPyL48: ;
    cpy_r_r79 = ((mypy___options___OptionsObject *)cpy_r_options)->_cache_dir;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyDef_mypy___main___read_types_packages_to_install(cpy_r_r79, 1);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 97, CPyStatic_mypy___main___globals);
        goto CPyL118;
    }
    cpy_r_missing_pkgs = cpy_r_r80;
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_missing_pkgs)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    CPy_DECREF(cpy_r_missing_pkgs);
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = cpy_r_r83 != 0;
    if (cpy_r_r84) {
        goto CPyL119;
    } else
        goto CPyL120;
CPyL50: ;
    cpy_r_r85 = CPyDef_mypy___main___install_types(cpy_r_formatter, cpy_r_options, 1, 1);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 100, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r86 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 2, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *))(cpy_r_fscache); /* flush */
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 101, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r87 = CPyModule_builtins;
    cpy_r_r88 = CPyStatics[190]; /* 'print' */
    cpy_r_r89 = CPyObject_GetAttr(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 102, CPyStatic_mypy___main___globals);
        goto CPyL111;
    }
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r89, 0, 0, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 102, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL121;
CPyL54: ;
    cpy_r_r91 = CPyDef_mypy___main___run_build(cpy_r_sources, cpy_r_options, cpy_r_fscache, cpy_r_t0, cpy_r_stdout, cpy_r_stderr);
    CPy_DECREF(cpy_r_fscache);
    if (unlikely(cpy_r_r91.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 103, CPyStatic_mypy___main___globals);
        goto CPyL122;
    }
    cpy_r_r92 = cpy_r_r91.f0;
    CPy_INCREF(cpy_r_r92);
    cpy_r_res = cpy_r_r92;
    cpy_r_r93 = cpy_r_r91.f1;
    CPy_INCREF(cpy_r_r93);
    cpy_r_messages = cpy_r_r93;
    cpy_r_r94 = cpy_r_r91.f2;
    CPy_DECREF(cpy_r_r91.f0);
    CPy_DECREF(cpy_r_r91.f1);
    cpy_r_blockers = cpy_r_r94;
CPyL56: ;
    cpy_r_r95 = CPyDef_mypy___main___show_messages(cpy_r_messages, cpy_r_stderr, cpy_r_formatter, cpy_r_options);
    CPy_DECREF(cpy_r_stderr);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 104, CPyStatic_mypy___main___globals);
        goto CPyL123;
    }
CPyL57: ;
    if (!0) goto CPyL60;
    cpy_r_r96 = CPyStatics[9334]; /* ('print_memory_profile',) */
    cpy_r_r97 = CPyStatics[1963]; /* 'mypy.memprofile' */
    cpy_r_r98 = CPyStatic_mypy___main___globals;
    cpy_r_r99 = CPyImport_ImportFromMany(cpy_r_r97, cpy_r_r96, cpy_r_r96, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 107, CPyStatic_mypy___main___globals);
        goto CPyL123;
    }
    CPyModule_mypy___memprofile = cpy_r_r99;
    CPy_INCREF(CPyModule_mypy___memprofile);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r100 = 2;
    cpy_r_r101 = CPyDef_memprofile___print_memory_profile(cpy_r_r100);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 109, CPyStatic_mypy___main___globals);
        goto CPyL123;
    }
CPyL60: ;
    cpy_r_code = 0;
    cpy_r_r102 = CPyDef_mypy___util___count_stats(cpy_r_messages);
    if (unlikely(cpy_r_r102.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "main", 112, CPyStatic_mypy___main___globals);
        goto CPyL124;
    }
    cpy_r_r103 = cpy_r_r102.f0;
    CPyTagged_INCREF(cpy_r_r103);
    cpy_r_n_errors = cpy_r_r103;
    cpy_r_r104 = cpy_r_r102.f1;
    CPyTagged_INCREF(cpy_r_r104);
    cpy_r_n_notes = cpy_r_r104;
    cpy_r_r105 = cpy_r_r102.f2;
    CPyTagged_INCREF(cpy_r_r105);
    CPyTagged_DECREF(cpy_r_r102.f0);
    CPyTagged_DECREF(cpy_r_r102.f1);
    CPyTagged_DECREF(cpy_r_r102.f2);
    cpy_r_n_files = cpy_r_r105;
    cpy_r_r106 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r107 = *(int64_t *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 << 1;
    cpy_r_r109 = cpy_r_r108 != 0;
    if (!cpy_r_r109) goto CPyL69;
    cpy_r_r110 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r111 = *(int64_t *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 << 1;
    cpy_r_r113 = cpy_r_n_notes & 1;
    cpy_r_r114 = cpy_r_r113 != 0;
    if (!cpy_r_r114) goto CPyL64;
    cpy_r_r115 = CPyTagged_IsLt_(cpy_r_n_notes, cpy_r_r112);
    if (cpy_r_r115) {
        goto CPyL125;
    } else
        goto CPyL69;
CPyL64: ;
    cpy_r_r116 = (Py_ssize_t)cpy_r_n_notes < (Py_ssize_t)cpy_r_r112;
    if (cpy_r_r116) {
        goto CPyL125;
    } else
        goto CPyL69;
CPyL65: ;
    if (!cpy_r_blockers) goto CPyL67;
    cpy_r_r117 = 4;
    goto CPyL68;
CPyL67: ;
    cpy_r_r117 = 2;
CPyL68: ;
    cpy_r_code = cpy_r_r117;
CPyL69: ;
    cpy_r_r118 = ((mypy___options___OptionsObject *)cpy_r_options)->_error_summary;
    if (!cpy_r_r118) goto CPyL126;
CPyL70: ;
    cpy_r_r119 = cpy_r_n_errors != 0;
    if (cpy_r_r119) {
        goto CPyL127;
    } else
        goto CPyL128;
CPyL71: ;
    cpy_r_r120 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r121 = *(int64_t *)cpy_r_r120;
    CPy_DECREF(cpy_r_sources);
    cpy_r_r122 = cpy_r_r121 << 1;
    cpy_r_r123 = ((mypy___options___OptionsObject *)cpy_r_options)->_color_output;
    cpy_r_r124 = CPyDef_mypy___util___FancyFormatter___format_error(cpy_r_formatter, cpy_r_n_errors, cpy_r_n_files, cpy_r_r122, cpy_r_blockers, cpy_r_r123);
    CPyTagged_DECREF(cpy_r_n_errors);
    CPyTagged_DECREF(cpy_r_n_files);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 117, CPyStatic_mypy___main___globals);
        goto CPyL129;
    }
    cpy_r_summary = cpy_r_r124;
    cpy_r_r125 = CPyStatics[189]; /* '\n' */
    cpy_r_r126 = PyUnicode_Concat(cpy_r_summary, cpy_r_r125);
    CPy_DECREF(cpy_r_summary);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 120, CPyStatic_mypy___main___globals);
        goto CPyL129;
    }
    cpy_r_r127 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r128[2] = {cpy_r_stdout, cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r129, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 120, CPyStatic_mypy___main___globals);
        goto CPyL130;
    } else
        goto CPyL131;
CPyL74: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL81;
CPyL75: ;
    cpy_r_r131 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r132 = *(int64_t *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 << 1;
    cpy_r_r134 = cpy_r_r133 != 0;
    if (!cpy_r_r134) goto CPyL132;
    cpy_r_r135 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r136 = *(int64_t *)cpy_r_r135;
    CPy_DECREF(cpy_r_messages);
    cpy_r_r137 = cpy_r_r136 << 1;
    cpy_r_r138 = cpy_r_n_notes == cpy_r_r137;
    CPyTagged_DECREF(cpy_r_n_notes);
    if (!cpy_r_r138) goto CPyL133;
CPyL77: ;
    cpy_r_r139 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r140 = *(int64_t *)cpy_r_r139;
    CPy_DECREF(cpy_r_sources);
    cpy_r_r141 = cpy_r_r140 << 1;
    cpy_r_r142 = ((mypy___options___OptionsObject *)cpy_r_options)->_color_output;
    cpy_r_r143 = CPyDef_mypy___util___FancyFormatter___format_success(cpy_r_formatter, cpy_r_r141, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 123, CPyStatic_mypy___main___globals);
        goto CPyL129;
    }
    cpy_r_r144 = CPyStatics[189]; /* '\n' */
    cpy_r_r145 = PyUnicode_Concat(cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 123, CPyStatic_mypy___main___globals);
        goto CPyL129;
    }
    cpy_r_r146 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r147[2] = {cpy_r_stdout, cpy_r_r145};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = PyObject_VectorcallMethod(cpy_r_r146, cpy_r_r148, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 123, CPyStatic_mypy___main___globals);
        goto CPyL134;
    } else
        goto CPyL135;
CPyL80: ;
    CPy_DECREF(cpy_r_r145);
CPyL81: ;
    cpy_r_r150 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r151[1] = {cpy_r_stdout};
    cpy_r_r152 = (PyObject **)&cpy_r_r151;
    cpy_r_r153 = PyObject_VectorcallMethod(cpy_r_r150, cpy_r_r152, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 124, CPyStatic_mypy___main___globals);
        goto CPyL129;
    } else
        goto CPyL136;
CPyL82: ;
    CPy_DECREF(cpy_r_stdout);
CPyL83: ;
    cpy_r_r154 = ((mypy___options___OptionsObject *)cpy_r_options)->_install_types;
    if (!cpy_r_r154) goto CPyL137;
CPyL84: ;
    cpy_r_r155 = ((mypy___options___OptionsObject *)cpy_r_options)->_non_interactive;
    if (cpy_r_r155) goto CPyL137;
CPyL85: ;
    cpy_r_r156 = CPyDef_mypy___main___install_types(cpy_r_formatter, cpy_r_options, 1, 0);
    CPy_DECREF(cpy_r_formatter);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 127, CPyStatic_mypy___main___globals);
        goto CPyL138;
    }
    cpy_r_result = cpy_r_r156;
    if (cpy_r_result) {
        goto CPyL139;
    } else
        goto CPyL92;
CPyL87: ;
    cpy_r_r157 = CPyModule_builtins;
    cpy_r_r158 = CPyStatics[190]; /* 'print' */
    cpy_r_r159 = CPyObject_GetAttr(cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 129, CPyStatic_mypy___main___globals);
        goto CPyL140;
    }
    cpy_r_r160 = _PyObject_Vectorcall(cpy_r_r159, 0, 0, 0);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 129, CPyStatic_mypy___main___globals);
        goto CPyL140;
    } else
        goto CPyL141;
CPyL89: ;
    cpy_r_r161 = CPyStatics[2727]; /* ('note: Run mypy again for up-to-date results with '
                                      'installed types') */
    cpy_r_r162 = CPyModule_builtins;
    cpy_r_r163 = CPyStatics[190]; /* 'print' */
    cpy_r_r164 = CPyObject_GetAttr(cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 130, CPyStatic_mypy___main___globals);
        goto CPyL140;
    }
    PyObject *cpy_r_r165[1] = {cpy_r_r161};
    cpy_r_r166 = (PyObject **)&cpy_r_r165;
    cpy_r_r167 = _PyObject_Vectorcall(cpy_r_r164, cpy_r_r166, 1, 0);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 130, CPyStatic_mypy___main___globals);
        goto CPyL140;
    } else
        goto CPyL142;
CPyL91: ;
    cpy_r_code = 4;
CPyL92: ;
    cpy_r_r168 = ((mypy___options___OptionsObject *)cpy_r_options)->_fast_exit;
    CPy_DECREF(cpy_r_options);
    if (!cpy_r_r168) goto CPyL94;
CPyL93: ;
    cpy_r_r169 = CPyDef_mypy___util___hard_exit(cpy_r_code);
    CPyTagged_DECREF(cpy_r_code);
    if (unlikely(cpy_r_r169 == 2)) {
        CPy_AddTraceback("mypy/main.py", "main", 137, CPyStatic_mypy___main___globals);
        goto CPyL143;
    } else
        goto CPyL98;
CPyL94: ;
    cpy_r_r170 = cpy_r_code != 0;
    if (!cpy_r_r170) goto CPyL144;
    cpy_r_r171 = CPyModule_sys;
    cpy_r_r172 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r173 = CPyObject_GetAttr(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 139, CPyStatic_mypy___main___globals);
        goto CPyL145;
    }
    cpy_r_r174 = CPyTagged_StealAsObject(cpy_r_code);
    PyObject *cpy_r_r175[1] = {cpy_r_r174};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = _PyObject_Vectorcall(cpy_r_r173, cpy_r_r176, 1, 0);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 139, CPyStatic_mypy___main___globals);
        goto CPyL146;
    } else
        goto CPyL147;
CPyL97: ;
    CPy_DECREF(cpy_r_r174);
CPyL98: ;
    cpy_r_r178 = PyList_New(1);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 142, CPyStatic_mypy___main___globals);
        goto CPyL143;
    }
    cpy_r_r179 = (CPyPtr)&((PyListObject *)cpy_r_r178)->ob_item;
    cpy_r_r180 = *(CPyPtr *)cpy_r_r179;
    *(PyObject * *)cpy_r_r180 = cpy_r_res;
    cpy_r_r181 = PySequence_List(cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "main", 142, CPyStatic_mypy___main___globals);
        goto CPyL101;
    } else
        goto CPyL148;
CPyL100: ;
    return 1;
CPyL101: ;
    cpy_r_r182 = 2;
    return cpy_r_r182;
CPyL102: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL2;
CPyL103: ;
    CPy_INCREF(cpy_r_stdout);
    goto CPyL4;
CPyL104: ;
    CPy_INCREF(cpy_r_stderr);
    goto CPyL6;
CPyL105: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL101;
CPyL106: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL15;
CPyL107: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL16;
CPyL108: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL101;
CPyL109: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    goto CPyL101;
CPyL110: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    goto CPyL101;
CPyL111: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    goto CPyL101;
CPyL112: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL33;
CPyL113: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL36;
CPyL114: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL39;
CPyL115: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL42;
CPyL116: ;
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_sources);
    goto CPyL44;
CPyL117: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_fscache);
    goto CPyL57;
CPyL118: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_messages);
    goto CPyL101;
CPyL119: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_messages);
    goto CPyL50;
CPyL120: ;
    CPy_DECREF(cpy_r_fscache);
    goto CPyL56;
CPyL121: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL54;
CPyL122: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    goto CPyL101;
CPyL123: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_messages);
    goto CPyL101;
CPyL124: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_messages);
    CPyTagged_DecRef(cpy_r_code);
    goto CPyL101;
CPyL125: ;
    CPyTagged_DECREF(cpy_r_code);
    goto CPyL65;
CPyL126: ;
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_messages);
    CPyTagged_DECREF(cpy_r_n_errors);
    CPyTagged_DECREF(cpy_r_n_notes);
    CPyTagged_DECREF(cpy_r_n_files);
    goto CPyL83;
CPyL127: ;
    CPy_DECREF(cpy_r_messages);
    CPyTagged_DECREF(cpy_r_n_notes);
    goto CPyL71;
CPyL128: ;
    CPyTagged_DECREF(cpy_r_n_errors);
    CPyTagged_DECREF(cpy_r_n_files);
    goto CPyL75;
CPyL129: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_code);
    goto CPyL101;
CPyL130: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r126);
    goto CPyL101;
CPyL131: ;
    CPy_DECREF(cpy_r_r130);
    goto CPyL74;
CPyL132: ;
    CPy_DECREF(cpy_r_messages);
    CPyTagged_DECREF(cpy_r_n_notes);
    goto CPyL77;
CPyL133: ;
    CPy_DECREF(cpy_r_sources);
    goto CPyL81;
CPyL134: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r145);
    goto CPyL101;
CPyL135: ;
    CPy_DECREF(cpy_r_r149);
    goto CPyL80;
CPyL136: ;
    CPy_DECREF(cpy_r_r153);
    goto CPyL82;
CPyL137: ;
    CPy_DECREF(cpy_r_formatter);
    goto CPyL92;
CPyL138: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_code);
    goto CPyL101;
CPyL139: ;
    CPyTagged_DECREF(cpy_r_code);
    goto CPyL87;
CPyL140: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_res);
    goto CPyL101;
CPyL141: ;
    CPy_DECREF(cpy_r_r160);
    goto CPyL89;
CPyL142: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL91;
CPyL143: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL101;
CPyL144: ;
    CPyTagged_DECREF(cpy_r_code);
    goto CPyL98;
CPyL145: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_code);
    goto CPyL101;
CPyL146: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r174);
    goto CPyL101;
CPyL147: ;
    CPy_DECREF(cpy_r_r177);
    goto CPyL97;
CPyL148: ;
    CPy_DECREF(cpy_r_r181);
    goto CPyL100;
}

PyObject *CPyPy_mypy___main___main(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "stdout", "stderr", "clean_exit", 0};
    static CPyArg_Parser parser = {"|$OOOO:main", kwlist, 0};
    PyObject *obj_args = NULL;
    PyObject *obj_stdout = NULL;
    PyObject *obj_stderr = NULL;
    PyObject *obj_clean_exit = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, &obj_stdout, &obj_stderr, &obj_clean_exit)) {
        return NULL;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL3109;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL3109;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL3109;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL3109: ;
    PyObject *arg_stdout;
    if (obj_stdout == NULL) {
        arg_stdout = NULL;
    } else {
        arg_stdout = obj_stdout; 
    }
    PyObject *arg_stderr;
    if (obj_stderr == NULL) {
        arg_stderr = NULL;
    } else {
        arg_stderr = obj_stderr; 
    }
    char arg_clean_exit;
    if (obj_clean_exit == NULL) {
        arg_clean_exit = 2;
    } else if (unlikely(!PyBool_Check(obj_clean_exit))) {
        CPy_TypeError("bool", obj_clean_exit); goto fail;
    } else
        arg_clean_exit = obj_clean_exit == Py_True;
    char retval = CPyDef_mypy___main___main(arg_args, arg_stdout, arg_stderr, arg_clean_exit);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "main", 42, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___flush_errors_run_build_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___main___flush_errors_run_build_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___main___flush_errors_run_build_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__get__", -1, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___flush_errors_run_build_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_new_messages, char cpy_r_serious) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_flush_errors;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___main___flush_errors_run_build_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "flush_errors_run_build_obj", "__mypyc_env__", 157, CPyStatic_mypy___main___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_flush_errors;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "flush_errors", -1, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_flush_errors = cpy_r_r1;
    CPy_DECREF(cpy_r_flush_errors);
    cpy_r_r2 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "options", 158, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_r2)->_pretty;
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL23;
CPyL4: ;
    cpy_r_r4 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_formatter;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "formatter", 159, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_mypy___util___FancyFormatter___fit_in_terminal(cpy_r_r4, cpy_r_new_messages, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "flush_errors", 159, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    cpy_r_new_messages = cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_messages;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "messages", 160, CPyStatic_mypy___main___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = CPyList_Extend(cpy_r_r7, cpy_r_new_messages);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "flush_errors", 160, CPyStatic_mypy___main___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL9: ;
    cpy_r_r9 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "options", 161, CPyStatic_mypy___main___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = ((mypy___options___OptionsObject *)cpy_r_r9)->_non_interactive;
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10) {
        goto CPyL26;
    } else
        goto CPyL12;
CPyL11: ;
    return 1;
CPyL12: ;
    if (!cpy_r_serious) goto CPyL15;
    cpy_r_r11 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "stderr", 164, CPyStatic_mypy___main___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r11);
CPyL14: ;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL17;
CPyL15: ;
    cpy_r_r13 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "stdout", 164, CPyStatic_mypy___main___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r13);
CPyL16: ;
    cpy_r_r12 = cpy_r_r13;
CPyL17: ;
    cpy_r_f = cpy_r_r12;
    cpy_r_r14 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_formatter;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/main.py", "flush_errors", "run_build_env", "formatter", 165, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r14);
CPyL18: ;
    cpy_r_r15 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'run_build_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "flush_errors", 165, CPyStatic_mypy___main___globals);
        goto CPyL28;
    }
CPyL19: ;
    cpy_r_r16 = CPyDef_mypy___main___show_messages(cpy_r_new_messages, cpy_r_f, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_new_messages);
    CPy_DECREF(cpy_r_f);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/main.py", "flush_errors", 165, CPyStatic_mypy___main___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_INCREF(cpy_r_new_messages);
    goto CPyL7;
CPyL24: ;
    CPy_DecRef(cpy_r_new_messages);
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL25: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL9;
CPyL26: ;
    CPy_DECREF(cpy_r_new_messages);
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL27: ;
    CPy_DecRef(cpy_r_new_messages);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_f);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_new_messages);
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
}

PyObject *CPyPy_mypy___main___flush_errors_run_build_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"new_messages", "serious", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_new_messages;
    PyObject *obj_serious;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_new_messages, &obj_serious)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_new_messages;
    if (likely(PyList_Check(obj_new_messages)))
        arg_new_messages = obj_new_messages;
    else {
        CPy_TypeError("list", obj_new_messages); 
        goto fail;
    }
    char arg_serious;
    if (unlikely(!PyBool_Check(obj_serious))) {
        CPy_TypeError("bool", obj_serious); goto fail;
    } else
        arg_serious = obj_serious == Py_True;
    char retval = CPyDef_mypy___main___flush_errors_run_build_obj_____call__(arg___mypyc_self__, arg_new_messages, arg_serious);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "flush_errors", 157, CPyStatic_mypy___main___globals);
    return NULL;
}

tuple_T3OOC CPyDef_mypy___main___run_build(PyObject *cpy_r_sources, PyObject *cpy_r_options, PyObject *cpy_r_fscache, double cpy_r_t0, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_serious;
    char cpy_r_blockers;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    tuple_T3CIO cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_glob;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    double cpy_r_r85;
    char cpy_r_r86;
    double cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    tuple_T3OOC cpy_r_r93;
    tuple_T3OOC cpy_r_r94;
    cpy_r_r0 = CPyDef_mypy___main___run_build_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 145, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_options);
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_options != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_options);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_options = cpy_r_options;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 145, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_stdout);
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout = cpy_r_stdout;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 145, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_stderr);
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr = cpy_r_stderr;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 145, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    cpy_r_r4 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "stdout", 153, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "stderr", 153, CPyStatic_mypy___main___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 153, CPyStatic_mypy___main___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___options___OptionsObject *)cpy_r_r6)->_hide_error_codes;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = CPyDef_mypy___util___FancyFormatter(cpy_r_r4, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 153, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_formatter != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_formatter);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_formatter = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 153, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    cpy_r_r10 = PyList_New(0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 155, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_messages != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_messages);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_messages = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 155, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    cpy_r_r12 = CPyDef_mypy___main___flush_errors_run_build_obj();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 157, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___main___flush_errors_run_build_objObject *)cpy_r_r12)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___main___flush_errors_run_build_objObject *)cpy_r_r12)->___mypyc_env__);
    }
    ((mypy___main___flush_errors_run_build_objObject *)cpy_r_r12)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 157, CPyStatic_mypy___main___globals);
        goto CPyL74;
    }
    if (((mypy___main___run_build_envObject *)cpy_r_r0)->_flush_errors != NULL) {
        CPy_DECREF(((mypy___main___run_build_envObject *)cpy_r_r0)->_flush_errors);
    }
    ((mypy___main___run_build_envObject *)cpy_r_r0)->_flush_errors = cpy_r_r12;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 157, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    cpy_r_serious = 0;
    cpy_r_blockers = 0;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    cpy_r_res = cpy_r_r15;
    cpy_r_r16 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 173, CPyStatic_mypy___main___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r16);
CPyL16: ;
    cpy_r_r17 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_flush_errors;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "flush_errors", 173, CPyStatic_mypy___main___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r17);
CPyL17: ;
    cpy_r_r18 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stdout;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "stdout", 173, CPyStatic_mypy___main___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r18);
CPyL18: ;
    cpy_r_r19 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "stderr", 173, CPyStatic_mypy___main___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r19);
CPyL19: ;
    cpy_r_r20 = Py_None;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_mypy___build___build(cpy_r_sources, cpy_r_r16, cpy_r_r20, cpy_r_r17, cpy_r_fscache, cpy_r_r18, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 173, CPyStatic_mypy___main___globals);
        goto CPyL21;
    } else
        goto CPyL78;
CPyL20: ;
    cpy_r_res = cpy_r_r22;
    goto CPyL32;
CPyL21: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r24 = (PyObject *)CPyType_mypy___errors___CompileError;
    cpy_r_r25 = CPy_ExceptionMatches(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL79;
    cpy_r_r26 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_mypy___errors___CompileError))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "run_build", 174, CPyStatic_mypy___main___globals, "mypy.errors.CompileError", cpy_r_r26);
        goto CPyL80;
    }
    cpy_r_e = cpy_r_r27;
    cpy_r_blockers = 1;
    cpy_r_r28 = CPyStatics[134]; /* 'use_stdout' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_e, cpy_r_r28);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 176, CPyStatic_mypy___main___globals);
        goto CPyL80;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 176, CPyStatic_mypy___main___globals);
        goto CPyL80;
    }
    if (cpy_r_r30) goto CPyL29;
    cpy_r_serious = 1;
    goto CPyL29;
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL81;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL32;
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r31 = CPy_KeepPropagating();
    if (!cpy_r_r31) goto CPyL70;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r32 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 179, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r32);
CPyL33: ;
    cpy_r_r33 = ((mypy___options___OptionsObject *)cpy_r_r32)->_warn_unused_configs;
    CPy_DECREF(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL61;
CPyL34: ;
    cpy_r_r34 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 180, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r34);
CPyL35: ;
    cpy_r_r35 = ((mypy___options___OptionsObject *)cpy_r_r34)->_unused_configs;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = PyObject_IsTrue(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 180, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r38 = cpy_r_r36;
    if (!cpy_r_r38) goto CPyL61;
    cpy_r_r39 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 181, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r39);
CPyL38: ;
    cpy_r_r40 = ((mypy___options___OptionsObject *)cpy_r_r39)->_incremental;
    CPy_DECREF(cpy_r_r39);
    if (cpy_r_r40) goto CPyL61;
CPyL39: ;
    cpy_r_r41 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 182, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r41);
CPyL40: ;
    cpy_r_r42 = ((mypy___options___OptionsObject *)cpy_r_r41)->_non_interactive;
    CPy_DECREF(cpy_r_r41);
    if (cpy_r_r42) goto CPyL61;
CPyL41: ;
    cpy_r_r43 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 187, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r43);
CPyL42: ;
    cpy_r_r44 = ((mypy___options___OptionsObject *)cpy_r_r43)->_config_file;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = PyObject_Str(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 185, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r46 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 189, CPyStatic_mypy___main___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r46);
CPyL44: ;
    cpy_r_r47 = ((mypy___options___OptionsObject *)cpy_r_r46)->_config_file;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals);
        goto CPyL84;
    }
    cpy_r_r49 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 192, CPyStatic_mypy___main___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r49);
CPyL46: ;
    cpy_r_r50 = ((mypy___options___OptionsObject *)cpy_r_r49)->_per_module_options;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = 0;
    cpy_r_r52 = PyDict_Size(cpy_r_r50);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = CPyDict_GetKeysIter(cpy_r_r50);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
CPyL47: ;
    cpy_r_r55 = CPyDict_NextKey(cpy_r_r54, cpy_r_r51);
    cpy_r_r56 = cpy_r_r55.f1;
    cpy_r_r51 = cpy_r_r56;
    cpy_r_r57 = cpy_r_r55.f0;
    if (!cpy_r_r57) goto CPyL87;
    cpy_r_r58 = cpy_r_r55.f2;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r55.f2);
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals, "str", cpy_r_r58);
        goto CPyL88;
    }
    cpy_r_glob = cpy_r_r59;
    cpy_r_r60 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 193, CPyStatic_mypy___main___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r60);
CPyL50: ;
    cpy_r_r61 = ((mypy___options___OptionsObject *)cpy_r_r60)->_unused_configs;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = PySet_Contains(cpy_r_r61, cpy_r_glob);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 193, CPyStatic_mypy___main___globals);
        goto CPyL89;
    }
    cpy_r_r64 = cpy_r_r62;
    if (!cpy_r_r64) goto CPyL90;
    cpy_r_r65 = PyList_Append(cpy_r_r48, cpy_r_glob);
    CPy_DECREF(cpy_r_glob);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals);
        goto CPyL88;
    }
CPyL53: ;
    cpy_r_r67 = CPyDict_CheckSize(cpy_r_r50, cpy_r_r53);
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals);
        goto CPyL88;
    } else
        goto CPyL47;
CPyL54: ;
    cpy_r_r68 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 190, CPyStatic_mypy___main___globals);
        goto CPyL85;
    }
    cpy_r_r69 = CPyDef_config_parser___get_config_module_names(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 188, CPyStatic_mypy___main___globals);
        goto CPyL83;
    }
    cpy_r_r70 = CPyStatics[2728]; /* 'Warning: unused section(s) in ' */
    cpy_r_r71 = CPyStatics[297]; /* ': ' */
    cpy_r_r72 = CPyStr_Build(4, cpy_r_r70, cpy_r_r45, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 185, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r73 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_stderr;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "stderr", 197, CPyStatic_mypy___main___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r73);
CPyL58: ;
    cpy_r_r74 = CPyModule_builtins;
    cpy_r_r75 = CPyStatics[190]; /* 'print' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 184, CPyStatic_mypy___main___globals);
        goto CPyL92;
    }
    PyObject *cpy_r_r77[2] = {cpy_r_r72, cpy_r_r73};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r80 = _PyObject_Vectorcall(cpy_r_r76, cpy_r_r78, 1, cpy_r_r79);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 184, CPyStatic_mypy___main___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL60: ;
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
CPyL61: ;
    cpy_r_r81 = CPyModule_time;
    cpy_r_r82 = CPyStatics[147]; /* 'time' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 199, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r83, 0, 0, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 199, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r85 = PyFloat_AsDouble(cpy_r_r84);
    if (cpy_r_r85 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r84); cpy_r_r85 = -113.0;
    }
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 == -113.0;
    if (unlikely(cpy_r_r86)) goto CPyL65;
CPyL64: ;
    cpy_r_r87 = cpy_r_r85 - cpy_r_t0;
    cpy_r_r88 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_messages;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "messages", 199, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r88);
    goto CPyL66;
CPyL65: ;
    cpy_r_r89 = PyErr_Occurred();
    if (unlikely(cpy_r_r89 != NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 199, CPyStatic_mypy___main___globals);
        goto CPyL82;
    } else
        goto CPyL64;
CPyL66: ;
    cpy_r_r90 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/main.py", "run_build", "run_build_env", "options", 199, CPyStatic_mypy___main___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r90);
CPyL67: ;
    cpy_r_r91 = CPyDef_mypy___main___maybe_write_junit_xml(cpy_r_r87, cpy_r_serious, cpy_r_r88, cpy_r_r90);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 199, CPyStatic_mypy___main___globals);
        goto CPyL82;
    }
    cpy_r_r92 = ((mypy___main___run_build_envObject *)cpy_r_r0)->_messages;
    if (unlikely(cpy_r_r92 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'messages' of 'run_build_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r92);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "run_build", 200, CPyStatic_mypy___main___globals);
        goto CPyL95;
    }
CPyL69: ;
    cpy_r_r93.f0 = cpy_r_res;
    cpy_r_r93.f1 = cpy_r_r92;
    cpy_r_r93.f2 = cpy_r_blockers;
    CPy_INCREF(cpy_r_r93.f0);
    CPy_INCREF(cpy_r_r93.f1);
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_r92);
    return cpy_r_r93;
CPyL70: ;
    tuple_T3OOC __tmp3110 = { NULL, NULL, 2 };
    cpy_r_r94 = __tmp3110;
    return cpy_r_r94;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL70;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL70;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL70;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL70;
CPyL75: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL21;
CPyL76: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
CPyL77: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL21;
CPyL78: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL20;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    goto CPyL27;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    goto CPyL30;
CPyL81: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL28;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    goto CPyL70;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    goto CPyL70;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL70;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    goto CPyL70;
CPyL87: ;
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55.f2);
    goto CPyL54;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    goto CPyL70;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_glob);
    goto CPyL70;
CPyL90: ;
    CPy_DECREF(cpy_r_glob);
    goto CPyL53;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r72);
    goto CPyL70;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r73);
    goto CPyL70;
CPyL93: ;
    CPy_DECREF(cpy_r_r80);
    goto CPyL60;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r88);
    goto CPyL70;
CPyL95: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL70;
}

PyObject *CPyPy_mypy___main___run_build(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "options", "fscache", "t0", "stdout", "stderr", 0};
    static CPyArg_Parser parser = {"OOOOOO:run_build", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_options;
    PyObject *obj_fscache;
    PyObject *obj_t0;
    PyObject *obj_stdout;
    PyObject *obj_stderr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_options, &obj_fscache, &obj_t0, &obj_stdout, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    double arg_t0;
    arg_t0 = PyFloat_AsDouble(obj_t0);
    if (arg_t0 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_t0); goto fail;
    }
    PyObject *arg_stdout = obj_stdout;
    PyObject *arg_stderr = obj_stderr;
    tuple_T3OOC retval = CPyDef_mypy___main___run_build(arg_sources, arg_options, arg_fscache, arg_t0, arg_stdout, arg_stderr);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3111 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3111);
    PyObject *__tmp3112 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3112);
    PyObject *__tmp3113 = retval.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp3113);
    PyTuple_SET_ITEM(retbox, 2, __tmp3113);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "run_build", 145, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___show_messages(PyObject *cpy_r_messages, PyObject *cpy_r_f, PyObject *cpy_r_formatter, PyObject *cpy_r_options) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_msg;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r0);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "show_messages", 206, CPyStatic_mypy___main___globals, "str", cpy_r_r5);
        goto CPyL12;
    }
    cpy_r_msg = cpy_r_r6;
    cpy_r_r7 = ((mypy___options___OptionsObject *)cpy_r_options)->_color_output;
    if (!cpy_r_r7) goto CPyL6;
CPyL4: ;
    cpy_r_r8 = CPyDef_mypy___util___FancyFormatter___colorize(cpy_r_formatter, cpy_r_msg);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "show_messages", 208, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_msg = cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = CPyStatics[189]; /* '\n' */
    cpy_r_r10 = PyUnicode_Concat(cpy_r_msg, cpy_r_r9);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "show_messages", 209, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r11 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r12[2] = {cpy_r_f, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "show_messages", 209, CPyStatic_mypy___main___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL8: ;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r15 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r15;
    goto CPyL1;
CPyL10: ;
    cpy_r_r16 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r17[1] = {cpy_r_f};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "show_messages", 210, CPyStatic_mypy___main___globals);
        goto CPyL12;
    } else
        goto CPyL15;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL8;
CPyL15: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL11;
}

PyObject *CPyPy_mypy___main___show_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"messages", "f", "formatter", "options", 0};
    static CPyArg_Parser parser = {"OOOO:show_messages", kwlist, 0};
    PyObject *obj_messages;
    PyObject *obj_f;
    PyObject *obj_formatter;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_messages, &obj_f, &obj_formatter, &obj_options)) {
        return NULL;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_f = obj_f;
    PyObject *arg_formatter;
    if (likely(Py_TYPE(obj_formatter) == CPyType_mypy___util___FancyFormatter))
        arg_formatter = obj_formatter;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_formatter); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_mypy___main___show_messages(arg_messages, arg_f, arg_formatter, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "show_messages", 203, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___AugmentedHelpFormatter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_prog) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1670]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 216, CPyStatic_mypy___main___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (PyObject *)CPyType_mypy___main___AugmentedHelpFormatter;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 216, CPyStatic_mypy___main___globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyStatics[288]; /* '__init__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 216, CPyStatic_mypy___main___globals);
        goto CPyL5;
    }
    cpy_r_r9 = CPyStatics[9033]; /* 28 */
    PyObject *cpy_r_r10[2] = {cpy_r_prog, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[9302]; /* ('prog', 'max_help_position') */
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r11, 0, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 216, CPyStatic_mypy___main___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL6: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL4;
}

PyObject *CPyPy_mypy___main___AugmentedHelpFormatter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"prog", 0};
    PyObject *obj_prog;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_prog)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___AugmentedHelpFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.AugmentedHelpFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_prog;
    if (likely(PyUnicode_Check(obj_prog)))
        arg_prog = obj_prog;
    else {
        CPy_TypeError("str", obj_prog); 
        goto fail;
    }
    char retval = CPyDef_mypy___main___AugmentedHelpFormatter_____init__(arg_self, arg_prog);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__init__", 215, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___AugmentedHelpFormatter____fill_text(PyObject *cpy_r_self, PyObject *cpy_r_text, CPyTagged cpy_r_width, PyObject *cpy_r_indent) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
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
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[189]; /* '\n' */
    cpy_r_r1 = PySequence_Contains(cpy_r_text, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 219, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[1670]; /* 'super' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 221, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r7 = (PyObject *)CPyType_mypy___main___AugmentedHelpFormatter;
    PyObject *cpy_r_r8[2] = {cpy_r_r7, cpy_r_self};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 221, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r11 = CPyStatics[2729]; /* '_fill_text' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 221, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPyTagged_INCREF(cpy_r_width);
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_width);
    PyObject *cpy_r_r14[3] = {cpy_r_text, cpy_r_r13, cpy_r_indent};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 3, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 221, CPyStatic_mypy___main___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r13);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_fill_text", 221, CPyStatic_mypy___main___globals, "str", cpy_r_r16);
        goto CPyL12;
    }
    return cpy_r_r17;
CPyL8: ;
    cpy_r_r18 = CPyModule_argparse;
    cpy_r_r19 = CPyStatics[2730]; /* 'HelpFormatter' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 225, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyStatics[2729]; /* '_fill_text' */
    CPyTagged_INCREF(cpy_r_width);
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_width);
    PyObject *cpy_r_r23[5] = {cpy_r_r20, cpy_r_self, cpy_r_text, cpy_r_r22, cpy_r_indent};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r24, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_fill_text", 225, CPyStatic_mypy___main___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_fill_text", 225, CPyStatic_mypy___main___globals, "str", cpy_r_r25);
        goto CPyL12;
    }
    return cpy_r_r26;
CPyL12: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL13: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    goto CPyL12;
}

PyObject *CPyPy_mypy___main___AugmentedHelpFormatter____fill_text(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"text", "width", "indent", 0};
    static CPyArg_Parser parser = {"OOO:_fill_text", kwlist, 0};
    PyObject *obj_text;
    PyObject *obj_width;
    PyObject *obj_indent;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_text, &obj_width, &obj_indent)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___AugmentedHelpFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.AugmentedHelpFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_text;
    if (likely(PyUnicode_Check(obj_text)))
        arg_text = obj_text;
    else {
        CPy_TypeError("str", obj_text); 
        goto fail;
    }
    CPyTagged arg_width;
    if (likely(PyLong_Check(obj_width)))
        arg_width = CPyTagged_BorrowFromObject(obj_width);
    else {
        CPy_TypeError("int", obj_width); goto fail;
    }
    PyObject *arg_indent;
    if (likely(PyUnicode_Check(obj_indent)))
        arg_indent = obj_indent;
    else {
        CPy_TypeError("str", obj_indent); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___AugmentedHelpFormatter____fill_text(arg_self, arg_text, arg_width, arg_indent);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "_fill_text", 218, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___invert_flag_name(PyObject *cpy_r_flag) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_split;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = CPyStr_GetSlice(cpy_r_flag, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 237, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "invert_flag_name", 237, CPyStatic_mypy___main___globals, "str", cpy_r_r0);
        goto CPyL29;
    }
    cpy_r_r2 = CPyStatics[1198]; /* '-' */
    cpy_r_r3 = CPyStr_Split(cpy_r_r1, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 237, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    cpy_r_split = cpy_r_r3;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_split)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 == 4;
    if (!cpy_r_r7) goto CPyL30;
    cpy_r_r8 = CPySequence_CheckUnpackCount(cpy_r_split, 2);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 239, CPyStatic_mypy___main___globals);
        goto CPyL31;
    }
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_split, 0);
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_split, 2);
    CPy_DECREF(cpy_r_split);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "invert_flag_name", 239, CPyStatic_mypy___main___globals, "str", cpy_r_r10);
        goto CPyL32;
    }
    cpy_r_prefix = cpy_r_r12;
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "invert_flag_name", 239, CPyStatic_mypy___main___globals, "str", cpy_r_r11);
        goto CPyL33;
    }
    cpy_r_rest = cpy_r_r13;
    cpy_r_r14 = CPyStatic_mypy___main___flag_prefix_map;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"flag_prefix_map\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 240, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r16 = PyDict_Contains(cpy_r_r14, cpy_r_prefix);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 240, CPyStatic_mypy___main___globals);
        goto CPyL35;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL19;
    cpy_r_r19 = CPyStatics[2731]; /* '--' */
    cpy_r_r20 = CPyStatic_mypy___main___flag_prefix_map;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL36;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"flag_prefix_map\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 241, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_prefix);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 241, CPyStatic_mypy___main___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "invert_flag_name", 241, CPyStatic_mypy___main___globals, "str", cpy_r_r22);
        goto CPyL37;
    }
    cpy_r_r24 = CPyStatics[1198]; /* '-' */
    cpy_r_r25 = CPyStr_Build(4, cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_rest);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 241, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    return cpy_r_r25;
CPyL19: ;
    cpy_r_r26 = CPyStatics[2732]; /* 'no' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_prefix, cpy_r_r26);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL22;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL22;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 242, CPyStatic_mypy___main___globals);
        goto CPyL37;
    }
CPyL22: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL38;
    cpy_r_r33 = CPyStatics[2731]; /* '--' */
    cpy_r_r34 = CPyStr_Build(2, cpy_r_r33, cpy_r_rest);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 243, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    return cpy_r_r34;
CPyL25: ;
    cpy_r_r35 = CPyStatics[2733]; /* '--no-' */
    cpy_r_r36 = CPyStr_GetSlice(cpy_r_flag, 4, 9223372036854775806LL);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 245, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "invert_flag_name", 245, CPyStatic_mypy___main___globals, "str", cpy_r_r36);
        goto CPyL29;
    }
    cpy_r_r38 = CPyStr_Build(2, cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "invert_flag_name", 245, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    return cpy_r_r38;
CPyL29: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL30: ;
    CPy_DECREF(cpy_r_split);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_split);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_prefix);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_rest);
    goto CPyL8;
CPyL35: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_rest);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_rest);
    goto CPyL13;
CPyL37: ;
    CPy_DecRef(cpy_r_rest);
    goto CPyL29;
CPyL38: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL25;
}

PyObject *CPyPy_mypy___main___invert_flag_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"flag", 0};
    static CPyArg_Parser parser = {"O:invert_flag_name", kwlist, 0};
    PyObject *obj_flag;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_flag)) {
        return NULL;
    }
    PyObject *arg_flag;
    if (likely(PyUnicode_Check(obj_flag)))
        arg_flag = obj_flag;
    else {
        CPy_TypeError("str", obj_flag); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___invert_flag_name(arg_flag);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "invert_flag_name", 236, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___python_executable_prefix(PyObject *cpy_r_v) {
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
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 253, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "python_executable_prefix", 253, CPyStatic_mypy___main___globals, "str", cpy_r_r2);
        goto CPyL11;
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
        CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 253, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 258, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = CPyStatics[2734]; /* 'python' */
    cpy_r_r13 = CPyStr_Build(2, cpy_r_r12, cpy_r_v);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 260, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 260, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
}

PyObject *CPyPy_mypy___main___python_executable_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"v", 0};
    static CPyArg_Parser parser = {"O:python_executable_prefix", kwlist, 0};
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_v)) {
        return NULL;
    }
    PyObject *arg_v;
    if (likely(PyUnicode_Check(obj_v)))
        arg_v = obj_v;
    else {
        CPy_TypeError("str", obj_v); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___python_executable_prefix(arg_v);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "python_executable_prefix", 252, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main____python_executable_from_version(tuple_T2II cpy_r_python_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
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
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_str_ver;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_sys_exe;
    tuple_T3OOO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T2OO cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals, "tuple", cpy_r_r2);
        goto CPyL40;
    }
    cpy_r_r4 = CPySequenceTuple_GetSlice(cpy_r_r3, 0, 4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals, "tuple", cpy_r_r4);
        goto CPyL40;
    }
    CPyTagged_INCREF(cpy_r_python_version.f0);
    CPyTagged_INCREF(cpy_r_python_version.f1);
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3114 = CPyTagged_StealAsObject(cpy_r_python_version.f0);
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp3114);
    PyObject *__tmp3115 = CPyTagged_StealAsObject(cpy_r_python_version.f1);
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp3115);
    cpy_r_r7 = PyObject_RichCompare(cpy_r_r5, cpy_r_r6, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 264, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    if (!cpy_r_r8) goto CPyL10;
    cpy_r_r9 = CPyModule_sys;
    cpy_r_r10 = CPyStatics[425]; /* 'executable' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 265, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 265, CPyStatic_mypy___main___globals, "str", cpy_r_r11);
        goto CPyL40;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = CPyStatics[224]; /* '.' */
    cpy_r_r14 = (PyObject *)&PyUnicode_Type;
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[865]; /* 'map' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 266, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    CPyTagged_INCREF(cpy_r_python_version.f0);
    CPyTagged_INCREF(cpy_r_python_version.f1);
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3116 = CPyTagged_StealAsObject(cpy_r_python_version.f0);
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp3116);
    PyObject *__tmp3117 = CPyTagged_StealAsObject(cpy_r_python_version.f1);
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp3117);
    PyObject *cpy_r_r19[2] = {cpy_r_r14, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r20, 2, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 266, CPyStatic_mypy___main___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = PyUnicode_Join(cpy_r_r13, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 266, CPyStatic_mypy___main___globals);
        goto CPyL40;
    }
    cpy_r_str_ver = cpy_r_r22;
    cpy_r_r23 = CPyDef_mypy___main___python_executable_prefix(cpy_r_str_ver);
    CPy_DECREF(cpy_r_str_ver);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 270, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    cpy_r_r24 = CPyStatics[2735]; /* '-c' */
    cpy_r_r25 = CPyStatics[2736]; /* 'import sys; print(sys.executable)' */
    cpy_r_r26 = PyList_New(2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 270, CPyStatic_mypy___main___globals);
        goto CPyL42;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    CPy_INCREF(cpy_r_r24);
    *(PyObject * *)cpy_r_r28 = cpy_r_r24;
    cpy_r_r29 = cpy_r_r28 + 8;
    CPy_INCREF(cpy_r_r25);
    *(PyObject * *)cpy_r_r29 = cpy_r_r25;
    cpy_r_r30 = PyNumber_Add(cpy_r_r23, cpy_r_r26);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 270, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 270, CPyStatic_mypy___main___globals, "list", cpy_r_r30);
        goto CPyL27;
    }
    cpy_r_r32 = CPyModule_subprocess;
    cpy_r_r33 = CPyStatics[2737]; /* 'STDOUT' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 271, CPyStatic_mypy___main___globals);
        goto CPyL43;
    }
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 271, CPyStatic_mypy___main___globals);
        goto CPyL43;
    }
    cpy_r_r36 = CPyModule_subprocess;
    cpy_r_r37 = CPyStatics[2623]; /* 'check_output' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals);
        goto CPyL44;
    }
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r35);
    PyObject *cpy_r_r40[2] = {cpy_r_r31, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = CPyStatics[9455]; /* ('stderr',) */
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r41, 1, cpy_r_r42);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r39);
    if (likely(PyBytes_Check(cpy_r_r43) || PyByteArray_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals, "bytes", cpy_r_r43);
        goto CPyL27;
    }
    cpy_r_r45 = CPy_Decode(cpy_r_r44, NULL, NULL);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    cpy_r_r46 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r47[1] = {cpy_r_r45};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_VectorcallMethod(cpy_r_r46, cpy_r_r48, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r45);
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 269, CPyStatic_mypy___main___globals, "str", cpy_r_r49);
        goto CPyL27;
    }
    cpy_r_sys_exe = cpy_r_r50;
    return cpy_r_sys_exe;
CPyL27: ;
    cpy_r_r51 = CPy_CatchError();
    cpy_r_r52 = CPyModule_subprocess;
    cpy_r_r53 = CPyStatics[2624]; /* 'CalledProcessError' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 277, CPyStatic_mypy___main___globals);
        goto CPyL38;
    }
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 277, CPyStatic_mypy___main___globals);
        goto CPyL47;
    }
    cpy_r_r58.f0 = cpy_r_r54;
    cpy_r_r58.f1 = cpy_r_r57;
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r57);
    cpy_r_r59 = PyTuple_New(2);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3118 = cpy_r_r58.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp3118);
    PyObject *__tmp3119 = cpy_r_r58.f1;
    PyTuple_SET_ITEM(cpy_r_r59, 1, __tmp3119);
    cpy_r_r60 = CPy_ExceptionMatches(cpy_r_r59);
    CPy_DecRef(cpy_r_r59);
    if (!cpy_r_r60) goto CPyL36;
    cpy_r_r61 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r61;
    CPy_DecRef(cpy_r_e);
    CPyTagged_INCREF(cpy_r_python_version.f0);
    CPyTagged_INCREF(cpy_r_python_version.f1);
    cpy_r_r62 = PyTuple_New(2);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3120 = CPyTagged_StealAsObject(cpy_r_python_version.f0);
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp3120);
    PyObject *__tmp3121 = CPyTagged_StealAsObject(cpy_r_python_version.f1);
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp3121);
    cpy_r_r63 = PyObject_Str(cpy_r_r62);
    CPy_DecRef(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 279, CPyStatic_mypy___main___globals);
        goto CPyL38;
    }
    cpy_r_r64 = CPyStatics[2738]; /* 'failed to find a Python executable matching version ' */
    cpy_r_r65 = CPyStatics[2739]; /* (', perhaps try --python-executable, or '
                                     '--no-site-packages?') */
    cpy_r_r66 = CPyStr_Build(3, cpy_r_r64, cpy_r_r63, cpy_r_r65);
    CPy_DecRef(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 279, CPyStatic_mypy___main___globals);
        goto CPyL38;
    }
    cpy_r_r67 = (PyObject *)CPyType_mypy___main___PythonExecutableInferenceError;
    PyObject *cpy_r_r68[1] = {cpy_r_r66};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 278, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    CPy_DecRef(cpy_r_r66);
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_mypy___main___PythonExecutableInferenceError))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "_python_executable_from_version", 278, CPyStatic_mypy___main___globals, "mypy.main.PythonExecutableInferenceError", cpy_r_r70);
        goto CPyL38;
    }
    CPy_Raise(cpy_r_r71);
    CPy_DecRef(cpy_r_r71);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 278, CPyStatic_mypy___main___globals);
        goto CPyL38;
    } else
        goto CPyL49;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL50;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    cpy_r_r72 = CPy_KeepPropagating();
    if (!cpy_r_r72) goto CPyL40;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r73 = NULL;
    return cpy_r_r73;
CPyL41: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL27;
CPyL43: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL27;
CPyL44: ;
    CPy_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r35);
    goto CPyL27;
CPyL45: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r39);
    goto CPyL27;
CPyL46: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL27;
CPyL47: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    goto CPyL35;
CPyL50: ;
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    goto CPyL37;
}

PyObject *CPyPy_mypy___main____python_executable_from_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"python_version", 0};
    static CPyArg_Parser parser = {"O:_python_executable_from_version", kwlist, 0};
    PyObject *obj_python_version;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_python_version)) {
        return NULL;
    }
    tuple_T2II arg_python_version;
    PyObject *__tmp3122;
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        __tmp3122 = NULL;
        goto __LL3123;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        __tmp3122 = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        __tmp3122 = NULL;
    }
    if (__tmp3122 == NULL) goto __LL3123;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        __tmp3122 = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        __tmp3122 = NULL;
    }
    if (__tmp3122 == NULL) goto __LL3123;
    __tmp3122 = obj_python_version;
__LL3123: ;
    if (unlikely(__tmp3122 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_python_version); goto fail;
    } else {
        PyObject *__tmp3124 = PyTuple_GET_ITEM(obj_python_version, 0);
        CPyTagged __tmp3125;
        if (likely(PyLong_Check(__tmp3124)))
            __tmp3125 = CPyTagged_BorrowFromObject(__tmp3124);
        else {
            CPy_TypeError("int", __tmp3124); goto fail;
        }
        arg_python_version.f0 = __tmp3125;
        PyObject *__tmp3126 = PyTuple_GET_ITEM(obj_python_version, 1);
        CPyTagged __tmp3127;
        if (likely(PyLong_Check(__tmp3126)))
            __tmp3127 = CPyTagged_BorrowFromObject(__tmp3126);
        else {
            CPy_TypeError("int", __tmp3126); goto fail;
        }
        arg_python_version.f1 = __tmp3127;
    }
    PyObject *retval = CPyDef_mypy___main____python_executable_from_version(arg_python_version);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "_python_executable_from_version", 263, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___infer_python_executable(PyObject *cpy_r_options, PyObject *cpy_r_special_opts) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_python_executable;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    tuple_T2II cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyStatics[1585]; /* 'python_executable' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "infer_python_executable", 296, CPyStatic_mypy___main___globals);
        goto CPyL14;
    }
    cpy_r_r2 = PyObject_IsTrue(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/main.py", "infer_python_executable", 296, CPyStatic_mypy___main___globals);
        goto CPyL15;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL16;
    cpy_r_r5 = cpy_r_r1;
    goto CPyL5;
CPyL4: ;
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r5 = cpy_r_r6;
CPyL5: ;
    cpy_r_python_executable = cpy_r_r5;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_python_executable == cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyStatics[2740]; /* 'no_executable' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "infer_python_executable", 299, CPyStatic_mypy___main___globals);
        goto CPyL17;
    }
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/main.py", "infer_python_executable", 299, CPyStatic_mypy___main___globals);
        goto CPyL17;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) goto CPyL12;
    cpy_r_r14 = ((mypy___options___OptionsObject *)cpy_r_options)->_no_site_packages;
    if (cpy_r_r14) {
        goto CPyL12;
    } else
        goto CPyL18;
CPyL10: ;
    cpy_r_r15 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r15.f0);
    CPyTagged_INCREF(cpy_r_r15.f1);
    cpy_r_r16 = CPyDef_mypy___main____python_executable_from_version(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r15.f0);
    CPyTagged_DECREF(cpy_r_r15.f1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "infer_python_executable", 300, CPyStatic_mypy___main___globals);
        goto CPyL14;
    }
    cpy_r_python_executable = cpy_r_r16;
CPyL12: ;
    if (PyUnicode_Check(cpy_r_python_executable))
        cpy_r_r17 = cpy_r_python_executable;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL3128;
    if (cpy_r_python_executable == Py_None)
        cpy_r_r17 = cpy_r_python_executable;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL3128;
    CPy_TypeErrorTraceback("mypy/main.py", "infer_python_executable", 301, CPyStatic_mypy___main___globals, "str or None", cpy_r_python_executable);
    goto CPyL14;
__LL3128: ;
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_python_executable);
    ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable = cpy_r_r17;
    return 1;
CPyL14: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL4;
CPyL17: ;
    CPy_DecRef(cpy_r_python_executable);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_python_executable);
    goto CPyL10;
}

PyObject *CPyPy_mypy___main___infer_python_executable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", "special_opts", 0};
    static CPyArg_Parser parser = {"OO:infer_python_executable", kwlist, 0};
    PyObject *obj_options;
    PyObject *obj_special_opts;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_options, &obj_special_opts)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_special_opts = obj_special_opts;
    char retval = CPyDef_mypy___main___infer_python_executable(arg_options, arg_special_opts);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "infer_python_executable", 284, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___CapturableArgumentParser_____init__(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 345, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r4 = CPyStatics[795]; /* 'pop' */
    PyObject *cpy_r_r5[3] = {cpy_r_kwargs, cpy_r_r0, cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 345, CPyStatic_mypy___main___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r3);
    if (((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stdout != NULL) {
        CPy_DECREF(((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stdout);
    }
    ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stdout = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 345, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r9 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r10 = CPyModule_sys;
    cpy_r_r11 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 346, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStatics[795]; /* 'pop' */
    PyObject *cpy_r_r14[3] = {cpy_r_kwargs, cpy_r_r9, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 346, CPyStatic_mypy___main___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r12);
    if (((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr != NULL) {
        CPy_DECREF(((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr);
    }
    ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 346, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[1670]; /* 'super' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r21 = (PyObject *)CPyType_mypy___main___CapturableArgumentParser;
    PyObject *cpy_r_r22[2] = {cpy_r_r21, cpy_r_self};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 2, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r25 = CPyStatics[288]; /* '__init__' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL16;
    }
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL19;
    }
    cpy_r_r28 = CPyList_Extend(cpy_r_r27, cpy_r_args);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL11: ;
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL20;
    }
    cpy_r_r30 = CPyDict_UpdateInDisplay(cpy_r_r29, cpy_r_kwargs);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    cpy_r_r32 = PyList_AsTuple(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL23;
    }
    cpy_r_r33 = PyObject_Call(cpy_r_r26, cpy_r_r32, cpy_r_r29);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 347, CPyStatic_mypy___main___globals);
        goto CPyL16;
    } else
        goto CPyL24;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL16;
CPyL21: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL11;
CPyL22: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    goto CPyL16;
CPyL24: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL15;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "%", "__init__", kwlist, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    char retval = CPyDef_mypy___main___CapturableArgumentParser_____init__(arg_self, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("mypy/main.py", "__init__", 344, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___CapturableArgumentParser___print_usage(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    if (cpy_r_file != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_file = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_file == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r3 = ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stdout;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/main.py", "print_usage", "CapturableArgumentParser", "stdout", 354, CPyStatic_mypy___main___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_file = cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPyStatics[2741]; /* 'format_usage' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "print_usage", 355, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "print_usage", 355, CPyStatic_mypy___main___globals, "str", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_r9 = CPyDef_mypy___main___CapturableArgumentParser____print_message(cpy_r_self, cpy_r_r8, cpy_r_file);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_file);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/main.py", "print_usage", 355, CPyStatic_mypy___main___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL10: ;
    CPy_INCREF(cpy_r_file);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL3;
CPyL12: ;
    CPy_DecRef(cpy_r_file);
    goto CPyL9;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser___print_usage(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"|O:print_usage", kwlist, 0};
    PyObject *obj_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (obj_file == NULL) {
        arg_file = NULL;
        goto __LL3129;
    }
    arg_file = obj_file;
    if (arg_file != NULL) goto __LL3129;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL3129;
    CPy_TypeError("object or None", obj_file); 
    goto fail;
__LL3129: ;
    char retval = CPyDef_mypy___main___CapturableArgumentParser___print_usage(arg_self, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "print_usage", 352, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___CapturableArgumentParser___print_help(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    if (cpy_r_file != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_file = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_file == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r3 = ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stdout;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/main.py", "print_help", "CapturableArgumentParser", "stdout", 359, CPyStatic_mypy___main___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_file = cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPyStatics[2742]; /* 'format_help' */
    PyObject *cpy_r_r5[1] = {cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "print_help", 360, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "print_help", 360, CPyStatic_mypy___main___globals, "str", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_r9 = CPyDef_mypy___main___CapturableArgumentParser____print_message(cpy_r_self, cpy_r_r8, cpy_r_file);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_file);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/main.py", "print_help", 360, CPyStatic_mypy___main___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL10: ;
    CPy_INCREF(cpy_r_file);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL3;
CPyL12: ;
    CPy_DecRef(cpy_r_file);
    goto CPyL9;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser___print_help(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"|O:print_help", kwlist, 0};
    PyObject *obj_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (obj_file == NULL) {
        arg_file = NULL;
        goto __LL3130;
    }
    arg_file = obj_file;
    if (arg_file != NULL) goto __LL3130;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL3130;
    CPy_TypeError("object or None", obj_file); 
    goto fail;
__LL3130: ;
    char retval = CPyDef_mypy___main___CapturableArgumentParser___print_help(arg_self, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "print_help", 357, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___CapturableArgumentParser____print_message(PyObject *cpy_r_self, PyObject *cpy_r_message, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    if (cpy_r_file != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_file = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStr_IsTrue(cpy_r_message);
    if (!cpy_r_r1) goto CPyL11;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_file == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL12;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_r4 = ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/main.py", "_print_message", "CapturableArgumentParser", "stderr", 365, CPyStatic_mypy___main___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_file = cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = cpy_r_file;
    cpy_r_r6 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r7[2] = {cpy_r_r5, cpy_r_message};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "_print_message", 366, CPyStatic_mypy___main___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r10 = cpy_r_r9;
    CPy_DECREF(cpy_r_r10);
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL10: ;
    CPy_INCREF(cpy_r_file);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL4;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser____print_message(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"message", "file", 0};
    static CPyArg_Parser parser = {"O|O:_print_message", kwlist, 0};
    PyObject *obj_message;
    PyObject *obj_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_message, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_file;
    if (obj_file == NULL) {
        arg_file = NULL;
        goto __LL3131;
    }
    arg_file = obj_file;
    if (arg_file != NULL) goto __LL3131;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL3131;
    CPy_TypeError("object or None", obj_file); 
    goto fail;
__LL3131: ;
    char retval = CPyDef_mypy___main___CapturableArgumentParser____print_message(arg_self, arg_message, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "_print_message", 362, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___CapturableArgumentParser___exit(PyObject *cpy_r_self, CPyTagged cpy_r_status, PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    if (cpy_r_status != CPY_INT_TAG) goto CPyL14;
    cpy_r_status = 0;
CPyL2: ;
    if (cpy_r_message != NULL) goto CPyL15;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_message = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_message != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL16;
    CPy_INCREF(cpy_r_message);
    if (likely(cpy_r_message != Py_None))
        cpy_r_r3 = cpy_r_message;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "exit", 371, CPyStatic_mypy___main___globals, "str", cpy_r_message);
        goto CPyL17;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL16;
    if (likely(cpy_r_message != Py_None))
        cpy_r_r5 = cpy_r_message;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "exit", 373, CPyStatic_mypy___main___globals, "str", cpy_r_message);
        goto CPyL18;
    }
    cpy_r_r6 = ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/main.py", "exit", "CapturableArgumentParser", "stderr", 373, CPyStatic_mypy___main___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r6);
CPyL9: ;
    cpy_r_r7 = CPyDef_mypy___main___CapturableArgumentParser____print_message(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/main.py", "exit", 373, CPyStatic_mypy___main___globals);
        goto CPyL18;
    }
CPyL10: ;
    cpy_r_r8 = CPyModule_sys;
    cpy_r_r9 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "exit", 374, CPyStatic_mypy___main___globals);
        goto CPyL18;
    }
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_status);
    PyObject *cpy_r_r12[1] = {cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "exit", 374, CPyStatic_mypy___main___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL12: ;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL14: ;
    CPyTagged_INCREF(cpy_r_status);
    goto CPyL2;
CPyL15: ;
    CPy_INCREF(cpy_r_message);
    goto CPyL4;
CPyL16: ;
    CPy_DECREF(cpy_r_message);
    goto CPyL10;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_message);
    goto CPyL13;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL13;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL21: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL12;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser___exit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"status", "message", 0};
    static CPyArg_Parser parser = {"|OO:exit", kwlist, 0};
    PyObject *obj_status = NULL;
    PyObject *obj_message = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_status, &obj_message)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    CPyTagged arg_status;
    if (obj_status == NULL) {
        arg_status = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_status)))
        arg_status = CPyTagged_BorrowFromObject(obj_status);
    else {
        CPy_TypeError("int", obj_status); goto fail;
    }
    PyObject *arg_message;
    if (obj_message == NULL) {
        arg_message = NULL;
        goto __LL3132;
    }
    if (PyUnicode_Check(obj_message))
        arg_message = obj_message;
    else {
        arg_message = NULL;
    }
    if (arg_message != NULL) goto __LL3132;
    if (obj_message == Py_None)
        arg_message = obj_message;
    else {
        arg_message = NULL;
    }
    if (arg_message != NULL) goto __LL3132;
    CPy_TypeError("str or None", obj_message); 
    goto fail;
__LL3132: ;
    PyObject *retval = CPyDef_mypy___main___CapturableArgumentParser___exit(arg_self, arg_status, arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "exit", 371, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___CapturableArgumentParser___error(PyObject *cpy_r_self, PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((mypy___main___CapturableArgumentParserObject *)cpy_r_self)->_stderr;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/main.py", "error", "CapturableArgumentParser", "stderr", 385, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_mypy___main___CapturableArgumentParser___print_usage(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/main.py", "error", 385, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r2 = CPyStatics[1671]; /* 'prog' */
    cpy_r_r3 = CPyStatics[1671]; /* 'prog' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_self, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 386, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "error", 386, CPyStatic_mypy___main___globals, "str", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = CPyStatics[2277]; /* 'message' */
    cpy_r_r7 = CPyDict_Build(2, cpy_r_r2, cpy_r_r5, cpy_r_r6, cpy_r_message);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 386, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_args = cpy_r_r7;
    cpy_r_r8 = CPyStatics[2743]; /* '%(prog)s: error: %(message)s\n' */
    cpy_r_r9 = CPyStatic_mypy___main___globals;
    cpy_r_r10 = CPyStatics[2744]; /* 'gettext' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r8};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals, "str", cpy_r_r14);
        goto CPyL13;
    }
    cpy_r_r16 = PyNumber_Remainder(cpy_r_r15, cpy_r_args);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals, "str", cpy_r_r16);
        goto CPyL12;
    }
    cpy_r_r18 = CPyDef_mypy___main___CapturableArgumentParser___exit(cpy_r_self, 4, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "error", 387, CPyStatic_mypy___main___globals);
        goto CPyL12;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r19 = Py_None;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL11;
}

PyObject *CPyPy_mypy___main___CapturableArgumentParser___error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"message", 0};
    static CPyArg_Parser parser = {"O:error", kwlist, 0};
    PyObject *obj_message;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_message)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableArgumentParser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableArgumentParser", obj_self); 
        goto fail;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___CapturableArgumentParser___error(arg_self, arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "error", 376, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___CapturableVersionAction_____init__(PyObject *cpy_r_self, PyObject *cpy_r_option_strings, PyObject *cpy_r_version, PyObject *cpy_r_dest, PyObject *cpy_r_default, PyObject *cpy_r_help, PyObject *cpy_r_stdout) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
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
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    if (cpy_r_dest != NULL) goto CPyL23;
    cpy_r_r0 = CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____dest;
    CPy_INCREF(cpy_r_r0);
    cpy_r_dest = cpy_r_r0;
CPyL2: ;
    if (cpy_r_default != NULL) goto CPyL24;
    cpy_r_r1 = CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_default = cpy_r_r1;
CPyL4: ;
    if (cpy_r_help != NULL) goto CPyL25;
    cpy_r_r2 = CPyStatics[2745]; /* "show program's version number and exit" */
    CPy_INCREF(cpy_r_r2);
    cpy_r_help = cpy_r_r2;
CPyL6: ;
    if (cpy_r_stdout != NULL) goto CPyL26;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_stdout = cpy_r_r3;
CPyL8: ;
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[1670]; /* 'super' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 411, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    cpy_r_r7 = (PyObject *)CPyType_mypy___main___CapturableVersionAction;
    PyObject *cpy_r_r8[2] = {cpy_r_r7, cpy_r_self};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 411, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    cpy_r_r11 = CPyStatics[288]; /* '__init__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 411, CPyStatic_mypy___main___globals);
        goto CPyL27;
    }
    cpy_r_r13 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r14[5] = {
        cpy_r_option_strings, cpy_r_dest, cpy_r_default, cpy_r_r13,
        cpy_r_help
    };
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9456]; /* ('option_strings', 'dest', 'default', 'nargs', 'help') */
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 0, cpy_r_r16);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 411, CPyStatic_mypy___main___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL12: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_help);
    CPy_INCREF(cpy_r_version);
    if (((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_version != NULL) {
        CPy_DECREF(((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_version);
    }
    ((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_version = cpy_r_version;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 414, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_stdout != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL30;
    CPy_INCREF(cpy_r_stdout);
    cpy_r_r21 = cpy_r_stdout;
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 409, CPyStatic_mypy___main___globals);
        goto CPyL29;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL30;
    cpy_r_r25 = cpy_r_stdout;
    goto CPyL20;
CPyL18: ;
    cpy_r_r26 = CPyModule_sys;
    cpy_r_r27 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 415, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    cpy_r_r25 = cpy_r_r28;
CPyL20: ;
    if (((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_stdout != NULL) {
        CPy_DECREF(((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_stdout);
    }
    ((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_stdout = cpy_r_r25;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/main.py", "__init__", 415, CPyStatic_mypy___main___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL23: ;
    CPy_INCREF(cpy_r_dest);
    goto CPyL2;
CPyL24: ;
    CPy_INCREF(cpy_r_default);
    goto CPyL4;
CPyL25: ;
    CPy_INCREF(cpy_r_help);
    goto CPyL6;
CPyL26: ;
    CPy_INCREF(cpy_r_stdout);
    goto CPyL8;
CPyL27: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_help);
    CPy_DecRef(cpy_r_stdout);
    goto CPyL22;
CPyL28: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL12;
CPyL29: ;
    CPy_DecRef(cpy_r_stdout);
    goto CPyL22;
CPyL30: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL18;
}

PyObject *CPyPy_mypy___main___CapturableVersionAction_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"option_strings", "version", "dest", "default", "help", "stdout", 0};
    PyObject *obj_option_strings;
    PyObject *obj_version;
    PyObject *obj_dest = NULL;
    PyObject *obj_default = NULL;
    PyObject *obj_help = NULL;
    PyObject *obj_stdout = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|OOOO", "__init__", kwlist, &obj_option_strings, &obj_version, &obj_dest, &obj_default, &obj_help, &obj_stdout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableVersionAction))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableVersionAction", obj_self); 
        goto fail;
    }
    PyObject *arg_option_strings = obj_option_strings;
    PyObject *arg_version;
    if (likely(PyUnicode_Check(obj_version)))
        arg_version = obj_version;
    else {
        CPy_TypeError("str", obj_version); 
        goto fail;
    }
    PyObject *arg_dest;
    if (obj_dest == NULL) {
        arg_dest = NULL;
    } else if (likely(PyUnicode_Check(obj_dest)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("str", obj_dest); 
        goto fail;
    }
    PyObject *arg_default;
    if (obj_default == NULL) {
        arg_default = NULL;
    } else if (likely(PyUnicode_Check(obj_default)))
        arg_default = obj_default;
    else {
        CPy_TypeError("str", obj_default); 
        goto fail;
    }
    PyObject *arg_help;
    if (obj_help == NULL) {
        arg_help = NULL;
    } else if (likely(PyUnicode_Check(obj_help)))
        arg_help = obj_help;
    else {
        CPy_TypeError("str", obj_help); 
        goto fail;
    }
    PyObject *arg_stdout;
    if (obj_stdout == NULL) {
        arg_stdout = NULL;
        goto __LL3133;
    }
    arg_stdout = obj_stdout;
    if (arg_stdout != NULL) goto __LL3133;
    if (obj_stdout == Py_None)
        arg_stdout = obj_stdout;
    else {
        arg_stdout = NULL;
    }
    if (arg_stdout != NULL) goto __LL3133;
    CPy_TypeError("object or None", obj_stdout); 
    goto fail;
__LL3133: ;
    char retval = CPyDef_mypy___main___CapturableVersionAction_____init__(arg_self, arg_option_strings, arg_version, arg_dest, arg_default, arg_help, arg_stdout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__init__", 402, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___CapturableVersionAction_____call__(PyObject *cpy_r_self, PyObject *cpy_r_parser, PyObject *cpy_r_namespace, PyObject *cpy_r_values, PyObject *cpy_r_option_string) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_formatter;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    if (cpy_r_option_string != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_option_string = cpy_r_r0;
    CPy_DECREF(cpy_r_option_string);
CPyL2: ;
    cpy_r_r1 = CPyStatics[2748]; /* '_get_formatter' */
    PyObject *cpy_r_r2[1] = {cpy_r_parser};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__call__", 424, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
    cpy_r_formatter = cpy_r_r4;
    cpy_r_r5 = ((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_version;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/main.py", "__call__", "CapturableVersionAction", "version", 425, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = CPyStatics[2749]; /* 'add_text' */
    PyObject *cpy_r_r7[2] = {cpy_r_formatter, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__call__", 425, CPyStatic_mypy___main___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL5: ;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r10 = CPyStatics[2742]; /* 'format_help' */
    PyObject *cpy_r_r11[1] = {cpy_r_formatter};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__call__", 426, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_formatter);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "__call__", 426, CPyStatic_mypy___main___globals, "str", cpy_r_r13);
        goto CPyL11;
    }
    cpy_r_r15 = ((mypy___main___CapturableVersionActionObject *)cpy_r_self)->_stdout;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/main.py", "__call__", "CapturableVersionAction", "stdout", 426, CPyStatic_mypy___main___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r15);
CPyL8: ;
    cpy_r_r16 = CPyStatics[2750]; /* '_print_message' */
    PyObject *cpy_r_r17[3] = {cpy_r_parser, cpy_r_r14, cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__call__", 426, CPyStatic_mypy___main___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL9: ;
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r20 = CPyStatics[1680]; /* 'exit' */
    PyObject *cpy_r_r21[1] = {cpy_r_parser};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "__call__", 427, CPyStatic_mypy___main___globals);
        goto CPyL11;
    } else
        goto CPyL18;
CPyL10: ;
    cpy_r_r24 = Py_None;
    CPy_INCREF(cpy_r_r24);
    return cpy_r_r24;
CPyL11: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL12: ;
    CPy_DecRef(cpy_r_formatter);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_formatter);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL5;
CPyL15: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL11;
CPyL17: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL9;
CPyL18: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL10;
}

PyObject *CPyPy_mypy___main___CapturableVersionAction_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"parser", "namespace", "values", "option_string", 0};
    static CPyArg_Parser parser = {"OOO|O:__call__", kwlist, 0};
    PyObject *obj_parser;
    PyObject *obj_namespace;
    PyObject *obj_values;
    PyObject *obj_option_string = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_parser, &obj_namespace, &obj_values, &obj_option_string)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___main___CapturableVersionAction))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.main.CapturableVersionAction", obj_self); 
        goto fail;
    }
    PyObject *arg_parser = obj_parser;
    PyObject *arg_namespace = obj_namespace;
    PyObject *arg_values;
    if (PyUnicode_Check(obj_values))
        arg_values = obj_values;
    else {
        arg_values = NULL;
    }
    if (arg_values != NULL) goto __LL3134;
    arg_values = obj_values;
    if (arg_values != NULL) goto __LL3134;
    if (obj_values == Py_None)
        arg_values = obj_values;
    else {
        arg_values = NULL;
    }
    if (arg_values != NULL) goto __LL3134;
    CPy_TypeError("union[str, object, None]", obj_values); 
    goto fail;
__LL3134: ;
    PyObject *arg_option_string;
    if (obj_option_string == NULL) {
        arg_option_string = NULL;
        goto __LL3135;
    }
    if (PyUnicode_Check(obj_option_string))
        arg_option_string = obj_option_string;
    else {
        arg_option_string = NULL;
    }
    if (arg_option_string != NULL) goto __LL3135;
    if (obj_option_string == Py_None)
        arg_option_string = obj_option_string;
    else {
        arg_option_string = NULL;
    }
    if (arg_option_string != NULL) goto __LL3135;
    CPy_TypeError("str or None", obj_option_string); 
    goto fail;
__LL3135: ;
    PyObject *retval = CPyDef_mypy___main___CapturableVersionAction_____call__(arg_self, arg_parser, arg_namespace, arg_values, arg_option_string);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__call__", 417, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___add_invertible_flag_process_options_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___main___add_invertible_flag_process_options_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___main___add_invertible_flag_process_options_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__get__", -1, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___add_invertible_flag_process_options_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_flag, PyObject *cpy_r_inverse, char cpy_r_default, PyObject *cpy_r_dest, PyObject *cpy_r_help, char cpy_r_strict_flag, PyObject *cpy_r_group) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_add_invertible_flag;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
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
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_arg;
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
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    tuple_T2OC cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = ((mypy___main___add_invertible_flag_process_options_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/main.py", "add_invertible_flag", "add_invertible_flag_process_options_obj", "__mypyc_env__", 463, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_add_invertible_flag;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/main.py", "add_invertible_flag", "process_options_env", "add_invertible_flag", -1, CPyStatic_mypy___main___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_add_invertible_flag = cpy_r_r1;
    CPy_DECREF(cpy_r_add_invertible_flag);
    if (cpy_r_inverse != NULL) goto CPyL50;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_inverse = cpy_r_r2;
CPyL4: ;
    if (cpy_r_dest != NULL) goto CPyL51;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_dest = cpy_r_r3;
CPyL6: ;
    if (cpy_r_strict_flag != 2) goto CPyL8;
    cpy_r_strict_flag = 0;
CPyL8: ;
    if (cpy_r_group != NULL) goto CPyL52;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    cpy_r_group = cpy_r_r4;
CPyL10: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_inverse == cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL53;
    } else
        goto CPyL13;
CPyL11: ;
    cpy_r_r7 = CPyDef_mypy___main___invert_flag_name(cpy_r_flag);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 474, CPyStatic_mypy___main___globals);
        goto CPyL54;
    }
    cpy_r_inverse = cpy_r_r7;
CPyL13: ;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_group == cpy_r_r8;
    if (cpy_r_r9) {
        goto CPyL55;
    } else
        goto CPyL16;
CPyL14: ;
    cpy_r_r10 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_parser;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/main.py", "add_invertible_flag", "process_options_env", "parser", 476, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r10);
CPyL15: ;
    cpy_r_group = cpy_r_r10;
CPyL16: ;
    cpy_r_r11 = CPyModule_argparse;
    cpy_r_r12 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 478, CPyStatic_mypy___main___globals);
        goto CPyL57;
    }
    cpy_r_r14 = cpy_r_help == cpy_r_r13;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL58;
    cpy_r_r16 = CPyStatics[2751]; /* ' (inverse: ' */
    CPy_INCREF(cpy_r_inverse);
    if (likely(cpy_r_inverse != Py_None))
        cpy_r_r17 = cpy_r_inverse;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 479, CPyStatic_mypy___main___globals, "str", cpy_r_inverse);
        goto CPyL57;
    }
    cpy_r_r18 = CPyStatics[72]; /* ')' */
    cpy_r_r19 = CPyStr_Build(3, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 479, CPyStatic_mypy___main___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_help);
    cpy_r_r20 = CPyStr_Append(cpy_r_help, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 479, CPyStatic_mypy___main___globals);
        goto CPyL57;
    }
    cpy_r_help = cpy_r_r20;
CPyL22: ;
    if (!cpy_r_default) goto CPyL24;
    cpy_r_r21 = CPyStatics[2752]; /* 'store_false' */
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL25;
CPyL24: ;
    cpy_r_r23 = CPyStatics[1819]; /* 'store_true' */
    CPy_INCREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r23;
CPyL25: ;
    CPy_INCREF(cpy_r_group);
    cpy_r_r24 = cpy_r_group;
    cpy_r_r25 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r26[5] = {cpy_r_r24, cpy_r_flag, cpy_r_r22, cpy_r_dest, cpy_r_help};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775810ULL, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 481, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_help);
    cpy_r_r30 = cpy_r_r29;
    cpy_r_arg = cpy_r_r30;
    cpy_r_r31 = CPyStatics[2747]; /* 'dest' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_arg, cpy_r_r31);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 484, CPyStatic_mypy___main___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 484, CPyStatic_mypy___main___globals, "str", cpy_r_r32);
        goto CPyL60;
    }
    cpy_r_dest = cpy_r_r33;
    if (likely(cpy_r_inverse != Py_None))
        cpy_r_r34 = cpy_r_inverse;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 486, CPyStatic_mypy___main___globals, "str", cpy_r_inverse);
        goto CPyL54;
    }
    if (!cpy_r_default) goto CPyL32;
    cpy_r_r35 = CPyStatics[1819]; /* 'store_true' */
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL33;
CPyL32: ;
    cpy_r_r37 = CPyStatics[2752]; /* 'store_false' */
    CPy_INCREF(cpy_r_r37);
    cpy_r_r36 = cpy_r_r37;
CPyL33: ;
    CPy_INCREF(cpy_r_dest);
    if (likely(cpy_r_dest != Py_None))
        cpy_r_r38 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 488, CPyStatic_mypy___main___globals, "str", cpy_r_dest);
        goto CPyL61;
    }
    cpy_r_r39 = CPyModule_argparse;
    cpy_r_r40 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 489, CPyStatic_mypy___main___globals);
        goto CPyL62;
    }
    cpy_r_r42 = cpy_r_group;
    cpy_r_r43 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r44[5] = {cpy_r_r42, cpy_r_r34, cpy_r_r36, cpy_r_r38, cpy_r_r41};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r47 = PyObject_VectorcallMethod(cpy_r_r43, cpy_r_r45, 9223372036854775810ULL, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 485, CPyStatic_mypy___main___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r48 = cpy_r_r47;
    CPy_DECREF(cpy_r_r48);
    if (!cpy_r_strict_flag) goto CPyL64;
    if (likely(cpy_r_dest != Py_None))
        cpy_r_r49 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 492, CPyStatic_mypy___main___globals, "str", cpy_r_dest);
        goto CPyL65;
    }
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_r49 != cpy_r_r50;
    if (cpy_r_r51) {
        goto CPyL42;
    } else
        goto CPyL66;
CPyL40: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 492, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r53 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_strict_flag_names;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/main.py", "add_invertible_flag", "process_options_env", "strict_flag_names", 493, CPyStatic_mypy___main___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r53);
CPyL43: ;
    cpy_r_r54 = PyList_Append(cpy_r_r53, cpy_r_flag);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 493, CPyStatic_mypy___main___globals);
        goto CPyL65;
    }
    cpy_r_r56 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_strict_flag_assignments;
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'strict_flag_assignments' of 'process_options_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 494, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
CPyL45: ;
    if (likely(cpy_r_dest != Py_None))
        cpy_r_r57 = cpy_r_dest;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "add_invertible_flag", 494, CPyStatic_mypy___main___globals, "str", cpy_r_dest);
        goto CPyL68;
    }
    cpy_r_r58 = cpy_r_default ^ 1;
    cpy_r_r59.f0 = cpy_r_r57;
    cpy_r_r59.f1 = cpy_r_r58;
    CPy_INCREF(cpy_r_r59.f0);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r60 = PyTuple_New(2);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3136 = cpy_r_r59.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp3136);
    PyObject *__tmp3137 = cpy_r_r59.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3137);
    PyTuple_SET_ITEM(cpy_r_r60, 1, __tmp3137);
    cpy_r_r61 = PyList_Append(cpy_r_r56, cpy_r_r60);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 494, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
CPyL47: ;
    return 1;
CPyL48: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL50: ;
    CPy_INCREF(cpy_r_inverse);
    goto CPyL4;
CPyL51: ;
    CPy_INCREF(cpy_r_dest);
    goto CPyL6;
CPyL52: ;
    CPy_INCREF(cpy_r_group);
    goto CPyL10;
CPyL53: ;
    CPy_DECREF(cpy_r_inverse);
    goto CPyL11;
CPyL54: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL55: ;
    CPy_DECREF(cpy_r_group);
    goto CPyL14;
CPyL56: ;
    CPy_DecRef(cpy_r_inverse);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL57: ;
    CPy_DecRef(cpy_r_inverse);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL58: ;
    CPy_INCREF(cpy_r_help);
    goto CPyL22;
CPyL59: ;
    CPy_DecRef(cpy_r_inverse);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_help);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r24);
    goto CPyL48;
CPyL60: ;
    CPy_DecRef(cpy_r_inverse);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL61: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL48;
CPyL62: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r38);
    goto CPyL48;
CPyL63: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL48;
CPyL64: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r0);
    goto CPyL47;
CPyL65: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL66: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r0);
    goto CPyL40;
CPyL67: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL48;
CPyL68: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL48;
}

PyObject *CPyPy_mypy___main___add_invertible_flag_process_options_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"flag", "inverse", "dest", "strict_flag", "group", "default", "help", 0};
    static CPyArg_Parser parser = {"O|$OOOO@OO:__call__", kwlist, 0};
    PyObject *obj_flag;
    PyObject *obj_inverse = NULL;
    PyObject *obj_default;
    PyObject *obj_dest = NULL;
    PyObject *obj_help;
    PyObject *obj_strict_flag = NULL;
    PyObject *obj_group = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_flag, &obj_inverse, &obj_dest, &obj_strict_flag, &obj_group, &obj_default, &obj_help)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_flag;
    if (likely(PyUnicode_Check(obj_flag)))
        arg_flag = obj_flag;
    else {
        CPy_TypeError("str", obj_flag); 
        goto fail;
    }
    PyObject *arg_inverse;
    if (obj_inverse == NULL) {
        arg_inverse = NULL;
        goto __LL3138;
    }
    if (PyUnicode_Check(obj_inverse))
        arg_inverse = obj_inverse;
    else {
        arg_inverse = NULL;
    }
    if (arg_inverse != NULL) goto __LL3138;
    if (obj_inverse == Py_None)
        arg_inverse = obj_inverse;
    else {
        arg_inverse = NULL;
    }
    if (arg_inverse != NULL) goto __LL3138;
    CPy_TypeError("str or None", obj_inverse); 
    goto fail;
__LL3138: ;
    char arg_default;
    if (unlikely(!PyBool_Check(obj_default))) {
        CPy_TypeError("bool", obj_default); goto fail;
    } else
        arg_default = obj_default == Py_True;
    PyObject *arg_dest;
    if (obj_dest == NULL) {
        arg_dest = NULL;
        goto __LL3139;
    }
    if (PyUnicode_Check(obj_dest))
        arg_dest = obj_dest;
    else {
        arg_dest = NULL;
    }
    if (arg_dest != NULL) goto __LL3139;
    if (obj_dest == Py_None)
        arg_dest = obj_dest;
    else {
        arg_dest = NULL;
    }
    if (arg_dest != NULL) goto __LL3139;
    CPy_TypeError("str or None", obj_dest); 
    goto fail;
__LL3139: ;
    PyObject *arg_help;
    if (likely(PyUnicode_Check(obj_help)))
        arg_help = obj_help;
    else {
        CPy_TypeError("str", obj_help); 
        goto fail;
    }
    char arg_strict_flag;
    if (obj_strict_flag == NULL) {
        arg_strict_flag = 2;
    } else if (unlikely(!PyBool_Check(obj_strict_flag))) {
        CPy_TypeError("bool", obj_strict_flag); goto fail;
    } else
        arg_strict_flag = obj_strict_flag == Py_True;
    PyObject *arg_group;
    if (obj_group == NULL) {
        arg_group = NULL;
        goto __LL3140;
    }
    arg_group = obj_group;
    if (arg_group != NULL) goto __LL3140;
    if (obj_group == Py_None)
        arg_group = obj_group;
    else {
        arg_group = NULL;
    }
    if (arg_group != NULL) goto __LL3140;
    CPy_TypeError("object or None", obj_group); 
    goto fail;
__LL3140: ;
    char retval = CPyDef_mypy___main___add_invertible_flag_process_options_obj_____call__(arg___mypyc_self__, arg_flag, arg_inverse, arg_default, arg_dest, arg_help, arg_strict_flag, arg_group);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "add_invertible_flag", 463, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___set_strict_flags_process_options_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___main___set_strict_flags_process_options_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___main___set_strict_flags_process_options_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "__get__", -1, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___set_strict_flags_process_options_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_set_strict_flags;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OC cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_dest;
    char cpy_r_r12;
    char cpy_r_value;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___main___set_strict_flags_process_options_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/main.py", "set_strict_flags", "set_strict_flags_process_options_obj", "__mypyc_env__", 1240, CPyStatic_mypy___main___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_set_strict_flags;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/main.py", "set_strict_flags", "process_options_env", "set_strict_flags", -1, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_set_strict_flags = cpy_r_r1;
    CPy_DECREF(cpy_r_set_strict_flags);
    ((mypy___main___process_options_envObject *)cpy_r_r0)->_strict_option_set = 1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/main.py", "set_strict_flags", 1242, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r3 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_strict_flag_assignments;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/main.py", "set_strict_flags", "process_options_env", "strict_flag_assignments", 1243, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    PyObject *__tmp3141;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 2))) {
        __tmp3141 = NULL;
        goto __LL3142;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0))))
        __tmp3141 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp3141 = NULL;
    }
    if (__tmp3141 == NULL) goto __LL3142;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r9, 1))))
        __tmp3141 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp3141 = NULL;
    }
    if (__tmp3141 == NULL) goto __LL3142;
    __tmp3141 = cpy_r_r9;
__LL3142: ;
    if (unlikely(__tmp3141 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_r9); cpy_r_r10 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp3143 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp3143);
        PyObject *__tmp3144;
        if (likely(PyUnicode_Check(__tmp3143)))
            __tmp3144 = __tmp3143;
        else {
            CPy_TypeError("str", __tmp3143); 
            __tmp3144 = NULL;
        }
        cpy_r_r10.f0 = __tmp3144;
        PyObject *__tmp3145 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        char __tmp3146;
        if (unlikely(!PyBool_Check(__tmp3145))) {
            CPy_TypeError("bool", __tmp3145); __tmp3146 = 2;
        } else
            __tmp3146 = __tmp3145 == Py_True;
        cpy_r_r10.f1 = __tmp3146;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "set_strict_flags", 1243, CPyStatic_mypy___main___globals);
        goto CPyL14;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_dest = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_DECREF(cpy_r_r10.f0);
    cpy_r_value = cpy_r_r12;
    cpy_r_r13 = ((mypy___main___process_options_envObject *)cpy_r_r0)->_options;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/main.py", "set_strict_flags", "process_options_env", "options", 1244, CPyStatic_mypy___main___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = cpy_r_value ? Py_True : Py_False;
    cpy_r_r15 = PyObject_SetAttr(cpy_r_r13, cpy_r_dest, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_dest);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/main.py", "set_strict_flags", 1244, CPyStatic_mypy___main___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r17;
    goto CPyL5;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_dest);
    goto CPyL11;
}

PyObject *CPyPy_mypy___main___set_strict_flags_process_options_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_mypy___main___set_strict_flags_process_options_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "set_strict_flags", 1240, CPyStatic_mypy___main___globals);
    return NULL;
}

tuple_T2OO CPyDef_mypy___main___process_options(PyObject *cpy_r_args, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr, char cpy_r_require_targets, char cpy_r_server_options, PyObject *cpy_r_fscache, PyObject *cpy_r_program, PyObject *cpy_r_header) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_general_group;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
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
    PyObject *cpy_r_compilation_status;
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
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_config_group;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_imports_group;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject **cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyPtr cpy_r_r167;
    CPyPtr cpy_r_r168;
    CPyPtr cpy_r_r169;
    CPyPtr cpy_r_r170;
    CPyPtr cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject **cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject **cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject **cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_platform_group;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject **cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    tuple_T2II cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject **cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject **cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject **cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject **cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject **cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_disallow_any_group;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject **cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject **cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject **cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject **cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject **cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject **cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject **cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_untyped_group;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject **cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject **cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject **cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject **cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject **cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject **cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_none_group;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject **cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject **cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject **cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject **cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject **cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject **cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_lint_group;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject **cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject **cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject **cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject **cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject **cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject **cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_strictness_group;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject **cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject **cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject **cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject **cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject **cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_strict_help;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject **cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject **cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject **cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject **cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_error_group;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject **cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject **cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject **cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject **cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject **cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject **cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject **cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject **cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject **cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject **cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject **cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_incremental_group;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject **cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject **cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject **cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject **cpy_r_r717;
    PyObject *cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject **cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject **cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject *cpy_r_r737;
    PyObject *cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject **cpy_r_r741;
    PyObject *cpy_r_r742;
    PyObject *cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject **cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_internals_group;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject **cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject **cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject **cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    PyObject *cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject **cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    PyObject *cpy_r_r789;
    PyObject **cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject *cpy_r_r795;
    PyObject *cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject **cpy_r_r799;
    PyObject *cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    PyObject *cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    PyObject *cpy_r_r806;
    PyObject *cpy_r_r807;
    PyObject **cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    PyObject *cpy_r_r814;
    PyObject *cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    PyObject **cpy_r_r819;
    PyObject *cpy_r_r820;
    PyObject *cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    PyObject *cpy_r_r825;
    PyObject **cpy_r_r827;
    PyObject *cpy_r_r828;
    PyObject *cpy_r_r829;
    PyObject *cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    PyObject **cpy_r_r835;
    PyObject *cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    PyObject *cpy_r_r839;
    PyObject *cpy_r_r840;
    tuple_T2OO cpy_r_r841;
    PyObject *cpy_r_r842;
    PyObject *cpy_r_r843;
    PyObject *cpy_r_r844;
    PyObject *cpy_r_r845;
    PyObject *cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject **cpy_r_r849;
    PyObject *cpy_r_r850;
    PyObject *cpy_r_r851;
    PyObject *cpy_r_r852;
    PyObject *cpy_r_r853;
    PyObject *cpy_r_r854;
    PyObject *cpy_r_r855;
    PyObject *cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject **cpy_r_r859;
    PyObject *cpy_r_r860;
    PyObject *cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
    PyObject *cpy_r_r868;
    PyObject **cpy_r_r870;
    PyObject *cpy_r_r871;
    PyObject *cpy_r_r872;
    PyObject *cpy_r_r873;
    PyObject *cpy_r_r874;
    PyObject *cpy_r_r875;
    PyObject *cpy_r_r876;
    PyObject *cpy_r_r877;
    PyObject *cpy_r_r878;
    PyObject **cpy_r_r880;
    PyObject *cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    PyObject *cpy_r_r886;
    PyObject *cpy_r_r887;
    PyObject *cpy_r_r888;
    PyObject **cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    PyObject *cpy_r_r896;
    PyObject **cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    PyObject *cpy_r_report_group;
    PyObject *cpy_r_r901;
    char cpy_r_r902;
    PyObject *cpy_r_r903;
    PyObject *cpy_r_r904;
    PyObject *cpy_r_r905;
    PyObject **cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    CPyTagged cpy_r_r910;
    CPyPtr cpy_r_r911;
    int64_t cpy_r_r912;
    CPyTagged cpy_r_r913;
    char cpy_r_r914;
    PyObject *cpy_r_r915;
    PyObject *cpy_r_r916;
    PyObject *cpy_r_report_type;
    PyObject *cpy_r_r917;
    int32_t cpy_r_r918;
    char cpy_r_r919;
    char cpy_r_r920;
    char cpy_r_r921;
    PyObject *cpy_r_r922;
    PyObject *cpy_r_r923;
    PyObject *cpy_r_r924;
    PyObject *cpy_r_r925;
    PyObject *cpy_r_r926;
    PyObject *cpy_r_r927;
    PyObject *cpy_r_r928;
    PyObject *cpy_r_r929;
    PyObject *cpy_r_r930;
    PyObject *cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject **cpy_r_r934;
    PyObject *cpy_r_r935;
    PyObject *cpy_r_r936;
    CPyTagged cpy_r_r937;
    PyObject *cpy_r_r938;
    PyObject *cpy_r_r939;
    PyObject *cpy_r_r940;
    PyObject **cpy_r_r942;
    PyObject *cpy_r_r943;
    PyObject *cpy_r_r944;
    PyObject *cpy_r_other_group;
    PyObject *cpy_r_r945;
    PyObject *cpy_r_r946;
    PyObject *cpy_r_r947;
    PyObject *cpy_r_r948;
    PyObject *cpy_r_r949;
    PyObject **cpy_r_r951;
    PyObject *cpy_r_r952;
    PyObject *cpy_r_r953;
    PyObject *cpy_r_r954;
    PyObject *cpy_r_r955;
    PyObject *cpy_r_r956;
    PyObject **cpy_r_r958;
    PyObject *cpy_r_r959;
    PyObject *cpy_r_r960;
    PyObject *cpy_r_r961;
    PyObject *cpy_r_r962;
    PyObject *cpy_r_r963;
    PyObject *cpy_r_r964;
    PyObject *cpy_r_r965;
    PyObject **cpy_r_r967;
    PyObject *cpy_r_r968;
    PyObject *cpy_r_r969;
    PyObject *cpy_r_r970;
    PyObject *cpy_r_r971;
    PyObject *cpy_r_r972;
    PyObject *cpy_r_r973;
    PyObject **cpy_r_r975;
    PyObject *cpy_r_r976;
    PyObject *cpy_r_r977;
    PyObject *cpy_r_r978;
    PyObject *cpy_r_r979;
    PyObject *cpy_r_r980;
    PyObject *cpy_r_r981;
    PyObject *cpy_r_r982;
    PyObject **cpy_r_r984;
    PyObject *cpy_r_r985;
    PyObject *cpy_r_r986;
    PyObject *cpy_r_r987;
    PyObject *cpy_r_r988;
    PyObject *cpy_r_r989;
    PyObject *cpy_r_r990;
    PyObject *cpy_r_r991;
    PyObject *cpy_r_r992;
    PyObject **cpy_r_r994;
    PyObject *cpy_r_r995;
    PyObject *cpy_r_r996;
    PyObject *cpy_r_r997;
    PyObject *cpy_r_r998;
    PyObject *cpy_r_r999;
    PyObject *cpy_r_r1000;
    PyObject *cpy_r_r1001;
    PyObject **cpy_r_r1003;
    PyObject *cpy_r_r1004;
    PyObject *cpy_r_r1005;
    PyObject *cpy_r_r1006;
    PyObject *cpy_r_r1007;
    PyObject *cpy_r_r1008;
    PyObject *cpy_r_r1009;
    PyObject **cpy_r_r1011;
    PyObject *cpy_r_r1012;
    PyObject *cpy_r_r1013;
    PyObject *cpy_r_r1014;
    PyObject *cpy_r_r1015;
    PyObject *cpy_r_r1016;
    PyObject *cpy_r_r1017;
    PyObject *cpy_r_r1018;
    PyObject *cpy_r_r1019;
    PyObject *cpy_r_r1020;
    PyObject *cpy_r_r1021;
    PyObject **cpy_r_r1023;
    PyObject *cpy_r_r1024;
    PyObject *cpy_r_r1025;
    PyObject *cpy_r_r1026;
    PyObject *cpy_r_r1027;
    PyObject *cpy_r_r1028;
    PyObject *cpy_r_r1029;
    PyObject *cpy_r_r1030;
    PyObject *cpy_r_r1031;
    PyObject *cpy_r_r1032;
    PyObject *cpy_r_r1033;
    PyObject **cpy_r_r1035;
    PyObject *cpy_r_r1036;
    PyObject *cpy_r_r1037;
    PyObject *cpy_r_r1038;
    PyObject *cpy_r_r1039;
    PyObject *cpy_r_r1040;
    PyObject *cpy_r_r1041;
    PyObject *cpy_r_r1042;
    PyObject *cpy_r_r1043;
    PyObject *cpy_r_r1044;
    PyObject **cpy_r_r1046;
    PyObject *cpy_r_r1047;
    PyObject *cpy_r_r1048;
    PyObject *cpy_r_r1049;
    PyObject *cpy_r_r1050;
    PyObject *cpy_r_r1051;
    PyObject *cpy_r_r1052;
    PyObject *cpy_r_r1053;
    PyObject *cpy_r_r1054;
    PyObject *cpy_r_r1055;
    PyObject **cpy_r_r1057;
    PyObject *cpy_r_r1058;
    PyObject *cpy_r_r1059;
    PyObject *cpy_r_r1060;
    PyObject *cpy_r_r1061;
    PyObject *cpy_r_r1062;
    PyObject *cpy_r_r1063;
    PyObject *cpy_r_r1064;
    PyObject *cpy_r_r1065;
    PyObject *cpy_r_r1066;
    PyObject **cpy_r_r1068;
    PyObject *cpy_r_r1069;
    PyObject *cpy_r_r1070;
    PyObject *cpy_r_r1071;
    PyObject *cpy_r_r1072;
    PyObject *cpy_r_r1073;
    PyObject *cpy_r_r1074;
    PyObject *cpy_r_r1075;
    PyObject *cpy_r_r1076;
    PyObject *cpy_r_r1077;
    PyObject **cpy_r_r1079;
    PyObject *cpy_r_r1080;
    PyObject *cpy_r_r1081;
    PyObject *cpy_r_r1082;
    PyObject *cpy_r_r1083;
    PyObject *cpy_r_r1084;
    PyObject *cpy_r_r1085;
    PyObject *cpy_r_r1086;
    PyObject *cpy_r_r1087;
    PyObject *cpy_r_r1088;
    PyObject **cpy_r_r1090;
    PyObject *cpy_r_r1091;
    PyObject *cpy_r_r1092;
    PyObject *cpy_r_r1093;
    PyObject *cpy_r_r1094;
    PyObject *cpy_r_r1095;
    PyObject *cpy_r_r1096;
    PyObject *cpy_r_r1097;
    PyObject *cpy_r_r1098;
    PyObject *cpy_r_r1099;
    PyObject **cpy_r_r1101;
    PyObject *cpy_r_r1102;
    PyObject *cpy_r_r1103;
    PyObject *cpy_r_r1104;
    PyObject *cpy_r_r1105;
    PyObject *cpy_r_r1106;
    PyObject *cpy_r_r1107;
    PyObject *cpy_r_r1108;
    PyObject *cpy_r_r1109;
    PyObject *cpy_r_r1110;
    PyObject **cpy_r_r1112;
    PyObject *cpy_r_r1113;
    PyObject *cpy_r_r1114;
    PyObject *cpy_r_r1115;
    PyObject *cpy_r_r1116;
    PyObject *cpy_r_r1117;
    PyObject *cpy_r_r1118;
    PyObject *cpy_r_r1119;
    PyObject *cpy_r_r1120;
    PyObject *cpy_r_r1121;
    PyObject **cpy_r_r1123;
    PyObject *cpy_r_r1124;
    PyObject *cpy_r_r1125;
    PyObject *cpy_r_r1126;
    PyObject *cpy_r_r1127;
    PyObject *cpy_r_r1128;
    PyObject *cpy_r_r1129;
    PyObject *cpy_r_r1130;
    PyObject *cpy_r_r1131;
    PyObject *cpy_r_r1132;
    PyObject **cpy_r_r1134;
    PyObject *cpy_r_r1135;
    PyObject *cpy_r_r1136;
    PyObject *cpy_r_r1137;
    PyObject *cpy_r_r1138;
    PyObject *cpy_r_r1139;
    PyObject *cpy_r_r1140;
    PyObject *cpy_r_r1141;
    PyObject *cpy_r_r1142;
    PyObject *cpy_r_r1143;
    PyObject **cpy_r_r1145;
    PyObject *cpy_r_r1146;
    PyObject *cpy_r_r1147;
    PyObject *cpy_r_r1148;
    PyObject *cpy_r_r1149;
    PyObject *cpy_r_r1150;
    PyObject *cpy_r_r1151;
    PyObject *cpy_r_r1152;
    PyObject *cpy_r_r1153;
    PyObject *cpy_r_r1154;
    PyObject *cpy_r_r1155;
    PyObject *cpy_r_r1156;
    PyObject **cpy_r_r1158;
    PyObject *cpy_r_r1159;
    PyObject *cpy_r_r1160;
    PyObject *cpy_r_r1161;
    PyObject *cpy_r_r1162;
    PyObject *cpy_r_r1163;
    PyObject *cpy_r_r1164;
    PyObject *cpy_r_r1165;
    PyObject *cpy_r_r1166;
    PyObject *cpy_r_r1167;
    PyObject *cpy_r_r1168;
    PyObject **cpy_r_r1170;
    PyObject *cpy_r_r1171;
    PyObject *cpy_r_r1172;
    PyObject *cpy_r_r1173;
    PyObject *cpy_r_r1174;
    PyObject *cpy_r_r1175;
    PyObject *cpy_r_r1176;
    PyObject *cpy_r_r1177;
    PyObject *cpy_r_r1178;
    PyObject *cpy_r_r1179;
    PyObject **cpy_r_r1181;
    PyObject *cpy_r_r1182;
    PyObject *cpy_r_r1183;
    PyObject *cpy_r_r1184;
    PyObject *cpy_r_r1185;
    PyObject *cpy_r_r1186;
    PyObject *cpy_r_r1187;
    PyObject *cpy_r_r1188;
    PyObject *cpy_r_r1189;
    PyObject *cpy_r_r1190;
    PyObject **cpy_r_r1192;
    PyObject *cpy_r_r1193;
    PyObject *cpy_r_r1194;
    PyObject *cpy_r_r1195;
    PyObject *cpy_r_r1196;
    PyObject *cpy_r_r1197;
    PyObject *cpy_r_r1198;
    PyObject *cpy_r_r1199;
    PyObject *cpy_r_r1200;
    PyObject *cpy_r_r1201;
    PyObject **cpy_r_r1203;
    PyObject *cpy_r_r1204;
    PyObject *cpy_r_r1205;
    PyObject *cpy_r_r1206;
    PyObject *cpy_r_r1207;
    PyObject *cpy_r_r1208;
    PyObject *cpy_r_r1209;
    PyObject *cpy_r_r1210;
    PyObject *cpy_r_r1211;
    PyObject *cpy_r_r1212;
    PyObject **cpy_r_r1214;
    PyObject *cpy_r_r1215;
    PyObject *cpy_r_r1216;
    PyObject *cpy_r_r1217;
    PyObject *cpy_r_r1218;
    PyObject *cpy_r_r1219;
    PyObject *cpy_r_r1220;
    PyObject *cpy_r_r1221;
    PyObject *cpy_r_r1222;
    PyObject *cpy_r_r1223;
    PyObject **cpy_r_r1225;
    PyObject *cpy_r_r1226;
    PyObject *cpy_r_r1227;
    PyObject *cpy_r_r1228;
    PyObject *cpy_r_r1229;
    PyObject *cpy_r_r1230;
    PyObject *cpy_r_r1231;
    PyObject **cpy_r_r1233;
    PyObject *cpy_r_r1234;
    PyObject *cpy_r_r1235;
    PyObject *cpy_r_code_group;
    PyObject *cpy_r_r1236;
    PyObject *cpy_r_r1237;
    PyObject *cpy_r_r1238;
    PyObject *cpy_r_r1239;
    PyObject **cpy_r_r1241;
    PyObject *cpy_r_r1242;
    PyObject *cpy_r_r1243;
    PyObject *cpy_r_r1244;
    PyObject *cpy_r_r1245;
    PyObject *cpy_r_r1246;
    PyObject *cpy_r_r1247;
    PyObject *cpy_r_r1248;
    PyObject *cpy_r_r1249;
    PyObject **cpy_r_r1251;
    PyObject *cpy_r_r1252;
    PyObject *cpy_r_r1253;
    PyObject *cpy_r_r1254;
    PyObject *cpy_r_r1255;
    PyObject *cpy_r_r1256;
    PyObject *cpy_r_r1257;
    PyObject *cpy_r_r1258;
    PyObject *cpy_r_r1259;
    PyObject **cpy_r_r1261;
    PyObject *cpy_r_r1262;
    PyObject *cpy_r_r1263;
    PyObject *cpy_r_r1264;
    PyObject *cpy_r_r1265;
    PyObject *cpy_r_r1266;
    PyObject *cpy_r_r1267;
    PyObject *cpy_r_r1268;
    PyObject *cpy_r_r1269;
    PyObject *cpy_r_r1270;
    PyObject *cpy_r_r1271;
    PyObject **cpy_r_r1273;
    PyObject *cpy_r_r1274;
    PyObject *cpy_r_r1275;
    PyObject *cpy_r_r1276;
    PyObject *cpy_r_r1277;
    PyObject *cpy_r_r1278;
    PyObject *cpy_r_r1279;
    PyObject *cpy_r_r1280;
    PyObject *cpy_r_r1281;
    PyObject *cpy_r_r1282;
    PyObject *cpy_r_r1283;
    PyObject **cpy_r_r1285;
    PyObject *cpy_r_r1286;
    PyObject *cpy_r_r1287;
    PyObject *cpy_r_r1288;
    PyObject *cpy_r_r1289;
    PyObject *cpy_r_r1290;
    PyObject *cpy_r_r1291;
    PyObject *cpy_r_r1292;
    PyObject *cpy_r_r1293;
    PyObject *cpy_r_r1294;
    PyObject **cpy_r_r1296;
    PyObject *cpy_r_r1297;
    PyObject *cpy_r_r1298;
    PyObject *cpy_r_r1299;
    PyObject *cpy_r_r1300;
    PyObject *cpy_r_r1301;
    PyObject *cpy_r_r1302;
    PyObject *cpy_r_r1303;
    PyObject **cpy_r_r1305;
    PyObject *cpy_r_r1306;
    PyObject *cpy_r_r1307;
    PyObject *cpy_r_r1308;
    PyObject *cpy_r_r1309;
    PyObject *cpy_r_r1310;
    PyObject *cpy_r_r1311;
    PyObject *cpy_r_dummy;
    PyObject *cpy_r_r1312;
    PyObject *cpy_r_r1313;
    PyObject **cpy_r_r1315;
    PyObject *cpy_r_r1316;
    PyObject *cpy_r_r1317;
    PyObject *cpy_r_r1318;
    PyObject *cpy_r_config_file;
    int32_t cpy_r_r1319;
    char cpy_r_r1320;
    char cpy_r_r1321;
    PyObject *cpy_r_r1322;
    PyObject *cpy_r_r1323;
    PyObject *cpy_r_r1324;
    PyObject *cpy_r_r1325;
    PyObject *cpy_r_r1326;
    PyObject **cpy_r_r1328;
    PyObject *cpy_r_r1329;
    char cpy_r_r1330;
    PyObject *cpy_r_r1331;
    PyObject *cpy_r_r1332;
    PyObject *cpy_r_r1333;
    PyObject *cpy_r_r1334;
    PyObject *cpy_r_r1335;
    PyObject *cpy_r_r1336;
    PyObject *cpy_r_r1337;
    char cpy_r_r1338;
    char cpy_r_r1339;
    PyObject *cpy_r_r1340;
    char cpy_r_r1341;
    char cpy_r_r1342;
    PyObject *cpy_r_r1343;
    PyObject *cpy_r_r1344;
    PyObject *cpy_r_r1345;
    char cpy_r_r1346;
    PyObject *cpy_r_r1347;
    PyObject *cpy_r_r1348;
    int32_t cpy_r_r1349;
    char cpy_r_r1350;
    char cpy_r_r1351;
    PyObject *cpy_r_r1352;
    PyObject *cpy_r_r1353;
    PyObject *cpy_r_r1354;
    PyObject *cpy_r_r1355;
    PyObject *cpy_r_r1356;
    PyObject *cpy_r_r1357;
    PyObject *cpy_r_r1358;
    PyObject **cpy_r_r1360;
    PyObject *cpy_r_r1361;
    PyObject *cpy_r_r1362;
    PyObject *cpy_r_environ_cache_dir;
    PyObject *cpy_r_r1363;
    PyObject **cpy_r_r1365;
    PyObject *cpy_r_r1366;
    PyObject *cpy_r_r1367;
    char cpy_r_r1368;
    PyObject *cpy_r_r1369;
    char cpy_r_r1370;
    PyObject *cpy_r_r1371;
    PyObject *cpy_r_r1372;
    PyObject *cpy_r_r1373;
    PyObject *cpy_r_r1374;
    PyObject *cpy_r_r1375;
    PyObject *cpy_r_r1376;
    PyObject *cpy_r_r1377;
    PyObject **cpy_r_r1379;
    PyObject *cpy_r_r1380;
    PyObject *cpy_r_r1381;
    PyObject *cpy_r_r1382;
    char cpy_r_r1383;
    PyObject *cpy_r_r1384;
    PyObject *cpy_r_r1385;
    PyObject *cpy_r_r1386;
    PyObject *cpy_r_r1387;
    PyObject *cpy_r_special_opts;
    PyObject *cpy_r_r1388;
    PyObject *cpy_r_r1389;
    PyObject *cpy_r_r1390;
    PyObject *cpy_r_r1391;
    PyObject *cpy_r_r1392;
    PyObject *cpy_r_r1393;
    PyObject **cpy_r_r1395;
    PyObject *cpy_r_r1396;
    PyObject *cpy_r_r1397;
    PyObject **cpy_r_r1399;
    PyObject *cpy_r_r1400;
    PyObject *cpy_r_r1401;
    PyObject *cpy_r_r1402;
    int32_t cpy_r_r1403;
    char cpy_r_r1404;
    char cpy_r_r1405;
    PyObject *cpy_r_r1406;
    PyObject *cpy_r_r1407;
    tuple_T2II cpy_r_r1408;
    PyObject *cpy_r_r1409;
    PyObject *cpy_r_r1410;
    tuple_T2II cpy_r_r1411;
    char cpy_r_r1412;
    PyObject *cpy_r_r1413;
    tuple_T2II cpy_r_r1414;
    PyObject *cpy_r_r1415;
    tuple_T1I cpy_r_r1416;
    PyObject *cpy_r_r1417;
    PyObject *cpy_r_r1418;
    int32_t cpy_r_r1419;
    char cpy_r_r1420;
    char cpy_r_r1421;
    PyObject *cpy_r_r1422;
    PyObject *cpy_r_r1423;
    PyObject *cpy_r_r1424;
    PyObject *cpy_r_r1425;
    char cpy_r_r1426;
    tuple_T3OOO cpy_r_r1427;
    PyObject *cpy_r_r1428;
    char cpy_r_r1429;
    PyObject *cpy_r_r1430;
    PyObject *cpy_r_r1431;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r1432;
    PyObject *cpy_r_r1433;
    PyObject *cpy_r_r1434;
    char cpy_r_r1435;
    PyObject *cpy_r_r1436;
    PyObject *cpy_r_r1437;
    int32_t cpy_r_r1438;
    char cpy_r_r1439;
    char cpy_r_r1440;
    PyObject *cpy_r_r1441;
    char cpy_r_r1442;
    PyObject *cpy_r_r1443;
    PyObject *cpy_r_r1444;
    char cpy_r_r1445;
    PyObject *cpy_r_r1446;
    PyObject *cpy_r_r1447;
    int32_t cpy_r_r1448;
    char cpy_r_r1449;
    char cpy_r_r1450;
    PyObject *cpy_r_r1451;
    PyObject *cpy_r_r1452;
    int32_t cpy_r_r1453;
    char cpy_r_r1454;
    char cpy_r_r1455;
    PyObject *cpy_r_r1456;
    PyObject *cpy_r_r1457;
    int32_t cpy_r_r1458;
    char cpy_r_r1459;
    char cpy_r_r1460;
    PyObject *cpy_r_r1461;
    PyObject *cpy_r_r1462;
    PyObject *cpy_r_r1463;
    char cpy_r_r1464;
    PyObject *cpy_r_r1465;
    CPyPtr cpy_r_r1466;
    int64_t cpy_r_r1467;
    CPyTagged cpy_r_r1468;
    char cpy_r_r1469;
    PyObject *cpy_r_r1470;
    PyObject *cpy_r_r1471;
    PyObject *cpy_r_r1472;
    PyObject *cpy_r_r1473;
    int32_t cpy_r_r1474;
    char cpy_r_r1475;
    PyObject *cpy_r_r1476;
    PyObject *cpy_r_r1477;
    PyObject *cpy_r_r1478;
    char cpy_r_r1479;
    PyObject *cpy_r_r1480;
    CPyPtr cpy_r_r1481;
    int64_t cpy_r_r1482;
    CPyTagged cpy_r_r1483;
    char cpy_r_r1484;
    PyObject *cpy_r_r1485;
    PyObject *cpy_r_r1486;
    PyObject *cpy_r_r1487;
    PyObject *cpy_r_r1488;
    int32_t cpy_r_r1489;
    char cpy_r_r1490;
    PyObject *cpy_r_r1491;
    PyObject *cpy_r_r1492;
    PyObject *cpy_r_r1493;
    char cpy_r_r1494;
    PyObject *cpy_r_r1495;
    CPyPtr cpy_r_r1496;
    int64_t cpy_r_r1497;
    CPyTagged cpy_r_r1498;
    char cpy_r_r1499;
    PyObject *cpy_r_r1500;
    PyObject *cpy_r_r1501;
    PyObject *cpy_r_r1502;
    PyObject *cpy_r_r1503;
    int32_t cpy_r_r1504;
    char cpy_r_r1505;
    CPyTagged cpy_r_r1506;
    PyObject *cpy_r_r1507;
    PyObject *cpy_r_r1508;
    PyObject *cpy_r_r1509;
    PyObject *cpy_r_r1510;
    PyObject *cpy_r_r1511;
    PyObject *cpy_r_r1512;
    PyObject *cpy_r_r1513;
    PyObject *cpy_r_r1514;
    PyObject *cpy_r_r1515;
    PyObject *cpy_r_r1516;
    CPyPtr cpy_r_r1517;
    CPyPtr cpy_r_r1518;
    CPyPtr cpy_r_r1519;
    CPyPtr cpy_r_r1520;
    CPyTagged cpy_r_r1521;
    CPyPtr cpy_r_r1522;
    int64_t cpy_r_r1523;
    CPyTagged cpy_r_r1524;
    char cpy_r_r1525;
    PyObject *cpy_r_r1526;
    PyObject *cpy_r_c;
    int32_t cpy_r_r1527;
    char cpy_r_r1528;
    char cpy_r_r1529;
    char cpy_r_r1530;
    CPyTagged cpy_r_r1531;
    CPyTagged cpy_r_r1532;
    CPyTagged cpy_r_r1533;
    CPyTagged cpy_r_code_methods;
    char cpy_r_r1534;
    PyObject *cpy_r_r1535;
    char cpy_r_r1536;
    PyObject *cpy_r_r1537;
    PyObject *cpy_r_r1538;
    PyObject *cpy_r_r1539;
    int64_t cpy_r_r1540;
    char cpy_r_r1541;
    char cpy_r_r1542;
    char cpy_r_r1543;
    PyObject *cpy_r_r1544;
    PyObject *cpy_r_r1545;
    PyObject *cpy_r_r1546;
    PyObject *cpy_r_r1547;
    char cpy_r_r1548;
    PyObject *cpy_r_r1549;
    char cpy_r_r1550;
    PyObject *cpy_r_r1551;
    PyObject *cpy_r_r1552;
    PyObject *cpy_r_r1553;
    PyObject *cpy_r_r1554;
    PyObject *cpy_r_r1555;
    PyObject *cpy_r_r1556;
    PyObject *cpy_r_r1557;
    PyObject *cpy_r_r1558;
    PyObject *cpy_r_r1559;
    PyObject *cpy_r_r1560;
    PyObject *cpy_r_r1561;
    PyObject *cpy_r_overlap;
    int32_t cpy_r_r1562;
    char cpy_r_r1563;
    char cpy_r_r1564;
    PyObject *cpy_r_r1565;
    PyObject *cpy_r_r1566;
    PyObject *cpy_r_r1567;
    PyObject *cpy_r_r1568;
    PyObject *cpy_r_r1569;
    PyObject **cpy_r_r1571;
    PyObject *cpy_r_r1572;
    PyObject *cpy_r_r1573;
    PyObject *cpy_r_r1574;
    PyObject *cpy_r_r1575;
    PyObject *cpy_r_r1576;
    PyObject *cpy_r_r1577;
    PyObject *cpy_r_r1578;
    PyObject *cpy_r_r1579;
    PyObject *cpy_r_r1580;
    PyObject *cpy_r_r1581;
    PyObject *cpy_r_disabled_codes;
    PyObject *cpy_r_r1582;
    PyObject *cpy_r_r1583;
    PyObject *cpy_r_r1584;
    PyObject *cpy_r_enabled_codes;
    PyObject *cpy_r_r1585;
    PyObject *cpy_r_r1586;
    PyObject *cpy_r_r1587;
    PyObject *cpy_r_r1588;
    PyObject *cpy_r_r1589;
    PyObject *cpy_r_r1590;
    PyObject *cpy_r_valid_error_codes;
    PyObject *cpy_r_r1591;
    PyObject *cpy_r_r1592;
    PyObject *cpy_r_r1593;
    PyObject *cpy_r_r1594;
    PyObject *cpy_r_invalid_codes;
    int32_t cpy_r_r1595;
    char cpy_r_r1596;
    char cpy_r_r1597;
    PyObject *cpy_r_r1598;
    PyObject *cpy_r_r1599;
    PyObject *cpy_r_r1600;
    PyObject *cpy_r_r1601;
    PyObject *cpy_r_r1602;
    PyObject *cpy_r_r1603;
    PyObject **cpy_r_r1605;
    PyObject *cpy_r_r1606;
    PyObject *cpy_r_r1607;
    PyObject *cpy_r_r1608;
    PyObject *cpy_r_r1609;
    PyObject *cpy_r_r1610;
    PyObject *cpy_r_r1611;
    PyObject *cpy_r_r1612;
    PyObject *cpy_r_r1613;
    PyObject *cpy_r_r1614;
    PyObject *cpy_r_r1615;
    PyObject *cpy_r_r1616;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r1617;
    PyObject *cpy_r_r1618;
    PyObject *cpy_r_r1619;
    PyObject *cpy_r_r1620;
    PyObject *cpy_r_r1621;
    PyObject *cpy_r_r1622;
    int32_t cpy_r_r1623;
    char cpy_r_r1624;
    char cpy_r_r1625;
    PyObject *cpy_r_r1626;
    PyObject *cpy_r_r1627;
    char cpy_r_r1628;
    PyObject *cpy_r_r1629;
    PyObject *cpy_r_r1630;
    PyObject *cpy_r_r1631;
    PyObject *cpy_r_r1632;
    PyObject *cpy_r_r1633;
    PyObject *cpy_r_r1634;
    PyObject *cpy_r_code_2;
    PyObject *cpy_r_r1635;
    PyObject *cpy_r_r1636;
    PyObject *cpy_r_r1637;
    PyObject *cpy_r_r1638;
    PyObject *cpy_r_r1639;
    PyObject *cpy_r_r1640;
    int32_t cpy_r_r1641;
    char cpy_r_r1642;
    char cpy_r_r1643;
    PyObject *cpy_r_r1644;
    PyObject *cpy_r_r1645;
    char cpy_r_r1646;
    PyObject *cpy_r_r1647;
    PyObject *cpy_r_r1648;
    PyObject *cpy_r_r1649;
    PyObject *cpy_r_r1650;
    PyObject *cpy_r_r1651;
    PyObject *cpy_r_r1652;
    char cpy_r_r1653;
    PyObject *cpy_r_r1654;
    PyObject *cpy_r_r1655;
    CPyTagged cpy_r_r1656;
    CPyPtr cpy_r_r1657;
    int64_t cpy_r_r1658;
    CPyTagged cpy_r_r1659;
    char cpy_r_r1660;
    PyObject *cpy_r_r1661;
    PyObject *cpy_r_r1662;
    PyObject *cpy_r_feature;
    PyObject *cpy_r_r1663;
    char cpy_r_r1664;
    int32_t cpy_r_r1665;
    char cpy_r_r1666;
    char cpy_r_r1667;
    char cpy_r_r1668;
    PyObject *cpy_r_r1669;
    PyObject *cpy_r_r1670;
    PyObject *cpy_r_r1671;
    PyObject *cpy_r_r1672;
    CPyTagged cpy_r_r1673;
    PyObject *cpy_r_r1674;
    char cpy_r_r1675;
    PyObject *cpy_r_r1676;
    PyObject *cpy_r_r1677;
    PyObject *cpy_r_r1678;
    PyObject *cpy_r_r1679;
    PyObject **cpy_r_r1681;
    PyObject *cpy_r_r1682;
    PyObject *cpy_r_r1683;
    char cpy_r_r1684;
    PyObject *cpy_r_r1685;
    PyObject *cpy_r_r1686;
    char cpy_r_r1687;
    PyObject *cpy_r_r1688;
    PyObject *cpy_r_r1689;
    PyObject *cpy_r_r1690;
    char cpy_r_r1691;
    PyObject *cpy_r_r1692;
    PyObject *cpy_r_r1693;
    PyObject *cpy_r_r1694;
    PyObject *cpy_r_r1695;
    PyObject *cpy_r_r1696;
    PyObject *cpy_r_r1697;
    PyObject *cpy_r_r1698;
    PyObject *cpy_r_r1699;
    PyObject **cpy_r_r1701;
    PyObject *cpy_r_r1702;
    PyObject *cpy_r_r1703;
    PyObject *cpy_r_r1704;
    char cpy_r_r1705;
    PyObject *cpy_r_r1706;
    PyObject *cpy_r_r1707;
    int32_t cpy_r_r1708;
    char cpy_r_r1709;
    char cpy_r_r1710;
    PyObject *cpy_r_r1711;
    PyObject *cpy_r_r1712;
    PyObject *cpy_r_r1713;
    PyObject *cpy_r_r1714;
    PyObject **cpy_r_r1716;
    PyObject *cpy_r_r1717;
    PyObject *cpy_r_r1718;
    PyObject *cpy_r__find_occurrences;
    CPyPtr cpy_r_r1719;
    int64_t cpy_r_r1720;
    CPyTagged cpy_r_r1721;
    char cpy_r_r1722;
    PyObject *cpy_r_r1723;
    PyObject *cpy_r_r1724;
    PyObject *cpy_r_r1725;
    CPyPtr cpy_r_r1726;
    int64_t cpy_r_r1727;
    CPyTagged cpy_r_r1728;
    char cpy_r_r1729;
    PyObject *cpy_r_r1730;
    PyObject *cpy_r_r1731;
    PyObject *cpy_r_r1732;
    PyObject *cpy_r_r1733;
    PyObject *cpy_r_r1734;
    PyObject *cpy_r_r1735;
    PyObject *cpy_r_r1736;
    int32_t cpy_r_r1737;
    char cpy_r_r1738;
    PyObject *cpy_r_r1739;
    PyObject *cpy_r_r1740;
    PyObject *cpy_r_r1741;
    PyObject **cpy_r_r1743;
    PyObject *cpy_r_r1744;
    PyObject *cpy_r_r1745;
    CPyTagged cpy_r_r1746;
    int64_t cpy_r_r1747;
    CPyTagged cpy_r_r1748;
    PyObject *cpy_r_r1749;
    tuple_T4CIOO cpy_r_r1750;
    CPyTagged cpy_r_r1751;
    char cpy_r_r1752;
    PyObject *cpy_r_r1753;
    PyObject *cpy_r_r1754;
    PyObject *cpy_r_r1755;
    PyObject *cpy_r_flag;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r1756;
    char cpy_r_r1757;
    PyObject *cpy_r_r1758;
    char cpy_r_r1759;
    PyObject *cpy_r_r1760;
    PyObject *cpy_r_r1761;
    PyObject *cpy_r_r1762;
    PyObject *cpy_r_r1763;
    PyObject *cpy_r_r1764;
    PyObject *cpy_r_report_dir;
    PyObject *cpy_r_r1765;
    PyObject *cpy_r_r1766;
    int32_t cpy_r_r1767;
    char cpy_r_r1768;
    char cpy_r_r1769;
    char cpy_r_r1770;
    PyObject *cpy_r_r1771;
    PyObject *cpy_r_r1772;
    CPyPtr cpy_r_r1773;
    int64_t cpy_r_r1774;
    CPyTagged cpy_r_r1775;
    char cpy_r_r1776;
    PyObject *cpy_r_r1777;
    PyObject *cpy_r_r1778;
    char cpy_r_r1779;
    PyObject *cpy_r_r1780;
    PyObject *cpy_r_r1781;
    int32_t cpy_r_r1782;
    char cpy_r_r1783;
    char cpy_r_r1784;
    PyObject *cpy_r_r1785;
    char cpy_r_r1786;
    PyObject *cpy_r_r1787;
    PyObject *cpy_r_r1788;
    PyObject *cpy_r_r1789;
    PyObject *cpy_r_r1790;
    PyObject *cpy_r_r1791;
    char cpy_r_r1792;
    PyObject *cpy_r_r1793;
    char cpy_r_r1794;
    PyObject *cpy_r_r1795;
    char cpy_r_r1796;
    PyObject *cpy_r_r1797;
    char cpy_r_r1798;
    PyObject *cpy_r_r1799;
    char cpy_r_r1800;
    PyObject *cpy_r_r1801;
    char cpy_r_r1802;
    PyObject *cpy_r_r1803;
    char cpy_r_r1804;
    PyObject *cpy_r_r1805;
    char cpy_r_r1806;
    PyObject *cpy_r_r1807;
    PyObject *cpy_r_r1808;
    PyObject *cpy_r_r1809;
    PyObject *cpy_r_r1810;
    PyObject **cpy_r_r1812;
    PyObject *cpy_r_r1813;
    PyObject *cpy_r_r1814;
    char cpy_r_r1815;
    char cpy_r_r1816;
    PyObject *cpy_r_r1817;
    PyObject *cpy_r_r1818;
    PyObject *cpy_r_r1819;
    PyObject *cpy_r_r1820;
    PyObject **cpy_r_r1822;
    PyObject *cpy_r_r1823;
    PyObject *cpy_r_r1824;
    PyObject *cpy_r_r1825;
    PyObject *cpy_r_r1826;
    PyObject *cpy_r_r1827;
    PyObject *cpy_r_r1828;
    int32_t cpy_r_r1829;
    char cpy_r_r1830;
    char cpy_r_r1831;
    PyObject *cpy_r_r1832;
    char cpy_r_r1833;
    PyObject *cpy_r_r1834;
    PyObject *cpy_r_r1835;
    PyObject *cpy_r_r1836;
    PyObject *cpy_r_r1837;
    PyObject *cpy_r_r1838;
    PyObject **cpy_r_r1840;
    PyObject *cpy_r_r1841;
    tuple_T2OO cpy_r_r1842;
    PyObject *cpy_r_r1843;
    PyObject *cpy_r_sys_path;
    PyObject *cpy_r_r1844;
    PyObject *cpy_r__;
    PyObject *cpy_r_r1845;
    PyObject *cpy_r_r1846;
    PyObject *cpy_r_r1847;
    PyObject *cpy_r_r1848;
    PyObject *cpy_r_r1849;
    tuple_T1O cpy_r_r1850;
    PyObject *cpy_r_r1851;
    PyObject *cpy_r_r1852;
    PyObject *cpy_r_r1853;
    PyObject *cpy_r_r1854;
    PyObject *cpy_r_r1855;
    PyObject *cpy_r_r1856;
    PyObject *cpy_r_r1857;
    tuple_T0 cpy_r_r1858;
    PyObject *cpy_r_r1859;
    PyObject *cpy_r_r1860;
    PyObject *cpy_r_r1861;
    PyObject *cpy_r_r1862;
    PyObject *cpy_r_r1863;
    PyObject **cpy_r_r1865;
    PyObject *cpy_r_r1866;
    PyObject *cpy_r_r1867;
    PyObject *cpy_r_search_paths;
    PyObject *cpy_r_r1868;
    PyObject *cpy_r_r1869;
    PyObject *cpy_r_r1870;
    PyObject *cpy_r_r1871;
    PyObject *cpy_r_r1872;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r1873;
    PyObject *cpy_r_r1874;
    PyObject *cpy_r_r1875;
    PyObject *cpy_r_r1876;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r1877;
    PyObject *cpy_r_r1878;
    PyObject *cpy_r_r1879;
    PyObject *cpy_r_r1880;
    int32_t cpy_r_r1881;
    char cpy_r_r1882;
    char cpy_r_r1883;
    PyObject *cpy_r_r1884;
    PyObject *cpy_r_r1885;
    PyObject *cpy_r_r1886;
    PyObject *cpy_r_r1887;
    PyObject *cpy_r_r1888;
    char cpy_r_r1889;
    PyObject *cpy_r_r1890;
    char cpy_r_r1891;
    PyObject *cpy_r_r1892;
    PyObject *cpy_r_r1893;
    PyObject *cpy_r_r1894;
    PyObject *cpy_r_r1895;
    int32_t cpy_r_r1896;
    char cpy_r_r1897;
    char cpy_r_r1898;
    PyObject *cpy_r_r1899;
    PyObject *cpy_r_r1900;
    PyObject *cpy_r_r1901;
    PyObject *cpy_r_r1902;
    PyObject *cpy_r_r1903;
    PyObject *cpy_r_r1904;
    PyObject *cpy_r_r1905;
    PyObject *cpy_r_r1906;
    PyObject *cpy_r_p_targets;
    CPyPtr cpy_r_r1907;
    int64_t cpy_r_r1908;
    CPyTagged cpy_r_r1909;
    char cpy_r_r1910;
    PyObject *cpy_r_r1911;
    PyObject *cpy_r_r1912;
    PyObject *cpy_r_r1913;
    PyObject *cpy_r_r1914;
    PyObject *cpy_r_r1915;
    PyObject *cpy_r_r1916;
    PyObject *cpy_r_r1917;
    char cpy_r_r1918;
    PyObject *cpy_r_r1919;
    PyObject *cpy_r_r1920;
    PyObject *cpy_r_r1921;
    PyObject *cpy_r_r1922;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r1923;
    PyObject *cpy_r_r1924;
    PyObject *cpy_r_r1925;
    PyObject *cpy_r_r1926;
    char cpy_r_r1927;
    PyObject *cpy_r_r1928;
    int32_t cpy_r_r1929;
    char cpy_r_r1930;
    char cpy_r_r1931;
    PyObject *cpy_r_r1932;
    tuple_T2OO cpy_r_r1933;
    PyObject *cpy_r_r1934;
    PyObject *cpy_r_r1935;
    int32_t cpy_r_r1936;
    char cpy_r_r1937;
    char cpy_r_r1938;
    PyObject *cpy_r_r1939;
    char cpy_r_r1940;
    PyObject *cpy_r_r1941;
    PyObject *cpy_r_r1942;
    PyObject *cpy_r_r1943;
    PyObject *cpy_r_r1944;
    PyObject *cpy_r_r1945;
    PyObject *cpy_r_r1946;
    PyObject *cpy_r_r1947;
    char cpy_r_r1948;
    PyObject *cpy_r_r1949;
    PyObject *cpy_r_r1950;
    CPyPtr cpy_r_r1951;
    CPyPtr cpy_r_r1952;
    PyObject *cpy_r_r1953;
    tuple_T2OO cpy_r_r1954;
    PyObject *cpy_r_r1955;
    PyObject *cpy_r_r1956;
    PyObject *cpy_r_r1957;
    char cpy_r_r1958;
    PyObject *cpy_r_r1959;
    tuple_T3OOO cpy_r_r1960;
    PyObject *cpy_r_r1961;
    char cpy_r_r1962;
    PyObject *cpy_r_r1963;
    PyObject *cpy_r_r1964;
    PyObject *cpy_r_e2;
    PyObject *cpy_r_r1965;
    PyObject *cpy_r_r1966;
    PyObject *cpy_r_r1967;
    char cpy_r_r1968;
    PyObject *cpy_r_r1969;
    char cpy_r_r1970;
    tuple_T2OO cpy_r_r1971;
    tuple_T2OO cpy_r_r1972;
    cpy_r_r0 = NULL;
    cpy_r_targets = cpy_r_r0;
    if (cpy_r_stdout != NULL) goto CPyL722;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_stdout = cpy_r_r1;
CPyL2: ;
    if (cpy_r_stderr != NULL) goto CPyL723;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_stderr = cpy_r_r2;
CPyL4: ;
    if (cpy_r_require_targets != 2) goto CPyL6;
    cpy_r_require_targets = 1;
CPyL6: ;
    if (cpy_r_server_options != 2) goto CPyL8;
    cpy_r_server_options = 0;
CPyL8: ;
    if (cpy_r_fscache != NULL) goto CPyL724;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_fscache = cpy_r_r3;
CPyL10: ;
    if (cpy_r_program != NULL) goto CPyL725;
    cpy_r_r4 = CPyStatics[27]; /* 'mypy' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_program = cpy_r_r4;
CPyL12: ;
    if (cpy_r_header != NULL) goto CPyL726;
    cpy_r_r5 = CPyStatics[2753]; /* ('%(prog)s [-h] [-v] [-V] [more options; see below]\n'
                                    '            [-m MODULE] [-p PACKAGE] [-c PROGRAM_TEXT] '
                                    '[files ...]') */
    CPy_INCREF(cpy_r_r5);
    cpy_r_header = cpy_r_r5;
CPyL14: ;
    cpy_r_r6 = CPyDef_mypy___main___process_options_env();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 430, CPyStatic_mypy___main___globals);
        goto CPyL727;
    }
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_stdout != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL728;
    CPy_INCREF(cpy_r_stdout);
    cpy_r_r9 = cpy_r_stdout;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 432, CPyStatic_mypy___main___globals);
        goto CPyL729;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL728;
    cpy_r_r13 = cpy_r_stdout;
    goto CPyL22;
CPyL20: ;
    cpy_r_r14 = CPyModule_sys;
    cpy_r_r15 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 445, CPyStatic_mypy___main___globals);
        goto CPyL730;
    }
    cpy_r_r13 = cpy_r_r16;
CPyL22: ;
    cpy_r_stdout = cpy_r_r13;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_stderr != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL731;
    CPy_INCREF(cpy_r_stderr);
    cpy_r_r19 = cpy_r_stderr;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 433, CPyStatic_mypy___main___globals);
        goto CPyL729;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL731;
    cpy_r_r23 = cpy_r_stderr;
    goto CPyL29;
CPyL27: ;
    cpy_r_r24 = CPyModule_sys;
    cpy_r_r25 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 446, CPyStatic_mypy___main___globals);
        goto CPyL732;
    }
    cpy_r_r23 = cpy_r_r26;
CPyL29: ;
    cpy_r_stderr = cpy_r_r23;
    cpy_r_r27 = CPyStatics[2754]; /* ('\n'
                                     'Mypy is a program that will type check your Python '
                                     'code.\n'
                                     '\n'
                                     'Pass in any files or folders you want to type check. '
                                     'Mypy will\n'
                                     'recursively traverse any provided folders to find .py '
                                     'files:\n'
                                     '\n'
                                     '    $ mypy my_program.py my_src_folder\n'
                                     '\n'
                                     'For more information on getting started, see:\n'
                                     '\n'
                                     '- '
                                     'https://mypy.readthedocs.io/en/stable/getting_started.html\n'
                                     '\n'
                                     'For more details on both running mypy and using the '
                                     'flags below, see:\n'
                                     '\n'
                                     '- '
                                     'https://mypy.readthedocs.io/en/stable/running_mypy.html\n'
                                     '- '
                                     'https://mypy.readthedocs.io/en/stable/command_line.html\n'
                                     '\n'
                                     'You can also use a config file to configure mypy '
                                     'instead of using\n'
                                     'command line flags. For more details, see:\n'
                                     '\n'
                                     '- '
                                     'https://mypy.readthedocs.io/en/stable/config_file.html\n') */
    cpy_r_r28 = CPyStatics[2755]; /* ('Environment variables:\n'
                                     '  Define MYPYPATH for additional module search path '
                                     'entries.\n'
                                     '  Define MYPY_CACHE_DIR to override configuration '
                                     'cache_dir path.') */
    cpy_r_r29 = CPyStatics[1784]; /* '@' */
    cpy_r_r30 = (PyObject *)CPyType_mypy___main___AugmentedHelpFormatter;
    cpy_r_r31 = CPyStatics[1671]; /* 'prog' */
    cpy_r_r32 = CPyStatics[2756]; /* 'usage' */
    cpy_r_r33 = CPyStatics[1786]; /* 'description' */
    cpy_r_r34 = CPyStatics[2757]; /* 'epilog' */
    cpy_r_r35 = CPyStatics[1787]; /* 'fromfile_prefix_chars' */
    cpy_r_r36 = CPyStatics[1828]; /* 'formatter_class' */
    cpy_r_r37 = CPyStatics[2758]; /* 'add_help' */
    cpy_r_r38 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r39 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r40 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 448, CPyStatic_mypy___main___globals);
        goto CPyL729;
    }
    cpy_r_r41 = 0 ? Py_True : Py_False;
    cpy_r_r42 = CPyDict_Build(9, cpy_r_r31, cpy_r_program, cpy_r_r32, cpy_r_header, cpy_r_r33, cpy_r_r27, cpy_r_r34, cpy_r_r28, cpy_r_r35, cpy_r_r29, cpy_r_r36, cpy_r_r30, cpy_r_r37, cpy_r_r41, cpy_r_r38, cpy_r_stdout, cpy_r_r39, cpy_r_stderr);
    CPy_DECREF(cpy_r_program);
    CPy_DECREF(cpy_r_header);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 448, CPyStatic_mypy___main___globals);
        goto CPyL733;
    }
    cpy_r_r43 = CPyDef_mypy___main___CapturableArgumentParser(cpy_r_r40, cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 448, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_parser != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_parser);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser = cpy_r_r43;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 448, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 460, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_names != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_names);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_names = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 460, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_r47 = PyList_New(0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 461, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_assignments != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_assignments);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_assignments = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 461, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_r49 = CPyDef_mypy___main___add_invertible_flag_process_options_obj();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 463, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r6);
    if (((mypy___main___add_invertible_flag_process_options_objObject *)cpy_r_r49)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___main___add_invertible_flag_process_options_objObject *)cpy_r_r49)->___mypyc_env__);
    }
    ((mypy___main___add_invertible_flag_process_options_objObject *)cpy_r_r49)->___mypyc_env__ = cpy_r_r6;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 463, CPyStatic_mypy___main___globals);
        goto CPyL735;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag = cpy_r_r49;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 463, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_r52 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 504, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r52);
CPyL41: ;
    cpy_r_r53 = CPyStatics[2759]; /* 'Optional arguments' */
    cpy_r_r54 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r55[2] = {cpy_r_r52, cpy_r_r53};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = CPyStatics[9458]; /* ('title',) */
    cpy_r_r58 = PyObject_VectorcallMethod(cpy_r_r54, cpy_r_r56, 9223372036854775809ULL, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 504, CPyStatic_mypy___main___globals);
        goto CPyL736;
    }
    CPy_DECREF(cpy_r_r52);
    cpy_r_general_group = cpy_r_r58;
    cpy_r_r59 = CPyStatics[2762]; /* '-h' */
    cpy_r_r60 = CPyStatics[2622]; /* '--help' */
    cpy_r_r61 = CPyStatics[1792]; /* 'help' */
    cpy_r_r62 = CPyStatics[2763]; /* 'Show this help message and exit' */
    cpy_r_r63 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r64[5] = {cpy_r_general_group, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r67 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775811ULL, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 505, CPyStatic_mypy___main___globals);
        goto CPyL737;
    } else
        goto CPyL738;
CPyL43: ;
    cpy_r_r68 = CPyStatics[1817]; /* '-v' */
    cpy_r_r69 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r70 = CPyStatics[226]; /* 'count' */
    cpy_r_r71 = CPyStatics[1729]; /* 'verbosity' */
    cpy_r_r72 = CPyStatics[2764]; /* 'More verbose messages' */
    cpy_r_r73 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r74[6] = {
        cpy_r_general_group, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71,
        cpy_r_r72
    };
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r77 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r75, 9223372036854775811ULL, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 508, CPyStatic_mypy___main___globals);
        goto CPyL737;
    } else
        goto CPyL739;
CPyL44: ;
    cpy_r_r78 = CPyStatic_mypy___main___globals;
    cpy_r_r79 = CPyStatics[150]; /* '__file__' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 512, CPyStatic_mypy___main___globals);
        goto CPyL737;
    }
    if (likely(PyUnicode_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 512, CPyStatic_mypy___main___globals, "str", cpy_r_r80);
        goto CPyL737;
    }
    cpy_r_r82 = CPyStatics[174]; /* '.py' */
    cpy_r_r83 = CPyStr_Endswith(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (!cpy_r_r83) goto CPyL48;
    cpy_r_r84 = CPyStatics[2732]; /* 'no' */
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = cpy_r_r84;
    goto CPyL49;
CPyL48: ;
    cpy_r_r86 = CPyStatics[2765]; /* 'yes' */
    CPy_INCREF(cpy_r_r86);
    cpy_r_r85 = cpy_r_r86;
CPyL49: ;
    cpy_r_compilation_status = cpy_r_r85;
    cpy_r_r87 = CPyStatics[1793]; /* '-V' */
    cpy_r_r88 = CPyStatics[1794]; /* '--version' */
    cpy_r_r89 = (PyObject *)CPyType_mypy___main___CapturableVersionAction;
    cpy_r_r90 = CPyStatics[1795]; /* '%(prog)s ' */
    cpy_r_r91 = CPyStatic_mypy___main___globals;
    cpy_r_r92 = CPyStatics[145]; /* '__version__' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 517, CPyStatic_mypy___main___globals);
        goto CPyL740;
    }
    if (likely(PyUnicode_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 517, CPyStatic_mypy___main___globals, "str", cpy_r_r93);
        goto CPyL740;
    }
    cpy_r_r95 = PyUnicode_Concat(cpy_r_r90, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 517, CPyStatic_mypy___main___globals);
        goto CPyL740;
    }
    cpy_r_r96 = CPyStatics[2766]; /* ' (compiled: ' */
    cpy_r_r97 = CPyStatics[72]; /* ')' */
    cpy_r_r98 = CPyStr_Build(3, cpy_r_r96, cpy_r_compilation_status, cpy_r_r97);
    CPy_DECREF(cpy_r_compilation_status);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 517, CPyStatic_mypy___main___globals);
        goto CPyL741;
    }
    cpy_r_r99 = PyUnicode_Concat(cpy_r_r95, cpy_r_r98);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 517, CPyStatic_mypy___main___globals);
        goto CPyL737;
    }
    cpy_r_r100 = CPyStatics[1796]; /* "Show program's version number and exit" */
    cpy_r_r101 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r102[7] = {
        cpy_r_general_group, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r99,
        cpy_r_r100, cpy_r_stdout
    };
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = CPyStatics[9459]; /* ('action', 'version', 'help', 'stdout') */
    cpy_r_r105 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775811ULL, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 513, CPyStatic_mypy___main___globals);
        goto CPyL742;
    } else
        goto CPyL743;
CPyL55: ;
    CPy_DECREF(cpy_r_general_group);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r106 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 522, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r106);
CPyL56: ;
    cpy_r_r107 = CPyStatics[2767]; /* 'Config file' */
    cpy_r_r108 = CPyStatics[2768]; /* ('Use a config file instead of command line arguments. '
                                      'This is useful if you are using many flags or want '
                                      'to set different options per each module.') */
    cpy_r_r109 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r110[3] = {cpy_r_r106, cpy_r_r107, cpy_r_r108};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r113 = PyObject_VectorcallMethod(cpy_r_r109, cpy_r_r111, 9223372036854775809ULL, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 522, CPyStatic_mypy___main___globals);
        goto CPyL744;
    }
    CPy_DECREF(cpy_r_r106);
    cpy_r_config_group = cpy_r_r113;
    cpy_r_r114 = CPyStatics[2769]; /* '--config-file' */
    cpy_r_r115 = CPyStatics[71]; /* ', ' */
    cpy_r_r116 = CPyStatic_defaults___CONFIG_FILES;
    if (unlikely(cpy_r_r116 == NULL)) {
        goto CPyL745;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONFIG_FILES\" was not set");
    cpy_r_r117 = 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 531, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r118 = PyUnicode_Join(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 531, CPyStatic_mypy___main___globals);
        goto CPyL746;
    }
    cpy_r_r119 = CPyStatics[2770]; /* ('Configuration file, must have a [mypy] section '
                                      '(defaults to ') */
    cpy_r_r120 = CPyStatics[72]; /* ')' */
    cpy_r_r121 = CPyStr_Build(3, cpy_r_r119, cpy_r_r118, cpy_r_r120);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 530, CPyStatic_mypy___main___globals);
        goto CPyL746;
    }
    cpy_r_r122 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r123[3] = {cpy_r_config_group, cpy_r_r114, cpy_r_r121};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r126 = PyObject_VectorcallMethod(cpy_r_r122, cpy_r_r124, 9223372036854775810ULL, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 528, CPyStatic_mypy___main___globals);
        goto CPyL747;
    } else
        goto CPyL748;
CPyL63: ;
    CPy_DECREF(cpy_r_r121);
    cpy_r_r127 = CPyStatics[2771]; /* '--warn-unused-configs' */
    cpy_r_r128 = CPyStatics[2772]; /* ("Warn about unused '[mypy-<pattern>]' or "
                                      "'[[tool.mypy.overrides]]' config sections") */
    cpy_r_r129 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 533, CPyStatic_mypy___main___globals);
        goto CPyL746;
    }
    CPy_INCREF(cpy_r_r129);
CPyL64: ;
    cpy_r_r130 = 0 ? Py_True : Py_False;
    cpy_r_r131 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r132[5] = {
        cpy_r_r127, cpy_r_r130, cpy_r_r131, cpy_r_r128,
        cpy_r_config_group
    };
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r135 = _PyObject_Vectorcall(cpy_r_r129, cpy_r_r133, 1, cpy_r_r134);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 533, CPyStatic_mypy___main___globals);
        goto CPyL746;
    } else
        goto CPyL749;
CPyL65: ;
    CPy_DECREF(cpy_r_config_group);
    cpy_r_r136 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 542, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r136);
CPyL66: ;
    cpy_r_r137 = CPyStatics[2774]; /* 'Import discovery' */
    cpy_r_r138 = CPyStatics[2775]; /* 'Configure how imports are discovered and followed.' */
    cpy_r_r139 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r140[3] = {cpy_r_r136, cpy_r_r137, cpy_r_r138};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r143 = PyObject_VectorcallMethod(cpy_r_r139, cpy_r_r141, 9223372036854775809ULL, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 542, CPyStatic_mypy___main___globals);
        goto CPyL750;
    }
    CPy_DECREF(cpy_r_r136);
    cpy_r_imports_group = cpy_r_r143;
    cpy_r_r144 = CPyStatics[2776]; /* '--no-namespace-packages' */
    cpy_r_r145 = CPyStatics[2552]; /* 'namespace_packages' */
    cpy_r_r146 = CPyStatics[2777]; /* 'Support namespace packages (PEP 420, __init__.py-less)' */
    cpy_r_r147 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 545, CPyStatic_mypy___main___globals);
        goto CPyL751;
    }
    CPy_INCREF(cpy_r_r147);
CPyL68: ;
    cpy_r_r148 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r149[5] = {
        cpy_r_r144, cpy_r_r145, cpy_r_r148, cpy_r_r146,
        cpy_r_imports_group
    };
    cpy_r_r150 = (PyObject **)&cpy_r_r149;
    cpy_r_r151 = CPyStatics[9462]; /* ('dest', 'default', 'help', 'group') */
    cpy_r_r152 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r150, 1, cpy_r_r151);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 545, CPyStatic_mypy___main___globals);
        goto CPyL751;
    } else
        goto CPyL752;
CPyL69: ;
    cpy_r_r153 = CPyStatics[2778]; /* '--ignore-missing-imports' */
    cpy_r_r154 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r155 = CPyStatics[2779]; /* 'Silently ignore imports of missing modules' */
    cpy_r_r156 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r157[4] = {cpy_r_imports_group, cpy_r_r153, cpy_r_r154, cpy_r_r155};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r160 = PyObject_VectorcallMethod(cpy_r_r156, cpy_r_r158, 9223372036854775810ULL, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 552, CPyStatic_mypy___main___globals);
        goto CPyL751;
    } else
        goto CPyL753;
CPyL70: ;
    cpy_r_r161 = CPyStatics[2780]; /* '--follow-imports' */
    cpy_r_r162 = CPyStatics[398]; /* 'normal' */
    cpy_r_r163 = CPyStatics[364]; /* 'silent' */
    cpy_r_r164 = CPyStatics[400]; /* 'skip' */
    cpy_r_r165 = CPyStatics[401]; /* 'error' */
    cpy_r_r166 = PyList_New(4);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 559, CPyStatic_mypy___main___globals);
        goto CPyL751;
    }
    cpy_r_r167 = (CPyPtr)&((PyListObject *)cpy_r_r166)->ob_item;
    cpy_r_r168 = *(CPyPtr *)cpy_r_r167;
    CPy_INCREF(cpy_r_r162);
    *(PyObject * *)cpy_r_r168 = cpy_r_r162;
    cpy_r_r169 = cpy_r_r168 + 8;
    CPy_INCREF(cpy_r_r163);
    *(PyObject * *)cpy_r_r169 = cpy_r_r163;
    cpy_r_r170 = cpy_r_r168 + 16;
    CPy_INCREF(cpy_r_r164);
    *(PyObject * *)cpy_r_r170 = cpy_r_r164;
    cpy_r_r171 = cpy_r_r168 + 24;
    CPy_INCREF(cpy_r_r165);
    *(PyObject * *)cpy_r_r171 = cpy_r_r165;
    cpy_r_r172 = CPyStatics[398]; /* 'normal' */
    cpy_r_r173 = CPyStatics[2781]; /* 'How to treat imports (default normal)' */
    cpy_r_r174 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r175[5] = {
        cpy_r_imports_group, cpy_r_r161, cpy_r_r166, cpy_r_r172,
        cpy_r_r173
    };
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = CPyStatics[9463]; /* ('choices', 'default', 'help') */
    cpy_r_r178 = PyObject_VectorcallMethod(cpy_r_r174, cpy_r_r176, 9223372036854775810ULL, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 557, CPyStatic_mypy___main___globals);
        goto CPyL754;
    } else
        goto CPyL755;
CPyL72: ;
    CPy_DECREF(cpy_r_r166);
    cpy_r_r179 = CPyStatics[2782]; /* '--python-executable' */
    cpy_r_r180 = CPyStatics[2783]; /* 'store' */
    cpy_r_r181 = CPyStatics[2784]; /* 'EXECUTABLE' */
    cpy_r_r182 = CPyStatics[2785]; /* ('Python executable used for finding PEP 561 compliant '
                                      'installed packages and stubs') */
    cpy_r_r183 = CPyStatics[2786]; /* 'special-opts:python_executable' */
    cpy_r_r184 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r185[6] = {
        cpy_r_imports_group, cpy_r_r179, cpy_r_r180, cpy_r_r181,
        cpy_r_r182, cpy_r_r183
    };
    cpy_r_r186 = (PyObject **)&cpy_r_r185;
    cpy_r_r187 = CPyStatics[9464]; /* ('action', 'metavar', 'help', 'dest') */
    cpy_r_r188 = PyObject_VectorcallMethod(cpy_r_r184, cpy_r_r186, 9223372036854775810ULL, cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 563, CPyStatic_mypy___main___globals);
        goto CPyL751;
    } else
        goto CPyL756;
CPyL73: ;
    cpy_r_r189 = CPyStatics[2787]; /* '--no-site-packages' */
    cpy_r_r190 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r191 = CPyStatics[2788]; /* 'special-opts:no_executable' */
    cpy_r_r192 = CPyStatics[2789]; /* 'Do not search for installed PEP 561 compliant packages' */
    cpy_r_r193 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r194[5] = {
        cpy_r_imports_group, cpy_r_r189, cpy_r_r190, cpy_r_r191,
        cpy_r_r192
    };
    cpy_r_r195 = (PyObject **)&cpy_r_r194;
    cpy_r_r196 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r197 = PyObject_VectorcallMethod(cpy_r_r193, cpy_r_r195, 9223372036854775810ULL, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 571, CPyStatic_mypy___main___globals);
        goto CPyL751;
    } else
        goto CPyL757;
CPyL74: ;
    cpy_r_r198 = CPyStatics[2790]; /* '--no-silence-site-packages' */
    cpy_r_r199 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r200 = CPyStatics[2791]; /* ('Do not silence errors in PEP 561 compliant installed '
                                      'packages') */
    cpy_r_r201 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r202[4] = {cpy_r_imports_group, cpy_r_r198, cpy_r_r199, cpy_r_r200};
    cpy_r_r203 = (PyObject **)&cpy_r_r202;
    cpy_r_r204 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r205 = PyObject_VectorcallMethod(cpy_r_r201, cpy_r_r203, 9223372036854775810ULL, cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 577, CPyStatic_mypy___main___globals);
        goto CPyL751;
    } else
        goto CPyL758;
CPyL75: ;
    CPy_DECREF(cpy_r_imports_group);
    cpy_r_r206 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 583, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r206);
CPyL76: ;
    cpy_r_r207 = CPyStatics[2792]; /* 'Platform configuration' */
    cpy_r_r208 = CPyStatics[2793]; /* ('Type check code assuming it will be run under '
                                      'certain runtime conditions. By default, mypy assumes '
                                      'your code will be run using the same operating '
                                      'system and Python version you are using to run mypy '
                                      'itself.') */
    cpy_r_r209 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r210[3] = {cpy_r_r206, cpy_r_r207, cpy_r_r208};
    cpy_r_r211 = (PyObject **)&cpy_r_r210;
    cpy_r_r212 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r213 = PyObject_VectorcallMethod(cpy_r_r209, cpy_r_r211, 9223372036854775809ULL, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 583, CPyStatic_mypy___main___globals);
        goto CPyL759;
    }
    CPy_DECREF(cpy_r_r206);
    cpy_r_platform_group = cpy_r_r213;
    cpy_r_r214 = CPyStatics[2794]; /* '--python-version' */
    cpy_r_r215 = CPyStatic_mypy___main___globals;
    cpy_r_r216 = CPyStatics[1570]; /* 'parse_version' */
    cpy_r_r217 = CPyDict_GetItem(cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 592, CPyStatic_mypy___main___globals);
        goto CPyL760;
    }
    cpy_r_r218 = CPyStatics[2795]; /* 'x.y' */
    cpy_r_r219 = CPyStatics[2796]; /* ('Type check code assuming it will be running on '
                                      'Python x.y') */
    cpy_r_r220 = CPyStatics[2797]; /* 'special-opts:python_version' */
    cpy_r_r221 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r222[6] = {
        cpy_r_platform_group, cpy_r_r214, cpy_r_r217, cpy_r_r218,
        cpy_r_r219, cpy_r_r220
    };
    cpy_r_r223 = (PyObject **)&cpy_r_r222;
    cpy_r_r224 = CPyStatics[9465]; /* ('type', 'metavar', 'help', 'dest') */
    cpy_r_r225 = PyObject_VectorcallMethod(cpy_r_r221, cpy_r_r223, 9223372036854775810ULL, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 590, CPyStatic_mypy___main___globals);
        goto CPyL761;
    } else
        goto CPyL762;
CPyL79: ;
    CPy_DECREF(cpy_r_r217);
    cpy_r_r226 = CPyStatics[2798]; /* '-2' */
    cpy_r_r227 = CPyStatics[2799]; /* '--py2' */
    cpy_r_r228 = CPyStatics[2797]; /* 'special-opts:python_version' */
    cpy_r_r229 = CPyStatics[2800]; /* 'store_const' */
    cpy_r_r230 = CPyStatic_defaults___PYTHON2_VERSION;
    if (unlikely(cpy_r_r230.f0 == CPY_INT_TAG)) {
        goto CPyL763;
    } else
        goto CPyL82;
CPyL80: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON2_VERSION\" was not set");
    cpy_r_r231 = 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 602, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r232 = CPyStatics[2801]; /* 'Use Python 2 mode (same as --python-version 2.7)' */
    cpy_r_r233 = CPyStatics[1791]; /* 'add_argument' */
    CPyTagged_INCREF(cpy_r_r230.f0);
    CPyTagged_INCREF(cpy_r_r230.f1);
    cpy_r_r234 = PyTuple_New(2);
    if (unlikely(cpy_r_r234 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3147 = CPyTagged_StealAsObject(cpy_r_r230.f0);
    PyTuple_SET_ITEM(cpy_r_r234, 0, __tmp3147);
    PyObject *__tmp3148 = CPyTagged_StealAsObject(cpy_r_r230.f1);
    PyTuple_SET_ITEM(cpy_r_r234, 1, __tmp3148);
    PyObject *cpy_r_r235[7] = {
        cpy_r_platform_group, cpy_r_r226, cpy_r_r227, cpy_r_r228,
        cpy_r_r229, cpy_r_r234, cpy_r_r232
    };
    cpy_r_r236 = (PyObject **)&cpy_r_r235;
    cpy_r_r237 = CPyStatics[9466]; /* ('dest', 'action', 'const', 'help') */
    cpy_r_r238 = PyObject_VectorcallMethod(cpy_r_r233, cpy_r_r236, 9223372036854775811ULL, cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 597, CPyStatic_mypy___main___globals);
        goto CPyL764;
    } else
        goto CPyL765;
CPyL83: ;
    CPy_DECREF(cpy_r_r234);
    cpy_r_r239 = CPyStatics[2803]; /* '--platform' */
    cpy_r_r240 = CPyStatics[2783]; /* 'store' */
    cpy_r_r241 = CPyStatics[2804]; /* 'PLATFORM' */
    cpy_r_r242 = CPyStatics[2805]; /* ('Type check special-cased code for the given OS '
                                      'platform (defaults to sys.platform)') */
    cpy_r_r243 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r244[5] = {
        cpy_r_platform_group, cpy_r_r239, cpy_r_r240, cpy_r_r241,
        cpy_r_r242
    };
    cpy_r_r245 = (PyObject **)&cpy_r_r244;
    cpy_r_r246 = CPyStatics[9467]; /* ('action', 'metavar', 'help') */
    cpy_r_r247 = PyObject_VectorcallMethod(cpy_r_r243, cpy_r_r245, 9223372036854775810ULL, cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 605, CPyStatic_mypy___main___globals);
        goto CPyL760;
    } else
        goto CPyL766;
CPyL84: ;
    cpy_r_r248 = CPyStatics[2806]; /* '--always-true' */
    cpy_r_r249 = CPyStatics[1865]; /* 'NAME' */
    cpy_r_r250 = CPyStatics[1304]; /* 'append' */
    cpy_r_r251 = PyList_New(0);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 616, CPyStatic_mypy___main___globals);
        goto CPyL760;
    }
    cpy_r_r252 = CPyStatics[2807]; /* ('Additional variable to be considered True (may be '
                                      'repeated)') */
    cpy_r_r253 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r254[6] = {
        cpy_r_platform_group, cpy_r_r248, cpy_r_r249, cpy_r_r250,
        cpy_r_r251, cpy_r_r252
    };
    cpy_r_r255 = (PyObject **)&cpy_r_r254;
    cpy_r_r256 = CPyStatics[9468]; /* ('metavar', 'action', 'default', 'help') */
    cpy_r_r257 = PyObject_VectorcallMethod(cpy_r_r253, cpy_r_r255, 9223372036854775810ULL, cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 612, CPyStatic_mypy___main___globals);
        goto CPyL767;
    } else
        goto CPyL768;
CPyL86: ;
    CPy_DECREF(cpy_r_r251);
    cpy_r_r258 = CPyStatics[2808]; /* '--always-false' */
    cpy_r_r259 = CPyStatics[1865]; /* 'NAME' */
    cpy_r_r260 = CPyStatics[1304]; /* 'append' */
    cpy_r_r261 = PyList_New(0);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 623, CPyStatic_mypy___main___globals);
        goto CPyL760;
    }
    cpy_r_r262 = CPyStatics[2809]; /* ('Additional variable to be considered False (may be '
                                      'repeated)') */
    cpy_r_r263 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r264[6] = {
        cpy_r_platform_group, cpy_r_r258, cpy_r_r259, cpy_r_r260,
        cpy_r_r261, cpy_r_r262
    };
    cpy_r_r265 = (PyObject **)&cpy_r_r264;
    cpy_r_r266 = CPyStatics[9468]; /* ('metavar', 'action', 'default', 'help') */
    cpy_r_r267 = PyObject_VectorcallMethod(cpy_r_r263, cpy_r_r265, 9223372036854775810ULL, cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 619, CPyStatic_mypy___main___globals);
        goto CPyL769;
    } else
        goto CPyL770;
CPyL88: ;
    CPy_DECREF(cpy_r_platform_group);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r268 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 627, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r268);
CPyL89: ;
    cpy_r_r269 = CPyStatics[2810]; /* 'Disallow dynamic typing' */
    cpy_r_r270 = CPyStatics[2811]; /* ("Disallow the use of the dynamic 'Any' type under "
                                      'certain conditions.') */
    cpy_r_r271 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r272[3] = {cpy_r_r268, cpy_r_r269, cpy_r_r270};
    cpy_r_r273 = (PyObject **)&cpy_r_r272;
    cpy_r_r274 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r275 = PyObject_VectorcallMethod(cpy_r_r271, cpy_r_r273, 9223372036854775809ULL, cpy_r_r274);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 627, CPyStatic_mypy___main___globals);
        goto CPyL771;
    }
    CPy_DECREF(cpy_r_r268);
    cpy_r_disallow_any_group = cpy_r_r275;
    cpy_r_r276 = CPyStatics[2812]; /* '--disallow-any-unimported' */
    cpy_r_r277 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r278 = CPyStatics[2813]; /* 'Disallow Any types resulting from unfollowed imports' */
    cpy_r_r279 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r280 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r281[5] = {
        cpy_r_disallow_any_group, cpy_r_r276, cpy_r_r280, cpy_r_r277,
        cpy_r_r278
    };
    cpy_r_r282 = (PyObject **)&cpy_r_r281;
    cpy_r_r283 = CPyStatics[9469]; /* ('default', 'action', 'help') */
    cpy_r_r284 = PyObject_VectorcallMethod(cpy_r_r279, cpy_r_r282, 9223372036854775810ULL, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 631, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL773;
CPyL91: ;
    cpy_r_r285 = CPyStatics[2814]; /* '--disallow-any-expr' */
    cpy_r_r286 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r287 = CPyStatics[2815]; /* 'Disallow all expressions that have type Any' */
    cpy_r_r288 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r289 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r290[5] = {
        cpy_r_disallow_any_group, cpy_r_r285, cpy_r_r289, cpy_r_r286,
        cpy_r_r287
    };
    cpy_r_r291 = (PyObject **)&cpy_r_r290;
    cpy_r_r292 = CPyStatics[9469]; /* ('default', 'action', 'help') */
    cpy_r_r293 = PyObject_VectorcallMethod(cpy_r_r288, cpy_r_r291, 9223372036854775810ULL, cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 637, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL774;
CPyL92: ;
    cpy_r_r294 = CPyStatics[2816]; /* '--disallow-any-decorated' */
    cpy_r_r295 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r296 = CPyStatics[2817]; /* ('Disallow functions that have Any in their signature '
                                      'after decorator transformation') */
    cpy_r_r297 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r298 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r299[5] = {
        cpy_r_disallow_any_group, cpy_r_r294, cpy_r_r298, cpy_r_r295,
        cpy_r_r296
    };
    cpy_r_r300 = (PyObject **)&cpy_r_r299;
    cpy_r_r301 = CPyStatics[9469]; /* ('default', 'action', 'help') */
    cpy_r_r302 = PyObject_VectorcallMethod(cpy_r_r297, cpy_r_r300, 9223372036854775810ULL, cpy_r_r301);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 643, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL775;
CPyL93: ;
    cpy_r_r303 = CPyStatics[2818]; /* '--disallow-any-explicit' */
    cpy_r_r304 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r305 = CPyStatics[2819]; /* 'Disallow explicit Any in type positions' */
    cpy_r_r306 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r307 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r308[5] = {
        cpy_r_disallow_any_group, cpy_r_r303, cpy_r_r307, cpy_r_r304,
        cpy_r_r305
    };
    cpy_r_r309 = (PyObject **)&cpy_r_r308;
    cpy_r_r310 = CPyStatics[9469]; /* ('default', 'action', 'help') */
    cpy_r_r311 = PyObject_VectorcallMethod(cpy_r_r306, cpy_r_r309, 9223372036854775810ULL, cpy_r_r310);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 650, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL776;
CPyL94: ;
    cpy_r_r312 = CPyStatics[2820]; /* '--disallow-any-generics' */
    cpy_r_r313 = CPyStatics[2821]; /* ('Disallow usage of generic types that do not specify '
                                      'explicit type parameters') */
    cpy_r_r314 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 656, CPyStatic_mypy___main___globals);
        goto CPyL772;
    }
    CPy_INCREF(cpy_r_r314);
CPyL95: ;
    cpy_r_r315 = 0 ? Py_True : Py_False;
    cpy_r_r316 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r317[5] = {
        cpy_r_r312, cpy_r_r315, cpy_r_r316, cpy_r_r313,
        cpy_r_disallow_any_group
    };
    cpy_r_r318 = (PyObject **)&cpy_r_r317;
    cpy_r_r319 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r320 = _PyObject_Vectorcall(cpy_r_r314, cpy_r_r318, 1, cpy_r_r319);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 656, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL777;
CPyL96: ;
    cpy_r_r321 = CPyStatics[2822]; /* '--disallow-subclassing-any' */
    cpy_r_r322 = CPyStatics[2823]; /* ("Disallow subclassing values of type 'Any' when "
                                      'defining classes') */
    cpy_r_r323 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 663, CPyStatic_mypy___main___globals);
        goto CPyL772;
    }
    CPy_INCREF(cpy_r_r323);
CPyL97: ;
    cpy_r_r324 = 0 ? Py_True : Py_False;
    cpy_r_r325 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r326[5] = {
        cpy_r_r321, cpy_r_r324, cpy_r_r325, cpy_r_r322,
        cpy_r_disallow_any_group
    };
    cpy_r_r327 = (PyObject **)&cpy_r_r326;
    cpy_r_r328 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r329 = _PyObject_Vectorcall(cpy_r_r323, cpy_r_r327, 1, cpy_r_r328);
    CPy_DECREF(cpy_r_r323);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 663, CPyStatic_mypy___main___globals);
        goto CPyL772;
    } else
        goto CPyL778;
CPyL98: ;
    CPy_DECREF(cpy_r_disallow_any_group);
    cpy_r_r330 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 671, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r330);
CPyL99: ;
    cpy_r_r331 = CPyStatics[2824]; /* 'Untyped definitions and calls' */
    cpy_r_r332 = CPyStatics[2825]; /* ('Configure how untyped definitions and calls are '
                                      'handled. Note: by default, mypy ignores any untyped '
                                      'function definitions and assumes any calls to such '
                                      "functions have a return type of 'Any'.") */
    cpy_r_r333 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r334[3] = {cpy_r_r330, cpy_r_r331, cpy_r_r332};
    cpy_r_r335 = (PyObject **)&cpy_r_r334;
    cpy_r_r336 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r337 = PyObject_VectorcallMethod(cpy_r_r333, cpy_r_r335, 9223372036854775809ULL, cpy_r_r336);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 671, CPyStatic_mypy___main___globals);
        goto CPyL779;
    }
    CPy_DECREF(cpy_r_r330);
    cpy_r_untyped_group = cpy_r_r337;
    cpy_r_r338 = CPyStatics[2826]; /* '--disallow-untyped-calls' */
    cpy_r_r339 = CPyStatics[2827]; /* ('Disallow calling functions without type annotations '
                                      'from functions with type annotations') */
    cpy_r_r340 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 678, CPyStatic_mypy___main___globals);
        goto CPyL780;
    }
    CPy_INCREF(cpy_r_r340);
CPyL101: ;
    cpy_r_r341 = 0 ? Py_True : Py_False;
    cpy_r_r342 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r343[5] = {
        cpy_r_r338, cpy_r_r341, cpy_r_r342, cpy_r_r339,
        cpy_r_untyped_group
    };
    cpy_r_r344 = (PyObject **)&cpy_r_r343;
    cpy_r_r345 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r346 = _PyObject_Vectorcall(cpy_r_r340, cpy_r_r344, 1, cpy_r_r345);
    CPy_DECREF(cpy_r_r340);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 678, CPyStatic_mypy___main___globals);
        goto CPyL780;
    } else
        goto CPyL781;
CPyL102: ;
    cpy_r_r347 = CPyStatics[2828]; /* '--disallow-untyped-defs' */
    cpy_r_r348 = CPyStatics[2829]; /* ('Disallow defining functions without type annotations '
                                      'or with incomplete type annotations') */
    cpy_r_r349 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 686, CPyStatic_mypy___main___globals);
        goto CPyL780;
    }
    CPy_INCREF(cpy_r_r349);
CPyL103: ;
    cpy_r_r350 = 0 ? Py_True : Py_False;
    cpy_r_r351 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r352[5] = {
        cpy_r_r347, cpy_r_r350, cpy_r_r351, cpy_r_r348,
        cpy_r_untyped_group
    };
    cpy_r_r353 = (PyObject **)&cpy_r_r352;
    cpy_r_r354 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r355 = _PyObject_Vectorcall(cpy_r_r349, cpy_r_r353, 1, cpy_r_r354);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 686, CPyStatic_mypy___main___globals);
        goto CPyL780;
    } else
        goto CPyL782;
CPyL104: ;
    cpy_r_r356 = CPyStatics[2830]; /* '--disallow-incomplete-defs' */
    cpy_r_r357 = CPyStatics[2831]; /* ('Disallow defining functions with incomplete type '
                                      'annotations (while still allowing entirely '
                                      'unannotated definitions)') */
    cpy_r_r358 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 694, CPyStatic_mypy___main___globals);
        goto CPyL780;
    }
    CPy_INCREF(cpy_r_r358);
CPyL105: ;
    cpy_r_r359 = 0 ? Py_True : Py_False;
    cpy_r_r360 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r361[5] = {
        cpy_r_r356, cpy_r_r359, cpy_r_r360, cpy_r_r357,
        cpy_r_untyped_group
    };
    cpy_r_r362 = (PyObject **)&cpy_r_r361;
    cpy_r_r363 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r364 = _PyObject_Vectorcall(cpy_r_r358, cpy_r_r362, 1, cpy_r_r363);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 694, CPyStatic_mypy___main___globals);
        goto CPyL780;
    } else
        goto CPyL783;
CPyL106: ;
    cpy_r_r365 = CPyStatics[2832]; /* '--check-untyped-defs' */
    cpy_r_r366 = CPyStatics[2833]; /* ('Type check the interior of functions without type '
                                      'annotations') */
    cpy_r_r367 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 702, CPyStatic_mypy___main___globals);
        goto CPyL780;
    }
    CPy_INCREF(cpy_r_r367);
CPyL107: ;
    cpy_r_r368 = 0 ? Py_True : Py_False;
    cpy_r_r369 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r370[5] = {
        cpy_r_r365, cpy_r_r368, cpy_r_r369, cpy_r_r366,
        cpy_r_untyped_group
    };
    cpy_r_r371 = (PyObject **)&cpy_r_r370;
    cpy_r_r372 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r373 = _PyObject_Vectorcall(cpy_r_r367, cpy_r_r371, 1, cpy_r_r372);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 702, CPyStatic_mypy___main___globals);
        goto CPyL780;
    } else
        goto CPyL784;
CPyL108: ;
    cpy_r_r374 = CPyStatics[2834]; /* '--disallow-untyped-decorators' */
    cpy_r_r375 = CPyStatics[2835]; /* ('Disallow decorating typed functions with untyped '
                                      'decorators') */
    cpy_r_r376 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r376 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 709, CPyStatic_mypy___main___globals);
        goto CPyL780;
    }
    CPy_INCREF(cpy_r_r376);
CPyL109: ;
    cpy_r_r377 = 0 ? Py_True : Py_False;
    cpy_r_r378 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r379[5] = {
        cpy_r_r374, cpy_r_r377, cpy_r_r378, cpy_r_r375,
        cpy_r_untyped_group
    };
    cpy_r_r380 = (PyObject **)&cpy_r_r379;
    cpy_r_r381 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r382 = _PyObject_Vectorcall(cpy_r_r376, cpy_r_r380, 1, cpy_r_r381);
    CPy_DECREF(cpy_r_r376);
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 709, CPyStatic_mypy___main___globals);
        goto CPyL780;
    } else
        goto CPyL785;
CPyL110: ;
    CPy_DECREF(cpy_r_untyped_group);
    cpy_r_r383 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 717, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r383);
CPyL111: ;
    cpy_r_r384 = CPyStatics[2836]; /* 'None and Optional handling' */
    cpy_r_r385 = CPyStatics[2837]; /* ("Adjust how values of type 'None' are handled. For "
                                      'more context on how mypy handles values of type '
                                      "'None', see: "
                                      'https://mypy.readthedocs.io/en/stable/kinds_of_types.html#no-strict-optional') */
    cpy_r_r386 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r387[3] = {cpy_r_r383, cpy_r_r384, cpy_r_r385};
    cpy_r_r388 = (PyObject **)&cpy_r_r387;
    cpy_r_r389 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r390 = PyObject_VectorcallMethod(cpy_r_r386, cpy_r_r388, 9223372036854775809ULL, cpy_r_r389);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 717, CPyStatic_mypy___main___globals);
        goto CPyL786;
    }
    CPy_DECREF(cpy_r_r383);
    cpy_r_none_group = cpy_r_r390;
    cpy_r_r391 = CPyStatics[2838]; /* '--implicit-optional' */
    cpy_r_r392 = CPyStatics[2839]; /* ('Assume arguments with default values of None are '
                                      'Optional') */
    cpy_r_r393 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 723, CPyStatic_mypy___main___globals);
        goto CPyL787;
    }
    CPy_INCREF(cpy_r_r393);
CPyL113: ;
    cpy_r_r394 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r395[4] = {cpy_r_r391, cpy_r_r394, cpy_r_r392, cpy_r_none_group};
    cpy_r_r396 = (PyObject **)&cpy_r_r395;
    cpy_r_r397 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r398 = _PyObject_Vectorcall(cpy_r_r393, cpy_r_r396, 1, cpy_r_r397);
    CPy_DECREF(cpy_r_r393);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 723, CPyStatic_mypy___main___globals);
        goto CPyL787;
    } else
        goto CPyL788;
CPyL114: ;
    cpy_r_r399 = CPyStatics[2840]; /* '--strict-optional' */
    cpy_r_r400 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r401 = CPyModule_argparse;
    cpy_r_r402 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r403 = CPyObject_GetAttr(cpy_r_r401, cpy_r_r402);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 729, CPyStatic_mypy___main___globals);
        goto CPyL787;
    }
    cpy_r_r404 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r405[4] = {cpy_r_none_group, cpy_r_r399, cpy_r_r400, cpy_r_r403};
    cpy_r_r406 = (PyObject **)&cpy_r_r405;
    cpy_r_r407 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r408 = PyObject_VectorcallMethod(cpy_r_r404, cpy_r_r406, 9223372036854775810ULL, cpy_r_r407);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 729, CPyStatic_mypy___main___globals);
        goto CPyL789;
    } else
        goto CPyL790;
CPyL116: ;
    CPy_DECREF(cpy_r_r403);
    cpy_r_r409 = CPyStatics[2841]; /* '--no-strict-optional' */
    cpy_r_r410 = CPyStatics[2752]; /* 'store_false' */
    cpy_r_r411 = CPyStatics[2842]; /* 'strict_optional' */
    cpy_r_r412 = CPyStatics[2843]; /* ('Disable strict Optional checks (inverse: '
                                      '--strict-optional)') */
    cpy_r_r413 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r414[5] = {
        cpy_r_none_group, cpy_r_r409, cpy_r_r410, cpy_r_r411,
        cpy_r_r412
    };
    cpy_r_r415 = (PyObject **)&cpy_r_r414;
    cpy_r_r416 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r417 = PyObject_VectorcallMethod(cpy_r_r413, cpy_r_r415, 9223372036854775810ULL, cpy_r_r416);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 730, CPyStatic_mypy___main___globals);
        goto CPyL787;
    } else
        goto CPyL791;
CPyL117: ;
    cpy_r_r418 = CPyStatics[2844]; /* '--force-uppercase-builtins' */
    cpy_r_r419 = CPyModule_argparse;
    cpy_r_r420 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r421 = CPyObject_GetAttr(cpy_r_r419, cpy_r_r420);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 738, CPyStatic_mypy___main___globals);
        goto CPyL787;
    }
    cpy_r_r422 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 737, CPyStatic_mypy___main___globals);
        goto CPyL792;
    }
    CPy_INCREF(cpy_r_r422);
CPyL119: ;
    cpy_r_r423 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r424[4] = {cpy_r_r418, cpy_r_r423, cpy_r_r421, cpy_r_none_group};
    cpy_r_r425 = (PyObject **)&cpy_r_r424;
    cpy_r_r426 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r427 = _PyObject_Vectorcall(cpy_r_r422, cpy_r_r425, 1, cpy_r_r426);
    CPy_DECREF(cpy_r_r422);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 737, CPyStatic_mypy___main___globals);
        goto CPyL792;
    } else
        goto CPyL793;
CPyL120: ;
    CPy_DECREF(cpy_r_r421);
    cpy_r_r428 = CPyStatics[2845]; /* '--force-union-syntax' */
    cpy_r_r429 = CPyModule_argparse;
    cpy_r_r430 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r431 = CPyObject_GetAttr(cpy_r_r429, cpy_r_r430);
    if (unlikely(cpy_r_r431 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 742, CPyStatic_mypy___main___globals);
        goto CPyL787;
    }
    cpy_r_r432 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 741, CPyStatic_mypy___main___globals);
        goto CPyL794;
    }
    CPy_INCREF(cpy_r_r432);
CPyL122: ;
    cpy_r_r433 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r434[4] = {cpy_r_r428, cpy_r_r433, cpy_r_r431, cpy_r_none_group};
    cpy_r_r435 = (PyObject **)&cpy_r_r434;
    cpy_r_r436 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r437 = _PyObject_Vectorcall(cpy_r_r432, cpy_r_r435, 1, cpy_r_r436);
    CPy_DECREF(cpy_r_r432);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 741, CPyStatic_mypy___main___globals);
        goto CPyL794;
    } else
        goto CPyL795;
CPyL123: ;
    CPy_DECREF(cpy_r_r431);
    CPy_DECREF(cpy_r_none_group);
    cpy_r_r438 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r438 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 745, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r438);
CPyL124: ;
    cpy_r_r439 = CPyStatics[2846]; /* 'Configuring warnings' */
    cpy_r_r440 = CPyStatics[2847]; /* ('Detect code that is sound but redundant or '
                                      'problematic.') */
    cpy_r_r441 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r442[3] = {cpy_r_r438, cpy_r_r439, cpy_r_r440};
    cpy_r_r443 = (PyObject **)&cpy_r_r442;
    cpy_r_r444 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r445 = PyObject_VectorcallMethod(cpy_r_r441, cpy_r_r443, 9223372036854775809ULL, cpy_r_r444);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 745, CPyStatic_mypy___main___globals);
        goto CPyL796;
    }
    CPy_DECREF(cpy_r_r438);
    cpy_r_lint_group = cpy_r_r445;
    cpy_r_r446 = CPyStatics[2848]; /* '--warn-redundant-casts' */
    cpy_r_r447 = CPyStatics[2849]; /* 'Warn about casting an expression to its inferred type' */
    cpy_r_r448 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r448 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 749, CPyStatic_mypy___main___globals);
        goto CPyL797;
    }
    CPy_INCREF(cpy_r_r448);
CPyL126: ;
    cpy_r_r449 = 0 ? Py_True : Py_False;
    cpy_r_r450 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r451[5] = {
        cpy_r_r446, cpy_r_r449, cpy_r_r450, cpy_r_r447,
        cpy_r_lint_group
    };
    cpy_r_r452 = (PyObject **)&cpy_r_r451;
    cpy_r_r453 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r454 = _PyObject_Vectorcall(cpy_r_r448, cpy_r_r452, 1, cpy_r_r453);
    CPy_DECREF(cpy_r_r448);
    if (unlikely(cpy_r_r454 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 749, CPyStatic_mypy___main___globals);
        goto CPyL797;
    } else
        goto CPyL798;
CPyL127: ;
    cpy_r_r455 = CPyStatics[2850]; /* '--warn-unused-ignores' */
    cpy_r_r456 = CPyStatics[2851]; /* "Warn about unneeded '# type: ignore' comments" */
    cpy_r_r457 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 756, CPyStatic_mypy___main___globals);
        goto CPyL797;
    }
    CPy_INCREF(cpy_r_r457);
CPyL128: ;
    cpy_r_r458 = 0 ? Py_True : Py_False;
    cpy_r_r459 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r460[5] = {
        cpy_r_r455, cpy_r_r458, cpy_r_r459, cpy_r_r456,
        cpy_r_lint_group
    };
    cpy_r_r461 = (PyObject **)&cpy_r_r460;
    cpy_r_r462 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r463 = _PyObject_Vectorcall(cpy_r_r457, cpy_r_r461, 1, cpy_r_r462);
    CPy_DECREF(cpy_r_r457);
    if (unlikely(cpy_r_r463 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 756, CPyStatic_mypy___main___globals);
        goto CPyL797;
    } else
        goto CPyL799;
CPyL129: ;
    cpy_r_r464 = CPyStatics[2852]; /* '--no-warn-no-return' */
    cpy_r_r465 = CPyStatics[2853]; /* 'warn_no_return' */
    cpy_r_r466 = CPyStatics[2854]; /* 'Do not warn about functions that end without returning' */
    cpy_r_r467 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r467 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 763, CPyStatic_mypy___main___globals);
        goto CPyL797;
    }
    CPy_INCREF(cpy_r_r467);
CPyL130: ;
    cpy_r_r468 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r469[5] = {
        cpy_r_r464, cpy_r_r465, cpy_r_r468, cpy_r_r466,
        cpy_r_lint_group
    };
    cpy_r_r470 = (PyObject **)&cpy_r_r469;
    cpy_r_r471 = CPyStatics[9462]; /* ('dest', 'default', 'help', 'group') */
    cpy_r_r472 = _PyObject_Vectorcall(cpy_r_r467, cpy_r_r470, 1, cpy_r_r471);
    CPy_DECREF(cpy_r_r467);
    if (unlikely(cpy_r_r472 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 763, CPyStatic_mypy___main___globals);
        goto CPyL797;
    } else
        goto CPyL800;
CPyL131: ;
    cpy_r_r473 = CPyStatics[2855]; /* '--warn-return-any' */
    cpy_r_r474 = CPyStatics[2856]; /* ('Warn about returning values of type Any from non-Any '
                                      'typed functions') */
    cpy_r_r475 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r475 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 770, CPyStatic_mypy___main___globals);
        goto CPyL797;
    }
    CPy_INCREF(cpy_r_r475);
CPyL132: ;
    cpy_r_r476 = 0 ? Py_True : Py_False;
    cpy_r_r477 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r478[5] = {
        cpy_r_r473, cpy_r_r476, cpy_r_r477, cpy_r_r474,
        cpy_r_lint_group
    };
    cpy_r_r479 = (PyObject **)&cpy_r_r478;
    cpy_r_r480 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r481 = _PyObject_Vectorcall(cpy_r_r475, cpy_r_r479, 1, cpy_r_r480);
    CPy_DECREF(cpy_r_r475);
    if (unlikely(cpy_r_r481 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 770, CPyStatic_mypy___main___globals);
        goto CPyL797;
    } else
        goto CPyL801;
CPyL133: ;
    cpy_r_r482 = CPyStatics[2857]; /* '--warn-unreachable' */
    cpy_r_r483 = CPyStatics[2858]; /* ('Warn about statements or expressions inferred to be '
                                      'unreachable') */
    cpy_r_r484 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r484 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 777, CPyStatic_mypy___main___globals);
        goto CPyL797;
    }
    CPy_INCREF(cpy_r_r484);
CPyL134: ;
    cpy_r_r485 = 0 ? Py_True : Py_False;
    cpy_r_r486 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r487[5] = {
        cpy_r_r482, cpy_r_r485, cpy_r_r486, cpy_r_r483,
        cpy_r_lint_group
    };
    cpy_r_r488 = (PyObject **)&cpy_r_r487;
    cpy_r_r489 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r490 = _PyObject_Vectorcall(cpy_r_r484, cpy_r_r488, 1, cpy_r_r489);
    CPy_DECREF(cpy_r_r484);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 777, CPyStatic_mypy___main___globals);
        goto CPyL797;
    } else
        goto CPyL802;
CPyL135: ;
    CPy_DECREF(cpy_r_lint_group);
    cpy_r_r491 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r491 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 792, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r491);
CPyL136: ;
    cpy_r_r492 = CPyStatics[2859]; /* 'Miscellaneous strictness flags' */
    cpy_r_r493 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r494[2] = {cpy_r_r491, cpy_r_r492};
    cpy_r_r495 = (PyObject **)&cpy_r_r494;
    cpy_r_r496 = CPyStatics[9458]; /* ('title',) */
    cpy_r_r497 = PyObject_VectorcallMethod(cpy_r_r493, cpy_r_r495, 9223372036854775809ULL, cpy_r_r496);
    if (unlikely(cpy_r_r497 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 792, CPyStatic_mypy___main___globals);
        goto CPyL803;
    }
    CPy_DECREF(cpy_r_r491);
    cpy_r_strictness_group = cpy_r_r497;
    cpy_r_r498 = CPyStatics[2860]; /* '--allow-untyped-globals' */
    cpy_r_r499 = CPyStatics[2861]; /* 'Suppress toplevel errors caused by missing annotations' */
    cpy_r_r500 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r500 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 794, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r500);
CPyL138: ;
    cpy_r_r501 = 0 ? Py_True : Py_False;
    cpy_r_r502 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r503[5] = {
        cpy_r_r498, cpy_r_r501, cpy_r_r502, cpy_r_r499,
        cpy_r_strictness_group
    };
    cpy_r_r504 = (PyObject **)&cpy_r_r503;
    cpy_r_r505 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r506 = _PyObject_Vectorcall(cpy_r_r500, cpy_r_r504, 1, cpy_r_r505);
    CPy_DECREF(cpy_r_r500);
    if (unlikely(cpy_r_r506 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 794, CPyStatic_mypy___main___globals);
        goto CPyL804;
    } else
        goto CPyL805;
CPyL139: ;
    cpy_r_r507 = CPyStatics[2862]; /* '--allow-redefinition' */
    cpy_r_r508 = CPyStatics[2863]; /* ('Allow unconditional variable redefinition with a new '
                                      'type') */
    cpy_r_r509 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r509 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 802, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r509);
CPyL140: ;
    cpy_r_r510 = 0 ? Py_True : Py_False;
    cpy_r_r511 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r512[5] = {
        cpy_r_r507, cpy_r_r510, cpy_r_r511, cpy_r_r508,
        cpy_r_strictness_group
    };
    cpy_r_r513 = (PyObject **)&cpy_r_r512;
    cpy_r_r514 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r515 = _PyObject_Vectorcall(cpy_r_r509, cpy_r_r513, 1, cpy_r_r514);
    CPy_DECREF(cpy_r_r509);
    if (unlikely(cpy_r_r515 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 802, CPyStatic_mypy___main___globals);
        goto CPyL804;
    } else
        goto CPyL806;
CPyL141: ;
    cpy_r_r516 = CPyStatics[2864]; /* '--no-implicit-reexport' */
    cpy_r_r517 = CPyStatics[2865]; /* 'implicit_reexport' */
    cpy_r_r518 = CPyStatics[2866]; /* 'Treat imports as private unless aliased' */
    cpy_r_r519 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 810, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r519);
CPyL142: ;
    cpy_r_r520 = 1 ? Py_True : Py_False;
    cpy_r_r521 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r522[6] = {
        cpy_r_r516, cpy_r_r520, cpy_r_r521, cpy_r_r517, cpy_r_r518,
        cpy_r_strictness_group
    };
    cpy_r_r523 = (PyObject **)&cpy_r_r522;
    cpy_r_r524 = CPyStatics[9471]; /* ('default', 'strict_flag', 'dest', 'help', 'group') */
    cpy_r_r525 = _PyObject_Vectorcall(cpy_r_r519, cpy_r_r523, 1, cpy_r_r524);
    CPy_DECREF(cpy_r_r519);
    if (unlikely(cpy_r_r525 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 810, CPyStatic_mypy___main___globals);
        goto CPyL804;
    } else
        goto CPyL807;
CPyL143: ;
    cpy_r_r526 = CPyStatics[2867]; /* '--strict-equality' */
    cpy_r_r527 = CPyStatics[2868]; /* ('Prohibit equality, identity, and container checks '
                                      'for non-overlapping types') */
    cpy_r_r528 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r528 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 819, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r528);
CPyL144: ;
    cpy_r_r529 = 0 ? Py_True : Py_False;
    cpy_r_r530 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r531[5] = {
        cpy_r_r526, cpy_r_r529, cpy_r_r530, cpy_r_r527,
        cpy_r_strictness_group
    };
    cpy_r_r532 = (PyObject **)&cpy_r_r531;
    cpy_r_r533 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r534 = _PyObject_Vectorcall(cpy_r_r528, cpy_r_r532, 1, cpy_r_r533);
    CPy_DECREF(cpy_r_r528);
    if (unlikely(cpy_r_r534 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 819, CPyStatic_mypy___main___globals);
        goto CPyL804;
    } else
        goto CPyL808;
CPyL145: ;
    cpy_r_r535 = CPyStatics[2869]; /* '--extra-checks' */
    cpy_r_r536 = CPyStatics[2870]; /* ('Enable additional checks that are technically '
                                      'correct but may be impractical in real code. For '
                                      'example, this prohibits partial overlap in TypedDict '
                                      'updates, and makes arguments prepended via '
                                      'Concatenate positional-only') */
    cpy_r_r537 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r537 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 827, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r537);
CPyL146: ;
    cpy_r_r538 = 0 ? Py_True : Py_False;
    cpy_r_r539 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r540[5] = {
        cpy_r_r535, cpy_r_r538, cpy_r_r539, cpy_r_r536,
        cpy_r_strictness_group
    };
    cpy_r_r541 = (PyObject **)&cpy_r_r540;
    cpy_r_r542 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r543 = _PyObject_Vectorcall(cpy_r_r537, cpy_r_r541, 1, cpy_r_r542);
    CPy_DECREF(cpy_r_r537);
    if (unlikely(cpy_r_r543 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 827, CPyStatic_mypy___main___globals);
        goto CPyL804;
    } else
        goto CPyL809;
CPyL147: ;
    cpy_r_r544 = CPyStatics[71]; /* ', ' */
    cpy_r_r545 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_flag_names;
    if (unlikely(cpy_r_r545 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "strict_flag_names", 838, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    CPy_INCREF(cpy_r_r545);
CPyL148: ;
    cpy_r_r546 = PyUnicode_Join(cpy_r_r544, cpy_r_r545);
    CPy_DECREF(cpy_r_r545);
    if (unlikely(cpy_r_r546 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 838, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    cpy_r_r547 = CPyStatics[2871]; /* 'Strict mode; enables the following flags: ' */
    cpy_r_r548 = CPyStr_Build(2, cpy_r_r547, cpy_r_r546);
    CPy_DECREF(cpy_r_r546);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 837, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    cpy_r_strict_help = cpy_r_r548;
    cpy_r_r549 = CPyStatics[2872]; /* '--strict' */
    cpy_r_r550 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r551 = CPyStatics[2873]; /* 'special-opts:strict' */
    cpy_r_r552 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r553[5] = {
        cpy_r_strictness_group, cpy_r_r549, cpy_r_r550, cpy_r_r551,
        cpy_r_strict_help
    };
    cpy_r_r554 = (PyObject **)&cpy_r_r553;
    cpy_r_r555 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r556 = PyObject_VectorcallMethod(cpy_r_r552, cpy_r_r554, 9223372036854775810ULL, cpy_r_r555);
    if (unlikely(cpy_r_r556 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 840, CPyStatic_mypy___main___globals);
        goto CPyL810;
    } else
        goto CPyL811;
CPyL151: ;
    CPy_DECREF(cpy_r_strict_help);
    cpy_r_r557 = CPyStatics[2874]; /* '--disable-error-code' */
    cpy_r_r558 = CPyStatics[1865]; /* 'NAME' */
    cpy_r_r559 = CPyStatics[1304]; /* 'append' */
    cpy_r_r560 = PyList_New(0);
    if (unlikely(cpy_r_r560 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 848, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    cpy_r_r561 = CPyStatics[2875]; /* 'Disable a specific error code' */
    cpy_r_r562 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r563[6] = {
        cpy_r_strictness_group, cpy_r_r557, cpy_r_r558, cpy_r_r559,
        cpy_r_r560, cpy_r_r561
    };
    cpy_r_r564 = (PyObject **)&cpy_r_r563;
    cpy_r_r565 = CPyStatics[9468]; /* ('metavar', 'action', 'default', 'help') */
    cpy_r_r566 = PyObject_VectorcallMethod(cpy_r_r562, cpy_r_r564, 9223372036854775810ULL, cpy_r_r565);
    if (unlikely(cpy_r_r566 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 844, CPyStatic_mypy___main___globals);
        goto CPyL812;
    } else
        goto CPyL813;
CPyL153: ;
    CPy_DECREF(cpy_r_r560);
    cpy_r_r567 = CPyStatics[2876]; /* '--enable-error-code' */
    cpy_r_r568 = CPyStatics[1865]; /* 'NAME' */
    cpy_r_r569 = CPyStatics[1304]; /* 'append' */
    cpy_r_r570 = PyList_New(0);
    if (unlikely(cpy_r_r570 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 855, CPyStatic_mypy___main___globals);
        goto CPyL804;
    }
    cpy_r_r571 = CPyStatics[2877]; /* 'Enable a specific error code' */
    cpy_r_r572 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r573[6] = {
        cpy_r_strictness_group, cpy_r_r567, cpy_r_r568, cpy_r_r569,
        cpy_r_r570, cpy_r_r571
    };
    cpy_r_r574 = (PyObject **)&cpy_r_r573;
    cpy_r_r575 = CPyStatics[9468]; /* ('metavar', 'action', 'default', 'help') */
    cpy_r_r576 = PyObject_VectorcallMethod(cpy_r_r572, cpy_r_r574, 9223372036854775810ULL, cpy_r_r575);
    if (unlikely(cpy_r_r576 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 851, CPyStatic_mypy___main___globals);
        goto CPyL814;
    } else
        goto CPyL815;
CPyL155: ;
    CPy_DECREF(cpy_r_strictness_group);
    CPy_DECREF(cpy_r_r570);
    cpy_r_r577 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r577 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 859, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r577);
CPyL156: ;
    cpy_r_r578 = CPyStatics[2878]; /* 'Configuring error messages' */
    cpy_r_r579 = CPyStatics[2879]; /* 'Adjust the amount of detail shown in error messages.' */
    cpy_r_r580 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r581[3] = {cpy_r_r577, cpy_r_r578, cpy_r_r579};
    cpy_r_r582 = (PyObject **)&cpy_r_r581;
    cpy_r_r583 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r584 = PyObject_VectorcallMethod(cpy_r_r580, cpy_r_r582, 9223372036854775809ULL, cpy_r_r583);
    if (unlikely(cpy_r_r584 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 859, CPyStatic_mypy___main___globals);
        goto CPyL816;
    }
    CPy_DECREF(cpy_r_r577);
    cpy_r_error_group = cpy_r_r584;
    cpy_r_r585 = CPyStatics[2880]; /* '--show-error-context' */
    cpy_r_r586 = CPyStatics[2297]; /* 'show_error_context' */
    cpy_r_r587 = CPyStatics[2881]; /* ('Precede errors with "note:" messages explaining '
                                      'context') */
    cpy_r_r588 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r588 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 863, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r588);
CPyL158: ;
    cpy_r_r589 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r590[5] = {
        cpy_r_r585, cpy_r_r589, cpy_r_r586, cpy_r_r587,
        cpy_r_error_group
    };
    cpy_r_r591 = (PyObject **)&cpy_r_r590;
    cpy_r_r592 = CPyStatics[9472]; /* ('default', 'dest', 'help', 'group') */
    cpy_r_r593 = _PyObject_Vectorcall(cpy_r_r588, cpy_r_r591, 1, cpy_r_r592);
    CPy_DECREF(cpy_r_r588);
    if (unlikely(cpy_r_r593 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 863, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL818;
CPyL159: ;
    cpy_r_r594 = CPyStatics[2882]; /* '--show-column-numbers' */
    cpy_r_r595 = CPyStatics[2883]; /* 'Show column numbers in error messages' */
    cpy_r_r596 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r596 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 870, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r596);
CPyL160: ;
    cpy_r_r597 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r598[4] = {cpy_r_r594, cpy_r_r597, cpy_r_r595, cpy_r_error_group};
    cpy_r_r599 = (PyObject **)&cpy_r_r598;
    cpy_r_r600 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r601 = _PyObject_Vectorcall(cpy_r_r596, cpy_r_r599, 1, cpy_r_r600);
    CPy_DECREF(cpy_r_r596);
    if (unlikely(cpy_r_r601 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 870, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL819;
CPyL161: ;
    cpy_r_r602 = CPyStatics[2884]; /* '--show-error-end' */
    cpy_r_r603 = CPyStatics[2885]; /* ('Show end line/end column numbers in error messages. '
                                      'This implies --show-column-numbers') */
    cpy_r_r604 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r604 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 876, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r604);
CPyL162: ;
    cpy_r_r605 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r606[4] = {cpy_r_r602, cpy_r_r605, cpy_r_r603, cpy_r_error_group};
    cpy_r_r607 = (PyObject **)&cpy_r_r606;
    cpy_r_r608 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r609 = _PyObject_Vectorcall(cpy_r_r604, cpy_r_r607, 1, cpy_r_r608);
    CPy_DECREF(cpy_r_r604);
    if (unlikely(cpy_r_r609 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 876, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL820;
CPyL163: ;
    cpy_r_r610 = CPyStatics[2886]; /* '--hide-error-codes' */
    cpy_r_r611 = CPyStatics[2887]; /* 'Hide error codes in error messages' */
    cpy_r_r612 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r612 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 883, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r612);
CPyL164: ;
    cpy_r_r613 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r614[4] = {cpy_r_r610, cpy_r_r613, cpy_r_r611, cpy_r_error_group};
    cpy_r_r615 = (PyObject **)&cpy_r_r614;
    cpy_r_r616 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r617 = _PyObject_Vectorcall(cpy_r_r612, cpy_r_r615, 1, cpy_r_r616);
    CPy_DECREF(cpy_r_r612);
    if (unlikely(cpy_r_r617 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 883, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL821;
CPyL165: ;
    cpy_r_r618 = CPyStatics[2888]; /* '--show-error-code-links' */
    cpy_r_r619 = CPyStatics[2889]; /* 'Show links to error code documentation' */
    cpy_r_r620 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r620 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 889, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r620);
CPyL166: ;
    cpy_r_r621 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r622[4] = {cpy_r_r618, cpy_r_r621, cpy_r_r619, cpy_r_error_group};
    cpy_r_r623 = (PyObject **)&cpy_r_r622;
    cpy_r_r624 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r625 = _PyObject_Vectorcall(cpy_r_r620, cpy_r_r623, 1, cpy_r_r624);
    CPy_DECREF(cpy_r_r620);
    if (unlikely(cpy_r_r625 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 889, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL822;
CPyL167: ;
    cpy_r_r626 = CPyStatics[2890]; /* '--pretty' */
    cpy_r_r627 = CPyStatics[2891]; /* ('Use visually nicer output in error messages: Use '
                                      'soft word wrap, show source code snippets, and show '
                                      'error location markers') */
    cpy_r_r628 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r628 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 895, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r628);
CPyL168: ;
    cpy_r_r629 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r630[4] = {cpy_r_r626, cpy_r_r629, cpy_r_r627, cpy_r_error_group};
    cpy_r_r631 = (PyObject **)&cpy_r_r630;
    cpy_r_r632 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r633 = _PyObject_Vectorcall(cpy_r_r628, cpy_r_r631, 1, cpy_r_r632);
    CPy_DECREF(cpy_r_r628);
    if (unlikely(cpy_r_r633 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 895, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL823;
CPyL169: ;
    cpy_r_r634 = CPyStatics[2892]; /* '--no-color-output' */
    cpy_r_r635 = CPyStatics[2893]; /* 'color_output' */
    cpy_r_r636 = CPyStatics[2894]; /* 'Do not colorize error messages' */
    cpy_r_r637 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r637 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 903, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r637);
CPyL170: ;
    cpy_r_r638 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r639[5] = {
        cpy_r_r634, cpy_r_r635, cpy_r_r638, cpy_r_r636,
        cpy_r_error_group
    };
    cpy_r_r640 = (PyObject **)&cpy_r_r639;
    cpy_r_r641 = CPyStatics[9462]; /* ('dest', 'default', 'help', 'group') */
    cpy_r_r642 = _PyObject_Vectorcall(cpy_r_r637, cpy_r_r640, 1, cpy_r_r641);
    CPy_DECREF(cpy_r_r637);
    if (unlikely(cpy_r_r642 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 903, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL824;
CPyL171: ;
    cpy_r_r643 = CPyStatics[2895]; /* '--no-error-summary' */
    cpy_r_r644 = CPyStatics[2896]; /* 'error_summary' */
    cpy_r_r645 = CPyStatics[2897]; /* 'Do not show error stats summary' */
    cpy_r_r646 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r646 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 910, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r646);
CPyL172: ;
    cpy_r_r647 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r648[5] = {
        cpy_r_r643, cpy_r_r644, cpy_r_r647, cpy_r_r645,
        cpy_r_error_group
    };
    cpy_r_r649 = (PyObject **)&cpy_r_r648;
    cpy_r_r650 = CPyStatics[9462]; /* ('dest', 'default', 'help', 'group') */
    cpy_r_r651 = _PyObject_Vectorcall(cpy_r_r646, cpy_r_r649, 1, cpy_r_r650);
    CPy_DECREF(cpy_r_r646);
    if (unlikely(cpy_r_r651 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 910, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL825;
CPyL173: ;
    cpy_r_r652 = CPyStatics[2898]; /* '--show-absolute-path' */
    cpy_r_r653 = CPyStatics[2899]; /* 'Show absolute paths to files' */
    cpy_r_r654 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 917, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    CPy_INCREF(cpy_r_r654);
CPyL174: ;
    cpy_r_r655 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r656[4] = {cpy_r_r652, cpy_r_r655, cpy_r_r653, cpy_r_error_group};
    cpy_r_r657 = (PyObject **)&cpy_r_r656;
    cpy_r_r658 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r659 = _PyObject_Vectorcall(cpy_r_r654, cpy_r_r657, 1, cpy_r_r658);
    CPy_DECREF(cpy_r_r654);
    if (unlikely(cpy_r_r659 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 917, CPyStatic_mypy___main___globals);
        goto CPyL817;
    } else
        goto CPyL826;
CPyL175: ;
    cpy_r_r660 = CPyStatics[2900]; /* '--soft-error-limit' */
    cpy_r_r661 = (PyObject *)&PyLong_Type;
    cpy_r_r662 = CPyStatics[2901]; /* 'many_errors_threshold' */
    cpy_r_r663 = CPyModule_argparse;
    cpy_r_r664 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r665 = CPyObject_GetAttr(cpy_r_r663, cpy_r_r664);
    if (unlikely(cpy_r_r665 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 928, CPyStatic_mypy___main___globals);
        goto CPyL817;
    }
    cpy_r_r666 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r667 = CPyStatics[9017]; /* -1 */
    PyObject *cpy_r_r668[6] = {
        cpy_r_error_group, cpy_r_r660, cpy_r_r667, cpy_r_r661,
        cpy_r_r662, cpy_r_r665
    };
    cpy_r_r669 = (PyObject **)&cpy_r_r668;
    cpy_r_r670 = CPyStatics[9473]; /* ('default', 'type', 'dest', 'help') */
    cpy_r_r671 = PyObject_VectorcallMethod(cpy_r_r666, cpy_r_r669, 9223372036854775810ULL, cpy_r_r670);
    if (unlikely(cpy_r_r671 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 923, CPyStatic_mypy___main___globals);
        goto CPyL827;
    } else
        goto CPyL828;
CPyL177: ;
    CPy_DECREF(cpy_r_error_group);
    CPy_DECREF(cpy_r_r665);
    cpy_r_r672 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r672 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 931, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r672);
CPyL178: ;
    cpy_r_r673 = CPyStatics[2902]; /* 'Incremental mode' */
    cpy_r_r674 = CPyStatics[2903]; /* ('Adjust how mypy incrementally type checks and caches '
                                      'modules. Mypy caches type information about modules '
                                      'into a cache to let you speed up future invocations '
                                      "of mypy. Also see mypy's daemon mode: "
                                      'mypy.readthedocs.io/en/stable/mypy_daemon.html#mypy-daemon') */
    cpy_r_r675 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r676[3] = {cpy_r_r672, cpy_r_r673, cpy_r_r674};
    cpy_r_r677 = (PyObject **)&cpy_r_r676;
    cpy_r_r678 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r679 = PyObject_VectorcallMethod(cpy_r_r675, cpy_r_r677, 9223372036854775809ULL, cpy_r_r678);
    if (unlikely(cpy_r_r679 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 931, CPyStatic_mypy___main___globals);
        goto CPyL829;
    }
    CPy_DECREF(cpy_r_r672);
    cpy_r_incremental_group = cpy_r_r679;
    cpy_r_r680 = CPyStatics[1930]; /* '-i' */
    cpy_r_r681 = CPyStatics[2904]; /* '--incremental' */
    cpy_r_r682 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r683 = CPyModule_argparse;
    cpy_r_r684 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r685 = CPyObject_GetAttr(cpy_r_r683, cpy_r_r684);
    if (unlikely(cpy_r_r685 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 940, CPyStatic_mypy___main___globals);
        goto CPyL830;
    }
    cpy_r_r686 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r687[5] = {
        cpy_r_incremental_group, cpy_r_r680, cpy_r_r681, cpy_r_r682,
        cpy_r_r685
    };
    cpy_r_r688 = (PyObject **)&cpy_r_r687;
    cpy_r_r689 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r690 = PyObject_VectorcallMethod(cpy_r_r686, cpy_r_r688, 9223372036854775811ULL, cpy_r_r689);
    if (unlikely(cpy_r_r690 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 939, CPyStatic_mypy___main___globals);
        goto CPyL831;
    } else
        goto CPyL832;
CPyL181: ;
    CPy_DECREF(cpy_r_r685);
    cpy_r_r691 = CPyStatics[2905]; /* '--no-incremental' */
    cpy_r_r692 = CPyStatics[2752]; /* 'store_false' */
    cpy_r_r693 = CPyStatics[2906]; /* 'incremental' */
    cpy_r_r694 = CPyStatics[2907]; /* 'Disable module cache (inverse: --incremental)' */
    cpy_r_r695 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r696[5] = {
        cpy_r_incremental_group, cpy_r_r691, cpy_r_r692, cpy_r_r693,
        cpy_r_r694
    };
    cpy_r_r697 = (PyObject **)&cpy_r_r696;
    cpy_r_r698 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r699 = PyObject_VectorcallMethod(cpy_r_r695, cpy_r_r697, 9223372036854775810ULL, cpy_r_r698);
    if (unlikely(cpy_r_r699 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 942, CPyStatic_mypy___main___globals);
        goto CPyL830;
    } else
        goto CPyL833;
CPyL182: ;
    cpy_r_r700 = CPyStatics[2908]; /* '--cache-dir' */
    cpy_r_r701 = CPyStatics[2783]; /* 'store' */
    cpy_r_r702 = CPyStatics[2909]; /* 'DIR' */
    cpy_r_r703 = CPyStatics[1642]; /* '.mypy_cache' */
    cpy_r_r704 = CPyStatics[2910]; /* ('Store module cache info in the given folder in '
                                      "incremental mode (defaults to '") */
    cpy_r_r705 = CPyStatics[2911]; /* "')" */
    cpy_r_r706 = CPyStr_Build(3, cpy_r_r704, cpy_r_r703, cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 952, CPyStatic_mypy___main___globals);
        goto CPyL830;
    }
    cpy_r_r707 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r708[5] = {
        cpy_r_incremental_group, cpy_r_r700, cpy_r_r701, cpy_r_r702,
        cpy_r_r706
    };
    cpy_r_r709 = (PyObject **)&cpy_r_r708;
    cpy_r_r710 = CPyStatics[9467]; /* ('action', 'metavar', 'help') */
    cpy_r_r711 = PyObject_VectorcallMethod(cpy_r_r707, cpy_r_r709, 9223372036854775810ULL, cpy_r_r710);
    if (unlikely(cpy_r_r711 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 948, CPyStatic_mypy___main___globals);
        goto CPyL834;
    } else
        goto CPyL835;
CPyL184: ;
    CPy_DECREF(cpy_r_r706);
    cpy_r_r712 = CPyStatics[2912]; /* '--sqlite-cache' */
    cpy_r_r713 = CPyStatics[2913]; /* 'Use a sqlite database to store the cache' */
    cpy_r_r714 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r714 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 955, CPyStatic_mypy___main___globals);
        goto CPyL830;
    }
    CPy_INCREF(cpy_r_r714);
CPyL185: ;
    cpy_r_r715 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r716[4] = {cpy_r_r712, cpy_r_r715, cpy_r_r713, cpy_r_incremental_group};
    cpy_r_r717 = (PyObject **)&cpy_r_r716;
    cpy_r_r718 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r719 = _PyObject_Vectorcall(cpy_r_r714, cpy_r_r717, 1, cpy_r_r718);
    CPy_DECREF(cpy_r_r714);
    if (unlikely(cpy_r_r719 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 955, CPyStatic_mypy___main___globals);
        goto CPyL830;
    } else
        goto CPyL836;
CPyL186: ;
    cpy_r_r720 = CPyStatics[2914]; /* '--cache-fine-grained' */
    cpy_r_r721 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r722 = CPyStatics[2915]; /* ('Include fine-grained dependency information in the '
                                      'cache for the mypy daemon') */
    cpy_r_r723 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r724[4] = {cpy_r_incremental_group, cpy_r_r720, cpy_r_r721, cpy_r_r722};
    cpy_r_r725 = (PyObject **)&cpy_r_r724;
    cpy_r_r726 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r727 = PyObject_VectorcallMethod(cpy_r_r723, cpy_r_r725, 9223372036854775810ULL, cpy_r_r726);
    if (unlikely(cpy_r_r727 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 961, CPyStatic_mypy___main___globals);
        goto CPyL830;
    } else
        goto CPyL837;
CPyL187: ;
    cpy_r_r728 = CPyStatics[2916]; /* '--skip-version-check' */
    cpy_r_r729 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r730 = CPyStatics[2917]; /* 'Allow using cache written by older mypy version' */
    cpy_r_r731 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r732[4] = {cpy_r_incremental_group, cpy_r_r728, cpy_r_r729, cpy_r_r730};
    cpy_r_r733 = (PyObject **)&cpy_r_r732;
    cpy_r_r734 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r735 = PyObject_VectorcallMethod(cpy_r_r731, cpy_r_r733, 9223372036854775810ULL, cpy_r_r734);
    if (unlikely(cpy_r_r735 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 966, CPyStatic_mypy___main___globals);
        goto CPyL830;
    } else
        goto CPyL838;
CPyL188: ;
    cpy_r_r736 = CPyStatics[2918]; /* '--skip-cache-mtime-checks' */
    cpy_r_r737 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r738 = CPyStatics[2919]; /* 'Skip cache internal consistency checks based on mtime' */
    cpy_r_r739 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r740[4] = {cpy_r_incremental_group, cpy_r_r736, cpy_r_r737, cpy_r_r738};
    cpy_r_r741 = (PyObject **)&cpy_r_r740;
    cpy_r_r742 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r743 = PyObject_VectorcallMethod(cpy_r_r739, cpy_r_r741, 9223372036854775810ULL, cpy_r_r742);
    if (unlikely(cpy_r_r743 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 971, CPyStatic_mypy___main___globals);
        goto CPyL830;
    } else
        goto CPyL839;
CPyL189: ;
    CPy_DECREF(cpy_r_incremental_group);
    cpy_r_r744 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r744 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 977, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r744);
CPyL190: ;
    cpy_r_r745 = CPyStatics[2920]; /* 'Advanced options' */
    cpy_r_r746 = CPyStatics[2921]; /* 'Debug and customize mypy internals.' */
    cpy_r_r747 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r748[3] = {cpy_r_r744, cpy_r_r745, cpy_r_r746};
    cpy_r_r749 = (PyObject **)&cpy_r_r748;
    cpy_r_r750 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r751 = PyObject_VectorcallMethod(cpy_r_r747, cpy_r_r749, 9223372036854775809ULL, cpy_r_r750);
    if (unlikely(cpy_r_r751 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 977, CPyStatic_mypy___main___globals);
        goto CPyL840;
    }
    CPy_DECREF(cpy_r_r744);
    cpy_r_internals_group = cpy_r_r751;
    cpy_r_r752 = CPyStatics[2922]; /* '--pdb' */
    cpy_r_r753 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r754 = CPyStatics[2923]; /* 'Invoke pdb on fatal error' */
    cpy_r_r755 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r756[4] = {cpy_r_internals_group, cpy_r_r752, cpy_r_r753, cpy_r_r754};
    cpy_r_r757 = (PyObject **)&cpy_r_r756;
    cpy_r_r758 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r759 = PyObject_VectorcallMethod(cpy_r_r755, cpy_r_r757, 9223372036854775810ULL, cpy_r_r758);
    if (unlikely(cpy_r_r759 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 980, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL842;
CPyL192: ;
    cpy_r_r760 = CPyStatics[2924]; /* '--show-traceback' */
    cpy_r_r761 = CPyStatics[2925]; /* '--tb' */
    cpy_r_r762 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r763 = CPyStatics[2926]; /* 'Show traceback on fatal error' */
    cpy_r_r764 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r765[5] = {
        cpy_r_internals_group, cpy_r_r760, cpy_r_r761, cpy_r_r762,
        cpy_r_r763
    };
    cpy_r_r766 = (PyObject **)&cpy_r_r765;
    cpy_r_r767 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r768 = PyObject_VectorcallMethod(cpy_r_r764, cpy_r_r766, 9223372036854775811ULL, cpy_r_r767);
    if (unlikely(cpy_r_r768 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 981, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL843;
CPyL193: ;
    cpy_r_r769 = CPyStatics[2927]; /* '--raise-exceptions' */
    cpy_r_r770 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r771 = CPyStatics[2928]; /* 'Raise exception on fatal error' */
    cpy_r_r772 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r773[4] = {cpy_r_internals_group, cpy_r_r769, cpy_r_r770, cpy_r_r771};
    cpy_r_r774 = (PyObject **)&cpy_r_r773;
    cpy_r_r775 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r776 = PyObject_VectorcallMethod(cpy_r_r772, cpy_r_r774, 9223372036854775810ULL, cpy_r_r775);
    if (unlikely(cpy_r_r776 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 984, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL844;
CPyL194: ;
    cpy_r_r777 = CPyStatics[2929]; /* '--custom-typing-module' */
    cpy_r_r778 = CPyStatics[2930]; /* 'MODULE' */
    cpy_r_r779 = CPyStatics[1571]; /* 'custom_typing_module' */
    cpy_r_r780 = CPyStatics[2931]; /* 'Use a custom typing module' */
    cpy_r_r781 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r782[5] = {
        cpy_r_internals_group, cpy_r_r777, cpy_r_r778, cpy_r_r779,
        cpy_r_r780
    };
    cpy_r_r783 = (PyObject **)&cpy_r_r782;
    cpy_r_r784 = CPyStatics[9474]; /* ('metavar', 'dest', 'help') */
    cpy_r_r785 = PyObject_VectorcallMethod(cpy_r_r781, cpy_r_r783, 9223372036854775810ULL, cpy_r_r784);
    if (unlikely(cpy_r_r785 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 987, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL845;
CPyL195: ;
    cpy_r_r786 = CPyStatics[2932]; /* '--new-type-inference' */
    cpy_r_r787 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r788 = CPyStatics[2933]; /* 'Enable new experimental type inference algorithm' */
    cpy_r_r789 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r790[4] = {cpy_r_internals_group, cpy_r_r786, cpy_r_r787, cpy_r_r788};
    cpy_r_r791 = (PyObject **)&cpy_r_r790;
    cpy_r_r792 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r793 = PyObject_VectorcallMethod(cpy_r_r789, cpy_r_r791, 9223372036854775810ULL, cpy_r_r792);
    if (unlikely(cpy_r_r793 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 993, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL846;
CPyL196: ;
    cpy_r_r794 = CPyStatics[2934]; /* '--disable-recursive-aliases' */
    cpy_r_r795 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r796 = CPyStatics[2935]; /* ('Disable experimental support for recursive type '
                                      'aliases') */
    cpy_r_r797 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r798[4] = {cpy_r_internals_group, cpy_r_r794, cpy_r_r795, cpy_r_r796};
    cpy_r_r799 = (PyObject **)&cpy_r_r798;
    cpy_r_r800 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r801 = PyObject_VectorcallMethod(cpy_r_r797, cpy_r_r799, 9223372036854775810ULL, cpy_r_r800);
    if (unlikely(cpy_r_r801 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 998, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL847;
CPyL197: ;
    cpy_r_r802 = CPyStatics[2936]; /* '--enable-recursive-aliases' */
    cpy_r_r803 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r804 = CPyModule_argparse;
    cpy_r_r805 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r806 = CPyObject_GetAttr(cpy_r_r804, cpy_r_r805);
    if (unlikely(cpy_r_r806 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1005, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    cpy_r_r807 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r808[4] = {cpy_r_internals_group, cpy_r_r802, cpy_r_r803, cpy_r_r806};
    cpy_r_r809 = (PyObject **)&cpy_r_r808;
    cpy_r_r810 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r811 = PyObject_VectorcallMethod(cpy_r_r807, cpy_r_r809, 9223372036854775810ULL, cpy_r_r810);
    if (unlikely(cpy_r_r811 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1004, CPyStatic_mypy___main___globals);
        goto CPyL848;
    } else
        goto CPyL849;
CPyL199: ;
    CPy_DECREF(cpy_r_r806);
    cpy_r_r812 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r812 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1007, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    CPy_INCREF(cpy_r_r812);
CPyL200: ;
    cpy_r_r813 = CPyStatics[2937]; /* '--enable-incomplete-feature' */
    cpy_r_r814 = CPyStatics[1304]; /* 'append' */
    cpy_r_r815 = CPyStatics[2938]; /* 'FEATURE' */
    cpy_r_r816 = CPyStatics[2939]; /* ('Enable support of incomplete/experimental features '
                                      'for early preview') */
    cpy_r_r817 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r818[5] = {cpy_r_r812, cpy_r_r813, cpy_r_r814, cpy_r_r815, cpy_r_r816};
    cpy_r_r819 = (PyObject **)&cpy_r_r818;
    cpy_r_r820 = CPyStatics[9467]; /* ('action', 'metavar', 'help') */
    cpy_r_r821 = PyObject_VectorcallMethod(cpy_r_r817, cpy_r_r819, 9223372036854775810ULL, cpy_r_r820);
    if (unlikely(cpy_r_r821 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1007, CPyStatic_mypy___main___globals);
        goto CPyL850;
    } else
        goto CPyL851;
CPyL201: ;
    CPy_DECREF(cpy_r_r812);
    cpy_r_r822 = CPyStatics[2940]; /* '--custom-typeshed-dir' */
    cpy_r_r823 = CPyStatics[2909]; /* 'DIR' */
    cpy_r_r824 = CPyStatics[2941]; /* 'Use the custom typeshed in DIR' */
    cpy_r_r825 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r826[4] = {cpy_r_internals_group, cpy_r_r822, cpy_r_r823, cpy_r_r824};
    cpy_r_r827 = (PyObject **)&cpy_r_r826;
    cpy_r_r828 = CPyStatics[9475]; /* ('metavar', 'help') */
    cpy_r_r829 = PyObject_VectorcallMethod(cpy_r_r825, cpy_r_r827, 9223372036854775810ULL, cpy_r_r828);
    if (unlikely(cpy_r_r829 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1013, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL852;
CPyL202: ;
    cpy_r_r830 = CPyStatics[2942]; /* '--warn-incomplete-stub' */
    cpy_r_r831 = CPyStatics[2943]; /* ('Warn if missing type annotation in typeshed, only '
                                      'relevant with --disallow-untyped-defs or '
                                      '--disallow-incomplete-defs enabled') */
    cpy_r_r832 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r832 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1016, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    CPy_INCREF(cpy_r_r832);
CPyL203: ;
    cpy_r_r833 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r834[4] = {cpy_r_r830, cpy_r_r833, cpy_r_r831, cpy_r_internals_group};
    cpy_r_r835 = (PyObject **)&cpy_r_r834;
    cpy_r_r836 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r837 = _PyObject_Vectorcall(cpy_r_r832, cpy_r_r835, 1, cpy_r_r836);
    CPy_DECREF(cpy_r_r832);
    if (unlikely(cpy_r_r837 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1016, CPyStatic_mypy___main___globals);
        goto CPyL841;
    } else
        goto CPyL853;
CPyL204: ;
    cpy_r_r838 = CPyStatics[2944]; /* '--shadow-file' */
    cpy_r_r839 = CPyStatics[2945]; /* 'SOURCE_FILE' */
    cpy_r_r840 = CPyStatics[2946]; /* 'SHADOW_FILE' */
    cpy_r_r841.f0 = cpy_r_r839;
    cpy_r_r841.f1 = cpy_r_r840;
    CPy_INCREF(cpy_r_r841.f0);
    CPy_INCREF(cpy_r_r841.f1);
    cpy_r_r842 = CPyStatics[2947]; /* 'shadow_file' */
    cpy_r_r843 = CPyStatics[1304]; /* 'append' */
    cpy_r_r844 = CPyStatics[2948]; /* ('When encountering SOURCE_FILE, read and type check '
                                      'the contents of SHADOW_FILE instead.') */
    cpy_r_r845 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r846 = CPyStatics[9018]; /* 2 */
    cpy_r_r847 = PyTuple_New(2);
    if (unlikely(cpy_r_r847 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3149 = cpy_r_r841.f0;
    PyTuple_SET_ITEM(cpy_r_r847, 0, __tmp3149);
    PyObject *__tmp3150 = cpy_r_r841.f1;
    PyTuple_SET_ITEM(cpy_r_r847, 1, __tmp3150);
    PyObject *cpy_r_r848[7] = {
        cpy_r_internals_group, cpy_r_r838, cpy_r_r846, cpy_r_r847,
        cpy_r_r842, cpy_r_r843, cpy_r_r844
    };
    cpy_r_r849 = (PyObject **)&cpy_r_r848;
    cpy_r_r850 = CPyStatics[9476]; /* ('nargs', 'metavar', 'dest', 'action', 'help') */
    cpy_r_r851 = PyObject_VectorcallMethod(cpy_r_r845, cpy_r_r849, 9223372036854775810ULL, cpy_r_r850);
    if (unlikely(cpy_r_r851 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1023, CPyStatic_mypy___main___globals);
        goto CPyL854;
    } else
        goto CPyL855;
CPyL205: ;
    CPy_DECREF(cpy_r_r847);
    cpy_r_r852 = CPyStatics[2949]; /* '--fast-exit' */
    cpy_r_r853 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r854 = CPyModule_argparse;
    cpy_r_r855 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r856 = CPyObject_GetAttr(cpy_r_r854, cpy_r_r855);
    if (unlikely(cpy_r_r856 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1032, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    cpy_r_r857 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r858[4] = {cpy_r_internals_group, cpy_r_r852, cpy_r_r853, cpy_r_r856};
    cpy_r_r859 = (PyObject **)&cpy_r_r858;
    cpy_r_r860 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r861 = PyObject_VectorcallMethod(cpy_r_r857, cpy_r_r859, 9223372036854775810ULL, cpy_r_r860);
    if (unlikely(cpy_r_r861 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1032, CPyStatic_mypy___main___globals);
        goto CPyL856;
    } else
        goto CPyL857;
CPyL207: ;
    CPy_DECREF(cpy_r_r856);
    cpy_r_r862 = CPyStatics[2950]; /* '--no-fast-exit' */
    cpy_r_r863 = CPyStatics[2752]; /* 'store_false' */
    cpy_r_r864 = CPyStatics[2951]; /* 'fast_exit' */
    cpy_r_r865 = CPyModule_argparse;
    cpy_r_r866 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r867 = CPyObject_GetAttr(cpy_r_r865, cpy_r_r866);
    if (unlikely(cpy_r_r867 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1034, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    cpy_r_r868 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r869[5] = {
        cpy_r_internals_group, cpy_r_r862, cpy_r_r863, cpy_r_r864,
        cpy_r_r867
    };
    cpy_r_r870 = (PyObject **)&cpy_r_r869;
    cpy_r_r871 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r872 = PyObject_VectorcallMethod(cpy_r_r868, cpy_r_r870, 9223372036854775810ULL, cpy_r_r871);
    if (unlikely(cpy_r_r872 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1033, CPyStatic_mypy___main___globals);
        goto CPyL858;
    } else
        goto CPyL859;
CPyL209: ;
    CPy_DECREF(cpy_r_r867);
    cpy_r_r873 = CPyStatics[2952]; /* '--allow-empty-bodies' */
    cpy_r_r874 = CPyModule_argparse;
    cpy_r_r875 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r876 = CPyObject_GetAttr(cpy_r_r874, cpy_r_r875);
    if (unlikely(cpy_r_r876 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1039, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    cpy_r_r877 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r877 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1038, CPyStatic_mypy___main___globals);
        goto CPyL860;
    }
    CPy_INCREF(cpy_r_r877);
CPyL211: ;
    cpy_r_r878 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r879[4] = {cpy_r_r873, cpy_r_r878, cpy_r_r876, cpy_r_internals_group};
    cpy_r_r880 = (PyObject **)&cpy_r_r879;
    cpy_r_r881 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r882 = _PyObject_Vectorcall(cpy_r_r877, cpy_r_r880, 1, cpy_r_r881);
    CPy_DECREF(cpy_r_r877);
    if (unlikely(cpy_r_r882 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1038, CPyStatic_mypy___main___globals);
        goto CPyL860;
    } else
        goto CPyL861;
CPyL212: ;
    CPy_DECREF(cpy_r_r876);
    cpy_r_r883 = CPyStatics[2953]; /* '--export-ref-info' */
    cpy_r_r884 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r885 = CPyModule_argparse;
    cpy_r_r886 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r887 = CPyObject_GetAttr(cpy_r_r885, cpy_r_r886);
    if (unlikely(cpy_r_r887 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1042, CPyStatic_mypy___main___globals);
        goto CPyL841;
    }
    cpy_r_r888 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r889[4] = {cpy_r_internals_group, cpy_r_r883, cpy_r_r884, cpy_r_r887};
    cpy_r_r890 = (PyObject **)&cpy_r_r889;
    cpy_r_r891 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r892 = PyObject_VectorcallMethod(cpy_r_r888, cpy_r_r890, 9223372036854775810ULL, cpy_r_r891);
    if (unlikely(cpy_r_r892 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1042, CPyStatic_mypy___main___globals);
        goto CPyL862;
    } else
        goto CPyL863;
CPyL214: ;
    CPy_DECREF(cpy_r_internals_group);
    CPy_DECREF(cpy_r_r887);
    cpy_r_r893 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r893 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1044, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r893);
CPyL215: ;
    cpy_r_r894 = CPyStatics[2954]; /* 'Report generation' */
    cpy_r_r895 = CPyStatics[2955]; /* 'Generate a report in the specified format.' */
    cpy_r_r896 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r897[3] = {cpy_r_r893, cpy_r_r894, cpy_r_r895};
    cpy_r_r898 = (PyObject **)&cpy_r_r897;
    cpy_r_r899 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r900 = PyObject_VectorcallMethod(cpy_r_r896, cpy_r_r898, 9223372036854775809ULL, cpy_r_r899);
    if (unlikely(cpy_r_r900 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1044, CPyStatic_mypy___main___globals);
        goto CPyL864;
    }
    CPy_DECREF(cpy_r_r893);
    cpy_r_report_group = cpy_r_r900;
    cpy_r_r901 = CPyStatic_defaults___REPORTER_NAMES;
    if (unlikely(cpy_r_r901 == NULL)) {
        goto CPyL865;
    } else
        goto CPyL219;
CPyL217: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"REPORTER_NAMES\" was not set");
    cpy_r_r902 = 0;
    if (unlikely(!cpy_r_r902)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1047, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL219: ;
    cpy_r_r903 = CPyModule_builtins;
    cpy_r_r904 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r905 = CPyObject_GetAttr(cpy_r_r903, cpy_r_r904);
    if (unlikely(cpy_r_r905 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1047, CPyStatic_mypy___main___globals);
        goto CPyL866;
    }
    PyObject *cpy_r_r906[1] = {cpy_r_r901};
    cpy_r_r907 = (PyObject **)&cpy_r_r906;
    cpy_r_r908 = _PyObject_Vectorcall(cpy_r_r905, cpy_r_r907, 1, 0);
    CPy_DECREF(cpy_r_r905);
    if (unlikely(cpy_r_r908 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1047, CPyStatic_mypy___main___globals);
        goto CPyL866;
    }
    if (likely(PyList_Check(cpy_r_r908)))
        cpy_r_r909 = cpy_r_r908;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1047, CPyStatic_mypy___main___globals, "list", cpy_r_r908);
        goto CPyL866;
    }
    cpy_r_r910 = 0;
CPyL223: ;
    cpy_r_r911 = (CPyPtr)&((PyVarObject *)cpy_r_r909)->ob_size;
    cpy_r_r912 = *(int64_t *)cpy_r_r911;
    cpy_r_r913 = cpy_r_r912 << 1;
    cpy_r_r914 = (Py_ssize_t)cpy_r_r910 < (Py_ssize_t)cpy_r_r913;
    if (!cpy_r_r914) goto CPyL867;
    cpy_r_r915 = CPyList_GetItemUnsafe(cpy_r_r909, cpy_r_r910);
    if (likely(PyUnicode_Check(cpy_r_r915)))
        cpy_r_r916 = cpy_r_r915;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1047, CPyStatic_mypy___main___globals, "str", cpy_r_r915);
        goto CPyL868;
    }
    cpy_r_report_type = cpy_r_r916;
    cpy_r_r917 = CPyStatics[10308]; /* frozenset({'memory-xml'}) */
    cpy_r_r918 = PySet_Contains(cpy_r_r917, cpy_r_report_type);
    cpy_r_r919 = cpy_r_r918 >= 0;
    if (unlikely(!cpy_r_r919)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1048, CPyStatic_mypy___main___globals);
        goto CPyL869;
    }
    cpy_r_r920 = cpy_r_r918;
    cpy_r_r921 = cpy_r_r920 ^ 1;
    if (!cpy_r_r921) goto CPyL870;
    cpy_r_r922 = CPyStatics[2731]; /* '--' */
    cpy_r_r923 = CPyStatics[755]; /* '_' */
    cpy_r_r924 = CPyStatics[1198]; /* '-' */
    cpy_r_r925 = PyUnicode_Replace(cpy_r_report_type, cpy_r_r923, cpy_r_r924, -1);
    if (unlikely(cpy_r_r925 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1050, CPyStatic_mypy___main___globals);
        goto CPyL869;
    }
    cpy_r_r926 = CPyStatics[2956]; /* '-report' */
    cpy_r_r927 = CPyStr_Build(3, cpy_r_r922, cpy_r_r925, cpy_r_r926);
    CPy_DECREF(cpy_r_r925);
    if (unlikely(cpy_r_r927 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1050, CPyStatic_mypy___main___globals);
        goto CPyL869;
    }
    cpy_r_r928 = CPyStatics[2909]; /* 'DIR' */
    cpy_r_r929 = CPyStatics[2957]; /* 'special-opts:' */
    cpy_r_r930 = CPyStatics[1509]; /* '_report' */
    cpy_r_r931 = CPyStr_Build(3, cpy_r_r929, cpy_r_report_type, cpy_r_r930);
    CPy_DECREF(cpy_r_report_type);
    if (unlikely(cpy_r_r931 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1052, CPyStatic_mypy___main___globals);
        goto CPyL871;
    }
    cpy_r_r932 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r933[4] = {cpy_r_report_group, cpy_r_r927, cpy_r_r928, cpy_r_r931};
    cpy_r_r934 = (PyObject **)&cpy_r_r933;
    cpy_r_r935 = CPyStatics[9477]; /* ('metavar', 'dest') */
    cpy_r_r936 = PyObject_VectorcallMethod(cpy_r_r932, cpy_r_r934, 9223372036854775810ULL, cpy_r_r935);
    if (unlikely(cpy_r_r936 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1049, CPyStatic_mypy___main___globals);
        goto CPyL872;
    } else
        goto CPyL873;
CPyL231: ;
    CPy_DECREF(cpy_r_r927);
    CPy_DECREF(cpy_r_r931);
CPyL232: ;
    cpy_r_r937 = cpy_r_r910 + 2;
    cpy_r_r910 = cpy_r_r937;
    goto CPyL223;
CPyL233: ;
    cpy_r_r938 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r938 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1055, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r938);
CPyL234: ;
    cpy_r_r939 = CPyStatics[2958]; /* 'Miscellaneous' */
    cpy_r_r940 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r941[2] = {cpy_r_r938, cpy_r_r939};
    cpy_r_r942 = (PyObject **)&cpy_r_r941;
    cpy_r_r943 = CPyStatics[9458]; /* ('title',) */
    cpy_r_r944 = PyObject_VectorcallMethod(cpy_r_r940, cpy_r_r942, 9223372036854775809ULL, cpy_r_r943);
    if (unlikely(cpy_r_r944 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1055, CPyStatic_mypy___main___globals);
        goto CPyL874;
    }
    CPy_DECREF(cpy_r_r938);
    cpy_r_other_group = cpy_r_r944;
    cpy_r_r945 = CPyStatics[2959]; /* '--quickstart-file' */
    cpy_r_r946 = CPyModule_argparse;
    cpy_r_r947 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r948 = CPyObject_GetAttr(cpy_r_r946, cpy_r_r947);
    if (unlikely(cpy_r_r948 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1056, CPyStatic_mypy___main___globals);
        goto CPyL875;
    }
    cpy_r_r949 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r950[3] = {cpy_r_other_group, cpy_r_r945, cpy_r_r948};
    cpy_r_r951 = (PyObject **)&cpy_r_r950;
    cpy_r_r952 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r953 = PyObject_VectorcallMethod(cpy_r_r949, cpy_r_r951, 9223372036854775810ULL, cpy_r_r952);
    if (unlikely(cpy_r_r953 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1056, CPyStatic_mypy___main___globals);
        goto CPyL876;
    } else
        goto CPyL877;
CPyL237: ;
    CPy_DECREF(cpy_r_r948);
    cpy_r_r954 = CPyStatics[1833]; /* '--junit-xml' */
    cpy_r_r955 = CPyStatics[1834]; /* 'Write junit.xml to the given file' */
    cpy_r_r956 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r957[3] = {cpy_r_other_group, cpy_r_r954, cpy_r_r955};
    cpy_r_r958 = (PyObject **)&cpy_r_r957;
    cpy_r_r959 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r960 = PyObject_VectorcallMethod(cpy_r_r956, cpy_r_r958, 9223372036854775810ULL, cpy_r_r959);
    if (unlikely(cpy_r_r960 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1057, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL878;
CPyL238: ;
    cpy_r_r961 = CPyStatics[2960]; /* '--find-occurrences' */
    cpy_r_r962 = CPyStatics[2961]; /* 'CLASS.MEMBER' */
    cpy_r_r963 = CPyStatics[2962]; /* 'special-opts:find_occurrences' */
    cpy_r_r964 = CPyStatics[2963]; /* 'Print out all usages of a class member (experimental)' */
    cpy_r_r965 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r966[5] = {
        cpy_r_other_group, cpy_r_r961, cpy_r_r962, cpy_r_r963,
        cpy_r_r964
    };
    cpy_r_r967 = (PyObject **)&cpy_r_r966;
    cpy_r_r968 = CPyStatics[9474]; /* ('metavar', 'dest', 'help') */
    cpy_r_r969 = PyObject_VectorcallMethod(cpy_r_r965, cpy_r_r967, 9223372036854775810ULL, cpy_r_r968);
    if (unlikely(cpy_r_r969 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1058, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL879;
CPyL239: ;
    cpy_r_r970 = CPyStatics[2964]; /* '--scripts-are-modules' */
    cpy_r_r971 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r972 = CPyStatics[2965]; /* 'Script x becomes module x instead of __main__' */
    cpy_r_r973 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r974[4] = {cpy_r_other_group, cpy_r_r970, cpy_r_r971, cpy_r_r972};
    cpy_r_r975 = (PyObject **)&cpy_r_r974;
    cpy_r_r976 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r977 = PyObject_VectorcallMethod(cpy_r_r973, cpy_r_r975, 9223372036854775810ULL, cpy_r_r976);
    if (unlikely(cpy_r_r977 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1064, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL880;
CPyL240: ;
    cpy_r_r978 = CPyStatics[2966]; /* '--install-types' */
    cpy_r_r979 = CPyStatics[2967]; /* ('Install detected missing library stub packages using '
                                      'pip') */
    cpy_r_r980 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r980 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1070, CPyStatic_mypy___main___globals);
        goto CPyL875;
    }
    CPy_INCREF(cpy_r_r980);
CPyL241: ;
    cpy_r_r981 = 0 ? Py_True : Py_False;
    cpy_r_r982 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r983[5] = {
        cpy_r_r978, cpy_r_r981, cpy_r_r982, cpy_r_r979,
        cpy_r_other_group
    };
    cpy_r_r984 = (PyObject **)&cpy_r_r983;
    cpy_r_r985 = CPyStatics[9461]; /* ('default', 'strict_flag', 'help', 'group') */
    cpy_r_r986 = _PyObject_Vectorcall(cpy_r_r980, cpy_r_r984, 1, cpy_r_r985);
    CPy_DECREF(cpy_r_r980);
    if (unlikely(cpy_r_r986 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1070, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL881;
CPyL242: ;
    cpy_r_r987 = CPyStatics[2968]; /* '--non-interactive' */
    cpy_r_r988 = CPyStatics[2969]; /* ('Install stubs without asking for confirmation and '
                                      'hide errors, with --install-types') */
    cpy_r_r989 = CPyStatics[2970]; /* '--interactive' */
    cpy_r_r990 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r990 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1077, CPyStatic_mypy___main___globals);
        goto CPyL875;
    }
    CPy_INCREF(cpy_r_r990);
CPyL243: ;
    cpy_r_r991 = 0 ? Py_True : Py_False;
    cpy_r_r992 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r993[6] = {
        cpy_r_r987, cpy_r_r991, cpy_r_r992, cpy_r_r988,
        cpy_r_other_group, cpy_r_r989
    };
    cpy_r_r994 = (PyObject **)&cpy_r_r993;
    cpy_r_r995 = CPyStatics[9478]; /* ('default', 'strict_flag', 'help', 'group', 'inverse') */
    cpy_r_r996 = _PyObject_Vectorcall(cpy_r_r990, cpy_r_r994, 1, cpy_r_r995);
    CPy_DECREF(cpy_r_r990);
    if (unlikely(cpy_r_r996 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1077, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL882;
CPyL244: ;
    if (!cpy_r_server_options) goto CPyL883;
    cpy_r_r997 = CPyStatics[2972]; /* '--experimental' */
    cpy_r_r998 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r999 = CPyStatics[2973]; /* 'fine_grained_incremental' */
    cpy_r_r1000 = CPyStatics[2974]; /* 'Enable fine-grained incremental mode' */
    cpy_r_r1001 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1002[5] = {
        cpy_r_other_group, cpy_r_r997, cpy_r_r998, cpy_r_r999,
        cpy_r_r1000
    };
    cpy_r_r1003 = (PyObject **)&cpy_r_r1002;
    cpy_r_r1004 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r1005 = PyObject_VectorcallMethod(cpy_r_r1001, cpy_r_r1003, 9223372036854775810ULL, cpy_r_r1004);
    if (unlikely(cpy_r_r1005 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1091, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL884;
CPyL246: ;
    cpy_r_r1006 = CPyStatics[2975]; /* '--use-fine-grained-cache' */
    cpy_r_r1007 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1008 = CPyStatics[2976]; /* 'Use the cache in fine-grained incremental mode' */
    cpy_r_r1009 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1010[4] = {cpy_r_other_group, cpy_r_r1006, cpy_r_r1007, cpy_r_r1008};
    cpy_r_r1011 = (PyObject **)&cpy_r_r1010;
    cpy_r_r1012 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1013 = PyObject_VectorcallMethod(cpy_r_r1009, cpy_r_r1011, 9223372036854775810ULL, cpy_r_r1012);
    if (unlikely(cpy_r_r1013 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1097, CPyStatic_mypy___main___globals);
        goto CPyL875;
    } else
        goto CPyL885;
CPyL247: ;
    CPy_DECREF(cpy_r_other_group);
CPyL248: ;
    cpy_r_r1014 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1014 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1104, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1014);
CPyL249: ;
    cpy_r_r1015 = CPyStatics[2977]; /* '--stats' */
    cpy_r_r1016 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1017 = CPyStatics[589]; /* 'dump_type_stats' */
    cpy_r_r1018 = CPyModule_argparse;
    cpy_r_r1019 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1020 = CPyObject_GetAttr(cpy_r_r1018, cpy_r_r1019);
    if (unlikely(cpy_r_r1020 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1105, CPyStatic_mypy___main___globals);
        goto CPyL886;
    }
    cpy_r_r1021 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1022[5] = {cpy_r_r1014, cpy_r_r1015, cpy_r_r1016, cpy_r_r1017, cpy_r_r1020};
    cpy_r_r1023 = (PyObject **)&cpy_r_r1022;
    cpy_r_r1024 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r1025 = PyObject_VectorcallMethod(cpy_r_r1021, cpy_r_r1023, 9223372036854775810ULL, cpy_r_r1024);
    if (unlikely(cpy_r_r1025 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1104, CPyStatic_mypy___main___globals);
        goto CPyL887;
    } else
        goto CPyL888;
CPyL251: ;
    CPy_DECREF(cpy_r_r1014);
    CPy_DECREF(cpy_r_r1020);
    cpy_r_r1026 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1026 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1107, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1026);
CPyL252: ;
    cpy_r_r1027 = CPyStatics[2978]; /* '--inferstats' */
    cpy_r_r1028 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1029 = CPyStatics[2979]; /* 'dump_inference_stats' */
    cpy_r_r1030 = CPyModule_argparse;
    cpy_r_r1031 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1032 = CPyObject_GetAttr(cpy_r_r1030, cpy_r_r1031);
    if (unlikely(cpy_r_r1032 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1108, CPyStatic_mypy___main___globals);
        goto CPyL889;
    }
    cpy_r_r1033 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1034[5] = {cpy_r_r1026, cpy_r_r1027, cpy_r_r1028, cpy_r_r1029, cpy_r_r1032};
    cpy_r_r1035 = (PyObject **)&cpy_r_r1034;
    cpy_r_r1036 = CPyStatics[9457]; /* ('action', 'dest', 'help') */
    cpy_r_r1037 = PyObject_VectorcallMethod(cpy_r_r1033, cpy_r_r1035, 9223372036854775810ULL, cpy_r_r1036);
    if (unlikely(cpy_r_r1037 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1107, CPyStatic_mypy___main___globals);
        goto CPyL890;
    } else
        goto CPyL891;
CPyL254: ;
    CPy_DECREF(cpy_r_r1026);
    CPy_DECREF(cpy_r_r1032);
    cpy_r_r1038 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1038 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1110, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1038);
CPyL255: ;
    cpy_r_r1039 = CPyStatics[2980]; /* '--dump-build-stats' */
    cpy_r_r1040 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1041 = CPyModule_argparse;
    cpy_r_r1042 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1043 = CPyObject_GetAttr(cpy_r_r1041, cpy_r_r1042);
    if (unlikely(cpy_r_r1043 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1110, CPyStatic_mypy___main___globals);
        goto CPyL892;
    }
    cpy_r_r1044 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1045[4] = {cpy_r_r1038, cpy_r_r1039, cpy_r_r1040, cpy_r_r1043};
    cpy_r_r1046 = (PyObject **)&cpy_r_r1045;
    cpy_r_r1047 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1048 = PyObject_VectorcallMethod(cpy_r_r1044, cpy_r_r1046, 9223372036854775810ULL, cpy_r_r1047);
    if (unlikely(cpy_r_r1048 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1110, CPyStatic_mypy___main___globals);
        goto CPyL893;
    } else
        goto CPyL894;
CPyL257: ;
    CPy_DECREF(cpy_r_r1038);
    CPy_DECREF(cpy_r_r1043);
    cpy_r_r1049 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1049 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1112, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1049);
CPyL258: ;
    cpy_r_r1050 = CPyStatics[2981]; /* '--timing-stats' */
    cpy_r_r1051 = CPyStatics[2982]; /* 'timing_stats' */
    cpy_r_r1052 = CPyModule_argparse;
    cpy_r_r1053 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1054 = CPyObject_GetAttr(cpy_r_r1052, cpy_r_r1053);
    if (unlikely(cpy_r_r1054 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1112, CPyStatic_mypy___main___globals);
        goto CPyL895;
    }
    cpy_r_r1055 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1056[4] = {cpy_r_r1049, cpy_r_r1050, cpy_r_r1051, cpy_r_r1054};
    cpy_r_r1057 = (PyObject **)&cpy_r_r1056;
    cpy_r_r1058 = CPyStatics[9479]; /* ('dest', 'help') */
    cpy_r_r1059 = PyObject_VectorcallMethod(cpy_r_r1055, cpy_r_r1057, 9223372036854775810ULL, cpy_r_r1058);
    if (unlikely(cpy_r_r1059 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1112, CPyStatic_mypy___main___globals);
        goto CPyL896;
    } else
        goto CPyL897;
CPyL260: ;
    CPy_DECREF(cpy_r_r1049);
    CPy_DECREF(cpy_r_r1054);
    cpy_r_r1060 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1060 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1116, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1060);
CPyL261: ;
    cpy_r_r1061 = CPyStatics[2983]; /* '--line-checking-stats' */
    cpy_r_r1062 = CPyStatics[2984]; /* 'line_checking_stats' */
    cpy_r_r1063 = CPyModule_argparse;
    cpy_r_r1064 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1065 = CPyObject_GetAttr(cpy_r_r1063, cpy_r_r1064);
    if (unlikely(cpy_r_r1065 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1117, CPyStatic_mypy___main___globals);
        goto CPyL898;
    }
    cpy_r_r1066 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1067[4] = {cpy_r_r1060, cpy_r_r1061, cpy_r_r1062, cpy_r_r1065};
    cpy_r_r1068 = (PyObject **)&cpy_r_r1067;
    cpy_r_r1069 = CPyStatics[9479]; /* ('dest', 'help') */
    cpy_r_r1070 = PyObject_VectorcallMethod(cpy_r_r1066, cpy_r_r1068, 9223372036854775810ULL, cpy_r_r1069);
    if (unlikely(cpy_r_r1070 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1116, CPyStatic_mypy___main___globals);
        goto CPyL899;
    } else
        goto CPyL900;
CPyL263: ;
    CPy_DECREF(cpy_r_r1060);
    CPy_DECREF(cpy_r_r1065);
    cpy_r_r1071 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1071 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1122, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1071);
CPyL264: ;
    cpy_r_r1072 = CPyStatics[2985]; /* '--debug-cache' */
    cpy_r_r1073 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1074 = CPyModule_argparse;
    cpy_r_r1075 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1076 = CPyObject_GetAttr(cpy_r_r1074, cpy_r_r1075);
    if (unlikely(cpy_r_r1076 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1122, CPyStatic_mypy___main___globals);
        goto CPyL901;
    }
    cpy_r_r1077 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1078[4] = {cpy_r_r1071, cpy_r_r1072, cpy_r_r1073, cpy_r_r1076};
    cpy_r_r1079 = (PyObject **)&cpy_r_r1078;
    cpy_r_r1080 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1081 = PyObject_VectorcallMethod(cpy_r_r1077, cpy_r_r1079, 9223372036854775810ULL, cpy_r_r1080);
    if (unlikely(cpy_r_r1081 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1122, CPyStatic_mypy___main___globals);
        goto CPyL902;
    } else
        goto CPyL903;
CPyL266: ;
    CPy_DECREF(cpy_r_r1071);
    CPy_DECREF(cpy_r_r1076);
    cpy_r_r1082 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1082 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1124, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1082);
CPyL267: ;
    cpy_r_r1083 = CPyStatics[2986]; /* '--dump-deps' */
    cpy_r_r1084 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1085 = CPyModule_argparse;
    cpy_r_r1086 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1087 = CPyObject_GetAttr(cpy_r_r1085, cpy_r_r1086);
    if (unlikely(cpy_r_r1087 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1124, CPyStatic_mypy___main___globals);
        goto CPyL904;
    }
    cpy_r_r1088 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1089[4] = {cpy_r_r1082, cpy_r_r1083, cpy_r_r1084, cpy_r_r1087};
    cpy_r_r1090 = (PyObject **)&cpy_r_r1089;
    cpy_r_r1091 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1092 = PyObject_VectorcallMethod(cpy_r_r1088, cpy_r_r1090, 9223372036854775810ULL, cpy_r_r1091);
    if (unlikely(cpy_r_r1092 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1124, CPyStatic_mypy___main___globals);
        goto CPyL905;
    } else
        goto CPyL906;
CPyL269: ;
    CPy_DECREF(cpy_r_r1082);
    CPy_DECREF(cpy_r_r1087);
    cpy_r_r1093 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1093 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1126, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1093);
CPyL270: ;
    cpy_r_r1094 = CPyStatics[2987]; /* '--dump-graph' */
    cpy_r_r1095 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1096 = CPyModule_argparse;
    cpy_r_r1097 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1098 = CPyObject_GetAttr(cpy_r_r1096, cpy_r_r1097);
    if (unlikely(cpy_r_r1098 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1126, CPyStatic_mypy___main___globals);
        goto CPyL907;
    }
    cpy_r_r1099 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1100[4] = {cpy_r_r1093, cpy_r_r1094, cpy_r_r1095, cpy_r_r1098};
    cpy_r_r1101 = (PyObject **)&cpy_r_r1100;
    cpy_r_r1102 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1103 = PyObject_VectorcallMethod(cpy_r_r1099, cpy_r_r1101, 9223372036854775810ULL, cpy_r_r1102);
    if (unlikely(cpy_r_r1103 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1126, CPyStatic_mypy___main___globals);
        goto CPyL908;
    } else
        goto CPyL909;
CPyL272: ;
    CPy_DECREF(cpy_r_r1093);
    CPy_DECREF(cpy_r_r1098);
    cpy_r_r1104 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1104 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1128, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1104);
CPyL273: ;
    cpy_r_r1105 = CPyStatics[2988]; /* '--semantic-analysis-only' */
    cpy_r_r1106 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1107 = CPyModule_argparse;
    cpy_r_r1108 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1109 = CPyObject_GetAttr(cpy_r_r1107, cpy_r_r1108);
    if (unlikely(cpy_r_r1109 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1128, CPyStatic_mypy___main___globals);
        goto CPyL910;
    }
    cpy_r_r1110 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1111[4] = {cpy_r_r1104, cpy_r_r1105, cpy_r_r1106, cpy_r_r1109};
    cpy_r_r1112 = (PyObject **)&cpy_r_r1111;
    cpy_r_r1113 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1114 = PyObject_VectorcallMethod(cpy_r_r1110, cpy_r_r1112, 9223372036854775810ULL, cpy_r_r1113);
    if (unlikely(cpy_r_r1114 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1128, CPyStatic_mypy___main___globals);
        goto CPyL911;
    } else
        goto CPyL912;
CPyL275: ;
    CPy_DECREF(cpy_r_r1104);
    CPy_DECREF(cpy_r_r1109);
    cpy_r_r1115 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1115 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1131, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1115);
CPyL276: ;
    cpy_r_r1116 = CPyStatics[2989]; /* '--local-partial-types' */
    cpy_r_r1117 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1118 = CPyModule_argparse;
    cpy_r_r1119 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1120 = CPyObject_GetAttr(cpy_r_r1118, cpy_r_r1119);
    if (unlikely(cpy_r_r1120 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1131, CPyStatic_mypy___main___globals);
        goto CPyL913;
    }
    cpy_r_r1121 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1122[4] = {cpy_r_r1115, cpy_r_r1116, cpy_r_r1117, cpy_r_r1120};
    cpy_r_r1123 = (PyObject **)&cpy_r_r1122;
    cpy_r_r1124 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1125 = PyObject_VectorcallMethod(cpy_r_r1121, cpy_r_r1123, 9223372036854775810ULL, cpy_r_r1124);
    if (unlikely(cpy_r_r1125 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1131, CPyStatic_mypy___main___globals);
        goto CPyL914;
    } else
        goto CPyL915;
CPyL278: ;
    CPy_DECREF(cpy_r_r1115);
    CPy_DECREF(cpy_r_r1120);
    cpy_r_r1126 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1126 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1137, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1126);
CPyL279: ;
    cpy_r_r1127 = CPyStatics[2990]; /* '--logical-deps' */
    cpy_r_r1128 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1129 = CPyModule_argparse;
    cpy_r_r1130 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1131 = CPyObject_GetAttr(cpy_r_r1129, cpy_r_r1130);
    if (unlikely(cpy_r_r1131 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1137, CPyStatic_mypy___main___globals);
        goto CPyL916;
    }
    cpy_r_r1132 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1133[4] = {cpy_r_r1126, cpy_r_r1127, cpy_r_r1128, cpy_r_r1131};
    cpy_r_r1134 = (PyObject **)&cpy_r_r1133;
    cpy_r_r1135 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1136 = PyObject_VectorcallMethod(cpy_r_r1132, cpy_r_r1134, 9223372036854775810ULL, cpy_r_r1135);
    if (unlikely(cpy_r_r1136 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1137, CPyStatic_mypy___main___globals);
        goto CPyL917;
    } else
        goto CPyL918;
CPyL281: ;
    CPy_DECREF(cpy_r_r1126);
    CPy_DECREF(cpy_r_r1131);
    cpy_r_r1137 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1137 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1139, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1137);
CPyL282: ;
    cpy_r_r1138 = CPyStatics[2991]; /* '--bazel' */
    cpy_r_r1139 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1140 = CPyModule_argparse;
    cpy_r_r1141 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1142 = CPyObject_GetAttr(cpy_r_r1140, cpy_r_r1141);
    if (unlikely(cpy_r_r1142 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1139, CPyStatic_mypy___main___globals);
        goto CPyL919;
    }
    cpy_r_r1143 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1144[4] = {cpy_r_r1137, cpy_r_r1138, cpy_r_r1139, cpy_r_r1142};
    cpy_r_r1145 = (PyObject **)&cpy_r_r1144;
    cpy_r_r1146 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1147 = PyObject_VectorcallMethod(cpy_r_r1143, cpy_r_r1145, 9223372036854775810ULL, cpy_r_r1146);
    if (unlikely(cpy_r_r1147 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1139, CPyStatic_mypy___main___globals);
        goto CPyL920;
    } else
        goto CPyL921;
CPyL284: ;
    CPy_DECREF(cpy_r_r1137);
    CPy_DECREF(cpy_r_r1142);
    cpy_r_r1148 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1148 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1142, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1148);
CPyL285: ;
    cpy_r_r1149 = CPyStatics[2992]; /* '--package-root' */
    cpy_r_r1150 = CPyStatics[2993]; /* 'ROOT' */
    cpy_r_r1151 = CPyStatics[1304]; /* 'append' */
    cpy_r_r1152 = PyList_New(0);
    if (unlikely(cpy_r_r1152 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1143, CPyStatic_mypy___main___globals);
        goto CPyL922;
    }
    cpy_r_r1153 = CPyModule_argparse;
    cpy_r_r1154 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1155 = CPyObject_GetAttr(cpy_r_r1153, cpy_r_r1154);
    if (unlikely(cpy_r_r1155 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1143, CPyStatic_mypy___main___globals);
        goto CPyL923;
    }
    cpy_r_r1156 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1157[6] = {
        cpy_r_r1148, cpy_r_r1149, cpy_r_r1150, cpy_r_r1151, cpy_r_r1152,
        cpy_r_r1155
    };
    cpy_r_r1158 = (PyObject **)&cpy_r_r1157;
    cpy_r_r1159 = CPyStatics[9468]; /* ('metavar', 'action', 'default', 'help') */
    cpy_r_r1160 = PyObject_VectorcallMethod(cpy_r_r1156, cpy_r_r1158, 9223372036854775810ULL, cpy_r_r1159);
    if (unlikely(cpy_r_r1160 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1142, CPyStatic_mypy___main___globals);
        goto CPyL924;
    } else
        goto CPyL925;
CPyL288: ;
    CPy_DECREF(cpy_r_r1148);
    CPy_DECREF(cpy_r_r1152);
    CPy_DECREF(cpy_r_r1155);
    cpy_r_r1161 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1161 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1149, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1161);
CPyL289: ;
    cpy_r_r1162 = CPyStatics[2994]; /* '--cache-map' */
    cpy_r_r1163 = CPyStatics[886]; /* '+' */
    cpy_r_r1164 = CPyStatics[2995]; /* 'special-opts:cache_map' */
    cpy_r_r1165 = CPyModule_argparse;
    cpy_r_r1166 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1167 = CPyObject_GetAttr(cpy_r_r1165, cpy_r_r1166);
    if (unlikely(cpy_r_r1167 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1150, CPyStatic_mypy___main___globals);
        goto CPyL926;
    }
    cpy_r_r1168 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1169[5] = {cpy_r_r1161, cpy_r_r1162, cpy_r_r1163, cpy_r_r1164, cpy_r_r1167};
    cpy_r_r1170 = (PyObject **)&cpy_r_r1169;
    cpy_r_r1171 = CPyStatics[9480]; /* ('nargs', 'dest', 'help') */
    cpy_r_r1172 = PyObject_VectorcallMethod(cpy_r_r1168, cpy_r_r1170, 9223372036854775810ULL, cpy_r_r1171);
    if (unlikely(cpy_r_r1172 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1149, CPyStatic_mypy___main___globals);
        goto CPyL927;
    } else
        goto CPyL928;
CPyL291: ;
    CPy_DECREF(cpy_r_r1161);
    CPy_DECREF(cpy_r_r1167);
    cpy_r_r1173 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1173 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1154, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1173);
CPyL292: ;
    cpy_r_r1174 = CPyStatics[2996]; /* '--debug-serialize' */
    cpy_r_r1175 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1176 = CPyModule_argparse;
    cpy_r_r1177 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1178 = CPyObject_GetAttr(cpy_r_r1176, cpy_r_r1177);
    if (unlikely(cpy_r_r1178 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1154, CPyStatic_mypy___main___globals);
        goto CPyL929;
    }
    cpy_r_r1179 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1180[4] = {cpy_r_r1173, cpy_r_r1174, cpy_r_r1175, cpy_r_r1178};
    cpy_r_r1181 = (PyObject **)&cpy_r_r1180;
    cpy_r_r1182 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1183 = PyObject_VectorcallMethod(cpy_r_r1179, cpy_r_r1181, 9223372036854775810ULL, cpy_r_r1182);
    if (unlikely(cpy_r_r1183 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1154, CPyStatic_mypy___main___globals);
        goto CPyL930;
    } else
        goto CPyL931;
CPyL294: ;
    CPy_DECREF(cpy_r_r1173);
    CPy_DECREF(cpy_r_r1178);
    cpy_r_r1184 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1184 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1156, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1184);
CPyL295: ;
    cpy_r_r1185 = CPyStatics[2997]; /* '--enable-incomplete-features' */
    cpy_r_r1186 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1187 = CPyModule_argparse;
    cpy_r_r1188 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1189 = CPyObject_GetAttr(cpy_r_r1187, cpy_r_r1188);
    if (unlikely(cpy_r_r1189 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1157, CPyStatic_mypy___main___globals);
        goto CPyL932;
    }
    cpy_r_r1190 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1191[4] = {cpy_r_r1184, cpy_r_r1185, cpy_r_r1186, cpy_r_r1189};
    cpy_r_r1192 = (PyObject **)&cpy_r_r1191;
    cpy_r_r1193 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1194 = PyObject_VectorcallMethod(cpy_r_r1190, cpy_r_r1192, 9223372036854775810ULL, cpy_r_r1193);
    if (unlikely(cpy_r_r1194 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1156, CPyStatic_mypy___main___globals);
        goto CPyL933;
    } else
        goto CPyL934;
CPyL297: ;
    CPy_DECREF(cpy_r_r1184);
    CPy_DECREF(cpy_r_r1189);
    cpy_r_r1195 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1195 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1159, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1195);
CPyL298: ;
    cpy_r_r1196 = CPyStatics[2998]; /* '--disable-bytearray-promotion' */
    cpy_r_r1197 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1198 = CPyModule_argparse;
    cpy_r_r1199 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1200 = CPyObject_GetAttr(cpy_r_r1198, cpy_r_r1199);
    if (unlikely(cpy_r_r1200 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1160, CPyStatic_mypy___main___globals);
        goto CPyL935;
    }
    cpy_r_r1201 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1202[4] = {cpy_r_r1195, cpy_r_r1196, cpy_r_r1197, cpy_r_r1200};
    cpy_r_r1203 = (PyObject **)&cpy_r_r1202;
    cpy_r_r1204 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1205 = PyObject_VectorcallMethod(cpy_r_r1201, cpy_r_r1203, 9223372036854775810ULL, cpy_r_r1204);
    if (unlikely(cpy_r_r1205 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1159, CPyStatic_mypy___main___globals);
        goto CPyL936;
    } else
        goto CPyL937;
CPyL300: ;
    CPy_DECREF(cpy_r_r1195);
    CPy_DECREF(cpy_r_r1200);
    cpy_r_r1206 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1206 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1162, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1206);
CPyL301: ;
    cpy_r_r1207 = CPyStatics[2999]; /* '--disable-memoryview-promotion' */
    cpy_r_r1208 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1209 = CPyModule_argparse;
    cpy_r_r1210 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1211 = CPyObject_GetAttr(cpy_r_r1209, cpy_r_r1210);
    if (unlikely(cpy_r_r1211 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1163, CPyStatic_mypy___main___globals);
        goto CPyL938;
    }
    cpy_r_r1212 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1213[4] = {cpy_r_r1206, cpy_r_r1207, cpy_r_r1208, cpy_r_r1211};
    cpy_r_r1214 = (PyObject **)&cpy_r_r1213;
    cpy_r_r1215 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1216 = PyObject_VectorcallMethod(cpy_r_r1212, cpy_r_r1214, 9223372036854775810ULL, cpy_r_r1215);
    if (unlikely(cpy_r_r1216 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1162, CPyStatic_mypy___main___globals);
        goto CPyL939;
    } else
        goto CPyL940;
CPyL303: ;
    CPy_DECREF(cpy_r_r1206);
    CPy_DECREF(cpy_r_r1211);
    cpy_r_r1217 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1217 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1166, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1217);
CPyL304: ;
    cpy_r_r1218 = CPyStatics[3000]; /* '--strict-concatenate' */
    cpy_r_r1219 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r1220 = CPyModule_argparse;
    cpy_r_r1221 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1222 = CPyObject_GetAttr(cpy_r_r1220, cpy_r_r1221);
    if (unlikely(cpy_r_r1222 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1166, CPyStatic_mypy___main___globals);
        goto CPyL941;
    }
    cpy_r_r1223 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1224[4] = {cpy_r_r1217, cpy_r_r1218, cpy_r_r1219, cpy_r_r1222};
    cpy_r_r1225 = (PyObject **)&cpy_r_r1224;
    cpy_r_r1226 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r1227 = PyObject_VectorcallMethod(cpy_r_r1223, cpy_r_r1225, 9223372036854775810ULL, cpy_r_r1226);
    if (unlikely(cpy_r_r1227 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1166, CPyStatic_mypy___main___globals);
        goto CPyL942;
    } else
        goto CPyL943;
CPyL306: ;
    CPy_DECREF(cpy_r_r1217);
    CPy_DECREF(cpy_r_r1222);
    cpy_r_r1228 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1228 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1169, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    CPy_INCREF(cpy_r_r1228);
CPyL307: ;
    cpy_r_r1229 = CPyStatics[3001]; /* 'Running code' */
    cpy_r_r1230 = CPyStatics[3002]; /* ('Specify the code you want to type check. For more '
                                       'details, see '
                                       'mypy.readthedocs.io/en/stable/running_mypy.html#running-mypy') */
    cpy_r_r1231 = CPyStatics[2760]; /* 'add_argument_group' */
    PyObject *cpy_r_r1232[3] = {cpy_r_r1228, cpy_r_r1229, cpy_r_r1230};
    cpy_r_r1233 = (PyObject **)&cpy_r_r1232;
    cpy_r_r1234 = CPyStatics[9460]; /* ('title', 'description') */
    cpy_r_r1235 = PyObject_VectorcallMethod(cpy_r_r1231, cpy_r_r1233, 9223372036854775809ULL, cpy_r_r1234);
    if (unlikely(cpy_r_r1235 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1169, CPyStatic_mypy___main___globals);
        goto CPyL944;
    }
    CPy_DECREF(cpy_r_r1228);
    cpy_r_code_group = cpy_r_r1235;
    cpy_r_r1236 = CPyStatics[3003]; /* '--explicit-package-bases' */
    cpy_r_r1237 = CPyStatics[3004]; /* ('Use current directory and MYPYPATH to determine '
                                       'module names of files passed') */
    cpy_r_r1238 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r1238 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1174, CPyStatic_mypy___main___globals);
        goto CPyL945;
    }
    CPy_INCREF(cpy_r_r1238);
CPyL309: ;
    cpy_r_r1239 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r1240[4] = {cpy_r_r1236, cpy_r_r1239, cpy_r_r1237, cpy_r_code_group};
    cpy_r_r1241 = (PyObject **)&cpy_r_r1240;
    cpy_r_r1242 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r1243 = _PyObject_Vectorcall(cpy_r_r1238, cpy_r_r1241, 1, cpy_r_r1242);
    CPy_DECREF(cpy_r_r1238);
    if (unlikely(cpy_r_r1243 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1174, CPyStatic_mypy___main___globals);
        goto CPyL945;
    } else
        goto CPyL946;
CPyL310: ;
    cpy_r_r1244 = CPyStatics[3005]; /* '--fast-module-lookup' */
    cpy_r_r1245 = CPyModule_argparse;
    cpy_r_r1246 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r1247 = CPyObject_GetAttr(cpy_r_r1245, cpy_r_r1246);
    if (unlikely(cpy_r_r1247 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1181, CPyStatic_mypy___main___globals);
        goto CPyL945;
    }
    cpy_r_r1248 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_add_invertible_flag;
    if (unlikely(cpy_r_r1248 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "add_invertible_flag", 1180, CPyStatic_mypy___main___globals);
        goto CPyL947;
    }
    CPy_INCREF(cpy_r_r1248);
CPyL312: ;
    cpy_r_r1249 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r1250[4] = {cpy_r_r1244, cpy_r_r1249, cpy_r_r1247, cpy_r_code_group};
    cpy_r_r1251 = (PyObject **)&cpy_r_r1250;
    cpy_r_r1252 = CPyStatics[9470]; /* ('default', 'help', 'group') */
    cpy_r_r1253 = _PyObject_Vectorcall(cpy_r_r1248, cpy_r_r1251, 1, cpy_r_r1252);
    CPy_DECREF(cpy_r_r1248);
    if (unlikely(cpy_r_r1253 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1180, CPyStatic_mypy___main___globals);
        goto CPyL947;
    } else
        goto CPyL948;
CPyL313: ;
    CPy_DECREF(cpy_r_r1247);
    cpy_r_r1254 = CPyStatics[3006]; /* '--exclude' */
    cpy_r_r1255 = CPyStatics[1304]; /* 'append' */
    cpy_r_r1256 = CPyStatics[3007]; /* 'PATTERN' */
    cpy_r_r1257 = PyList_New(0);
    if (unlikely(cpy_r_r1257 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1187, CPyStatic_mypy___main___globals);
        goto CPyL945;
    }
    cpy_r_r1258 = CPyStatics[3008]; /* ('Regular expression to match file names, directory '
                                       'names or paths which mypy should ignore while '
                                       'recursively discovering files to check, e.g. '
                                       "--exclude '/setup\\.py$'. May be specified more "
                                       'than once, eg. --exclude a --exclude b') */
    cpy_r_r1259 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1260[6] = {
        cpy_r_code_group, cpy_r_r1254, cpy_r_r1255, cpy_r_r1256,
        cpy_r_r1257, cpy_r_r1258
    };
    cpy_r_r1261 = (PyObject **)&cpy_r_r1260;
    cpy_r_r1262 = CPyStatics[9481]; /* ('action', 'metavar', 'default', 'help') */
    cpy_r_r1263 = PyObject_VectorcallMethod(cpy_r_r1259, cpy_r_r1261, 9223372036854775810ULL, cpy_r_r1262);
    if (unlikely(cpy_r_r1263 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1183, CPyStatic_mypy___main___globals);
        goto CPyL949;
    } else
        goto CPyL950;
CPyL315: ;
    CPy_DECREF(cpy_r_r1257);
    cpy_r_r1264 = CPyStatics[3009]; /* '-m' */
    cpy_r_r1265 = CPyStatics[3010]; /* '--module' */
    cpy_r_r1266 = CPyStatics[1304]; /* 'append' */
    cpy_r_r1267 = CPyStatics[2930]; /* 'MODULE' */
    cpy_r_r1268 = PyList_New(0);
    if (unlikely(cpy_r_r1268 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1199, CPyStatic_mypy___main___globals);
        goto CPyL945;
    }
    cpy_r_r1269 = CPyStatics[3011]; /* 'special-opts:modules' */
    cpy_r_r1270 = CPyStatics[3012]; /* 'Type-check module; can repeat for more modules' */
    cpy_r_r1271 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1272[8] = {
        cpy_r_code_group, cpy_r_r1264, cpy_r_r1265, cpy_r_r1266,
        cpy_r_r1267, cpy_r_r1268, cpy_r_r1269, cpy_r_r1270
    };
    cpy_r_r1273 = (PyObject **)&cpy_r_r1272;
    cpy_r_r1274 = CPyStatics[9482]; /* ('action', 'metavar', 'default', 'dest', 'help') */
    cpy_r_r1275 = PyObject_VectorcallMethod(cpy_r_r1271, cpy_r_r1273, 9223372036854775811ULL, cpy_r_r1274);
    if (unlikely(cpy_r_r1275 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1194, CPyStatic_mypy___main___globals);
        goto CPyL951;
    } else
        goto CPyL952;
CPyL317: ;
    CPy_DECREF(cpy_r_r1268);
    cpy_r_r1276 = CPyStatics[3013]; /* '-p' */
    cpy_r_r1277 = CPyStatics[3014]; /* '--package' */
    cpy_r_r1278 = CPyStatics[1304]; /* 'append' */
    cpy_r_r1279 = CPyStatics[3015]; /* 'PACKAGE' */
    cpy_r_r1280 = PyList_New(0);
    if (unlikely(cpy_r_r1280 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1208, CPyStatic_mypy___main___globals);
        goto CPyL945;
    }
    cpy_r_r1281 = CPyStatics[3016]; /* 'special-opts:packages' */
    cpy_r_r1282 = CPyStatics[3017]; /* 'Type-check package recursively; can be repeated' */
    cpy_r_r1283 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1284[8] = {
        cpy_r_code_group, cpy_r_r1276, cpy_r_r1277, cpy_r_r1278,
        cpy_r_r1279, cpy_r_r1280, cpy_r_r1281, cpy_r_r1282
    };
    cpy_r_r1285 = (PyObject **)&cpy_r_r1284;
    cpy_r_r1286 = CPyStatics[9482]; /* ('action', 'metavar', 'default', 'dest', 'help') */
    cpy_r_r1287 = PyObject_VectorcallMethod(cpy_r_r1283, cpy_r_r1285, 9223372036854775811ULL, cpy_r_r1286);
    if (unlikely(cpy_r_r1287 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1203, CPyStatic_mypy___main___globals);
        goto CPyL953;
    } else
        goto CPyL954;
CPyL319: ;
    CPy_DECREF(cpy_r_r1280);
    cpy_r_r1288 = CPyStatics[2735]; /* '-c' */
    cpy_r_r1289 = CPyStatics[3018]; /* '--command' */
    cpy_r_r1290 = CPyStatics[1304]; /* 'append' */
    cpy_r_r1291 = CPyStatics[3019]; /* 'PROGRAM_TEXT' */
    cpy_r_r1292 = CPyStatics[3020]; /* 'special-opts:command' */
    cpy_r_r1293 = CPyStatics[3021]; /* 'Type-check program passed in as string' */
    cpy_r_r1294 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1295[7] = {
        cpy_r_code_group, cpy_r_r1288, cpy_r_r1289, cpy_r_r1290,
        cpy_r_r1291, cpy_r_r1292, cpy_r_r1293
    };
    cpy_r_r1296 = (PyObject **)&cpy_r_r1295;
    cpy_r_r1297 = CPyStatics[9483]; /* ('action', 'metavar', 'dest', 'help') */
    cpy_r_r1298 = PyObject_VectorcallMethod(cpy_r_r1294, cpy_r_r1296, 9223372036854775811ULL, cpy_r_r1297);
    if (unlikely(cpy_r_r1298 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1212, CPyStatic_mypy___main___globals);
        goto CPyL945;
    } else
        goto CPyL955;
CPyL320: ;
    cpy_r_r1299 = CPyStatics[608]; /* 'files' */
    cpy_r_r1300 = CPyStatics[282]; /* '*' */
    cpy_r_r1301 = CPyStatics[3022]; /* 'special-opts:files' */
    cpy_r_r1302 = CPyStatics[3023]; /* 'Type-check given files or directories' */
    cpy_r_r1303 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r1304[5] = {
        cpy_r_code_group, cpy_r_r1299, cpy_r_r1300, cpy_r_r1301,
        cpy_r_r1302
    };
    cpy_r_r1305 = (PyObject **)&cpy_r_r1304;
    cpy_r_r1306 = CPyStatics[9484]; /* ('metavar', 'nargs', 'dest', 'help') */
    cpy_r_r1307 = PyObject_VectorcallMethod(cpy_r_r1303, cpy_r_r1305, 9223372036854775809ULL, cpy_r_r1306);
    if (unlikely(cpy_r_r1307 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1220, CPyStatic_mypy___main___globals);
        goto CPyL945;
    } else
        goto CPyL956;
CPyL321: ;
    CPy_DECREF(cpy_r_code_group);
    cpy_r_r1308 = CPyModule_argparse;
    cpy_r_r1309 = CPyStatics[1901]; /* 'Namespace' */
    cpy_r_r1310 = CPyObject_GetAttr(cpy_r_r1308, cpy_r_r1309);
    if (unlikely(cpy_r_r1310 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1229, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_r1311 = _PyObject_Vectorcall(cpy_r_r1310, 0, 0, 0);
    CPy_DECREF(cpy_r_r1310);
    if (unlikely(cpy_r_r1311 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1229, CPyStatic_mypy___main___globals);
        goto CPyL734;
    }
    cpy_r_dummy = cpy_r_r1311;
    cpy_r_r1312 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1312 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1230, CPyStatic_mypy___main___globals);
        goto CPyL957;
    }
    CPy_INCREF(cpy_r_r1312);
CPyL324: ;
    cpy_r_r1313 = CPyStatics[1675]; /* 'parse_args' */
    PyObject *cpy_r_r1314[3] = {cpy_r_r1312, cpy_r_args, cpy_r_dummy};
    cpy_r_r1315 = (PyObject **)&cpy_r_r1314;
    cpy_r_r1316 = PyObject_VectorcallMethod(cpy_r_r1313, cpy_r_r1315, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1316 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1230, CPyStatic_mypy___main___globals);
        goto CPyL958;
    } else
        goto CPyL959;
CPyL325: ;
    CPy_DECREF(cpy_r_r1312);
    cpy_r_r1317 = CPyStatics[3024]; /* 'config_file' */
    cpy_r_r1318 = CPyObject_GetAttr(cpy_r_dummy, cpy_r_r1317);
    if (unlikely(cpy_r_r1318 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1231, CPyStatic_mypy___main___globals);
        goto CPyL957;
    }
    cpy_r_config_file = cpy_r_r1318;
    cpy_r_r1319 = PyObject_IsTrue(cpy_r_config_file);
    cpy_r_r1320 = cpy_r_r1319 >= 0;
    if (unlikely(!cpy_r_r1320)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1231, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    cpy_r_r1321 = cpy_r_r1319;
    if (!cpy_r_r1321) goto CPyL337;
    cpy_r_r1322 = CPyModule_os;
    cpy_r_r1323 = CPyStatics[142]; /* 'path' */
    cpy_r_r1324 = CPyObject_GetAttr(cpy_r_r1322, cpy_r_r1323);
    if (unlikely(cpy_r_r1324 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1234, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    cpy_r_r1325 = CPyStatics[1500]; /* 'exists' */
    cpy_r_r1326 = CPyObject_GetAttr(cpy_r_r1324, cpy_r_r1325);
    CPy_DECREF(cpy_r_r1324);
    if (unlikely(cpy_r_r1326 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1234, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    PyObject *cpy_r_r1327[1] = {cpy_r_config_file};
    cpy_r_r1328 = (PyObject **)&cpy_r_r1327;
    cpy_r_r1329 = _PyObject_Vectorcall(cpy_r_r1326, cpy_r_r1328, 1, 0);
    CPy_DECREF(cpy_r_r1326);
    if (unlikely(cpy_r_r1329 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1234, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1329))) {
        CPy_TypeError("bool", cpy_r_r1329); cpy_r_r1330 = 2;
    } else
        cpy_r_r1330 = cpy_r_r1329 == Py_True;
    CPy_DECREF(cpy_r_r1329);
    if (unlikely(cpy_r_r1330 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1234, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    if (cpy_r_r1330) goto CPyL337;
    cpy_r_r1331 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1331 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1235, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    CPy_INCREF(cpy_r_r1331);
CPyL334: ;
    cpy_r_r1332 = CPyStatics[3025]; /* "Cannot find config file '" */
    cpy_r_r1333 = PyObject_Str(cpy_r_config_file);
    if (unlikely(cpy_r_r1333 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1235, CPyStatic_mypy___main___globals);
        goto CPyL961;
    }
    cpy_r_r1334 = CPyStatics[385]; /* "'" */
    cpy_r_r1335 = CPyStr_Build(3, cpy_r_r1332, cpy_r_r1333, cpy_r_r1334);
    CPy_DECREF(cpy_r_r1333);
    if (unlikely(cpy_r_r1335 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1235, CPyStatic_mypy___main___globals);
        goto CPyL961;
    }
    cpy_r_r1336 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1331, cpy_r_r1335);
    CPy_DECREF(cpy_r_r1335);
    CPy_DECREF(cpy_r_r1331);
    if (unlikely(cpy_r_r1336 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1235, CPyStatic_mypy___main___globals);
        goto CPyL960;
    } else
        goto CPyL962;
CPyL337: ;
    cpy_r_r1337 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r1337 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1237, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_options != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_options);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_options = cpy_r_r1337;
    cpy_r_r1338 = 1;
    if (unlikely(!cpy_r_r1338)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1237, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_option_set = 0;
    cpy_r_r1339 = 1;
    if (unlikely(!cpy_r_r1339)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1238, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    cpy_r_r1340 = CPyDef_mypy___main___set_strict_flags_process_options_obj();
    if (unlikely(cpy_r_r1340 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1240, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    CPy_INCREF(cpy_r_r6);
    if (((mypy___main___set_strict_flags_process_options_objObject *)cpy_r_r1340)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___main___set_strict_flags_process_options_objObject *)cpy_r_r1340)->___mypyc_env__);
    }
    ((mypy___main___set_strict_flags_process_options_objObject *)cpy_r_r1340)->___mypyc_env__ = cpy_r_r6;
    cpy_r_r1341 = 1;
    if (unlikely(!cpy_r_r1341)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1240, CPyStatic_mypy___main___globals);
        goto CPyL963;
    }
    if (((mypy___main___process_options_envObject *)cpy_r_r6)->_set_strict_flags != NULL) {
        CPy_DECREF(((mypy___main___process_options_envObject *)cpy_r_r6)->_set_strict_flags);
    }
    ((mypy___main___process_options_envObject *)cpy_r_r6)->_set_strict_flags = cpy_r_r1340;
    cpy_r_r1342 = 1;
    if (unlikely(!cpy_r_r1342)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1240, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    cpy_r_r1343 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1343 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1247, CPyStatic_mypy___main___globals);
        goto CPyL960;
    }
    CPy_INCREF(cpy_r_r1343);
CPyL344: ;
    cpy_r_r1344 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_set_strict_flags;
    if (unlikely(cpy_r_r1344 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "set_strict_flags", 1247, CPyStatic_mypy___main___globals);
        goto CPyL964;
    }
    CPy_INCREF(cpy_r_r1344);
CPyL345: ;
    if (PyUnicode_Check(cpy_r_config_file))
        cpy_r_r1345 = cpy_r_config_file;
    else {
        cpy_r_r1345 = NULL;
    }
    if (cpy_r_r1345 != NULL) goto __LL3151;
    if (cpy_r_config_file == Py_None)
        cpy_r_r1345 = cpy_r_config_file;
    else {
        cpy_r_r1345 = NULL;
    }
    if (cpy_r_r1345 != NULL) goto __LL3151;
    CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1247, CPyStatic_mypy___main___globals, "str or None", cpy_r_config_file);
    goto CPyL965;
__LL3151: ;
    cpy_r_r1346 = CPyDef_config_parser___parse_config_file(cpy_r_r1343, cpy_r_r1344, cpy_r_r1345, cpy_r_stdout, cpy_r_stderr);
    CPy_DECREF(cpy_r_r1343);
    CPy_DECREF(cpy_r_r1344);
    CPy_DECREF(cpy_r_r1345);
    CPy_DECREF(cpy_r_stdout);
    if (unlikely(cpy_r_r1346 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1247, CPyStatic_mypy___main___globals);
        goto CPyL966;
    }
    cpy_r_r1347 = CPyStatics[2873]; /* 'special-opts:strict' */
    cpy_r_r1348 = CPyObject_GetAttr(cpy_r_dummy, cpy_r_r1347);
    CPy_DECREF(cpy_r_dummy);
    if (unlikely(cpy_r_r1348 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1251, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    cpy_r_r1349 = PyObject_IsTrue(cpy_r_r1348);
    CPy_DECREF(cpy_r_r1348);
    cpy_r_r1350 = cpy_r_r1349 >= 0;
    if (unlikely(!cpy_r_r1350)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1251, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    cpy_r_r1351 = cpy_r_r1349;
    if (!cpy_r_r1351) goto CPyL352;
    cpy_r_r1352 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_set_strict_flags;
    if (unlikely(cpy_r_r1352 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "set_strict_flags", 1252, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    CPy_INCREF(cpy_r_r1352);
CPyL351: ;
    cpy_r_r1353 = _PyObject_Vectorcall(cpy_r_r1352, 0, 0, 0);
    CPy_DECREF(cpy_r_r1352);
    if (unlikely(cpy_r_r1353 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1252, CPyStatic_mypy___main___globals);
        goto CPyL967;
    } else
        goto CPyL968;
CPyL352: ;
    cpy_r_r1354 = CPyStatics[3026]; /* 'MYPY_CACHE_DIR' */
    cpy_r_r1355 = CPyStatics[163]; /* '' */
    cpy_r_r1356 = CPyModule_os;
    cpy_r_r1357 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r1358 = CPyObject_GetAttr(cpy_r_r1356, cpy_r_r1357);
    if (unlikely(cpy_r_r1358 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1255, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    PyObject *cpy_r_r1359[2] = {cpy_r_r1354, cpy_r_r1355};
    cpy_r_r1360 = (PyObject **)&cpy_r_r1359;
    cpy_r_r1361 = _PyObject_Vectorcall(cpy_r_r1358, cpy_r_r1360, 2, 0);
    CPy_DECREF(cpy_r_r1358);
    if (unlikely(cpy_r_r1361 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1255, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    if (likely(PyUnicode_Check(cpy_r_r1361)))
        cpy_r_r1362 = cpy_r_r1361;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1255, CPyStatic_mypy___main___globals, "str", cpy_r_r1361);
        goto CPyL967;
    }
    cpy_r_environ_cache_dir = cpy_r_r1362;
    cpy_r_r1363 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r1364[1] = {cpy_r_environ_cache_dir};
    cpy_r_r1365 = (PyObject **)&cpy_r_r1364;
    cpy_r_r1366 = PyObject_VectorcallMethod(cpy_r_r1363, cpy_r_r1365, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r1366 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1256, CPyStatic_mypy___main___globals);
        goto CPyL969;
    }
    if (likely(PyUnicode_Check(cpy_r_r1366)))
        cpy_r_r1367 = cpy_r_r1366;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1256, CPyStatic_mypy___main___globals, "str", cpy_r_r1366);
        goto CPyL969;
    }
    cpy_r_r1368 = CPyStr_IsTrue(cpy_r_r1367);
    CPy_DECREF(cpy_r_r1367);
    if (!cpy_r_r1368) goto CPyL970;
    cpy_r_r1369 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1369 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1257, CPyStatic_mypy___main___globals);
        goto CPyL969;
    }
    CPy_INCREF(cpy_r_r1369);
CPyL359: ;
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1369)->_cache_dir);
    ((mypy___options___OptionsObject *)cpy_r_r1369)->_cache_dir = cpy_r_environ_cache_dir;
    CPy_DECREF(cpy_r_r1369);
CPyL360: ;
    cpy_r_r1371 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1371 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1258, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    CPy_INCREF(cpy_r_r1371);
CPyL361: ;
    cpy_r_r1372 = ((mypy___options___OptionsObject *)cpy_r_r1371)->_cache_dir;
    CPy_INCREF(cpy_r_r1372);
    CPy_DECREF(cpy_r_r1371);
    cpy_r_r1373 = CPyModule_os;
    cpy_r_r1374 = CPyStatics[142]; /* 'path' */
    cpy_r_r1375 = CPyObject_GetAttr(cpy_r_r1373, cpy_r_r1374);
    if (unlikely(cpy_r_r1375 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1258, CPyStatic_mypy___main___globals);
        goto CPyL971;
    }
    cpy_r_r1376 = CPyStatics[1492]; /* 'expanduser' */
    cpy_r_r1377 = CPyObject_GetAttr(cpy_r_r1375, cpy_r_r1376);
    CPy_DECREF(cpy_r_r1375);
    if (unlikely(cpy_r_r1377 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1258, CPyStatic_mypy___main___globals);
        goto CPyL971;
    }
    PyObject *cpy_r_r1378[1] = {cpy_r_r1372};
    cpy_r_r1379 = (PyObject **)&cpy_r_r1378;
    cpy_r_r1380 = _PyObject_Vectorcall(cpy_r_r1377, cpy_r_r1379, 1, 0);
    CPy_DECREF(cpy_r_r1377);
    if (unlikely(cpy_r_r1380 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1258, CPyStatic_mypy___main___globals);
        goto CPyL971;
    }
    CPy_DECREF(cpy_r_r1372);
    if (likely(PyUnicode_Check(cpy_r_r1380)))
        cpy_r_r1381 = cpy_r_r1380;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1258, CPyStatic_mypy___main___globals, "str", cpy_r_r1380);
        goto CPyL967;
    }
    cpy_r_r1382 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1382 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1258, CPyStatic_mypy___main___globals);
        goto CPyL972;
    }
    CPy_INCREF(cpy_r_r1382);
CPyL366: ;
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1382)->_cache_dir);
    ((mypy___options___OptionsObject *)cpy_r_r1382)->_cache_dir = cpy_r_r1381;
    CPy_DECREF(cpy_r_r1382);
    cpy_r_r1384 = CPyModule_argparse;
    cpy_r_r1385 = CPyStatics[1901]; /* 'Namespace' */
    cpy_r_r1386 = CPyObject_GetAttr(cpy_r_r1384, cpy_r_r1385);
    if (unlikely(cpy_r_r1386 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1261, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    cpy_r_r1387 = _PyObject_Vectorcall(cpy_r_r1386, 0, 0, 0);
    CPy_DECREF(cpy_r_r1386);
    if (unlikely(cpy_r_r1387 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1261, CPyStatic_mypy___main___globals);
        goto CPyL967;
    }
    cpy_r_special_opts = cpy_r_r1387;
    cpy_r_r1388 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1388 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1262, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1388);
CPyL369: ;
    cpy_r_r1389 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1389 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1262, CPyStatic_mypy___main___globals);
        goto CPyL974;
    }
    CPy_INCREF(cpy_r_r1389);
CPyL370: ;
    cpy_r_r1390 = CPyStatics[2957]; /* 'special-opts:' */
    cpy_r_r1391 = CPyStatic_mypy___main___globals;
    cpy_r_r1392 = CPyStatics[3028]; /* 'SplitNamespace' */
    cpy_r_r1393 = CPyDict_GetItem(cpy_r_r1391, cpy_r_r1392);
    if (unlikely(cpy_r_r1393 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1262, CPyStatic_mypy___main___globals);
        goto CPyL975;
    }
    PyObject *cpy_r_r1394[3] = {cpy_r_r1389, cpy_r_special_opts, cpy_r_r1390};
    cpy_r_r1395 = (PyObject **)&cpy_r_r1394;
    cpy_r_r1396 = _PyObject_Vectorcall(cpy_r_r1393, cpy_r_r1395, 3, 0);
    CPy_DECREF(cpy_r_r1393);
    if (unlikely(cpy_r_r1396 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1262, CPyStatic_mypy___main___globals);
        goto CPyL975;
    }
    CPy_DECREF(cpy_r_r1389);
    cpy_r_r1397 = CPyStatics[1675]; /* 'parse_args' */
    PyObject *cpy_r_r1398[3] = {cpy_r_r1388, cpy_r_args, cpy_r_r1396};
    cpy_r_r1399 = (PyObject **)&cpy_r_r1398;
    cpy_r_r1400 = PyObject_VectorcallMethod(cpy_r_r1397, cpy_r_r1399, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1400 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1262, CPyStatic_mypy___main___globals);
        goto CPyL976;
    } else
        goto CPyL977;
CPyL373: ;
    CPy_DECREF(cpy_r_r1388);
    CPy_DECREF(cpy_r_r1396);
    cpy_r_r1401 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r1402 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1401);
    if (unlikely(cpy_r_r1402 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1266, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1403 = PyObject_IsTrue(cpy_r_r1402);
    cpy_r_r1404 = cpy_r_r1403 >= 0;
    if (unlikely(!cpy_r_r1404)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1266, CPyStatic_mypy___main___globals);
        goto CPyL978;
    }
    cpy_r_r1405 = cpy_r_r1403;
    if (!cpy_r_r1405) goto CPyL979;
    cpy_r_r1406 = cpy_r_r1402;
    goto CPyL379;
CPyL377: ;
    cpy_r_r1407 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1407 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1266, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1407);
CPyL378: ;
    cpy_r_r1408 = ((mypy___options___OptionsObject *)cpy_r_r1407)->_python_version;
    CPyTagged_INCREF(cpy_r_r1408.f0);
    CPyTagged_INCREF(cpy_r_r1408.f1);
    CPy_DECREF(cpy_r_r1407);
    cpy_r_r1409 = PyTuple_New(2);
    if (unlikely(cpy_r_r1409 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3152 = CPyTagged_StealAsObject(cpy_r_r1408.f0);
    PyTuple_SET_ITEM(cpy_r_r1409, 0, __tmp3152);
    PyObject *__tmp3153 = CPyTagged_StealAsObject(cpy_r_r1408.f1);
    PyTuple_SET_ITEM(cpy_r_r1409, 1, __tmp3153);
    cpy_r_r1406 = cpy_r_r1409;
CPyL379: ;
    cpy_r_r1410 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1410 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1266, CPyStatic_mypy___main___globals);
        goto CPyL980;
    }
    CPy_INCREF(cpy_r_r1410);
CPyL380: ;
    PyObject *__tmp3154;
    if (unlikely(!(PyTuple_Check(cpy_r_r1406) && PyTuple_GET_SIZE(cpy_r_r1406) == 2))) {
        __tmp3154 = NULL;
        goto __LL3155;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r1406, 0))))
        __tmp3154 = PyTuple_GET_ITEM(cpy_r_r1406, 0);
    else {
        __tmp3154 = NULL;
    }
    if (__tmp3154 == NULL) goto __LL3155;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r1406, 1))))
        __tmp3154 = PyTuple_GET_ITEM(cpy_r_r1406, 1);
    else {
        __tmp3154 = NULL;
    }
    if (__tmp3154 == NULL) goto __LL3155;
    __tmp3154 = cpy_r_r1406;
__LL3155: ;
    if (unlikely(__tmp3154 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r1406); cpy_r_r1411 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp3156 = PyTuple_GET_ITEM(cpy_r_r1406, 0);
        CPyTagged __tmp3157;
        if (likely(PyLong_Check(__tmp3156)))
            __tmp3157 = CPyTagged_FromObject(__tmp3156);
        else {
            CPy_TypeError("int", __tmp3156); __tmp3157 = CPY_INT_TAG;
        }
        cpy_r_r1411.f0 = __tmp3157;
        PyObject *__tmp3158 = PyTuple_GET_ITEM(cpy_r_r1406, 1);
        CPyTagged __tmp3159;
        if (likely(PyLong_Check(__tmp3158)))
            __tmp3159 = CPyTagged_FromObject(__tmp3158);
        else {
            CPy_TypeError("int", __tmp3158); __tmp3159 = CPY_INT_TAG;
        }
        cpy_r_r1411.f1 = __tmp3159;
    }
    CPy_DECREF(cpy_r_r1406);
    if (unlikely(cpy_r_r1411.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1266, CPyStatic_mypy___main___globals);
        goto CPyL981;
    }
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_r1410)->_python_version.f0);
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_r1410)->_python_version.f1);
    ((mypy___options___OptionsObject *)cpy_r_r1410)->_python_version = cpy_r_r1411;
    CPy_DECREF(cpy_r_r1410);
    cpy_r_r1413 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1413 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1267, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1413);
CPyL382: ;
    cpy_r_r1414 = ((mypy___options___OptionsObject *)cpy_r_r1413)->_python_version;
    CPyTagged_INCREF(cpy_r_r1414.f0);
    CPyTagged_INCREF(cpy_r_r1414.f1);
    CPy_DECREF(cpy_r_r1413);
    cpy_r_r1415 = PyTuple_New(2);
    if (unlikely(cpy_r_r1415 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3160 = CPyTagged_StealAsObject(cpy_r_r1414.f0);
    PyTuple_SET_ITEM(cpy_r_r1415, 0, __tmp3160);
    PyObject *__tmp3161 = CPyTagged_StealAsObject(cpy_r_r1414.f1);
    PyTuple_SET_ITEM(cpy_r_r1415, 1, __tmp3161);
    cpy_r_r1416.f0 = 6;
    CPyTagged_INCREF(cpy_r_r1416.f0);
    cpy_r_r1417 = PyTuple_New(1);
    if (unlikely(cpy_r_r1417 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3162 = CPyTagged_StealAsObject(cpy_r_r1416.f0);
    PyTuple_SET_ITEM(cpy_r_r1417, 0, __tmp3162);
    cpy_r_r1418 = PyObject_RichCompare(cpy_r_r1415, cpy_r_r1417, 0);
    CPy_DECREF(cpy_r_r1415);
    CPy_DECREF(cpy_r_r1417);
    if (unlikely(cpy_r_r1418 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1267, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1419 = PyObject_IsTrue(cpy_r_r1418);
    CPy_DECREF(cpy_r_r1418);
    cpy_r_r1420 = cpy_r_r1419 >= 0;
    if (unlikely(!cpy_r_r1420)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1267, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1421 = cpy_r_r1419;
    if (!cpy_r_r1421) goto CPyL387;
    cpy_r_r1422 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1422 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1268, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1422);
CPyL386: ;
    cpy_r_r1423 = CPyStatics[3029]; /* ('Mypy no longer supports checking Python 2 code. '
                                       'Consider pinning to mypy<0.980 if you need to check '
                                       'Python 2 code.') */
    cpy_r_r1424 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1422, cpy_r_r1423);
    CPy_DECREF(cpy_r_r1422);
    if (unlikely(cpy_r_r1424 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1268, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL982;
CPyL387: ;
    cpy_r_r1425 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1425 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1273, CPyStatic_mypy___main___globals);
        goto CPyL389;
    }
    CPy_INCREF(cpy_r_r1425);
CPyL388: ;
    cpy_r_r1426 = CPyDef_mypy___main___infer_python_executable(cpy_r_r1425, cpy_r_special_opts);
    CPy_DECREF(cpy_r_r1425);
    if (unlikely(cpy_r_r1426 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1273, CPyStatic_mypy___main___globals);
    } else
        goto CPyL399;
CPyL389: ;
    cpy_r_r1427 = CPy_CatchError();
    cpy_r_r1428 = (PyObject *)CPyType_mypy___main___PythonExecutableInferenceError;
    cpy_r_r1429 = CPy_ExceptionMatches(cpy_r_r1428);
    if (!cpy_r_r1429) goto CPyL983;
    cpy_r_r1430 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r1430) == CPyType_mypy___main___PythonExecutableInferenceError))
        cpy_r_r1431 = cpy_r_r1430;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1274, CPyStatic_mypy___main___globals, "mypy.main.PythonExecutableInferenceError", cpy_r_r1430);
        goto CPyL984;
    }
    cpy_r_e = cpy_r_r1431;
    cpy_r_r1432 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1432 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1275, CPyStatic_mypy___main___globals);
        goto CPyL985;
    }
    CPy_INCREF(cpy_r_r1432);
CPyL392: ;
    cpy_r_r1433 = PyObject_Str(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r1433 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1275, CPyStatic_mypy___main___globals);
        goto CPyL986;
    }
    cpy_r_r1434 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1432, cpy_r_r1433);
    CPy_DecRef(cpy_r_r1433);
    CPy_DecRef(cpy_r_r1432);
    if (unlikely(cpy_r_r1434 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1275, CPyStatic_mypy___main___globals);
        goto CPyL984;
    } else
        goto CPyL987;
CPyL394: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL397;
    } else
        goto CPyL988;
CPyL395: ;
    CPy_Unreachable();
CPyL396: ;
    CPy_RestoreExcInfo(cpy_r_r1427);
    CPy_DecRef(cpy_r_r1427.f0);
    CPy_DecRef(cpy_r_r1427.f1);
    CPy_DecRef(cpy_r_r1427.f2);
    goto CPyL399;
CPyL397: ;
    CPy_RestoreExcInfo(cpy_r_r1427);
    CPy_DecRef(cpy_r_r1427.f0);
    CPy_DecRef(cpy_r_r1427.f1);
    CPy_DecRef(cpy_r_r1427.f2);
    cpy_r_r1435 = CPy_KeepPropagating();
    if (!cpy_r_r1435) goto CPyL721;
    CPy_Unreachable();
CPyL399: ;
    cpy_r_r1436 = CPyStatics[2740]; /* 'no_executable' */
    cpy_r_r1437 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1436);
    if (unlikely(cpy_r_r1437 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1277, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1438 = PyObject_IsTrue(cpy_r_r1437);
    CPy_DECREF(cpy_r_r1437);
    cpy_r_r1439 = cpy_r_r1438 >= 0;
    if (unlikely(!cpy_r_r1439)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1277, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1440 = cpy_r_r1438;
    if (cpy_r_r1440) goto CPyL404;
    cpy_r_r1441 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1441 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1277, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1441);
CPyL403: ;
    cpy_r_r1442 = ((mypy___options___OptionsObject *)cpy_r_r1441)->_no_site_packages;
    CPy_DECREF(cpy_r_r1441);
    if (!cpy_r_r1442) goto CPyL406;
CPyL404: ;
    cpy_r_r1443 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1443 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1278, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1443);
CPyL405: ;
    cpy_r_r1444 = Py_None;
    CPy_INCREF(cpy_r_r1444);
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1443)->_python_executable);
    ((mypy___options___OptionsObject *)cpy_r_r1443)->_python_executable = cpy_r_r1444;
    CPy_DECREF(cpy_r_r1443);
CPyL406: ;
    cpy_r_r1446 = CPyStatics[608]; /* 'files' */
    cpy_r_r1447 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1446);
    if (unlikely(cpy_r_r1447 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1448 = PyObject_IsTrue(cpy_r_r1447);
    CPy_DECREF(cpy_r_r1447);
    cpy_r_r1449 = cpy_r_r1448 >= 0;
    if (unlikely(!cpy_r_r1449)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1450 = cpy_r_r1448;
    if (cpy_r_r1450) goto CPyL436;
    cpy_r_r1451 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r1452 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1451);
    if (unlikely(cpy_r_r1452 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1453 = PyObject_IsTrue(cpy_r_r1452);
    CPy_DECREF(cpy_r_r1452);
    cpy_r_r1454 = cpy_r_r1453 >= 0;
    if (unlikely(!cpy_r_r1454)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1455 = cpy_r_r1453;
    if (cpy_r_r1455) goto CPyL436;
    cpy_r_r1456 = CPyStatics[635]; /* 'modules' */
    cpy_r_r1457 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1456);
    if (unlikely(cpy_r_r1457 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1458 = PyObject_IsTrue(cpy_r_r1457);
    CPy_DECREF(cpy_r_r1457);
    cpy_r_r1459 = cpy_r_r1458 >= 0;
    if (unlikely(!cpy_r_r1459)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1282, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1460 = cpy_r_r1458;
    if (cpy_r_r1460) goto CPyL436;
    cpy_r_r1461 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1461 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1283, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1461);
CPyL416: ;
    cpy_r_r1462 = ((mypy___options___OptionsObject *)cpy_r_r1461)->_files;
    CPy_INCREF(cpy_r_r1462);
    CPy_DECREF(cpy_r_r1461);
    cpy_r_r1463 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1464 = cpy_r_r1462 != cpy_r_r1463;
    if (!cpy_r_r1464) goto CPyL989;
    if (likely(cpy_r_r1462 != Py_None))
        cpy_r_r1465 = cpy_r_r1462;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1283, CPyStatic_mypy___main___globals, "list", cpy_r_r1462);
        goto CPyL973;
    }
    cpy_r_r1466 = (CPyPtr)&((PyVarObject *)cpy_r_r1465)->ob_size;
    cpy_r_r1467 = *(int64_t *)cpy_r_r1466;
    CPy_DECREF(cpy_r_r1465);
    cpy_r_r1468 = cpy_r_r1467 << 1;
    cpy_r_r1469 = cpy_r_r1468 != 0;
    if (!cpy_r_r1469) goto CPyL422;
    cpy_r_r1470 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1470 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1284, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1470);
CPyL420: ;
    cpy_r_r1471 = ((mypy___options___OptionsObject *)cpy_r_r1470)->_files;
    CPy_INCREF(cpy_r_r1471);
    CPy_DECREF(cpy_r_r1470);
    if (likely(cpy_r_r1471 != Py_None))
        cpy_r_r1472 = cpy_r_r1471;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1284, CPyStatic_mypy___main___globals, "list", cpy_r_r1471);
        goto CPyL973;
    }
    cpy_r_r1473 = CPyStatics[608]; /* 'files' */
    cpy_r_r1474 = PyObject_SetAttr(cpy_r_special_opts, cpy_r_r1473, cpy_r_r1472);
    CPy_DECREF(cpy_r_r1472);
    cpy_r_r1475 = cpy_r_r1474 >= 0;
    if (unlikely(!cpy_r_r1475)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1284, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL422: ;
    cpy_r_r1476 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1476 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1285, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1476);
CPyL423: ;
    cpy_r_r1477 = ((mypy___options___OptionsObject *)cpy_r_r1476)->_packages;
    CPy_INCREF(cpy_r_r1477);
    CPy_DECREF(cpy_r_r1476);
    cpy_r_r1478 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1479 = cpy_r_r1477 != cpy_r_r1478;
    if (!cpy_r_r1479) goto CPyL990;
    if (likely(cpy_r_r1477 != Py_None))
        cpy_r_r1480 = cpy_r_r1477;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1285, CPyStatic_mypy___main___globals, "list", cpy_r_r1477);
        goto CPyL973;
    }
    cpy_r_r1481 = (CPyPtr)&((PyVarObject *)cpy_r_r1480)->ob_size;
    cpy_r_r1482 = *(int64_t *)cpy_r_r1481;
    CPy_DECREF(cpy_r_r1480);
    cpy_r_r1483 = cpy_r_r1482 << 1;
    cpy_r_r1484 = cpy_r_r1483 != 0;
    if (!cpy_r_r1484) goto CPyL429;
    cpy_r_r1485 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1485 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1286, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1485);
CPyL427: ;
    cpy_r_r1486 = ((mypy___options___OptionsObject *)cpy_r_r1485)->_packages;
    CPy_INCREF(cpy_r_r1486);
    CPy_DECREF(cpy_r_r1485);
    if (likely(cpy_r_r1486 != Py_None))
        cpy_r_r1487 = cpy_r_r1486;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1286, CPyStatic_mypy___main___globals, "list", cpy_r_r1486);
        goto CPyL973;
    }
    cpy_r_r1488 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r1489 = PyObject_SetAttr(cpy_r_special_opts, cpy_r_r1488, cpy_r_r1487);
    CPy_DECREF(cpy_r_r1487);
    cpy_r_r1490 = cpy_r_r1489 >= 0;
    if (unlikely(!cpy_r_r1490)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1286, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL429: ;
    cpy_r_r1491 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1491 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1287, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1491);
CPyL430: ;
    cpy_r_r1492 = ((mypy___options___OptionsObject *)cpy_r_r1491)->_modules;
    CPy_INCREF(cpy_r_r1492);
    CPy_DECREF(cpy_r_r1491);
    cpy_r_r1493 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1494 = cpy_r_r1492 != cpy_r_r1493;
    if (!cpy_r_r1494) goto CPyL991;
    if (likely(cpy_r_r1492 != Py_None))
        cpy_r_r1495 = cpy_r_r1492;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1287, CPyStatic_mypy___main___globals, "list", cpy_r_r1492);
        goto CPyL973;
    }
    cpy_r_r1496 = (CPyPtr)&((PyVarObject *)cpy_r_r1495)->ob_size;
    cpy_r_r1497 = *(int64_t *)cpy_r_r1496;
    CPy_DECREF(cpy_r_r1495);
    cpy_r_r1498 = cpy_r_r1497 << 1;
    cpy_r_r1499 = cpy_r_r1498 != 0;
    if (!cpy_r_r1499) goto CPyL436;
    cpy_r_r1500 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1500 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1288, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1500);
CPyL434: ;
    cpy_r_r1501 = ((mypy___options___OptionsObject *)cpy_r_r1500)->_modules;
    CPy_INCREF(cpy_r_r1501);
    CPy_DECREF(cpy_r_r1500);
    if (likely(cpy_r_r1501 != Py_None))
        cpy_r_r1502 = cpy_r_r1501;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1288, CPyStatic_mypy___main___globals, "list", cpy_r_r1501);
        goto CPyL973;
    }
    cpy_r_r1503 = CPyStatics[635]; /* 'modules' */
    cpy_r_r1504 = PyObject_SetAttr(cpy_r_special_opts, cpy_r_r1503, cpy_r_r1502);
    CPy_DECREF(cpy_r_r1502);
    cpy_r_r1505 = cpy_r_r1504 >= 0;
    if (unlikely(!cpy_r_r1505)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1288, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL436: ;
    if (!cpy_r_require_targets) goto CPyL458;
    cpy_r_r1506 = 0;
    cpy_r_r1507 = CPyStatics[635]; /* 'modules' */
    cpy_r_r1508 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1507);
    if (unlikely(cpy_r_r1508 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1295, CPyStatic_mypy___main___globals);
        goto CPyL992;
    }
    cpy_r_r1509 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r1510 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1509);
    if (unlikely(cpy_r_r1510 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1295, CPyStatic_mypy___main___globals);
        goto CPyL993;
    }
    cpy_r_r1511 = PyNumber_Add(cpy_r_r1508, cpy_r_r1510);
    CPy_DECREF(cpy_r_r1508);
    CPy_DECREF(cpy_r_r1510);
    if (unlikely(cpy_r_r1511 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1295, CPyStatic_mypy___main___globals);
        goto CPyL992;
    }
    cpy_r_r1512 = CPyStatics[1748]; /* 'command' */
    cpy_r_r1513 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1512);
    if (unlikely(cpy_r_r1513 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1296, CPyStatic_mypy___main___globals);
        goto CPyL994;
    }
    cpy_r_r1514 = CPyStatics[608]; /* 'files' */
    cpy_r_r1515 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1514);
    if (unlikely(cpy_r_r1515 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1297, CPyStatic_mypy___main___globals);
        goto CPyL995;
    }
    cpy_r_r1516 = PyList_New(3);
    if (unlikely(cpy_r_r1516 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1294, CPyStatic_mypy___main___globals);
        goto CPyL996;
    }
    cpy_r_r1517 = (CPyPtr)&((PyListObject *)cpy_r_r1516)->ob_item;
    cpy_r_r1518 = *(CPyPtr *)cpy_r_r1517;
    *(PyObject * *)cpy_r_r1518 = cpy_r_r1511;
    cpy_r_r1519 = cpy_r_r1518 + 8;
    *(PyObject * *)cpy_r_r1519 = cpy_r_r1513;
    cpy_r_r1520 = cpy_r_r1518 + 16;
    *(PyObject * *)cpy_r_r1520 = cpy_r_r1515;
    cpy_r_r1521 = 0;
CPyL444: ;
    cpy_r_r1522 = (CPyPtr)&((PyVarObject *)cpy_r_r1516)->ob_size;
    cpy_r_r1523 = *(int64_t *)cpy_r_r1522;
    cpy_r_r1524 = cpy_r_r1523 << 1;
    cpy_r_r1525 = (Py_ssize_t)cpy_r_r1521 < (Py_ssize_t)cpy_r_r1524;
    if (!cpy_r_r1525) goto CPyL997;
    cpy_r_r1526 = CPyList_GetItemUnsafe(cpy_r_r1516, cpy_r_r1521);
    cpy_r_c = cpy_r_r1526;
    cpy_r_r1527 = PyObject_IsTrue(cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r1528 = cpy_r_r1527 >= 0;
    if (unlikely(!cpy_r_r1528)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1294, CPyStatic_mypy___main___globals);
        goto CPyL998;
    }
    cpy_r_r1529 = cpy_r_r1527;
    cpy_r_r1530 = cpy_r_r1529 << 1;
    cpy_r_r1531 = cpy_r_r1530;
    cpy_r_r1532 = CPyTagged_Add(cpy_r_r1506, cpy_r_r1531);
    CPyTagged_DECREF(cpy_r_r1506);
    CPyTagged_DECREF(cpy_r_r1531);
    cpy_r_r1506 = cpy_r_r1532;
    cpy_r_r1533 = cpy_r_r1521 + 2;
    cpy_r_r1521 = cpy_r_r1533;
    goto CPyL444;
CPyL448: ;
    cpy_r_code_methods = cpy_r_r1506;
    cpy_r_r1534 = cpy_r_code_methods == 0;
    if (!cpy_r_r1534) goto CPyL453;
    cpy_r_r1535 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1535 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1300, CPyStatic_mypy___main___globals);
        goto CPyL999;
    }
    CPy_INCREF(cpy_r_r1535);
CPyL450: ;
    cpy_r_r1536 = ((mypy___options___OptionsObject *)cpy_r_r1535)->_install_types;
    CPy_DECREF(cpy_r_r1535);
    if (cpy_r_r1536) {
        goto CPyL453;
    } else
        goto CPyL1000;
CPyL451: ;
    cpy_r_r1537 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1537 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1301, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1537);
CPyL452: ;
    cpy_r_r1538 = CPyStatics[3030]; /* 'Missing target module, package, files, or command.' */
    cpy_r_r1539 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1537, cpy_r_r1538);
    CPy_DECREF(cpy_r_r1537);
    if (unlikely(cpy_r_r1539 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1301, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1001;
CPyL453: ;
    cpy_r_r1540 = cpy_r_code_methods & 1;
    cpy_r_r1541 = cpy_r_r1540 != 0;
    if (!cpy_r_r1541) goto CPyL455;
    cpy_r_r1542 = CPyTagged_IsLt_(2, cpy_r_code_methods);
    CPyTagged_DECREF(cpy_r_code_methods);
    if (cpy_r_r1542) {
        goto CPyL456;
    } else
        goto CPyL458;
CPyL455: ;
    cpy_r_r1543 = (Py_ssize_t)cpy_r_code_methods > (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_code_methods);
    if (!cpy_r_r1543) goto CPyL458;
CPyL456: ;
    cpy_r_r1544 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1544 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1303, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1544);
CPyL457: ;
    cpy_r_r1545 = CPyStatics[3031]; /* ('May only specify one of: module/package, files, or '
                                       'command.') */
    cpy_r_r1546 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1544, cpy_r_r1545);
    CPy_DECREF(cpy_r_r1544);
    if (unlikely(cpy_r_r1546 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1303, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1002;
CPyL458: ;
    cpy_r_r1547 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1547 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1304, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1547);
CPyL459: ;
    cpy_r_r1548 = ((mypy___options___OptionsObject *)cpy_r_r1547)->_explicit_package_bases;
    CPy_DECREF(cpy_r_r1547);
    if (!cpy_r_r1548) goto CPyL464;
CPyL460: ;
    cpy_r_r1549 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1549 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1304, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1549);
CPyL461: ;
    cpy_r_r1550 = ((mypy___options___OptionsObject *)cpy_r_r1549)->_namespace_packages;
    CPy_DECREF(cpy_r_r1549);
    if (cpy_r_r1550) goto CPyL464;
CPyL462: ;
    cpy_r_r1551 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1551 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1305, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1551);
CPyL463: ;
    cpy_r_r1552 = CPyStatics[3032]; /* ('Can only use --explicit-package-bases with '
                                       '--namespace-packages, since otherwise examining '
                                       "__init__.py's is sufficient to determine module "
                                       'names for files') */
    cpy_r_r1553 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1551, cpy_r_r1552);
    CPy_DECREF(cpy_r_r1551);
    if (unlikely(cpy_r_r1553 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1305, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1003;
CPyL464: ;
    cpy_r_r1554 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1554 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1554);
CPyL465: ;
    cpy_r_r1555 = ((mypy___options___OptionsObject *)cpy_r_r1554)->_always_true;
    CPy_INCREF(cpy_r_r1555);
    CPy_DECREF(cpy_r_r1554);
    cpy_r_r1556 = PySet_New(cpy_r_r1555);
    CPy_DECREF(cpy_r_r1555);
    if (unlikely(cpy_r_r1556 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1557 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1557 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL1004;
    }
    CPy_INCREF(cpy_r_r1557);
CPyL467: ;
    cpy_r_r1558 = ((mypy___options___OptionsObject *)cpy_r_r1557)->_always_false;
    CPy_INCREF(cpy_r_r1558);
    CPy_DECREF(cpy_r_r1557);
    cpy_r_r1559 = PySet_New(cpy_r_r1558);
    CPy_DECREF(cpy_r_r1558);
    if (unlikely(cpy_r_r1559 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL1004;
    }
    cpy_r_r1560 = PyNumber_And(cpy_r_r1556, cpy_r_r1559);
    CPy_DECREF(cpy_r_r1556);
    CPy_DECREF(cpy_r_r1559);
    if (unlikely(cpy_r_r1560 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    if (likely(PySet_Check(cpy_r_r1560)))
        cpy_r_r1561 = cpy_r_r1560;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1311, CPyStatic_mypy___main___globals, "set", cpy_r_r1560);
        goto CPyL973;
    }
    cpy_r_overlap = cpy_r_r1561;
    cpy_r_r1562 = PyObject_IsTrue(cpy_r_overlap);
    cpy_r_r1563 = cpy_r_r1562 >= 0;
    if (unlikely(!cpy_r_r1563)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1311, CPyStatic_mypy___main___globals);
        goto CPyL1005;
    }
    cpy_r_r1564 = cpy_r_r1562;
    if (!cpy_r_r1564) goto CPyL1006;
    cpy_r_r1565 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1565 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1313, CPyStatic_mypy___main___globals);
        goto CPyL1005;
    }
    CPy_INCREF(cpy_r_r1565);
CPyL473: ;
    cpy_r_r1566 = CPyStatics[71]; /* ', ' */
    cpy_r_r1567 = CPyModule_builtins;
    cpy_r_r1568 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r1569 = CPyObject_GetAttr(cpy_r_r1567, cpy_r_r1568);
    if (unlikely(cpy_r_r1569 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1315, CPyStatic_mypy___main___globals);
        goto CPyL1007;
    }
    PyObject *cpy_r_r1570[1] = {cpy_r_overlap};
    cpy_r_r1571 = (PyObject **)&cpy_r_r1570;
    cpy_r_r1572 = _PyObject_Vectorcall(cpy_r_r1569, cpy_r_r1571, 1, 0);
    CPy_DECREF(cpy_r_r1569);
    if (unlikely(cpy_r_r1572 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1315, CPyStatic_mypy___main___globals);
        goto CPyL1007;
    }
    CPy_DECREF(cpy_r_overlap);
    if (likely(PyList_Check(cpy_r_r1572)))
        cpy_r_r1573 = cpy_r_r1572;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1315, CPyStatic_mypy___main___globals, "list", cpy_r_r1572);
        goto CPyL1008;
    }
    cpy_r_r1574 = PyUnicode_Join(cpy_r_r1566, cpy_r_r1573);
    CPy_DECREF(cpy_r_r1573);
    if (unlikely(cpy_r_r1574 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1315, CPyStatic_mypy___main___globals);
        goto CPyL1008;
    }
    cpy_r_r1575 = CPyStatics[3033]; /* ("You can't make a variable always true and always "
                                       'false (') */
    cpy_r_r1576 = CPyStatics[72]; /* ')' */
    cpy_r_r1577 = CPyStr_Build(3, cpy_r_r1575, cpy_r_r1574, cpy_r_r1576);
    CPy_DECREF(cpy_r_r1574);
    if (unlikely(cpy_r_r1577 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1314, CPyStatic_mypy___main___globals);
        goto CPyL1008;
    }
    cpy_r_r1578 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1565, cpy_r_r1577);
    CPy_DECREF(cpy_r_r1577);
    CPy_DECREF(cpy_r_r1565);
    if (unlikely(cpy_r_r1578 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1313, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1009;
CPyL479: ;
    cpy_r_r1579 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1579 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1319, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1579);
CPyL480: ;
    cpy_r_r1580 = ((mypy___options___OptionsObject *)cpy_r_r1579)->_disable_error_code;
    CPy_INCREF(cpy_r_r1580);
    CPy_DECREF(cpy_r_r1579);
    cpy_r_r1581 = PySet_New(cpy_r_r1580);
    CPy_DECREF(cpy_r_r1580);
    if (unlikely(cpy_r_r1581 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1319, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_disabled_codes = cpy_r_r1581;
    cpy_r_r1582 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1582 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1320, CPyStatic_mypy___main___globals);
        goto CPyL1010;
    }
    CPy_INCREF(cpy_r_r1582);
CPyL482: ;
    cpy_r_r1583 = ((mypy___options___OptionsObject *)cpy_r_r1582)->_enable_error_code;
    CPy_INCREF(cpy_r_r1583);
    CPy_DECREF(cpy_r_r1582);
    cpy_r_r1584 = PySet_New(cpy_r_r1583);
    CPy_DECREF(cpy_r_r1583);
    if (unlikely(cpy_r_r1584 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1320, CPyStatic_mypy___main___globals);
        goto CPyL1010;
    }
    cpy_r_enabled_codes = cpy_r_r1584;
    cpy_r_r1585 = CPyStatic_mypy___main___globals;
    cpy_r_r1586 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r1587 = CPyDict_GetItem(cpy_r_r1585, cpy_r_r1586);
    if (unlikely(cpy_r_r1587 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1322, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    }
    if (likely(PyDict_Check(cpy_r_r1587)))
        cpy_r_r1588 = cpy_r_r1587;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1322, CPyStatic_mypy___main___globals, "dict", cpy_r_r1587);
        goto CPyL1011;
    }
    cpy_r_r1589 = CPyDict_KeysView(cpy_r_r1588);
    CPy_DECREF(cpy_r_r1588);
    if (unlikely(cpy_r_r1589 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1322, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    }
    cpy_r_r1590 = PySet_New(cpy_r_r1589);
    CPy_DECREF(cpy_r_r1589);
    if (unlikely(cpy_r_r1590 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1322, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    }
    cpy_r_valid_error_codes = cpy_r_r1590;
    cpy_r_r1591 = PyNumber_Or(cpy_r_enabled_codes, cpy_r_disabled_codes);
    if (unlikely(cpy_r_r1591 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1324, CPyStatic_mypy___main___globals);
        goto CPyL1012;
    }
    if (likely(PySet_Check(cpy_r_r1591)))
        cpy_r_r1592 = cpy_r_r1591;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1324, CPyStatic_mypy___main___globals, "set", cpy_r_r1591);
        goto CPyL1012;
    }
    cpy_r_r1593 = PyNumber_Subtract(cpy_r_r1592, cpy_r_valid_error_codes);
    CPy_DECREF(cpy_r_r1592);
    CPy_DECREF(cpy_r_valid_error_codes);
    if (unlikely(cpy_r_r1593 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1324, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    }
    if (likely(PySet_Check(cpy_r_r1593)))
        cpy_r_r1594 = cpy_r_r1593;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1324, CPyStatic_mypy___main___globals, "set", cpy_r_r1593);
        goto CPyL1011;
    }
    cpy_r_invalid_codes = cpy_r_r1594;
    cpy_r_r1595 = PyObject_IsTrue(cpy_r_invalid_codes);
    cpy_r_r1596 = cpy_r_r1595 >= 0;
    if (unlikely(!cpy_r_r1596)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1324, CPyStatic_mypy___main___globals);
        goto CPyL1013;
    }
    cpy_r_r1597 = cpy_r_r1595;
    if (!cpy_r_r1597) goto CPyL1014;
    cpy_r_r1598 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1598 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1013;
    }
    CPy_INCREF(cpy_r_r1598);
CPyL494: ;
    cpy_r_r1599 = CPyStatics[1491]; /* 'Invalid error code(s): ' */
    cpy_r_r1600 = CPyStatics[71]; /* ', ' */
    cpy_r_r1601 = CPyModule_builtins;
    cpy_r_r1602 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r1603 = CPyObject_GetAttr(cpy_r_r1601, cpy_r_r1602);
    if (unlikely(cpy_r_r1603 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1015;
    }
    PyObject *cpy_r_r1604[1] = {cpy_r_invalid_codes};
    cpy_r_r1605 = (PyObject **)&cpy_r_r1604;
    cpy_r_r1606 = _PyObject_Vectorcall(cpy_r_r1603, cpy_r_r1605, 1, 0);
    CPy_DECREF(cpy_r_r1603);
    if (unlikely(cpy_r_r1606 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1015;
    }
    CPy_DECREF(cpy_r_invalid_codes);
    if (likely(PyList_Check(cpy_r_r1606)))
        cpy_r_r1607 = cpy_r_r1606;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals, "list", cpy_r_r1606);
        goto CPyL1016;
    }
    cpy_r_r1608 = PyUnicode_Join(cpy_r_r1600, cpy_r_r1607);
    CPy_DECREF(cpy_r_r1607);
    if (unlikely(cpy_r_r1608 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1016;
    }
    cpy_r_r1609 = CPyStr_Build(2, cpy_r_r1599, cpy_r_r1608);
    CPy_DECREF(cpy_r_r1608);
    if (unlikely(cpy_r_r1609 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1016;
    }
    cpy_r_r1610 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1598, cpy_r_r1609);
    CPy_DECREF(cpy_r_r1609);
    CPy_DECREF(cpy_r_r1598);
    if (unlikely(cpy_r_r1610 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1326, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    } else
        goto CPyL1017;
CPyL500: ;
    cpy_r_r1611 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1611 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1011;
    }
    CPy_INCREF(cpy_r_r1611);
CPyL501: ;
    cpy_r_r1612 = ((mypy___options___OptionsObject *)cpy_r_r1611)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r1612);
    cpy_r_r1613 = PySet_New(NULL);
    if (unlikely(cpy_r_r1613 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1018;
    }
    cpy_r_r1614 = PyObject_GetIter(cpy_r_disabled_codes);
    CPy_DECREF(cpy_r_disabled_codes);
    if (unlikely(cpy_r_r1614 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1019;
    }
CPyL503: ;
    cpy_r_r1615 = PyIter_Next(cpy_r_r1614);
    if (cpy_r_r1615 == NULL) goto CPyL1020;
    if (likely(PyUnicode_Check(cpy_r_r1615)))
        cpy_r_r1616 = cpy_r_r1615;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals, "str", cpy_r_r1615);
        goto CPyL1021;
    }
    cpy_r_code = cpy_r_r1616;
    cpy_r_r1617 = CPyStatic_mypy___main___globals;
    cpy_r_r1618 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r1619 = CPyDict_GetItem(cpy_r_r1617, cpy_r_r1618);
    if (unlikely(cpy_r_r1619 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1022;
    }
    if (likely(PyDict_Check(cpy_r_r1619)))
        cpy_r_r1620 = cpy_r_r1619;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals, "dict", cpy_r_r1619);
        goto CPyL1022;
    }
    cpy_r_r1621 = CPyDict_GetItem(cpy_r_r1620, cpy_r_code);
    CPy_DECREF(cpy_r_r1620);
    CPy_DECREF(cpy_r_code);
    if (unlikely(cpy_r_r1621 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1021;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1621, CPyType_errorcodes___ErrorCode)))
        cpy_r_r1622 = cpy_r_r1621;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals, "mypy.errorcodes.ErrorCode", cpy_r_r1621);
        goto CPyL1021;
    }
    cpy_r_r1623 = PySet_Add(cpy_r_r1613, cpy_r_r1622);
    CPy_DECREF(cpy_r_r1622);
    cpy_r_r1624 = cpy_r_r1623 >= 0;
    if (unlikely(!cpy_r_r1624)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1021;
    } else
        goto CPyL503;
CPyL510: ;
    cpy_r_r1625 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r1625)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1019;
    }
    cpy_r_r1626 = PyNumber_InPlaceOr(cpy_r_r1612, cpy_r_r1613);
    CPy_DECREF(cpy_r_r1612);
    CPy_DECREF(cpy_r_r1613);
    if (unlikely(cpy_r_r1626 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals);
        goto CPyL1023;
    }
    if (likely(PySet_Check(cpy_r_r1626)))
        cpy_r_r1627 = cpy_r_r1626;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1328, CPyStatic_mypy___main___globals, "set", cpy_r_r1626);
        goto CPyL1023;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1611)->_disabled_error_codes);
    ((mypy___options___OptionsObject *)cpy_r_r1611)->_disabled_error_codes = cpy_r_r1627;
    CPy_DECREF(cpy_r_r1611);
    cpy_r_r1629 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1629 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1024;
    }
    CPy_INCREF(cpy_r_r1629);
CPyL514: ;
    cpy_r_r1630 = ((mypy___options___OptionsObject *)cpy_r_r1629)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r1630);
    cpy_r_r1631 = PySet_New(NULL);
    if (unlikely(cpy_r_r1631 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1025;
    }
    cpy_r_r1632 = PyObject_GetIter(cpy_r_enabled_codes);
    CPy_DECREF(cpy_r_enabled_codes);
    if (unlikely(cpy_r_r1632 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1026;
    }
CPyL516: ;
    cpy_r_r1633 = PyIter_Next(cpy_r_r1632);
    if (cpy_r_r1633 == NULL) goto CPyL1027;
    if (likely(PyUnicode_Check(cpy_r_r1633)))
        cpy_r_r1634 = cpy_r_r1633;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals, "str", cpy_r_r1633);
        goto CPyL1028;
    }
    cpy_r_code_2 = cpy_r_r1634;
    cpy_r_r1635 = CPyStatic_mypy___main___globals;
    cpy_r_r1636 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r1637 = CPyDict_GetItem(cpy_r_r1635, cpy_r_r1636);
    if (unlikely(cpy_r_r1637 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1029;
    }
    if (likely(PyDict_Check(cpy_r_r1637)))
        cpy_r_r1638 = cpy_r_r1637;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals, "dict", cpy_r_r1637);
        goto CPyL1029;
    }
    cpy_r_r1639 = CPyDict_GetItem(cpy_r_r1638, cpy_r_code_2);
    CPy_DECREF(cpy_r_r1638);
    CPy_DECREF(cpy_r_code_2);
    if (unlikely(cpy_r_r1639 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1028;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1639, CPyType_errorcodes___ErrorCode)))
        cpy_r_r1640 = cpy_r_r1639;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals, "mypy.errorcodes.ErrorCode", cpy_r_r1639);
        goto CPyL1028;
    }
    cpy_r_r1641 = PySet_Add(cpy_r_r1631, cpy_r_r1640);
    CPy_DECREF(cpy_r_r1640);
    cpy_r_r1642 = cpy_r_r1641 >= 0;
    if (unlikely(!cpy_r_r1642)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1028;
    } else
        goto CPyL516;
CPyL523: ;
    cpy_r_r1643 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r1643)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1026;
    }
    cpy_r_r1644 = PyNumber_InPlaceOr(cpy_r_r1630, cpy_r_r1631);
    CPy_DECREF(cpy_r_r1630);
    CPy_DECREF(cpy_r_r1631);
    if (unlikely(cpy_r_r1644 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals);
        goto CPyL1030;
    }
    if (likely(PySet_Check(cpy_r_r1644)))
        cpy_r_r1645 = cpy_r_r1644;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1329, CPyStatic_mypy___main___globals, "set", cpy_r_r1644);
        goto CPyL1030;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1629)->_enabled_error_codes);
    ((mypy___options___OptionsObject *)cpy_r_r1629)->_enabled_error_codes = cpy_r_r1645;
    CPy_DECREF(cpy_r_r1629);
    cpy_r_r1647 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1647 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1332, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1647);
CPyL527: ;
    cpy_r_r1648 = ((mypy___options___OptionsObject *)cpy_r_r1647)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r1648);
    cpy_r_r1649 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1649 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1332, CPyStatic_mypy___main___globals);
        goto CPyL1031;
    }
    CPy_INCREF(cpy_r_r1649);
CPyL528: ;
    cpy_r_r1650 = ((mypy___options___OptionsObject *)cpy_r_r1649)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r1650);
    CPy_DECREF(cpy_r_r1649);
    cpy_r_r1651 = PyNumber_InPlaceSubtract(cpy_r_r1648, cpy_r_r1650);
    CPy_DECREF(cpy_r_r1648);
    CPy_DECREF(cpy_r_r1650);
    if (unlikely(cpy_r_r1651 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1332, CPyStatic_mypy___main___globals);
        goto CPyL1032;
    }
    if (likely(PySet_Check(cpy_r_r1651)))
        cpy_r_r1652 = cpy_r_r1651;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1332, CPyStatic_mypy___main___globals, "set", cpy_r_r1651);
        goto CPyL1032;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1647)->_disabled_error_codes);
    ((mypy___options___OptionsObject *)cpy_r_r1647)->_disabled_error_codes = cpy_r_r1652;
    CPy_DECREF(cpy_r_r1647);
    cpy_r_r1654 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1654 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1335, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1654);
CPyL531: ;
    cpy_r_r1655 = ((mypy___options___OptionsObject *)cpy_r_r1654)->_enable_incomplete_feature;
    CPy_INCREF(cpy_r_r1655);
    CPy_DECREF(cpy_r_r1654);
    cpy_r_r1656 = 0;
CPyL532: ;
    cpy_r_r1657 = (CPyPtr)&((PyVarObject *)cpy_r_r1655)->ob_size;
    cpy_r_r1658 = *(int64_t *)cpy_r_r1657;
    cpy_r_r1659 = cpy_r_r1658 << 1;
    cpy_r_r1660 = (Py_ssize_t)cpy_r_r1656 < (Py_ssize_t)cpy_r_r1659;
    if (!cpy_r_r1660) goto CPyL1033;
    cpy_r_r1661 = CPyList_GetItemUnsafe(cpy_r_r1655, cpy_r_r1656);
    if (likely(PyUnicode_Check(cpy_r_r1661)))
        cpy_r_r1662 = cpy_r_r1661;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1335, CPyStatic_mypy___main___globals, "str", cpy_r_r1661);
        goto CPyL1034;
    }
    cpy_r_feature = cpy_r_r1662;
    cpy_r_r1663 = CPyStatic_mypy___options___INCOMPLETE_FEATURES;
    if (unlikely(cpy_r_r1663 == NULL)) {
        goto CPyL1035;
    } else
        goto CPyL537;
CPyL535: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INCOMPLETE_FEATURES\" was not set");
    cpy_r_r1664 = 0;
    if (unlikely(!cpy_r_r1664)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1336, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL537: ;
    cpy_r_r1665 = PySequence_Contains(cpy_r_r1663, cpy_r_feature);
    cpy_r_r1666 = cpy_r_r1665 >= 0;
    if (unlikely(!cpy_r_r1666)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1336, CPyStatic_mypy___main___globals);
        goto CPyL1036;
    }
    cpy_r_r1667 = cpy_r_r1665;
    cpy_r_r1668 = cpy_r_r1667 ^ 1;
    if (!cpy_r_r1668) goto CPyL1037;
    cpy_r_r1669 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1669 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1337, CPyStatic_mypy___main___globals);
        goto CPyL1036;
    }
    CPy_INCREF(cpy_r_r1669);
CPyL540: ;
    cpy_r_r1670 = CPyStatics[3034]; /* 'Unknown incomplete feature: ' */
    cpy_r_r1671 = CPyStr_Build(2, cpy_r_r1670, cpy_r_feature);
    CPy_DECREF(cpy_r_feature);
    if (unlikely(cpy_r_r1671 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1337, CPyStatic_mypy___main___globals);
        goto CPyL1038;
    }
    cpy_r_r1672 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1669, cpy_r_r1671);
    CPy_DECREF(cpy_r_r1671);
    CPy_DECREF(cpy_r_r1669);
    if (unlikely(cpy_r_r1672 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1337, CPyStatic_mypy___main___globals);
        goto CPyL1034;
    } else
        goto CPyL1039;
CPyL542: ;
    cpy_r_r1673 = cpy_r_r1656 + 2;
    cpy_r_r1656 = cpy_r_r1673;
    goto CPyL532;
CPyL543: ;
    cpy_r_r1674 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1674 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1338, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1674);
CPyL544: ;
    cpy_r_r1675 = ((mypy___options___OptionsObject *)cpy_r_r1674)->_enable_incomplete_features;
    CPy_DECREF(cpy_r_r1674);
    if (!cpy_r_r1675) goto CPyL553;
CPyL545: ;
    cpy_r_r1676 = CPyStatics[3035]; /* ('Warning: --enable-incomplete-features is '
                                       'deprecated, use --enable-incomplete-feature=FEATURE '
                                       'instead') */
    cpy_r_r1677 = CPyModule_builtins;
    cpy_r_r1678 = CPyStatics[190]; /* 'print' */
    cpy_r_r1679 = CPyObject_GetAttr(cpy_r_r1677, cpy_r_r1678);
    if (unlikely(cpy_r_r1679 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1339, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    PyObject *cpy_r_r1680[1] = {cpy_r_r1676};
    cpy_r_r1681 = (PyObject **)&cpy_r_r1680;
    cpy_r_r1682 = _PyObject_Vectorcall(cpy_r_r1679, cpy_r_r1681, 1, 0);
    CPy_DECREF(cpy_r_r1679);
    if (unlikely(cpy_r_r1682 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1339, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1040;
CPyL547: ;
    cpy_r_r1683 = CPyStatic_mypy___options___INCOMPLETE_FEATURES;
    if (unlikely(cpy_r_r1683 == NULL)) {
        goto CPyL1041;
    } else
        goto CPyL550;
CPyL548: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INCOMPLETE_FEATURES\" was not set");
    cpy_r_r1684 = 0;
    if (unlikely(!cpy_r_r1684)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1343, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL550: ;
    cpy_r_r1685 = PySequence_List(cpy_r_r1683);
    if (unlikely(cpy_r_r1685 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1343, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1686 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1686 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1343, CPyStatic_mypy___main___globals);
        goto CPyL1042;
    }
    CPy_INCREF(cpy_r_r1686);
CPyL552: ;
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1686)->_enable_incomplete_feature);
    ((mypy___options___OptionsObject *)cpy_r_r1686)->_enable_incomplete_feature = cpy_r_r1685;
    CPy_DECREF(cpy_r_r1686);
CPyL553: ;
    cpy_r_r1688 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1688 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1346, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1688);
CPyL554: ;
    cpy_r_r1689 = ((mypy___options___OptionsObject *)cpy_r_r1688)->_custom_typeshed_dir;
    cpy_r_r1690 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1691 = cpy_r_r1689 != cpy_r_r1690;
    CPy_DECREF(cpy_r_r1688);
    if (!cpy_r_r1691) goto CPyL563;
    cpy_r_r1692 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1692 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1347, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1692);
CPyL556: ;
    cpy_r_r1693 = ((mypy___options___OptionsObject *)cpy_r_r1692)->_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r1693);
    CPy_DECREF(cpy_r_r1692);
    if (likely(cpy_r_r1693 != Py_None))
        cpy_r_r1694 = cpy_r_r1693;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1347, CPyStatic_mypy___main___globals, "str", cpy_r_r1693);
        goto CPyL973;
    }
    cpy_r_r1695 = CPyModule_os;
    cpy_r_r1696 = CPyStatics[142]; /* 'path' */
    cpy_r_r1697 = CPyObject_GetAttr(cpy_r_r1695, cpy_r_r1696);
    if (unlikely(cpy_r_r1697 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1347, CPyStatic_mypy___main___globals);
        goto CPyL1043;
    }
    cpy_r_r1698 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r1699 = CPyObject_GetAttr(cpy_r_r1697, cpy_r_r1698);
    CPy_DECREF(cpy_r_r1697);
    if (unlikely(cpy_r_r1699 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1347, CPyStatic_mypy___main___globals);
        goto CPyL1043;
    }
    PyObject *cpy_r_r1700[1] = {cpy_r_r1694};
    cpy_r_r1701 = (PyObject **)&cpy_r_r1700;
    cpy_r_r1702 = _PyObject_Vectorcall(cpy_r_r1699, cpy_r_r1701, 1, 0);
    CPy_DECREF(cpy_r_r1699);
    if (unlikely(cpy_r_r1702 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1347, CPyStatic_mypy___main___globals);
        goto CPyL1043;
    }
    CPy_DECREF(cpy_r_r1694);
    if (likely(PyUnicode_Check(cpy_r_r1702)))
        cpy_r_r1703 = cpy_r_r1702;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1347, CPyStatic_mypy___main___globals, "str", cpy_r_r1702);
        goto CPyL973;
    }
    cpy_r_r1704 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1704 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1347, CPyStatic_mypy___main___globals);
        goto CPyL1044;
    }
    CPy_INCREF(cpy_r_r1704);
CPyL562: ;
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_r1704)->_abs_custom_typeshed_dir);
    ((mypy___options___OptionsObject *)cpy_r_r1704)->_abs_custom_typeshed_dir = cpy_r_r1703;
    CPy_DECREF(cpy_r_r1704);
CPyL563: ;
    cpy_r_r1706 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r1707 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1706);
    if (unlikely(cpy_r_r1707 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1350, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1708 = PyObject_IsTrue(cpy_r_r1707);
    CPy_DECREF(cpy_r_r1707);
    cpy_r_r1709 = cpy_r_r1708 >= 0;
    if (unlikely(!cpy_r_r1709)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1350, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1710 = cpy_r_r1708;
    if (!cpy_r_r1710) goto CPyL577;
    cpy_r_r1711 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r1712 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1711);
    if (unlikely(cpy_r_r1712 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1351, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1713 = CPyStatics[224]; /* '.' */
    cpy_r_r1714 = CPyStatics[369]; /* 'split' */
    PyObject *cpy_r_r1715[2] = {cpy_r_r1712, cpy_r_r1713};
    cpy_r_r1716 = (PyObject **)&cpy_r_r1715;
    cpy_r_r1717 = PyObject_VectorcallMethod(cpy_r_r1714, cpy_r_r1716, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r1717 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1351, CPyStatic_mypy___main___globals);
        goto CPyL1045;
    }
    CPy_DECREF(cpy_r_r1712);
    cpy_r_r1718 = PySequence_Tuple(cpy_r_r1717);
    CPy_DECREF(cpy_r_r1717);
    if (unlikely(cpy_r_r1718 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1351, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r__find_occurrences = cpy_r_r1718;
    cpy_r_r1719 = (CPyPtr)&((PyVarObject *)cpy_r__find_occurrences)->ob_size;
    cpy_r_r1720 = *(int64_t *)cpy_r_r1719;
    cpy_r_r1721 = cpy_r_r1720 << 1;
    cpy_r_r1722 = (Py_ssize_t)cpy_r_r1721 < (Py_ssize_t)4;
    if (!cpy_r_r1722) goto CPyL572;
    cpy_r_r1723 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1723 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1353, CPyStatic_mypy___main___globals);
        goto CPyL1046;
    }
    CPy_INCREF(cpy_r_r1723);
CPyL571: ;
    cpy_r_r1724 = CPyStatics[3036]; /* 'Can only find occurrences of class members.' */
    cpy_r_r1725 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1723, cpy_r_r1724);
    CPy_DECREF(cpy_r_r1723);
    if (unlikely(cpy_r_r1725 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1353, CPyStatic_mypy___main___globals);
        goto CPyL1046;
    } else
        goto CPyL1047;
CPyL572: ;
    cpy_r_r1726 = (CPyPtr)&((PyVarObject *)cpy_r__find_occurrences)->ob_size;
    cpy_r_r1727 = *(int64_t *)cpy_r_r1726;
    cpy_r_r1728 = cpy_r_r1727 << 1;
    cpy_r_r1729 = cpy_r_r1728 != 4;
    if (!cpy_r_r1729) goto CPyL575;
    cpy_r_r1730 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1730 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1355, CPyStatic_mypy___main___globals);
        goto CPyL1046;
    }
    CPy_INCREF(cpy_r_r1730);
CPyL574: ;
    cpy_r_r1731 = CPyStatics[3037]; /* ('Can only find occurrences of non-nested class '
                                       'members.') */
    cpy_r_r1732 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1730, cpy_r_r1731);
    CPy_DECREF(cpy_r_r1730);
    if (unlikely(cpy_r_r1732 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1355, CPyStatic_mypy___main___globals);
        goto CPyL1046;
    } else
        goto CPyL1048;
CPyL575: ;
    cpy_r_r1733 = CPyStatic_mypy___main___globals;
    cpy_r_r1734 = CPyStatics[1019]; /* 'state' */
    cpy_r_r1735 = CPyDict_GetItem(cpy_r_r1733, cpy_r_r1734);
    if (unlikely(cpy_r_r1735 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1356, CPyStatic_mypy___main___globals);
        goto CPyL1046;
    }
    cpy_r_r1736 = CPyStatics[1320]; /* 'find_occurrences' */
    cpy_r_r1737 = PyObject_SetAttr(cpy_r_r1735, cpy_r_r1736, cpy_r__find_occurrences);
    CPy_DECREF(cpy_r_r1735);
    CPy_DECREF(cpy_r__find_occurrences);
    cpy_r_r1738 = cpy_r_r1737 >= 0;
    if (unlikely(!cpy_r_r1738)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1356, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL577: ;
    cpy_r_r1739 = CPyModule_builtins;
    cpy_r_r1740 = CPyStatics[3038]; /* 'vars' */
    cpy_r_r1741 = CPyObject_GetAttr(cpy_r_r1739, cpy_r_r1740);
    if (unlikely(cpy_r_r1741 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    PyObject *cpy_r_r1742[1] = {cpy_r_special_opts};
    cpy_r_r1743 = (PyObject **)&cpy_r_r1742;
    cpy_r_r1744 = _PyObject_Vectorcall(cpy_r_r1741, cpy_r_r1743, 1, 0);
    CPy_DECREF(cpy_r_r1741);
    if (unlikely(cpy_r_r1744 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    if (likely(PyDict_Check(cpy_r_r1744)))
        cpy_r_r1745 = cpy_r_r1744;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals, "dict", cpy_r_r1744);
        goto CPyL973;
    }
    cpy_r_r1746 = 0;
    cpy_r_r1747 = PyDict_Size(cpy_r_r1745);
    cpy_r_r1748 = cpy_r_r1747 << 1;
    cpy_r_r1749 = CPyDict_GetItemsIter(cpy_r_r1745);
    if (unlikely(cpy_r_r1749 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals);
        goto CPyL1049;
    }
CPyL581: ;
    cpy_r_r1750 = CPyDict_NextItem(cpy_r_r1749, cpy_r_r1746);
    cpy_r_r1751 = cpy_r_r1750.f1;
    cpy_r_r1746 = cpy_r_r1751;
    cpy_r_r1752 = cpy_r_r1750.f0;
    if (!cpy_r_r1752) goto CPyL1050;
    cpy_r_r1753 = cpy_r_r1750.f2;
    CPy_INCREF(cpy_r_r1753);
    cpy_r_r1754 = cpy_r_r1750.f3;
    CPy_INCREF(cpy_r_r1754);
    CPy_DECREF(cpy_r_r1750.f2);
    CPy_DECREF(cpy_r_r1750.f3);
    if (likely(PyUnicode_Check(cpy_r_r1753)))
        cpy_r_r1755 = cpy_r_r1753;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals, "str", cpy_r_r1753);
        goto CPyL1051;
    }
    cpy_r_flag = cpy_r_r1755;
    cpy_r_val = cpy_r_r1754;
    cpy_r_r1756 = CPyStatics[1509]; /* '_report' */
    cpy_r_r1757 = CPyStr_Endswith(cpy_r_flag, cpy_r_r1756);
    if (!cpy_r_r1757) goto CPyL1052;
    cpy_r_r1758 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1759 = cpy_r_val != cpy_r_r1758;
    if (!cpy_r_r1759) goto CPyL1052;
    cpy_r_r1760 = CPyStr_GetSlice(cpy_r_flag, 0, -14);
    CPy_DECREF(cpy_r_flag);
    if (unlikely(cpy_r_r1760 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1361, CPyStatic_mypy___main___globals);
        goto CPyL1053;
    }
    if (likely(PyUnicode_Check(cpy_r_r1760)))
        cpy_r_r1761 = cpy_r_r1760;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1361, CPyStatic_mypy___main___globals, "str", cpy_r_r1760);
        goto CPyL1053;
    }
    cpy_r_r1762 = CPyStatics[755]; /* '_' */
    cpy_r_r1763 = CPyStatics[1198]; /* '-' */
    cpy_r_r1764 = PyUnicode_Replace(cpy_r_r1761, cpy_r_r1762, cpy_r_r1763, -1);
    CPy_DECREF(cpy_r_r1761);
    if (unlikely(cpy_r_r1764 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1361, CPyStatic_mypy___main___globals);
        goto CPyL1053;
    }
    cpy_r_report_type = cpy_r_r1764;
    cpy_r_report_dir = cpy_r_val;
    cpy_r_r1765 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1765 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1363, CPyStatic_mypy___main___globals);
        goto CPyL1054;
    }
    CPy_INCREF(cpy_r_r1765);
CPyL589: ;
    cpy_r_r1766 = ((mypy___options___OptionsObject *)cpy_r_r1765)->_report_dirs;
    CPy_INCREF(cpy_r_r1766);
    CPy_DECREF(cpy_r_r1765);
    cpy_r_r1767 = CPyDict_SetItem(cpy_r_r1766, cpy_r_report_type, cpy_r_report_dir);
    CPy_DECREF(cpy_r_r1766);
    CPy_DECREF(cpy_r_report_type);
    CPy_DECREF(cpy_r_report_dir);
    cpy_r_r1768 = cpy_r_r1767 >= 0;
    if (unlikely(!cpy_r_r1768)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1363, CPyStatic_mypy___main___globals);
        goto CPyL1055;
    }
CPyL590: ;
    cpy_r_r1769 = CPyDict_CheckSize(cpy_r_r1745, cpy_r_r1748);
    if (unlikely(!cpy_r_r1769)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals);
        goto CPyL1055;
    } else
        goto CPyL581;
CPyL591: ;
    cpy_r_r1770 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r1770)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1359, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1771 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1771 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1366, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1771);
CPyL593: ;
    cpy_r_r1772 = ((mypy___options___OptionsObject *)cpy_r_r1771)->_package_root;
    CPy_INCREF(cpy_r_r1772);
    CPy_DECREF(cpy_r_r1771);
    cpy_r_r1773 = (CPyPtr)&((PyVarObject *)cpy_r_r1772)->ob_size;
    cpy_r_r1774 = *(int64_t *)cpy_r_r1773;
    CPy_DECREF(cpy_r_r1772);
    cpy_r_r1775 = cpy_r_r1774 << 1;
    cpy_r_r1776 = cpy_r_r1775 != 0;
    if (!cpy_r_r1776) goto CPyL597;
    cpy_r_r1777 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1777 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1367, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1777);
CPyL595: ;
    cpy_r_r1778 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1778 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1367, CPyStatic_mypy___main___globals);
        goto CPyL1056;
    }
    CPy_INCREF(cpy_r_r1778);
CPyL596: ;
    cpy_r_r1779 = CPyDef_mypy___main___process_package_roots(cpy_r_fscache, cpy_r_r1777, cpy_r_r1778);
    CPy_DECREF(cpy_r_r1777);
    CPy_DECREF(cpy_r_r1778);
    if (unlikely(cpy_r_r1779 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1367, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL597: ;
    cpy_r_r1780 = CPyStatics[3039]; /* 'cache_map' */
    cpy_r_r1781 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1780);
    if (unlikely(cpy_r_r1781 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1370, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1782 = PyObject_IsTrue(cpy_r_r1781);
    CPy_DECREF(cpy_r_r1781);
    cpy_r_r1783 = cpy_r_r1782 >= 0;
    if (unlikely(!cpy_r_r1783)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1370, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1784 = cpy_r_r1782;
    if (!cpy_r_r1784) goto CPyL607;
    cpy_r_r1785 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1785 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1371, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1785);
CPyL601: ;
    cpy_r_r1786 = ((mypy___options___OptionsObject *)cpy_r_r1785)->_sqlite_cache;
    CPy_DECREF(cpy_r_r1785);
    if (!cpy_r_r1786) goto CPyL604;
CPyL602: ;
    cpy_r_r1787 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1787 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1372, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1787);
CPyL603: ;
    cpy_r_r1788 = CPyStatics[3040]; /* '--cache-map is incompatible with --sqlite-cache' */
    cpy_r_r1789 = CPyDef_mypy___main___CapturableArgumentParser___error(cpy_r_r1787, cpy_r_r1788);
    CPy_DECREF(cpy_r_r1787);
    if (unlikely(cpy_r_r1789 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1372, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1057;
CPyL604: ;
    cpy_r_r1790 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_parser;
    if (unlikely(cpy_r_r1790 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "parser", 1374, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1790);
CPyL605: ;
    cpy_r_r1791 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1791 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1374, CPyStatic_mypy___main___globals);
        goto CPyL1058;
    }
    CPy_INCREF(cpy_r_r1791);
CPyL606: ;
    cpy_r_r1792 = CPyDef_mypy___main___process_cache_map(cpy_r_r1790, cpy_r_special_opts, cpy_r_r1791);
    CPy_DECREF(cpy_r_r1790);
    CPy_DECREF(cpy_r_r1791);
    if (unlikely(cpy_r_r1792 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1374, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL607: ;
    cpy_r_r1793 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1793 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1378, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1793);
CPyL608: ;
    cpy_r_r1794 = ((mypy___options___OptionsObject *)cpy_r_r1793)->_cache_fine_grained;
    CPy_DECREF(cpy_r_r1793);
    if (!cpy_r_r1794) goto CPyL611;
CPyL609: ;
    cpy_r_r1795 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1795 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1379, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1795);
CPyL610: ;
    ((mypy___options___OptionsObject *)cpy_r_r1795)->_local_partial_types = 1;
    CPy_DECREF(cpy_r_r1795);
CPyL611: ;
    cpy_r_r1797 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1797 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1382, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1797);
CPyL612: ;
    cpy_r_r1798 = ((mypy___options___OptionsObject *)cpy_r_r1797)->_show_error_end;
    CPy_DECREF(cpy_r_r1797);
    if (!cpy_r_r1798) goto CPyL615;
CPyL613: ;
    cpy_r_r1799 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1799 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1383, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1799);
CPyL614: ;
    ((mypy___options___OptionsObject *)cpy_r_r1799)->_show_column_numbers = 1;
    CPy_DECREF(cpy_r_r1799);
CPyL615: ;
    cpy_r_r1801 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1801 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1386, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1801);
CPyL616: ;
    cpy_r_r1802 = ((mypy___options___OptionsObject *)cpy_r_r1801)->_logical_deps;
    CPy_DECREF(cpy_r_r1801);
    if (!cpy_r_r1802) goto CPyL619;
CPyL617: ;
    cpy_r_r1803 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1803 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1387, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1803);
CPyL618: ;
    ((mypy___options___OptionsObject *)cpy_r_r1803)->_cache_fine_grained = 1;
    CPy_DECREF(cpy_r_r1803);
CPyL619: ;
    cpy_r_r1805 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1805 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1389, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1805);
CPyL620: ;
    cpy_r_r1806 = ((mypy___options___OptionsObject *)cpy_r_r1805)->_enable_recursive_aliases;
    CPy_DECREF(cpy_r_r1805);
    if (!cpy_r_r1806) goto CPyL623;
CPyL621: ;
    cpy_r_r1807 = CPyStatics[3041]; /* ('Warning: --enable-recursive-aliases is deprecated; '
                                       'recursive types are enabled by default') */
    cpy_r_r1808 = CPyModule_builtins;
    cpy_r_r1809 = CPyStatics[190]; /* 'print' */
    cpy_r_r1810 = CPyObject_GetAttr(cpy_r_r1808, cpy_r_r1809);
    if (unlikely(cpy_r_r1810 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1390, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    PyObject *cpy_r_r1811[1] = {cpy_r_r1807};
    cpy_r_r1812 = (PyObject **)&cpy_r_r1811;
    cpy_r_r1813 = _PyObject_Vectorcall(cpy_r_r1810, cpy_r_r1812, 1, 0);
    CPy_DECREF(cpy_r_r1810);
    if (unlikely(cpy_r_r1813 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1390, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1059;
CPyL623: ;
    cpy_r_r1814 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1814 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1394, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    CPy_INCREF(cpy_r_r1814);
CPyL624: ;
    cpy_r_r1815 = ((mypy___options___OptionsObject *)cpy_r_r1814)->_strict_concatenate;
    CPy_DECREF(cpy_r_r1814);
    if (!cpy_r_r1815) goto CPyL629;
CPyL625: ;
    cpy_r_r1816 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_strict_option_set;
    if (unlikely(cpy_r_r1816 == 2)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "strict_option_set", 1394, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
CPyL626: ;
    if (cpy_r_r1816) goto CPyL629;
CPyL627: ;
    cpy_r_r1817 = CPyStatics[3042]; /* ('Warning: --strict-concatenate is deprecated; use '
                                       '--extra-checks instead') */
    cpy_r_r1818 = CPyModule_builtins;
    cpy_r_r1819 = CPyStatics[190]; /* 'print' */
    cpy_r_r1820 = CPyObject_GetAttr(cpy_r_r1818, cpy_r_r1819);
    if (unlikely(cpy_r_r1820 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1395, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    PyObject *cpy_r_r1821[1] = {cpy_r_r1817};
    cpy_r_r1822 = (PyObject **)&cpy_r_r1821;
    cpy_r_r1823 = _PyObject_Vectorcall(cpy_r_r1820, cpy_r_r1822, 1, 0);
    CPy_DECREF(cpy_r_r1820);
    if (unlikely(cpy_r_r1823 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1395, CPyStatic_mypy___main___globals);
        goto CPyL973;
    } else
        goto CPyL1060;
CPyL629: ;
    cpy_r_r1824 = CPyStatics[635]; /* 'modules' */
    cpy_r_r1825 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1824);
    if (unlikely(cpy_r_r1825 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1398, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1826 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r1827 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1826);
    if (unlikely(cpy_r_r1827 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1398, CPyStatic_mypy___main___globals);
        goto CPyL1061;
    }
    cpy_r_r1828 = PyNumber_Add(cpy_r_r1825, cpy_r_r1827);
    CPy_DECREF(cpy_r_r1825);
    CPy_DECREF(cpy_r_r1827);
    if (unlikely(cpy_r_r1828 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1398, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1829 = PyObject_IsTrue(cpy_r_r1828);
    CPy_DECREF(cpy_r_r1828);
    cpy_r_r1830 = cpy_r_r1829 >= 0;
    if (unlikely(!cpy_r_r1830)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1398, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1831 = cpy_r_r1829;
    if (cpy_r_r1831) {
        goto CPyL1062;
    } else
        goto CPyL692;
CPyL634: ;
    cpy_r_r1832 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1832 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1399, CPyStatic_mypy___main___globals);
        goto CPyL1063;
    }
    CPy_INCREF(cpy_r_r1832);
CPyL635: ;
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_r1832)->_build_type);
    ((mypy___options___OptionsObject *)cpy_r_r1832)->_build_type = 2;
    CPy_DECREF(cpy_r_r1832);
    cpy_r_r1834 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1834 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1400, CPyStatic_mypy___main___globals);
        goto CPyL1063;
    }
    CPy_INCREF(cpy_r_r1834);
CPyL636: ;
    cpy_r_r1835 = ((mypy___options___OptionsObject *)cpy_r_r1834)->_python_executable;
    CPy_INCREF(cpy_r_r1835);
    CPy_DECREF(cpy_r_r1834);
    cpy_r_r1836 = CPyStatic_mypy___main___globals;
    cpy_r_r1837 = CPyStatics[3043]; /* 'get_search_dirs' */
    cpy_r_r1838 = CPyDict_GetItem(cpy_r_r1836, cpy_r_r1837);
    if (unlikely(cpy_r_r1838 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1400, CPyStatic_mypy___main___globals);
        goto CPyL1064;
    }
    PyObject *cpy_r_r1839[1] = {cpy_r_r1835};
    cpy_r_r1840 = (PyObject **)&cpy_r_r1839;
    cpy_r_r1841 = _PyObject_Vectorcall(cpy_r_r1838, cpy_r_r1840, 1, 0);
    CPy_DECREF(cpy_r_r1838);
    if (unlikely(cpy_r_r1841 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1400, CPyStatic_mypy___main___globals);
        goto CPyL1064;
    }
    CPy_DECREF(cpy_r_r1835);
    PyObject *__tmp3163;
    if (unlikely(!(PyTuple_Check(cpy_r_r1841) && PyTuple_GET_SIZE(cpy_r_r1841) == 2))) {
        __tmp3163 = NULL;
        goto __LL3164;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r1841, 0))))
        __tmp3163 = PyTuple_GET_ITEM(cpy_r_r1841, 0);
    else {
        __tmp3163 = NULL;
    }
    if (__tmp3163 == NULL) goto __LL3164;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r1841, 1))))
        __tmp3163 = PyTuple_GET_ITEM(cpy_r_r1841, 1);
    else {
        __tmp3163 = NULL;
    }
    if (__tmp3163 == NULL) goto __LL3164;
    __tmp3163 = cpy_r_r1841;
__LL3164: ;
    if (unlikely(__tmp3163 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_r1841); cpy_r_r1842 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3165 = PyTuple_GET_ITEM(cpy_r_r1841, 0);
        CPy_INCREF(__tmp3165);
        PyObject *__tmp3166;
        if (likely(PyList_Check(__tmp3165)))
            __tmp3166 = __tmp3165;
        else {
            CPy_TypeError("list", __tmp3165); 
            __tmp3166 = NULL;
        }
        cpy_r_r1842.f0 = __tmp3166;
        PyObject *__tmp3167 = PyTuple_GET_ITEM(cpy_r_r1841, 1);
        CPy_INCREF(__tmp3167);
        PyObject *__tmp3168;
        if (likely(PyList_Check(__tmp3167)))
            __tmp3168 = __tmp3167;
        else {
            CPy_TypeError("list", __tmp3167); 
            __tmp3168 = NULL;
        }
        cpy_r_r1842.f1 = __tmp3168;
    }
    CPy_DECREF(cpy_r_r1841);
    if (unlikely(cpy_r_r1842.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1400, CPyStatic_mypy___main___globals);
        goto CPyL1063;
    }
    cpy_r_r1843 = cpy_r_r1842.f0;
    CPy_INCREF(cpy_r_r1843);
    cpy_r_sys_path = cpy_r_r1843;
    cpy_r_r1844 = cpy_r_r1842.f1;
    CPy_INCREF(cpy_r_r1844);
    CPy_DECREF(cpy_r_r1842.f0);
    CPy_DECREF(cpy_r_r1842.f1);
    cpy_r__ = cpy_r_r1844;
    CPy_DECREF(cpy_r__);
    cpy_r_r1845 = CPyModule_os;
    cpy_r_r1846 = CPyStatics[144]; /* 'getcwd' */
    cpy_r_r1847 = CPyObject_GetAttr(cpy_r_r1845, cpy_r_r1846);
    if (unlikely(cpy_r_r1847 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1065;
    }
    cpy_r_r1848 = _PyObject_Vectorcall(cpy_r_r1847, 0, 0, 0);
    CPy_DECREF(cpy_r_r1847);
    if (unlikely(cpy_r_r1848 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1065;
    }
    if (likely(PyUnicode_Check(cpy_r_r1848)))
        cpy_r_r1849 = cpy_r_r1848;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals, "str", cpy_r_r1848);
        goto CPyL1065;
    }
    cpy_r_r1850.f0 = cpy_r_r1849;
    CPy_INCREF(cpy_r_r1850.f0);
    CPy_DECREF(cpy_r_r1849);
    cpy_r_r1851 = CPyDef_modulefinder___mypy_path();
    if (unlikely(cpy_r_r1851 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1066;
    }
    cpy_r_r1852 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1852 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1067;
    }
    CPy_INCREF(cpy_r_r1852);
CPyL644: ;
    cpy_r_r1853 = ((mypy___options___OptionsObject *)cpy_r_r1852)->_mypy_path;
    CPy_INCREF(cpy_r_r1853);
    CPy_DECREF(cpy_r_r1852);
    cpy_r_r1854 = PyNumber_Add(cpy_r_r1851, cpy_r_r1853);
    CPy_DECREF(cpy_r_r1851);
    CPy_DECREF(cpy_r_r1853);
    if (unlikely(cpy_r_r1854 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1066;
    }
    if (likely(PyList_Check(cpy_r_r1854)))
        cpy_r_r1855 = cpy_r_r1854;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals, "list", cpy_r_r1854);
        goto CPyL1066;
    }
    cpy_r_r1856 = PyList_AsTuple(cpy_r_r1855);
    CPy_DECREF(cpy_r_r1855);
    if (unlikely(cpy_r_r1856 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1066;
    }
    cpy_r_r1857 = PyList_AsTuple(cpy_r_sys_path);
    CPy_DECREF(cpy_r_sys_path);
    if (unlikely(cpy_r_r1857 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1402, CPyStatic_mypy___main___globals);
        goto CPyL1068;
    }
    cpy_r_r1858.empty_struct_error_flag = 0;
    cpy_r_r1859 = CPyStatic_mypy___main___globals;
    cpy_r_r1860 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r1861 = CPyDict_GetItem(cpy_r_r1859, cpy_r_r1860);
    if (unlikely(cpy_r_r1861 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1401, CPyStatic_mypy___main___globals);
        goto CPyL1069;
    }
    cpy_r_r1862 = PyTuple_New(1);
    if (unlikely(cpy_r_r1862 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3169 = cpy_r_r1850.f0;
    PyTuple_SET_ITEM(cpy_r_r1862, 0, __tmp3169);
    cpy_r_r1863 = PyTuple_New(0);
    if (unlikely(cpy_r_r1863 == NULL))
        CPyError_OutOfMemory();
    PyObject *cpy_r_r1864[4] = {cpy_r_r1862, cpy_r_r1856, cpy_r_r1857, cpy_r_r1863};
    cpy_r_r1865 = (PyObject **)&cpy_r_r1864;
    cpy_r_r1866 = _PyObject_Vectorcall(cpy_r_r1861, cpy_r_r1865, 4, 0);
    CPy_DECREF(cpy_r_r1861);
    if (unlikely(cpy_r_r1866 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1401, CPyStatic_mypy___main___globals);
        goto CPyL1070;
    }
    CPy_DECREF(cpy_r_r1862);
    CPy_DECREF(cpy_r_r1856);
    CPy_DECREF(cpy_r_r1857);
    CPy_DECREF(cpy_r_r1863);
    if (likely(PyTuple_Check(cpy_r_r1866)))
        cpy_r_r1867 = cpy_r_r1866;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1401, CPyStatic_mypy___main___globals, "tuple", cpy_r_r1866);
        goto CPyL1063;
    }
    cpy_r_search_paths = cpy_r_r1867;
    cpy_r_r1868 = PyList_New(0);
    if (unlikely(cpy_r_r1868 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1404, CPyStatic_mypy___main___globals);
        goto CPyL1071;
    }
    cpy_r_targets = cpy_r_r1868;
    cpy_r_r1869 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1869 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1406, CPyStatic_mypy___main___globals);
        goto CPyL1072;
    }
    CPy_INCREF(cpy_r_r1869);
CPyL653: ;
    cpy_r_r1870 = NULL;
    cpy_r_r1871 = NULL;
    cpy_r_r1872 = CPyDef_modulefinder___FindModuleCache(cpy_r_search_paths, cpy_r_fscache, cpy_r_r1869, cpy_r_r1870, cpy_r_r1871);
    CPy_DECREF(cpy_r_search_paths);
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_r1869);
    if (unlikely(cpy_r_r1872 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1406, CPyStatic_mypy___main___globals);
        goto CPyL1073;
    }
    cpy_r_cache = cpy_r_r1872;
    cpy_r_r1873 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r1874 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1873);
    if (unlikely(cpy_r_r1874 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1407, CPyStatic_mypy___main___globals);
        goto CPyL1074;
    }
    cpy_r_r1875 = PyObject_GetIter(cpy_r_r1874);
    CPy_DECREF(cpy_r_r1874);
    if (unlikely(cpy_r_r1875 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1407, CPyStatic_mypy___main___globals);
        goto CPyL1074;
    }
CPyL656: ;
    cpy_r_r1876 = PyIter_Next(cpy_r_r1875);
    if (cpy_r_r1876 == NULL) goto CPyL1075;
    cpy_r_p = cpy_r_r1876;
    cpy_r_r1877 = CPyModule_os;
    cpy_r_r1878 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r1879 = CPyObject_GetAttr(cpy_r_r1877, cpy_r_r1878);
    if (unlikely(cpy_r_r1879 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    if (likely(PyUnicode_Check(cpy_r_r1879)))
        cpy_r_r1880 = cpy_r_r1879;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals, "str", cpy_r_r1879);
        goto CPyL1076;
    }
    cpy_r_r1881 = PySequence_Contains(cpy_r_p, cpy_r_r1880);
    CPy_DECREF(cpy_r_r1880);
    cpy_r_r1882 = cpy_r_r1881 >= 0;
    if (unlikely(!cpy_r_r1882)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    cpy_r_r1883 = cpy_r_r1881;
    if (cpy_r_r1883) goto CPyL670;
    cpy_r_r1884 = CPyModule_os;
    cpy_r_r1885 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r1886 = CPyObject_GetAttr(cpy_r_r1884, cpy_r_r1885);
    if (unlikely(cpy_r_r1886 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    if (PyUnicode_Check(cpy_r_r1886))
        cpy_r_r1887 = cpy_r_r1886;
    else {
        cpy_r_r1887 = NULL;
    }
    if (cpy_r_r1887 != NULL) goto __LL3170;
    if (cpy_r_r1886 == Py_None)
        cpy_r_r1887 = cpy_r_r1886;
    else {
        cpy_r_r1887 = NULL;
    }
    if (cpy_r_r1887 != NULL) goto __LL3170;
    CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals, "str or None", cpy_r_r1886);
    goto CPyL1076;
__LL3170: ;
    cpy_r_r1888 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1889 = cpy_r_r1887 != cpy_r_r1888;
    if (!cpy_r_r1889) goto CPyL1077;
    if (likely(cpy_r_r1887 != Py_None))
        cpy_r_r1890 = cpy_r_r1887;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals, "str", cpy_r_r1887);
        goto CPyL1076;
    }
    cpy_r_r1891 = CPyStr_IsTrue(cpy_r_r1890);
    CPy_DECREF(cpy_r_r1890);
    if (!cpy_r_r1891) goto CPyL674;
    cpy_r_r1892 = CPyModule_os;
    cpy_r_r1893 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r1894 = CPyObject_GetAttr(cpy_r_r1892, cpy_r_r1893);
    if (unlikely(cpy_r_r1894 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    if (likely(PyUnicode_Check(cpy_r_r1894)))
        cpy_r_r1895 = cpy_r_r1894;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals, "str", cpy_r_r1894);
        goto CPyL1076;
    }
    cpy_r_r1896 = PySequence_Contains(cpy_r_p, cpy_r_r1895);
    CPy_DECREF(cpy_r_r1895);
    cpy_r_r1897 = cpy_r_r1896 >= 0;
    if (unlikely(!cpy_r_r1897)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1408, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    cpy_r_r1898 = cpy_r_r1896;
    if (!cpy_r_r1898) goto CPyL674;
CPyL670: ;
    cpy_r_r1899 = CPyStatics[3044]; /* "Package name '" */
    cpy_r_r1900 = PyObject_Str(cpy_r_p);
    if (unlikely(cpy_r_r1900 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1409, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    cpy_r_r1901 = CPyStatics[3045]; /* "' cannot have a slash in it." */
    cpy_r_r1902 = CPyStr_Build(3, cpy_r_r1899, cpy_r_r1900, cpy_r_r1901);
    CPy_DECREF(cpy_r_r1900);
    if (unlikely(cpy_r_r1902 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1409, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    cpy_r_r1903 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1903 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1409, CPyStatic_mypy___main___globals);
        goto CPyL1078;
    }
    CPy_INCREF(cpy_r_r1903);
CPyL673: ;
    cpy_r_r1904 = CPyDef_mypy___main___fail(cpy_r_r1902, cpy_r_stderr, cpy_r_r1903);
    CPy_DECREF(cpy_r_r1902);
    CPy_DECREF(cpy_r_r1903);
    if (unlikely(cpy_r_r1904 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1409, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    } else
        goto CPyL1079;
CPyL674: ;
    CPy_INCREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_p)))
        cpy_r_r1905 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1410, CPyStatic_mypy___main___globals, "str", cpy_r_p);
        goto CPyL1076;
    }
    cpy_r_r1906 = CPyDef_modulefinder___FindModuleCache___find_modules_recursive(cpy_r_cache, cpy_r_r1905);
    CPy_DECREF(cpy_r_r1905);
    if (unlikely(cpy_r_r1906 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1410, CPyStatic_mypy___main___globals);
        goto CPyL1076;
    }
    cpy_r_p_targets = cpy_r_r1906;
    cpy_r_r1907 = (CPyPtr)&((PyVarObject *)cpy_r_p_targets)->ob_size;
    cpy_r_r1908 = *(int64_t *)cpy_r_r1907;
    cpy_r_r1909 = cpy_r_r1908 << 1;
    cpy_r_r1910 = cpy_r_r1909 != 0;
    if (cpy_r_r1910) goto CPyL1080;
    cpy_r_r1911 = CPyStatics[3046]; /* "Can't find package '" */
    cpy_r_r1912 = PyObject_Str(cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r1912 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1412, CPyStatic_mypy___main___globals);
        goto CPyL1081;
    }
    cpy_r_r1913 = CPyStatics[385]; /* "'" */
    cpy_r_r1914 = CPyStr_Build(3, cpy_r_r1911, cpy_r_r1912, cpy_r_r1913);
    CPy_DECREF(cpy_r_r1912);
    if (unlikely(cpy_r_r1914 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1412, CPyStatic_mypy___main___globals);
        goto CPyL1081;
    }
    cpy_r_r1915 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1915 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1412, CPyStatic_mypy___main___globals);
        goto CPyL1082;
    }
    CPy_INCREF(cpy_r_r1915);
CPyL680: ;
    cpy_r_r1916 = CPyDef_mypy___main___fail(cpy_r_r1914, cpy_r_stderr, cpy_r_r1915);
    CPy_DECREF(cpy_r_r1914);
    CPy_DECREF(cpy_r_r1915);
    if (unlikely(cpy_r_r1916 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1412, CPyStatic_mypy___main___globals);
        goto CPyL1081;
    } else
        goto CPyL1083;
CPyL681: ;
    cpy_r_r1917 = CPyList_Extend(cpy_r_targets, cpy_r_p_targets);
    CPy_DECREF(cpy_r_p_targets);
    if (unlikely(cpy_r_r1917 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1413, CPyStatic_mypy___main___globals);
        goto CPyL1084;
    } else
        goto CPyL1085;
CPyL682: ;
    cpy_r_r1918 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r1918)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1407, CPyStatic_mypy___main___globals);
        goto CPyL1086;
    }
    cpy_r_r1919 = CPyStatics[635]; /* 'modules' */
    cpy_r_r1920 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1919);
    CPy_DECREF(cpy_r_special_opts);
    if (unlikely(cpy_r_r1920 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1414, CPyStatic_mypy___main___globals);
        goto CPyL1087;
    }
    cpy_r_r1921 = PyObject_GetIter(cpy_r_r1920);
    CPy_DECREF(cpy_r_r1920);
    if (unlikely(cpy_r_r1921 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1414, CPyStatic_mypy___main___globals);
        goto CPyL1087;
    }
CPyL685: ;
    cpy_r_r1922 = PyIter_Next(cpy_r_r1921);
    if (cpy_r_r1922 == NULL) goto CPyL1088;
    cpy_r_m = cpy_r_r1922;
    cpy_r_r1923 = Py_None;
    if (PyUnicode_Check(cpy_r_m))
        cpy_r_r1924 = cpy_r_m;
    else {
        cpy_r_r1924 = NULL;
    }
    if (cpy_r_r1924 != NULL) goto __LL3171;
    if (cpy_r_m == Py_None)
        cpy_r_r1924 = cpy_r_m;
    else {
        cpy_r_r1924 = NULL;
    }
    if (cpy_r_r1924 != NULL) goto __LL3171;
    CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1415, CPyStatic_mypy___main___globals, "str or None", cpy_r_m);
    goto CPyL1089;
__LL3171: ;
    cpy_r_r1925 = Py_None;
    cpy_r_r1926 = NULL;
    cpy_r_r1927 = 2;
    cpy_r_r1928 = CPyDef_modulefinder___BuildSource(cpy_r_r1923, cpy_r_r1924, cpy_r_r1925, cpy_r_r1926, cpy_r_r1927);
    CPy_DECREF(cpy_r_r1924);
    if (unlikely(cpy_r_r1928 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1415, CPyStatic_mypy___main___globals);
        goto CPyL1089;
    }
    cpy_r_r1929 = PyList_Append(cpy_r_targets, cpy_r_r1928);
    CPy_DECREF(cpy_r_r1928);
    cpy_r_r1930 = cpy_r_r1929 >= 0;
    if (unlikely(!cpy_r_r1930)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1415, CPyStatic_mypy___main___globals);
        goto CPyL1089;
    } else
        goto CPyL685;
CPyL689: ;
    cpy_r_r1931 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r1931)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1414, CPyStatic_mypy___main___globals);
        goto CPyL1087;
    }
    cpy_r_r1932 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1932 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'process_options_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1932);
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r1932 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1416, CPyStatic_mypy___main___globals);
        goto CPyL1090;
    }
CPyL691: ;
    cpy_r_r1933.f0 = cpy_r_targets;
    cpy_r_r1933.f1 = cpy_r_r1932;
    CPy_INCREF(cpy_r_r1933.f0);
    CPy_INCREF(cpy_r_r1933.f1);
    CPy_DECREF(cpy_r_targets);
    CPy_DECREF(cpy_r_r1932);
    return cpy_r_r1933;
CPyL692: ;
    cpy_r_r1934 = CPyStatics[1748]; /* 'command' */
    cpy_r_r1935 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1934);
    if (unlikely(cpy_r_r1935 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1417, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1936 = PyObject_IsTrue(cpy_r_r1935);
    CPy_DECREF(cpy_r_r1935);
    cpy_r_r1937 = cpy_r_r1936 >= 0;
    if (unlikely(!cpy_r_r1937)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1417, CPyStatic_mypy___main___globals);
        goto CPyL973;
    }
    cpy_r_r1938 = cpy_r_r1936;
    if (cpy_r_r1938) {
        goto CPyL1091;
    } else
        goto CPyL702;
CPyL695: ;
    cpy_r_r1939 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1939 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1418, CPyStatic_mypy___main___globals);
        goto CPyL1092;
    }
    CPy_INCREF(cpy_r_r1939);
CPyL696: ;
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_r1939)->_build_type);
    ((mypy___options___OptionsObject *)cpy_r_r1939)->_build_type = 4;
    CPy_DECREF(cpy_r_r1939);
    cpy_r_r1941 = CPyStatics[189]; /* '\n' */
    cpy_r_r1942 = CPyStatics[1748]; /* 'command' */
    cpy_r_r1943 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1942);
    CPy_DECREF(cpy_r_special_opts);
    if (unlikely(cpy_r_r1943 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1419, CPyStatic_mypy___main___globals);
        goto CPyL1093;
    }
    cpy_r_r1944 = PyUnicode_Join(cpy_r_r1941, cpy_r_r1943);
    CPy_DECREF(cpy_r_r1943);
    if (unlikely(cpy_r_r1944 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1419, CPyStatic_mypy___main___globals);
        goto CPyL1093;
    }
    cpy_r_r1945 = Py_None;
    cpy_r_r1946 = Py_None;
    cpy_r_r1947 = NULL;
    cpy_r_r1948 = 2;
    cpy_r_r1949 = CPyDef_modulefinder___BuildSource(cpy_r_r1945, cpy_r_r1946, cpy_r_r1944, cpy_r_r1947, cpy_r_r1948);
    CPy_DECREF(cpy_r_r1944);
    if (unlikely(cpy_r_r1949 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1419, CPyStatic_mypy___main___globals);
        goto CPyL1093;
    }
    cpy_r_r1950 = PyList_New(1);
    if (unlikely(cpy_r_r1950 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1419, CPyStatic_mypy___main___globals);
        goto CPyL1094;
    }
    cpy_r_r1951 = (CPyPtr)&((PyListObject *)cpy_r_r1950)->ob_item;
    cpy_r_r1952 = *(CPyPtr *)cpy_r_r1951;
    *(PyObject * *)cpy_r_r1952 = cpy_r_r1949;
    cpy_r_targets = cpy_r_r1950;
    cpy_r_r1953 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1953 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'process_options_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1953);
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r1953 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1420, CPyStatic_mypy___main___globals);
        goto CPyL1090;
    }
CPyL701: ;
    cpy_r_r1954.f0 = cpy_r_targets;
    cpy_r_r1954.f1 = cpy_r_r1953;
    CPy_INCREF(cpy_r_r1954.f0);
    CPy_INCREF(cpy_r_r1954.f1);
    CPy_DECREF(cpy_r_targets);
    CPy_DECREF(cpy_r_r1953);
    return cpy_r_r1954;
CPyL702: ;
    cpy_r_r1955 = CPyStatics[608]; /* 'files' */
    cpy_r_r1956 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r1955);
    CPy_DECREF(cpy_r_special_opts);
    if (unlikely(cpy_r_r1956 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1423, CPyStatic_mypy___main___globals);
        goto CPyL1095;
    }
    cpy_r_r1957 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1957 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1423, CPyStatic_mypy___main___globals);
        goto CPyL1096;
    }
    CPy_INCREF(cpy_r_r1957);
CPyL704: ;
    cpy_r_r1958 = 2;
    cpy_r_r1959 = CPyDef_find_sources___create_source_list(cpy_r_r1956, cpy_r_r1957, cpy_r_fscache, cpy_r_r1958);
    CPy_DECREF(cpy_r_r1956);
    CPy_DECREF(cpy_r_r1957);
    CPy_DECREF(cpy_r_fscache);
    if (unlikely(cpy_r_r1959 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1423, CPyStatic_mypy___main___globals);
        goto CPyL706;
    } else
        goto CPyL1097;
CPyL705: ;
    cpy_r_targets = cpy_r_r1959;
    goto CPyL716;
CPyL706: ;
    cpy_r_r1960 = CPy_CatchError();
    cpy_r_r1961 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r1962 = CPy_ExceptionMatches(cpy_r_r1961);
    if (!cpy_r_r1962) goto CPyL1098;
    cpy_r_r1963 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r1963) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r1964 = cpy_r_r1963;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_options", 1427, CPyStatic_mypy___main___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r1963);
        goto CPyL1099;
    }
    cpy_r_e2 = cpy_r_r1964;
    cpy_r_r1965 = PyObject_Str(cpy_r_e2);
    CPy_DecRef(cpy_r_e2);
    if (unlikely(cpy_r_r1965 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1428, CPyStatic_mypy___main___globals);
        goto CPyL1099;
    }
    cpy_r_r1966 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1966 == NULL)) {
        CPy_AttributeError("mypy/main.py", "process_options", "process_options_env", "options", 1428, CPyStatic_mypy___main___globals);
        goto CPyL1100;
    }
    CPy_INCREF(cpy_r_r1966);
CPyL710: ;
    cpy_r_r1967 = CPyDef_mypy___main___fail(cpy_r_r1965, cpy_r_stderr, cpy_r_r1966);
    CPy_DecRef(cpy_r_r1965);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r1966);
    if (unlikely(cpy_r_r1967 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1428, CPyStatic_mypy___main___globals);
        goto CPyL1101;
    } else
        goto CPyL1102;
CPyL711: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL714;
    } else
        goto CPyL1103;
CPyL712: ;
    CPy_Unreachable();
CPyL713: ;
    CPy_RestoreExcInfo(cpy_r_r1960);
    CPy_DecRef(cpy_r_r1960.f0);
    CPy_DecRef(cpy_r_r1960.f1);
    CPy_DecRef(cpy_r_r1960.f2);
    goto CPyL716;
CPyL714: ;
    CPy_RestoreExcInfo(cpy_r_r1960);
    CPy_DecRef(cpy_r_r1960.f0);
    CPy_DecRef(cpy_r_r1960.f1);
    CPy_DecRef(cpy_r_r1960.f2);
    cpy_r_r1968 = CPy_KeepPropagating();
    if (!cpy_r_r1968) goto CPyL721;
    CPy_Unreachable();
CPyL716: ;
    cpy_r_r1969 = ((mypy___main___process_options_envObject *)cpy_r_r6)->_options;
    if (unlikely(cpy_r_r1969 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'process_options_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1969);
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r1969 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1429, CPyStatic_mypy___main___globals);
        goto CPyL1104;
    }
CPyL717: ;
    if (cpy_r_targets == NULL) {
        goto CPyL1105;
    } else
        goto CPyL720;
CPyL718: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"targets\" referenced before assignment");
    cpy_r_r1970 = 0;
    if (unlikely(!cpy_r_r1970)) {
        CPy_AddTraceback("mypy/main.py", "process_options", 1429, CPyStatic_mypy___main___globals);
        goto CPyL721;
    }
    CPy_Unreachable();
CPyL720: ;
    cpy_r_r1971.f0 = cpy_r_targets;
    cpy_r_r1971.f1 = cpy_r_r1969;
    CPy_INCREF(cpy_r_r1971.f0);
    CPy_INCREF(cpy_r_r1971.f1);
    CPy_XDECREF(cpy_r_targets);
    CPy_DECREF(cpy_r_r1969);
    return cpy_r_r1971;
CPyL721: ;
    tuple_T2OO __tmp3172 = { NULL, NULL };
    cpy_r_r1972 = __tmp3172;
    return cpy_r_r1972;
CPyL722: ;
    CPy_INCREF(cpy_r_stdout);
    goto CPyL2;
CPyL723: ;
    CPy_INCREF(cpy_r_stderr);
    goto CPyL4;
CPyL724: ;
    CPy_INCREF(cpy_r_fscache);
    goto CPyL10;
CPyL725: ;
    CPy_INCREF(cpy_r_program);
    goto CPyL12;
CPyL726: ;
    CPy_INCREF(cpy_r_header);
    goto CPyL14;
CPyL727: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_program);
    CPy_DecRef(cpy_r_header);
    CPy_XDecRef(cpy_r_targets);
    goto CPyL721;
CPyL728: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL20;
CPyL729: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_program);
    CPy_DecRef(cpy_r_header);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL730: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_program);
    CPy_DecRef(cpy_r_header);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL731: ;
    CPy_DECREF(cpy_r_stderr);
    goto CPyL27;
CPyL732: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_program);
    CPy_DecRef(cpy_r_header);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL733: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r40);
    goto CPyL721;
CPyL734: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL735: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r49);
    goto CPyL721;
CPyL736: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r52);
    goto CPyL721;
CPyL737: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_general_group);
    goto CPyL721;
CPyL738: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL43;
CPyL739: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL44;
CPyL740: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_general_group);
    CPy_DecRef(cpy_r_compilation_status);
    goto CPyL721;
CPyL741: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_general_group);
    CPy_DecRef(cpy_r_r95);
    goto CPyL721;
CPyL742: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_general_group);
    CPy_DecRef(cpy_r_r99);
    goto CPyL721;
CPyL743: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL55;
CPyL744: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r106);
    goto CPyL721;
CPyL745: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_config_group);
    goto CPyL58;
CPyL746: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_config_group);
    goto CPyL721;
CPyL747: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_config_group);
    CPy_DecRef(cpy_r_r121);
    goto CPyL721;
CPyL748: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL63;
CPyL749: ;
    CPy_DECREF(cpy_r_r135);
    goto CPyL65;
CPyL750: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r136);
    goto CPyL721;
CPyL751: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_imports_group);
    goto CPyL721;
CPyL752: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL69;
CPyL753: ;
    CPy_DECREF(cpy_r_r160);
    goto CPyL70;
CPyL754: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_imports_group);
    CPy_DecRef(cpy_r_r166);
    goto CPyL721;
CPyL755: ;
    CPy_DECREF(cpy_r_r178);
    goto CPyL72;
CPyL756: ;
    CPy_DECREF(cpy_r_r188);
    goto CPyL73;
CPyL757: ;
    CPy_DECREF(cpy_r_r197);
    goto CPyL74;
CPyL758: ;
    CPy_DECREF(cpy_r_r205);
    goto CPyL75;
CPyL759: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r206);
    goto CPyL721;
CPyL760: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    goto CPyL721;
CPyL761: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    CPy_DecRef(cpy_r_r217);
    goto CPyL721;
CPyL762: ;
    CPy_DECREF(cpy_r_r225);
    goto CPyL79;
CPyL763: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    goto CPyL80;
CPyL764: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    CPy_DecRef(cpy_r_r234);
    goto CPyL721;
CPyL765: ;
    CPy_DECREF(cpy_r_r238);
    goto CPyL83;
CPyL766: ;
    CPy_DECREF(cpy_r_r247);
    goto CPyL84;
CPyL767: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    CPy_DecRef(cpy_r_r251);
    goto CPyL721;
CPyL768: ;
    CPy_DECREF(cpy_r_r257);
    goto CPyL86;
CPyL769: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_platform_group);
    CPy_DecRef(cpy_r_r261);
    goto CPyL721;
CPyL770: ;
    CPy_DECREF(cpy_r_r267);
    goto CPyL88;
CPyL771: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r268);
    goto CPyL721;
CPyL772: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_disallow_any_group);
    goto CPyL721;
CPyL773: ;
    CPy_DECREF(cpy_r_r284);
    goto CPyL91;
CPyL774: ;
    CPy_DECREF(cpy_r_r293);
    goto CPyL92;
CPyL775: ;
    CPy_DECREF(cpy_r_r302);
    goto CPyL93;
CPyL776: ;
    CPy_DECREF(cpy_r_r311);
    goto CPyL94;
CPyL777: ;
    CPy_DECREF(cpy_r_r320);
    goto CPyL96;
CPyL778: ;
    CPy_DECREF(cpy_r_r329);
    goto CPyL98;
CPyL779: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r330);
    goto CPyL721;
CPyL780: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_untyped_group);
    goto CPyL721;
CPyL781: ;
    CPy_DECREF(cpy_r_r346);
    goto CPyL102;
CPyL782: ;
    CPy_DECREF(cpy_r_r355);
    goto CPyL104;
CPyL783: ;
    CPy_DECREF(cpy_r_r364);
    goto CPyL106;
CPyL784: ;
    CPy_DECREF(cpy_r_r373);
    goto CPyL108;
CPyL785: ;
    CPy_DECREF(cpy_r_r382);
    goto CPyL110;
CPyL786: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r383);
    goto CPyL721;
CPyL787: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_none_group);
    goto CPyL721;
CPyL788: ;
    CPy_DECREF(cpy_r_r398);
    goto CPyL114;
CPyL789: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_none_group);
    CPy_DecRef(cpy_r_r403);
    goto CPyL721;
CPyL790: ;
    CPy_DECREF(cpy_r_r408);
    goto CPyL116;
CPyL791: ;
    CPy_DECREF(cpy_r_r417);
    goto CPyL117;
CPyL792: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_none_group);
    CPy_DecRef(cpy_r_r421);
    goto CPyL721;
CPyL793: ;
    CPy_DECREF(cpy_r_r427);
    goto CPyL120;
CPyL794: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_none_group);
    CPy_DecRef(cpy_r_r431);
    goto CPyL721;
CPyL795: ;
    CPy_DECREF(cpy_r_r437);
    goto CPyL123;
CPyL796: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r438);
    goto CPyL721;
CPyL797: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_lint_group);
    goto CPyL721;
CPyL798: ;
    CPy_DECREF(cpy_r_r454);
    goto CPyL127;
CPyL799: ;
    CPy_DECREF(cpy_r_r463);
    goto CPyL129;
CPyL800: ;
    CPy_DECREF(cpy_r_r472);
    goto CPyL131;
CPyL801: ;
    CPy_DECREF(cpy_r_r481);
    goto CPyL133;
CPyL802: ;
    CPy_DECREF(cpy_r_r490);
    goto CPyL135;
CPyL803: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r491);
    goto CPyL721;
CPyL804: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_strictness_group);
    goto CPyL721;
CPyL805: ;
    CPy_DECREF(cpy_r_r506);
    goto CPyL139;
CPyL806: ;
    CPy_DECREF(cpy_r_r515);
    goto CPyL141;
CPyL807: ;
    CPy_DECREF(cpy_r_r525);
    goto CPyL143;
CPyL808: ;
    CPy_DECREF(cpy_r_r534);
    goto CPyL145;
CPyL809: ;
    CPy_DECREF(cpy_r_r543);
    goto CPyL147;
CPyL810: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_strictness_group);
    CPy_DecRef(cpy_r_strict_help);
    goto CPyL721;
CPyL811: ;
    CPy_DECREF(cpy_r_r556);
    goto CPyL151;
CPyL812: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_strictness_group);
    CPy_DecRef(cpy_r_r560);
    goto CPyL721;
CPyL813: ;
    CPy_DECREF(cpy_r_r566);
    goto CPyL153;
CPyL814: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_strictness_group);
    CPy_DecRef(cpy_r_r570);
    goto CPyL721;
CPyL815: ;
    CPy_DECREF(cpy_r_r576);
    goto CPyL155;
CPyL816: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r577);
    goto CPyL721;
CPyL817: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_error_group);
    goto CPyL721;
CPyL818: ;
    CPy_DECREF(cpy_r_r593);
    goto CPyL159;
CPyL819: ;
    CPy_DECREF(cpy_r_r601);
    goto CPyL161;
CPyL820: ;
    CPy_DECREF(cpy_r_r609);
    goto CPyL163;
CPyL821: ;
    CPy_DECREF(cpy_r_r617);
    goto CPyL165;
CPyL822: ;
    CPy_DECREF(cpy_r_r625);
    goto CPyL167;
CPyL823: ;
    CPy_DECREF(cpy_r_r633);
    goto CPyL169;
CPyL824: ;
    CPy_DECREF(cpy_r_r642);
    goto CPyL171;
CPyL825: ;
    CPy_DECREF(cpy_r_r651);
    goto CPyL173;
CPyL826: ;
    CPy_DECREF(cpy_r_r659);
    goto CPyL175;
CPyL827: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_error_group);
    CPy_DecRef(cpy_r_r665);
    goto CPyL721;
CPyL828: ;
    CPy_DECREF(cpy_r_r671);
    goto CPyL177;
CPyL829: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r672);
    goto CPyL721;
CPyL830: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_incremental_group);
    goto CPyL721;
CPyL831: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_incremental_group);
    CPy_DecRef(cpy_r_r685);
    goto CPyL721;
CPyL832: ;
    CPy_DECREF(cpy_r_r690);
    goto CPyL181;
CPyL833: ;
    CPy_DECREF(cpy_r_r699);
    goto CPyL182;
CPyL834: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_incremental_group);
    CPy_DecRef(cpy_r_r706);
    goto CPyL721;
CPyL835: ;
    CPy_DECREF(cpy_r_r711);
    goto CPyL184;
CPyL836: ;
    CPy_DECREF(cpy_r_r719);
    goto CPyL186;
CPyL837: ;
    CPy_DECREF(cpy_r_r727);
    goto CPyL187;
CPyL838: ;
    CPy_DECREF(cpy_r_r735);
    goto CPyL188;
CPyL839: ;
    CPy_DECREF(cpy_r_r743);
    goto CPyL189;
CPyL840: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r744);
    goto CPyL721;
CPyL841: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    goto CPyL721;
CPyL842: ;
    CPy_DECREF(cpy_r_r759);
    goto CPyL192;
CPyL843: ;
    CPy_DECREF(cpy_r_r768);
    goto CPyL193;
CPyL844: ;
    CPy_DECREF(cpy_r_r776);
    goto CPyL194;
CPyL845: ;
    CPy_DECREF(cpy_r_r785);
    goto CPyL195;
CPyL846: ;
    CPy_DECREF(cpy_r_r793);
    goto CPyL196;
CPyL847: ;
    CPy_DECREF(cpy_r_r801);
    goto CPyL197;
CPyL848: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r806);
    goto CPyL721;
CPyL849: ;
    CPy_DECREF(cpy_r_r811);
    goto CPyL199;
CPyL850: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r812);
    goto CPyL721;
CPyL851: ;
    CPy_DECREF(cpy_r_r821);
    goto CPyL201;
CPyL852: ;
    CPy_DECREF(cpy_r_r829);
    goto CPyL202;
CPyL853: ;
    CPy_DECREF(cpy_r_r837);
    goto CPyL204;
CPyL854: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r847);
    goto CPyL721;
CPyL855: ;
    CPy_DECREF(cpy_r_r851);
    goto CPyL205;
CPyL856: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r856);
    goto CPyL721;
CPyL857: ;
    CPy_DECREF(cpy_r_r861);
    goto CPyL207;
CPyL858: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r867);
    goto CPyL721;
CPyL859: ;
    CPy_DECREF(cpy_r_r872);
    goto CPyL209;
CPyL860: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r876);
    goto CPyL721;
CPyL861: ;
    CPy_DECREF(cpy_r_r882);
    goto CPyL212;
CPyL862: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_internals_group);
    CPy_DecRef(cpy_r_r887);
    goto CPyL721;
CPyL863: ;
    CPy_DECREF(cpy_r_r892);
    goto CPyL214;
CPyL864: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r893);
    goto CPyL721;
CPyL865: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    goto CPyL217;
CPyL866: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    goto CPyL721;
CPyL867: ;
    CPy_DECREF(cpy_r_report_group);
    CPy_DECREF(cpy_r_r909);
    goto CPyL233;
CPyL868: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    CPy_DecRef(cpy_r_r909);
    goto CPyL721;
CPyL869: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    CPy_DecRef(cpy_r_r909);
    CPy_DecRef(cpy_r_report_type);
    goto CPyL721;
CPyL870: ;
    CPy_DECREF(cpy_r_report_type);
    goto CPyL232;
CPyL871: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    CPy_DecRef(cpy_r_r909);
    CPy_DecRef(cpy_r_r927);
    goto CPyL721;
CPyL872: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_group);
    CPy_DecRef(cpy_r_r909);
    CPy_DecRef(cpy_r_r927);
    CPy_DecRef(cpy_r_r931);
    goto CPyL721;
CPyL873: ;
    CPy_DECREF(cpy_r_r936);
    goto CPyL231;
CPyL874: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r938);
    goto CPyL721;
CPyL875: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_other_group);
    goto CPyL721;
CPyL876: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_other_group);
    CPy_DecRef(cpy_r_r948);
    goto CPyL721;
CPyL877: ;
    CPy_DECREF(cpy_r_r953);
    goto CPyL237;
CPyL878: ;
    CPy_DECREF(cpy_r_r960);
    goto CPyL238;
CPyL879: ;
    CPy_DECREF(cpy_r_r969);
    goto CPyL239;
CPyL880: ;
    CPy_DECREF(cpy_r_r977);
    goto CPyL240;
CPyL881: ;
    CPy_DECREF(cpy_r_r986);
    goto CPyL242;
CPyL882: ;
    CPy_DECREF(cpy_r_r996);
    goto CPyL244;
CPyL883: ;
    CPy_DECREF(cpy_r_other_group);
    goto CPyL248;
CPyL884: ;
    CPy_DECREF(cpy_r_r1005);
    goto CPyL246;
CPyL885: ;
    CPy_DECREF(cpy_r_r1013);
    goto CPyL247;
CPyL886: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1014);
    goto CPyL721;
CPyL887: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1014);
    CPy_DecRef(cpy_r_r1020);
    goto CPyL721;
CPyL888: ;
    CPy_DECREF(cpy_r_r1025);
    goto CPyL251;
CPyL889: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1026);
    goto CPyL721;
CPyL890: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1026);
    CPy_DecRef(cpy_r_r1032);
    goto CPyL721;
CPyL891: ;
    CPy_DECREF(cpy_r_r1037);
    goto CPyL254;
CPyL892: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1038);
    goto CPyL721;
CPyL893: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1038);
    CPy_DecRef(cpy_r_r1043);
    goto CPyL721;
CPyL894: ;
    CPy_DECREF(cpy_r_r1048);
    goto CPyL257;
CPyL895: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1049);
    goto CPyL721;
CPyL896: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1049);
    CPy_DecRef(cpy_r_r1054);
    goto CPyL721;
CPyL897: ;
    CPy_DECREF(cpy_r_r1059);
    goto CPyL260;
CPyL898: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1060);
    goto CPyL721;
CPyL899: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1060);
    CPy_DecRef(cpy_r_r1065);
    goto CPyL721;
CPyL900: ;
    CPy_DECREF(cpy_r_r1070);
    goto CPyL263;
CPyL901: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1071);
    goto CPyL721;
CPyL902: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1071);
    CPy_DecRef(cpy_r_r1076);
    goto CPyL721;
CPyL903: ;
    CPy_DECREF(cpy_r_r1081);
    goto CPyL266;
CPyL904: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1082);
    goto CPyL721;
CPyL905: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1082);
    CPy_DecRef(cpy_r_r1087);
    goto CPyL721;
CPyL906: ;
    CPy_DECREF(cpy_r_r1092);
    goto CPyL269;
CPyL907: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1093);
    goto CPyL721;
CPyL908: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1093);
    CPy_DecRef(cpy_r_r1098);
    goto CPyL721;
CPyL909: ;
    CPy_DECREF(cpy_r_r1103);
    goto CPyL272;
CPyL910: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1104);
    goto CPyL721;
CPyL911: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1104);
    CPy_DecRef(cpy_r_r1109);
    goto CPyL721;
CPyL912: ;
    CPy_DECREF(cpy_r_r1114);
    goto CPyL275;
CPyL913: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1115);
    goto CPyL721;
CPyL914: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1115);
    CPy_DecRef(cpy_r_r1120);
    goto CPyL721;
CPyL915: ;
    CPy_DECREF(cpy_r_r1125);
    goto CPyL278;
CPyL916: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1126);
    goto CPyL721;
CPyL917: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1126);
    CPy_DecRef(cpy_r_r1131);
    goto CPyL721;
CPyL918: ;
    CPy_DECREF(cpy_r_r1136);
    goto CPyL281;
CPyL919: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1137);
    goto CPyL721;
CPyL920: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1137);
    CPy_DecRef(cpy_r_r1142);
    goto CPyL721;
CPyL921: ;
    CPy_DECREF(cpy_r_r1147);
    goto CPyL284;
CPyL922: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1148);
    goto CPyL721;
CPyL923: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1148);
    CPy_DecRef(cpy_r_r1152);
    goto CPyL721;
CPyL924: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1148);
    CPy_DecRef(cpy_r_r1152);
    CPy_DecRef(cpy_r_r1155);
    goto CPyL721;
CPyL925: ;
    CPy_DECREF(cpy_r_r1160);
    goto CPyL288;
CPyL926: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1161);
    goto CPyL721;
CPyL927: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1161);
    CPy_DecRef(cpy_r_r1167);
    goto CPyL721;
CPyL928: ;
    CPy_DECREF(cpy_r_r1172);
    goto CPyL291;
CPyL929: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1173);
    goto CPyL721;
CPyL930: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1173);
    CPy_DecRef(cpy_r_r1178);
    goto CPyL721;
CPyL931: ;
    CPy_DECREF(cpy_r_r1183);
    goto CPyL294;
CPyL932: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1184);
    goto CPyL721;
CPyL933: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1184);
    CPy_DecRef(cpy_r_r1189);
    goto CPyL721;
CPyL934: ;
    CPy_DECREF(cpy_r_r1194);
    goto CPyL297;
CPyL935: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1195);
    goto CPyL721;
CPyL936: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1195);
    CPy_DecRef(cpy_r_r1200);
    goto CPyL721;
CPyL937: ;
    CPy_DECREF(cpy_r_r1205);
    goto CPyL300;
CPyL938: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1206);
    goto CPyL721;
CPyL939: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1206);
    CPy_DecRef(cpy_r_r1211);
    goto CPyL721;
CPyL940: ;
    CPy_DECREF(cpy_r_r1216);
    goto CPyL303;
CPyL941: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1217);
    goto CPyL721;
CPyL942: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1217);
    CPy_DecRef(cpy_r_r1222);
    goto CPyL721;
CPyL943: ;
    CPy_DECREF(cpy_r_r1227);
    goto CPyL306;
CPyL944: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1228);
    goto CPyL721;
CPyL945: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_code_group);
    goto CPyL721;
CPyL946: ;
    CPy_DECREF(cpy_r_r1243);
    goto CPyL310;
CPyL947: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_code_group);
    CPy_DecRef(cpy_r_r1247);
    goto CPyL721;
CPyL948: ;
    CPy_DECREF(cpy_r_r1253);
    goto CPyL313;
CPyL949: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_code_group);
    CPy_DecRef(cpy_r_r1257);
    goto CPyL721;
CPyL950: ;
    CPy_DECREF(cpy_r_r1263);
    goto CPyL315;
CPyL951: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_code_group);
    CPy_DecRef(cpy_r_r1268);
    goto CPyL721;
CPyL952: ;
    CPy_DECREF(cpy_r_r1275);
    goto CPyL317;
CPyL953: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_code_group);
    CPy_DecRef(cpy_r_r1280);
    goto CPyL721;
CPyL954: ;
    CPy_DECREF(cpy_r_r1287);
    goto CPyL319;
CPyL955: ;
    CPy_DECREF(cpy_r_r1298);
    goto CPyL320;
CPyL956: ;
    CPy_DECREF(cpy_r_r1307);
    goto CPyL321;
CPyL957: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    goto CPyL721;
CPyL958: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_r1312);
    goto CPyL721;
CPyL959: ;
    CPy_DECREF(cpy_r_r1316);
    goto CPyL325;
CPyL960: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_config_file);
    goto CPyL721;
CPyL961: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r1331);
    goto CPyL721;
CPyL962: ;
    CPy_DECREF(cpy_r_r1336);
    goto CPyL337;
CPyL963: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r1340);
    goto CPyL721;
CPyL964: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r1343);
    goto CPyL721;
CPyL965: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    CPy_DecRef(cpy_r_r1343);
    CPy_DecRef(cpy_r_r1344);
    goto CPyL721;
CPyL966: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dummy);
    goto CPyL721;
CPyL967: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL968: ;
    CPy_DECREF(cpy_r_r1353);
    goto CPyL352;
CPyL969: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_environ_cache_dir);
    goto CPyL721;
CPyL970: ;
    CPy_DECREF(cpy_r_environ_cache_dir);
    goto CPyL360;
CPyL971: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1372);
    goto CPyL721;
CPyL972: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1381);
    goto CPyL721;
CPyL973: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL721;
CPyL974: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1388);
    goto CPyL721;
CPyL975: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1388);
    CPy_DecRef(cpy_r_r1389);
    goto CPyL721;
CPyL976: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1388);
    CPy_DecRef(cpy_r_r1396);
    goto CPyL721;
CPyL977: ;
    CPy_DECREF(cpy_r_r1400);
    goto CPyL373;
CPyL978: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1402);
    goto CPyL721;
CPyL979: ;
    CPy_DECREF(cpy_r_r1402);
    goto CPyL377;
CPyL980: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1406);
    goto CPyL721;
CPyL981: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1410);
    goto CPyL721;
CPyL982: ;
    CPy_DECREF(cpy_r_r1424);
    goto CPyL387;
CPyL983: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL394;
CPyL984: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL397;
CPyL985: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_e);
    goto CPyL397;
CPyL986: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1432);
    goto CPyL397;
CPyL987: ;
    CPy_DecRef(cpy_r_r1434);
    goto CPyL396;
CPyL988: ;
    CPy_DecRef(cpy_r_r1427.f0);
    CPy_DecRef(cpy_r_r1427.f1);
    CPy_DecRef(cpy_r_r1427.f2);
    goto CPyL395;
CPyL989: ;
    CPy_DECREF(cpy_r_r1462);
    goto CPyL422;
CPyL990: ;
    CPy_DECREF(cpy_r_r1477);
    goto CPyL429;
CPyL991: ;
    CPy_DECREF(cpy_r_r1492);
    goto CPyL436;
CPyL992: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    goto CPyL721;
CPyL993: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    CPy_DecRef(cpy_r_r1508);
    goto CPyL721;
CPyL994: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    CPy_DecRef(cpy_r_r1511);
    goto CPyL721;
CPyL995: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    CPy_DecRef(cpy_r_r1511);
    CPy_DecRef(cpy_r_r1513);
    goto CPyL721;
CPyL996: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    CPy_DecRef(cpy_r_r1511);
    CPy_DecRef(cpy_r_r1513);
    CPy_DecRef(cpy_r_r1515);
    goto CPyL721;
CPyL997: ;
    CPy_DECREF(cpy_r_r1516);
    goto CPyL448;
CPyL998: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_r1506);
    CPy_DecRef(cpy_r_r1516);
    goto CPyL721;
CPyL999: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPyTagged_DecRef(cpy_r_code_methods);
    goto CPyL721;
CPyL1000: ;
    CPyTagged_DECREF(cpy_r_code_methods);
    goto CPyL451;
CPyL1001: ;
    CPy_DECREF(cpy_r_r1539);
    goto CPyL458;
CPyL1002: ;
    CPy_DECREF(cpy_r_r1546);
    goto CPyL458;
CPyL1003: ;
    CPy_DECREF(cpy_r_r1553);
    goto CPyL464;
CPyL1004: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1556);
    goto CPyL721;
CPyL1005: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_overlap);
    goto CPyL721;
CPyL1006: ;
    CPy_DECREF(cpy_r_overlap);
    goto CPyL479;
CPyL1007: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_overlap);
    CPy_DecRef(cpy_r_r1565);
    goto CPyL721;
CPyL1008: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1565);
    goto CPyL721;
CPyL1009: ;
    CPy_DECREF(cpy_r_r1578);
    goto CPyL479;
CPyL1010: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    goto CPyL721;
CPyL1011: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    goto CPyL721;
CPyL1012: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_valid_error_codes);
    goto CPyL721;
CPyL1013: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_invalid_codes);
    goto CPyL721;
CPyL1014: ;
    CPy_DECREF(cpy_r_invalid_codes);
    goto CPyL500;
CPyL1015: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_invalid_codes);
    CPy_DecRef(cpy_r_r1598);
    goto CPyL721;
CPyL1016: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1598);
    goto CPyL721;
CPyL1017: ;
    CPy_DECREF(cpy_r_r1610);
    goto CPyL500;
CPyL1018: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_disabled_codes);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1611);
    CPy_DecRef(cpy_r_r1612);
    goto CPyL721;
CPyL1019: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1611);
    CPy_DecRef(cpy_r_r1612);
    CPy_DecRef(cpy_r_r1613);
    goto CPyL721;
CPyL1020: ;
    CPy_DECREF(cpy_r_r1614);
    goto CPyL510;
CPyL1021: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1611);
    CPy_DecRef(cpy_r_r1612);
    CPy_DecRef(cpy_r_r1613);
    CPy_DecRef(cpy_r_r1614);
    goto CPyL721;
CPyL1022: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1611);
    CPy_DecRef(cpy_r_r1612);
    CPy_DecRef(cpy_r_r1613);
    CPy_DecRef(cpy_r_r1614);
    CPy_DecRef(cpy_r_code);
    goto CPyL721;
CPyL1023: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1611);
    goto CPyL721;
CPyL1024: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    goto CPyL721;
CPyL1025: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_enabled_codes);
    CPy_DecRef(cpy_r_r1629);
    CPy_DecRef(cpy_r_r1630);
    goto CPyL721;
CPyL1026: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1629);
    CPy_DecRef(cpy_r_r1630);
    CPy_DecRef(cpy_r_r1631);
    goto CPyL721;
CPyL1027: ;
    CPy_DECREF(cpy_r_r1632);
    goto CPyL523;
CPyL1028: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1629);
    CPy_DecRef(cpy_r_r1630);
    CPy_DecRef(cpy_r_r1631);
    CPy_DecRef(cpy_r_r1632);
    goto CPyL721;
CPyL1029: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1629);
    CPy_DecRef(cpy_r_r1630);
    CPy_DecRef(cpy_r_r1631);
    CPy_DecRef(cpy_r_r1632);
    CPy_DecRef(cpy_r_code_2);
    goto CPyL721;
CPyL1030: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1629);
    goto CPyL721;
CPyL1031: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1647);
    CPy_DecRef(cpy_r_r1648);
    goto CPyL721;
CPyL1032: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1647);
    goto CPyL721;
CPyL1033: ;
    CPy_DECREF(cpy_r_r1655);
    goto CPyL543;
CPyL1034: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1655);
    goto CPyL721;
CPyL1035: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1655);
    CPy_DecRef(cpy_r_feature);
    goto CPyL535;
CPyL1036: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1655);
    CPy_DecRef(cpy_r_feature);
    goto CPyL721;
CPyL1037: ;
    CPy_DECREF(cpy_r_feature);
    goto CPyL542;
CPyL1038: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1655);
    CPy_DecRef(cpy_r_r1669);
    goto CPyL721;
CPyL1039: ;
    CPy_DECREF(cpy_r_r1672);
    goto CPyL542;
CPyL1040: ;
    CPy_DECREF(cpy_r_r1682);
    goto CPyL547;
CPyL1041: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL548;
CPyL1042: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1685);
    goto CPyL721;
CPyL1043: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1694);
    goto CPyL721;
CPyL1044: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1703);
    goto CPyL721;
CPyL1045: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1712);
    goto CPyL721;
CPyL1046: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r__find_occurrences);
    goto CPyL721;
CPyL1047: ;
    CPy_DECREF(cpy_r_r1725);
    goto CPyL572;
CPyL1048: ;
    CPy_DECREF(cpy_r_r1732);
    goto CPyL575;
CPyL1049: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1745);
    goto CPyL721;
CPyL1050: ;
    CPy_DECREF(cpy_r_r1745);
    CPy_DECREF(cpy_r_r1749);
    CPy_DECREF(cpy_r_r1750.f2);
    CPy_DECREF(cpy_r_r1750.f3);
    goto CPyL591;
CPyL1051: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1745);
    CPy_DecRef(cpy_r_r1749);
    CPy_DecRef(cpy_r_r1754);
    goto CPyL721;
CPyL1052: ;
    CPy_DECREF(cpy_r_flag);
    CPy_DECREF(cpy_r_val);
    goto CPyL590;
CPyL1053: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1745);
    CPy_DecRef(cpy_r_r1749);
    CPy_DecRef(cpy_r_val);
    goto CPyL721;
CPyL1054: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_report_type);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1745);
    CPy_DecRef(cpy_r_r1749);
    CPy_DecRef(cpy_r_report_dir);
    goto CPyL721;
CPyL1055: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1745);
    CPy_DecRef(cpy_r_r1749);
    goto CPyL721;
CPyL1056: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1777);
    goto CPyL721;
CPyL1057: ;
    CPy_DECREF(cpy_r_r1789);
    goto CPyL604;
CPyL1058: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1790);
    goto CPyL721;
CPyL1059: ;
    CPy_DECREF(cpy_r_r1813);
    goto CPyL623;
CPyL1060: ;
    CPy_DECREF(cpy_r_r1823);
    goto CPyL629;
CPyL1061: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1825);
    goto CPyL721;
CPyL1062: ;
    CPy_XDECREF(cpy_r_targets);
    goto CPyL634;
CPyL1063: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL721;
CPyL1064: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1835);
    goto CPyL721;
CPyL1065: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_sys_path);
    goto CPyL721;
CPyL1066: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_r1850.f0);
    goto CPyL721;
CPyL1067: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_r1850.f0);
    CPy_DecRef(cpy_r_r1851);
    goto CPyL721;
CPyL1068: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1850.f0);
    CPy_DecRef(cpy_r_r1856);
    goto CPyL721;
CPyL1069: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1850.f0);
    CPy_DecRef(cpy_r_r1856);
    CPy_DecRef(cpy_r_r1857);
    goto CPyL721;
CPyL1070: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_r1856);
    CPy_DecRef(cpy_r_r1857);
    CPy_DecRef(cpy_r_r1862);
    CPy_DecRef(cpy_r_r1863);
    goto CPyL721;
CPyL1071: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_search_paths);
    goto CPyL721;
CPyL1072: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_search_paths);
    goto CPyL721;
CPyL1073: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL721;
CPyL1074: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    goto CPyL721;
CPyL1075: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_cache);
    CPy_DECREF(cpy_r_r1875);
    goto CPyL682;
CPyL1076: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r1875);
    CPy_DecRef(cpy_r_p);
    goto CPyL721;
CPyL1077: ;
    CPy_DECREF(cpy_r_r1887);
    goto CPyL674;
CPyL1078: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r1875);
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r1902);
    goto CPyL721;
CPyL1079: ;
    CPy_DECREF(cpy_r_r1904);
    goto CPyL674;
CPyL1080: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL681;
CPyL1081: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r1875);
    CPy_DecRef(cpy_r_p_targets);
    goto CPyL721;
CPyL1082: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r1875);
    CPy_DecRef(cpy_r_p_targets);
    CPy_DecRef(cpy_r_r1914);
    goto CPyL721;
CPyL1083: ;
    CPy_DECREF(cpy_r_r1916);
    goto CPyL681;
CPyL1084: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    CPy_DecRef(cpy_r_cache);
    CPy_DecRef(cpy_r_r1875);
    goto CPyL721;
CPyL1085: ;
    CPy_DECREF(cpy_r_r1917);
    goto CPyL656;
CPyL1086: ;
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL721;
CPyL1087: ;
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL1088: ;
    CPy_DECREF(cpy_r_r1921);
    goto CPyL689;
CPyL1089: ;
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1921);
    goto CPyL721;
CPyL1090: ;
    CPy_DecRef(cpy_r_targets);
    goto CPyL721;
CPyL1091: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_fscache);
    CPy_XDECREF(cpy_r_targets);
    goto CPyL695;
CPyL1092: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_special_opts);
    goto CPyL721;
CPyL1093: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL721;
CPyL1094: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1949);
    goto CPyL721;
CPyL1095: ;
    CPy_DecRef(cpy_r_fscache);
    goto CPyL706;
CPyL1096: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_r1956);
    goto CPyL706;
CPyL1097: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_targets);
    goto CPyL705;
CPyL1098: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL711;
CPyL1099: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL714;
CPyL1100: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r1965);
    goto CPyL714;
CPyL1101: ;
    CPy_XDecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r6);
    goto CPyL714;
CPyL1102: ;
    CPy_DecRef(cpy_r_r1967);
    goto CPyL713;
CPyL1103: ;
    CPy_DecRef(cpy_r_r1960.f0);
    CPy_DecRef(cpy_r_r1960.f1);
    CPy_DecRef(cpy_r_r1960.f2);
    goto CPyL712;
CPyL1104: ;
    CPy_XDecRef(cpy_r_targets);
    goto CPyL721;
CPyL1105: ;
    CPy_DECREF(cpy_r_r1969);
    goto CPyL718;
}

PyObject *CPyPy_mypy___main___process_options(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "stdout", "stderr", "require_targets", "server_options", "fscache", "program", "header", 0};
    static CPyArg_Parser parser = {"O|OOOOOOO:process_options", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_stdout = NULL;
    PyObject *obj_stderr = NULL;
    PyObject *obj_require_targets = NULL;
    PyObject *obj_server_options = NULL;
    PyObject *obj_fscache = NULL;
    PyObject *obj_program = NULL;
    PyObject *obj_header = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_stdout, &obj_stderr, &obj_require_targets, &obj_server_options, &obj_fscache, &obj_program, &obj_header)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_stdout;
    if (obj_stdout == NULL) {
        arg_stdout = NULL;
        goto __LL3173;
    }
    arg_stdout = obj_stdout;
    if (arg_stdout != NULL) goto __LL3173;
    if (obj_stdout == Py_None)
        arg_stdout = obj_stdout;
    else {
        arg_stdout = NULL;
    }
    if (arg_stdout != NULL) goto __LL3173;
    CPy_TypeError("object or None", obj_stdout); 
    goto fail;
__LL3173: ;
    PyObject *arg_stderr;
    if (obj_stderr == NULL) {
        arg_stderr = NULL;
        goto __LL3174;
    }
    arg_stderr = obj_stderr;
    if (arg_stderr != NULL) goto __LL3174;
    if (obj_stderr == Py_None)
        arg_stderr = obj_stderr;
    else {
        arg_stderr = NULL;
    }
    if (arg_stderr != NULL) goto __LL3174;
    CPy_TypeError("object or None", obj_stderr); 
    goto fail;
__LL3174: ;
    char arg_require_targets;
    if (obj_require_targets == NULL) {
        arg_require_targets = 2;
    } else if (unlikely(!PyBool_Check(obj_require_targets))) {
        CPy_TypeError("bool", obj_require_targets); goto fail;
    } else
        arg_require_targets = obj_require_targets == Py_True;
    char arg_server_options;
    if (obj_server_options == NULL) {
        arg_server_options = 2;
    } else if (unlikely(!PyBool_Check(obj_server_options))) {
        CPy_TypeError("bool", obj_server_options); goto fail;
    } else
        arg_server_options = obj_server_options == Py_True;
    PyObject *arg_fscache;
    if (obj_fscache == NULL) {
        arg_fscache = NULL;
        goto __LL3175;
    }
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3175;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3175;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL3175: ;
    PyObject *arg_program;
    if (obj_program == NULL) {
        arg_program = NULL;
    } else if (likely(PyUnicode_Check(obj_program)))
        arg_program = obj_program;
    else {
        CPy_TypeError("str", obj_program); 
        goto fail;
    }
    PyObject *arg_header;
    if (obj_header == NULL) {
        arg_header = NULL;
    } else if (likely(PyUnicode_Check(obj_header)))
        arg_header = obj_header;
    else {
        CPy_TypeError("str", obj_header); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_mypy___main___process_options(arg_args, arg_stdout, arg_stderr, arg_require_targets, arg_server_options, arg_fscache, arg_program, arg_header);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3176 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3176);
    PyObject *__tmp3177 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3177);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "process_options", 430, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___process_package_roots(PyObject *cpy_r_fscache, PyObject *cpy_r_parser, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_current_drive;
    PyObject *cpy_r_r26;
    PyObject *cpy_r__;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_dot;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_dotslash;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_dotdotslash;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_trivial_paths;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_package_root;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_root;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    tuple_T2OO cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_drive;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    CPyPtr cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
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
    PyObject *cpy_r_r157;
    CPyPtr cpy_r_r158;
    CPyPtr cpy_r_r159;
    CPyPtr cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject **cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    CPyTagged cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_fscache == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyStatics[3047]; /* '--package-root does not work here (no fscache)' */
    cpy_r_r3 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r4[2] = {cpy_r_parser, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1437, CPyStatic_mypy___main___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL2: ;
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r7 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1438, CPyStatic_mypy___main___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL86;
    }
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    if (cpy_r_r9) goto CPyL6;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1438, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyModule_os;
    cpy_r_r12 = CPyStatics[144]; /* 'getcwd' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r13, 0, 0, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals, "str", cpy_r_r14);
        goto CPyL86;
    }
    cpy_r_r16 = CPyModule_os;
    cpy_r_r17 = CPyStatics[142]; /* 'path' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL88;
    }
    cpy_r_r19 = CPyStatics[2577]; /* 'splitdrive' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r15};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r15);
    PyObject *__tmp3178;
    if (unlikely(!(PyTuple_Check(cpy_r_r23) && PyTuple_GET_SIZE(cpy_r_r23) == 2))) {
        __tmp3178 = NULL;
        goto __LL3179;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r23, 0))))
        __tmp3178 = PyTuple_GET_ITEM(cpy_r_r23, 0);
    else {
        __tmp3178 = NULL;
    }
    if (__tmp3178 == NULL) goto __LL3179;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r23, 1))))
        __tmp3178 = PyTuple_GET_ITEM(cpy_r_r23, 1);
    else {
        __tmp3178 = NULL;
    }
    if (__tmp3178 == NULL) goto __LL3179;
    __tmp3178 = cpy_r_r23;
__LL3179: ;
    if (unlikely(__tmp3178 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r23); cpy_r_r24 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3180 = PyTuple_GET_ITEM(cpy_r_r23, 0);
        CPy_INCREF(__tmp3180);
        PyObject *__tmp3181;
        if (likely(PyUnicode_Check(__tmp3180)))
            __tmp3181 = __tmp3180;
        else {
            CPy_TypeError("str", __tmp3180); 
            __tmp3181 = NULL;
        }
        cpy_r_r24.f0 = __tmp3181;
        PyObject *__tmp3182 = PyTuple_GET_ITEM(cpy_r_r23, 1);
        CPy_INCREF(__tmp3182);
        PyObject *__tmp3183;
        if (likely(PyUnicode_Check(__tmp3182)))
            __tmp3183 = __tmp3182;
        else {
            CPy_TypeError("str", __tmp3182); 
            __tmp3183 = NULL;
        }
        cpy_r_r24.f1 = __tmp3183;
    }
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1440, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    cpy_r_current_drive = cpy_r_r25;
    cpy_r_r26 = cpy_r_r24.f1;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r24.f0);
    CPy_DECREF(cpy_r_r24.f1);
    cpy_r__ = cpy_r_r26;
    CPy_DECREF(cpy_r__);
    cpy_r_r27 = CPyModule_os;
    cpy_r_r28 = CPyStatics[277]; /* 'curdir' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1441, CPyStatic_mypy___main___globals);
        goto CPyL89;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1441, CPyStatic_mypy___main___globals, "str", cpy_r_r29);
        goto CPyL89;
    }
    cpy_r_dot = cpy_r_r30;
    cpy_r_r31 = CPyModule_os;
    cpy_r_r32 = CPyStatics[277]; /* 'curdir' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1442, CPyStatic_mypy___main___globals);
        goto CPyL90;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1442, CPyStatic_mypy___main___globals, "str", cpy_r_r33);
        goto CPyL90;
    }
    cpy_r_r35 = CPyModule_os;
    cpy_r_r36 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1442, CPyStatic_mypy___main___globals);
        goto CPyL91;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1442, CPyStatic_mypy___main___globals, "str", cpy_r_r37);
        goto CPyL91;
    }
    cpy_r_r39 = PyUnicode_Concat(cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1442, CPyStatic_mypy___main___globals);
        goto CPyL90;
    }
    cpy_r_dotslash = cpy_r_r39;
    cpy_r_r40 = CPyModule_os;
    cpy_r_r41 = CPyStatics[3048]; /* 'pardir' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1443, CPyStatic_mypy___main___globals);
        goto CPyL92;
    }
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1443, CPyStatic_mypy___main___globals, "str", cpy_r_r42);
        goto CPyL92;
    }
    cpy_r_r44 = CPyModule_os;
    cpy_r_r45 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1443, CPyStatic_mypy___main___globals);
        goto CPyL93;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1443, CPyStatic_mypy___main___globals, "str", cpy_r_r46);
        goto CPyL93;
    }
    cpy_r_r48 = PyUnicode_Concat(cpy_r_r43, cpy_r_r47);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1443, CPyStatic_mypy___main___globals);
        goto CPyL92;
    }
    cpy_r_dotdotslash = cpy_r_r48;
    cpy_r_r49 = PySet_New(NULL);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1444, CPyStatic_mypy___main___globals);
        goto CPyL94;
    }
    cpy_r_r50 = PySet_Add(cpy_r_r49, cpy_r_dot);
    CPy_DECREF(cpy_r_dot);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1444, CPyStatic_mypy___main___globals);
        goto CPyL95;
    }
    cpy_r_r52 = PySet_Add(cpy_r_r49, cpy_r_dotslash);
    CPy_DECREF(cpy_r_dotslash);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1444, CPyStatic_mypy___main___globals);
        goto CPyL96;
    }
    cpy_r_trivial_paths = cpy_r_r49;
    cpy_r_r54 = PyList_New(0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1445, CPyStatic_mypy___main___globals);
        goto CPyL97;
    }
    cpy_r_package_root = cpy_r_r54;
    cpy_r_r55 = ((mypy___options___OptionsObject *)cpy_r_options)->_package_root;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = 0;
CPyL30: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL98;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_r55, cpy_r_r56);
    if (likely(PyUnicode_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1446, CPyStatic_mypy___main___globals, "str", cpy_r_r61);
        goto CPyL99;
    }
    cpy_r_root = cpy_r_r62;
    cpy_r_r63 = CPyModule_os;
    cpy_r_r64 = CPyStatics[142]; /* 'path' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1447, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r66 = CPyStatics[2578]; /* 'isabs' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1447, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_root};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1447, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r70))) {
        CPy_TypeError("bool", cpy_r_r70); cpy_r_r71 = 2;
    } else
        cpy_r_r71 = cpy_r_r70 == Py_True;
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1447, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (!cpy_r_r71) goto CPyL43;
    cpy_r_r72 = CPyStatics[163]; /* '' */
    cpy_r_r73 = CPyStatics[3049]; /* 'Package root cannot be absolute: ' */
    cpy_r_r74 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r75 = CPyStatics[163]; /* '' */
    cpy_r_r76 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r77[3] = {cpy_r_r74, cpy_r_root, cpy_r_r75};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = PyObject_VectorcallMethod(cpy_r_r76, cpy_r_r78, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1448, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (likely(PyUnicode_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1448, CPyStatic_mypy___main___globals, "str", cpy_r_r79);
        goto CPyL100;
    }
    cpy_r_r81 = PyList_New(2);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1448, CPyStatic_mypy___main___globals);
        goto CPyL101;
    }
    cpy_r_r82 = (CPyPtr)&((PyListObject *)cpy_r_r81)->ob_item;
    cpy_r_r83 = *(CPyPtr *)cpy_r_r82;
    CPy_INCREF(cpy_r_r73);
    *(PyObject * *)cpy_r_r83 = cpy_r_r73;
    cpy_r_r84 = cpy_r_r83 + 8;
    *(PyObject * *)cpy_r_r84 = cpy_r_r80;
    cpy_r_r85 = PyUnicode_Join(cpy_r_r72, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1448, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r86 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r87[2] = {cpy_r_parser, cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1448, CPyStatic_mypy___main___globals);
        goto CPyL102;
    } else
        goto CPyL103;
CPyL42: ;
    CPy_DECREF(cpy_r_r85);
CPyL43: ;
    cpy_r_r90 = CPyModule_os;
    cpy_r_r91 = CPyStatics[142]; /* 'path' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1449, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r93 = CPyStatics[2577]; /* 'splitdrive' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1449, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r95[1] = {cpy_r_root};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1449, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_root);
    PyObject *__tmp3184;
    if (unlikely(!(PyTuple_Check(cpy_r_r97) && PyTuple_GET_SIZE(cpy_r_r97) == 2))) {
        __tmp3184 = NULL;
        goto __LL3185;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r97, 0))))
        __tmp3184 = PyTuple_GET_ITEM(cpy_r_r97, 0);
    else {
        __tmp3184 = NULL;
    }
    if (__tmp3184 == NULL) goto __LL3185;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r97, 1))))
        __tmp3184 = PyTuple_GET_ITEM(cpy_r_r97, 1);
    else {
        __tmp3184 = NULL;
    }
    if (__tmp3184 == NULL) goto __LL3185;
    __tmp3184 = cpy_r_r97;
__LL3185: ;
    if (unlikely(__tmp3184 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r97); cpy_r_r98 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3186 = PyTuple_GET_ITEM(cpy_r_r97, 0);
        CPy_INCREF(__tmp3186);
        PyObject *__tmp3187;
        if (likely(PyUnicode_Check(__tmp3186)))
            __tmp3187 = __tmp3186;
        else {
            CPy_TypeError("str", __tmp3186); 
            __tmp3187 = NULL;
        }
        cpy_r_r98.f0 = __tmp3187;
        PyObject *__tmp3188 = PyTuple_GET_ITEM(cpy_r_r97, 1);
        CPy_INCREF(__tmp3188);
        PyObject *__tmp3189;
        if (likely(PyUnicode_Check(__tmp3188)))
            __tmp3189 = __tmp3188;
        else {
            CPy_TypeError("str", __tmp3188); 
            __tmp3189 = NULL;
        }
        cpy_r_r98.f1 = __tmp3189;
    }
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1449, CPyStatic_mypy___main___globals);
        goto CPyL99;
    }
    cpy_r_r99 = cpy_r_r98.f0;
    CPy_INCREF(cpy_r_r99);
    cpy_r_drive = cpy_r_r99;
    cpy_r_r100 = cpy_r_r98.f1;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r98.f0);
    CPy_DECREF(cpy_r_r98.f1);
    cpy_r_root = cpy_r_r100;
    cpy_r_r101 = CPyStr_IsTrue(cpy_r_drive);
    if (!cpy_r_r101) goto CPyL104;
    cpy_r_r102 = PyUnicode_Compare(cpy_r_drive, cpy_r_current_drive);
    cpy_r_r103 = cpy_r_r102 == -1;
    if (!cpy_r_r103) goto CPyL51;
    cpy_r_r104 = PyErr_Occurred();
    cpy_r_r105 = cpy_r_r104 != NULL;
    if (!cpy_r_r105) goto CPyL51;
    cpy_r_r106 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1450, CPyStatic_mypy___main___globals);
        goto CPyL105;
    }
CPyL51: ;
    cpy_r_r107 = cpy_r_r102 != 0;
    if (!cpy_r_r107) goto CPyL104;
    cpy_r_r108 = CPyStatics[163]; /* '' */
    cpy_r_r109 = CPyStatics[3050]; /* 'Package root must be on current drive: ' */
    cpy_r_r110 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r111 = PyUnicode_Concat(cpy_r_drive, cpy_r_root);
    CPy_DECREF(cpy_r_drive);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r112 = CPyStatics[163]; /* '' */
    cpy_r_r113 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r114[3] = {cpy_r_r110, cpy_r_r111, cpy_r_r112};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_VectorcallMethod(cpy_r_r113, cpy_r_r115, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_r111);
    if (likely(PyUnicode_Check(cpy_r_r116)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals, "str", cpy_r_r116);
        goto CPyL100;
    }
    cpy_r_r118 = PyList_New(2);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals);
        goto CPyL107;
    }
    cpy_r_r119 = (CPyPtr)&((PyListObject *)cpy_r_r118)->ob_item;
    cpy_r_r120 = *(CPyPtr *)cpy_r_r119;
    CPy_INCREF(cpy_r_r109);
    *(PyObject * *)cpy_r_r120 = cpy_r_r109;
    cpy_r_r121 = cpy_r_r120 + 8;
    *(PyObject * *)cpy_r_r121 = cpy_r_r117;
    cpy_r_r122 = PyUnicode_Join(cpy_r_r108, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r123 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r124[2] = {cpy_r_parser, cpy_r_r122};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_VectorcallMethod(cpy_r_r123, cpy_r_r125, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1451, CPyStatic_mypy___main___globals);
        goto CPyL108;
    } else
        goto CPyL109;
CPyL58: ;
    CPy_DECREF(cpy_r_r122);
CPyL59: ;
    cpy_r_r127 = CPyStr_IsTrue(cpy_r_root);
    if (!cpy_r_r127) goto CPyL81;
    cpy_r_r128 = CPyModule_os;
    cpy_r_r129 = CPyStatics[142]; /* 'path' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1454, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r131 = CPyStatics[152]; /* 'relpath' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1454, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r133[1] = {cpy_r_root};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = _PyObject_Vectorcall(cpy_r_r132, cpy_r_r134, 1, 0);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1454, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_root);
    if (likely(PyUnicode_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1454, CPyStatic_mypy___main___globals, "str", cpy_r_r135);
        goto CPyL99;
    }
    cpy_r_root = cpy_r_r136;
    cpy_r_r137 = CPyModule_os;
    cpy_r_r138 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r139 = CPyObject_GetAttr(cpy_r_r137, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1455, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (likely(PyUnicode_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1455, CPyStatic_mypy___main___globals, "str", cpy_r_r139);
        goto CPyL100;
    }
    cpy_r_r141 = CPyStr_Endswith(cpy_r_root, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (cpy_r_r141) goto CPyL71;
    cpy_r_r142 = CPyModule_os;
    cpy_r_r143 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r144 = CPyObject_GetAttr(cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1456, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (likely(PyUnicode_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1456, CPyStatic_mypy___main___globals, "str", cpy_r_r144);
        goto CPyL100;
    }
    cpy_r_r146 = PyUnicode_Concat(cpy_r_root, cpy_r_r145);
    CPy_DECREF(cpy_r_root);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1456, CPyStatic_mypy___main___globals);
        goto CPyL99;
    }
    cpy_r_root = cpy_r_r146;
CPyL71: ;
    cpy_r_r147 = CPyStr_Startswith(cpy_r_root, cpy_r_dotdotslash);
    if (!cpy_r_r147) goto CPyL78;
    cpy_r_r148 = CPyStatics[163]; /* '' */
    cpy_r_r149 = CPyStatics[3051]; /* 'Package root cannot be above current directory: ' */
    cpy_r_r150 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r151 = CPyStatics[163]; /* '' */
    cpy_r_r152 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r153[3] = {cpy_r_r150, cpy_r_root, cpy_r_r151};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = PyObject_VectorcallMethod(cpy_r_r152, cpy_r_r154, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1458, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    if (likely(PyUnicode_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1458, CPyStatic_mypy___main___globals, "str", cpy_r_r155);
        goto CPyL100;
    }
    cpy_r_r157 = PyList_New(2);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1458, CPyStatic_mypy___main___globals);
        goto CPyL110;
    }
    cpy_r_r158 = (CPyPtr)&((PyListObject *)cpy_r_r157)->ob_item;
    cpy_r_r159 = *(CPyPtr *)cpy_r_r158;
    CPy_INCREF(cpy_r_r149);
    *(PyObject * *)cpy_r_r159 = cpy_r_r149;
    cpy_r_r160 = cpy_r_r159 + 8;
    *(PyObject * *)cpy_r_r160 = cpy_r_r156;
    cpy_r_r161 = PyUnicode_Join(cpy_r_r148, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1458, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r162 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r163[2] = {cpy_r_parser, cpy_r_r161};
    cpy_r_r164 = (PyObject **)&cpy_r_r163;
    cpy_r_r165 = PyObject_VectorcallMethod(cpy_r_r162, cpy_r_r164, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1458, CPyStatic_mypy___main___globals);
        goto CPyL111;
    } else
        goto CPyL112;
CPyL77: ;
    CPy_DECREF(cpy_r_r161);
CPyL78: ;
    cpy_r_r166 = PySet_Contains(cpy_r_trivial_paths, cpy_r_root);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1459, CPyStatic_mypy___main___globals);
        goto CPyL100;
    }
    cpy_r_r168 = cpy_r_r166;
    if (cpy_r_r168) {
        goto CPyL113;
    } else
        goto CPyL81;
CPyL80: ;
    cpy_r_r169 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r169);
    cpy_r_root = cpy_r_r169;
CPyL81: ;
    cpy_r_r170 = PyList_Append(cpy_r_package_root, cpy_r_root);
    CPy_DECREF(cpy_r_root);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1461, CPyStatic_mypy___main___globals);
        goto CPyL99;
    }
    cpy_r_r172 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r172;
    goto CPyL30;
CPyL83: ;
    CPy_INCREF(cpy_r_package_root);
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_package_root);
    ((mypy___options___OptionsObject *)cpy_r_options)->_package_root = cpy_r_package_root;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r174 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "process_package_roots", 1464, CPyStatic_mypy___main___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL114;
    }
    cpy_r_r175 = CPY_GET_METHOD(cpy_r_r174, CPyType_fscache___FileSystemCache, 1, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r174, cpy_r_package_root); /* set_package_root */
    CPy_DECREF(cpy_r_package_root);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r175 == 2)) {
        CPy_AddTraceback("mypy/main.py", "process_package_roots", 1464, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    return 1;
CPyL86: ;
    cpy_r_r176 = 2;
    return cpy_r_r176;
CPyL87: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL2;
CPyL88: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL86;
CPyL89: ;
    CPy_DecRef(cpy_r_current_drive);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dot);
    goto CPyL86;
CPyL91: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dot);
    CPy_DecRef(cpy_r_r34);
    goto CPyL86;
CPyL92: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dot);
    CPy_DecRef(cpy_r_dotslash);
    goto CPyL86;
CPyL93: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dot);
    CPy_DecRef(cpy_r_dotslash);
    CPy_DecRef(cpy_r_r43);
    goto CPyL86;
CPyL94: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dot);
    CPy_DecRef(cpy_r_dotslash);
    CPy_DecRef(cpy_r_dotdotslash);
    goto CPyL86;
CPyL95: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotslash);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_r49);
    goto CPyL86;
CPyL96: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_r49);
    goto CPyL86;
CPyL97: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    goto CPyL86;
CPyL98: ;
    CPy_DECREF(cpy_r_current_drive);
    CPy_DECREF(cpy_r_dotdotslash);
    CPy_DECREF(cpy_r_trivial_paths);
    CPy_DECREF(cpy_r_r55);
    goto CPyL83;
CPyL99: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    goto CPyL86;
CPyL100: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    goto CPyL86;
CPyL101: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r80);
    goto CPyL86;
CPyL102: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r85);
    goto CPyL86;
CPyL103: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL42;
CPyL104: ;
    CPy_DECREF(cpy_r_drive);
    goto CPyL59;
CPyL105: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_drive);
    goto CPyL86;
CPyL106: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r111);
    goto CPyL86;
CPyL107: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r117);
    goto CPyL86;
CPyL108: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r122);
    goto CPyL86;
CPyL109: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL58;
CPyL110: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r156);
    goto CPyL86;
CPyL111: ;
    CPy_DecRef(cpy_r_current_drive);
    CPy_DecRef(cpy_r_dotdotslash);
    CPy_DecRef(cpy_r_trivial_paths);
    CPy_DecRef(cpy_r_package_root);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_root);
    CPy_DecRef(cpy_r_r161);
    goto CPyL86;
CPyL112: ;
    CPy_DECREF(cpy_r_r165);
    goto CPyL77;
CPyL113: ;
    CPy_DECREF(cpy_r_root);
    goto CPyL80;
CPyL114: ;
    CPy_DecRef(cpy_r_package_root);
    goto CPyL86;
}

PyObject *CPyPy_mypy___main___process_package_roots(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fscache", "parser", "options", 0};
    static CPyArg_Parser parser = {"OOO:process_package_roots", kwlist, 0};
    PyObject *obj_fscache;
    PyObject *obj_parser;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fscache, &obj_parser, &obj_options)) {
        return NULL;
    }
    PyObject *arg_fscache;
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3190;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3190;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL3190: ;
    PyObject *arg_parser = obj_parser;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_mypy___main___process_package_roots(arg_fscache, arg_parser, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "process_package_roots", 1432, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___process_cache_map(PyObject *cpy_r_parser, PyObject *cpy_r_special_opts, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_n;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_meta_file;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_data_file;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T2OO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    cpy_r_r0 = CPyStatics[3039]; /* 'cache_map' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1471, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    cpy_r_r2 = CPyObject_Size(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1471, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    cpy_r_n = cpy_r_r2;
    cpy_r_r3 = CPyTagged_Remainder(cpy_r_n, 6);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1472, CPyStatic_mypy___main___globals);
        goto CPyL60;
    }
    cpy_r_r4 = cpy_r_r3 != 0;
    CPyTagged_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStatics[3052]; /* '--cache-map requires one or more triples (see source)' */
    cpy_r_r6 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r7[2] = {cpy_r_parser, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1473, CPyStatic_mypy___main___globals);
        goto CPyL60;
    } else
        goto CPyL61;
CPyL5: ;
    cpy_r_r10 = 0;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_i = cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = cpy_r_r10 & 1;
    cpy_r_r12 = cpy_r_r11 == 0;
    cpy_r_r13 = cpy_r_n & 1;
    cpy_r_r14 = cpy_r_r13 == 0;
    cpy_r_r15 = cpy_r_r12 & cpy_r_r14;
    if (!cpy_r_r15) goto CPyL8;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_n;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL9;
CPyL8: ;
    cpy_r_r18 = CPyTagged_IsLt_(cpy_r_r10, cpy_r_n);
    cpy_r_r17 = cpy_r_r18;
CPyL9: ;
    if (!cpy_r_r17) goto CPyL62;
    cpy_r_r19 = CPyStatics[3039]; /* 'cache_map' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_special_opts, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL63;
    }
    cpy_r_r21 = CPyTagged_Add(cpy_r_i, 6);
    CPyTagged_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyTagged_Add(cpy_r_i, 6);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r22);
    cpy_r_r26 = PySlice_New(cpy_r_r24, cpy_r_r25, cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL64;
    }
    cpy_r_r27 = PyObject_GetItem(cpy_r_r20, cpy_r_r26);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL65;
    }
    cpy_r_r28 = PyObject_GetIter(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL65;
    }
    cpy_r_r29 = PyIter_Next(cpy_r_r28);
    if (cpy_r_r29 == NULL) {
        goto CPyL66;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_source = cpy_r_r29;
    cpy_r_r31 = PyIter_Next(cpy_r_r28);
    if (cpy_r_r31 == NULL) {
        goto CPyL67;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_meta_file = cpy_r_r31;
    cpy_r_r33 = PyIter_Next(cpy_r_r28);
    if (cpy_r_r33 == NULL) {
        goto CPyL68;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_data_file = cpy_r_r33;
    cpy_r_r35 = PyIter_Next(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (cpy_r_r35 == NULL) {
        goto CPyL26;
    } else
        goto CPyL69;
CPyL24: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1475, CPyStatic_mypy___main___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_options)->_cache_map;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = PyDict_Contains(cpy_r_r37, cpy_r_source);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1476, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r40 = cpy_r_r38;
    if (!cpy_r_r40) goto CPyL32;
    cpy_r_r41 = CPyStatics[3053]; /* 'Duplicate --cache-map source ' */
    cpy_r_r42 = PyObject_Str(cpy_r_source);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1477, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r43 = CPyStatics[72]; /* ')' */
    cpy_r_r44 = CPyStr_Build(3, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1477, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r45 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r46[2] = {cpy_r_parser, cpy_r_r44};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1477, CPyStatic_mypy___main___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL31: ;
    CPy_DECREF(cpy_r_r44);
CPyL32: ;
    cpy_r_r49 = CPyStatics[174]; /* '.py' */
    cpy_r_r50 = CPyStatics[2537]; /* 'endswith' */
    PyObject *cpy_r_r51[2] = {cpy_r_source, cpy_r_r49};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_VectorcallMethod(cpy_r_r50, cpy_r_r52, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1478, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r54 = PyObject_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1478, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r56 = cpy_r_r54;
    if (cpy_r_r56) goto CPyL42;
    cpy_r_r57 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r58 = CPyStatics[2537]; /* 'endswith' */
    PyObject *cpy_r_r59[2] = {cpy_r_source, cpy_r_r57};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = PyObject_VectorcallMethod(cpy_r_r58, cpy_r_r60, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1478, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r62 = PyObject_IsTrue(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1478, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r64 = cpy_r_r62;
    if (cpy_r_r64) goto CPyL42;
    cpy_r_r65 = CPyStatics[3054]; /* 'Invalid --cache-map source ' */
    cpy_r_r66 = PyObject_Str(cpy_r_source);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1479, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r67 = CPyStatics[3055]; /* ' (triple[0] must be *.py[i])' */
    cpy_r_r68 = CPyStr_Build(3, cpy_r_r65, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1479, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r69 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r70[2] = {cpy_r_parser, cpy_r_r68};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1479, CPyStatic_mypy___main___globals);
        goto CPyL73;
    } else
        goto CPyL74;
CPyL41: ;
    CPy_DECREF(cpy_r_r68);
CPyL42: ;
    cpy_r_r73 = CPyStatics[290]; /* '.meta.json' */
    cpy_r_r74 = CPyStatics[2537]; /* 'endswith' */
    PyObject *cpy_r_r75[2] = {cpy_r_meta_file, cpy_r_r73};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_VectorcallMethod(cpy_r_r74, cpy_r_r76, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1480, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r78 = PyObject_IsTrue(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1480, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r80 = cpy_r_r78;
    if (cpy_r_r80) goto CPyL49;
    cpy_r_r81 = PyObject_Str(cpy_r_meta_file);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1482, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r82 = CPyStatics[3056]; /* 'Invalid --cache-map meta_file ' */
    cpy_r_r83 = CPyStatics[3057]; /* ' (triple[1] must be *.meta.json)' */
    cpy_r_r84 = CPyStr_Build(3, cpy_r_r82, cpy_r_r81, cpy_r_r83);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1482, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r85 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r86[2] = {cpy_r_parser, cpy_r_r84};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = PyObject_VectorcallMethod(cpy_r_r85, cpy_r_r87, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1481, CPyStatic_mypy___main___globals);
        goto CPyL75;
    } else
        goto CPyL76;
CPyL48: ;
    CPy_DECREF(cpy_r_r84);
CPyL49: ;
    cpy_r_r89 = CPyStatics[291]; /* '.data.json' */
    cpy_r_r90 = CPyStatics[2537]; /* 'endswith' */
    PyObject *cpy_r_r91[2] = {cpy_r_data_file, cpy_r_r89};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_VectorcallMethod(cpy_r_r90, cpy_r_r92, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1484, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r94 = PyObject_IsTrue(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1484, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r96 = cpy_r_r94;
    if (cpy_r_r96) goto CPyL56;
    cpy_r_r97 = PyObject_Str(cpy_r_data_file);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1486, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r98 = CPyStatics[3058]; /* 'Invalid --cache-map data_file ' */
    cpy_r_r99 = CPyStatics[3059]; /* ' (triple[2] must be *.data.json)' */
    cpy_r_r100 = CPyStr_Build(3, cpy_r_r98, cpy_r_r97, cpy_r_r99);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1486, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r101 = CPyStatics[401]; /* 'error' */
    PyObject *cpy_r_r102[2] = {cpy_r_parser, cpy_r_r100};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1485, CPyStatic_mypy___main___globals);
        goto CPyL77;
    } else
        goto CPyL78;
CPyL55: ;
    CPy_DECREF(cpy_r_r100);
CPyL56: ;
    cpy_r_r105.f0 = cpy_r_meta_file;
    cpy_r_r105.f1 = cpy_r_data_file;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_DECREF(cpy_r_meta_file);
    CPy_DECREF(cpy_r_data_file);
    cpy_r_r106 = ((mypy___options___OptionsObject *)cpy_r_options)->_cache_map;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = PyTuple_New(2);
    if (unlikely(cpy_r_r107 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3191 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r107, 0, __tmp3191);
    PyObject *__tmp3192 = cpy_r_r105.f1;
    PyTuple_SET_ITEM(cpy_r_r107, 1, __tmp3192);
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r106, cpy_r_source, cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/main.py", "process_cache_map", 1488, CPyStatic_mypy___main___globals);
        goto CPyL65;
    }
    cpy_r_r110 = CPyTagged_Add(cpy_r_r10, 6);
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_INCREF(cpy_r_r110);
    cpy_r_r10 = cpy_r_r110;
    cpy_r_i = cpy_r_r110;
    goto CPyL6;
CPyL58: ;
    return 1;
CPyL59: ;
    cpy_r_r111 = 2;
    return cpy_r_r111;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL59;
CPyL61: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL5;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL58;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL59;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r20);
    goto CPyL59;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL59;
CPyL66: ;
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r28);
    goto CPyL15;
CPyL67: ;
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_source);
    goto CPyL18;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_meta_file);
    goto CPyL21;
CPyL69: ;
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_meta_file);
    CPy_DECREF(cpy_r_data_file);
    CPy_DECREF(cpy_r_r35);
    goto CPyL24;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_meta_file);
    CPy_DecRef(cpy_r_data_file);
    goto CPyL59;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_meta_file);
    CPy_DecRef(cpy_r_data_file);
    CPy_DecRef(cpy_r_r44);
    goto CPyL59;
CPyL72: ;
    CPy_DECREF(cpy_r_r48);
    goto CPyL31;
CPyL73: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_meta_file);
    CPy_DecRef(cpy_r_data_file);
    CPy_DecRef(cpy_r_r68);
    goto CPyL59;
CPyL74: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL41;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_meta_file);
    CPy_DecRef(cpy_r_data_file);
    CPy_DecRef(cpy_r_r84);
    goto CPyL59;
CPyL76: ;
    CPy_DECREF(cpy_r_r88);
    goto CPyL48;
CPyL77: ;
    CPyTagged_DecRef(cpy_r_n);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_meta_file);
    CPy_DecRef(cpy_r_data_file);
    CPy_DecRef(cpy_r_r100);
    goto CPyL59;
CPyL78: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL55;
}

PyObject *CPyPy_mypy___main___process_cache_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"parser", "special_opts", "options", 0};
    static CPyArg_Parser parser = {"OOO:process_cache_map", kwlist, 0};
    PyObject *obj_parser;
    PyObject *obj_special_opts;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_parser, &obj_special_opts, &obj_options)) {
        return NULL;
    }
    PyObject *arg_parser = obj_parser;
    PyObject *arg_special_opts = obj_special_opts;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_mypy___main___process_cache_map(arg_parser, arg_special_opts, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "process_cache_map", 1467, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___maybe_write_junit_xml(double cpy_r_td, char cpy_r_serious, PyObject *cpy_r_messages, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    tuple_T2II cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2II cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_py_version;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL11;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "maybe_write_junit_xml", 1492, CPyStatic_mypy___main___globals, "str", cpy_r_r0);
        goto CPyL10;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r5.f0);
    CPyTagged_INCREF(cpy_r_r5.f1);
    cpy_r_r6 = cpy_r_r5.f0;
    CPyTagged_INCREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r5.f0);
    CPyTagged_DECREF(cpy_r_r5.f1);
    cpy_r_r7 = CPyTagged_Str(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "maybe_write_junit_xml", 1493, CPyStatic_mypy___main___globals);
        goto CPyL10;
    }
    cpy_r_r8 = CPyStatics[755]; /* '_' */
    cpy_r_r9 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    cpy_r_r10 = cpy_r_r9.f1;
    CPyTagged_INCREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r9.f0);
    CPyTagged_DECREF(cpy_r_r9.f1);
    cpy_r_r11 = CPyTagged_Str(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "maybe_write_junit_xml", 1493, CPyStatic_mypy___main___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyStr_Build(3, cpy_r_r7, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "maybe_write_junit_xml", 1493, CPyStatic_mypy___main___globals);
        goto CPyL10;
    }
    cpy_r_py_version = cpy_r_r12;
    cpy_r_r13 = ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "maybe_write_junit_xml", 1495, CPyStatic_mypy___main___globals, "str", cpy_r_r13);
        goto CPyL13;
    }
    cpy_r_r15 = ((mypy___options___OptionsObject *)cpy_r_options)->_platform;
    CPy_INCREF(cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "maybe_write_junit_xml", 1494, CPyStatic_mypy___main___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyDef_mypy___util___write_junit_xml(cpy_r_td, cpy_r_serious, cpy_r_messages, cpy_r_r14, cpy_r_py_version, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_py_version);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/main.py", "maybe_write_junit_xml", 1494, CPyStatic_mypy___main___globals);
        goto CPyL10;
    }
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_py_version);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_py_version);
    CPy_DecRef(cpy_r_r14);
    goto CPyL10;
}

PyObject *CPyPy_mypy___main___maybe_write_junit_xml(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"td", "serious", "messages", "options", 0};
    static CPyArg_Parser parser = {"OOOO:maybe_write_junit_xml", kwlist, 0};
    PyObject *obj_td;
    PyObject *obj_serious;
    PyObject *obj_messages;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_td, &obj_serious, &obj_messages, &obj_options)) {
        return NULL;
    }
    double arg_td;
    arg_td = PyFloat_AsDouble(obj_td);
    if (arg_td == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_td); goto fail;
    }
    char arg_serious;
    if (unlikely(!PyBool_Check(obj_serious))) {
        CPy_TypeError("bool", obj_serious); goto fail;
    } else
        arg_serious = obj_serious == Py_True;
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_mypy___main___maybe_write_junit_xml(arg_td, arg_serious, arg_messages, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "maybe_write_junit_xml", 1491, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___fail(PyObject *cpy_r_msg, PyObject *cpy_r_stderr, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[189]; /* '\n' */
    cpy_r_r1 = CPyStr_Build(2, cpy_r_msg, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1501, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r3[2] = {cpy_r_stderr, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1501, CPyStatic_mypy___main___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL2: ;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1502, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_msg);
    *(PyObject * *)cpy_r_r8 = cpy_r_msg;
    cpy_r_r9 = CPyDef_mypy___main___maybe_write_junit_xml(0.0, 1, cpy_r_r6, cpy_r_options);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1502, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    cpy_r_r10 = CPyModule_sys;
    cpy_r_r11 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1503, CPyStatic_mypy___main___globals);
        goto CPyL7;
    }
    cpy_r_r13 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "fail", 1503, CPyStatic_mypy___main___globals);
        goto CPyL7;
    } else
        goto CPyL10;
CPyL6: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL7: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL2;
CPyL10: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL6;
}

PyObject *CPyPy_mypy___main___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"msg", "stderr", "options", 0};
    static CPyArg_Parser parser = {"OOO:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_stderr;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_stderr, &obj_options)) {
        return NULL;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_stderr = obj_stderr;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___main___fail(arg_msg, arg_stderr, arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "fail", 1499, CPyStatic_mypy___main___globals);
    return NULL;
}

PyObject *CPyDef_mypy___main___read_types_packages_to_install(PyObject *cpy_r_cache_dir, char cpy_r_after_run) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
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
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_fnam;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T3OOO cpy_r_r84;
    tuple_T3OOO cpy_r_r85;
    PyObject *cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1507, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    cpy_r_r3 = CPyStatics[143]; /* 'isdir' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1507, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_cache_dir};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1507, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1507, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    if (cpy_r_r8) goto CPyL14;
    if (cpy_r_after_run) goto CPyL9;
    cpy_r_r9 = CPyModule_sys;
    cpy_r_r10 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1509, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    cpy_r_r12 = CPyStatics[3060]; /* ("error: Can't determine which types to install with no "
                                     'files to check (and no cache from previous mypy '
                                     'run)\n') */
    cpy_r_r13 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r14[2] = {cpy_r_r11, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1509, CPyStatic_mypy___main___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL8: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL12;
CPyL9: ;
    cpy_r_r17 = CPyModule_sys;
    cpy_r_r18 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1514, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    cpy_r_r20 = CPyStatics[3061]; /* ('error: --install-types failed (no mypy cache '
                                     'directory)\n') */
    cpy_r_r21 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r22[2] = {cpy_r_r19, cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1514, CPyStatic_mypy___main___globals);
        goto CPyL64;
    } else
        goto CPyL65;
CPyL11: ;
    CPy_DECREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r25 = CPyModule_sys;
    cpy_r_r26 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1515, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    cpy_r_r28 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r29[1] = {cpy_r_r28};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1515, CPyStatic_mypy___main___globals);
        goto CPyL61;
    } else
        goto CPyL66;
CPyL14: ;
    cpy_r_r32 = CPyDef_mypy___build___missing_stubs_file(cpy_r_cache_dir);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1516, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    cpy_r_fnam = cpy_r_r32;
    cpy_r_r33 = CPyModule_os;
    cpy_r_r34 = CPyStatics[142]; /* 'path' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1517, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    cpy_r_r36 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1517, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_fnam};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1517, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1517, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    if (cpy_r_r41) {
        goto CPyL22;
    } else
        goto CPyL68;
CPyL20: ;
    cpy_r_r42 = PyList_New(0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1519, CPyStatic_mypy___main___globals);
        goto CPyL61;
    }
    return cpy_r_r42;
CPyL22: ;
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[199]; /* 'open' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_fnam};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_fnam);
    cpy_r_r49 = PyObject_Type(cpy_r_r48);
    cpy_r_r50 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL69;
    }
    cpy_r_r52 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r52);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r48};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL70;
    }
    cpy_r_r57 = 1;
    cpy_r_f = cpy_r_r56;
    cpy_r_r58 = PyList_New(0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals);
        goto CPyL71;
    }
    cpy_r_r59 = PyObject_GetIter(cpy_r_f);
    CPy_DECREF(cpy_r_f);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals);
        goto CPyL72;
    }
CPyL30: ;
    cpy_r_r60 = PyIter_Next(cpy_r_r59);
    if (cpy_r_r60 == NULL) goto CPyL73;
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals, "str", cpy_r_r60);
        goto CPyL74;
    }
    cpy_r_line = cpy_r_r61;
    cpy_r_r62 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r63[1] = {cpy_r_line};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_line);
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals, "str", cpy_r_r65);
        goto CPyL74;
    }
    cpy_r_r67 = PyList_Append(cpy_r_r58, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals);
        goto CPyL74;
    } else
        goto CPyL30;
CPyL35: ;
    cpy_r_r69 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1521, CPyStatic_mypy___main___globals);
        goto CPyL72;
    }
    cpy_r_r70 = cpy_r_r58;
    goto CPyL46;
CPyL37: ;
    cpy_r_r71 = CPy_CatchError();
    cpy_r_r57 = 0;
    cpy_r_r72 = CPy_GetExcInfo();
    cpy_r_r73 = cpy_r_r72.f0;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = cpy_r_r72.f1;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = cpy_r_r72.f2;
    CPy_INCREF(cpy_r_r75);
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    PyObject *cpy_r_r76[4] = {cpy_r_r48, cpy_r_r73, cpy_r_r74, cpy_r_r75};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r77, 4, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL76;
    }
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    cpy_r_r79 = PyObject_IsTrue(cpy_r_r78);
    CPy_DecRef(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL43;
    }
    cpy_r_r81 = cpy_r_r79;
    if (cpy_r_r81) goto CPyL42;
    CPy_Reraise();
    if (!0) {
        goto CPyL43;
    } else
        goto CPyL77;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_DecRef(cpy_r_r71.f0);
    CPy_DecRef(cpy_r_r71.f1);
    CPy_DecRef(cpy_r_r71.f2);
    goto CPyL45;
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_DecRef(cpy_r_r71.f0);
    CPy_DecRef(cpy_r_r71.f1);
    CPy_DecRef(cpy_r_r71.f2);
    cpy_r_r82 = CPy_KeepPropagating();
    if (!cpy_r_r82) {
        goto CPyL47;
    } else
        goto CPyL78;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r83 = NULL;
    cpy_r_r70 = cpy_r_r83;
CPyL46: ;
    tuple_T3OOO __tmp3193 = { NULL, NULL, NULL };
    cpy_r_r84 = __tmp3193;
    cpy_r_r85 = cpy_r_r84;
    goto CPyL48;
CPyL47: ;
    cpy_r_r86 = NULL;
    cpy_r_r70 = cpy_r_r86;
    cpy_r_r87 = CPy_CatchError();
    cpy_r_r85 = cpy_r_r87;
CPyL48: ;
    if (!cpy_r_r57) goto CPyL79;
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r89[4] = {cpy_r_r48, cpy_r_r88, cpy_r_r88, cpy_r_r88};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r90, 4, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1520, CPyStatic_mypy___main___globals);
        goto CPyL80;
    } else
        goto CPyL81;
CPyL50: ;
    CPy_DECREF(cpy_r_r48);
CPyL51: ;
    if (cpy_r_r85.f0 == NULL) {
        goto CPyL54;
    } else
        goto CPyL82;
CPyL52: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL56;
    } else
        goto CPyL83;
CPyL53: ;
    CPy_Unreachable();
CPyL54: ;
    if (cpy_r_r70 == NULL) goto CPyL60;
    return cpy_r_r70;
CPyL56: ;
    if (cpy_r_r85.f0 == NULL) goto CPyL58;
    CPy_RestoreExcInfo(cpy_r_r85);
    CPy_XDECREF(cpy_r_r85.f0);
    CPy_XDECREF(cpy_r_r85.f1);
    CPy_XDECREF(cpy_r_r85.f2);
CPyL58: ;
    cpy_r_r92 = CPy_KeepPropagating();
    if (!cpy_r_r92) goto CPyL61;
    CPy_Unreachable();
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r93 = NULL;
    return cpy_r_r93;
CPyL62: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL61;
CPyL63: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL64: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL61;
CPyL65: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL11;
CPyL66: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL14;
CPyL67: ;
    CPy_DecRef(cpy_r_fnam);
    goto CPyL61;
CPyL68: ;
    CPy_DECREF(cpy_r_fnam);
    goto CPyL20;
CPyL69: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r51);
    goto CPyL61;
CPyL71: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL37;
CPyL72: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL37;
CPyL73: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL35;
CPyL74: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    goto CPyL37;
CPyL75: ;
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_line);
    goto CPyL37;
CPyL76: ;
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    goto CPyL43;
CPyL77: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r71.f0);
    CPy_DecRef(cpy_r_r71.f1);
    CPy_DecRef(cpy_r_r71.f2);
    goto CPyL41;
CPyL78: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r51);
    goto CPyL44;
CPyL79: ;
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r51);
    goto CPyL51;
CPyL80: ;
    CPy_DecRef(cpy_r_r48);
    CPy_XDecRef(cpy_r_r70);
    goto CPyL56;
CPyL81: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL50;
CPyL82: ;
    CPy_XDECREF(cpy_r_r70);
    goto CPyL52;
CPyL83: ;
    CPy_XDECREF(cpy_r_r85.f0);
    CPy_XDECREF(cpy_r_r85.f1);
    CPy_XDECREF(cpy_r_r85.f2);
    goto CPyL53;
}

PyObject *CPyPy_mypy___main___read_types_packages_to_install(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cache_dir", "after_run", 0};
    static CPyArg_Parser parser = {"OO:read_types_packages_to_install", kwlist, 0};
    PyObject *obj_cache_dir;
    PyObject *obj_after_run;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cache_dir, &obj_after_run)) {
        return NULL;
    }
    PyObject *arg_cache_dir;
    if (likely(PyUnicode_Check(obj_cache_dir)))
        arg_cache_dir = obj_cache_dir;
    else {
        CPy_TypeError("str", obj_cache_dir); 
        goto fail;
    }
    char arg_after_run;
    if (unlikely(!PyBool_Check(obj_after_run))) {
        CPy_TypeError("bool", obj_after_run); goto fail;
    } else
        arg_after_run = obj_after_run == Py_True;
    PyObject *retval = CPyDef_mypy___main___read_types_packages_to_install(arg_cache_dir, arg_after_run);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/main.py", "read_types_packages_to_install", 1506, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main___install_types(PyObject *cpy_r_formatter, PyObject *cpy_r_options, char cpy_r_after_run, char cpy_r_non_interactive) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_packages;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
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
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
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
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_cmd;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
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
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    if (cpy_r_after_run != 2) goto CPyL2;
    cpy_r_after_run = 0;
CPyL2: ;
    if (cpy_r_non_interactive != 2) goto CPyL4;
    cpy_r_non_interactive = 0;
CPyL4: ;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_cache_dir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mypy___main___read_types_packages_to_install(cpy_r_r0, cpy_r_after_run);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1532, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    cpy_r_packages = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_packages)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL49;
CPyL6: ;
    return 0;
CPyL7: ;
    if (!cpy_r_after_run) goto CPyL11;
    if (cpy_r_non_interactive) goto CPyL11;
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[190]; /* 'print' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1537, CPyStatic_mypy___main___globals);
        goto CPyL50;
    }
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r8, 0, 0, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1537, CPyStatic_mypy___main___globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL11: ;
    cpy_r_r10 = CPyStatics[3062]; /* 'Installing missing stub packages:' */
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[190]; /* 'print' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1538, CPyStatic_mypy___main___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r10};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1538, CPyStatic_mypy___main___globals);
        goto CPyL50;
    } else
        goto CPyL52;
CPyL13: ;
    cpy_r_r17 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL53;
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r20 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1539, CPyStatic_mypy___main___globals, "str", cpy_r_r17);
        goto CPyL50;
    }
    cpy_r_r21 = CPyStr_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (cpy_r_r21) {
        goto CPyL18;
    } else
        goto CPyL54;
CPyL16: ;
    PyErr_SetString(PyExc_AssertionError, "Python executable required to install types");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1539, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r23 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable;
    CPy_INCREF(cpy_r_r23);
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1540, CPyStatic_mypy___main___globals, "str", cpy_r_r23);
        goto CPyL50;
    }
    cpy_r_r25 = CPyStatics[3009]; /* '-m' */
    cpy_r_r26 = CPyStatics[3063]; /* 'pip' */
    cpy_r_r27 = CPyStatics[3064]; /* 'install' */
    cpy_r_r28 = PyList_New(4);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1540, CPyStatic_mypy___main___globals);
        goto CPyL55;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_r24;
    cpy_r_r31 = cpy_r_r30 + 8;
    CPy_INCREF(cpy_r_r25);
    *(PyObject * *)cpy_r_r31 = cpy_r_r25;
    cpy_r_r32 = cpy_r_r30 + 16;
    CPy_INCREF(cpy_r_r26);
    *(PyObject * *)cpy_r_r32 = cpy_r_r26;
    cpy_r_r33 = cpy_r_r30 + 24;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r33 = cpy_r_r27;
    cpy_r_r34 = PyNumber_Add(cpy_r_r28, cpy_r_packages);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_packages);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1540, CPyStatic_mypy___main___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1540, CPyStatic_mypy___main___globals, "list", cpy_r_r34);
        goto CPyL48;
    }
    cpy_r_cmd = cpy_r_r35;
    cpy_r_r36 = CPyStatics[295]; /* ' ' */
    cpy_r_r37 = PyUnicode_Join(cpy_r_r36, cpy_r_cmd);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1541, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r38 = CPyStatics[203]; /* 'none' */
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_formatter, cpy_r_r37, cpy_r_r38, 1, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1541, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r42 = CPyModule_builtins;
    cpy_r_r43 = CPyStatics[190]; /* 'print' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1541, CPyStatic_mypy___main___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r45[1] = {cpy_r_r41};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1541, CPyStatic_mypy___main___globals);
        goto CPyL57;
    } else
        goto CPyL58;
CPyL26: ;
    CPy_DECREF(cpy_r_r41);
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[190]; /* 'print' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1542, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r50, 0, 0, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1542, CPyStatic_mypy___main___globals);
        goto CPyL56;
    } else
        goto CPyL59;
CPyL28: ;
    if (cpy_r_non_interactive) goto CPyL45;
    cpy_r_r52 = CPyStatics[3065]; /* 'Install? [yN] ' */
    cpy_r_r53 = CPyModule_builtins;
    cpy_r_r54 = CPyStatics[3066]; /* 'input' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1544, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1544, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1544, CPyStatic_mypy___main___globals, "str", cpy_r_r58);
        goto CPyL56;
    }
    cpy_r_x = cpy_r_r59;
    cpy_r_r60 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r61[1] = {cpy_r_x};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r60, cpy_r_r62, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1545, CPyStatic_mypy___main___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1545, CPyStatic_mypy___main___globals, "str", cpy_r_r63);
        goto CPyL60;
    }
    cpy_r_r65 = CPyStr_IsTrue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (!cpy_r_r65) goto CPyL61;
    cpy_r_r66 = CPyStatics[1519]; /* 'lower' */
    PyObject *cpy_r_r67[1] = {cpy_r_x};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_VectorcallMethod(cpy_r_r66, cpy_r_r68, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1545, CPyStatic_mypy___main___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_x);
    if (likely(PyUnicode_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "install_types", 1545, CPyStatic_mypy___main___globals, "str", cpy_r_r69);
        goto CPyL56;
    }
    cpy_r_r71 = CPyStatics[3067]; /* 'y' */
    cpy_r_r72 = CPyStr_Startswith(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (cpy_r_r72) goto CPyL43;
CPyL38: ;
    cpy_r_r73 = CPyStatics[3068]; /* 'mypy: Skipping installation' */
    cpy_r_r74 = CPyStatics[3069]; /* 'red' */
    cpy_r_r75 = 2;
    cpy_r_r76 = 2;
    cpy_r_r77 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_formatter, cpy_r_r73, cpy_r_r74, 1, cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1546, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r78 = CPyModule_builtins;
    cpy_r_r79 = CPyStatics[190]; /* 'print' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1546, CPyStatic_mypy___main___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_r77};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1546, CPyStatic_mypy___main___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL41: ;
    CPy_DECREF(cpy_r_r77);
    cpy_r_r84 = CPyModule_sys;
    cpy_r_r85 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1547, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r87 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r88[1] = {cpy_r_r87};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r89, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1547, CPyStatic_mypy___main___globals);
        goto CPyL56;
    } else
        goto CPyL64;
CPyL43: ;
    cpy_r_r91 = CPyModule_builtins;
    cpy_r_r92 = CPyStatics[190]; /* 'print' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1548, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r93, 0, 0, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1548, CPyStatic_mypy___main___globals);
        goto CPyL56;
    } else
        goto CPyL65;
CPyL45: ;
    cpy_r_r95 = CPyModule_subprocess;
    cpy_r_r96 = CPyStatics[1693]; /* 'run' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1549, CPyStatic_mypy___main___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r98[1] = {cpy_r_cmd};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r99, 1, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "install_types", 1549, CPyStatic_mypy___main___globals);
        goto CPyL56;
    } else
        goto CPyL66;
CPyL47: ;
    CPy_DECREF(cpy_r_cmd);
    return 1;
CPyL48: ;
    cpy_r_r101 = 2;
    return cpy_r_r101;
CPyL49: ;
    CPy_DECREF(cpy_r_packages);
    goto CPyL6;
CPyL50: ;
    CPy_DecRef(cpy_r_packages);
    goto CPyL48;
CPyL51: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL11;
CPyL52: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL13;
CPyL53: ;
    CPy_DECREF(cpy_r_packages);
    CPy_DECREF(cpy_r_r17);
    goto CPyL16;
CPyL54: ;
    CPy_DECREF(cpy_r_packages);
    goto CPyL16;
CPyL55: ;
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_r24);
    goto CPyL48;
CPyL56: ;
    CPy_DecRef(cpy_r_cmd);
    goto CPyL48;
CPyL57: ;
    CPy_DecRef(cpy_r_cmd);
    CPy_DecRef(cpy_r_r41);
    goto CPyL48;
CPyL58: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL26;
CPyL59: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL28;
CPyL60: ;
    CPy_DecRef(cpy_r_cmd);
    CPy_DecRef(cpy_r_x);
    goto CPyL48;
CPyL61: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL38;
CPyL62: ;
    CPy_DecRef(cpy_r_cmd);
    CPy_DecRef(cpy_r_r77);
    goto CPyL48;
CPyL63: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL41;
CPyL64: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL43;
CPyL65: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL45;
CPyL66: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL47;
}

PyObject *CPyPy_mypy___main___install_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"formatter", "options", "after_run", "non_interactive", 0};
    static CPyArg_Parser parser = {"OO|$OO:install_types", kwlist, 0};
    PyObject *obj_formatter;
    PyObject *obj_options;
    PyObject *obj_after_run = NULL;
    PyObject *obj_non_interactive = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_formatter, &obj_options, &obj_after_run, &obj_non_interactive)) {
        return NULL;
    }
    PyObject *arg_formatter;
    if (likely(Py_TYPE(obj_formatter) == CPyType_mypy___util___FancyFormatter))
        arg_formatter = obj_formatter;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_formatter); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char arg_after_run;
    if (obj_after_run == NULL) {
        arg_after_run = 2;
    } else if (unlikely(!PyBool_Check(obj_after_run))) {
        CPy_TypeError("bool", obj_after_run); goto fail;
    } else
        arg_after_run = obj_after_run == Py_True;
    char arg_non_interactive;
    if (obj_non_interactive == NULL) {
        arg_non_interactive = 2;
    } else if (unlikely(!PyBool_Check(obj_non_interactive))) {
        CPy_TypeError("bool", obj_non_interactive); goto fail;
    } else
        arg_non_interactive = obj_non_interactive == Py_True;
    char retval = CPyDef_mypy___main___install_types(arg_formatter, arg_options, arg_after_run, arg_non_interactive);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/main.py", "install_types", 1524, CPyStatic_mypy___main___globals);
    return NULL;
}

char CPyDef_mypy___main_____top_level__(void) {
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
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
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
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    tuple_T2OO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    tuple_T2OO cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    CPyPtr cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyPtr cpy_r_r130;
    int64_t cpy_r_r131;
    CPyTagged cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    tuple_T2OO cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
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
    int32_t cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", -1, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 3, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_argparse;
    cpy_r_r10 = (PyObject **)&CPyModule_os;
    cpy_r_r11 = (PyObject **)&CPyModule_subprocess;
    cpy_r_r12 = (PyObject **)&CPyModule_sys;
    cpy_r_r13 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r14[5] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[5] = {5, 6, 7, 8, 9};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9485]; /* (('argparse', 'argparse', 'argparse'),
                                     ('os', 'os', 'os'),
                                     ('subprocess', 'subprocess', 'subprocess'),
                                     ('sys', 'sys', 'sys'), ('time', 'time', 'time')) */
    cpy_r_r19 = CPyStatic_mypy___main___globals;
    cpy_r_r20 = CPyStatics[3070]; /* 'mypy/main.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL86;
    cpy_r_r23 = CPyStatics[9486]; /* ('gettext',) */
    cpy_r_r24 = CPyStatics[2744]; /* 'gettext' */
    cpy_r_r25 = CPyStatic_mypy___main___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 10, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_gettext = cpy_r_r26;
    CPy_INCREF(CPyModule_gettext);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9487]; /* ('IO', 'Any', 'Final', 'NoReturn', 'Sequence', 'TextIO') */
    cpy_r_r28 = CPyStatics[21]; /* 'typing' */
    cpy_r_r29 = CPyStatic_mypy___main___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 11, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9488]; /* ('build', 'defaults', 'state', 'util') */
    cpy_r_r32 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r33 = CPyStatic_mypy___main___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 13, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9489]; /* ('get_config_module_names', 'parse_config_file',
                                     'parse_version') */
    cpy_r_r36 = CPyStatics[558]; /* 'mypy.config_parser' */
    cpy_r_r37 = CPyStatic_mypy___main___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 14, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___config_parser = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___config_parser);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9279]; /* ('error_codes',) */
    cpy_r_r40 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r41 = CPyStatic_mypy___main___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 15, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___errorcodes = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9490]; /* ('CompileError',) */
    cpy_r_r44 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r45 = CPyStatic_mypy___main___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 16, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___errors = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9345]; /* ('InvalidSourceList', 'create_source_list') */
    cpy_r_r48 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r49 = CPyStatic_mypy___main___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 17, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___find_sources = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___find_sources);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r52 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r53 = CPyStatic_mypy___main___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 18, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___fscache = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9491]; /* ('BuildSource', 'FindModuleCache', 'SearchPaths',
                                     'get_search_dirs', 'mypy_path') */
    cpy_r_r56 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r57 = CPyStatic_mypy___main___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 19, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___modulefinder = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9492]; /* ('INCOMPLETE_FEATURES', 'BuildType', 'Options') */
    cpy_r_r60 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r61 = CPyStatic_mypy___main___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 20, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___options = cpy_r_r62;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9493]; /* ('SplitNamespace',) */
    cpy_r_r64 = CPyStatics[3078]; /* 'mypy.split_namespace' */
    cpy_r_r65 = CPyStatic_mypy___main___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 21, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___split_namespace = cpy_r_r66;
    CPy_INCREF(CPyModule_mypy___split_namespace);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9159]; /* ('__version__',) */
    cpy_r_r68 = CPyStatics[597]; /* 'mypy.version' */
    cpy_r_r69 = CPyStatic_mypy___main___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 22, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyModule_mypy___version = cpy_r_r70;
    CPy_INCREF(CPyModule_mypy___version);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyModule_os;
    cpy_r_r72 = CPyStatics[504]; /* 'stat' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 24, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyStatic_mypy___main___orig_stat = cpy_r_r73;
    CPy_INCREF(CPyStatic_mypy___main___orig_stat);
    cpy_r_r74 = CPyStatic_mypy___main___globals;
    cpy_r_r75 = CPyStatics[3079]; /* 'orig_stat' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 24, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r78 = CPyStatic_mypy___main___globals;
    cpy_r_r79 = CPyStatics[2005]; /* 'MEM_PROFILE' */
    cpy_r_r80 = 0 ? Py_True : Py_False;
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 25, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r83 = CPyModule_sys;
    cpy_r_r84 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 45, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyStatic_mypy___main___mypy___main___main___stdout = cpy_r_r85;
    CPy_INCREF(CPyStatic_mypy___main___mypy___main___main___stdout);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r86 = CPyModule_sys;
    cpy_r_r87 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 46, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyStatic_mypy___main___mypy___main___main___stderr = cpy_r_r88;
    CPy_INCREF(CPyStatic_mypy___main___mypy___main___main___stderr);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r89 = CPyModule_argparse;
    cpy_r_r90 = CPyStatics[1781]; /* 'RawDescriptionHelpFormatter' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r93 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r94 = (PyObject *)CPyType_mypy___main___AugmentedHelpFormatter_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r96 = CPyDef_mypy___main___AugmentedHelpFormatter_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/main.py", "<module>", -1, CPyStatic_mypy___main___globals);
        goto CPyL87;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL87;
    }
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL87;
    }
    CPyType_mypy___main___AugmentedHelpFormatter = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_mypy___main___AugmentedHelpFormatter);
    cpy_r_r102 = CPyStatic_mypy___main___globals;
    cpy_r_r103 = CPyStatics[1782]; /* 'AugmentedHelpFormatter' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 214, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r106 = CPyStatics[1531]; /* 'allow' */
    cpy_r_r107 = CPyStatics[1533]; /* 'disallow' */
    cpy_r_r108.f0 = cpy_r_r106;
    cpy_r_r108.f1 = cpy_r_r107;
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    cpy_r_r109 = CPyStatics[1721]; /* 'show' */
    cpy_r_r110 = CPyStatics[3080]; /* 'hide' */
    cpy_r_r111.f0 = cpy_r_r109;
    cpy_r_r111.f1 = cpy_r_r110;
    CPy_INCREF(cpy_r_r111.f0);
    CPy_INCREF(cpy_r_r111.f1);
    cpy_r_r112 = PyList_New(2);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 229, CPyStatic_mypy___main___globals);
        goto CPyL88;
    }
    cpy_r_r113 = PyTuple_New(2);
    if (unlikely(cpy_r_r113 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3194 = cpy_r_r108.f0;
    PyTuple_SET_ITEM(cpy_r_r113, 0, __tmp3194);
    PyObject *__tmp3195 = cpy_r_r108.f1;
    PyTuple_SET_ITEM(cpy_r_r113, 1, __tmp3195);
    cpy_r_r114 = PyTuple_New(2);
    if (unlikely(cpy_r_r114 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3196 = cpy_r_r111.f0;
    PyTuple_SET_ITEM(cpy_r_r114, 0, __tmp3196);
    PyObject *__tmp3197 = cpy_r_r111.f1;
    PyTuple_SET_ITEM(cpy_r_r114, 1, __tmp3197);
    cpy_r_r115 = (CPyPtr)&((PyListObject *)cpy_r_r112)->ob_item;
    cpy_r_r116 = *(CPyPtr *)cpy_r_r115;
    *(PyObject * *)cpy_r_r116 = cpy_r_r113;
    cpy_r_r117 = cpy_r_r116 + 8;
    *(PyObject * *)cpy_r_r117 = cpy_r_r114;
    CPyStatic_mypy___main___flag_prefix_pairs = cpy_r_r112;
    CPy_INCREF(CPyStatic_mypy___main___flag_prefix_pairs);
    cpy_r_r118 = CPyStatic_mypy___main___globals;
    cpy_r_r119 = CPyStatics[3081]; /* 'flag_prefix_pairs' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 229, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r122 = PyDict_New();
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 230, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPyStatic_mypy___main___flag_prefix_map = cpy_r_r122;
    CPy_INCREF(CPyStatic_mypy___main___flag_prefix_map);
    cpy_r_r123 = CPyStatic_mypy___main___globals;
    cpy_r_r124 = CPyStatics[3082]; /* 'flag_prefix_map' */
    cpy_r_r125 = CPyDict_SetItem(cpy_r_r123, cpy_r_r124, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 230, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r127 = CPyStatic_mypy___main___flag_prefix_pairs;
    if (likely(cpy_r_r127 != NULL)) goto CPyL36;
    PyErr_SetString(PyExc_NameError, "value for final name \"flag_prefix_pairs\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 231, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r129 = 0;
CPyL37: ;
    cpy_r_r130 = (CPyPtr)&((PyVarObject *)cpy_r_r127)->ob_size;
    cpy_r_r131 = *(int64_t *)cpy_r_r130;
    cpy_r_r132 = cpy_r_r131 << 1;
    cpy_r_r133 = (Py_ssize_t)cpy_r_r129 < (Py_ssize_t)cpy_r_r132;
    if (!cpy_r_r133) goto CPyL58;
    cpy_r_r134 = CPyList_GetItemUnsafe(cpy_r_r127, cpy_r_r129);
    cpy_r_r135 = CPyStatic_mypy___main___globals;
    cpy_r_r136 = CPyStatics[1446]; /* 'a' */
    cpy_r_r137 = CPyStatic_mypy___main___globals;
    cpy_r_r138 = CPyStatics[1443]; /* 'b' */
    PyObject *__tmp3198;
    if (unlikely(!(PyTuple_Check(cpy_r_r134) && PyTuple_GET_SIZE(cpy_r_r134) == 2))) {
        __tmp3198 = NULL;
        goto __LL3199;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r134, 0))))
        __tmp3198 = PyTuple_GET_ITEM(cpy_r_r134, 0);
    else {
        __tmp3198 = NULL;
    }
    if (__tmp3198 == NULL) goto __LL3199;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r134, 1))))
        __tmp3198 = PyTuple_GET_ITEM(cpy_r_r134, 1);
    else {
        __tmp3198 = NULL;
    }
    if (__tmp3198 == NULL) goto __LL3199;
    __tmp3198 = cpy_r_r134;
__LL3199: ;
    if (unlikely(__tmp3198 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r134); cpy_r_r139 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3200 = PyTuple_GET_ITEM(cpy_r_r134, 0);
        CPy_INCREF(__tmp3200);
        PyObject *__tmp3201;
        if (likely(PyUnicode_Check(__tmp3200)))
            __tmp3201 = __tmp3200;
        else {
            CPy_TypeError("str", __tmp3200); 
            __tmp3201 = NULL;
        }
        cpy_r_r139.f0 = __tmp3201;
        PyObject *__tmp3202 = PyTuple_GET_ITEM(cpy_r_r134, 1);
        CPy_INCREF(__tmp3202);
        PyObject *__tmp3203;
        if (likely(PyUnicode_Check(__tmp3202)))
            __tmp3203 = __tmp3202;
        else {
            CPy_TypeError("str", __tmp3202); 
            __tmp3203 = NULL;
        }
        cpy_r_r139.f1 = __tmp3203;
    }
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r139.f0 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 231, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r140 = cpy_r_r139.f0;
    CPy_INCREF(cpy_r_r140);
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r135, cpy_r_r136, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 231, CPyStatic_mypy___main___globals);
        goto CPyL89;
    }
    cpy_r_r143 = cpy_r_r139.f1;
    CPy_INCREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r139.f0);
    CPy_DECREF(cpy_r_r139.f1);
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r137, cpy_r_r138, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 231, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r146 = CPyStatic_mypy___main___globals;
    cpy_r_r147 = CPyStatics[1443]; /* 'b' */
    cpy_r_r148 = CPyDict_GetItem(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r148)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals, "str", cpy_r_r148);
        goto CPyL86;
    }
    cpy_r_r150 = CPyStatic_mypy___main___flag_prefix_map;
    if (unlikely(cpy_r_r150 == NULL)) {
        goto CPyL90;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"flag_prefix_map\" was not set");
    cpy_r_r151 = 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r152 = CPyStatic_mypy___main___globals;
    cpy_r_r153 = CPyStatics[1446]; /* 'a' */
    cpy_r_r154 = CPyDict_GetItem(cpy_r_r152, cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals);
        goto CPyL91;
    }
    if (likely(PyUnicode_Check(cpy_r_r154)))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals, "str", cpy_r_r154);
        goto CPyL91;
    }
    cpy_r_r156 = CPyDict_SetItem(cpy_r_r150, cpy_r_r155, cpy_r_r149);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 232, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r158 = CPyStatic_mypy___main___globals;
    cpy_r_r159 = CPyStatics[1446]; /* 'a' */
    cpy_r_r160 = CPyDict_GetItem(cpy_r_r158, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals, "str", cpy_r_r160);
        goto CPyL86;
    }
    cpy_r_r162 = CPyStatic_mypy___main___flag_prefix_map;
    if (unlikely(cpy_r_r162 == NULL)) {
        goto CPyL92;
    } else
        goto CPyL54;
CPyL52: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"flag_prefix_map\" was not set");
    cpy_r_r163 = 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r164 = CPyStatic_mypy___main___globals;
    cpy_r_r165 = CPyStatics[1443]; /* 'b' */
    cpy_r_r166 = CPyDict_GetItem(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals);
        goto CPyL93;
    }
    if (likely(PyUnicode_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals, "str", cpy_r_r166);
        goto CPyL93;
    }
    cpy_r_r168 = CPyDict_SetItem(cpy_r_r162, cpy_r_r167, cpy_r_r161);
    CPy_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 233, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r170 = cpy_r_r129 + 2;
    cpy_r_r129 = cpy_r_r170;
    goto CPyL37;
CPyL58: ;
    cpy_r_r171 = CPyModule_builtins;
    cpy_r_r172 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r173 = CPyObject_GetAttr(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r174 = PyTuple_Pack(1, cpy_r_r173);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r175 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r176 = (PyObject *)CPyType_mypy___main___PythonExecutableInferenceError_template;
    cpy_r_r177 = CPyType_FromTemplate(cpy_r_r176, cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r178 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r179 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r180 = PyTuple_Pack(1, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL94;
    }
    cpy_r_r181 = PyObject_SetAttr(cpy_r_r177, cpy_r_r178, cpy_r_r180);
    CPy_DECREF(cpy_r_r180);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL94;
    }
    CPyType_mypy___main___PythonExecutableInferenceError = (PyTypeObject *)cpy_r_r177;
    CPy_INCREF(CPyType_mypy___main___PythonExecutableInferenceError);
    cpy_r_r183 = CPyStatic_mypy___main___globals;
    cpy_r_r184 = CPyStatics[3083]; /* 'PythonExecutableInferenceError' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 248, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r187 = CPyStatics[2753]; /* ('%(prog)s [-h] [-v] [-V] [more options; see below]\n'
                                      '            [-m MODULE] [-p PACKAGE] [-c '
                                      'PROGRAM_TEXT] [files ...]') */
    cpy_r_r188 = CPyStatic_mypy___main___globals;
    cpy_r_r189 = CPyStatics[3084]; /* 'HEADER' */
    cpy_r_r190 = CPyDict_SetItem(cpy_r_r188, cpy_r_r189, cpy_r_r187);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 304, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r192 = CPyStatics[2754]; /* ('\n'
                                      'Mypy is a program that will type check your Python '
                                      'code.\n'
                                      '\n'
                                      'Pass in any files or folders you want to type check. '
                                      'Mypy will\n'
                                      'recursively traverse any provided folders to find '
                                      '.py files:\n'
                                      '\n'
                                      '    $ mypy my_program.py my_src_folder\n'
                                      '\n'
                                      'For more information on getting started, see:\n'
                                      '\n'
                                      '- '
                                      'https://mypy.readthedocs.io/en/stable/getting_started.html\n'
                                      '\n'
                                      'For more details on both running mypy and using the '
                                      'flags below, see:\n'
                                      '\n'
                                      '- '
                                      'https://mypy.readthedocs.io/en/stable/running_mypy.html\n'
                                      '- '
                                      'https://mypy.readthedocs.io/en/stable/command_line.html\n'
                                      '\n'
                                      'You can also use a config file to configure mypy '
                                      'instead of using\n'
                                      'command line flags. For more details, see:\n'
                                      '\n'
                                      '- '
                                      'https://mypy.readthedocs.io/en/stable/config_file.html\n') */
    cpy_r_r193 = CPyStatic_mypy___main___globals;
    cpy_r_r194 = CPyStatics[3085]; /* 'DESCRIPTION' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r193, cpy_r_r194, cpy_r_r192);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 308, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r197 = CPyStatics[2755]; /* ('Environment variables:\n'
                                      '  Define MYPYPATH for additional module search path '
                                      'entries.\n'
                                      '  Define MYPY_CACHE_DIR to override configuration '
                                      'cache_dir path.') */
    cpy_r_r198 = CPyStatic_mypy___main___globals;
    cpy_r_r199 = CPyStatics[3086]; /* 'FOOTER' */
    cpy_r_r200 = CPyDict_SetItem(cpy_r_r198, cpy_r_r199, cpy_r_r197);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 331, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r202 = CPyModule_argparse;
    cpy_r_r203 = CPyStatics[1785]; /* 'ArgumentParser' */
    cpy_r_r204 = CPyObject_GetAttr(cpy_r_r202, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r205 = PyTuple_Pack(1, cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r206 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r207 = (PyObject *)CPyType_mypy___main___CapturableArgumentParser_template;
    cpy_r_r208 = CPyType_FromTemplate(cpy_r_r207, cpy_r_r205, cpy_r_r206);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r209 = CPyDef_mypy___main___CapturableArgumentParser_trait_vtable_setup();
    if (unlikely(cpy_r_r209 == 2)) {
        CPy_AddTraceback("mypy/main.py", "<module>", -1, CPyStatic_mypy___main___globals);
        goto CPyL95;
    }
    cpy_r_r210 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r211 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r212 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r213 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r214 = PyTuple_Pack(3, cpy_r_r211, cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL95;
    }
    cpy_r_r215 = PyObject_SetAttr(cpy_r_r208, cpy_r_r210, cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL95;
    }
    CPyType_mypy___main___CapturableArgumentParser = (PyTypeObject *)cpy_r_r208;
    CPy_INCREF(CPyType_mypy___main___CapturableArgumentParser);
    cpy_r_r217 = CPyStatic_mypy___main___globals;
    cpy_r_r218 = CPyStatics[3087]; /* 'CapturableArgumentParser' */
    cpy_r_r219 = CPyDict_SetItem(cpy_r_r217, cpy_r_r218, cpy_r_r208);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 336, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r221 = CPyModule_argparse;
    cpy_r_r222 = CPyStatics[3088]; /* 'Action' */
    cpy_r_r223 = CPyObject_GetAttr(cpy_r_r221, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r224 = PyTuple_Pack(1, cpy_r_r223);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r225 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r226 = (PyObject *)CPyType_mypy___main___CapturableVersionAction_template;
    cpy_r_r227 = CPyType_FromTemplate(cpy_r_r226, cpy_r_r224, cpy_r_r225);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r228 = CPyDef_mypy___main___CapturableVersionAction_trait_vtable_setup();
    if (unlikely(cpy_r_r228 == 2)) {
        CPy_AddTraceback("mypy/main.py", "<module>", -1, CPyStatic_mypy___main___globals);
        goto CPyL96;
    }
    cpy_r_r229 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r230 = CPyStatics[1695]; /* 'version' */
    cpy_r_r231 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r232 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r233 = PyTuple_Pack(3, cpy_r_r230, cpy_r_r231, cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL96;
    }
    cpy_r_r234 = PyObject_SetAttr(cpy_r_r227, cpy_r_r229, cpy_r_r233);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL96;
    }
    CPyType_mypy___main___CapturableVersionAction = (PyTypeObject *)cpy_r_r227;
    CPy_INCREF(CPyType_mypy___main___CapturableVersionAction);
    cpy_r_r236 = CPyStatic_mypy___main___globals;
    cpy_r_r237 = CPyStatics[3089]; /* 'CapturableVersionAction' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r236, cpy_r_r237, cpy_r_r227);
    CPy_DECREF(cpy_r_r227);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 390, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    cpy_r_r240 = CPyModule_argparse;
    cpy_r_r241 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r242 = CPyObject_GetAttr(cpy_r_r240, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 406, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r242)))
        cpy_r_r243 = cpy_r_r242;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 406, CPyStatic_mypy___main___globals, "str", cpy_r_r242);
        goto CPyL86;
    }
    CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____dest = cpy_r_r243;
    CPy_INCREF(CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____dest);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r244 = CPyModule_argparse;
    cpy_r_r245 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r246 = CPyObject_GetAttr(cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/main.py", "<module>", 407, CPyStatic_mypy___main___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r246)))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypy/main.py", "<module>", 407, CPyStatic_mypy___main___globals, "str", cpy_r_r246);
        goto CPyL86;
    }
    CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____default = cpy_r_r247;
    CPy_INCREF(CPyStatic_mypy___main___mypy___main___CapturableVersionAction_____init_____default);
    CPy_DECREF(cpy_r_r247);
    return 1;
CPyL86: ;
    cpy_r_r248 = 2;
    return cpy_r_r248;
CPyL87: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL86;
CPyL88: ;
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    goto CPyL86;
CPyL89: ;
    CPy_DecRef(cpy_r_r139.f0);
    CPy_DecRef(cpy_r_r139.f1);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL44;
CPyL91: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL86;
CPyL92: ;
    CPy_DecRef(cpy_r_r161);
    goto CPyL52;
CPyL93: ;
    CPy_DecRef(cpy_r_r161);
    goto CPyL86;
CPyL94: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL86;
CPyL95: ;
    CPy_DecRef(cpy_r_r208);
    goto CPyL86;
CPyL96: ;
    CPy_DecRef(cpy_r_r227);
    goto CPyL86;
}
