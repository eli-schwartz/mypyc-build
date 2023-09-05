#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef gitmodule_methods[] = {
    {"is_git_repo", (PyCFunction)CPyPy_git___is_git_repo, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"have_git", (PyCFunction)CPyPy_git___have_git, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"git_revision", (PyCFunction)CPyPy_git___git_revision, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_dirty", (PyCFunction)CPyPy_git___is_dirty, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef gitmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.git",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    gitmodule_methods
};

PyObject *CPyInit_mypy___git(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___git_internal) {
        Py_INCREF(CPyModule_mypy___git_internal);
        return CPyModule_mypy___git_internal;
    }
    CPyModule_mypy___git_internal = PyModule_Create(&gitmodule);
    if (unlikely(CPyModule_mypy___git_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___git_internal, "__name__");
    CPyStatic_git___globals = PyModule_GetDict(CPyModule_mypy___git_internal);
    if (unlikely(CPyStatic_git___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_git_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___git_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___git_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_git___is_git_repo(PyObject *cpy_r_dir) {
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
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyStatics[2620]; /* '.git' */
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[142]; /* 'path' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyStatics[175]; /* 'join' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r6[2] = {cpy_r_dir, cpy_r_r0};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 2, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals, "str", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_r10 = CPyModule_os;
    cpy_r_r11 = CPyStatics[142]; /* 'path' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL10;
    }
    cpy_r_r13 = CPyStatics[1500]; /* 'exists' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!PyBool_Check(cpy_r_r17))) {
        CPy_TypeError("bool", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r17 == Py_True;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/git.py", "is_git_repo", 12, CPyStatic_git___globals);
        goto CPyL9;
    }
    return cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL10: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
}

PyObject *CPyPy_git___is_git_repo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:is_git_repo", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    char retval = CPyDef_git___is_git_repo(arg_dir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/git.py", "is_git_repo", 10, CPyStatic_git___globals);
    return NULL;
}

char CPyDef_git___have_git(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyStatics[2621]; /* 'git' */
    cpy_r_r1 = CPyStatics[2622]; /* '--help' */
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "have_git", 18, CPyStatic_git___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyModule_subprocess;
    cpy_r_r7 = CPyStatics[2623]; /* 'check_output' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "have_git", 18, CPyStatic_git___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r2};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "have_git", 18, CPyStatic_git___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    return 1;
CPyL5: ;
    cpy_r_r12 = CPy_CatchError();
    cpy_r_r13 = CPyModule_subprocess;
    cpy_r_r14 = CPyStatics[2624]; /* 'CalledProcessError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "have_git", 20, CPyStatic_git___globals);
        goto CPyL13;
    }
    cpy_r_r16 = CPy_ExceptionMatches(cpy_r_r15);
    CPy_DecRef(cpy_r_r15);
    if (!cpy_r_r16) goto CPyL8;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    return 0;
CPyL8: ;
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "have_git", 22, CPyStatic_git___globals);
        goto CPyL13;
    }
    cpy_r_r20 = CPy_ExceptionMatches(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL11;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    return 0;
CPyL11: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL18;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    cpy_r_r21 = CPy_KeepPropagating();
    if (!cpy_r_r21) goto CPyL15;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL16: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
CPyL17: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL4;
CPyL18: ;
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL12;
}

PyObject *CPyPy_git___have_git(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":have_git", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_git___have_git();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/git.py", "have_git", 15, CPyStatic_git___globals);
    return NULL;
}

PyObject *CPyDef_git___git_revision(PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
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
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyStatics[2621]; /* 'git' */
    cpy_r_r1 = CPyStatics[2625]; /* 'rev-parse' */
    cpy_r_r2 = CPyStatics[2626]; /* 'HEAD' */
    cpy_r_r3 = PyList_New(3);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals);
        goto CPyL7;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r5 = cpy_r_r0;
    cpy_r_r6 = cpy_r_r5 + 8;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = cpy_r_r5 + 16;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = CPyModule_subprocess;
    cpy_r_r9 = CPyStatics[2623]; /* 'check_output' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals);
        goto CPyL8;
    }
    PyObject *cpy_r_r11[2] = {cpy_r_r3, cpy_r_dir};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = CPyStatics[9417]; /* ('cwd',) */
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyBytes_Check(cpy_r_r14) || PyByteArray_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals, "bytes", cpy_r_r14);
        goto CPyL7;
    }
    cpy_r_r16 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r17[1] = {cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r15);
    if (likely(PyBytes_Check(cpy_r_r19) || PyByteArray_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/git.py", "git_revision", 28, CPyStatic_git___globals, "bytes", cpy_r_r19);
        goto CPyL7;
    }
    return cpy_r_r20;
CPyL7: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL7;
}

PyObject *CPyPy_git___git_revision(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:git_revision", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    PyObject *retval = CPyDef_git___git_revision(arg_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/git.py", "git_revision", 26, CPyStatic_git___globals);
    return NULL;
}

char CPyDef_git___is_dirty(PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_output;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyStatics[2621]; /* 'git' */
    cpy_r_r1 = CPyStatics[1701]; /* 'status' */
    cpy_r_r2 = CPyStatics[2628]; /* '-uno' */
    cpy_r_r3 = CPyStatics[2629]; /* '--porcelain' */
    cpy_r_r4 = PyList_New(4);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_dirty", 33, CPyStatic_git___globals);
        goto CPyL8;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r6 = cpy_r_r0;
    cpy_r_r7 = cpy_r_r6 + 8;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r7 = cpy_r_r1;
    cpy_r_r8 = cpy_r_r6 + 16;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r8 = cpy_r_r2;
    cpy_r_r9 = cpy_r_r6 + 24;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r9 = cpy_r_r3;
    cpy_r_r10 = CPyModule_subprocess;
    cpy_r_r11 = CPyStatics[2623]; /* 'check_output' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_dirty", 33, CPyStatic_git___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r13[2] = {cpy_r_r4, cpy_r_dir};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9417]; /* ('cwd',) */
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_dirty", 33, CPyStatic_git___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyBytes_Check(cpy_r_r16) || PyByteArray_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/git.py", "is_dirty", 33, CPyStatic_git___globals, "bytes", cpy_r_r16);
        goto CPyL8;
    }
    cpy_r_output = cpy_r_r17;
    cpy_r_r18 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r19[1] = {cpy_r_output};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "is_dirty", 34, CPyStatic_git___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_output);
    if (likely(PyBytes_Check(cpy_r_r21) || PyByteArray_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/git.py", "is_dirty", 34, CPyStatic_git___globals, "bytes", cpy_r_r21);
        goto CPyL8;
    }
    cpy_r_r23 = CPyStatics[9009]; /* b'' */
    cpy_r_r24 = CPyBytes_Compare(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/git.py", "is_dirty", 34, CPyStatic_git___globals);
        goto CPyL8;
    }
    cpy_r_r26 = cpy_r_r24 != 1;
    return cpy_r_r26;
CPyL8: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL9: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_output);
    goto CPyL8;
}

PyObject *CPyPy_git___is_dirty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:is_dirty", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    char retval = CPyDef_git___is_dirty(arg_dir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/git.py", "is_dirty", 31, CPyStatic_git___globals);
    return NULL;
}

char CPyDef_git_____top_level__(void) {
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
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "<module>", -1, CPyStatic_git___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_git___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/git.py", "<module>", 4, CPyStatic_git___globals);
        goto CPyL6;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    cpy_r_r10 = (PyObject **)&CPyModule_subprocess;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {6, 7};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9418]; /* (('os', 'os', 'os'),
                                     ('subprocess', 'subprocess', 'subprocess')) */
    cpy_r_r16 = CPyStatic_git___globals;
    cpy_r_r17 = CPyStatics[2630]; /* 'mypy/git.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL6;
    return 1;
CPyL6: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
}
