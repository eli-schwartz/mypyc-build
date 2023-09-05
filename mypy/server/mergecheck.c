#include <Python.h>

PyMODINIT_FUNC
PyInit_mergecheck(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("ced4bbd844d3a34b6fc2__mypyc"))) return NULL;
    Py_DECREF(tmp);
    void *init_func = PyCapsule_Import("ced4bbd844d3a34b6fc2__mypyc.init_mypy___server___mergecheck", 0);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_mergecheck(); }
