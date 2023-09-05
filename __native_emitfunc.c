#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
emitfunc___FunctionEmitterVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef emitfunc___FunctionEmitterVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitfunc___FunctionEmitterVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_emitfunc___FunctionEmitterVisitor(PyObject *cpy_r_emitter, PyObject *cpy_r_declarations, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name);

static PyObject *
emitfunc___FunctionEmitterVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitfunc___FunctionEmitterVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emitfunc___FunctionEmitterVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emitfunc___FunctionEmitterVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emitfunc___FunctionEmitterVisitor_traverse(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_PREFIX_MAP);
    Py_VISIT(self->_emitter);
    Py_VISIT(self->_names);
    Py_VISIT(self->_declarations);
    Py_VISIT(self->_source_path);
    Py_VISIT(self->_module_name);
    Py_VISIT(self->_literals);
    Py_VISIT(self->_next_block);
    Py_VISIT(self->_ops);
    if (CPyTagged_CheckLong(self->_op_index)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_op_index));
    }
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject))));
    return 0;
}

static int
emitfunc___FunctionEmitterVisitor_clear(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self)
{
    Py_CLEAR(self->_PREFIX_MAP);
    Py_CLEAR(self->_emitter);
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_declarations);
    Py_CLEAR(self->_source_path);
    Py_CLEAR(self->_module_name);
    Py_CLEAR(self->_literals);
    Py_CLEAR(self->_next_block);
    Py_CLEAR(self->_ops);
    if (CPyTagged_CheckLong(self->_op_index)) {
        CPyTagged __tmp = self->_op_index;
        self->_op_index = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject))));
    return 0;
}

static void
emitfunc___FunctionEmitterVisitor_dealloc(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitfunc___FunctionEmitterVisitor_dealloc)
    emitfunc___FunctionEmitterVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitfunc___FunctionEmitterVisitor_vtable[59];
static CPyVTableItem emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable[36];
static size_t emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table[1];
static bool
CPyDef_emitfunc___FunctionEmitterVisitor_trait_vtable_setup(void)
{
    CPyVTableItem emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_return__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_box__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address__OpVisitor_glue,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive__OpVisitor_glue,
    };
    memcpy(emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable, emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable_scratch, sizeof(emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable));
    size_t emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table, emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table_scratch, sizeof(emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table));
    CPyVTableItem emitfunc___FunctionEmitterVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_ops___OpVisitor, (CPyVTableItem)emitfunc___FunctionEmitterVisitor_ops___OpVisitor_trait_vtable, (CPyVTableItem)emitfunc___FunctionEmitterVisitor_ops___OpVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor_____init__,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___temp_name,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_return,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___get_attr_expr,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___next_branch,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_call,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_box,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___label,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___reg,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___ctype,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___c_error_value,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___c_undefined_value,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_line,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_lines,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_dec_ref,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_declaration,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_traceback,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_attribute_error,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast,
        (CPyVTableItem)CPyDef_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup,
    };
    memcpy(emitfunc___FunctionEmitterVisitor_vtable, emitfunc___FunctionEmitterVisitor_vtable_scratch, sizeof(emitfunc___FunctionEmitterVisitor_vtable));
    return 1;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_PREFIX_MAP(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_PREFIX_MAP(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_emitter(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_emitter(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_names(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_names(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_declarations(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_declarations(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_source_path(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_source_path(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_module_name(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_module_name(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_literals(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_literals(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_rare(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_rare(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_next_block(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_next_block(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_ops(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_ops(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);
static PyObject *
emitfunc___FunctionEmitterVisitor_get_op_index(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure);
static int
emitfunc___FunctionEmitterVisitor_set_op_index(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef emitfunc___FunctionEmitterVisitor_getseters[] = {
    {"PREFIX_MAP",
     (getter)emitfunc___FunctionEmitterVisitor_get_PREFIX_MAP, (setter)emitfunc___FunctionEmitterVisitor_set_PREFIX_MAP,
     NULL, NULL},
    {"emitter",
     (getter)emitfunc___FunctionEmitterVisitor_get_emitter, (setter)emitfunc___FunctionEmitterVisitor_set_emitter,
     NULL, NULL},
    {"names",
     (getter)emitfunc___FunctionEmitterVisitor_get_names, (setter)emitfunc___FunctionEmitterVisitor_set_names,
     NULL, NULL},
    {"declarations",
     (getter)emitfunc___FunctionEmitterVisitor_get_declarations, (setter)emitfunc___FunctionEmitterVisitor_set_declarations,
     NULL, NULL},
    {"source_path",
     (getter)emitfunc___FunctionEmitterVisitor_get_source_path, (setter)emitfunc___FunctionEmitterVisitor_set_source_path,
     NULL, NULL},
    {"module_name",
     (getter)emitfunc___FunctionEmitterVisitor_get_module_name, (setter)emitfunc___FunctionEmitterVisitor_set_module_name,
     NULL, NULL},
    {"literals",
     (getter)emitfunc___FunctionEmitterVisitor_get_literals, (setter)emitfunc___FunctionEmitterVisitor_set_literals,
     NULL, NULL},
    {"rare",
     (getter)emitfunc___FunctionEmitterVisitor_get_rare, (setter)emitfunc___FunctionEmitterVisitor_set_rare,
     NULL, NULL},
    {"next_block",
     (getter)emitfunc___FunctionEmitterVisitor_get_next_block, (setter)emitfunc___FunctionEmitterVisitor_set_next_block,
     NULL, NULL},
    {"ops",
     (getter)emitfunc___FunctionEmitterVisitor_get_ops, (setter)emitfunc___FunctionEmitterVisitor_set_ops,
     NULL, NULL},
    {"op_index",
     (getter)emitfunc___FunctionEmitterVisitor_get_op_index, (setter)emitfunc___FunctionEmitterVisitor_set_op_index,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emitfunc___FunctionEmitterVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"temp_name",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___temp_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_goto",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_branch",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_set",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assign_multi",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign_multi,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_error_value",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_literal",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_attr_expr",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___get_attr_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_attr",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"next_branch",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___next_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_attr",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_static",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_init_static",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_init_static,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_get",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_get,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dest_assign",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___get_dest_assign,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_method_call",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_method_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_inc_ref",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_inc_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dec_ref",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_dec_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_box",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_box,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbox",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_unbox,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unreachable",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_unreachable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_standard_error",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_c",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_call_c,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_truncate",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_truncate,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_extend",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_extend,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_global",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_op",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_int_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_op",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_op",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_neg",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_neg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_comparison_op",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_mem",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_mem",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_mem,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_get_element_ptr",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_load_address",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_address,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_keep_alive",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___visit_keep_alive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"label",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___label,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reg",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___reg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"ctype",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___ctype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"c_error_value",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___c_error_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"c_undefined_value",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___c_undefined_value,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_line",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_line,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_lines",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_lines,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_inc_ref",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_inc_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_dec_ref",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_dec_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_declaration",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_declaration,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_traceback",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_traceback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_attribute_error",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_attribute_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_signed_int_cast",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_unsigned_int_cast",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitfunc___FunctionEmitterVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FunctionEmitterVisitor",
    .tp_new = emitfunc___FunctionEmitterVisitor_new,
    .tp_dealloc = (destructor)emitfunc___FunctionEmitterVisitor_dealloc,
    .tp_traverse = (traverseproc)emitfunc___FunctionEmitterVisitor_traverse,
    .tp_clear = (inquiry)emitfunc___FunctionEmitterVisitor_clear,
    .tp_getset = emitfunc___FunctionEmitterVisitor_getseters,
    .tp_methods = emitfunc___FunctionEmitterVisitor_methods,
    .tp_init = emitfunc___FunctionEmitterVisitor_init,
    .tp_members = emitfunc___FunctionEmitterVisitor_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitfunc___FunctionEmitterVisitor_template = &CPyType_emitfunc___FunctionEmitterVisitor_template_;

static PyObject *
emitfunc___FunctionEmitterVisitor_setup(PyTypeObject *type)
{
    mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self;
    self = (mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitfunc___FunctionEmitterVisitor_vtable + 3;
    self->_rare = 2;
    self->_op_index = CPY_INT_TAG;
    if (CPyDef_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor(PyObject *cpy_r_emitter, PyObject *cpy_r_declarations, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name)
{
    PyObject *self = emitfunc___FunctionEmitterVisitor_setup(CPyType_emitfunc___FunctionEmitterVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emitfunc___FunctionEmitterVisitor_____init__(self, cpy_r_emitter, cpy_r_declarations, cpy_r_source_path, cpy_r_module_name);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_PREFIX_MAP(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_PREFIX_MAP == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'PREFIX_MAP' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_PREFIX_MAP);
    PyObject *retval = self->_PREFIX_MAP;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_PREFIX_MAP(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'PREFIX_MAP' cannot be deleted");
        return -1;
    }
    if (self->_PREFIX_MAP != NULL) {
        CPy_DECREF(self->_PREFIX_MAP);
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
    self->_PREFIX_MAP = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_emitter(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_emitter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'emitter' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_emitter);
    PyObject *retval = self->_emitter;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_emitter(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'emitter' cannot be deleted");
        return -1;
    }
    if (self->_emitter != NULL) {
        CPy_DECREF(self->_emitter);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___Emitter))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_emitter = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_names(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_names(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'names' cannot be deleted");
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
emitfunc___FunctionEmitterVisitor_get_declarations(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_declarations == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'declarations' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_declarations);
    PyObject *retval = self->_declarations;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_declarations(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'declarations' cannot be deleted");
        return -1;
    }
    if (self->_declarations != NULL) {
        CPy_DECREF(self->_declarations);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___Emitter))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_declarations = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_source_path(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_source_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_path' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_path);
    PyObject *retval = self->_source_path;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_source_path(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'source_path' cannot be deleted");
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
emitfunc___FunctionEmitterVisitor_get_module_name(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_module_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_name' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_name);
    PyObject *retval = self->_module_name;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_module_name(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'module_name' cannot be deleted");
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
emitfunc___FunctionEmitterVisitor_get_literals(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'literals' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_literals);
    PyObject *retval = self->_literals;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_literals(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'literals' cannot be deleted");
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

static PyObject *
emitfunc___FunctionEmitterVisitor_get_rare(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_rare == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'rare' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_rare ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_rare(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'rare' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_rare = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_next_block(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_next_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_block' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_next_block);
    PyObject *retval = self->_next_block;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_next_block(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'next_block' cannot be deleted");
        return -1;
    }
    if (self->_next_block != NULL) {
        CPy_DECREF(self->_next_block);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_ops___BasicBlock)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9478;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9478;
    CPy_TypeError("mypyc.ir.ops.BasicBlock or None", value); 
    tmp = NULL;
__LL9478: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_next_block = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_ops(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_ops == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ops' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ops);
    PyObject *retval = self->_ops;
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_ops(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'ops' cannot be deleted");
        return -1;
    }
    if (self->_ops != NULL) {
        CPy_DECREF(self->_ops);
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
    self->_ops = tmp;
    return 0;
}

static PyObject *
emitfunc___FunctionEmitterVisitor_get_op_index(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, void *closure)
{
    if (unlikely(self->_op_index == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'op_index' of 'FunctionEmitterVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_op_index);
    PyObject *retval = CPyTagged_StealAsObject(self->_op_index);
    return retval;
}

static int
emitfunc___FunctionEmitterVisitor_set_op_index(mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FunctionEmitterVisitor' object attribute 'op_index' cannot be deleted");
        return -1;
    }
    if (self->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_op_index);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_op_index = tmp;
    return 0;
}
static PyMethodDef emitfuncmodule_methods[] = {
    {"native_function_type", (PyCFunction)CPyPy_emitfunc___native_function_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"native_function_header", (PyCFunction)CPyPy_emitfunc___native_function_header, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_native_function", (PyCFunction)CPyPy_emitfunc___generate_native_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef emitfuncmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.emitfunc",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    emitfuncmodule_methods
};

PyObject *CPyInit_mypyc___codegen___emitfunc(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___emitfunc_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___emitfunc_internal);
        return CPyModule_mypyc___codegen___emitfunc_internal;
    }
    CPyModule_mypyc___codegen___emitfunc_internal = PyModule_Create(&emitfuncmodule);
    if (unlikely(CPyModule_mypyc___codegen___emitfunc_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___emitfunc_internal, "__name__");
    CPyStatic_emitfunc___globals = PyModule_GetDict(CPyModule_mypyc___codegen___emitfunc_internal);
    if (unlikely(CPyStatic_emitfunc___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_emitfunc_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___emitfunc_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___emitfunc_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_emitfunc___FunctionEmitterVisitor___PREFIX_MAP);
    CPyStatic_emitfunc___FunctionEmitterVisitor___PREFIX_MAP = NULL;
    Py_CLEAR(CPyType_emitfunc___FunctionEmitterVisitor);
    return NULL;
}

PyObject *CPyDef_emitfunc___native_function_type(PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
CPyL2: ;
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
CPyL3: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_func_ir___RuntimeArg))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r4);
        goto CPyL19;
    }
    cpy_r_arg = cpy_r_r5;
    cpy_r_r6 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r7 = CPyDef_emit___Emitter___ctype(cpy_r_emitter, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r8 = PyList_Append(cpy_r_r1, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL19;
    } else
        goto CPyL3;
CPyL7: ;
    cpy_r_r10 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r11 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 77, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_r12 = CPyStr_IsTrue(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL20;
    cpy_r_r13 = cpy_r_r11;
    goto CPyL12;
CPyL11: ;
    cpy_r_r14 = CPyStatics[7337]; /* 'void' */
    CPy_INCREF(cpy_r_r14);
    cpy_r_r13 = cpy_r_r14;
CPyL12: ;
    cpy_r_args = cpy_r_r13;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 78, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
CPyL13: ;
    cpy_r_r16 = CPyDef_emit___Emitter___ctype(cpy_r_emitter, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 78, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_ret = cpy_r_r16;
    cpy_r_r17 = CPyStatics[7338]; /* ' (*)(' */
    cpy_r_r18 = CPyStatics[72]; /* ')' */
    cpy_r_r19 = CPyStr_Build(4, cpy_r_ret, cpy_r_r17, cpy_r_args, cpy_r_r18);
    CPy_DECREF(cpy_r_ret);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 79, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL11;
CPyL21: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL16;
}

PyObject *CPyPy_emitfunc___native_function_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", 0};
    static CPyArg_Parser parser = {"OO:native_function_type", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___native_function_type(arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_type", 76, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___native_function_header(PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 83, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    cpy_r_args = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_sig;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r1)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL19;
    cpy_r_r8 = CPySequenceTuple_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 84, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_func_ir___RuntimeArg))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 84, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r8);
        goto CPyL20;
    }
    cpy_r_arg = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 85, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_r12 = CPyStatics[6862]; /* 'cpy_r_' */
    cpy_r_r13 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 85, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r15 = PyList_Append(cpy_r_args, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 85, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r17;
    goto CPyL2;
CPyL9: ;
    cpy_r_r18 = CPyStatics[7339]; /* '{ret_type}{name}({args})' */
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_fn)->_sig;
    cpy_r_r20 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r19)->_ret_type;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 88, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    cpy_r_r22 = CPyDef_emit___Emitter___native_function_name(cpy_r_emitter, cpy_r_fn);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 89, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r23 = CPyStatics[71]; /* ', ' */
    cpy_r_r24 = PyUnicode_Join(cpy_r_r23, cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 90, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r25 = CPyStr_IsTrue(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL25;
    cpy_r_r26 = cpy_r_r24;
    goto CPyL15;
CPyL14: ;
    cpy_r_r27 = CPyStatics[7337]; /* 'void' */
    CPy_INCREF(cpy_r_r27);
    cpy_r_r26 = cpy_r_r27;
CPyL15: ;
    cpy_r_r28 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r29[4] = {cpy_r_r18, cpy_r_r21, cpy_r_r22, cpy_r_r26};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = CPyStatics[9958]; /* ('ret_type', 'name', 'args') */
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775809ULL, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 87, CPyStatic_emitfunc___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r26);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 87, CPyStatic_emitfunc___globals, "str", cpy_r_r32);
        goto CPyL18;
    }
    return cpy_r_r33;
CPyL18: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL19: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r21);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL18;
CPyL25: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL14;
CPyL26: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    goto CPyL18;
}

PyObject *CPyPy_emitfunc___native_function_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", 0};
    static CPyArg_Parser parser = {"OO:native_function_header", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncDecl))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___native_function_header(arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "native_function_header", 82, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___generate_native_function(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_declarations;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_body;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_visitor;
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
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_ctype;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_init;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_blocks;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_block;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_terminator;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_target;
    CPyTagged cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyTagged cpy_r_r91;
    int64_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_is_next_block;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyPtr cpy_r_r106;
    int64_t cpy_r_r107;
    CPyTagged cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    CPyTagged cpy_r_r116;
    char cpy_r_is_problematic_op;
    PyObject *cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_common;
    CPyPtr cpy_r_r128;
    int64_t cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_next_block;
    CPyTagged cpy_r_r141;
    CPyPtr cpy_r_r142;
    int64_t cpy_r_r143;
    CPyTagged cpy_r_r144;
    int64_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    CPyTagged cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_ops;
    char cpy_r_r155;
    char cpy_r_r156;
    CPyTagged cpy_r_r157;
    CPyPtr cpy_r_r158;
    int64_t cpy_r_r159;
    CPyTagged cpy_r_r160;
    int64_t cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    CPyTagged cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyTagged cpy_r_r170;
    char cpy_r_r171;
    CPyTagged cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 97, CPyStatic_emitfunc___globals);
        goto CPyL96;
    }
    cpy_r_declarations = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_arg_regs;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_pprint___generate_names_for_ir(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 98, CPyStatic_emitfunc___globals);
        goto CPyL97;
    }
    cpy_r_names = cpy_r_r6;
    cpy_r_r7 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter(cpy_r_r7, cpy_r_names, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 99, CPyStatic_emitfunc___globals);
        goto CPyL98;
    }
    cpy_r_body = cpy_r_r9;
    cpy_r_r10 = CPyDef_emitfunc___FunctionEmitterVisitor(cpy_r_body, cpy_r_declarations, cpy_r_source_path, cpy_r_module_name);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 100, CPyStatic_emitfunc___globals);
        goto CPyL99;
    }
    cpy_r_visitor = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_emitfunc___native_function_header(cpy_r_r11, cpy_r_emitter);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 102, CPyStatic_emitfunc___globals);
        goto CPyL100;
    }
    cpy_r_r13 = CPyStatics[6884]; /* ' {' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 102, CPyStatic_emitfunc___globals);
        goto CPyL100;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 102, CPyStatic_emitfunc___globals);
        goto CPyL100;
    }
    cpy_r_r17 = CPyDef_emit___Emitter___indent(cpy_r_body);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 103, CPyStatic_emitfunc___globals);
        goto CPyL100;
    }
    cpy_r_r18 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_arg_regs;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_func_ir___all_values(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 105, CPyStatic_emitfunc___globals);
        goto CPyL100;
    }
    cpy_r_r21 = 0;
CPyL10: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL101;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_ops___Value)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 105, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r26);
        goto CPyL102;
    }
    cpy_r_r = cpy_r_r27;
    cpy_r_r28 = ((mypyc___ir___ops___ValueObject *)cpy_r_r)->_type;
    cpy_r_r29 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL15;
    cpy_r_r33 = ((mypyc___ir___ops___ValueObject *)cpy_r_r)->_type;
    CPy_INCREF(cpy_r_r33);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_rtypes___RTuple))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 107, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r33);
        goto CPyL103;
    }
    cpy_r_r35 = CPyDef_emit___Emitter___declare_tuple_struct(cpy_r_emitter, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 107, CPyStatic_emitfunc___globals);
        goto CPyL103;
    }
CPyL15: ;
    cpy_r_r36 = ((mypyc___ir___ops___ValueObject *)cpy_r_r)->_type;
    cpy_r_r37 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (cpy_r_r40) goto CPyL104;
    cpy_r_r41 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_arg_regs;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = PySequence_Contains(cpy_r_r41, cpy_r_r);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 111, CPyStatic_emitfunc___globals);
        goto CPyL103;
    }
    cpy_r_r44 = cpy_r_r42;
    if (cpy_r_r44) goto CPyL104;
    cpy_r_r45 = ((mypyc___ir___ops___ValueObject *)cpy_r_r)->_type;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 114, CPyStatic_emitfunc___globals);
        goto CPyL103;
    }
    cpy_r_ctype = cpy_r_r46;
    cpy_r_r47 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r47);
    cpy_r_init = cpy_r_r47;
    cpy_r_r48 = CPyStatics[7340]; /* '{ctype}{prefix}{name}{init};' */
    cpy_r_r49 = CPyStatics[6862]; /* 'cpy_r_' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_names, cpy_r_r);
    CPy_DECREF(cpy_r_r);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 118, CPyStatic_emitfunc___globals);
        goto CPyL105;
    }
    if (likely(PyUnicode_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 118, CPyStatic_emitfunc___globals, "str", cpy_r_r50);
        goto CPyL105;
    }
    cpy_r_r52 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r53[5] = {cpy_r_r48, cpy_r_ctype, cpy_r_r49, cpy_r_r51, cpy_r_init};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = CPyStatics[9959]; /* ('ctype', 'prefix', 'name', 'init') */
    cpy_r_r56 = PyObject_VectorcallMethod(cpy_r_r52, cpy_r_r54, 9223372036854775809ULL, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 117, CPyStatic_emitfunc___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_ctype);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_init);
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 117, CPyStatic_emitfunc___globals, "str", cpy_r_r56);
        goto CPyL102;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 116, CPyStatic_emitfunc___globals);
        goto CPyL102;
    }
CPyL24: ;
    cpy_r_r60 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r60;
    goto CPyL10;
CPyL25: ;
    cpy_r_r61 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r61);
    cpy_r_blocks = cpy_r_r61;
    cpy_r_r62 = 0;
    cpy_r_i = 0;
    cpy_r_r63 = 0;
CPyL26: ;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = (Py_ssize_t)cpy_r_r63 < (Py_ssize_t)cpy_r_r66;
    if (!cpy_r_r67) goto CPyL107;
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r63);
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_ops___BasicBlock))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 124, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r68);
        goto CPyL108;
    }
    cpy_r_block = cpy_r_r69;
    CPyTagged_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label = cpy_r_i;
    CPy_DECREF(cpy_r_block);
    cpy_r_r71 = cpy_r_r62 + 2;
    cpy_r_r62 = cpy_r_r71;
    cpy_r_i = cpy_r_r71;
    cpy_r_r72 = cpy_r_r63 + 2;
    cpy_r_r63 = cpy_r_r72;
    goto CPyL26;
CPyL30: ;
    cpy_r_r73 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = 0;
CPyL31: ;
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 << 1;
    cpy_r_r78 = (Py_ssize_t)cpy_r_r74 < (Py_ssize_t)cpy_r_r77;
    if (!cpy_r_r78) goto CPyL109;
    cpy_r_r79 = CPyList_GetItemUnsafe(cpy_r_r73, cpy_r_r74);
    if (likely(Py_TYPE(cpy_r_r79) == CPyType_ops___BasicBlock))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 130, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r79);
        goto CPyL110;
    }
    cpy_r_block = cpy_r_r80;
    cpy_r_r81 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 131, CPyStatic_emitfunc___globals);
        goto CPyL111;
    }
CPyL34: ;
    cpy_r_terminator = cpy_r_r81;
    cpy_r_r82 = (PyObject *)CPyType_ops___ControlOp;
    cpy_r_r83 = CPy_TypeCheck(cpy_r_terminator, cpy_r_r82);
    if (cpy_r_r83) {
        goto CPyL37;
    } else
        goto CPyL112;
CPyL35: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 132, CPyStatic_emitfunc___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r85 = CPY_GET_METHOD(cpy_r_terminator, CPyType_ops___ControlOp, 9, mypyc___ir___ops___ControlOpObject, PyObject * (*)(PyObject *))(cpy_r_terminator); /* targets */
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 134, CPyStatic_emitfunc___globals);
        goto CPyL113;
    }
    cpy_r_r86 = PyObject_GetIter(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 134, CPyStatic_emitfunc___globals);
        goto CPyL113;
    }
CPyL39: ;
    cpy_r_r87 = PyIter_Next(cpy_r_r86);
    if (cpy_r_r87 == NULL) goto CPyL114;
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_ops___BasicBlock))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 134, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r87);
        goto CPyL115;
    }
    cpy_r_target = cpy_r_r88;
    cpy_r_r89 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_target)->_label;
    CPyTagged_INCREF(cpy_r_r89);
    cpy_r_r90 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_label;
    cpy_r_r91 = CPyTagged_Add(cpy_r_r90, 2);
    cpy_r_r92 = cpy_r_r89 & 1;
    cpy_r_r93 = cpy_r_r92 == 0;
    if (!cpy_r_r93) goto CPyL43;
    cpy_r_r94 = cpy_r_r89 == cpy_r_r91;
    CPyTagged_DECREF(cpy_r_r89);
    CPyTagged_DECREF(cpy_r_r91);
    cpy_r_r95 = cpy_r_r94;
    goto CPyL44;
CPyL43: ;
    cpy_r_r96 = CPyTagged_IsEq_(cpy_r_r89, cpy_r_r91);
    CPyTagged_DECREF(cpy_r_r89);
    CPyTagged_DECREF(cpy_r_r91);
    cpy_r_r95 = cpy_r_r96;
CPyL44: ;
    cpy_r_is_next_block = cpy_r_r95;
    cpy_r_r97 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_terminator)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (cpy_r_r100) goto CPyL46;
    cpy_r_r101 = cpy_r_r100;
    goto CPyL55;
CPyL46: ;
    cpy_r_r102 = 0;
    CPy_INCREF(cpy_r_terminator);
    if (likely(Py_TYPE(cpy_r_terminator) == CPyType_ops___Branch))
        cpy_r_r103 = cpy_r_terminator;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 143, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_terminator);
        goto CPyL116;
    }
    cpy_r_r104 = CPyDef_ops___Branch___sources(cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 143, CPyStatic_emitfunc___globals);
        goto CPyL116;
    }
    cpy_r_r105 = 0;
CPyL49: ;
    cpy_r_r106 = (CPyPtr)&((PyVarObject *)cpy_r_r104)->ob_size;
    cpy_r_r107 = *(int64_t *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 << 1;
    cpy_r_r109 = (Py_ssize_t)cpy_r_r105 < (Py_ssize_t)cpy_r_r108;
    if (!cpy_r_r109) goto CPyL117;
    cpy_r_r110 = CPyList_GetItemUnsafe(cpy_r_r104, cpy_r_r105);
    if (likely(PyObject_TypeCheck(cpy_r_r110, CPyType_ops___Value)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 142, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r110);
        goto CPyL118;
    }
    cpy_r_s = cpy_r_r111;
    cpy_r_r112 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    CPy_DECREF(cpy_r_s);
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    if (cpy_r_r115) {
        goto CPyL119;
    } else
        goto CPyL53;
CPyL52: ;
    cpy_r_r102 = 1;
    goto CPyL54;
CPyL53: ;
    cpy_r_r116 = cpy_r_r105 + 2;
    cpy_r_r105 = cpy_r_r116;
    goto CPyL49;
CPyL54: ;
    cpy_r_r101 = cpy_r_r102;
CPyL55: ;
    cpy_r_is_problematic_op = cpy_r_r101;
    if (!cpy_r_is_next_block) goto CPyL57;
    if (!cpy_r_is_problematic_op) goto CPyL120;
CPyL57: ;
    cpy_r_r117 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    cpy_r_r118 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_target)->_label;
    cpy_r_r119 = CPyList_GetItemBorrow(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 147, CPyStatic_emitfunc___globals);
        goto CPyL116;
    }
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_ops___BasicBlock))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 147, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r119);
        goto CPyL116;
    }
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_r120)->_referenced = 1;
    CPy_DECREF(cpy_r_target);
    goto CPyL39;
CPyL60: ;
    cpy_r_r122 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 134, CPyStatic_emitfunc___globals);
        goto CPyL110;
    }
    cpy_r_r123 = cpy_r_r74 + 2;
    cpy_r_r74 = cpy_r_r123;
    goto CPyL31;
CPyL62: ;
    cpy_r_r124 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    cpy_r_r125 = CPyList_GetItemShort(cpy_r_r124, 0);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 149, CPyStatic_emitfunc___globals);
        goto CPyL121;
    }
    if (likely(Py_TYPE(cpy_r_r125) == CPyType_ops___BasicBlock))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 149, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r125);
        goto CPyL121;
    }
    cpy_r_r127 = CPyDef_blockfreq___frequently_executed_blocks(cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 149, CPyStatic_emitfunc___globals);
        goto CPyL121;
    }
    cpy_r_common = cpy_r_r127;
    cpy_r_r128 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r129 = *(int64_t *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 << 1;
    cpy_r_r131 = 0;
    cpy_r_i = cpy_r_r131;
CPyL66: ;
    cpy_r_r132 = (Py_ssize_t)cpy_r_r131 < (Py_ssize_t)cpy_r_r130;
    if (!cpy_r_r132) goto CPyL122;
    cpy_r_r133 = CPyList_GetItem(cpy_r_blocks, cpy_r_i);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 152, CPyStatic_emitfunc___globals);
        goto CPyL123;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_ops___BasicBlock))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 152, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r133);
        goto CPyL123;
    }
    cpy_r_block = cpy_r_r134;
    cpy_r_r135 = PySet_Contains(cpy_r_common, cpy_r_block);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 153, CPyStatic_emitfunc___globals);
        goto CPyL124;
    }
    cpy_r_r137 = cpy_r_r135;
    cpy_r_r138 = cpy_r_r137 ^ 1;
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_rare = cpy_r_r138;
    cpy_r_r139 = 1;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 153, CPyStatic_emitfunc___globals);
        goto CPyL124;
    }
    cpy_r_r140 = Py_None;
    CPy_INCREF(cpy_r_r140);
    cpy_r_next_block = cpy_r_r140;
    cpy_r_r141 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r142 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r143 = *(int64_t *)cpy_r_r142;
    cpy_r_r144 = cpy_r_r143 << 1;
    cpy_r_r145 = cpy_r_r141 & 1;
    cpy_r_r146 = cpy_r_r145 != 0;
    if (!cpy_r_r146) goto CPyL73;
    cpy_r_r147 = CPyTagged_IsLt_(cpy_r_r141, cpy_r_r144);
    CPyTagged_DECREF(cpy_r_r141);
    if (cpy_r_r147) {
        goto CPyL125;
    } else
        goto CPyL126;
CPyL73: ;
    cpy_r_r148 = (Py_ssize_t)cpy_r_r141 < (Py_ssize_t)cpy_r_r144;
    CPyTagged_DECREF(cpy_r_r141);
    if (cpy_r_r148) {
        goto CPyL125;
    } else
        goto CPyL126;
CPyL74: ;
    cpy_r_r149 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r150 = CPyList_GetItem(cpy_r_blocks, cpy_r_r149);
    CPyTagged_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 156, CPyStatic_emitfunc___globals);
        goto CPyL127;
    }
    if (likely(Py_TYPE(cpy_r_r150) == CPyType_ops___BasicBlock))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 156, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r150);
        goto CPyL127;
    }
    cpy_r_next_block = cpy_r_r151;
CPyL77: ;
    cpy_r_r152 = CPyDef_emit___Emitter___emit_label(cpy_r_body, cpy_r_block);
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 157, CPyStatic_emitfunc___globals);
        goto CPyL128;
    }
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_next_block != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_next_block);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_next_block = cpy_r_next_block;
    cpy_r_r153 = 1;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 158, CPyStatic_emitfunc___globals);
        goto CPyL127;
    }
    cpy_r_r154 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r154);
    CPy_DECREF(cpy_r_block);
    cpy_r_ops = cpy_r_r154;
    CPy_INCREF(cpy_r_ops);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_ops != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_ops);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_ops = cpy_r_ops;
    cpy_r_r155 = 1;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 161, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index = 0;
    cpy_r_r156 = 1;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 162, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
CPyL81: ;
    cpy_r_r157 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index;
    if (unlikely(cpy_r_r157 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "generate_native_function", "FunctionEmitterVisitor", "op_index", 163, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
    CPyTagged_INCREF(cpy_r_r157);
CPyL82: ;
    cpy_r_r158 = (CPyPtr)&((PyVarObject *)cpy_r_ops)->ob_size;
    cpy_r_r159 = *(int64_t *)cpy_r_r158;
    cpy_r_r160 = cpy_r_r159 << 1;
    cpy_r_r161 = cpy_r_r157 & 1;
    cpy_r_r162 = cpy_r_r161 != 0;
    if (!cpy_r_r162) goto CPyL84;
    cpy_r_r163 = CPyTagged_IsLt_(cpy_r_r157, cpy_r_r160);
    CPyTagged_DECREF(cpy_r_r157);
    if (cpy_r_r163) {
        goto CPyL85;
    } else
        goto CPyL130;
CPyL84: ;
    cpy_r_r164 = (Py_ssize_t)cpy_r_r157 < (Py_ssize_t)cpy_r_r160;
    CPyTagged_DECREF(cpy_r_r157);
    if (!cpy_r_r164) goto CPyL130;
CPyL85: ;
    cpy_r_r165 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index;
    if (unlikely(cpy_r_r165 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "generate_native_function", "FunctionEmitterVisitor", "op_index", 164, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
CPyL86: ;
    cpy_r_r166 = CPyList_GetItem(cpy_r_ops, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 164, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r166, CPyType_ops___Op)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 164, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Op", cpy_r_r166);
        goto CPyL129;
    }
    cpy_r_r168 = CPY_GET_METHOD(cpy_r_r167, CPyType_ops___Op, 7, mypyc___ir___ops___OpObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r167, cpy_r_visitor); /* accept */
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 164, CPyStatic_emitfunc___globals);
        goto CPyL129;
    } else
        goto CPyL131;
CPyL89: ;
    cpy_r_r169 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index;
    if (unlikely(cpy_r_r169 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "generate_native_function", "FunctionEmitterVisitor", "op_index", 165, CPyStatic_emitfunc___globals);
        goto CPyL129;
    }
CPyL90: ;
    cpy_r_r170 = CPyTagged_Add(cpy_r_r169, 2);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_visitor)->_op_index = cpy_r_r170;
    cpy_r_r171 = 1;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 165, CPyStatic_emitfunc___globals);
        goto CPyL129;
    } else
        goto CPyL81;
CPyL91: ;
    cpy_r_r172 = cpy_r_r131 + 2;
    cpy_r_r131 = cpy_r_r172;
    cpy_r_i = cpy_r_r172;
    goto CPyL66;
CPyL92: ;
    cpy_r_r173 = CPyStatics[1406]; /* '}' */
    cpy_r_r174 = NULL;
    cpy_r_r175 = CPyDef_emit___Emitter___emit_line(cpy_r_body, cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 167, CPyStatic_emitfunc___globals);
        goto CPyL132;
    }
    cpy_r_r176 = CPyDef_emit___Emitter___emit_from_emitter(cpy_r_emitter, cpy_r_declarations);
    CPy_DECREF(cpy_r_declarations);
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 169, CPyStatic_emitfunc___globals);
        goto CPyL133;
    }
    cpy_r_r177 = CPyDef_emit___Emitter___emit_from_emitter(cpy_r_emitter, cpy_r_body);
    CPy_DECREF(cpy_r_body);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 170, CPyStatic_emitfunc___globals);
        goto CPyL96;
    }
    return 1;
CPyL96: ;
    cpy_r_r178 = 2;
    return cpy_r_r178;
CPyL97: ;
    CPy_DecRef(cpy_r_declarations);
    goto CPyL96;
CPyL98: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    goto CPyL96;
CPyL99: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    goto CPyL96;
CPyL100: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    goto CPyL96;
CPyL101: ;
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_r20);
    goto CPyL25;
CPyL102: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r20);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r);
    goto CPyL96;
CPyL104: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL24;
CPyL105: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_ctype);
    CPy_DecRef(cpy_r_init);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_ctype);
    CPy_DecRef(cpy_r_init);
    CPy_DecRef(cpy_r_r51);
    goto CPyL96;
CPyL107: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL30;
CPyL108: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL96;
CPyL109: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL62;
CPyL110: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_r73);
    goto CPyL96;
CPyL111: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r73);
    goto CPyL96;
CPyL112: ;
    CPy_DECREF(cpy_r_declarations);
    CPy_DECREF(cpy_r_body);
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_blocks);
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_terminator);
    goto CPyL35;
CPyL113: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_terminator);
    goto CPyL96;
CPyL114: ;
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_terminator);
    CPy_DECREF(cpy_r_r86);
    goto CPyL60;
CPyL115: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_terminator);
    CPy_DecRef(cpy_r_r86);
    goto CPyL96;
CPyL116: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_terminator);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_target);
    goto CPyL96;
CPyL117: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL54;
CPyL118: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_terminator);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r104);
    goto CPyL96;
CPyL119: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL52;
CPyL120: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL39;
CPyL121: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    goto CPyL96;
CPyL122: ;
    CPy_DECREF(cpy_r_visitor);
    CPy_DECREF(cpy_r_blocks);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_common);
    goto CPyL92;
CPyL123: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_common);
    goto CPyL96;
CPyL124: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_common);
    goto CPyL96;
CPyL125: ;
    CPy_DECREF(cpy_r_next_block);
    goto CPyL74;
CPyL126: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL77;
CPyL127: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_common);
    goto CPyL96;
CPyL128: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_common);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL96;
CPyL129: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_common);
    CPy_DecRef(cpy_r_ops);
    goto CPyL96;
CPyL130: ;
    CPy_DECREF(cpy_r_ops);
    goto CPyL91;
CPyL131: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL89;
CPyL132: ;
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_body);
    goto CPyL96;
CPyL133: ;
    CPy_DecRef(cpy_r_body);
    goto CPyL96;
}

PyObject *CPyPy_emitfunc___generate_native_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "source_path", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_native_function", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_source_path, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
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
    char retval = CPyDef_emitfunc___generate_native_function(arg_fn, arg_emitter, arg_source_path, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "generate_native_function", 94, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_emitter, PyObject *cpy_r_declarations, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPy_INCREF(cpy_r_emitter);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter = cpy_r_emitter;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 177, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r1);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 178, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_declarations);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_declarations != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_declarations);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_declarations = cpy_r_declarations;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 179, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_source_path);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path = cpy_r_source_path;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 180, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_module_name);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name = cpy_r_module_name;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 181, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_r6 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r7 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r6)->_literals;
    CPy_INCREF(cpy_r_r7);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_literals != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_literals);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_literals = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 182, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_rare = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 183, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 185, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 187, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_ops != NULL) {
        CPy_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_ops);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_ops = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 187, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index = 0;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 189, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"emitter", "declarations", "source_path", "module_name", 0};
    PyObject *obj_emitter;
    PyObject *obj_declarations;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_emitter, &obj_declarations, &obj_source_path, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_declarations;
    if (likely(Py_TYPE(obj_declarations) == CPyType_emit___Emitter))
        arg_declarations = obj_declarations;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_declarations); 
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
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor_____init__(arg_self, arg_emitter, arg_declarations, arg_source_path, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__init__", 174, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___temp_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "temp_name", "FunctionEmitterVisitor", "emitter", 192, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_emit___Emitter___temp_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "temp_name", 192, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___temp_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":temp_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___temp_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "temp_name", 191, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___ir___ops___GotoObject *)cpy_r_op)->_label;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_goto", "FunctionEmitterVisitor", "next_block", 195, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 ^ 1;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = ((mypyc___ir___ops___GotoObject *)cpy_r_op)->_label;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_goto", 196, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r6 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r7 = CPyStatics[6886]; /* ';' */
    cpy_r_r8 = CPyStr_Build(3, cpy_r_r6, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_goto", 196, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_goto", 196, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_goto", 194, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_goto__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_goto__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Goto))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Goto", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_goto__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_goto__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_true;
    PyObject *cpy_r_false;
    char cpy_r_r4;
    char cpy_r_negated;
    char cpy_r_negated_rare;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_neg;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_cond;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_expr_result;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_compare;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    cpy_r_r0 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_true;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_false;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = cpy_r_r2;
    cpy_r_true = cpy_r_r1;
    cpy_r_false = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_negated;
    cpy_r_negated = cpy_r_r4;
    cpy_r_negated_rare = 0;
    cpy_r_r5 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_branch", "FunctionEmitterVisitor", "next_block", 202, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r5);
CPyL1: ;
    cpy_r_r6 = cpy_r_true == cpy_r_r5;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 == cpy_r_r8;
    if (!cpy_r_r9) goto CPyL4;
    cpy_r_r10 = cpy_r_false;
    cpy_r_r11 = cpy_r_true;
    cpy_r_true = cpy_r_r10;
    cpy_r_false = cpy_r_r11;
    cpy_r_r12 = cpy_r_negated ^ 1;
    cpy_r_negated = cpy_r_r12;
    cpy_r_negated_rare = 1;
CPyL4: ;
    if (!cpy_r_negated) goto CPyL6;
    cpy_r_r13 = CPyStatics[2432]; /* '!' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r13;
    goto CPyL7;
CPyL6: ;
    cpy_r_r15 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL7: ;
    cpy_r_neg = cpy_r_r14;
    cpy_r_r16 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r16);
    cpy_r_cond = cpy_r_r16;
    cpy_r_r17 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_op;
    cpy_r_r18 = cpy_r_r17 == 200;
    if (cpy_r_r18) {
        goto CPyL67;
    } else
        goto CPyL68;
CPyL8: ;
    cpy_r_r19 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 211, CPyStatic_emitfunc___globals);
        goto CPyL69;
    }
    cpy_r_expr_result = cpy_r_r20;
    cpy_r_r21 = CPyStr_Build(2, cpy_r_neg, cpy_r_expr_result);
    CPy_DECREF(cpy_r_neg);
    CPy_DECREF(cpy_r_expr_result);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 212, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_cond = cpy_r_r21;
    goto CPyL29;
CPyL11: ;
    cpy_r_r22 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_op;
    cpy_r_r23 = cpy_r_r22 == 202;
    if (cpy_r_r23) {
        goto CPyL70;
    } else
        goto CPyL26;
CPyL12: ;
    cpy_r_r24 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_value;
    cpy_r_r25 = ((mypyc___ir___ops___ValueObject *)cpy_r_r24)->_type;
    CPy_INCREF(cpy_r_r25);
    cpy_r_typ = cpy_r_r25;
    if (!cpy_r_negated) goto CPyL14;
    cpy_r_r26 = CPyStatics[863]; /* '!=' */
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r26;
    goto CPyL15;
CPyL14: ;
    cpy_r_r28 = CPyStatics[860]; /* '==' */
    CPy_INCREF(cpy_r_r28);
    cpy_r_r27 = cpy_r_r28;
CPyL15: ;
    cpy_r_compare = cpy_r_r27;
    cpy_r_r29 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL22;
    cpy_r_r33 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_branch", "FunctionEmitterVisitor", "emitter", 218, CPyStatic_emitfunc___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r33);
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RTuple))
        cpy_r_r34 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 219, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RTuple", cpy_r_typ);
        goto CPyL72;
    }
    cpy_r_r35 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 219, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_r37 = CPyStatics[6901]; /* 'c_error_value' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_self, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 219, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_emit___Emitter___tuple_undefined_check_cond(cpy_r_r33, cpy_r_r34, cpy_r_r36, cpy_r_r38, cpy_r_compare, cpy_r_r39);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_compare);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 218, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_cond = cpy_r_r40;
    goto CPyL29;
CPyL22: ;
    cpy_r_r41 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 222, CPyStatic_emitfunc___globals);
        goto CPyL71;
    }
    cpy_r_r43 = CPyStatics[295]; /* ' ' */
    cpy_r_r44 = CPyStatics[295]; /* ' ' */
    cpy_r_r45 = CPyDef_emitfunc___FunctionEmitterVisitor___c_error_value(cpy_r_self, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 222, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    cpy_r_r46 = CPyStr_Build(5, cpy_r_r42, cpy_r_r43, cpy_r_compare, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_compare);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 222, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_cond = cpy_r_r46;
    goto CPyL29;
CPyL26: ;
    if (0) {
        goto CPyL29;
    } else
        goto CPyL76;
CPyL27: ;
    PyErr_SetString(PyExc_AssertionError, "Invalid branch");
    cpy_r_r47 = 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 224, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r48 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_r48 != cpy_r_r49;
    if (cpy_r_r50) goto CPyL31;
    cpy_r_r51 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_rare;
    if (!cpy_r_r51) goto CPyL36;
CPyL31: ;
    if (cpy_r_negated_rare) goto CPyL34;
    cpy_r_r52 = CPyStatics[6896]; /* 'unlikely(' */
    cpy_r_r53 = CPyStatics[72]; /* ')' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r52, cpy_r_cond, cpy_r_r53);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 229, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_cond = cpy_r_r54;
    goto CPyL36;
CPyL34: ;
    cpy_r_r55 = CPyStatics[7342]; /* 'likely(' */
    cpy_r_r56 = CPyStatics[72]; /* ')' */
    cpy_r_r57 = CPyStr_Build(3, cpy_r_r55, cpy_r_cond, cpy_r_r56);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 231, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_cond = cpy_r_r57;
CPyL36: ;
    cpy_r_r58 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_branch", "FunctionEmitterVisitor", "next_block", 233, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r58);
CPyL37: ;
    cpy_r_r59 = cpy_r_false == cpy_r_r58;
    CPy_DECREF(cpy_r_r58);
    if (cpy_r_r59) {
        goto CPyL78;
    } else
        goto CPyL52;
CPyL38: ;
    cpy_r_r60 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_r60 == cpy_r_r61;
    if (!cpy_r_r62) goto CPyL45;
    cpy_r_r63 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_branch", "FunctionEmitterVisitor", "next_block", 235, CPyStatic_emitfunc___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r63);
CPyL40: ;
    if (likely(cpy_r_r63 != Py_None))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 235, CPyStatic_emitfunc___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r63);
        goto CPyL79;
    }
    cpy_r_r65 = cpy_r_true == cpy_r_r64;
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 ^ 1;
    if (!cpy_r_r66) goto CPyL80;
    cpy_r_r67 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r68 = CPyStatics[7343]; /* ') goto ' */
    cpy_r_r69 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_true);
    CPy_DECREF(cpy_r_true);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 236, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    cpy_r_r70 = CPyStatics[6886]; /* ';' */
    cpy_r_r71 = CPyStr_Build(5, cpy_r_r67, cpy_r_cond, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 236, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r72 = NULL;
    cpy_r_r73 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 236, CPyStatic_emitfunc___globals);
        goto CPyL65;
    } else
        goto CPyL64;
CPyL45: ;
    cpy_r_r74 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r75 = CPyStatics[6900]; /* ') {' */
    cpy_r_r76 = CPyStr_Build(3, cpy_r_r74, cpy_r_cond, cpy_r_r75);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 238, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 238, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_r79 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_traceback(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 239, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_r80 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_true);
    CPy_DECREF(cpy_r_true);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 240, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r81 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r82 = CPyStatics[6886]; /* ';' */
    cpy_r_r83 = CPyStr_Build(3, cpy_r_r81, cpy_r_r80, cpy_r_r82);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 240, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r84 = CPyStatics[1406]; /* '}' */
    cpy_r_r85 = PyTuple_Pack(2, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 240, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r86 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_lines(cpy_r_self, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 240, CPyStatic_emitfunc___globals);
        goto CPyL65;
    } else
        goto CPyL64;
CPyL52: ;
    cpy_r_r87 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r88 = CPyStatics[6900]; /* ') {' */
    cpy_r_r89 = CPyStr_Build(3, cpy_r_r87, cpy_r_cond, cpy_r_r88);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 242, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 242, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_r92 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_traceback(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 243, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_r93 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_branch", "FunctionEmitterVisitor", "next_block", 245, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r93);
CPyL56: ;
    cpy_r_r94 = cpy_r_true == cpy_r_r93;
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 ^ 1;
    if (!cpy_r_r95) goto CPyL83;
    cpy_r_r96 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_true);
    CPy_DECREF(cpy_r_true);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 246, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_r97 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r98 = CPyStatics[6886]; /* ';' */
    cpy_r_r99 = CPyStr_Build(3, cpy_r_r97, cpy_r_r96, cpy_r_r98);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 246, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 246, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
CPyL60: ;
    cpy_r_r102 = CPyStatics[6961]; /* '} else' */
    cpy_r_r103 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_false);
    CPy_DECREF(cpy_r_false);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 248, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r104 = CPyStatics[7344]; /* '    goto ' */
    cpy_r_r105 = CPyStatics[6886]; /* ';' */
    cpy_r_r106 = CPyStr_Build(3, cpy_r_r104, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 248, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r107 = PyTuple_Pack(2, cpy_r_r102, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 248, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r108 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_lines(cpy_r_self, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 248, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
CPyL64: ;
    return 1;
CPyL65: ;
    cpy_r_r109 = 2;
    return cpy_r_r109;
CPyL66: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    goto CPyL65;
CPyL67: ;
    CPy_DECREF(cpy_r_cond);
    goto CPyL8;
CPyL68: ;
    CPy_DECREF(cpy_r_neg);
    goto CPyL11;
CPyL69: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_neg);
    goto CPyL65;
CPyL70: ;
    CPy_DECREF(cpy_r_cond);
    goto CPyL12;
CPyL71: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_compare);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_compare);
    CPy_DecRef(cpy_r_r33);
    goto CPyL65;
CPyL73: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_compare);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL65;
CPyL74: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_compare);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_compare);
    CPy_DecRef(cpy_r_r42);
    goto CPyL65;
CPyL76: ;
    CPy_DECREF(cpy_r_true);
    CPy_DECREF(cpy_r_false);
    CPy_DECREF(cpy_r_cond);
    goto CPyL27;
CPyL77: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_false);
    CPy_DecRef(cpy_r_cond);
    goto CPyL65;
CPyL78: ;
    CPy_DECREF(cpy_r_false);
    goto CPyL38;
CPyL79: ;
    CPy_DecRef(cpy_r_true);
    CPy_DecRef(cpy_r_cond);
    goto CPyL65;
CPyL80: ;
    CPy_DECREF(cpy_r_true);
    CPy_DECREF(cpy_r_cond);
    goto CPyL64;
CPyL81: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_true);
    goto CPyL65;
CPyL83: ;
    CPy_DECREF(cpy_r_true);
    goto CPyL60;
CPyL84: ;
    CPy_DecRef(cpy_r_false);
    goto CPyL65;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch", 198, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_branch__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_branch__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_branch__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_branch__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_return(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_value_str;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___ir___ops___ReturnObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_return", 251, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    cpy_r_value_str = cpy_r_r1;
    cpy_r_r2 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r3 = CPyStatics[6886]; /* ';' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r2, cpy_r_value_str, cpy_r_r3);
    CPy_DECREF(cpy_r_value_str);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_return", 252, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_return", 252, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_return(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_return", 250, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_return__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_return(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_return__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_return__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Return))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Return", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_return__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_return__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_tuple_type;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 255, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___TupleSetObject *)cpy_r_op)->_tuple_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_tuple_type = cpy_r_r1;
    cpy_r_r2 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_tuple_set", "FunctionEmitterVisitor", "emitter", 257, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyDef_emit___Emitter___declare_tuple_struct(cpy_r_r2, cpy_r_tuple_type);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 257, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r4 = ((mypyc___ir___ops___TupleSetObject *)cpy_r_op)->_items;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 == 0;
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = CPyStatics[6979]; /* '.empty_struct_error_flag = 0;' */
    cpy_r_r10 = CPyStr_Build(2, cpy_r_dest, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 259, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 259, CPyStatic_emitfunc___globals);
        goto CPyL17;
    } else
        goto CPyL14;
CPyL6: ;
    cpy_r_r13 = 0;
    cpy_r_i = 0;
    cpy_r_r14 = ((mypyc___ir___ops___TupleSetObject *)cpy_r_op)->_items;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 0;
CPyL7: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_ops___Value)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 261, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r20);
        goto CPyL19;
    }
    cpy_r_item = cpy_r_r21;
    cpy_r_r22 = CPyStatics[6903]; /* '.f' */
    cpy_r_r23 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 262, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r25 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 262, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_r26 = CPyStatics[6886]; /* ';' */
    cpy_r_r27 = CPyStr_Build(6, cpy_r_dest, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 262, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 262, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    cpy_r_r30 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r30;
    cpy_r_i = cpy_r_r30;
    cpy_r_r31 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r31;
    goto CPyL7;
CPyL14: ;
    cpy_r_r32 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(cpy_r_self, cpy_r_dest, cpy_r_tuple_type);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_tuple_type);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 263, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL17: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_tuple_type);
    goto CPyL16;
CPyL18: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r14);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_tuple_type);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r14);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_tuple_type);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_item);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_tuple_type);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r23);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_tuple_type);
    CPy_DecRef(cpy_r_r14);
    goto CPyL16;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set", 254, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_set__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_set__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleSet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleSet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_set__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_set__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_src;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 266, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_dest = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 267, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_src = cpy_r_r3;
    cpy_r_r4 = PyUnicode_Compare(cpy_r_dest, cpy_r_src);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 270, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 != 0;
    if (!cpy_r_r9) goto CPyL16;
    cpy_r_r10 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_src;
    cpy_r_r11 = ((mypyc___ir___ops___ValueObject *)cpy_r_r10)->_type;
    cpy_r_r12 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r11)->_is_unboxed;
    if (!cpy_r_r12) goto CPyL10;
CPyL7: ;
    cpy_r_r13 = ((mypyc___ir___ops___AssignObject *)cpy_r_op)->_dest;
    cpy_r_r14 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r13)->_type;
    cpy_r_r15 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r14)->_is_unboxed;
    if (cpy_r_r15) goto CPyL10;
CPyL8: ;
    cpy_r_r16 = CPyStatics[7345]; /* '(void *)' */
    cpy_r_r17 = CPyStr_Build(2, cpy_r_r16, cpy_r_src);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 274, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_src = cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r19 = CPyStatics[6886]; /* ';' */
    cpy_r_r20 = CPyStr_Build(4, cpy_r_dest, cpy_r_r18, cpy_r_src, cpy_r_r19);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 275, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 275, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL14: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    goto CPyL12;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign", 265, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Assign))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Assign", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    cpy_r_r1 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r0)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_rtypes___RArray;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL3;
    } else
        goto CPyL20;
CPyL1: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 279, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r7 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 280, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_dest = cpy_r_r8;
    cpy_r_r9 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_assign_multi", "FunctionEmitterVisitor", "emitter", 286, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_rtypes___RArray))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 286, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RArray", cpy_r_typ);
        goto CPyL23;
    }
    cpy_r_r11 = ((mypyc___ir___rtypes___RArrayObject *)cpy_r_r10)->_item_type;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r12 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 286, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r13 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_src;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = CPyTagged_Str(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 284, CPyStatic_emitfunc___globals);
        goto CPyL25;
    }
    cpy_r_r18 = ((mypyc___ir___ops___AssignMultiObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = PyList_New(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 289, CPyStatic_emitfunc___globals);
        goto CPyL26;
    }
    cpy_r_r22 = 0;
CPyL10: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL27;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_ops___Value)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 289, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r27);
        goto CPyL28;
    }
    cpy_r_s = cpy_r_r28;
    cpy_r_r29 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 289, CPyStatic_emitfunc___globals);
        goto CPyL28;
    }
    cpy_r_r30 = CPyList_SetItemUnsafe(cpy_r_r21, cpy_r_r22, cpy_r_r29);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 289, CPyStatic_emitfunc___globals);
        goto CPyL28;
    }
    cpy_r_r31 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r31;
    goto CPyL10;
CPyL15: ;
    cpy_r_r32 = CPyDef_emit___c_array_initializer(cpy_r_r21, 1);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 289, CPyStatic_emitfunc___globals);
        goto CPyL29;
    }
    cpy_r_r33 = CPyStatics[207]; /* '[' */
    cpy_r_r34 = CPyStatics[7346]; /* '] = ' */
    cpy_r_r35 = CPyStatics[6886]; /* ';' */
    cpy_r_r36 = CPyStr_Build(7, cpy_r_r12, cpy_r_dest, cpy_r_r33, cpy_r_r17, cpy_r_r34, cpy_r_r32, cpy_r_r35);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 284, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 283, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL20: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL1;
CPyL21: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r9);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r12);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
CPyL27: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL15;
CPyL28: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    goto CPyL19;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign_multi(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi", 277, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_assign_multi__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_assign_multi__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___AssignMulti))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.AssignMulti", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_assign_multi__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_assign_multi__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_tmp;
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
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_op)->_type;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL19;
    cpy_r_r5 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_op)->_type;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_rtypes___RTuple))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r5);
        goto CPyL24;
    }
    cpy_r_r7 = ((mypyc___ir___rtypes___RTupleObject *)cpy_r_r6)->_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals);
        goto CPyL25;
    }
    cpy_r_r11 = 0;
CPyL4: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL26;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_r7, cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_rtypes___RType)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RType", cpy_r_r16);
        goto CPyL27;
    }
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = CPyDef_emitfunc___FunctionEmitterVisitor___c_undefined_value(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 295, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL4;
CPyL10: ;
    cpy_r_values = cpy_r_r10;
    cpy_r_r21 = CPyDef_emitfunc___FunctionEmitterVisitor___temp_name(cpy_r_self);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 296, CPyStatic_emitfunc___globals);
        goto CPyL28;
    }
    cpy_r_tmp = cpy_r_r21;
    cpy_r_r22 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r22);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_rtypes___RTuple))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 297, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r22);
        goto CPyL29;
    }
    cpy_r_r24 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 297, CPyStatic_emitfunc___globals);
        goto CPyL29;
    }
    cpy_r_r25 = CPyStatics[71]; /* ', ' */
    cpy_r_r26 = PyUnicode_Join(cpy_r_r25, cpy_r_values);
    CPy_DECREF(cpy_r_values);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 297, CPyStatic_emitfunc___globals);
        goto CPyL30;
    }
    cpy_r_r27 = CPyStatics[295]; /* ' ' */
    cpy_r_r28 = CPyStatics[7347]; /* ' = { ' */
    cpy_r_r29 = CPyStatics[7348]; /* ' };' */
    cpy_r_r30 = CPyStr_Build(6, cpy_r_r24, cpy_r_r27, cpy_r_tmp, cpy_r_r28, cpy_r_r26, cpy_r_r29);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 297, CPyStatic_emitfunc___globals);
        goto CPyL31;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 297, CPyStatic_emitfunc___globals);
        goto CPyL31;
    }
    cpy_r_r33 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 298, CPyStatic_emitfunc___globals);
        goto CPyL31;
    }
    cpy_r_r34 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r35 = CPyStatics[6886]; /* ';' */
    cpy_r_r36 = CPyStr_Build(4, cpy_r_r33, cpy_r_r34, cpy_r_tmp, cpy_r_r35);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_tmp);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 298, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 298, CPyStatic_emitfunc___globals);
        goto CPyL24;
    } else
        goto CPyL23;
CPyL19: ;
    cpy_r_r39 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 300, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r40 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r41 = ((mypyc___ir___ops___LoadErrorValueObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_emitfunc___FunctionEmitterVisitor___c_error_value(cpy_r_self, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 300, CPyStatic_emitfunc___globals);
        goto CPyL32;
    }
    cpy_r_r43 = CPyStatics[6886]; /* ';' */
    cpy_r_r44 = CPyStr_Build(4, cpy_r_r39, cpy_r_r40, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 300, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 300, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
CPyL23: ;
    return 1;
CPyL24: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL25: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL10;
CPyL27: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_tmp);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_tmp);
    CPy_DecRef(cpy_r_r24);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_tmp);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL24;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value", 293, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_error_value__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_error_value__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadErrorValue))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadErrorValue", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_error_value__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_error_value__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_literals;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_load_literal", "FunctionEmitterVisitor", "literals", 303, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_codegen___literals___Literals___literal_index(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 303, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_index = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 304, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    if (cpy_r_r4) goto CPyL8;
    cpy_r_r5 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 305, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_r6 = CPyTagged_Str(cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 305, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_r7 = CPyStatics[7349]; /* ' = CPyStatics[' */
    cpy_r_r8 = CPyStatics[7142]; /* '];' */
    cpy_r_r9 = CPyStr_Build(4, cpy_r_r5, cpy_r_r7, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 305, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_r10 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 305, CPyStatic_emitfunc___globals);
        goto CPyL13;
    } else
        goto CPyL12;
CPyL8: ;
    cpy_r_r12 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 308, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_r13 = CPyTagged_Str(cpy_r_index);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 308, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPyStatics[7350]; /* ' = (CPyTagged)CPyStatics[' */
    cpy_r_r15 = CPyStatics[7351]; /* '] | 1;' */
    cpy_r_r16 = CPyStr_Build(4, cpy_r_r12, cpy_r_r14, cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 308, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_r17 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 307, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal", 302, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_literal__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_literal__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadLiteral))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadLiteral", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_literal__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_literal__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___get_attr_expr(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_op, PyObject *cpy_r_decl_cl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
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
    PyObject *cpy_r_cast;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
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
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_trait_attr_index;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_offset;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
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
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
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
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_attr_cast;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyPtr cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    cpy_r_r0 = CPyStatics[2381]; /* '(' */
    cpy_r_r1 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL3;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r5 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 318, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL73;
    }
    cpy_r_r6 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r5)->_class_type;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL5;
CPyL3: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r8 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 318, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL73;
    }
    cpy_r_r9 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r8)->_class_type;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 318, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
CPyL6: ;
    cpy_r_r11 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r10)->_names;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_rtypes___RInstance___struct_name(cpy_r_r7, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 318, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_r13 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r0, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 318, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_cast = cpy_r_r14;
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_decl_cl)->_is_trait;
    if (!cpy_r_r15) goto CPyL51;
CPyL9: ;
    cpy_r_r16 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL12;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r20 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 319, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL75;
    }
    cpy_r_r21 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r20)->_class_type;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL14;
CPyL12: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r23 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 319, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL75;
    }
    cpy_r_r24 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r23)->_class_type;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r24;
CPyL14: ;
    cpy_r_r25 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r22)->_class_ir;
    cpy_r_r26 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r25)->_is_trait;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r26) goto CPyL51;
CPyL15: ;
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_decl_cl)->_attributes;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "ClassIR", "attributes", 323, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r27);
CPyL16: ;
    cpy_r_r28 = PySequence_List(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 323, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    cpy_r_r29 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL20;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r33 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 323, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL76;
    }
    cpy_r_r34 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r33)->_attr;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL22;
CPyL20: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r36 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 323, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL76;
    }
    cpy_r_r37 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r36)->_attr;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r35 = cpy_r_r37;
CPyL22: ;
    cpy_r_r38 = CPyList_Index(cpy_r_r28, cpy_r_r35);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 323, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    cpy_r_trait_attr_index = cpy_r_r38;
    cpy_r_r39 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 325, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r39);
CPyL24: ;
    cpy_r_r40 = CPyDef_emit___Emitter___temp_name(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 325, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    cpy_r_offset = cpy_r_r40;
    cpy_r_r41 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "declarations", 326, CPyStatic_emitfunc___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r41);
CPyL26: ;
    cpy_r_r42 = CPyStatics[7149]; /* 'size_t ' */
    cpy_r_r43 = CPyStatics[6886]; /* ';' */
    cpy_r_r44 = CPyStr_Build(3, cpy_r_r42, cpy_r_offset, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 326, CPyStatic_emitfunc___globals);
        goto CPyL79;
    }
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_emit___Emitter___emit_line(cpy_r_r41, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 326, CPyStatic_emitfunc___globals);
        goto CPyL78;
    }
    cpy_r_r47 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 327, CPyStatic_emitfunc___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r47);
CPyL29: ;
    cpy_r_r48 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 331, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r48);
CPyL30: ;
    cpy_r_r49 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r48, cpy_r_decl_cl);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 331, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_r50 = CPyStatics[2381]; /* '(' */
    cpy_r_r51 = CPyStatics[7352]; /* ')->vtable' */
    cpy_r_r52 = CPyStr_Build(4, cpy_r_r50, cpy_r_cast, cpy_r_obj, cpy_r_r51);
    CPy_DECREF(cpy_r_cast);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 332, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    cpy_r_r53 = CPyTagged_Str(cpy_r_trait_attr_index);
    CPyTagged_DECREF(cpy_r_trait_attr_index);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 330, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_r54 = CPyStatics[7353]; /* 'CPy_FindAttrOffset(' */
    cpy_r_r55 = CPyStatics[71]; /* ', ' */
    cpy_r_r56 = CPyStatics[71]; /* ', ' */
    cpy_r_r57 = CPyStatics[72]; /* ')' */
    cpy_r_r58 = CPyStr_Build(7, cpy_r_r54, cpy_r_r49, cpy_r_r55, cpy_r_r52, cpy_r_r56, cpy_r_r53, cpy_r_r57);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 330, CPyStatic_emitfunc___globals);
        goto CPyL83;
    }
    cpy_r_r59 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r60 = CPyStatics[6886]; /* ';' */
    cpy_r_r61 = CPyStr_Build(4, cpy_r_offset, cpy_r_r59, cpy_r_r58, cpy_r_r60);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 328, CPyStatic_emitfunc___globals);
        goto CPyL83;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyDef_emit___Emitter___emit_line(cpy_r_r47, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 327, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_r64 = CPyStatics[2381]; /* '(' */
    cpy_r_r65 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL39;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r69 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL84;
    }
    cpy_r_r70 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r69)->_class_type;
    CPy_INCREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70;
    goto CPyL41;
CPyL39: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r72 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL84;
    }
    cpy_r_r73 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r72)->_class_type;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r71 = cpy_r_r73;
CPyL41: ;
    cpy_r_r74 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (!cpy_r_r77) goto CPyL44;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r78 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL85;
    }
    cpy_r_r79 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r78)->_attr;
    CPy_INCREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79;
    goto CPyL46;
CPyL44: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r81 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL85;
    }
    cpy_r_r82 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r81)->_attr;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r80 = cpy_r_r82;
CPyL46: ;
    cpy_r_r83 = CPyDef_rtypes___RInstance___attr_type(cpy_r_r71, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_r84 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_r85 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r86 = CPyStr_Build(3, cpy_r_r64, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 337, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    cpy_r_attr_cast = cpy_r_r86;
    cpy_r_r87 = CPyStatics[282]; /* '*' */
    cpy_r_r88 = CPyStatics[7354]; /* '((char *)' */
    cpy_r_r89 = CPyStatics[7148]; /* ' + ' */
    cpy_r_r90 = CPyStatics[72]; /* ')' */
    cpy_r_r91 = CPyStr_Build(7, cpy_r_r87, cpy_r_attr_cast, cpy_r_r88, cpy_r_obj, cpy_r_r89, cpy_r_offset, cpy_r_r90);
    CPy_DECREF(cpy_r_attr_cast);
    CPy_DECREF(cpy_r_offset);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 338, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    return cpy_r_r91;
CPyL51: ;
    cpy_r_r92 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r93 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r94 = *(PyObject * *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 == cpy_r_r92;
    if (!cpy_r_r95) goto CPyL54;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r96 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 342, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL75;
    }
    cpy_r_r97 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r96)->_class_type;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97;
    goto CPyL56;
CPyL54: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r99 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 342, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL75;
    }
    cpy_r_r100 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r99)->_class_type;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r98 = cpy_r_r100;
CPyL56: ;
    cpy_r_r101 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r98)->_class_ir;
    cpy_r_r102 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r101)->_is_trait;
    CPy_DECREF(cpy_r_r98);
    if (cpy_r_r102) {
        goto CPyL86;
    } else
        goto CPyL64;
CPyL57: ;
    cpy_r_r103 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_decl_cl)->_is_trait;
    cpy_r_r104 = cpy_r_r103 ^ 1;
    if (cpy_r_r104) goto CPyL60;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 343, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r106 = CPyStatics[2381]; /* '(' */
    cpy_r_r107 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 344, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
CPyL61: ;
    cpy_r_r108 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r107)->_names;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = CPyDef_class_ir___ClassIR___struct_name(cpy_r_decl_cl, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 344, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_r110 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r111 = CPyStr_Build(3, cpy_r_r106, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 344, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_cast = cpy_r_r111;
CPyL64: ;
    cpy_r_r112 = CPyStatics[2381]; /* '(' */
    cpy_r_r113 = CPyStatics[6891]; /* ')->' */
    cpy_r_r114 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "get_attr_expr", "FunctionEmitterVisitor", "emitter", 345, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r114);
CPyL65: ;
    cpy_r_r115 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r116 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r117 = *(PyObject * *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 == cpy_r_r115;
    if (!cpy_r_r118) goto CPyL68;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r119 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 345, CPyStatic_emitfunc___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL87;
    }
    cpy_r_r120 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r119)->_attr;
    CPy_INCREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120;
    goto CPyL70;
CPyL68: ;
    CPy_INCREF(cpy_r_op);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r122 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 345, CPyStatic_emitfunc___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL87;
    }
    cpy_r_r123 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r122)->_attr;
    CPy_INCREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r121 = cpy_r_r123;
CPyL70: ;
    cpy_r_r124 = CPyDef_emit___Emitter___attr(cpy_r_r114, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 345, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    cpy_r_r125 = CPyStr_Build(5, cpy_r_r112, cpy_r_cast, cpy_r_obj, cpy_r_r113, cpy_r_r124);
    CPy_DECREF(cpy_r_cast);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 345, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    return cpy_r_r125;
CPyL73: ;
    cpy_r_r126 = NULL;
    return cpy_r_r126;
CPyL74: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_cast);
    goto CPyL73;
CPyL76: ;
    CPy_DecRef(cpy_r_cast);
    CPy_DecRef(cpy_r_r28);
    goto CPyL73;
CPyL77: ;
    CPy_DecRef(cpy_r_cast);
    CPyTagged_DecRef(cpy_r_trait_attr_index);
    goto CPyL73;
CPyL78: ;
    CPy_DecRef(cpy_r_cast);
    CPyTagged_DecRef(cpy_r_trait_attr_index);
    CPy_DecRef(cpy_r_offset);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_cast);
    CPyTagged_DecRef(cpy_r_trait_attr_index);
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r41);
    goto CPyL73;
CPyL80: ;
    CPy_DecRef(cpy_r_cast);
    CPyTagged_DecRef(cpy_r_trait_attr_index);
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r47);
    goto CPyL73;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_trait_attr_index);
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    goto CPyL73;
CPyL82: ;
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL73;
CPyL83: ;
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r47);
    goto CPyL73;
CPyL84: ;
    CPy_DecRef(cpy_r_offset);
    goto CPyL73;
CPyL85: ;
    CPy_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_r71);
    goto CPyL73;
CPyL86: ;
    CPy_DECREF(cpy_r_cast);
    goto CPyL57;
CPyL87: ;
    CPy_DecRef(cpy_r_cast);
    CPy_DecRef(cpy_r_r114);
    goto CPyL73;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___get_attr_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "op", "decl_cl", 0};
    static CPyArg_Parser parser = {"OOO:get_attr_expr", kwlist, 0};
    PyObject *obj_obj;
    PyObject *obj_op;
    PyObject *obj_decl_cl;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_op, &obj_decl_cl)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (likely(PyUnicode_Check(obj_obj)))
        arg_obj = obj_obj;
    else {
        CPy_TypeError("str", obj_obj); 
        goto fail;
    }
    PyObject *arg_op;
    if (Py_TYPE(obj_op) == CPyType_ops___GetAttr)
        arg_op = obj_op;
    else {
        arg_op = NULL;
    }
    if (arg_op != NULL) goto __LL9479;
    if (Py_TYPE(obj_op) == CPyType_ops___SetAttr)
        arg_op = obj_op;
    else {
        arg_op = NULL;
    }
    if (arg_op != NULL) goto __LL9479;
    CPy_TypeError("union[mypyc.ir.ops.GetAttr, mypyc.ir.ops.SetAttr]", obj_op); 
    goto fail;
__LL9479: ;
    PyObject *arg_decl_cl;
    if (likely(Py_TYPE(obj_decl_cl) == CPyType_class_ir___ClassIR))
        arg_decl_cl = obj_decl_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_decl_cl); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___get_attr_expr(arg_self, arg_obj, arg_op, arg_decl_cl);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_attr_expr", 311, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_attr_rtype;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_decl_cl;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_prefer_method;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_version;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
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
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_attr_expr;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_always_defined;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_merged_branch;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_branch;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
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
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_exc_class;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    CPyTagged cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 348, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 349, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    cpy_r_obj = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_class_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_rtype = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r4);
    cpy_r_cl = cpy_r_r4;
    cpy_r_r5 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_class_ir___ClassIR___attr_details(cpy_r_cl, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 352, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_r7 = cpy_r_r6.f0;
    CPy_INCREF(cpy_r_r7);
    cpy_r_attr_rtype = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f1;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    cpy_r_decl_cl = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    if (cpy_r_r9) goto CPyL5;
CPyL4: ;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_error_overlap;
    cpy_r_r10 = cpy_r_r11;
CPyL6: ;
    cpy_r_prefer_method = cpy_r_r10;
    cpy_r_r12 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r12, cpy_r_prefer_method);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 354, CPyStatic_emitfunc___globals);
        goto CPyL83;
    }
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    if (cpy_r_r15) {
        goto CPyL84;
    } else
        goto CPyL85;
CPyL8: ;
    cpy_r_r16 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    CPy_DECREF(cpy_r_cl);
    if (!cpy_r_r16) goto CPyL10;
CPyL9: ;
    cpy_r_r17 = CPyStatics[7355]; /* '_TRAIT' */
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r17;
    goto CPyL11;
CPyL10: ;
    cpy_r_r19 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r19);
    cpy_r_r18 = cpy_r_r19;
CPyL11: ;
    cpy_r_version = cpy_r_r18;
    cpy_r_r20 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 363, CPyStatic_emitfunc___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r20);
CPyL12: ;
    cpy_r_r21 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 363, CPyStatic_emitfunc___globals);
        goto CPyL86;
    }
    cpy_r_r23 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_rtypes___RInstance___getter_index(cpy_r_rtype, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 364, CPyStatic_emitfunc___globals);
        goto CPyL87;
    }
    cpy_r_r25 = CPyTagged_Str(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 358, CPyStatic_emitfunc___globals);
        goto CPyL87;
    }
    cpy_r_r26 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "names", 365, CPyStatic_emitfunc___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r26);
CPyL16: ;
    cpy_r_r27 = CPyDef_rtypes___RInstance___struct_name(cpy_r_rtype, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 365, CPyStatic_emitfunc___globals);
        goto CPyL88;
    }
    cpy_r_r28 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_rtypes___RInstance___attr_type(cpy_r_rtype, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 366, CPyStatic_emitfunc___globals);
        goto CPyL89;
    }
    cpy_r_r30 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 366, CPyStatic_emitfunc___globals);
        goto CPyL89;
    }
    cpy_r_r31 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[7356]; /* ' = CPY_GET_ATTR' */
    cpy_r_r33 = CPyStatics[2381]; /* '(' */
    cpy_r_r34 = CPyStatics[71]; /* ', ' */
    cpy_r_r35 = CPyStatics[71]; /* ', ' */
    cpy_r_r36 = CPyStatics[71]; /* ', ' */
    cpy_r_r37 = CPyStatics[71]; /* ', ' */
    cpy_r_r38 = CPyStatics[7357];
    cpy_r_r39 = CPyStatics[6868];
    cpy_r_r40 = CPyStr_Build(16, cpy_r_dest, cpy_r_r32, cpy_r_version, cpy_r_r33, cpy_r_obj, cpy_r_r34, cpy_r_r22, cpy_r_r35, cpy_r_r25, cpy_r_r36, cpy_r_r27, cpy_r_r37, cpy_r_r30, cpy_r_r38, cpy_r_r31, cpy_r_r39);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_version);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 358, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 357, CPyStatic_emitfunc___globals);
        goto CPyL80;
    } else
        goto CPyL79;
CPyL21: ;
    cpy_r_r43 = CPyDef_emitfunc___FunctionEmitterVisitor___get_attr_expr(cpy_r_self, cpy_r_obj, cpy_r_op, cpy_r_decl_cl);
    CPy_DECREF(cpy_r_decl_cl);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 372, CPyStatic_emitfunc___globals);
        goto CPyL90;
    }
    cpy_r_attr_expr = cpy_r_r43;
    cpy_r_r44 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 373, CPyStatic_emitfunc___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r44);
CPyL23: ;
    cpy_r_r45 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r46 = CPyStatics[6886]; /* ';' */
    cpy_r_r47 = CPyStr_Build(4, cpy_r_dest, cpy_r_r45, cpy_r_attr_expr, cpy_r_r46);
    CPy_DECREF(cpy_r_attr_expr);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 373, CPyStatic_emitfunc___globals);
        goto CPyL92;
    }
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_emit___Emitter___emit_line(cpy_r_r44, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 373, CPyStatic_emitfunc___globals);
        goto CPyL90;
    }
    cpy_r_r50 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 374, CPyStatic_emitfunc___globals);
        goto CPyL90;
    }
    cpy_r_always_defined = cpy_r_r51;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    cpy_r_merged_branch = cpy_r_r52;
    if (cpy_r_always_defined) goto CPyL93;
    cpy_r_r53 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 377, CPyStatic_emitfunc___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r53);
CPyL28: ;
    cpy_r_r54 = CPyStatics[860]; /* '==' */
    cpy_r_r55 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_emit___Emitter___emit_undefined_attr_check(cpy_r_r53, cpy_r_attr_rtype, cpy_r_dest, cpy_r_r54, cpy_r_obj, cpy_r_r55, cpy_r_cl, 1);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 377, CPyStatic_emitfunc___globals);
        goto CPyL95;
    }
    cpy_r_r57 = CPyDef_emitfunc___FunctionEmitterVisitor___next_branch(cpy_r_self);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 380, CPyStatic_emitfunc___globals);
        goto CPyL95;
    }
    cpy_r_branch = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_branch != cpy_r_r58;
    if (!cpy_r_r59) goto CPyL96;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r60 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 383, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL97;
    }
    cpy_r_r61 = ((mypyc___ir___ops___BranchObject *)cpy_r_r60)->_value;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r61 == cpy_r_op;
    CPy_DECREF(cpy_r_r61);
    if (!cpy_r_r62) goto CPyL96;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r63 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 384, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL97;
    }
    cpy_r_r64 = ((mypyc___ir___ops___BranchObject *)cpy_r_r63)->_op;
    cpy_r_r65 = cpy_r_r64 == 202;
    if (!cpy_r_r65) goto CPyL96;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r66 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 385, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL97;
    }
    cpy_r_r67 = ((mypyc___ir___ops___BranchObject *)cpy_r_r66)->_traceback_entry;
    cpy_r_r68 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r69 = cpy_r_r67 != cpy_r_r68;
    if (!cpy_r_r69) goto CPyL96;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r70 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 386, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL97;
    }
    cpy_r_r71 = ((mypyc___ir___ops___BranchObject *)cpy_r_r70)->_negated;
    if (cpy_r_r71) {
        goto CPyL96;
    } else
        goto CPyL98;
CPyL39: ;
    CPy_INCREF(cpy_r_branch);
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r72 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 390, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL99;
    }
    cpy_r_r73 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_attribute_error(cpy_r_self, cpy_r_r72, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 390, CPyStatic_emitfunc___globals);
        goto CPyL99;
    }
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r76 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 391, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL99;
    }
    cpy_r_r77 = ((mypyc___ir___ops___BranchObject *)cpy_r_r76)->_true;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 391, CPyStatic_emitfunc___globals);
        goto CPyL99;
    }
    cpy_r_r79 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r80 = CPyStatics[6886]; /* ';' */
    cpy_r_r81 = CPyStr_Build(3, cpy_r_r79, cpy_r_r78, cpy_r_r80);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 391, CPyStatic_emitfunc___globals);
        goto CPyL99;
    }
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 391, CPyStatic_emitfunc___globals);
        goto CPyL99;
    }
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r84 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 392, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL100;
    }
    cpy_r_merged_branch = cpy_r_r84;
    cpy_r_r85 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 393, CPyStatic_emitfunc___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r85);
CPyL47: ;
    cpy_r_r86 = CPyStatics[1406]; /* '}' */
    cpy_r_r87 = NULL;
    cpy_r_r88 = CPyDef_emit___Emitter___emit_line(cpy_r_r85, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 393, CPyStatic_emitfunc___globals);
        goto CPyL95;
    }
CPyL48: ;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_merged_branch != cpy_r_r89;
    if (cpy_r_r90) goto CPyL101;
    cpy_r_r91 = CPyStatics[7358]; /* 'PyExc_AttributeError' */
    CPy_INCREF(cpy_r_r91);
    cpy_r_exc_class = cpy_r_r91;
    cpy_r_r92 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 396, CPyStatic_emitfunc___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r92);
CPyL50: ;
    cpy_r_r93 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyModule_builtins;
    cpy_r_r95 = CPyStatics[146]; /* 'repr' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals);
        goto CPyL103;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r93};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r93);
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals, "str", cpy_r_r99);
        goto CPyL104;
    }
    cpy_r_r101 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r101);
    CPy_DECREF(cpy_r_cl);
    cpy_r_r102 = CPyModule_builtins;
    cpy_r_r103 = CPyStatics[146]; /* 'repr' */
    cpy_r_r104 = CPyObject_GetAttr(cpy_r_r102, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals);
        goto CPyL105;
    }
    PyObject *cpy_r_r105[1] = {cpy_r_r101};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r104, cpy_r_r106, 1, 0);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals);
        goto CPyL105;
    }
    CPy_DECREF(cpy_r_r101);
    if (likely(PyUnicode_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 398, CPyStatic_emitfunc___globals, "str", cpy_r_r107);
        goto CPyL106;
    }
    cpy_r_r109 = CPyStatics[7359]; /* 'PyErr_SetString(' */
    cpy_r_r110 = CPyStatics[7360]; /* ', "attribute ' */
    cpy_r_r111 = CPyStatics[3379]; /* ' of ' */
    cpy_r_r112 = CPyStatics[7232]; /* ' undefined");' */
    cpy_r_r113 = CPyStr_Build(7, cpy_r_r109, cpy_r_exc_class, cpy_r_r110, cpy_r_r100, cpy_r_r111, cpy_r_r108, cpy_r_r112);
    CPy_DECREF(cpy_r_exc_class);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 397, CPyStatic_emitfunc___globals);
        goto CPyL107;
    }
    cpy_r_r114 = NULL;
    cpy_r_r115 = CPyDef_emit___Emitter___emit_line(cpy_r_r92, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r115 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 396, CPyStatic_emitfunc___globals);
        goto CPyL108;
    }
CPyL58: ;
    cpy_r_r116 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_is_refcounted;
    if (!cpy_r_r116) goto CPyL109;
CPyL59: ;
    cpy_r_r117 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_op)->_is_borrowed;
    if (cpy_r_r117) goto CPyL109;
CPyL60: ;
    cpy_r_r118 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r119 = cpy_r_merged_branch != cpy_r_r118;
    if (cpy_r_r119) goto CPyL64;
    if (cpy_r_always_defined) goto CPyL64;
    cpy_r_r120 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 404, CPyStatic_emitfunc___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r120);
CPyL63: ;
    cpy_r_r121 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r122 = NULL;
    cpy_r_r123 = CPyDef_emit___Emitter___emit_line(cpy_r_r120, cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 404, CPyStatic_emitfunc___globals);
        goto CPyL108;
    }
CPyL64: ;
    cpy_r_r124 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 405, CPyStatic_emitfunc___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r124);
CPyL65: ;
    cpy_r_r125 = 2;
    cpy_r_r126 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_r124, cpy_r_dest, cpy_r_attr_rtype, cpy_r_r125);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 405, CPyStatic_emitfunc___globals);
        goto CPyL110;
    }
CPyL66: ;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r128 = cpy_r_merged_branch != cpy_r_r127;
    if (!cpy_r_r128) goto CPyL111;
    if (likely(cpy_r_merged_branch != Py_None))
        cpy_r_r129 = cpy_r_merged_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 407, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_merged_branch);
        goto CPyL110;
    }
    cpy_r_r130 = ((mypyc___ir___ops___BranchObject *)cpy_r_r129)->_false;
    CPy_INCREF(cpy_r_r130);
    cpy_r_r131 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "next_block", 407, CPyStatic_emitfunc___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r131);
CPyL69: ;
    cpy_r_r132 = cpy_r_r130 == cpy_r_r131;
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 ^ 1;
    if (!cpy_r_r133) goto CPyL113;
    if (likely(cpy_r_merged_branch != Py_None))
        cpy_r_r134 = cpy_r_merged_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 408, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_merged_branch);
        goto CPyL110;
    }
    cpy_r_r135 = ((mypyc___ir___ops___BranchObject *)cpy_r_r134)->_false;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_merged_branch);
    cpy_r_r136 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 408, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_r137 = CPyStatics[6940]; /* 'goto ' */
    cpy_r_r138 = CPyStatics[6886]; /* ';' */
    cpy_r_r139 = CPyStr_Build(3, cpy_r_r137, cpy_r_r136, cpy_r_r138);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 408, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_r140 = NULL;
    cpy_r_r141 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 408, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
CPyL74: ;
    cpy_r_r142 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index;
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "op_index", 409, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
CPyL75: ;
    cpy_r_r143 = CPyTagged_Add(cpy_r_r142, 2);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index = cpy_r_r143;
    cpy_r_r144 = 1;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 409, CPyStatic_emitfunc___globals);
        goto CPyL80;
    } else
        goto CPyL79;
CPyL76: ;
    if (cpy_r_always_defined) goto CPyL79;
    cpy_r_r145 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_attr", "FunctionEmitterVisitor", "emitter", 411, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r145);
CPyL78: ;
    cpy_r_r146 = CPyStatics[1406]; /* '}' */
    cpy_r_r147 = NULL;
    cpy_r_r148 = CPyDef_emit___Emitter___emit_line(cpy_r_r145, cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r148 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 411, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
CPyL79: ;
    return 1;
CPyL80: ;
    cpy_r_r149 = 2;
    return cpy_r_r149;
CPyL81: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL80;
CPyL82: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_cl);
    goto CPyL80;
CPyL83: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_decl_cl);
    goto CPyL80;
CPyL84: ;
    CPy_DECREF(cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_decl_cl);
    goto CPyL8;
CPyL85: ;
    CPy_DECREF(cpy_r_rtype);
    goto CPyL21;
CPyL86: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    goto CPyL80;
CPyL87: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r22);
    goto CPyL80;
CPyL88: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r25);
    goto CPyL80;
CPyL89: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    goto CPyL80;
CPyL90: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    goto CPyL80;
CPyL91: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_attr_expr);
    goto CPyL80;
CPyL92: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_r44);
    goto CPyL80;
CPyL93: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_cl);
    goto CPyL58;
CPyL94: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    goto CPyL80;
CPyL95: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    goto CPyL80;
CPyL96: ;
    CPy_DECREF(cpy_r_branch);
    goto CPyL48;
CPyL97: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_branch);
    goto CPyL80;
CPyL98: ;
    CPy_DECREF(cpy_r_merged_branch);
    goto CPyL39;
CPyL99: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_branch);
    goto CPyL80;
CPyL100: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    goto CPyL80;
CPyL101: ;
    CPy_DECREF(cpy_r_cl);
    goto CPyL58;
CPyL102: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_exc_class);
    goto CPyL80;
CPyL103: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_exc_class);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93);
    goto CPyL80;
CPyL104: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_exc_class);
    CPy_DecRef(cpy_r_r92);
    goto CPyL80;
CPyL105: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_exc_class);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    goto CPyL80;
CPyL106: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_exc_class);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r100);
    goto CPyL80;
CPyL107: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_r92);
    goto CPyL80;
CPyL108: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_merged_branch);
    goto CPyL80;
CPyL109: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_attr_rtype);
    goto CPyL66;
CPyL110: ;
    CPy_DecRef(cpy_r_merged_branch);
    goto CPyL80;
CPyL111: ;
    CPy_DECREF(cpy_r_merged_branch);
    goto CPyL76;
CPyL112: ;
    CPy_DecRef(cpy_r_merged_branch);
    CPy_DecRef(cpy_r_r130);
    goto CPyL80;
CPyL113: ;
    CPy_DECREF(cpy_r_merged_branch);
    goto CPyL74;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr", 347, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_attr__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___next_branch(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_next_op;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "next_branch", "FunctionEmitterVisitor", "op_index", 414, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
CPyL1: ;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    cpy_r_r2 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_ops;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "next_branch", "FunctionEmitterVisitor", "ops", 414, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r1 & 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL4;
    cpy_r_r8 = CPyTagged_IsLt_(cpy_r_r1, cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r8) {
        goto CPyL5;
    } else
        goto CPyL12;
CPyL4: ;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r5;
    CPyTagged_DECREF(cpy_r_r1);
    if (!cpy_r_r9) goto CPyL12;
CPyL5: ;
    cpy_r_r10 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_ops;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "next_branch", "FunctionEmitterVisitor", "ops", 415, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index;
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "next_branch", "FunctionEmitterVisitor", "op_index", 415, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
CPyL7: ;
    cpy_r_r12 = CPyTagged_Add(cpy_r_r11, 2);
    cpy_r_r13 = CPyList_GetItem(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "next_branch", 415, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_ops___Op)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "next_branch", 415, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Op", cpy_r_r13);
        goto CPyL13;
    }
    cpy_r_next_op = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_next_op)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_next_op) == CPyType_ops___Branch))
        cpy_r_r19 = cpy_r_next_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "next_branch", 417, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_next_op);
        goto CPyL13;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL13: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_next_op);
    goto CPyL12;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___next_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":next_branch", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___next_branch(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "next_branch", 413, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_attr_rtype;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_decl_cl;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    tuple_T4OCIO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_version;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
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
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_attr_expr;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_always_defined;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    cpy_r_r0 = NULL;
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    cpy_r_r2 = cpy_r_r1 == 4;
    if (cpy_r_r2) {
        goto CPyL66;
    } else
        goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 422, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_dest = cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 423, CPyStatic_emitfunc___globals);
        goto CPyL67;
    }
    cpy_r_obj = cpy_r_r5;
    cpy_r_r6 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 424, CPyStatic_emitfunc___globals);
        goto CPyL68;
    }
    cpy_r_src = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_class_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_rtype = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r9);
    cpy_r_cl = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_class_ir___ClassIR___attr_details(cpy_r_cl, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 427, CPyStatic_emitfunc___globals);
        goto CPyL69;
    }
    cpy_r_r12 = cpy_r_r11.f0;
    CPy_INCREF(cpy_r_r12);
    cpy_r_attr_rtype = cpy_r_r12;
    cpy_r_r13 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    cpy_r_decl_cl = cpy_r_r13;
    cpy_r_r14 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 428, CPyStatic_emitfunc___globals);
        goto CPyL70;
    }
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (cpy_r_r18) {
        goto CPyL71;
    } else
        goto CPyL72;
CPyL8: ;
    cpy_r_r19 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_is_init;
    cpy_r_r20 = cpy_r_r19 ^ 1;
    if (cpy_r_r20) goto CPyL10;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL14;
CPyL10: ;
    cpy_r_r22 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = cpy_r_r22 == 4;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = CPyTagged_IsEq_(cpy_r_r22, 4);
    cpy_r_r26 = cpy_r_r27;
CPyL13: ;
    cpy_r_r21 = cpy_r_r26;
CPyL14: ;
    if (cpy_r_r21) {
        goto CPyL21;
    } else
        goto CPyL73;
CPyL15: ;
    cpy_r_r28 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[7361]; /* '%s %d %d %s' */
    cpy_r_r30 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_is_init;
    cpy_r_r32 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_r33.f0 = cpy_r_r30;
    cpy_r_r33.f1 = cpy_r_r31;
    cpy_r_r33.f2 = cpy_r_r32;
    cpy_r_r33.f3 = cpy_r_rtype;
    CPy_INCREF(cpy_r_r33.f0);
    CPyTagged_INCREF(cpy_r_r33.f2);
    CPy_INCREF(cpy_r_r33.f3);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_rtype);
    cpy_r_r34 = PyTuple_New(4);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9480 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp9480);
    PyObject *__tmp9481 = cpy_r_r33.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp9481);
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp9481);
    PyObject *__tmp9482 = CPyTagged_StealAsObject(cpy_r_r33.f2);
    PyTuple_SET_ITEM(cpy_r_r34, 2, __tmp9482);
    PyObject *__tmp9483 = cpy_r_r33.f3;
    PyTuple_SET_ITEM(cpy_r_r34, 3, __tmp9483);
    cpy_r_r35 = PyNumber_Remainder(cpy_r_r29, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 430, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 430, CPyStatic_emitfunc___globals, "str", cpy_r_r35);
        goto CPyL65;
    }
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 430, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r36};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 430, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r36);
    CPy_Raise(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 430, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_trait;
    CPy_DECREF(cpy_r_cl);
    if (!cpy_r_r43) goto CPyL23;
CPyL22: ;
    cpy_r_r44 = CPyStatics[7355]; /* '_TRAIT' */
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r44;
    goto CPyL24;
CPyL23: ;
    cpy_r_r46 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r46);
    cpy_r_r45 = cpy_r_r46;
CPyL24: ;
    cpy_r_version = cpy_r_r45;
    cpy_r_r47 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 443, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r47);
CPyL25: ;
    cpy_r_r48 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 443, CPyStatic_emitfunc___globals);
        goto CPyL75;
    }
    cpy_r_r50 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDef_rtypes___RInstance___setter_index(cpy_r_rtype, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 444, CPyStatic_emitfunc___globals);
        goto CPyL76;
    }
    cpy_r_r52 = CPyTagged_Str(cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 438, CPyStatic_emitfunc___globals);
        goto CPyL76;
    }
    cpy_r_r53 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "names", 446, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r53);
CPyL29: ;
    cpy_r_r54 = CPyDef_rtypes___RInstance___struct_name(cpy_r_rtype, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 446, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    cpy_r_r55 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_rtypes___RInstance___attr_type(cpy_r_rtype, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 447, CPyStatic_emitfunc___globals);
        goto CPyL78;
    }
    cpy_r_r57 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 447, CPyStatic_emitfunc___globals);
        goto CPyL78;
    }
    cpy_r_r58 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[7362]; /* ' = CPY_SET_ATTR' */
    cpy_r_r60 = CPyStatics[2381]; /* '(' */
    cpy_r_r61 = CPyStatics[71]; /* ', ' */
    cpy_r_r62 = CPyStatics[71]; /* ', ' */
    cpy_r_r63 = CPyStatics[71]; /* ', ' */
    cpy_r_r64 = CPyStatics[71]; /* ', ' */
    cpy_r_r65 = CPyStatics[71]; /* ', ' */
    cpy_r_r66 = CPyStatics[7357];
    cpy_r_r67 = CPyStatics[6868];
    if (cpy_r_dest == NULL) {
        goto CPyL79;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"dest\" referenced before assignment");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 438, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r69 = CPyStr_Build(18, cpy_r_dest, cpy_r_r59, cpy_r_version, cpy_r_r60, cpy_r_obj, cpy_r_r61, cpy_r_r49, cpy_r_r62, cpy_r_r52, cpy_r_r63, cpy_r_src, cpy_r_r64, cpy_r_r54, cpy_r_r65, cpy_r_r57, cpy_r_r66, cpy_r_r58, cpy_r_r67);
    CPy_XDECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_version);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 438, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 437, CPyStatic_emitfunc___globals);
        goto CPyL65;
    } else
        goto CPyL64;
CPyL37: ;
    cpy_r_r72 = CPyDef_emitfunc___FunctionEmitterVisitor___get_attr_expr(cpy_r_self, cpy_r_obj, cpy_r_op, cpy_r_decl_cl);
    CPy_DECREF(cpy_r_decl_cl);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 453, CPyStatic_emitfunc___globals);
        goto CPyL80;
    }
    cpy_r_attr_expr = cpy_r_r72;
    cpy_r_r73 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_is_init;
    if (cpy_r_r73) goto CPyL49;
CPyL39: ;
    cpy_r_r74 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_is_refcounted;
    if (!cpy_r_r74) goto CPyL49;
CPyL40: ;
    cpy_r_r75 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 457, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    cpy_r_always_defined = cpy_r_r76;
    if (cpy_r_always_defined) goto CPyL82;
    cpy_r_r77 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 459, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r77);
CPyL43: ;
    cpy_r_r78 = CPyStatics[863]; /* '!=' */
    cpy_r_r79 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = 2;
    cpy_r_r81 = CPyDef_emit___Emitter___emit_undefined_attr_check(cpy_r_r77, cpy_r_attr_rtype, cpy_r_attr_expr, cpy_r_r78, cpy_r_obj, cpy_r_r79, cpy_r_cl, cpy_r_r80);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_cl);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 459, CPyStatic_emitfunc___globals);
        goto CPyL83;
    }
CPyL44: ;
    cpy_r_r82 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 462, CPyStatic_emitfunc___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r82);
CPyL45: ;
    cpy_r_r83 = 2;
    cpy_r_r84 = 2;
    cpy_r_r85 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_r82, cpy_r_attr_expr, cpy_r_attr_rtype, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 462, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    if (cpy_r_always_defined) goto CPyL54;
    cpy_r_r86 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 464, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r86);
CPyL48: ;
    cpy_r_r87 = CPyStatics[1406]; /* '}' */
    cpy_r_r88 = NULL;
    cpy_r_r89 = CPyDef_emit___Emitter___emit_line(cpy_r_r86, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 464, CPyStatic_emitfunc___globals);
        goto CPyL84;
    } else
        goto CPyL54;
CPyL49: ;
    cpy_r_r90 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_error_overlap;
    if (!cpy_r_r90) goto CPyL85;
CPyL50: ;
    cpy_r_r91 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_cl, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 465, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    if (cpy_r_r92) goto CPyL85;
    cpy_r_r93 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 468, CPyStatic_emitfunc___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r93);
CPyL53: ;
    cpy_r_r94 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_attr;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyDef_emit___Emitter___emit_attr_bitmap_set(cpy_r_r93, cpy_r_src, cpy_r_obj, cpy_r_attr_rtype, cpy_r_cl, cpy_r_r94);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_cl);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 468, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
CPyL54: ;
    cpy_r_r96 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 471, CPyStatic_emitfunc___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r96);
CPyL55: ;
    cpy_r_r97 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r98 = CPyStatics[6886]; /* ';' */
    cpy_r_r99 = CPyStr_Build(4, cpy_r_attr_expr, cpy_r_r97, cpy_r_src, cpy_r_r98);
    CPy_DECREF(cpy_r_attr_expr);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 471, CPyStatic_emitfunc___globals);
        goto CPyL86;
    }
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyDef_emit___Emitter___emit_line(cpy_r_r96, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 471, CPyStatic_emitfunc___globals);
        goto CPyL67;
    }
    cpy_r_r102 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_op)->_error_kind;
    cpy_r_r103 = cpy_r_r102 == 4;
    if (!cpy_r_r103) goto CPyL87;
    cpy_r_r104 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_set_attr", "FunctionEmitterVisitor", "emitter", 473, CPyStatic_emitfunc___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r104);
CPyL59: ;
    cpy_r_r105 = CPyStatics[6965]; /* ' = 1;' */
    if (cpy_r_dest == NULL) {
        goto CPyL88;
    } else
        goto CPyL62;
CPyL60: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"dest\" referenced before assignment");
    cpy_r_r106 = 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 473, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r107 = CPyStr_Build(2, cpy_r_dest, cpy_r_r105);
    CPy_XDECREF(cpy_r_dest);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 473, CPyStatic_emitfunc___globals);
        goto CPyL89;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = CPyDef_emit___Emitter___emit_line(cpy_r_r104, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 473, CPyStatic_emitfunc___globals);
        goto CPyL65;
    }
CPyL64: ;
    return 1;
CPyL65: ;
    cpy_r_r110 = 2;
    return cpy_r_r110;
CPyL66: ;
    CPy_XDECREF(cpy_r_dest);
    goto CPyL1;
CPyL67: ;
    CPy_XDecRef(cpy_r_dest);
    goto CPyL65;
CPyL68: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    goto CPyL65;
CPyL69: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_cl);
    goto CPyL65;
CPyL70: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_decl_cl);
    goto CPyL65;
CPyL71: ;
    CPy_DECREF(cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_decl_cl);
    goto CPyL8;
CPyL72: ;
    CPy_DECREF(cpy_r_rtype);
    goto CPyL37;
CPyL73: ;
    CPy_XDECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_cl);
    goto CPyL15;
CPyL74: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL65;
CPyL75: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    goto CPyL65;
CPyL76: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r49);
    goto CPyL65;
CPyL77: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL65;
CPyL78: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL65;
CPyL79: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_version);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    goto CPyL33;
CPyL80: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    goto CPyL65;
CPyL81: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_attr_expr);
    goto CPyL65;
CPyL82: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_cl);
    goto CPyL44;
CPyL83: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_attr_expr);
    goto CPyL65;
CPyL84: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_attr_expr);
    goto CPyL65;
CPyL85: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_cl);
    CPy_DECREF(cpy_r_attr_rtype);
    goto CPyL54;
CPyL86: ;
    CPy_XDecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r96);
    goto CPyL65;
CPyL87: ;
    CPy_XDECREF(cpy_r_dest);
    goto CPyL64;
CPyL88: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL60;
CPyL89: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL65;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr", 420, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_attr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_attr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetAttr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetAttr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_attr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_attr__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 482, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_PREFIX_MAP;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_load_static", "FunctionEmitterVisitor", "PREFIX_MAP", 483, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 483, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 483, CPyStatic_emitfunc___globals, "str", cpy_r_r3);
        goto CPyL16;
    }
    cpy_r_prefix = cpy_r_r4;
    cpy_r_r5 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_load_static", "FunctionEmitterVisitor", "emitter", 484, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_module_name;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_emit___Emitter___static_name(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_prefix);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 484, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_name = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[802]; /* 'type' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 485, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = CPyStatics[7363]; /* '(PyObject *)' */
    cpy_r_r18 = CPyStr_Build(2, cpy_r_r17, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 486, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_name = cpy_r_r18;
CPyL12: ;
    cpy_r_r19 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r20 = CPyStatics[6886]; /* ';' */
    cpy_r_r21 = CPyStr_Build(4, cpy_r_dest, cpy_r_r19, cpy_r_name, cpy_r_r20);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 487, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_r22 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 487, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_name);
    goto CPyL15;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static", 481, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_static__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r10;
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
    cpy_r_r0 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 490, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_value = cpy_r_r1;
    cpy_r_r2 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_PREFIX_MAP;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_init_static", "FunctionEmitterVisitor", "PREFIX_MAP", 491, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 491, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 491, CPyStatic_emitfunc___globals, "str", cpy_r_r4);
        goto CPyL17;
    }
    cpy_r_prefix = cpy_r_r5;
    cpy_r_r6 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_init_static", "FunctionEmitterVisitor", "emitter", 492, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_module_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_emit___Emitter___static_name(cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_prefix);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 492, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_name = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_namespace;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatics[802]; /* 'type' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 493, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
CPyL9: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = CPyStatics[7364]; /* '(PyTypeObject *)' */
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r18, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 494, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_value = cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r21 = CPyStatics[6886]; /* ';' */
    cpy_r_r22 = CPyStr_Build(4, cpy_r_name, cpy_r_r20, cpy_r_value, cpy_r_r21);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 495, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 495, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r25 = ((mypyc___ir___ops___InitStaticObject *)cpy_r_op)->_value;
    cpy_r_r26 = ((mypyc___ir___ops___ValueObject *)cpy_r_r25)->_type;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(cpy_r_self, cpy_r_name, cpy_r_r26);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 496, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL17: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_name);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL16;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_init_static(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static", 489, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_init_static__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_init_static__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___InitStatic))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.InitStatic", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_init_static__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_init_static__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 499, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___TupleGetObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 500, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_src = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r4 = CPyStatics[6903]; /* '.f' */
    cpy_r_r5 = ((mypyc___ir___ops___TupleGetObject *)cpy_r_op)->_index;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_Str(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 501, CPyStatic_emitfunc___globals);
        goto CPyL9;
    }
    cpy_r_r7 = CPyStatics[6886]; /* ';' */
    cpy_r_r8 = CPyStr_Build(6, cpy_r_dest, cpy_r_r3, cpy_r_src, cpy_r_r4, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 501, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 501, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_r11 = ((mypyc___ir___ops___TupleGetObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(cpy_r_self, cpy_r_dest, cpy_r_r11);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 502, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_get(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get", 498, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_tuple_get__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_get__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___TupleGet))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.TupleGet", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_tuple_get__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_tuple_get__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign(PyObject *cpy_r_self, PyObject *cpy_r_dest) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_dest, CPyType_ops___Value, 0, mypyc___ir___ops___ValueObject, char); /* is_void */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_dest_assign", 505, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL5;
CPyL2: ;
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_dest);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_dest_assign", 506, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r3 = PyUnicode_Concat(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_dest_assign", 506, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___get_dest_assign(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", 0};
    static CPyArg_Parser parser = {"O:get_dest_assign", kwlist, 0};
    PyObject *obj_dest;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dest)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_dest;
    if (likely(PyObject_TypeCheck(obj_dest, CPyType_ops___Value)))
        arg_dest = obj_dest;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_dest); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign(arg_self, arg_dest);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "get_dest_assign", 504, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_lib;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_cname;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 512, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 513, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL18;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_ops___Value)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_call", 513, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL19;
    }
    cpy_r_arg = cpy_r_r12;
    cpy_r_r13 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 513, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 513, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = PyUnicode_Join(cpy_r_r1, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 513, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_args = cpy_r_r16;
    cpy_r_r17 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_call", "FunctionEmitterVisitor", "emitter", 514, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 514, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_lib = cpy_r_r19;
    cpy_r_r20 = ((mypyc___ir___ops___CallObject *)cpy_r_op)->_fn;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_call", "FunctionEmitterVisitor", "names", 515, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r21);
CPyL12: ;
    cpy_r_r22 = CPyDef_func_ir___FuncDecl___cname(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 515, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_cname = cpy_r_r22;
    cpy_r_r23 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r24 = CPyStatics[2381]; /* '(' */
    cpy_r_r25 = CPyStatics[6872]; /* ');' */
    cpy_r_r26 = CPyStr_Build(7, cpy_r_dest, cpy_r_lib, cpy_r_r23, cpy_r_cname, cpy_r_r24, cpy_r_args, cpy_r_r25);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lib);
    CPy_DECREF(cpy_r_cname);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 516, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 516, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL17: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_lib);
    CPy_DecRef(cpy_r_r20);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_lib);
    goto CPyL16;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call", 510, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Call))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Call", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_is_direct;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_obj_args;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_mtype;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_version;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_lib;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyTagged cpy_r_method_idx;
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
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 520, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_obj;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 521, CPyStatic_emitfunc___globals);
        goto CPyL54;
    }
    cpy_r_obj = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_receiver_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_rtype = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r4);
    cpy_r_class_ir = cpy_r_r4;
    cpy_r_r5 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_method;
    CPy_INCREF(cpy_r_r5);
    cpy_r_name = cpy_r_r5;
    cpy_r_r6 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_class_ir___ClassIR___get_method(cpy_r_r6, cpy_r_name, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 526, CPyStatic_emitfunc___globals);
        goto CPyL55;
    }
    cpy_r_method = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_method != cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL6;
    } else
        goto CPyL56;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 527, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r12 = CPyDef_class_ir___ClassIR___is_method_final(cpy_r_class_ir, cpy_r_name);
    CPy_DECREF(cpy_r_class_ir);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 530, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    cpy_r_is_direct = cpy_r_r12;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r13 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 536, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL57;
    }
    cpy_r_r14 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r13)->_decl;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r14)->_kind;
    cpy_r_r16 = cpy_r_r15 == 2;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 535, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    cpy_r_r18 = cpy_r_r17;
    goto CPyL19;
CPyL11: ;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r19 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 538, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL57;
    }
    cpy_r_r20 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r19)->_decl;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r20)->_kind;
    cpy_r_r22 = cpy_r_r21 == 4;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = CPyStatics[7365]; /* '(PyObject *)Py_TYPE(' */
    cpy_r_r24 = CPyStatics[72]; /* ')' */
    cpy_r_r25 = CPyStr_Build(3, cpy_r_r23, cpy_r_obj, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 537, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    cpy_r_r26 = PyList_New(1);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 537, CPyStatic_emitfunc___globals);
        goto CPyL58;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_r29 = cpy_r_r26;
    goto CPyL18;
CPyL16: ;
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 539, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    CPy_INCREF(cpy_r_obj);
    *(PyObject * *)cpy_r_r32 = cpy_r_obj;
    cpy_r_r29 = cpy_r_r30;
CPyL18: ;
    cpy_r_r18 = cpy_r_r29;
CPyL19: ;
    cpy_r_obj_args = cpy_r_r18;
    cpy_r_r33 = CPyStatics[71]; /* ', ' */
    cpy_r_r34 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = PyList_New(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals);
        goto CPyL59;
    }
    cpy_r_r38 = 0;
CPyL21: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL60;
    cpy_r_r43 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r38);
    if (likely(PyObject_TypeCheck(cpy_r_r43, CPyType_ops___Value)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r43);
        goto CPyL61;
    }
    cpy_r_arg = cpy_r_r44;
    cpy_r_r45 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals);
        goto CPyL61;
    }
    cpy_r_r46 = CPyList_SetItemUnsafe(cpy_r_r37, cpy_r_r38, cpy_r_r45);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals);
        goto CPyL61;
    }
    cpy_r_r47 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r47;
    goto CPyL21;
CPyL26: ;
    cpy_r_r48 = PyNumber_Add(cpy_r_obj_args, cpy_r_r37);
    CPy_DECREF(cpy_r_obj_args);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals, "list", cpy_r_r48);
        goto CPyL57;
    }
    cpy_r_r50 = PyUnicode_Join(cpy_r_r33, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 541, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    cpy_r_args = cpy_r_r50;
    CPy_INCREF(cpy_r_method);
    if (likely(cpy_r_method != Py_None))
        cpy_r_r51 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 542, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL62;
    }
    cpy_r_r52 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_method_call", "FunctionEmitterVisitor", "emitter", 542, CPyStatic_emitfunc___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r52);
CPyL31: ;
    cpy_r_r53 = CPyDef_emitfunc___native_function_type(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 542, CPyStatic_emitfunc___globals);
        goto CPyL62;
    }
    cpy_r_mtype = cpy_r_r53;
    cpy_r_r54 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    cpy_r_r55 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r54)->_is_trait;
    if (!cpy_r_r55) goto CPyL34;
CPyL33: ;
    cpy_r_r56 = CPyStatics[7355]; /* '_TRAIT' */
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = cpy_r_r56;
    goto CPyL35;
CPyL34: ;
    cpy_r_r58 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r58);
    cpy_r_r57 = cpy_r_r58;
CPyL35: ;
    cpy_r_version = cpy_r_r57;
    if (cpy_r_is_direct) {
        goto CPyL64;
    } else
        goto CPyL65;
CPyL36: ;
    cpy_r_r59 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_method_call", "FunctionEmitterVisitor", "emitter", 546, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r59);
CPyL37: ;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r60 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 546, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL67;
    }
    cpy_r_r61 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r60)->_decl;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_r59, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 546, CPyStatic_emitfunc___globals);
        goto CPyL66;
    }
    cpy_r_lib = cpy_r_r62;
    cpy_r_r63 = CPyStatics[6880]; /* 'CPyDef_' */
    if (likely(cpy_r_method != Py_None))
        cpy_r_r64 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 547, CPyStatic_emitfunc___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL68;
    }
    cpy_r_r65 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_method_call", "FunctionEmitterVisitor", "names", 547, CPyStatic_emitfunc___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r65);
CPyL41: ;
    cpy_r_r66 = CPyDef_func_ir___FuncIR___cname(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 547, CPyStatic_emitfunc___globals);
        goto CPyL68;
    }
    cpy_r_r67 = CPyStatics[2381]; /* '(' */
    cpy_r_r68 = CPyStatics[6872]; /* ');' */
    cpy_r_r69 = CPyStr_Build(7, cpy_r_dest, cpy_r_lib, cpy_r_r63, cpy_r_r66, cpy_r_r67, cpy_r_args, cpy_r_r68);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lib);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 547, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 547, CPyStatic_emitfunc___globals);
        goto CPyL53;
    } else
        goto CPyL52;
CPyL44: ;
    cpy_r_r72 = CPyDef_rtypes___RInstance___method_index(cpy_r_rtype, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 550, CPyStatic_emitfunc___globals);
        goto CPyL70;
    }
    cpy_r_method_idx = cpy_r_r72;
    cpy_r_r73 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_method_call", "FunctionEmitterVisitor", "emitter", 556, CPyStatic_emitfunc___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r73);
CPyL46: ;
    cpy_r_r74 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_rtype)->_class_ir;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = CPyDef_emit___Emitter___type_struct_name(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 556, CPyStatic_emitfunc___globals);
        goto CPyL71;
    }
    cpy_r_r76 = CPyTagged_Str(cpy_r_method_idx);
    CPyTagged_DECREF(cpy_r_method_idx);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 552, CPyStatic_emitfunc___globals);
        goto CPyL72;
    }
    cpy_r_r77 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_names;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_method_call", "FunctionEmitterVisitor", "names", 558, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r77);
CPyL49: ;
    cpy_r_r78 = CPyDef_rtypes___RInstance___struct_name(cpy_r_rtype, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 558, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
    cpy_r_r79 = ((mypyc___ir___ops___MethodCallObject *)cpy_r_op)->_method;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyStatics[7366]; /* 'CPY_GET_METHOD' */
    cpy_r_r81 = CPyStatics[2381]; /* '(' */
    cpy_r_r82 = CPyStatics[71]; /* ', ' */
    cpy_r_r83 = CPyStatics[71]; /* ', ' */
    cpy_r_r84 = CPyStatics[71]; /* ', ' */
    cpy_r_r85 = CPyStatics[71]; /* ', ' */
    cpy_r_r86 = CPyStatics[7367]; /* ')(' */
    cpy_r_r87 = CPyStatics[7357];
    cpy_r_r88 = CPyStatics[6868];
    cpy_r_r89 = CPyStr_Build(18, cpy_r_dest, cpy_r_r80, cpy_r_version, cpy_r_r81, cpy_r_obj, cpy_r_r82, cpy_r_r75, cpy_r_r83, cpy_r_r76, cpy_r_r84, cpy_r_r78, cpy_r_r85, cpy_r_mtype, cpy_r_r86, cpy_r_args, cpy_r_r87, cpy_r_r79, cpy_r_r88);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_version);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_mtype);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 552, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 551, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
CPyL52: ;
    return 1;
CPyL53: ;
    cpy_r_r92 = 2;
    return cpy_r_r92;
CPyL54: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_name);
    goto CPyL53;
CPyL56: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_rtype);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_method);
    goto CPyL4;
CPyL57: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_r25);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_obj_args);
    CPy_DecRef(cpy_r_r34);
    goto CPyL53;
CPyL60: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL26;
CPyL61: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_obj_args);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_args);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r51);
    goto CPyL53;
CPyL64: ;
    CPy_DECREF(cpy_r_obj);
    CPy_DECREF(cpy_r_rtype);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_mtype);
    CPy_DECREF(cpy_r_version);
    goto CPyL36;
CPyL65: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL44;
CPyL66: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_args);
    goto CPyL53;
CPyL67: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r59);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_lib);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_lib);
    CPy_DecRef(cpy_r_r64);
    goto CPyL53;
CPyL70: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_mtype);
    CPy_DecRef(cpy_r_version);
    goto CPyL53;
CPyL71: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_mtype);
    CPy_DecRef(cpy_r_version);
    CPyTagged_DecRef(cpy_r_method_idx);
    goto CPyL53;
CPyL72: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_mtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r75);
    goto CPyL53;
CPyL73: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_mtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL53;
CPyL74: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_mtype);
    CPy_DecRef(cpy_r_version);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r76);
    goto CPyL53;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_method_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call", 518, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_method_call__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_method_call__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___MethodCall))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.MethodCall", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_method_call__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_method_call__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_inc_ref", 566, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    cpy_r_src = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___IncRefObject *)cpy_r_op)->_src;
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_r2)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(cpy_r_self, cpy_r_src, cpy_r_r3);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_inc_ref", 567, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_inc_ref", 565, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_inc_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_inc_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IncRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IncRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_inc_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_inc_ref__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_dec_ref", 570, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    cpy_r_src = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_src;
    cpy_r_r3 = ((mypyc___ir___ops___ValueObject *)cpy_r_r2)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypyc___ir___ops___DecRefObject *)cpy_r_op)->_is_xdec;
    cpy_r_r5 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_dec_ref(cpy_r_self, cpy_r_src, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_dec_ref", 571, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_dec_ref", 569, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_dec_ref__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_dec_ref__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___DecRef))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.DecRef", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_dec_ref__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_dec_ref__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_box(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_box", "FunctionEmitterVisitor", "emitter", 574, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___ops___BoxObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_box", 574, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_box", 574, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    cpy_r_r4 = ((mypyc___ir___ops___BoxObject *)cpy_r_op)->_src;
    cpy_r_r5 = ((mypyc___ir___ops___ValueObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_emit___Emitter___emit_box(cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6, 1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_box", 574, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_box(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_box(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_box", 573, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_box__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_box(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_box__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_box__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Box))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Box", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_box__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_box__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_branch;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_handler;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OI cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___next_branch(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 577, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_branch = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_handler = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_branch != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL28;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r4 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 581, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL29;
    }
    cpy_r_r5 = ((mypyc___ir___ops___BranchObject *)cpy_r_r4)->_value;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = cpy_r_r5 == cpy_r_op;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL28;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r7 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 582, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL29;
    }
    cpy_r_r8 = ((mypyc___ir___ops___BranchObject *)cpy_r_r7)->_op;
    cpy_r_r9 = cpy_r_r8 == 202;
    if (!cpy_r_r9) goto CPyL28;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r10 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 583, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL29;
    }
    cpy_r_r11 = ((mypyc___ir___ops___BranchObject *)cpy_r_r10)->_traceback_entry;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL28;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r14 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 584, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL29;
    }
    cpy_r_r15 = ((mypyc___ir___ops___BranchObject *)cpy_r_r14)->_negated;
    if (cpy_r_r15) goto CPyL28;
CPyL10: ;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r16 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 585, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL29;
    }
    cpy_r_r17 = ((mypyc___ir___ops___BranchObject *)cpy_r_r16)->_false;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_cast", "FunctionEmitterVisitor", "next_block", 585, CPyStatic_emitfunc___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r18);
CPyL12: ;
    cpy_r_r19 = cpy_r_r17 == cpy_r_r18;
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r19) {
        goto CPyL31;
    } else
        goto CPyL28;
CPyL13: ;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r20 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 590, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL32;
    }
    cpy_r_r21 = ((mypyc___ir___ops___BranchObject *)cpy_r_r20)->_true;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_emitfunc___FunctionEmitterVisitor___label(cpy_r_self, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 590, CPyStatic_emitfunc___globals);
        goto CPyL32;
    }
    cpy_r_r23 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_cast", "FunctionEmitterVisitor", "source_path", 591, CPyStatic_emitfunc___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r23);
CPyL16: ;
    cpy_r_r24 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_cast", "FunctionEmitterVisitor", "module_name", 592, CPyStatic_emitfunc___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r24);
CPyL17: ;
    if (likely(cpy_r_branch != Py_None))
        cpy_r_r25 = cpy_r_branch;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 593, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Branch", cpy_r_branch);
        goto CPyL35;
    }
    cpy_r_r26 = ((mypyc___ir___ops___BranchObject *)cpy_r_r25)->_traceback_entry;
    CPy_INCREF(cpy_r_r26);
    PyObject *__tmp9484;
    if (unlikely(!(PyTuple_Check(cpy_r_r26) && PyTuple_GET_SIZE(cpy_r_r26) == 2))) {
        __tmp9484 = NULL;
        goto __LL9485;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r26, 0))))
        __tmp9484 = PyTuple_GET_ITEM(cpy_r_r26, 0);
    else {
        __tmp9484 = NULL;
    }
    if (__tmp9484 == NULL) goto __LL9485;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r26, 1))))
        __tmp9484 = PyTuple_GET_ITEM(cpy_r_r26, 1);
    else {
        __tmp9484 = NULL;
    }
    if (__tmp9484 == NULL) goto __LL9485;
    __tmp9484 = cpy_r_r26;
__LL9485: ;
    if (unlikely(__tmp9484 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r26); cpy_r_r27 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9486 = PyTuple_GET_ITEM(cpy_r_r26, 0);
        CPy_INCREF(__tmp9486);
        PyObject *__tmp9487;
        if (likely(PyUnicode_Check(__tmp9486)))
            __tmp9487 = __tmp9486;
        else {
            CPy_TypeError("str", __tmp9486); 
            __tmp9487 = NULL;
        }
        cpy_r_r27.f0 = __tmp9487;
        PyObject *__tmp9488 = PyTuple_GET_ITEM(cpy_r_r26, 1);
        CPyTagged __tmp9489;
        if (likely(PyLong_Check(__tmp9488)))
            __tmp9489 = CPyTagged_FromObject(__tmp9488);
        else {
            CPy_TypeError("int", __tmp9488); __tmp9489 = CPY_INT_TAG;
        }
        cpy_r_r27.f1 = __tmp9489;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 593, CPyStatic_emitfunc___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_branch);
    cpy_r_r28 = CPyDef_emit___TracebackAndGotoHandler(cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r27);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r27.f0);
    CPyTagged_DECREF(cpy_r_r27.f1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 589, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_handler = cpy_r_r28;
    cpy_r_r29 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_cast", "FunctionEmitterVisitor", "op_index", 595, CPyStatic_emitfunc___globals);
        goto CPyL36;
    }
CPyL21: ;
    cpy_r_r30 = CPyTagged_Add(cpy_r_r29, 2);
    if (((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index);
    }
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_op_index = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 595, CPyStatic_emitfunc___globals);
        goto CPyL36;
    }
CPyL22: ;
    cpy_r_r32 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_cast", "FunctionEmitterVisitor", "emitter", 597, CPyStatic_emitfunc___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r32);
CPyL23: ;
    cpy_r_r33 = ((mypyc___ir___ops___CastObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 598, CPyStatic_emitfunc___globals);
        goto CPyL37;
    }
    cpy_r_r35 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 598, CPyStatic_emitfunc___globals);
        goto CPyL38;
    }
    cpy_r_r36 = ((mypyc___ir___ops___CastObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = ((mypyc___ir___ops___CastObject *)cpy_r_op)->_src;
    cpy_r_r38 = ((mypyc___ir___ops___ValueObject *)cpy_r_r37)->_type;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_cast(cpy_r_r32, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r39, cpy_r_handler, cpy_r_r40, cpy_r_r41, cpy_r_r38, cpy_r_r42);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_handler);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 597, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL28: ;
    CPy_DECREF(cpy_r_branch);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_handler);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_handler);
    CPy_DecRef(cpy_r_r17);
    goto CPyL27;
CPyL31: ;
    CPy_DECREF(cpy_r_handler);
    goto CPyL13;
CPyL32: ;
    CPy_DecRef(cpy_r_branch);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_r22);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL36: ;
    CPy_DecRef(cpy_r_handler);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_handler);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_handler);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL27;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast", 576, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_cast__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_cast__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Cast))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Cast", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_cast__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_cast__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_unbox", "FunctionEmitterVisitor", "emitter", 602, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___ops___UnboxObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unbox", 602, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unbox", 602, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    cpy_r_r4 = ((mypyc___ir___ops___UnboxObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 2;
    cpy_r_r6 = NULL;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_unbox(cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unbox", 602, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_unbox(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unbox", 601, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_unbox__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unbox__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unbox))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unbox", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unbox__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unbox__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_unreachable", "FunctionEmitterVisitor", "emitter", 605, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[7368]; /* 'CPy_Unreachable();' */
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter___emit_line(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unreachable", 605, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unreachable", 604, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_unreachable__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_unreachable__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Unreachable))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Unreachable", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_unreachable__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_unreachable__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
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
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
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
    char cpy_r_r54;
    cpy_r_r0 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL19;
    cpy_r_r3 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&PyUnicode_Type;
    cpy_r_r5 = PyObject_IsInstance(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 610, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 611, CPyStatic_emitfunc___globals, "str", cpy_r_r8);
        goto CPyL27;
    }
    cpy_r_r10 = CPyStatics[178]; /* '"' */
    cpy_r_r11 = CPyStatics[7369]; /* '\\"' */
    cpy_r_r12 = PyUnicode_Replace(cpy_r_r9, cpy_r_r10, cpy_r_r11, -1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 611, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_message = cpy_r_r12;
    cpy_r_r13 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", "FunctionEmitterVisitor", "emitter", 612, CPyStatic_emitfunc___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r13);
CPyL6: ;
    cpy_r_r14 = CPyStatics[7370]; /* 'PyErr_SetString(PyExc_' */
    cpy_r_r15 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[7371]; /* ', "' */
    cpy_r_r17 = CPyStatics[7372]; /* '");' */
    cpy_r_r18 = CPyStr_Build(5, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_message, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_message);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 612, CPyStatic_emitfunc___globals);
        goto CPyL29;
    }
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_emit___Emitter___emit_line(cpy_r_r13, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 612, CPyStatic_emitfunc___globals);
        goto CPyL27;
    } else
        goto CPyL22;
CPyL8: ;
    cpy_r_r21 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    cpy_r_r22 = (PyObject *)CPyType_ops___Value;
    cpy_r_r23 = CPy_TypeCheck(cpy_r_r21, cpy_r_r22);
    if (!cpy_r_r23) goto CPyL15;
    cpy_r_r24 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", "FunctionEmitterVisitor", "emitter", 614, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r24);
CPyL10: ;
    cpy_r_r25 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", "FunctionEmitterVisitor", "emitter", 616, CPyStatic_emitfunc___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r26);
CPyL11: ;
    cpy_r_r27 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_value;
    CPy_INCREF(cpy_r_r27);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_ops___Value)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 616, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_r29 = CPyDef_emit___Emitter___reg(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 616, CPyStatic_emitfunc___globals);
        goto CPyL30;
    }
    cpy_r_r30 = CPyStatics[7373]; /* 'PyErr_SetObject(PyExc_' */
    cpy_r_r31 = CPyStatics[71]; /* ', ' */
    cpy_r_r32 = CPyStatics[6872]; /* ');' */
    cpy_r_r33 = CPyStr_Build(5, cpy_r_r30, cpy_r_r25, cpy_r_r31, cpy_r_r29, cpy_r_r32);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 615, CPyStatic_emitfunc___globals);
        goto CPyL32;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_emit___Emitter___emit_line(cpy_r_r24, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 614, CPyStatic_emitfunc___globals);
        goto CPyL27;
    } else
        goto CPyL22;
CPyL15: ;
    cpy_r_r36 = 0 ? Py_True : Py_False;
    cpy_r_r37 = PyObject_IsTrue(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", -1, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    cpy_r_r39 = cpy_r_r37;
    if (cpy_r_r39) goto CPyL22;
    PyErr_SetString(PyExc_AssertionError, "op value type must be either str or Value");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 620, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r41 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", "FunctionEmitterVisitor", "emitter", 622, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r41);
CPyL20: ;
    cpy_r_r42 = CPyStatics[7374]; /* 'PyErr_SetNone(PyExc_' */
    cpy_r_r43 = ((mypyc___ir___ops___RaiseStandardErrorObject *)cpy_r_op)->_class_name;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[6872]; /* ');' */
    cpy_r_r45 = CPyStr_Build(3, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 622, CPyStatic_emitfunc___globals);
        goto CPyL33;
    }
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_r41, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 622, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
CPyL22: ;
    cpy_r_r48 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", "FunctionEmitterVisitor", "emitter", 623, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r48);
CPyL23: ;
    cpy_r_r49 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 623, CPyStatic_emitfunc___globals);
        goto CPyL34;
    }
    cpy_r_r50 = CPyStatics[7167]; /* ' = 0;' */
    cpy_r_r51 = CPyStr_Build(2, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 623, CPyStatic_emitfunc___globals);
        goto CPyL34;
    }
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_emit___Emitter___emit_line(cpy_r_r48, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 623, CPyStatic_emitfunc___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL28: ;
    CPy_DecRef(cpy_r_message);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL27;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error", 607, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_raise_standard_error__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___RaiseStandardError))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.RaiseStandardError", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_raise_standard_error__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_raise_standard_error__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_op, CPyType_ops___CallC, 0, mypyc___ir___ops___CallCObject, char); /* is_void */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 626, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL3;
CPyL2: ;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_dest = cpy_r_r1;
    goto CPyL5;
CPyL3: ;
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___get_dest_assign(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 629, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_dest = cpy_r_r2;
CPyL5: ;
    cpy_r_r3 = CPyStatics[71]; /* ', ' */
    cpy_r_r4 = ((mypyc___ir___ops___CallCObject *)cpy_r_op)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = PyList_New(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 630, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    cpy_r_r8 = 0;
CPyL7: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL19;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r8);
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_ops___Value)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 630, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Value", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 630, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r16 = CPyList_SetItemUnsafe(cpy_r_r7, cpy_r_r8, cpy_r_r15);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 630, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r17;
    goto CPyL7;
CPyL12: ;
    cpy_r_r18 = PyUnicode_Join(cpy_r_r3, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 630, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_args = cpy_r_r18;
    cpy_r_r19 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_call_c", "FunctionEmitterVisitor", "emitter", 631, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r19);
CPyL14: ;
    cpy_r_r20 = ((mypyc___ir___ops___CallCObject *)cpy_r_op)->_function_name;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[2381]; /* '(' */
    cpy_r_r22 = CPyStatics[6872]; /* ');' */
    cpy_r_r23 = CPyStr_Build(5, cpy_r_dest, cpy_r_r20, cpy_r_r21, cpy_r_args, cpy_r_r22);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 631, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_r19, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 631, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL18: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r4);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_args);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_call_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c", 625, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_call_c__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_call_c__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___CallC))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.CallC", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_call_c__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_call_c__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate", 634, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___TruncateObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate", 635, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_value = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r4 = CPyStatics[6886]; /* ';' */
    cpy_r_r5 = CPyStr_Build(4, cpy_r_dest, cpy_r_r3, cpy_r_value, cpy_r_r4);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate", 637, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate", 637, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_truncate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate", 633, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_truncate__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_truncate__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Truncate))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Truncate", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_truncate__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_truncate__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_value;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_src_cast;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 640, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 641, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    cpy_r_value = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_signed;
    if (!cpy_r_r3) goto CPyL5;
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_src;
    cpy_r_r5 = ((mypyc___ir___ops___ValueObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 643, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_src_cast = cpy_r_r6;
    goto CPyL7;
CPyL5: ;
    cpy_r_r7 = ((mypyc___ir___ops___ExtendObject *)cpy_r_op)->_src;
    cpy_r_r8 = ((mypyc___ir___ops___ValueObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 645, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_src_cast = cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r11 = CPyStatics[6886]; /* ';' */
    cpy_r_r12 = CPyStr_Build(5, cpy_r_dest, cpy_r_r10, cpy_r_src_cast, cpy_r_value, cpy_r_r11);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src_cast);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 646, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 646, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL11: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_value);
    goto CPyL10;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_extend(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend", 639, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_extend__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_extend__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Extend))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Extend", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_extend__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_extend__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_global", 649, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r2 = ((mypyc___ir___ops___LoadGlobalObject *)cpy_r_op)->_identifier;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[6886]; /* ';' */
    cpy_r_r4 = CPyStr_Build(4, cpy_r_dest, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_global", 650, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    cpy_r_r5 = ((mypyc___ir___ops___LoadGlobalObject *)cpy_r_op)->_ann;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_global", 650, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_global", 648, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_global__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_global__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadGlobal))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadGlobal", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_global__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_global__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_rhs;
    CPyTagged cpy_r_r5;
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
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 653, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 654, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_lhs = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 655, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_rhs = cpy_r_r4;
    cpy_r_r5 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_op;
    cpy_r_r6 = cpy_r_r5 == 408;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_lhs;
    cpy_r_r8 = ((mypyc___ir___ops___ValueObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 658, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r9, cpy_r_lhs);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_lhs);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 658, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    cpy_r_lhs = cpy_r_r10;
    cpy_r_r11 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_rhs;
    cpy_r_r12 = ((mypyc___ir___ops___ValueObject *)cpy_r_r11)->_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 659, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    cpy_r_r14 = PyUnicode_Concat(cpy_r_r13, cpy_r_rhs);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 659, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_rhs = cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r16 = CPyStatics[295]; /* ' ' */
    cpy_r_r17 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_op_str;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypyc___ir___ops___IntOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r18);
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r17, cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 660, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 660, CPyStatic_emitfunc___globals, "str", cpy_r_r20);
        goto CPyL17;
    }
    cpy_r_r22 = CPyStatics[295]; /* ' ' */
    cpy_r_r23 = CPyStatics[6886]; /* ';' */
    cpy_r_r24 = CPyStr_Build(8, cpy_r_dest, cpy_r_r15, cpy_r_lhs, cpy_r_r16, cpy_r_r21, cpy_r_r22, cpy_r_rhs, cpy_r_r23);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 660, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 660, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL15: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_rhs);
    goto CPyL14;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op", 652, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_int_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_int_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___IntOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.IntOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_int_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_int_op__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_rhs;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_lhs_cast;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_rhs_cast;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    int64_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    int64_t cpy_r_r62;
    char cpy_r_r63;
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
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyTagged cpy_r_r80;
    int64_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    int64_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
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
    char cpy_r_r114;
    char cpy_r_r115;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 663, CPyStatic_emitfunc___globals);
        goto CPyL72;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 664, CPyStatic_emitfunc___globals);
        goto CPyL73;
    }
    cpy_r_lhs = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 665, CPyStatic_emitfunc___globals);
        goto CPyL74;
    }
    cpy_r_rhs = cpy_r_r4;
    cpy_r_r5 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r5);
    cpy_r_lhs_cast = cpy_r_r5;
    cpy_r_r6 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r6);
    cpy_r_rhs_cast = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = cpy_r_r7 == 204;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL6;
CPyL5: ;
    cpy_r_r12 = CPyTagged_IsEq_(cpy_r_r7, 204);
    cpy_r_r11 = cpy_r_r12;
CPyL6: ;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r13 = cpy_r_r11;
    goto CPyL12;
CPyL8: ;
    cpy_r_r14 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r15 = cpy_r_r14 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = cpy_r_r14 == 206;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL11;
CPyL10: ;
    cpy_r_r19 = CPyTagged_IsEq_(cpy_r_r14, 206);
    cpy_r_r18 = cpy_r_r19;
CPyL11: ;
    cpy_r_r13 = cpy_r_r18;
CPyL12: ;
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r20 = cpy_r_r13;
    goto CPyL18;
CPyL14: ;
    cpy_r_r21 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r22 = cpy_r_r21 & 1;
    cpy_r_r23 = cpy_r_r22 == 0;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = cpy_r_r21 == 208;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL17;
CPyL16: ;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r21, 208);
    cpy_r_r25 = cpy_r_r26;
CPyL17: ;
    cpy_r_r20 = cpy_r_r25;
CPyL18: ;
    if (!cpy_r_r20) goto CPyL20;
    cpy_r_r27 = cpy_r_r20;
    goto CPyL24;
CPyL20: ;
    cpy_r_r28 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r29 = cpy_r_r28 & 1;
    cpy_r_r30 = cpy_r_r29 == 0;
    if (!cpy_r_r30) goto CPyL22;
    cpy_r_r31 = cpy_r_r28 == 210;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL23;
CPyL22: ;
    cpy_r_r33 = CPyTagged_IsEq_(cpy_r_r28, 210);
    cpy_r_r32 = cpy_r_r33;
CPyL23: ;
    cpy_r_r27 = cpy_r_r32;
CPyL24: ;
    if (cpy_r_r27) {
        goto CPyL75;
    } else
        goto CPyL28;
CPyL25: ;
    cpy_r_r34 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    cpy_r_r35 = ((mypyc___ir___ops___ValueObject *)cpy_r_r34)->_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 670, CPyStatic_emitfunc___globals);
        goto CPyL76;
    }
    cpy_r_lhs_cast = cpy_r_r36;
    cpy_r_r37 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    cpy_r_r38 = ((mypyc___ir___ops___ValueObject *)cpy_r_r37)->_type;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 671, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    cpy_r_rhs_cast = cpy_r_r39;
    goto CPyL67;
CPyL28: ;
    cpy_r_r40 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r41 = cpy_r_r40 & 1;
    cpy_r_r42 = cpy_r_r41 == 0;
    if (!cpy_r_r42) goto CPyL30;
    cpy_r_r43 = cpy_r_r40 == 212;
    cpy_r_r44 = cpy_r_r43;
    goto CPyL31;
CPyL30: ;
    cpy_r_r45 = CPyTagged_IsEq_(cpy_r_r40, 212);
    cpy_r_r44 = cpy_r_r45;
CPyL31: ;
    if (!cpy_r_r44) goto CPyL33;
    cpy_r_r46 = cpy_r_r44;
    goto CPyL37;
CPyL33: ;
    cpy_r_r47 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r48 = cpy_r_r47 & 1;
    cpy_r_r49 = cpy_r_r48 == 0;
    if (!cpy_r_r49) goto CPyL35;
    cpy_r_r50 = cpy_r_r47 == 214;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL36;
CPyL35: ;
    cpy_r_r52 = CPyTagged_IsEq_(cpy_r_r47, 214);
    cpy_r_r51 = cpy_r_r52;
CPyL36: ;
    cpy_r_r46 = cpy_r_r51;
CPyL37: ;
    if (!cpy_r_r46) goto CPyL39;
    cpy_r_r53 = cpy_r_r46;
    goto CPyL43;
CPyL39: ;
    cpy_r_r54 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r55 = cpy_r_r54 & 1;
    cpy_r_r56 = cpy_r_r55 == 0;
    if (!cpy_r_r56) goto CPyL41;
    cpy_r_r57 = cpy_r_r54 == 216;
    cpy_r_r58 = cpy_r_r57;
    goto CPyL42;
CPyL41: ;
    cpy_r_r59 = CPyTagged_IsEq_(cpy_r_r54, 216);
    cpy_r_r58 = cpy_r_r59;
CPyL42: ;
    cpy_r_r53 = cpy_r_r58;
CPyL43: ;
    if (!cpy_r_r53) goto CPyL45;
    cpy_r_r60 = cpy_r_r53;
    goto CPyL49;
CPyL45: ;
    cpy_r_r61 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    cpy_r_r62 = cpy_r_r61 & 1;
    cpy_r_r63 = cpy_r_r62 == 0;
    if (!cpy_r_r63) goto CPyL47;
    cpy_r_r64 = cpy_r_r61 == 218;
    cpy_r_r65 = cpy_r_r64;
    goto CPyL48;
CPyL47: ;
    cpy_r_r66 = CPyTagged_IsEq_(cpy_r_r61, 218);
    cpy_r_r65 = cpy_r_r66;
CPyL48: ;
    cpy_r_r60 = cpy_r_r65;
CPyL49: ;
    if (cpy_r_r60) {
        goto CPyL78;
    } else
        goto CPyL53;
CPyL50: ;
    cpy_r_r67 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    cpy_r_r68 = ((mypyc___ir___ops___ValueObject *)cpy_r_r67)->_type;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(cpy_r_self, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 674, CPyStatic_emitfunc___globals);
        goto CPyL76;
    }
    cpy_r_lhs_cast = cpy_r_r69;
    cpy_r_r70 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    cpy_r_r71 = ((mypyc___ir___ops___ValueObject *)cpy_r_r70)->_type;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(cpy_r_self, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 675, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    cpy_r_rhs_cast = cpy_r_r72;
    goto CPyL67;
CPyL53: ;
    cpy_r_r73 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    cpy_r_r74 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_r73)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (!cpy_r_r77) goto CPyL60;
    cpy_r_r78 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_ops___Integer))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 676, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Integer", cpy_r_r78);
        goto CPyL79;
    }
    cpy_r_r80 = ((mypyc___ir___ops___IntegerObject *)cpy_r_r79)->_value;
    cpy_r_r81 = cpy_r_r80 & 1;
    cpy_r_r82 = cpy_r_r81 != 0;
    if (!cpy_r_r82) goto CPyL57;
    cpy_r_r83 = CPyTagged_IsLt_(cpy_r_r80, 0);
    if (cpy_r_r83) {
        goto CPyL80;
    } else
        goto CPyL60;
CPyL57: ;
    cpy_r_r84 = (Py_ssize_t)cpy_r_r80 < (Py_ssize_t)0;
    if (cpy_r_r84) {
        goto CPyL80;
    } else
        goto CPyL60;
CPyL58: ;
    cpy_r_r85 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    cpy_r_r86 = ((mypyc___ir___ops___ValueObject *)cpy_r_r85)->_type;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 678, CPyStatic_emitfunc___globals);
        goto CPyL77;
    }
    cpy_r_rhs_cast = cpy_r_r87;
    goto CPyL67;
CPyL60: ;
    cpy_r_r88 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    cpy_r_r89 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_r88)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (!cpy_r_r92) goto CPyL67;
    cpy_r_r93 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_rhs;
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_ops___Integer))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 679, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Integer", cpy_r_r93);
        goto CPyL79;
    }
    cpy_r_r95 = ((mypyc___ir___ops___IntegerObject *)cpy_r_r94)->_value;
    cpy_r_r96 = cpy_r_r95 & 1;
    cpy_r_r97 = cpy_r_r96 != 0;
    if (!cpy_r_r97) goto CPyL64;
    cpy_r_r98 = CPyTagged_IsLt_(cpy_r_r95, 0);
    if (cpy_r_r98) {
        goto CPyL81;
    } else
        goto CPyL67;
CPyL64: ;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)0;
    if (cpy_r_r99) {
        goto CPyL81;
    } else
        goto CPyL67;
CPyL65: ;
    cpy_r_r100 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_lhs;
    cpy_r_r101 = ((mypyc___ir___ops___ValueObject *)cpy_r_r100)->_type;
    CPy_INCREF(cpy_r_r101);
    cpy_r_r102 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(cpy_r_self, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 681, CPyStatic_emitfunc___globals);
        goto CPyL82;
    }
    cpy_r_lhs_cast = cpy_r_r102;
CPyL67: ;
    cpy_r_r103 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r104 = CPyStatics[295]; /* ' ' */
    cpy_r_r105 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op_str;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = ((mypyc___ir___ops___ComparisonOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r106);
    cpy_r_r107 = CPyTagged_StealAsObject(cpy_r_r106);
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r105, cpy_r_r107);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 682, CPyStatic_emitfunc___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 682, CPyStatic_emitfunc___globals, "str", cpy_r_r108);
        goto CPyL79;
    }
    cpy_r_r110 = CPyStatics[295]; /* ' ' */
    cpy_r_r111 = CPyStatics[6886]; /* ';' */
    cpy_r_r112 = CPyStr_Build(10, cpy_r_dest, cpy_r_r103, cpy_r_lhs_cast, cpy_r_lhs, cpy_r_r104, cpy_r_r109, cpy_r_r110, cpy_r_rhs_cast, cpy_r_rhs, cpy_r_r111);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lhs_cast);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_rhs_cast);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 682, CPyStatic_emitfunc___globals);
        goto CPyL72;
    }
    cpy_r_r113 = NULL;
    cpy_r_r114 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 682, CPyStatic_emitfunc___globals);
        goto CPyL72;
    }
    return 1;
CPyL72: ;
    cpy_r_r115 = 2;
    return cpy_r_r115;
CPyL73: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL72;
CPyL74: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL72;
CPyL75: ;
    CPy_DECREF(cpy_r_lhs_cast);
    CPy_DECREF(cpy_r_rhs_cast);
    goto CPyL25;
CPyL76: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    goto CPyL72;
CPyL77: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    CPy_DecRef(cpy_r_lhs_cast);
    goto CPyL72;
CPyL78: ;
    CPy_DECREF(cpy_r_lhs_cast);
    CPy_DECREF(cpy_r_rhs_cast);
    goto CPyL50;
CPyL79: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    CPy_DecRef(cpy_r_lhs_cast);
    CPy_DecRef(cpy_r_rhs_cast);
    goto CPyL72;
CPyL80: ;
    CPy_DECREF(cpy_r_rhs_cast);
    goto CPyL58;
CPyL81: ;
    CPy_DECREF(cpy_r_lhs_cast);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    CPy_DecRef(cpy_r_rhs_cast);
    goto CPyL72;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op", 662, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___ComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.ComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_comparison_op__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_rhs;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
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
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 685, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 686, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_lhs = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 687, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
    cpy_r_rhs = cpy_r_r4;
    cpy_r_r5 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_op;
    cpy_r_r6 = cpy_r_r5 != 8;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r8 = CPyStatics[295]; /* ' ' */
    cpy_r_r9 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_op_str;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___ir___ops___FloatOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 689, CPyStatic_emitfunc___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 689, CPyStatic_emitfunc___globals, "str", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[295]; /* ' ' */
    cpy_r_r15 = CPyStatics[6886]; /* ';' */
    cpy_r_r16 = CPyStr_Build(8, cpy_r_dest, cpy_r_r7, cpy_r_lhs, cpy_r_r8, cpy_r_r13, cpy_r_r14, cpy_r_rhs, cpy_r_r15);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 689, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 689, CPyStatic_emitfunc___globals);
        goto CPyL11;
    } else
        goto CPyL10;
CPyL8: ;
    cpy_r_r19 = CPyStatics[7375]; /* ' = fmod(' */
    cpy_r_r20 = CPyStatics[71]; /* ', ' */
    cpy_r_r21 = CPyStatics[6872]; /* ');' */
    cpy_r_r22 = CPyStr_Build(6, cpy_r_dest, cpy_r_r19, cpy_r_lhs, cpy_r_r20, cpy_r_rhs, cpy_r_r21);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 692, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 692, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL12: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    goto CPyL11;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op", 684, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_op__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg", 695, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___FloatNegObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg", 696, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_src = cpy_r_r2;
    cpy_r_r3 = CPyStatics[7376]; /* ' = -' */
    cpy_r_r4 = CPyStatics[6886]; /* ';' */
    cpy_r_r5 = CPyStr_Build(4, cpy_r_dest, cpy_r_r3, cpy_r_src, cpy_r_r4);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg", 697, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg", 697, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_neg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg", 694, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_neg__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_neg__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatNeg))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatNeg", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_neg__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_neg__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_rhs;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 700, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_lhs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 701, CPyStatic_emitfunc___globals);
        goto CPyL9;
    }
    cpy_r_lhs = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_rhs;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 702, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_rhs = cpy_r_r4;
    cpy_r_r5 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r6 = CPyStatics[295]; /* ' ' */
    cpy_r_r7 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_op_str;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypyc___ir___ops___FloatComparisonOpObject *)cpy_r_op)->_op;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 703, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 703, CPyStatic_emitfunc___globals, "str", cpy_r_r10);
        goto CPyL11;
    }
    cpy_r_r12 = CPyStatics[295]; /* ' ' */
    cpy_r_r13 = CPyStatics[6886]; /* ';' */
    cpy_r_r14 = CPyStr_Build(8, cpy_r_dest, cpy_r_r5, cpy_r_lhs, cpy_r_r6, cpy_r_r11, cpy_r_r12, cpy_r_rhs, cpy_r_r13);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 703, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 703, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL9: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_rhs);
    goto CPyL8;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op", 699, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_float_comparison_op__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___FloatComparisonOp))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.FloatComparisonOp", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_float_comparison_op__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_float_comparison_op__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 706, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___LoadMemObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 707, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    cpy_r_src = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___LoadMemObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 709, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_type = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7377]; /* ' = *(' */
    cpy_r_r6 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r7 = CPyStatics[6886]; /* ';' */
    cpy_r_r8 = CPyStr_Build(6, cpy_r_dest, cpy_r_r5, cpy_r_type, cpy_r_r6, cpy_r_src, cpy_r_r7);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 710, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 710, CPyStatic_emitfunc___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL6;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem", 705, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_mem__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_dest_type;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_dest;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 713, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_dest = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 714, CPyStatic_emitfunc___globals);
        goto CPyL11;
    }
    cpy_r_src = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___ops___SetMemObject *)cpy_r_op)->_dest_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 715, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_dest_type = cpy_r_r5;
    cpy_r_r6 = PyUnicode_Compare(cpy_r_dest, cpy_r_src);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 718, CPyStatic_emitfunc___globals);
        goto CPyL13;
    }
CPyL6: ;
    cpy_r_r11 = cpy_r_r6 != 0;
    if (!cpy_r_r11) goto CPyL14;
    cpy_r_r12 = CPyStatics[7378]; /* '*(' */
    cpy_r_r13 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r14 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r15 = CPyStatics[6886]; /* ';' */
    cpy_r_r16 = CPyStr_Build(7, cpy_r_r12, cpy_r_dest_type, cpy_r_r13, cpy_r_dest, cpy_r_r14, cpy_r_src, cpy_r_r15);
    CPy_DECREF(cpy_r_dest_type);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 719, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 719, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_dest_type);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_dest_type);
    goto CPyL9;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_mem(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem", 712, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_set_mem__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_set_mem__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___SetMem))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.SetMem", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_set_mem__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_set_mem__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
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
    char cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 722, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_dest = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 723, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_src = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src_type;
    cpy_r_r4 = (PyObject *)CPyType_rtypes___RStruct;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) {
        goto CPyL5;
    } else
        goto CPyL17;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 725, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r9 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_field;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src_type;
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_rtypes___RStruct))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 726, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r10);
        goto CPyL18;
    }
    cpy_r_r12 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r11)->_names;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PySequence_Contains(cpy_r_r12, cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 726, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r15 = cpy_r_r13;
    if (cpy_r_r15) {
        goto CPyL10;
    } else
        goto CPyL20;
CPyL8: ;
    PyErr_SetString(PyExc_AssertionError, "Invalid field name.");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 726, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r17 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_type;
    cpy_r_r18 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r17)->__ctype;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", "RType", "_ctype", 729, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_src_type;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_rtypes___RStruct))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 729, CPyStatic_emitfunc___globals, "mypyc.ir.rtypes.RStruct", cpy_r_r19);
        goto CPyL21;
    }
    cpy_r_r21 = ((mypyc___ir___rtypes___RStructObject *)cpy_r_r20)->_name;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((mypyc___ir___ops___GetElementPtrObject *)cpy_r_op)->_field;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[7379]; /* ' = (' */
    cpy_r_r24 = CPyStatics[7380]; /* ')&((' */
    cpy_r_r25 = CPyStatics[6890]; /* ' *)' */
    cpy_r_r26 = CPyStatics[6891]; /* ')->' */
    cpy_r_r27 = CPyStatics[6886]; /* ';' */
    cpy_r_r28 = CPyStr_Build(10, cpy_r_dest, cpy_r_r23, cpy_r_r18, cpy_r_r24, cpy_r_r21, cpy_r_r25, cpy_r_src, cpy_r_r26, cpy_r_r22, cpy_r_r27);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_src);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 728, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 727, CPyStatic_emitfunc___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL16: ;
    CPy_DecRef(cpy_r_dest);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    goto CPyL3;
CPyL18: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL15;
CPyL20: ;
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_src);
    goto CPyL8;
CPyL21: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r18);
    goto CPyL15;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr", 721, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_get_element_ptr__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___GetElementPtr))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.GetElementPtr", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_get_element_ptr__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_get_element_ptr__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_dest;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_prefix;
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
    char cpy_r_r38;
    cpy_r_r0 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_op);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 735, CPyStatic_emitfunc___globals);
        goto CPyL22;
    }
    cpy_r_dest = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    cpy_r_r3 = (PyObject *)CPyType_ops___Register;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_r2)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___Register))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 737, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Register", cpy_r_r7);
        goto CPyL23;
    }
    cpy_r_r9 = CPyDef_emitfunc___FunctionEmitterVisitor___reg(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 737, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_src = cpy_r_r9;
    goto CPyL17;
CPyL5: ;
    cpy_r_r10 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    cpy_r_r11 = (PyObject *)CPyType_ops___LoadStatic;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL15;
    cpy_r_r15 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_PREFIX_MAP;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_load_address", "FunctionEmitterVisitor", "PREFIX_MAP", 739, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r15);
CPyL7: ;
    cpy_r_r16 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_ops___LoadStatic))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 739, CPyStatic_emitfunc___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r16);
        goto CPyL24;
    }
    cpy_r_r18 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r17)->_namespace;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r15, cpy_r_r18);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 739, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 739, CPyStatic_emitfunc___globals, "str", cpy_r_r19);
        goto CPyL23;
    }
    cpy_r_prefix = cpy_r_r20;
    cpy_r_r21 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "visit_load_address", "FunctionEmitterVisitor", "emitter", 740, CPyStatic_emitfunc___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r21);
CPyL11: ;
    cpy_r_r22 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_ops___LoadStatic))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 740, CPyStatic_emitfunc___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r22);
        goto CPyL26;
    }
    cpy_r_r24 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r23)->_identifier;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_ops___LoadStatic))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 740, CPyStatic_emitfunc___globals, "mypyc.ir.ops.LoadStatic", cpy_r_r25);
        goto CPyL27;
    }
    cpy_r_r27 = ((mypyc___ir___ops___LoadStaticObject *)cpy_r_r26)->_module_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_emit___Emitter___static_name(cpy_r_r21, cpy_r_r24, cpy_r_r27, cpy_r_prefix);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 740, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_src = cpy_r_r28;
    goto CPyL17;
CPyL15: ;
    cpy_r_r29 = ((mypyc___ir___ops___LoadAddressObject *)cpy_r_op)->_src;
    CPy_INCREF(cpy_r_r29);
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 742, CPyStatic_emitfunc___globals, "str", cpy_r_r29);
        goto CPyL23;
    }
    cpy_r_src = cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = CPyStatics[7379]; /* ' = (' */
    cpy_r_r32 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->__ctype;
    if (unlikely(cpy_r_r32 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_ctype' of 'RType' undefined");
    } else {
        CPy_INCREF(cpy_r_r32);
    }
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 743, CPyStatic_emitfunc___globals);
        goto CPyL28;
    }
CPyL18: ;
    cpy_r_r33 = CPyStatics[7381]; /* ')&' */
    cpy_r_r34 = CPyStatics[6886]; /* ';' */
    cpy_r_r35 = CPyStr_Build(6, cpy_r_dest, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_src, cpy_r_r34);
    CPy_DECREF(cpy_r_dest);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 743, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 743, CPyStatic_emitfunc___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL22: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_r15);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r21);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_dest);
    CPy_DecRef(cpy_r_src);
    goto CPyL21;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address", 733, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_load_address__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_load_address__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___LoadAddress))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.LoadAddress", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_load_address__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_load_address__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    return 1;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_keep_alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_keep_alive", 745, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive__OpVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive(cpy_r_self, cpy_r_op);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___visit_keep_alive__OpVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:visit_keep_alive__OpVisitor_glue", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___KeepAlive))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.KeepAlive", obj_op); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___visit_keep_alive__OpVisitor_glue(arg_self, arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "visit_keep_alive__OpVisitor_glue", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___label(PyObject *cpy_r_self, PyObject *cpy_r_label) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "label", "FunctionEmitterVisitor", "emitter", 752, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_emit___Emitter___label(cpy_r_r0, cpy_r_label);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "label", 752, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___label(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"label", 0};
    static CPyArg_Parser parser = {"O:label", kwlist, 0};
    PyObject *obj_label;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_label)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_label;
    if (likely(Py_TYPE(obj_label) == CPyType_ops___BasicBlock))
        arg_label = obj_label;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_label); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___label(arg_self, arg_label);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "label", 751, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_val;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_s;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    double cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = (PyObject *)CPyType_ops___Integer;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_reg)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_reg) == CPyType_ops___Integer))
        cpy_r_r4 = cpy_r_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "reg", 756, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Integer", cpy_r_reg);
        goto CPyL53;
    }
    cpy_r_r5 = ((mypyc___ir___ops___IntegerObject *)cpy_r_r4)->_value;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_val = cpy_r_r5;
    cpy_r_r6 = cpy_r_val == 0;
    if (!cpy_r_r6) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_reg) == CPyType_ops___Integer))
        cpy_r_r7 = cpy_r_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "reg", 757, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Integer", cpy_r_reg);
        goto CPyL54;
    }
    cpy_r_r8 = ((mypyc___ir___ops___IntegerObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_rtypes___is_pointer_rprimitive(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 757, CPyStatic_emitfunc___globals);
        goto CPyL54;
    }
    if (cpy_r_r9) {
        goto CPyL55;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r10 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = CPyTagged_Str(cpy_r_val);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 759, CPyStatic_emitfunc___globals);
        goto CPyL54;
    }
    cpy_r_s = cpy_r_r11;
    cpy_r_r12 = cpy_r_val & 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPyTagged_IsLt_(cpy_r_val, 4294967296LL);
    if (cpy_r_r14) {
        goto CPyL19;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_val >= (Py_ssize_t)4294967296LL;
    if (!cpy_r_r15) goto CPyL19;
CPyL11: ;
    cpy_r_r16 = (CPyTagged)CPyStatics[9044] | 1; /* 9223372036854775808 */
    cpy_r_r17 = cpy_r_val & 1;
    cpy_r_r18 = cpy_r_r17 != 0;
    if (cpy_r_r18) goto CPyL13;
    cpy_r_r19 = cpy_r_r16 & 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL14;
CPyL13: ;
    cpy_r_r21 = CPyTagged_IsLt_(cpy_r_val, cpy_r_r16);
    CPyTagged_DECREF(cpy_r_val);
    if (cpy_r_r21) {
        goto CPyL17;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r22 = (Py_ssize_t)cpy_r_val >= (Py_ssize_t)cpy_r_r16;
    CPyTagged_DECREF(cpy_r_val);
    if (!cpy_r_r22) goto CPyL17;
CPyL15: ;
    cpy_r_r23 = CPyStatics[7382]; /* 'ULL' */
    cpy_r_r24 = CPyStr_Append(cpy_r_s, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 763, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_s = cpy_r_r24;
    goto CPyL28;
CPyL17: ;
    cpy_r_r25 = CPyStatics[7383]; /* 'LL' */
    cpy_r_r26 = CPyStr_Append(cpy_r_s, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 765, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_s = cpy_r_r26;
    goto CPyL28;
CPyL19: ;
    cpy_r_r27 = (CPyTagged)CPyStatics[9045] | 1; /* -9223372036854775808 */
    cpy_r_r28 = cpy_r_val & 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = CPyTagged_IsEq_(cpy_r_val, cpy_r_r27);
    if (cpy_r_r30) {
        goto CPyL56;
    } else
        goto CPyL23;
CPyL21: ;
    cpy_r_r31 = cpy_r_val == cpy_r_r27;
    if (cpy_r_r31) {
        goto CPyL56;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r32 = CPyStatics[7384]; /* '(-9223372036854775807LL - 1)' */
    CPy_INCREF(cpy_r_r32);
    cpy_r_s = cpy_r_r32;
    goto CPyL28;
CPyL23: ;
    cpy_r_r33 = cpy_r_val & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL25;
    cpy_r_r35 = CPyTagged_IsLt_(-4294967296LL, cpy_r_val);
    CPyTagged_DECREF(cpy_r_val);
    if (cpy_r_r35) {
        goto CPyL28;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_val <= (Py_ssize_t)-4294967296LL;
    CPyTagged_DECREF(cpy_r_val);
    if (!cpy_r_r36) goto CPyL28;
CPyL26: ;
    cpy_r_r37 = CPyStatics[7383]; /* 'LL' */
    cpy_r_r38 = CPyStr_Append(cpy_r_s, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 770, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_s = cpy_r_r38;
CPyL28: ;
    return cpy_r_s;
CPyL29: ;
    cpy_r_r39 = (PyObject *)CPyType_ops___Float;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_reg)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_reg) == CPyType_ops___Float))
        cpy_r_r43 = cpy_r_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "reg", 773, CPyStatic_emitfunc___globals, "mypyc.ir.ops.Float", cpy_r_reg);
        goto CPyL53;
    }
    cpy_r_r44 = ((mypyc___ir___ops___FloatObject *)cpy_r_r43)->_value;
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[146]; /* 'repr' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 773, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    cpy_r_r48 = PyFloat_FromDouble(cpy_r_r44);
    PyObject *cpy_r_r49[1] = {cpy_r_r48};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 773, CPyStatic_emitfunc___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitfunc.py", "reg", 773, CPyStatic_emitfunc___globals, "str", cpy_r_r51);
        goto CPyL53;
    }
    cpy_r_r = cpy_r_r52;
    cpy_r_r53 = CPyStatics[7385]; /* 'inf' */
    cpy_r_r54 = PyUnicode_Compare(cpy_r_r, cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 == -1;
    if (!cpy_r_r55) goto CPyL37;
    cpy_r_r56 = PyErr_Occurred();
    cpy_r_r57 = cpy_r_r56 != NULL;
    if (!cpy_r_r57) goto CPyL37;
    cpy_r_r58 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 774, CPyStatic_emitfunc___globals);
        goto CPyL58;
    }
CPyL37: ;
    cpy_r_r59 = cpy_r_r54 == 0;
    if (cpy_r_r59) {
        goto CPyL59;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r60 = CPyStatics[7386]; /* 'INFINITY' */
    CPy_INCREF(cpy_r_r60);
    return cpy_r_r60;
CPyL39: ;
    cpy_r_r61 = CPyStatics[7387]; /* '-inf' */
    cpy_r_r62 = PyUnicode_Compare(cpy_r_r, cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 == -1;
    if (!cpy_r_r63) goto CPyL42;
    cpy_r_r64 = PyErr_Occurred();
    cpy_r_r65 = cpy_r_r64 != NULL;
    if (!cpy_r_r65) goto CPyL42;
    cpy_r_r66 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 776, CPyStatic_emitfunc___globals);
        goto CPyL58;
    }
CPyL42: ;
    cpy_r_r67 = cpy_r_r62 == 0;
    if (cpy_r_r67) {
        goto CPyL60;
    } else
        goto CPyL44;
CPyL43: ;
    cpy_r_r68 = CPyStatics[7388]; /* '-INFINITY' */
    CPy_INCREF(cpy_r_r68);
    return cpy_r_r68;
CPyL44: ;
    cpy_r_r69 = CPyStatics[7389]; /* 'nan' */
    cpy_r_r70 = PyUnicode_Compare(cpy_r_r, cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 == -1;
    if (!cpy_r_r71) goto CPyL47;
    cpy_r_r72 = PyErr_Occurred();
    cpy_r_r73 = cpy_r_r72 != NULL;
    if (!cpy_r_r73) goto CPyL47;
    cpy_r_r74 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 778, CPyStatic_emitfunc___globals);
        goto CPyL58;
    }
CPyL47: ;
    cpy_r_r75 = cpy_r_r70 == 0;
    if (cpy_r_r75) {
        goto CPyL61;
    } else
        goto CPyL49;
CPyL48: ;
    cpy_r_r76 = CPyStatics[7390]; /* 'NAN' */
    CPy_INCREF(cpy_r_r76);
    return cpy_r_r76;
CPyL49: ;
    return cpy_r_r;
CPyL50: ;
    cpy_r_r77 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "reg", "FunctionEmitterVisitor", "emitter", 782, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r77);
CPyL51: ;
    cpy_r_r78 = CPyDef_emit___Emitter___reg(cpy_r_r77, cpy_r_reg);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 782, CPyStatic_emitfunc___globals);
        goto CPyL53;
    }
    return cpy_r_r78;
CPyL53: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_val);
    goto CPyL53;
CPyL55: ;
    CPyTagged_DECREF(cpy_r_val);
    goto CPyL6;
CPyL56: ;
    CPyTagged_DECREF(cpy_r_val);
    CPy_DECREF(cpy_r_s);
    goto CPyL22;
CPyL57: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r);
    goto CPyL53;
CPyL59: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL38;
CPyL60: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL43;
CPyL61: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL48;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___reg(arg_self, arg_reg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "reg", 754, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___ctype(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "ctype", "FunctionEmitterVisitor", "emitter", 785, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_emit___Emitter___ctype(cpy_r_r0, cpy_r_rtype);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "ctype", 785, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___ctype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:ctype", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___ctype(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "ctype", 784, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___c_error_value(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "c_error_value", "FunctionEmitterVisitor", "emitter", 788, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_emit___Emitter___c_error_value(cpy_r_r0, cpy_r_rtype);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "c_error_value", 788, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___c_error_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:c_error_value", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___c_error_value(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "c_error_value", 787, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___c_undefined_value(PyObject *cpy_r_self, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "c_undefined_value", "FunctionEmitterVisitor", "emitter", 791, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_r0, cpy_r_rtype);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "c_undefined_value", 791, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___c_undefined_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rtype", 0};
    static CPyArg_Parser parser = {"O:c_undefined_value", kwlist, 0};
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_rtype;
    if (likely(PyObject_TypeCheck(obj_rtype, CPyType_rtypes___RType)))
        arg_rtype = obj_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_rtype); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___c_undefined_value(arg_self, arg_rtype);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "c_undefined_value", 790, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(PyObject *cpy_r_self, PyObject *cpy_r_line, PyObject *cpy_r_ann) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    if (cpy_r_ann != NULL) goto CPyL6;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_ann = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_line", "FunctionEmitterVisitor", "emitter", 794, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_r1, cpy_r_line, cpy_r_ann);
    CPy_DECREF(cpy_r_ann);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_line", 794, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL6: ;
    CPy_INCREF(cpy_r_ann);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_ann);
    goto CPyL5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "ann", 0};
    static CPyArg_Parser parser = {"O|$O:emit_line", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_ann = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_line, &obj_ann)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_line;
    if (likely(PyUnicode_Check(obj_line)))
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
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(arg_self, arg_line, arg_ann);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_line", 793, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_lines(PyObject *cpy_r_self, PyObject *cpy_r_lines) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_lines", "FunctionEmitterVisitor", "emitter", 797, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyList_Extend(cpy_r_r3, cpy_r_lines);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL4: ;
    cpy_r_r5 = PyList_AsTuple(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL9;
    }
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL12;
    }
    cpy_r_r7 = PyObject_Call(cpy_r_r2, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 797, CPyStatic_emitfunc___globals);
        goto CPyL8;
    } else
        goto CPyL13;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL4;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_lines(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:emit_lines", kwlist, 0};
    PyObject *obj_lines;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_lines, NULL)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lines = obj_lines;
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_lines(arg_self, arg_lines);
    CPy_DECREF(obj_lines);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_lines);
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_lines", 796, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(PyObject *cpy_r_self, PyObject *cpy_r_dest, PyObject *cpy_r_rtype) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_inc_ref", "FunctionEmitterVisitor", "emitter", 800, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_rare;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_inc_ref", "FunctionEmitterVisitor", "rare", 800, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_inc_ref(cpy_r_r0, cpy_r_dest, cpy_r_rtype, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_inc_ref", 800, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_inc_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", "rtype", 0};
    static CPyArg_Parser parser = {"OO:emit_inc_ref", kwlist, 0};
    PyObject *obj_dest;
    PyObject *obj_rtype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dest, &obj_rtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
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
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_inc_ref(arg_self, arg_dest, arg_rtype);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_inc_ref", 799, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_dec_ref(PyObject *cpy_r_self, PyObject *cpy_r_dest, PyObject *cpy_r_rtype, char cpy_r_is_xdec) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_dec_ref", "FunctionEmitterVisitor", "emitter", 803, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_rare;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_dec_ref", "FunctionEmitterVisitor", "rare", 803, CPyStatic_emitfunc___globals);
        goto CPyL5;
    }
CPyL2: ;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_r0, cpy_r_dest, cpy_r_rtype, cpy_r_is_xdec, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_dec_ref", 803, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_dec_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dest", "rtype", "is_xdec", 0};
    static CPyArg_Parser parser = {"OOO:emit_dec_ref", kwlist, 0};
    PyObject *obj_dest;
    PyObject *obj_rtype;
    PyObject *obj_is_xdec;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dest, &obj_rtype, &obj_is_xdec)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
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
    if (unlikely(!PyBool_Check(obj_is_xdec))) {
        CPy_TypeError("bool", obj_is_xdec); goto fail;
    } else
        arg_is_xdec = obj_is_xdec == Py_True;
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_dec_ref(arg_self, arg_dest, arg_rtype, arg_is_xdec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_dec_ref", 802, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_declaration(PyObject *cpy_r_self, PyObject *cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_declarations;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_declaration", "FunctionEmitterVisitor", "declarations", 806, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___emit_line(cpy_r_r0, cpy_r_line, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_declaration", 806, CPyStatic_emitfunc___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", 0};
    static CPyArg_Parser parser = {"O:emit_declaration", kwlist, 0};
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_line;
    if (likely(PyUnicode_Check(obj_line)))
        arg_line = obj_line;
    else {
        CPy_TypeError("str", obj_line); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_declaration(arg_self, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_declaration", 805, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_traceback(PyObject *cpy_r_self, PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OI cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_traceback", "FunctionEmitterVisitor", "emitter", 810, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_traceback", "FunctionEmitterVisitor", "source_path", 810, CPyStatic_emitfunc___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_traceback", "FunctionEmitterVisitor", "module_name", 810, CPyStatic_emitfunc___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    CPy_INCREF(cpy_r_r6);
    PyObject *__tmp9490;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp9490 = NULL;
        goto __LL9491;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp9490 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp9490 = NULL;
    }
    if (__tmp9490 == NULL) goto __LL9491;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r6, 1))))
        __tmp9490 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9490 = NULL;
    }
    if (__tmp9490 == NULL) goto __LL9491;
    __tmp9490 = cpy_r_r6;
__LL9491: ;
    if (unlikely(__tmp9490 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r6); cpy_r_r7 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9492 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp9492);
        PyObject *__tmp9493;
        if (likely(PyUnicode_Check(__tmp9492)))
            __tmp9493 = __tmp9492;
        else {
            CPy_TypeError("str", __tmp9492); 
            __tmp9493 = NULL;
        }
        cpy_r_r7.f0 = __tmp9493;
        PyObject *__tmp9494 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPyTagged __tmp9495;
        if (likely(PyLong_Check(__tmp9494)))
            __tmp9495 = CPyTagged_FromObject(__tmp9494);
        else {
            CPy_TypeError("int", __tmp9494); __tmp9495 = CPY_INT_TAG;
        }
        cpy_r_r7.f1 = __tmp9495;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_traceback", 810, CPyStatic_emitfunc___globals);
        goto CPyL10;
    }
    cpy_r_r8 = CPyDef_emit___Emitter___emit_traceback(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7.f0);
    CPyTagged_DECREF(cpy_r_r7.f1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_traceback", 810, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_traceback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:emit_traceback", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_traceback(arg_self, arg_op);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_traceback", 808, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor___emit_attribute_error(PyObject *cpy_r_self, PyObject *cpy_r_op, PyObject *cpy_r_class_name, PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_globals_static;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OI cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OI cpy_r_r17;
    CPyTagged cpy_r_r18;
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
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 813, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_emitter;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_attribute_error", "FunctionEmitterVisitor", "emitter", 814, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r6 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_module_name;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_attribute_error", "FunctionEmitterVisitor", "module_name", 814, CPyStatic_emitfunc___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_emit___Emitter___static_name(cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 814, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_globals_static = cpy_r_r8;
    cpy_r_r9 = ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r_self)->_source_path;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitfunc.py", "emit_attribute_error", "FunctionEmitterVisitor", "source_path", 818, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = CPyStatics[5539]; /* '\\' */
    cpy_r_r11 = CPyStatics[7005]; /* '\\\\' */
    cpy_r_r12 = PyUnicode_Replace(cpy_r_r9, cpy_r_r10, cpy_r_r11, -1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 818, CPyStatic_emitfunc___globals);
        goto CPyL18;
    }
    cpy_r_r13 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    CPy_INCREF(cpy_r_r13);
    PyObject *__tmp9496;
    if (unlikely(!(PyTuple_Check(cpy_r_r13) && PyTuple_GET_SIZE(cpy_r_r13) == 2))) {
        __tmp9496 = NULL;
        goto __LL9497;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r13, 0))))
        __tmp9496 = PyTuple_GET_ITEM(cpy_r_r13, 0);
    else {
        __tmp9496 = NULL;
    }
    if (__tmp9496 == NULL) goto __LL9497;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r13, 1))))
        __tmp9496 = PyTuple_GET_ITEM(cpy_r_r13, 1);
    else {
        __tmp9496 = NULL;
    }
    if (__tmp9496 == NULL) goto __LL9497;
    __tmp9496 = cpy_r_r13;
__LL9497: ;
    if (unlikely(__tmp9496 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r13); cpy_r_r14 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9498 = PyTuple_GET_ITEM(cpy_r_r13, 0);
        CPy_INCREF(__tmp9498);
        PyObject *__tmp9499;
        if (likely(PyUnicode_Check(__tmp9498)))
            __tmp9499 = __tmp9498;
        else {
            CPy_TypeError("str", __tmp9498); 
            __tmp9499 = NULL;
        }
        cpy_r_r14.f0 = __tmp9499;
        PyObject *__tmp9500 = PyTuple_GET_ITEM(cpy_r_r13, 1);
        CPyTagged __tmp9501;
        if (likely(PyLong_Check(__tmp9500)))
            __tmp9501 = CPyTagged_FromObject(__tmp9500);
        else {
            CPy_TypeError("int", __tmp9500); __tmp9501 = CPY_INT_TAG;
        }
        cpy_r_r14.f1 = __tmp9501;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 819, CPyStatic_emitfunc___globals);
        goto CPyL19;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14.f0);
    CPyTagged_DECREF(cpy_r_r14.f1);
    cpy_r_r16 = ((mypyc___ir___ops___BranchObject *)cpy_r_op)->_traceback_entry;
    CPy_INCREF(cpy_r_r16);
    PyObject *__tmp9502;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 2))) {
        __tmp9502 = NULL;
        goto __LL9503;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 0))))
        __tmp9502 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp9502 = NULL;
    }
    if (__tmp9502 == NULL) goto __LL9503;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 1))))
        __tmp9502 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    else {
        __tmp9502 = NULL;
    }
    if (__tmp9502 == NULL) goto __LL9503;
    __tmp9502 = cpy_r_r16;
__LL9503: ;
    if (unlikely(__tmp9502 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r16); cpy_r_r17 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp9504 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPy_INCREF(__tmp9504);
        PyObject *__tmp9505;
        if (likely(PyUnicode_Check(__tmp9504)))
            __tmp9505 = __tmp9504;
        else {
            CPy_TypeError("str", __tmp9504); 
            __tmp9505 = NULL;
        }
        cpy_r_r17.f0 = __tmp9505;
        PyObject *__tmp9506 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPyTagged __tmp9507;
        if (likely(PyLong_Check(__tmp9506)))
            __tmp9507 = CPyTagged_FromObject(__tmp9506);
        else {
            CPy_TypeError("int", __tmp9506); __tmp9507 = CPY_INT_TAG;
        }
        cpy_r_r17.f1 = __tmp9507;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 822, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r18 = cpy_r_r17.f1;
    CPyTagged_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17.f0);
    CPyTagged_DECREF(cpy_r_r17.f1);
    cpy_r_r19 = CPyTagged_Str(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 816, CPyStatic_emitfunc___globals);
        goto CPyL20;
    }
    cpy_r_r20 = CPyStatics[7392]; /* 'CPy_AttributeError("' */
    cpy_r_r21 = CPyStatics[3415]; /* '", "' */
    cpy_r_r22 = CPyStatics[3415]; /* '", "' */
    cpy_r_r23 = CPyStatics[3415]; /* '", "' */
    cpy_r_r24 = CPyStatics[6942]; /* '", ' */
    cpy_r_r25 = CPyStatics[71]; /* ', ' */
    cpy_r_r26 = CPyStatics[6872]; /* ');' */
    cpy_r_r27 = CPyStr_Build(13, cpy_r_r20, cpy_r_r12, cpy_r_r21, cpy_r_r15, cpy_r_r22, cpy_r_class_name, cpy_r_r23, cpy_r_attr, cpy_r_r24, cpy_r_r19, cpy_r_r25, cpy_r_globals_static, cpy_r_r26);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_globals_static);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 816, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 815, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
    if (!0) goto CPyL15;
    cpy_r_r30 = CPyStatics[7007]; /* 'assert(PyErr_Occurred() != NULL && "failure w/o err!");' */
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emitfunc___FunctionEmitterVisitor___emit_line(cpy_r_self, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 827, CPyStatic_emitfunc___globals);
        goto CPyL16;
    }
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_globals_static);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_attribute_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"op", "class_name", "attr", 0};
    static CPyArg_Parser parser = {"OOO:emit_attribute_error", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_class_name;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_class_name, &obj_attr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_op;
    if (likely(Py_TYPE(obj_op) == CPyType_ops___Branch))
        arg_op = obj_op;
    else {
        CPy_TypeError("mypyc.ir.ops.Branch", obj_op); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (likely(PyUnicode_Check(obj_class_name)))
        arg_class_name = obj_class_name;
    else {
        CPy_TypeError("str", obj_class_name); 
        goto fail;
    }
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_attribute_error(arg_self, arg_op, arg_class_name, arg_attr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_attribute_error", 812, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_rtypes___is_tagged(cpy_r_type);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_signed_int_cast", 830, CPyStatic_emitfunc___globals);
        goto CPyL4;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = CPyStatics[7393]; /* '(Py_ssize_t)' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:emit_signed_int_cast", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_rtypes___RType)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_signed_int_cast(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_signed_int_cast", 829, CPyStatic_emitfunc___globals);
    return NULL;
}

PyObject *CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_rtypes___is_int32_rprimitive(cpy_r_type);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_unsigned_int_cast", 836, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = CPyStatics[7394]; /* '(uint32_t)' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = CPyDef_rtypes___is_int64_rprimitive(cpy_r_type);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_unsigned_int_cast", 838, CPyStatic_emitfunc___globals);
        goto CPyL7;
    }
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyStatics[7395]; /* '(uint64_t)' */
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:emit_unsigned_int_cast", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_rtypes___RType)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitfunc___FunctionEmitterVisitor___emit_unsigned_int_cast(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "emit_unsigned_int_cast", 835, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatics[7396]; /* 'static' */
    cpy_r_r1 = CPyStatics[6877]; /* 'CPyStatic_' */
    cpy_r_r2 = CPyStatics[802]; /* 'type' */
    cpy_r_r3 = CPyStatics[6878]; /* 'CPyType_' */
    cpy_r_r4 = CPyStatics[408]; /* 'module' */
    cpy_r_r5 = CPyStatics[7397]; /* 'CPyModule_' */
    cpy_r_r6 = CPyDict_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    if (cpy_r_r6 == NULL) goto CPyL2;
    ((mypyc___codegen___emitfunc___FunctionEmitterVisitorObject *)cpy_r___mypyc_self__)->_PREFIX_MAP = cpy_r_r6;
    return 1;
CPyL2: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_emitfunc___FunctionEmitterVisitor))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.codegen.emitfunc.FunctionEmitterVisitor", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_emitfunc___FunctionEmitterVisitor_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitfunc.py", "__mypyc_defaults_setup", -1, CPyStatic_emitfunc___globals);
    return NULL;
}

char CPyDef_emitfunc_____top_level__(void) {
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
    char cpy_r_r52;
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
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
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
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", -1, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_emitfunc___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 3, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_emitfunc___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 5, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9960]; /* ('frequently_executed_blocks',) */
    cpy_r_r14 = CPyStatics[7399]; /* 'mypyc.analysis.blockfreq' */
    cpy_r_r15 = CPyStatic_emitfunc___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 7, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___analysis___blockfreq = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___analysis___blockfreq);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9961]; /* ('DEBUG_ERRORS', 'Emitter', 'TracebackAndGotoHandler',
                                     'c_array_initializer') */
    cpy_r_r18 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r19 = CPyStatic_emitfunc___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 8, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___codegen___emit = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___codegen___emit);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9962]; /* ('MODULE_PREFIX', 'NATIVE_PREFIX', 'REG_PREFIX',
                                     'STATIC_PREFIX', 'TYPE_PREFIX') */
    cpy_r_r22 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r23 = CPyStatic_emitfunc___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 9, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___common = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r26 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r27 = CPyStatic_emitfunc___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 10, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9963]; /* ('FUNC_CLASSMETHOD', 'FUNC_STATICMETHOD', 'FuncDecl',
                                     'FuncIR', 'all_values') */
    cpy_r_r30 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r31 = CPyStatic_emitfunc___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 11, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9964]; /* ('ERR_FALSE', 'NAMESPACE_MODULE', 'NAMESPACE_STATIC',
                                     'NAMESPACE_TYPE', 'Assign', 'AssignMulti', 'BasicBlock',
                                     'Box', 'Branch', 'Call', 'CallC', 'Cast',
                                     'ComparisonOp', 'ControlOp', 'DecRef', 'Extend',
                                     'Float', 'FloatComparisonOp', 'FloatNeg', 'FloatOp',
                                     'GetAttr', 'GetElementPtr', 'Goto', 'IncRef',
                                     'InitStatic', 'Integer', 'IntOp', 'KeepAlive',
                                     'LoadAddress', 'LoadErrorValue', 'LoadGlobal',
                                     'LoadLiteral', 'LoadMem', 'LoadStatic', 'MethodCall',
                                     'Op', 'OpVisitor', 'RaiseStandardError', 'Register',
                                     'Return', 'SetAttr', 'SetMem', 'Truncate', 'TupleGet',
                                     'TupleSet', 'Unbox', 'Unreachable', 'Value') */
    cpy_r_r34 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r35 = CPyStatic_emitfunc___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 12, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9965]; /* ('generate_names_for_ir',) */
    cpy_r_r38 = CPyStatics[6758]; /* 'mypyc.ir.pprint' */
    cpy_r_r39 = CPyStatic_emitfunc___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 62, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___ir___pprint = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___pprint);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9966]; /* ('RArray', 'RStruct', 'RTuple', 'RType',
                                     'is_int32_rprimitive', 'is_int64_rprimitive',
                                     'is_int_rprimitive', 'is_pointer_rprimitive',
                                     'is_tagged') */
    cpy_r_r42 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r43 = CPyStatic_emitfunc___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 63, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = (PyObject *)CPyType_ops___OpVisitor;
    cpy_r_r46 = Py_None;
    cpy_r_r47 = PyObject_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r48 = PyTuple_Pack(1, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r49 = CPyStatics[7257]; /* 'mypyc.codegen.emitfunc' */
    cpy_r_r50 = (PyObject *)CPyType_emitfunc___FunctionEmitterVisitor_template;
    cpy_r_r51 = CPyType_FromTemplate(cpy_r_r50, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r52 = CPyDef_emitfunc___FunctionEmitterVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", -1, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r53 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r54 = CPyStatics[7410]; /* 'PREFIX_MAP' */
    cpy_r_r55 = CPyStatics[7411]; /* 'emitter' */
    cpy_r_r56 = CPyStatics[2403]; /* 'names' */
    cpy_r_r57 = CPyStatics[124]; /* 'declarations' */
    cpy_r_r58 = CPyStatics[7061]; /* 'source_path' */
    cpy_r_r59 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r60 = CPyStatics[7056]; /* 'literals' */
    cpy_r_r61 = CPyStatics[7412]; /* 'rare' */
    cpy_r_r62 = CPyStatics[7413]; /* 'next_block' */
    cpy_r_r63 = CPyStatics[2426]; /* 'ops' */
    cpy_r_r64 = CPyStatics[7414]; /* 'op_index' */
    cpy_r_r65 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r66 = PyTuple_Pack(12, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    cpy_r_r67 = PyObject_SetAttr(cpy_r_r51, cpy_r_r53, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL24;
    }
    CPyType_emitfunc___FunctionEmitterVisitor = (PyTypeObject *)cpy_r_r51;
    CPy_INCREF(CPyType_emitfunc___FunctionEmitterVisitor);
    cpy_r_r69 = CPyStatic_emitfunc___globals;
    cpy_r_r70 = CPyStatics[7415]; /* 'FunctionEmitterVisitor' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 173, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r73 = (PyObject *)CPyType_emitfunc___FunctionEmitterVisitor;
    cpy_r_r74 = CPyStatics[7396]; /* 'static' */
    cpy_r_r75 = CPyStatics[6877]; /* 'CPyStatic_' */
    cpy_r_r76 = CPyStatics[802]; /* 'type' */
    cpy_r_r77 = CPyStatics[6878]; /* 'CPyType_' */
    cpy_r_r78 = CPyStatics[408]; /* 'module' */
    cpy_r_r79 = CPyStatics[7397]; /* 'CPyModule_' */
    cpy_r_r80 = CPyDict_Build(3, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 475, CPyStatic_emitfunc___globals);
        goto CPyL23;
    }
    cpy_r_r81 = CPyStatics[7410]; /* 'PREFIX_MAP' */
    cpy_r_r82 = PyObject_SetAttr(cpy_r_r73, cpy_r_r81, cpy_r_r80);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/codegen/emitfunc.py", "<module>", 475, CPyStatic_emitfunc___globals);
        goto CPyL25;
    }
    CPyStatic_emitfunc___FunctionEmitterVisitor___PREFIX_MAP = cpy_r_r80;
    CPy_INCREF(CPyStatic_emitfunc___FunctionEmitterVisitor___PREFIX_MAP);
    CPy_DECREF(cpy_r_r80);
    return 1;
CPyL23: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL24: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL23;
}
