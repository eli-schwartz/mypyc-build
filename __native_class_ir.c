#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
class_ir___ClassIR_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *class_ir___ClassIR_setup(PyTypeObject *type);
PyObject *CPyDef_class_ir___ClassIR(PyObject *cpy_r_name, PyObject *cpy_r_module_name, char cpy_r_is_trait, char cpy_r_is_generated, char cpy_r_is_abstract, char cpy_r_is_ext_class);

static PyObject *
class_ir___ClassIR_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_class_ir___ClassIR) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = class_ir___ClassIR_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_class_ir___ClassIR_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
class_ir___ClassIR_traverse(mypyc___ir___class_ir___ClassIRObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_module_name);
    Py_VISIT(self->_builtin_base);
    Py_VISIT(self->_ctor);
    Py_VISIT(self->_attributes);
    Py_VISIT(self->_deletable);
    Py_VISIT(self->_method_decls);
    Py_VISIT(self->_methods);
    Py_VISIT(self->_glue_methods);
    Py_VISIT(self->_properties);
    Py_VISIT(self->_property_types);
    Py_VISIT(self->_vtable);
    Py_VISIT(self->_vtable_entries);
    Py_VISIT(self->_trait_vtables);
    Py_VISIT(self->_base);
    Py_VISIT(self->_traits);
    Py_VISIT(self->_mro);
    Py_VISIT(self->_base_mro);
    Py_VISIT(self->_children);
    Py_VISIT(self->_attrs_with_defaults);
    Py_VISIT(self->__always_initialized_attrs);
    Py_VISIT(self->__sometimes_initialized_attrs);
    Py_VISIT(self->_bitmap_attrs);
    return 0;
}

static int
class_ir___ClassIR_clear(mypyc___ir___class_ir___ClassIRObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_module_name);
    Py_CLEAR(self->_builtin_base);
    Py_CLEAR(self->_ctor);
    Py_CLEAR(self->_attributes);
    Py_CLEAR(self->_deletable);
    Py_CLEAR(self->_method_decls);
    Py_CLEAR(self->_methods);
    Py_CLEAR(self->_glue_methods);
    Py_CLEAR(self->_properties);
    Py_CLEAR(self->_property_types);
    Py_CLEAR(self->_vtable);
    Py_CLEAR(self->_vtable_entries);
    Py_CLEAR(self->_trait_vtables);
    Py_CLEAR(self->_base);
    Py_CLEAR(self->_traits);
    Py_CLEAR(self->_mro);
    Py_CLEAR(self->_base_mro);
    Py_CLEAR(self->_children);
    Py_CLEAR(self->_attrs_with_defaults);
    Py_CLEAR(self->__always_initialized_attrs);
    Py_CLEAR(self->__sometimes_initialized_attrs);
    Py_CLEAR(self->_bitmap_attrs);
    return 0;
}

static void
class_ir___ClassIR_dealloc(mypyc___ir___class_ir___ClassIRObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, class_ir___ClassIR_dealloc)
    class_ir___ClassIR_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem class_ir___ClassIR_vtable[25];
static bool
CPyDef_class_ir___ClassIR_trait_vtable_setup(void)
{
    CPyVTableItem class_ir___ClassIR_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_class_ir___ClassIR_____init__,
        (CPyVTableItem)CPyDef_class_ir___ClassIR_____repr__,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___fullname,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___real_base,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___vtable_entry,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___attr_details,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___attr_type,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___method_decl,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___method_sig,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___has_method,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___is_method_final,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___has_attr,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___is_deletable,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___is_always_defined,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___name_prefix,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___struct_name,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___get_method_and_class,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___get_method,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___has_method_decl,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___has_no_subclasses,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___subclasses,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___concrete_subclasses,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___is_serializable,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___serialize,
        (CPyVTableItem)CPyDef_class_ir___ClassIR___deserialize,
    };
    memcpy(class_ir___ClassIR_vtable, class_ir___ClassIR_vtable_scratch, sizeof(class_ir___ClassIR_vtable));
    return 1;
}

static PyObject *
class_ir___ClassIR_get_name(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_name(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_module_name(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_module_name(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_is_trait(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_is_trait(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_is_generated(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_is_generated(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_is_abstract(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_is_abstract(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_is_ext_class(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_is_ext_class(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_is_augmented(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_is_augmented(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_inherits_python(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_inherits_python(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_has_dict(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_has_dict(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_allow_interpreted_subclasses(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_allow_interpreted_subclasses(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_needs_getseters(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_needs_getseters(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get__serializable(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set__serializable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_builtin_base(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_builtin_base(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_ctor(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_ctor(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_attributes(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_attributes(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_deletable(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_deletable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_method_decls(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_method_decls(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_methods(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_methods(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_glue_methods(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_glue_methods(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_properties(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_properties(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_property_types(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_property_types(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_vtable(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_vtable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_vtable_entries(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_vtable_entries(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_trait_vtables(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_trait_vtables(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_base(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_base(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_traits(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_traits(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_mro(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_mro(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_base_mro(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_base_mro(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_children(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_children(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_attrs_with_defaults(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_attrs_with_defaults(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get__always_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set__always_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get__sometimes_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set__sometimes_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_init_self_leak(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_init_self_leak(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_bitmap_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure);
static int
class_ir___ClassIR_set_bitmap_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___ClassIR_get_fullname(mypyc___ir___class_ir___ClassIRObject *self, void *closure);

static PyGetSetDef class_ir___ClassIR_getseters[] = {
    {"name",
     (getter)class_ir___ClassIR_get_name, (setter)class_ir___ClassIR_set_name,
     NULL, NULL},
    {"module_name",
     (getter)class_ir___ClassIR_get_module_name, (setter)class_ir___ClassIR_set_module_name,
     NULL, NULL},
    {"is_trait",
     (getter)class_ir___ClassIR_get_is_trait, (setter)class_ir___ClassIR_set_is_trait,
     NULL, NULL},
    {"is_generated",
     (getter)class_ir___ClassIR_get_is_generated, (setter)class_ir___ClassIR_set_is_generated,
     NULL, NULL},
    {"is_abstract",
     (getter)class_ir___ClassIR_get_is_abstract, (setter)class_ir___ClassIR_set_is_abstract,
     NULL, NULL},
    {"is_ext_class",
     (getter)class_ir___ClassIR_get_is_ext_class, (setter)class_ir___ClassIR_set_is_ext_class,
     NULL, NULL},
    {"is_augmented",
     (getter)class_ir___ClassIR_get_is_augmented, (setter)class_ir___ClassIR_set_is_augmented,
     NULL, NULL},
    {"inherits_python",
     (getter)class_ir___ClassIR_get_inherits_python, (setter)class_ir___ClassIR_set_inherits_python,
     NULL, NULL},
    {"has_dict",
     (getter)class_ir___ClassIR_get_has_dict, (setter)class_ir___ClassIR_set_has_dict,
     NULL, NULL},
    {"allow_interpreted_subclasses",
     (getter)class_ir___ClassIR_get_allow_interpreted_subclasses, (setter)class_ir___ClassIR_set_allow_interpreted_subclasses,
     NULL, NULL},
    {"needs_getseters",
     (getter)class_ir___ClassIR_get_needs_getseters, (setter)class_ir___ClassIR_set_needs_getseters,
     NULL, NULL},
    {"_serializable",
     (getter)class_ir___ClassIR_get__serializable, (setter)class_ir___ClassIR_set__serializable,
     NULL, NULL},
    {"builtin_base",
     (getter)class_ir___ClassIR_get_builtin_base, (setter)class_ir___ClassIR_set_builtin_base,
     NULL, NULL},
    {"ctor",
     (getter)class_ir___ClassIR_get_ctor, (setter)class_ir___ClassIR_set_ctor,
     NULL, NULL},
    {"attributes",
     (getter)class_ir___ClassIR_get_attributes, (setter)class_ir___ClassIR_set_attributes,
     NULL, NULL},
    {"deletable",
     (getter)class_ir___ClassIR_get_deletable, (setter)class_ir___ClassIR_set_deletable,
     NULL, NULL},
    {"method_decls",
     (getter)class_ir___ClassIR_get_method_decls, (setter)class_ir___ClassIR_set_method_decls,
     NULL, NULL},
    {"methods",
     (getter)class_ir___ClassIR_get_methods, (setter)class_ir___ClassIR_set_methods,
     NULL, NULL},
    {"glue_methods",
     (getter)class_ir___ClassIR_get_glue_methods, (setter)class_ir___ClassIR_set_glue_methods,
     NULL, NULL},
    {"properties",
     (getter)class_ir___ClassIR_get_properties, (setter)class_ir___ClassIR_set_properties,
     NULL, NULL},
    {"property_types",
     (getter)class_ir___ClassIR_get_property_types, (setter)class_ir___ClassIR_set_property_types,
     NULL, NULL},
    {"vtable",
     (getter)class_ir___ClassIR_get_vtable, (setter)class_ir___ClassIR_set_vtable,
     NULL, NULL},
    {"vtable_entries",
     (getter)class_ir___ClassIR_get_vtable_entries, (setter)class_ir___ClassIR_set_vtable_entries,
     NULL, NULL},
    {"trait_vtables",
     (getter)class_ir___ClassIR_get_trait_vtables, (setter)class_ir___ClassIR_set_trait_vtables,
     NULL, NULL},
    {"base",
     (getter)class_ir___ClassIR_get_base, (setter)class_ir___ClassIR_set_base,
     NULL, NULL},
    {"traits",
     (getter)class_ir___ClassIR_get_traits, (setter)class_ir___ClassIR_set_traits,
     NULL, NULL},
    {"mro",
     (getter)class_ir___ClassIR_get_mro, (setter)class_ir___ClassIR_set_mro,
     NULL, NULL},
    {"base_mro",
     (getter)class_ir___ClassIR_get_base_mro, (setter)class_ir___ClassIR_set_base_mro,
     NULL, NULL},
    {"children",
     (getter)class_ir___ClassIR_get_children, (setter)class_ir___ClassIR_set_children,
     NULL, NULL},
    {"attrs_with_defaults",
     (getter)class_ir___ClassIR_get_attrs_with_defaults, (setter)class_ir___ClassIR_set_attrs_with_defaults,
     NULL, NULL},
    {"_always_initialized_attrs",
     (getter)class_ir___ClassIR_get__always_initialized_attrs, (setter)class_ir___ClassIR_set__always_initialized_attrs,
     NULL, NULL},
    {"_sometimes_initialized_attrs",
     (getter)class_ir___ClassIR_get__sometimes_initialized_attrs, (setter)class_ir___ClassIR_set__sometimes_initialized_attrs,
     NULL, NULL},
    {"init_self_leak",
     (getter)class_ir___ClassIR_get_init_self_leak, (setter)class_ir___ClassIR_set_init_self_leak,
     NULL, NULL},
    {"bitmap_attrs",
     (getter)class_ir___ClassIR_get_bitmap_attrs, (setter)class_ir___ClassIR_set_bitmap_attrs,
     NULL, NULL},
    {"fullname",
     (getter)class_ir___ClassIR_get_fullname,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef class_ir___ClassIR_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_class_ir___ClassIR_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_class_ir___ClassIR_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"real_base",
     (PyCFunction)CPyPy_class_ir___ClassIR___real_base,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"vtable_entry",
     (PyCFunction)CPyPy_class_ir___ClassIR___vtable_entry,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attr_details",
     (PyCFunction)CPyPy_class_ir___ClassIR___attr_details,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"attr_type",
     (PyCFunction)CPyPy_class_ir___ClassIR___attr_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"method_decl",
     (PyCFunction)CPyPy_class_ir___ClassIR___method_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"method_sig",
     (PyCFunction)CPyPy_class_ir___ClassIR___method_sig,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_method",
     (PyCFunction)CPyPy_class_ir___ClassIR___has_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_method_final",
     (PyCFunction)CPyPy_class_ir___ClassIR___is_method_final,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_attr",
     (PyCFunction)CPyPy_class_ir___ClassIR___has_attr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_deletable",
     (PyCFunction)CPyPy_class_ir___ClassIR___is_deletable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_always_defined",
     (PyCFunction)CPyPy_class_ir___ClassIR___is_always_defined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"name_prefix",
     (PyCFunction)CPyPy_class_ir___ClassIR___name_prefix,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"struct_name",
     (PyCFunction)CPyPy_class_ir___ClassIR___struct_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_and_class",
     (PyCFunction)CPyPy_class_ir___ClassIR___get_method_and_class,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method",
     (PyCFunction)CPyPy_class_ir___ClassIR___get_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_method_decl",
     (PyCFunction)CPyPy_class_ir___ClassIR___has_method_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_no_subclasses",
     (PyCFunction)CPyPy_class_ir___ClassIR___has_no_subclasses,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"subclasses",
     (PyCFunction)CPyPy_class_ir___ClassIR___subclasses,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"concrete_subclasses",
     (PyCFunction)CPyPy_class_ir___ClassIR___concrete_subclasses,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_serializable",
     (PyCFunction)CPyPy_class_ir___ClassIR___is_serializable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_class_ir___ClassIR___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_class_ir___ClassIR___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_class_ir___ClassIR_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ClassIR",
    .tp_new = class_ir___ClassIR_new,
    .tp_dealloc = (destructor)class_ir___ClassIR_dealloc,
    .tp_traverse = (traverseproc)class_ir___ClassIR_traverse,
    .tp_clear = (inquiry)class_ir___ClassIR_clear,
    .tp_getset = class_ir___ClassIR_getseters,
    .tp_methods = class_ir___ClassIR_methods,
    .tp_init = class_ir___ClassIR_init,
    .tp_repr = CPyDef_class_ir___ClassIR_____repr__,
    .tp_basicsize = sizeof(mypyc___ir___class_ir___ClassIRObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_class_ir___ClassIR_template = &CPyType_class_ir___ClassIR_template_;

static PyObject *
class_ir___ClassIR_setup(PyTypeObject *type)
{
    mypyc___ir___class_ir___ClassIRObject *self;
    self = (mypyc___ir___class_ir___ClassIRObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = class_ir___ClassIR_vtable;
    self->_is_trait = 2;
    self->_is_generated = 2;
    self->_is_abstract = 2;
    self->_is_ext_class = 2;
    self->_is_augmented = 2;
    self->_inherits_python = 2;
    self->_has_dict = 2;
    self->_allow_interpreted_subclasses = 2;
    self->_needs_getseters = 2;
    self->__serializable = 2;
    self->_init_self_leak = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_class_ir___ClassIR(PyObject *cpy_r_name, PyObject *cpy_r_module_name, char cpy_r_is_trait, char cpy_r_is_generated, char cpy_r_is_abstract, char cpy_r_is_ext_class)
{
    PyObject *self = class_ir___ClassIR_setup(CPyType_class_ir___ClassIR);
    if (self == NULL)
        return NULL;
    char res = CPyDef_class_ir___ClassIR_____init__(self, cpy_r_name, cpy_r_module_name, cpy_r_is_trait, cpy_r_is_generated, cpy_r_is_abstract, cpy_r_is_ext_class);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
class_ir___ClassIR_get_name(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
class_ir___ClassIR_set_name(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'name' cannot be deleted");
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
class_ir___ClassIR_get_module_name(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_module_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module_name' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module_name);
    PyObject *retval = self->_module_name;
    return retval;
}

static int
class_ir___ClassIR_set_module_name(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'module_name' cannot be deleted");
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
class_ir___ClassIR_get_is_trait(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_is_trait ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_is_trait(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'is_trait' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_trait = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_is_generated(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_is_generated ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_is_generated(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'is_generated' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_generated = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_is_abstract(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_is_abstract ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_is_abstract(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'is_abstract' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_abstract = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_is_ext_class(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_is_ext_class ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_is_ext_class(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'is_ext_class' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_ext_class = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_is_augmented(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_is_augmented ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_is_augmented(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'is_augmented' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_augmented = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_inherits_python(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_inherits_python ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_inherits_python(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'inherits_python' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_inherits_python = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_has_dict(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_has_dict ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_has_dict(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'has_dict' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_has_dict = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_allow_interpreted_subclasses(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_allow_interpreted_subclasses ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_allow_interpreted_subclasses(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'allow_interpreted_subclasses' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_interpreted_subclasses = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_needs_getseters(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->_needs_getseters ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_needs_getseters(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'needs_getseters' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_needs_getseters = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get__serializable(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    PyObject *retval = self->__serializable ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set__serializable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute '_serializable' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->__serializable = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_builtin_base(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_builtin_base == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builtin_base' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builtin_base);
    PyObject *retval = self->_builtin_base;
    return retval;
}

static int
class_ir___ClassIR_set_builtin_base(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'builtin_base' cannot be deleted");
        return -1;
    }
    if (self->_builtin_base != NULL) {
        CPy_DECREF(self->_builtin_base);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9767;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9767;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL9767: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builtin_base = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_ctor(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_ctor == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ctor' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ctor);
    PyObject *retval = self->_ctor;
    return retval;
}

static int
class_ir___ClassIR_set_ctor(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'ctor' cannot be deleted");
        return -1;
    }
    if (self->_ctor != NULL) {
        CPy_DECREF(self->_ctor);
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
    self->_ctor = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_attributes(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_attributes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'attributes' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_attributes);
    PyObject *retval = self->_attributes;
    return retval;
}

static int
class_ir___ClassIR_set_attributes(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'attributes' cannot be deleted");
        return -1;
    }
    if (self->_attributes != NULL) {
        CPy_DECREF(self->_attributes);
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
    self->_attributes = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_deletable(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_deletable == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'deletable' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_deletable);
    PyObject *retval = self->_deletable;
    return retval;
}

static int
class_ir___ClassIR_set_deletable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'deletable' cannot be deleted");
        return -1;
    }
    if (self->_deletable != NULL) {
        CPy_DECREF(self->_deletable);
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
    self->_deletable = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_method_decls(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_method_decls == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'method_decls' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_method_decls);
    PyObject *retval = self->_method_decls;
    return retval;
}

static int
class_ir___ClassIR_set_method_decls(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'method_decls' cannot be deleted");
        return -1;
    }
    if (self->_method_decls != NULL) {
        CPy_DECREF(self->_method_decls);
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
    self->_method_decls = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_methods(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_methods == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'methods' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_methods);
    PyObject *retval = self->_methods;
    return retval;
}

static int
class_ir___ClassIR_set_methods(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'methods' cannot be deleted");
        return -1;
    }
    if (self->_methods != NULL) {
        CPy_DECREF(self->_methods);
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
    self->_methods = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_glue_methods(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_glue_methods == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'glue_methods' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_glue_methods);
    PyObject *retval = self->_glue_methods;
    return retval;
}

static int
class_ir___ClassIR_set_glue_methods(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'glue_methods' cannot be deleted");
        return -1;
    }
    if (self->_glue_methods != NULL) {
        CPy_DECREF(self->_glue_methods);
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
    self->_glue_methods = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_properties(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_properties == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'properties' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_properties);
    PyObject *retval = self->_properties;
    return retval;
}

static int
class_ir___ClassIR_set_properties(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'properties' cannot be deleted");
        return -1;
    }
    if (self->_properties != NULL) {
        CPy_DECREF(self->_properties);
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
    self->_properties = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_property_types(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_property_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'property_types' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_property_types);
    PyObject *retval = self->_property_types;
    return retval;
}

static int
class_ir___ClassIR_set_property_types(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'property_types' cannot be deleted");
        return -1;
    }
    if (self->_property_types != NULL) {
        CPy_DECREF(self->_property_types);
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
    self->_property_types = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_vtable(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_vtable == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'vtable' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_vtable);
    PyObject *retval = self->_vtable;
    return retval;
}

static int
class_ir___ClassIR_set_vtable(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'vtable' cannot be deleted");
        return -1;
    }
    if (self->_vtable != NULL) {
        CPy_DECREF(self->_vtable);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9768;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9768;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL9768: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_vtable = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_vtable_entries(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_vtable_entries == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'vtable_entries' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_vtable_entries);
    PyObject *retval = self->_vtable_entries;
    return retval;
}

static int
class_ir___ClassIR_set_vtable_entries(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'vtable_entries' cannot be deleted");
        return -1;
    }
    if (self->_vtable_entries != NULL) {
        CPy_DECREF(self->_vtable_entries);
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
    self->_vtable_entries = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_trait_vtables(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_trait_vtables == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'trait_vtables' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_trait_vtables);
    PyObject *retval = self->_trait_vtables;
    return retval;
}

static int
class_ir___ClassIR_set_trait_vtables(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'trait_vtables' cannot be deleted");
        return -1;
    }
    if (self->_trait_vtables != NULL) {
        CPy_DECREF(self->_trait_vtables);
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
    self->_trait_vtables = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_base(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_base == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'base' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_base);
    PyObject *retval = self->_base;
    return retval;
}

static int
class_ir___ClassIR_set_base(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'base' cannot be deleted");
        return -1;
    }
    if (self->_base != NULL) {
        CPy_DECREF(self->_base);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_class_ir___ClassIR)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9769;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9769;
    CPy_TypeError("mypyc.ir.class_ir.ClassIR or None", value); 
    tmp = NULL;
__LL9769: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_base = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_traits(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_traits == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'traits' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_traits);
    PyObject *retval = self->_traits;
    return retval;
}

static int
class_ir___ClassIR_set_traits(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'traits' cannot be deleted");
        return -1;
    }
    if (self->_traits != NULL) {
        CPy_DECREF(self->_traits);
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
    self->_traits = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_mro(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_mro == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mro' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_mro);
    PyObject *retval = self->_mro;
    return retval;
}

static int
class_ir___ClassIR_set_mro(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'mro' cannot be deleted");
        return -1;
    }
    if (self->_mro != NULL) {
        CPy_DECREF(self->_mro);
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
    self->_mro = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_base_mro(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_base_mro == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'base_mro' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_base_mro);
    PyObject *retval = self->_base_mro;
    return retval;
}

static int
class_ir___ClassIR_set_base_mro(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'base_mro' cannot be deleted");
        return -1;
    }
    if (self->_base_mro != NULL) {
        CPy_DECREF(self->_base_mro);
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
    self->_base_mro = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_children(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_children == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'children' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_children);
    PyObject *retval = self->_children;
    return retval;
}

static int
class_ir___ClassIR_set_children(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'children' cannot be deleted");
        return -1;
    }
    if (self->_children != NULL) {
        CPy_DECREF(self->_children);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9770;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9770;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL9770: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_children = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_attrs_with_defaults(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_attrs_with_defaults == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'attrs_with_defaults' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_attrs_with_defaults);
    PyObject *retval = self->_attrs_with_defaults;
    return retval;
}

static int
class_ir___ClassIR_set_attrs_with_defaults(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'attrs_with_defaults' cannot be deleted");
        return -1;
    }
    if (self->_attrs_with_defaults != NULL) {
        CPy_DECREF(self->_attrs_with_defaults);
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
    self->_attrs_with_defaults = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get__always_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->__always_initialized_attrs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_always_initialized_attrs' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->__always_initialized_attrs);
    PyObject *retval = self->__always_initialized_attrs;
    return retval;
}

static int
class_ir___ClassIR_set__always_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute '_always_initialized_attrs' cannot be deleted");
        return -1;
    }
    if (self->__always_initialized_attrs != NULL) {
        CPy_DECREF(self->__always_initialized_attrs);
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
    self->__always_initialized_attrs = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get__sometimes_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->__sometimes_initialized_attrs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_sometimes_initialized_attrs' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->__sometimes_initialized_attrs);
    PyObject *retval = self->__sometimes_initialized_attrs;
    return retval;
}

static int
class_ir___ClassIR_set__sometimes_initialized_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute '_sometimes_initialized_attrs' cannot be deleted");
        return -1;
    }
    if (self->__sometimes_initialized_attrs != NULL) {
        CPy_DECREF(self->__sometimes_initialized_attrs);
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
    self->__sometimes_initialized_attrs = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_init_self_leak(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_init_self_leak == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'init_self_leak' of 'ClassIR' undefined");
        return NULL;
    }
    PyObject *retval = self->_init_self_leak ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
class_ir___ClassIR_set_init_self_leak(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'init_self_leak' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_init_self_leak = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_bitmap_attrs(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    if (unlikely(self->_bitmap_attrs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bitmap_attrs' of 'ClassIR' undefined");
        return NULL;
    }
    CPy_INCREF(self->_bitmap_attrs);
    PyObject *retval = self->_bitmap_attrs;
    return retval;
}

static int
class_ir___ClassIR_set_bitmap_attrs(mypyc___ir___class_ir___ClassIRObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassIR' object attribute 'bitmap_attrs' cannot be deleted");
        return -1;
    }
    if (self->_bitmap_attrs != NULL) {
        CPy_DECREF(self->_bitmap_attrs);
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
    self->_bitmap_attrs = tmp;
    return 0;
}

static PyObject *
class_ir___ClassIR_get_fullname(mypyc___ir___class_ir___ClassIRObject *self, void *closure)
{
    return CPyDef_class_ir___ClassIR___fullname((PyObject *) self);
}

static int
class_ir___NonExtClassInfo_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *class_ir___NonExtClassInfo_setup(PyTypeObject *type);
PyObject *CPyDef_class_ir___NonExtClassInfo(PyObject *cpy_r_dict, PyObject *cpy_r_bases, PyObject *cpy_r_anns, PyObject *cpy_r_metaclass);

static PyObject *
class_ir___NonExtClassInfo_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_class_ir___NonExtClassInfo) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = class_ir___NonExtClassInfo_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_class_ir___NonExtClassInfo_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
class_ir___NonExtClassInfo_traverse(mypyc___ir___class_ir___NonExtClassInfoObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_dict);
    Py_VISIT(self->_bases);
    Py_VISIT(self->_anns);
    Py_VISIT(self->_metaclass);
    return 0;
}

static int
class_ir___NonExtClassInfo_clear(mypyc___ir___class_ir___NonExtClassInfoObject *self)
{
    Py_CLEAR(self->_dict);
    Py_CLEAR(self->_bases);
    Py_CLEAR(self->_anns);
    Py_CLEAR(self->_metaclass);
    return 0;
}

static void
class_ir___NonExtClassInfo_dealloc(mypyc___ir___class_ir___NonExtClassInfoObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, class_ir___NonExtClassInfo_dealloc)
    class_ir___NonExtClassInfo_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem class_ir___NonExtClassInfo_vtable[1];
static bool
CPyDef_class_ir___NonExtClassInfo_trait_vtable_setup(void)
{
    CPyVTableItem class_ir___NonExtClassInfo_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_class_ir___NonExtClassInfo_____init__,
    };
    memcpy(class_ir___NonExtClassInfo_vtable, class_ir___NonExtClassInfo_vtable_scratch, sizeof(class_ir___NonExtClassInfo_vtable));
    return 1;
}

static PyObject *
class_ir___NonExtClassInfo_get_dict(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure);
static int
class_ir___NonExtClassInfo_set_dict(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___NonExtClassInfo_get_bases(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure);
static int
class_ir___NonExtClassInfo_set_bases(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___NonExtClassInfo_get_anns(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure);
static int
class_ir___NonExtClassInfo_set_anns(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure);
static PyObject *
class_ir___NonExtClassInfo_get_metaclass(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure);
static int
class_ir___NonExtClassInfo_set_metaclass(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure);

static PyGetSetDef class_ir___NonExtClassInfo_getseters[] = {
    {"dict",
     (getter)class_ir___NonExtClassInfo_get_dict, (setter)class_ir___NonExtClassInfo_set_dict,
     NULL, NULL},
    {"bases",
     (getter)class_ir___NonExtClassInfo_get_bases, (setter)class_ir___NonExtClassInfo_set_bases,
     NULL, NULL},
    {"anns",
     (getter)class_ir___NonExtClassInfo_get_anns, (setter)class_ir___NonExtClassInfo_set_anns,
     NULL, NULL},
    {"metaclass",
     (getter)class_ir___NonExtClassInfo_get_metaclass, (setter)class_ir___NonExtClassInfo_set_metaclass,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef class_ir___NonExtClassInfo_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_class_ir___NonExtClassInfo_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_class_ir___NonExtClassInfo_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NonExtClassInfo",
    .tp_new = class_ir___NonExtClassInfo_new,
    .tp_dealloc = (destructor)class_ir___NonExtClassInfo_dealloc,
    .tp_traverse = (traverseproc)class_ir___NonExtClassInfo_traverse,
    .tp_clear = (inquiry)class_ir___NonExtClassInfo_clear,
    .tp_getset = class_ir___NonExtClassInfo_getseters,
    .tp_methods = class_ir___NonExtClassInfo_methods,
    .tp_init = class_ir___NonExtClassInfo_init,
    .tp_basicsize = sizeof(mypyc___ir___class_ir___NonExtClassInfoObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_class_ir___NonExtClassInfo_template = &CPyType_class_ir___NonExtClassInfo_template_;

static PyObject *
class_ir___NonExtClassInfo_setup(PyTypeObject *type)
{
    mypyc___ir___class_ir___NonExtClassInfoObject *self;
    self = (mypyc___ir___class_ir___NonExtClassInfoObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = class_ir___NonExtClassInfo_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_class_ir___NonExtClassInfo(PyObject *cpy_r_dict, PyObject *cpy_r_bases, PyObject *cpy_r_anns, PyObject *cpy_r_metaclass)
{
    PyObject *self = class_ir___NonExtClassInfo_setup(CPyType_class_ir___NonExtClassInfo);
    if (self == NULL)
        return NULL;
    char res = CPyDef_class_ir___NonExtClassInfo_____init__(self, cpy_r_dict, cpy_r_bases, cpy_r_anns, cpy_r_metaclass);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
class_ir___NonExtClassInfo_get_dict(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure)
{
    if (unlikely(self->_dict == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'dict' of 'NonExtClassInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_dict);
    PyObject *retval = self->_dict;
    return retval;
}

static int
class_ir___NonExtClassInfo_set_dict(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NonExtClassInfo' object attribute 'dict' cannot be deleted");
        return -1;
    }
    if (self->_dict != NULL) {
        CPy_DECREF(self->_dict);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_dict = tmp;
    return 0;
}

static PyObject *
class_ir___NonExtClassInfo_get_bases(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure)
{
    if (unlikely(self->_bases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bases' of 'NonExtClassInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_bases);
    PyObject *retval = self->_bases;
    return retval;
}

static int
class_ir___NonExtClassInfo_set_bases(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NonExtClassInfo' object attribute 'bases' cannot be deleted");
        return -1;
    }
    if (self->_bases != NULL) {
        CPy_DECREF(self->_bases);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_bases = tmp;
    return 0;
}

static PyObject *
class_ir___NonExtClassInfo_get_anns(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure)
{
    if (unlikely(self->_anns == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'anns' of 'NonExtClassInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_anns);
    PyObject *retval = self->_anns;
    return retval;
}

static int
class_ir___NonExtClassInfo_set_anns(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NonExtClassInfo' object attribute 'anns' cannot be deleted");
        return -1;
    }
    if (self->_anns != NULL) {
        CPy_DECREF(self->_anns);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_anns = tmp;
    return 0;
}

static PyObject *
class_ir___NonExtClassInfo_get_metaclass(mypyc___ir___class_ir___NonExtClassInfoObject *self, void *closure)
{
    if (unlikely(self->_metaclass == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'metaclass' of 'NonExtClassInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_metaclass);
    PyObject *retval = self->_metaclass;
    return retval;
}

static int
class_ir___NonExtClassInfo_set_metaclass(mypyc___ir___class_ir___NonExtClassInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NonExtClassInfo' object attribute 'metaclass' cannot be deleted");
        return -1;
    }
    if (self->_metaclass != NULL) {
        CPy_DECREF(self->_metaclass);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_metaclass = tmp;
    return 0;
}

static PyObject *class_ir___concrete_subclasses_ClassIR_env_setup(PyTypeObject *type);
PyObject *CPyDef_class_ir___concrete_subclasses_ClassIR_env(void);

static PyObject *
class_ir___concrete_subclasses_ClassIR_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_class_ir___concrete_subclasses_ClassIR_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return class_ir___concrete_subclasses_ClassIR_env_setup(type);
}

static int
class_ir___concrete_subclasses_ClassIR_env_traverse(mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_subs);
    Py_VISIT(self->_c);
    Py_VISIT(self->_concrete);
    return 0;
}

static int
class_ir___concrete_subclasses_ClassIR_env_clear(mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_subs);
    Py_CLEAR(self->_c);
    Py_CLEAR(self->_concrete);
    return 0;
}

static void
class_ir___concrete_subclasses_ClassIR_env_dealloc(mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, class_ir___concrete_subclasses_ClassIR_env_dealloc)
    class_ir___concrete_subclasses_ClassIR_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem class_ir___concrete_subclasses_ClassIR_env_vtable[1];
static bool
CPyDef_class_ir___concrete_subclasses_ClassIR_env_trait_vtable_setup(void)
{
    CPyVTableItem class_ir___concrete_subclasses_ClassIR_env_vtable_scratch[] = {
        NULL
    };
    memcpy(class_ir___concrete_subclasses_ClassIR_env_vtable, class_ir___concrete_subclasses_ClassIR_env_vtable_scratch, sizeof(class_ir___concrete_subclasses_ClassIR_env_vtable));
    return 1;
}

static PyMethodDef class_ir___concrete_subclasses_ClassIR_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_class_ir___concrete_subclasses_ClassIR_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "concrete_subclasses_ClassIR_env",
    .tp_new = class_ir___concrete_subclasses_ClassIR_env_new,
    .tp_dealloc = (destructor)class_ir___concrete_subclasses_ClassIR_env_dealloc,
    .tp_traverse = (traverseproc)class_ir___concrete_subclasses_ClassIR_env_traverse,
    .tp_clear = (inquiry)class_ir___concrete_subclasses_ClassIR_env_clear,
    .tp_methods = class_ir___concrete_subclasses_ClassIR_env_methods,
    .tp_basicsize = sizeof(mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_class_ir___concrete_subclasses_ClassIR_env_template = &CPyType_class_ir___concrete_subclasses_ClassIR_env_template_;

static PyObject *
class_ir___concrete_subclasses_ClassIR_env_setup(PyTypeObject *type)
{
    mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject *self;
    self = (mypyc___ir___class_ir___concrete_subclasses_ClassIR_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = class_ir___concrete_subclasses_ClassIR_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_class_ir___concrete_subclasses_ClassIR_env(void)
{
    PyObject *self = class_ir___concrete_subclasses_ClassIR_env_setup(CPyType_class_ir___concrete_subclasses_ClassIR_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__(self, instance, owner);
}
PyMemberDef class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_setup(PyTypeObject *type);
PyObject *CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj(void);

static PyObject *
class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_setup(type);
}

static int
class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_traverse(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject))));
    return 0;
}

static int
class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_clear(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject))));
    return 0;
}

static void
class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_dealloc(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_dealloc)
    class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable[2];
static bool
CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_trait_vtable_setup(void)
{
    CPyVTableItem class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__,
        (CPyVTableItem)CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__,
    };
    memcpy(class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable, class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable_scratch, sizeof(class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable));
    return 1;
}

static PyMethodDef class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_concrete_subclasses_ClassIR_obj",
    .tp_new = class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_new,
    .tp_dealloc = (destructor)class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_dealloc,
    .tp_traverse = (traverseproc)class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_traverse,
    .tp_clear = (inquiry)class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_clear,
    .tp_methods = class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj,
    .tp_members = class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_members,
    .tp_basicsize = sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject),
    .tp_weaklistoffset = sizeof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_template = &CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_template_;

static PyObject *
class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_setup(PyTypeObject *type)
{
    mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *self;
    self = (mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_vtable;
    self->vectorcall = CPyPy_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj(void)
{
    PyObject *self = class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_setup(CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef class_irmodule_methods[] = {
    {"serialize_vtable_entry", (PyCFunction)CPyPy_class_ir___serialize_vtable_entry, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"serialize_vtable", (PyCFunction)CPyPy_class_ir___serialize_vtable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"deserialize_vtable_entry", (PyCFunction)CPyPy_class_ir___deserialize_vtable_entry, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"deserialize_vtable", (PyCFunction)CPyPy_class_ir___deserialize_vtable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"all_concrete_classes", (PyCFunction)CPyPy_class_ir___all_concrete_classes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef class_irmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.ir.class_ir",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    class_irmodule_methods
};

PyObject *CPyInit_mypyc___ir___class_ir(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___ir___class_ir_internal) {
        Py_INCREF(CPyModule_mypyc___ir___class_ir_internal);
        return CPyModule_mypyc___ir___class_ir_internal;
    }
    CPyModule_mypyc___ir___class_ir_internal = PyModule_Create(&class_irmodule);
    if (unlikely(CPyModule_mypyc___ir___class_ir_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___ir___class_ir_internal, "__name__");
    CPyStatic_class_ir___globals = PyModule_GetDict(CPyModule_mypyc___ir___class_ir_internal);
    if (unlikely(CPyStatic_class_ir___globals == NULL))
        goto fail;
    CPyType_class_ir___concrete_subclasses_ClassIR_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_class_ir___concrete_subclasses_ClassIR_env_template, NULL, modname);
    if (unlikely(!CPyType_class_ir___concrete_subclasses_ClassIR_env))
        goto fail;
    CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_template, NULL, modname);
    if (unlikely(!CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_class_ir_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___ir___class_ir_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___ir___class_ir_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_class_ir___VTableMethod);
    Py_CLEAR(CPyType_class_ir___ClassIR);
    Py_CLEAR(CPyType_class_ir___NonExtClassInfo);
    Py_CLEAR(CPyType_class_ir___concrete_subclasses_ClassIR_env);
    Py_CLEAR(CPyType_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj);
    return NULL;
}

char CPyDef_class_ir___ClassIR_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_module_name, char cpy_r_is_trait, char cpy_r_is_generated, char cpy_r_is_abstract, char cpy_r_is_ext_class) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    char cpy_r_r42;
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
    char cpy_r_r53;
    char cpy_r_r54;
    if (cpy_r_is_trait != 2) goto CPyL2;
    cpy_r_is_trait = 0;
CPyL2: ;
    if (cpy_r_is_generated != 2) goto CPyL4;
    cpy_r_is_generated = 0;
CPyL4: ;
    if (cpy_r_is_abstract != 2) goto CPyL6;
    cpy_r_is_abstract = 0;
CPyL6: ;
    if (cpy_r_is_ext_class != 2) goto CPyL8;
    cpy_r_is_ext_class = 1;
CPyL8: ;
    CPy_INCREF(cpy_r_name);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_module_name);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_module_name = cpy_r_module_name;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_trait = cpy_r_is_trait;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_generated = cpy_r_is_generated;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_abstract = cpy_r_is_abstract;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_ext_class = cpy_r_is_ext_class;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_augmented = 0;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_inherits_python = 0;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_has_dict = 0;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_allow_interpreted_subclasses = 0;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_needs_getseters = 0;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__serializable = 0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_builtin_base = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 133, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r2 = CPyDef_rtypes___RInstance(cpy_r_self);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 133, CPyStatic_class_ir___globals);
        goto CPyL52;
    }
    cpy_r_r3 = CPyDef_func_ir___FuncSignature(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 133, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r4 = Py_None;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = 2;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_func_ir___FuncDecl(cpy_r_name, cpy_r_r4, cpy_r_module_name, cpy_r_r3, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 133, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_ctor != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_ctor);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_ctor = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 133, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 135, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attributes != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attributes);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attributes = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 135, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 137, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_deletable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_deletable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_deletable = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 137, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r15 = PyDict_New();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 140, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_method_decls != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_method_decls);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_method_decls = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 140, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r17 = PyDict_New();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 142, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_methods != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_methods);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_methods = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 142, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r19 = PyDict_New();
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 146, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_glue_methods != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_glue_methods);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_glue_methods = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 146, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r21 = PyDict_New();
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 153, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_properties != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_properties);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_properties = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 153, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r23 = PyDict_New();
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 156, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_property_types != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_property_types);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_property_types = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 156, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r25 = Py_None;
    CPy_INCREF(cpy_r_r25);
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 158, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 159, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable_entries != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable_entries);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable_entries = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 159, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 160, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_trait_vtables != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_trait_vtables);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_trait_vtables = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 160, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r31 = Py_None;
    CPy_INCREF(cpy_r_r31);
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 163, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 164, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_traits != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_traits);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_traits = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 164, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r35 = PyList_New(1);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 167, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    CPy_INCREF(cpy_r_self);
    *(PyObject * *)cpy_r_r37 = cpy_r_self;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro = cpy_r_r35;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 167, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 169, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    CPy_INCREF(cpy_r_self);
    *(PyObject * *)cpy_r_r41 = cpy_r_self;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base_mro = cpy_r_r39;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 169, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r43 = PyList_New(0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 175, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children = cpy_r_r43;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 175, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r45 = PySet_New(NULL);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 178, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attrs_with_defaults != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attrs_with_defaults);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attrs_with_defaults = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 178, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r47 = PySet_New(NULL);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 182, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__always_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__always_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__always_initialized_attrs = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 182, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r49 = PySet_New(NULL);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 185, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__sometimes_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__sometimes_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__sometimes_initialized_attrs = cpy_r_r49;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 185, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_init_self_leak = 0;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 188, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 195, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_bitmap_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_bitmap_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_bitmap_attrs = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 195, CPyStatic_class_ir___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL52: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL51;
}

PyObject *CPyPy_class_ir___ClassIR_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "module_name", "is_trait", "is_generated", "is_abstract", "is_ext_class", 0};
    PyObject *obj_name;
    PyObject *obj_module_name;
    PyObject *obj_is_trait = NULL;
    PyObject *obj_is_generated = NULL;
    PyObject *obj_is_abstract = NULL;
    PyObject *obj_is_ext_class = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|OOOO", "__init__", kwlist, &obj_name, &obj_module_name, &obj_is_trait, &obj_is_generated, &obj_is_abstract, &obj_is_ext_class)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    char arg_is_trait;
    if (obj_is_trait == NULL) {
        arg_is_trait = 2;
    } else if (unlikely(!PyBool_Check(obj_is_trait))) {
        CPy_TypeError("bool", obj_is_trait); goto fail;
    } else
        arg_is_trait = obj_is_trait == Py_True;
    char arg_is_generated;
    if (obj_is_generated == NULL) {
        arg_is_generated = 2;
    } else if (unlikely(!PyBool_Check(obj_is_generated))) {
        CPy_TypeError("bool", obj_is_generated); goto fail;
    } else
        arg_is_generated = obj_is_generated == Py_True;
    char arg_is_abstract;
    if (obj_is_abstract == NULL) {
        arg_is_abstract = 2;
    } else if (unlikely(!PyBool_Check(obj_is_abstract))) {
        CPy_TypeError("bool", obj_is_abstract); goto fail;
    } else
        arg_is_abstract = obj_is_abstract == Py_True;
    char arg_is_ext_class;
    if (obj_is_ext_class == NULL) {
        arg_is_ext_class = 2;
    } else if (unlikely(!PyBool_Check(obj_is_ext_class))) {
        CPy_TypeError("bool", obj_is_ext_class); goto fail;
    } else
        arg_is_ext_class = obj_is_ext_class == Py_True;
    char retval = CPyDef_class_ir___ClassIR_____init__(arg_self, arg_name, arg_module_name, arg_is_trait, arg_is_generated, arg_is_abstract, arg_is_ext_class);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 88, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[7749]; /* ('ClassIR(name={self.name}, '
                                    'module_name={self.module_name}, '
                                    'is_trait={self.is_trait}, '
                                    'is_generated={self.is_generated}, '
                                    'is_abstract={self.is_abstract}, '
                                    'is_ext_class={self.is_ext_class})') */
    cpy_r_r1 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_self};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = CPyStatics[10005]; /* ('self',) */
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "__repr__", 199, CPyStatic_class_ir___globals);
        goto CPyL3;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "__repr__", 199, CPyStatic_class_ir___globals, "str", cpy_r_r5);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_class_ir___ClassIR_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "__repr__", 197, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___fullname(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[224]; /* '.' */
    cpy_r_r2 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "fullname", 208, CPyStatic_class_ir___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_class_ir___ClassIR___fullname(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":fullname", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___fullname(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "fullname", 207, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___real_base(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "real_base", "ClassIR", "mro", 212, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)2;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "real_base", "ClassIR", "mro", 212, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
CPyL3: ;
    cpy_r_r6 = CPyList_GetItemShortBorrow(cpy_r_r5, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "real_base", 212, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_class_ir___ClassIR))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "real_base", 212, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r7)->_is_trait;
    if (cpy_r_r8) goto CPyL10;
CPyL6: ;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "real_base", "ClassIR", "mro", 213, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
CPyL7: ;
    cpy_r_r10 = CPyList_GetItemShort(cpy_r_r9, 2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "real_base", 213, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_class_ir___ClassIR))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "real_base", 213, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r10);
        goto CPyL11;
    }
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL11: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
}

PyObject *CPyPy_class_ir___ClassIR___real_base(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":real_base", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___real_base(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "real_base", 210, CPyStatic_class_ir___globals);
    return NULL;
}

CPyTagged CPyDef_class_ir___ClassIR___vtable_entry(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
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
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_r42;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "vtable_entry", "ClassIR", "vtable", 217, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL4;
    PyErr_SetString(PyExc_AssertionError, "vtable not computed yet");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 217, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "vtable_entry", "ClassIR", "vtable", 218, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals, "dict", cpy_r_r4);
        goto CPyL23;
    }
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_name);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL18;
    cpy_r_r9 = CPyStatics[163]; /* '' */
    cpy_r_r10 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r11 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[163]; /* '' */
    cpy_r_r13 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r14[3] = {cpy_r_r10, cpy_r_r11, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals, "str", cpy_r_r16);
        goto CPyL23;
    }
    cpy_r_r18 = CPyStatics[7750]; /* ' has no attribute ' */
    cpy_r_r19 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r20 = CPyStatics[163]; /* '' */
    cpy_r_r21 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r22[3] = {cpy_r_r19, cpy_r_name, cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals, "str", cpy_r_r24);
        goto CPyL25;
    }
    cpy_r_r26 = PyList_New(3);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL26;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r17;
    cpy_r_r29 = cpy_r_r28 + 8;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r29 = cpy_r_r18;
    cpy_r_r30 = cpy_r_r28 + 16;
    *(PyObject * *)cpy_r_r30 = cpy_r_r25;
    cpy_r_r31 = PyUnicode_Join(cpy_r_r9, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_Raise(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 218, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r38 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "vtable_entry", "ClassIR", "vtable", 219, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r38);
CPyL19: ;
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "vtable_entry", 219, CPyStatic_class_ir___globals, "dict", cpy_r_r38);
        goto CPyL23;
    }
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r39, cpy_r_name);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 219, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    if (likely(PyLong_Check(cpy_r_r40)))
        cpy_r_r41 = CPyTagged_FromObject(cpy_r_r40);
    else {
        CPy_TypeError("int", cpy_r_r40); cpy_r_r41 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 219, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    return cpy_r_r41;
CPyL23: ;
    cpy_r_r42 = CPY_INT_TAG;
    return cpy_r_r42;
CPyL24: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL23;
}

PyObject *CPyPy_class_ir___ClassIR___vtable_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:vtable_entry", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    CPyTagged retval = CPyDef_class_ir___ClassIR___vtable_entry(arg_self, arg_name);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "vtable_entry", 216, CPyStatic_class_ir___globals);
    return NULL;
}

tuple_T2OO CPyDef_class_ir___ClassIR___attr_details(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2OO cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    tuple_T2OO cpy_r_r54;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "attr_details", "ClassIR", "mro", 222, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL30;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_class_ir___ClassIR))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "attr_details", 222, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r6);
        goto CPyL31;
    }
    cpy_r_ir = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "attr_details", "ClassIR", "attributes", 223, CPyStatic_class_ir___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 223, CPyStatic_class_ir___globals);
        goto CPyL32;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL33;
    } else
        goto CPyL11;
CPyL7: ;
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "attr_details", "ClassIR", "attributes", 224, CPyStatic_class_ir___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 224, CPyStatic_class_ir___globals);
        goto CPyL34;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_rtypes___RType)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "attr_details", 224, CPyStatic_class_ir___globals, "mypyc.ir.rtypes.RType", cpy_r_r13);
        goto CPyL34;
    }
    cpy_r_r15.f0 = cpy_r_r14;
    cpy_r_r15.f1 = cpy_r_ir;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_ir);
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "attr_details", "ClassIR", "property_types", 225, CPyStatic_class_ir___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = PyDict_Contains(cpy_r_r16, cpy_r_name);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 225, CPyStatic_class_ir___globals);
        goto CPyL32;
    }
    cpy_r_r19 = cpy_r_r17;
    if (cpy_r_r19) {
        goto CPyL35;
    } else
        goto CPyL36;
CPyL14: ;
    cpy_r_r20 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "attr_details", "ClassIR", "property_types", 226, CPyStatic_class_ir___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r20);
CPyL15: ;
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r20, cpy_r_name);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 226, CPyStatic_class_ir___globals);
        goto CPyL34;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_rtypes___RType)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "attr_details", 226, CPyStatic_class_ir___globals, "mypyc.ir.rtypes.RType", cpy_r_r21);
        goto CPyL34;
    }
    cpy_r_r23.f0 = cpy_r_r22;
    cpy_r_r23.f1 = cpy_r_ir;
    CPy_INCREF(cpy_r_r23.f0);
    CPy_INCREF(cpy_r_r23.f1);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_ir);
    return cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r24;
    goto CPyL2;
CPyL19: ;
    cpy_r_r25 = CPyStatics[163]; /* '' */
    cpy_r_r26 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[163]; /* '' */
    cpy_r_r29 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r30[3] = {cpy_r_r26, cpy_r_r27, cpy_r_r28};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals, "str", cpy_r_r32);
        goto CPyL29;
    }
    cpy_r_r34 = CPyStatics[7750]; /* ' has no attribute ' */
    cpy_r_r35 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r36 = CPyStatics[163]; /* '' */
    cpy_r_r37 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r38[3] = {cpy_r_r35, cpy_r_name, cpy_r_r36};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals, "str", cpy_r_r40);
        goto CPyL38;
    }
    cpy_r_r42 = PyList_New(3);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL39;
    }
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    *(PyObject * *)cpy_r_r44 = cpy_r_r33;
    cpy_r_r45 = cpy_r_r44 + 8;
    CPy_INCREF(cpy_r_r34);
    *(PyObject * *)cpy_r_r45 = cpy_r_r34;
    cpy_r_r46 = cpy_r_r44 + 16;
    *(PyObject * *)cpy_r_r46 = cpy_r_r41;
    cpy_r_r47 = PyUnicode_Join(cpy_r_r25, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r47};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r47);
    CPy_Raise(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 227, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL29: ;
    tuple_T2OO __tmp9771 = { NULL, NULL };
    cpy_r_r54 = __tmp9771;
    return cpy_r_r54;
CPyL30: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ir);
    goto CPyL29;
CPyL33: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL34: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL29;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL36: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r41);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL29;
}

PyObject *CPyPy_class_ir___ClassIR___attr_details(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:attr_details", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_class_ir___ClassIR___attr_details(arg_self, arg_name);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9772 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9772);
    PyObject *__tmp9773 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9773);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_details", 221, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___attr_type(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___attr_details(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_type", 230, CPyStatic_class_ir___globals);
        goto CPyL2;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_class_ir___ClassIR___attr_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:attr_type", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___attr_type(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "attr_type", 229, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___method_decl(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "method_decl", "ClassIR", "mro", 233, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL23;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_class_ir___ClassIR))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "method_decl", 233, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r6);
        goto CPyL24;
    }
    cpy_r_ir = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "method_decl", "ClassIR", "method_decls", 234, CPyStatic_class_ir___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 234, CPyStatic_class_ir___globals);
        goto CPyL25;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL26;
    } else
        goto CPyL27;
CPyL7: ;
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'method_decls' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 235, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
CPyL8: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 235, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___FuncDecl))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "method_decl", 235, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r13);
        goto CPyL22;
    }
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r15;
    goto CPyL2;
CPyL12: ;
    cpy_r_r16 = CPyStatics[163]; /* '' */
    cpy_r_r17 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r18 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[163]; /* '' */
    cpy_r_r20 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r21[3] = {cpy_r_r17, cpy_r_r18, cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals, "str", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r25 = CPyStatics[7750]; /* ' has no attribute ' */
    cpy_r_r26 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r27 = CPyStatics[163]; /* '' */
    cpy_r_r28 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r29[3] = {cpy_r_r26, cpy_r_name, cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals, "str", cpy_r_r31);
        goto CPyL29;
    }
    cpy_r_r33 = PyList_New(3);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL30;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    *(PyObject * *)cpy_r_r35 = cpy_r_r24;
    cpy_r_r36 = cpy_r_r35 + 8;
    CPy_INCREF(cpy_r_r25);
    *(PyObject * *)cpy_r_r36 = cpy_r_r25;
    cpy_r_r37 = cpy_r_r35 + 16;
    *(PyObject * *)cpy_r_r37 = cpy_r_r32;
    cpy_r_r38 = PyUnicode_Join(cpy_r_r16, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_r38};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r38);
    CPy_Raise(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 236, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL12;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ir);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL27: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL11;
CPyL28: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r32);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL22;
}

PyObject *CPyPy_class_ir___ClassIR___method_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:method_decl", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___method_decl(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "method_decl", 232, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___method_sig(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "method_sig", 239, CPyStatic_class_ir___globals);
        goto CPyL2;
    }
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_class_ir___ClassIR___method_sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:method_sig", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___method_sig(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "method_sig", 238, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___has_method(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method", 243, CPyStatic_class_ir___globals);
    } else
        goto CPyL11;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method", 244, CPyStatic_class_ir___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL5;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL5: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL7;
    } else
        goto CPyL12;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL10;
    CPy_Unreachable();
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL6;
}

PyObject *CPyPy_class_ir___ClassIR___has_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:has_method", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___has_method(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method", 241, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___is_method_final(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_subs;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_method_decl;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_subc;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_subc_2;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___subclasses(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 249, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    cpy_r_subs = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_subs == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL25;
    } else
        goto CPyL3;
CPyL2: ;
    return 0;
CPyL3: ;
    cpy_r_r3 = CPyDef_class_ir___ClassIR___has_method(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 254, CPyStatic_class_ir___globals);
        goto CPyL26;
    }
    if (!cpy_r_r3) goto CPyL15;
    cpy_r_r4 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 255, CPyStatic_class_ir___globals);
        goto CPyL26;
    }
    cpy_r_method_decl = cpy_r_r4;
    if (likely(cpy_r_subs != Py_None))
        cpy_r_r5 = cpy_r_subs;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_method_final", 256, CPyStatic_class_ir___globals, "set", cpy_r_subs);
        goto CPyL27;
    }
    cpy_r_r6 = PyObject_GetIter(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 256, CPyStatic_class_ir___globals);
        goto CPyL27;
    }
CPyL8: ;
    cpy_r_r7 = PyIter_Next(cpy_r_r6);
    if (cpy_r_r7 == NULL) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_method_final", 256, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL29;
    }
    cpy_r_subc = cpy_r_r8;
    cpy_r_r9 = CPyDef_class_ir___ClassIR___method_decl(cpy_r_subc, cpy_r_name);
    CPy_DECREF(cpy_r_subc);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 257, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    cpy_r_r10 = cpy_r_r9 != cpy_r_method_decl;
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10) {
        goto CPyL30;
    } else
        goto CPyL8;
CPyL12: ;
    return 0;
CPyL13: ;
    cpy_r_r11 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 256, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    return 1;
CPyL15: ;
    cpy_r_r12 = 0;
    if (likely(cpy_r_subs != Py_None))
        cpy_r_r13 = cpy_r_subs;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_method_final", 261, CPyStatic_class_ir___globals, "set", cpy_r_subs);
        goto CPyL24;
    }
    cpy_r_r14 = PyObject_GetIter(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 261, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
CPyL17: ;
    cpy_r_r15 = PyIter_Next(cpy_r_r14);
    if (cpy_r_r15 == NULL) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_class_ir___ClassIR))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_method_final", 261, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r15);
        goto CPyL32;
    }
    cpy_r_subc_2 = cpy_r_r16;
    cpy_r_r17 = CPyDef_class_ir___ClassIR___has_method(cpy_r_subc_2, cpy_r_name);
    CPy_DECREF(cpy_r_subc_2);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 261, CPyStatic_class_ir___globals);
        goto CPyL32;
    }
    if (cpy_r_r17) {
        goto CPyL33;
    } else
        goto CPyL17;
CPyL21: ;
    cpy_r_r12 = 1;
    goto CPyL23;
CPyL22: ;
    cpy_r_r18 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 261, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
CPyL23: ;
    cpy_r_r19 = cpy_r_r12 ^ 1;
    return cpy_r_r19;
CPyL24: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL25: ;
    CPy_DECREF(cpy_r_subs);
    goto CPyL2;
CPyL26: ;
    CPy_DecRef(cpy_r_subs);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_method_decl);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_method_decl);
    CPy_DECREF(cpy_r_r6);
    goto CPyL13;
CPyL29: ;
    CPy_DecRef(cpy_r_method_decl);
    CPy_DecRef(cpy_r_r6);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_method_decl);
    CPy_DECREF(cpy_r_r6);
    goto CPyL12;
CPyL31: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL24;
CPyL33: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL21;
}

PyObject *CPyPy_class_ir___ClassIR___is_method_final(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_method_final", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___is_method_final(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "is_method_final", 248, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___has_attr(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___attr_type(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_attr", 265, CPyStatic_class_ir___globals);
    } else
        goto CPyL11;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_attr", 266, CPyStatic_class_ir___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL5;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL5: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL7;
    } else
        goto CPyL12;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL10;
    CPy_Unreachable();
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL6;
}

PyObject *CPyPy_class_ir___ClassIR___has_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:has_attr", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___has_attr(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "has_attr", 263, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___is_deletable(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "is_deletable", "ClassIR", "mro", 271, CPyStatic_class_ir___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_deletable", 271, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_ir = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_deletable;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'deletable' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_deletable", 271, CPyStatic_class_ir___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r10 = PySequence_Contains(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_deletable", 271, CPyStatic_class_ir___globals);
        goto CPyL12;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL13;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r0 = 1;
    goto CPyL9;
CPyL8: ;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL2;
CPyL9: ;
    return cpy_r_r0;
CPyL10: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_class_ir___ClassIR___is_deletable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_deletable", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___is_deletable(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "is_deletable", 270, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___is_always_defined(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___is_deletable(cpy_r_self, cpy_r_name);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_always_defined", 274, CPyStatic_class_ir___globals);
        goto CPyL6;
    }
    if (!cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__always_initialized_attrs;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "is_always_defined", "ClassIR", "_always_initialized_attrs", 276, CPyStatic_class_ir___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL4: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_name);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "is_always_defined", 276, CPyStatic_class_ir___globals);
        goto CPyL6;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_class_ir___ClassIR___is_always_defined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_always_defined", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___is_always_defined(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "is_always_defined", 273, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___name_prefix(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_namegen___NameGenerator___private_name(cpy_r_names, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "name_prefix", 279, CPyStatic_class_ir___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_class_ir___ClassIR___name_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:name_prefix", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___name_prefix(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "name_prefix", 278, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___struct_name(PyObject *cpy_r_self, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_self, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "struct_name", 282, CPyStatic_class_ir___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_namegen___exported_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "struct_name", 282, CPyStatic_class_ir___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyStatics[7751]; /* 'Object' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "struct_name", 282, CPyStatic_class_ir___globals);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_class_ir___ClassIR___struct_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"names", 0};
    static CPyArg_Parser parser = {"O:struct_name", kwlist, 0};
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___struct_name(arg_self, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "struct_name", 281, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___get_method_and_class(PyObject *cpy_r_self, PyObject *cpy_r_name, char cpy_r_prefer_method) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    if (cpy_r_prefer_method != 2) goto CPyL2;
    cpy_r_prefer_method = 0;
CPyL2: ;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "get_method_and_class", "ClassIR", "mro", 287, CPyStatic_class_ir___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r0);
CPyL3: ;
    cpy_r_r1 = 0;
CPyL4: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL19;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_class_ir___ClassIR))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "get_method_and_class", 287, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r6);
        goto CPyL20;
    }
    cpy_r_ir = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "get_method_and_class", "ClassIR", "methods", 288, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method_and_class", 288, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL22;
    } else
        goto CPyL23;
CPyL9: ;
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "get_method_and_class", "ClassIR", "methods", 289, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method_and_class", 289, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___FuncIR))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "get_method_and_class", 289, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r13);
        goto CPyL24;
    }
    cpy_r_func_ir = cpy_r_r14;
    if (cpy_r_prefer_method) goto CPyL15;
    cpy_r_r15 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func_ir)->_decl;
    cpy_r_r16 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r15)->_implicit;
    if (cpy_r_r16) {
        goto CPyL25;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL15: ;
    cpy_r_r18.f0 = cpy_r_func_ir;
    cpy_r_r18.f1 = cpy_r_ir;
    CPy_INCREF(cpy_r_r18.f0);
    CPy_INCREF(cpy_r_r18.f1);
    CPy_DECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_ir);
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9774 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp9774);
    PyObject *__tmp9775 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp9775);
    return cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r20;
    goto CPyL4;
CPyL17: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL18: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL19: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ir);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL23: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL18;
CPyL25: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_func_ir);
    goto CPyL14;
}

PyObject *CPyPy_class_ir___ClassIR___get_method_and_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "prefer_method", 0};
    static CPyArg_Parser parser = {"O|$O:get_method_and_class", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_prefer_method = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_prefer_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_prefer_method;
    if (obj_prefer_method == NULL) {
        arg_prefer_method = 2;
    } else if (unlikely(!PyBool_Check(obj_prefer_method))) {
        CPy_TypeError("bool", obj_prefer_method); goto fail;
    } else
        arg_prefer_method = obj_prefer_method == Py_True;
    PyObject *retval = CPyDef_class_ir___ClassIR___get_method_and_class(arg_self, arg_name, arg_prefer_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method_and_class", 284, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___get_method(PyObject *cpy_r_self, PyObject *cpy_r_name, char cpy_r_prefer_method) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    if (cpy_r_prefer_method != 2) goto CPyL2;
    cpy_r_prefer_method = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___get_method_and_class(cpy_r_self, cpy_r_name, cpy_r_prefer_method);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method", 300, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_res != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL12;
    PyObject *__tmp9776;
    if (unlikely(!(PyTuple_Check(cpy_r_res) && PyTuple_GET_SIZE(cpy_r_res) == 2))) {
        __tmp9776 = NULL;
        goto __LL9777;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_res, 0)) == CPyType_func_ir___FuncIR))
        __tmp9776 = PyTuple_GET_ITEM(cpy_r_res, 0);
    else {
        __tmp9776 = NULL;
    }
    if (__tmp9776 == NULL) goto __LL9777;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_res, 1)) == CPyType_class_ir___ClassIR))
        __tmp9776 = PyTuple_GET_ITEM(cpy_r_res, 1);
    else {
        __tmp9776 = NULL;
    }
    if (__tmp9776 == NULL) goto __LL9777;
    __tmp9776 = cpy_r_res;
__LL9777: ;
    if (unlikely(__tmp9776 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_res); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9778 = PyTuple_GET_ITEM(cpy_r_res, 0);
        CPy_INCREF(__tmp9778);
        PyObject *__tmp9779;
        if (likely(Py_TYPE(__tmp9778) == CPyType_func_ir___FuncIR))
            __tmp9779 = __tmp9778;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9778); 
            __tmp9779 = NULL;
        }
        cpy_r_r3.f0 = __tmp9779;
        PyObject *__tmp9780 = PyTuple_GET_ITEM(cpy_r_res, 1);
        CPy_INCREF(__tmp9780);
        PyObject *__tmp9781;
        if (likely(Py_TYPE(__tmp9780) == CPyType_class_ir___ClassIR))
            __tmp9781 = __tmp9780;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9780); 
            __tmp9781 = NULL;
        }
        cpy_r_r3.f1 = __tmp9781;
    }
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method", 300, CPyStatic_class_ir___globals);
        goto CPyL13;
    }
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9782 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp9782);
    PyObject *__tmp9783 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp9783);
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method", 300, CPyStatic_class_ir___globals);
        goto CPyL13;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL12;
    PyObject *__tmp9784;
    if (unlikely(!(PyTuple_Check(cpy_r_res) && PyTuple_GET_SIZE(cpy_r_res) == 2))) {
        __tmp9784 = NULL;
        goto __LL9785;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_res, 0)) == CPyType_func_ir___FuncIR))
        __tmp9784 = PyTuple_GET_ITEM(cpy_r_res, 0);
    else {
        __tmp9784 = NULL;
    }
    if (__tmp9784 == NULL) goto __LL9785;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_res, 1)) == CPyType_class_ir___ClassIR))
        __tmp9784 = PyTuple_GET_ITEM(cpy_r_res, 1);
    else {
        __tmp9784 = NULL;
    }
    if (__tmp9784 == NULL) goto __LL9785;
    __tmp9784 = cpy_r_res;
__LL9785: ;
    if (unlikely(__tmp9784 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_res); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9786 = PyTuple_GET_ITEM(cpy_r_res, 0);
        CPy_INCREF(__tmp9786);
        PyObject *__tmp9787;
        if (likely(Py_TYPE(__tmp9786) == CPyType_func_ir___FuncIR))
            __tmp9787 = __tmp9786;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9786); 
            __tmp9787 = NULL;
        }
        cpy_r_r8.f0 = __tmp9787;
        PyObject *__tmp9788 = PyTuple_GET_ITEM(cpy_r_res, 1);
        CPy_INCREF(__tmp9788);
        PyObject *__tmp9789;
        if (likely(Py_TYPE(__tmp9788) == CPyType_class_ir___ClassIR))
            __tmp9789 = __tmp9788;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9788); 
            __tmp9789 = NULL;
        }
        cpy_r_r8.f1 = __tmp9789;
    }
    CPy_DECREF(cpy_r_res);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method", 301, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_r10 = cpy_r_r9;
    goto CPyL10;
CPyL9: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r10 = cpy_r_r11;
CPyL10: ;
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL12: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL11;
}

PyObject *CPyPy_class_ir___ClassIR___get_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "prefer_method", 0};
    static CPyArg_Parser parser = {"O|$O:get_method", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_prefer_method = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_prefer_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_prefer_method;
    if (obj_prefer_method == NULL) {
        arg_prefer_method = 2;
    } else if (unlikely(!PyBool_Check(obj_prefer_method))) {
        CPy_TypeError("bool", obj_prefer_method); goto fail;
    } else
        arg_prefer_method = obj_prefer_method == Py_True;
    PyObject *retval = CPyDef_class_ir___ClassIR___get_method(arg_self, arg_name, arg_prefer_method);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "get_method", 299, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___has_method_decl(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "has_method_decl", "ClassIR", "mro", 304, CPyStatic_class_ir___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "has_method_decl", 304, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_ir = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'method_decls' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method_decl", 304, CPyStatic_class_ir___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method_decl", 304, CPyStatic_class_ir___globals);
        goto CPyL12;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL13;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r0 = 1;
    goto CPyL9;
CPyL8: ;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL2;
CPyL9: ;
    return cpy_r_r0;
CPyL10: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_class_ir___ClassIR___has_method_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:has_method_decl", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___has_method_decl(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "has_method_decl", 303, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___has_no_subclasses(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "has_no_subclasses", "ClassIR", "children", 307, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_no_subclasses", 307, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_r2 = PyObject_RichCompare(cpy_r_r0, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_no_subclasses", 307, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r3 = 2;
    } else
        cpy_r_r3 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "has_no_subclasses", 307, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL7;
CPyL6: ;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_allow_interpreted_subclasses;
    cpy_r_r6 = cpy_r_r5 ^ 1;
    cpy_r_r4 = cpy_r_r6;
CPyL7: ;
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
}

PyObject *CPyPy_class_ir___ClassIR___has_no_subclasses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":has_no_subclasses", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___has_no_subclasses(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "has_no_subclasses", 306, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___subclasses(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_child;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_child_subs;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "subclasses", "ClassIR", "children", 315, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_allow_interpreted_subclasses;
    if (!cpy_r_r3) goto CPyL4;
CPyL3: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "subclasses", "ClassIR", "children", 317, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "subclasses", 317, CPyStatic_class_ir___globals, "list", cpy_r_r5);
        goto CPyL23;
    }
    cpy_r_r7 = PySet_New(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "subclasses", 317, CPyStatic_class_ir___globals);
        goto CPyL23;
    }
    cpy_r_result = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "subclasses", "ClassIR", "children", 318, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "subclasses", 318, CPyStatic_class_ir___globals, "list", cpy_r_r8);
        goto CPyL24;
    }
    cpy_r_r10 = 0;
CPyL10: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL25;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_class_ir___ClassIR))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "subclasses", 318, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r15);
        goto CPyL26;
    }
    cpy_r_child = cpy_r_r16;
    cpy_r_r17 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_child)->_children;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "subclasses", "ClassIR", "children", 319, CPyStatic_class_ir___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL28;
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r20 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "subclasses", 319, CPyStatic_class_ir___globals, "list", cpy_r_r17);
        goto CPyL27;
    }
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (!cpy_r_r24) goto CPyL29;
    cpy_r_r25 = CPyDef_class_ir___ClassIR___subclasses(cpy_r_child);
    CPy_DECREF(cpy_r_child);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "subclasses", 320, CPyStatic_class_ir___globals);
        goto CPyL26;
    }
    cpy_r_child_subs = cpy_r_r25;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_child_subs == cpy_r_r26;
    if (cpy_r_r27) {
        goto CPyL30;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL19: ;
    if (likely(cpy_r_child_subs != Py_None))
        cpy_r_r29 = cpy_r_child_subs;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "subclasses", 323, CPyStatic_class_ir___globals, "set", cpy_r_child_subs);
        goto CPyL26;
    }
    cpy_r_r30 = _PySet_Update(cpy_r_result, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "subclasses", 323, CPyStatic_class_ir___globals);
        goto CPyL26;
    }
CPyL21: ;
    cpy_r_r32 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r32;
    goto CPyL10;
CPyL22: ;
    return cpy_r_result;
CPyL23: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL24: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r9);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_child);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_child);
    CPy_DECREF(cpy_r_r17);
    goto CPyL21;
CPyL29: ;
    CPy_DECREF(cpy_r_child);
    goto CPyL21;
CPyL30: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_child_subs);
    goto CPyL18;
}

PyObject *CPyPy_class_ir___ClassIR___subclasses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":subclasses", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___subclasses(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "subclasses", 309, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "__get__", -1, CPyStatic_class_ir___globals);
    return NULL;
}

tuple_T2IO CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_c) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
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
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2IO cpy_r_r16;
    tuple_T2IO cpy_r_r17;
    cpy_r_r0 = ((mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "<lambda>", "__mypyc_lambda__0_concrete_subclasses_ClassIR_obj", "__mypyc_env__", 338, CPyStatic_class_ir___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL11;
CPyL1: ;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c)->_children;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "<lambda>", "ClassIR", "children", 338, CPyStatic_class_ir___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL12;
    CPy_INCREF(cpy_r_r1);
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "<lambda>", 338, CPyStatic_class_ir___globals, "list", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL12;
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r9 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "<lambda>", 338, CPyStatic_class_ir___globals, "list", cpy_r_r1);
        goto CPyL10;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL9;
CPyL7: ;
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<lambda>", 338, CPyStatic_class_ir___globals);
        goto CPyL10;
    }
    cpy_r_r10 = cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c)->_name;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16.f0 = cpy_r_r14;
    cpy_r_r16.f1 = cpy_r_r15;
    CPyTagged_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_DECREF(cpy_r_r15);
    return cpy_r_r16;
CPyL10: ;
    tuple_T2IO __tmp9790 = { CPY_INT_TAG, NULL };
    cpy_r_r17 = __tmp9790;
    return cpy_r_r17;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
}

PyObject *CPyPy_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"c", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_c;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_c)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_c;
    if (likely(Py_TYPE(obj_c) == CPyType_class_ir___ClassIR))
        arg_c = obj_c;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_c); 
        goto fail;
    }
    tuple_T2IO retval = CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj_____call__(arg___mypyc_self__, arg_c);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9791 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp9791);
    PyObject *__tmp9792 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9792);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "<lambda>", 338, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___concrete_subclasses(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_subs;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_c;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_concrete;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyDef_class_ir___concrete_subclasses_ClassIR_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 326, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
    cpy_r_r1 = CPyDef_class_ir___ClassIR___subclasses(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 331, CPyStatic_class_ir___globals);
        goto CPyL22;
    }
    cpy_r_subs = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_subs == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL23;
    } else
        goto CPyL4;
CPyL3: ;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = PySet_New(NULL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals);
        goto CPyL24;
    }
    if (likely(cpy_r_subs != Py_None))
        cpy_r_r6 = cpy_r_subs;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals, "set", cpy_r_subs);
        goto CPyL25;
    }
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals);
        goto CPyL25;
    }
CPyL7: ;
    cpy_r_r8 = PyIter_Next(cpy_r_r7);
    if (cpy_r_r8 == NULL) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_class_ir___ClassIR))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r8);
        goto CPyL27;
    }
    cpy_r_c = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c)->_is_trait;
    if (!cpy_r_r10) goto CPyL11;
CPyL10: ;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL12;
CPyL11: ;
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c)->_is_abstract;
    cpy_r_r11 = cpy_r_r12;
CPyL12: ;
    cpy_r_r13 = cpy_r_r11 ^ 1;
    if (!cpy_r_r13) goto CPyL28;
    cpy_r_r14 = PySet_Add(cpy_r_r5, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals);
        goto CPyL27;
    } else
        goto CPyL7;
CPyL14: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 334, CPyStatic_class_ir___globals);
        goto CPyL25;
    }
    cpy_r_concrete = cpy_r_r5;
    cpy_r_r17 = CPyDef_class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_obj();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 338, CPyStatic_class_ir___globals);
        goto CPyL29;
    }
    if (((mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *)cpy_r_r17)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *)cpy_r_r17)->___mypyc_env__);
    }
    ((mypyc___ir___class_ir_____mypyc_lambda__0_concrete_subclasses_ClassIR_objObject *)cpy_r_r17)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 338, CPyStatic_class_ir___globals);
        goto CPyL30;
    }
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 338, CPyStatic_class_ir___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r22[2] = {cpy_r_concrete, cpy_r_r17};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, cpy_r_r24);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 338, CPyStatic_class_ir___globals);
        goto CPyL30;
    }
    CPy_DECREF(cpy_r_concrete);
    CPy_DECREF(cpy_r_r17);
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 338, CPyStatic_class_ir___globals, "list", cpy_r_r25);
        goto CPyL21;
    }
    return cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_subs);
    goto CPyL3;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_subs);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL26: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL14;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL21;
CPyL28: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL7;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_concrete);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
}

PyObject *CPyPy_class_ir___ClassIR___concrete_subclasses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":concrete_subclasses", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___concrete_subclasses(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "concrete_subclasses", 326, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___ClassIR___is_serializable(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ci;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "is_serializable", "ClassIR", "mro", 341, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "is_serializable", 341, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_ci = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ci)->__serializable;
    CPy_DECREF(cpy_r_ci);
    if (cpy_r_r9) {
        goto CPyL11;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_class_ir___ClassIR___is_serializable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_serializable", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    char retval = CPyDef_class_ir___ClassIR___is_serializable(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "is_serializable", 340, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
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
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T4CIOO cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_k;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r43;
    tuple_T2OO cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T4CIOO cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyTagged cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T4CIOO cpy_r_r84;
    CPyTagged cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_k_3;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r91;
    tuple_T2OO cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T4CIOO cpy_r_r105;
    CPyTagged cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    tuple_T2OO cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_cir;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_k_4;
    PyObject *cpy_r_m_2;
    PyObject *cpy_r_r114;
    tuple_T2OO cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T2T2OOO cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    tuple_T4CIOO cpy_r_r130;
    CPyTagged cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_k_5;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r137;
    tuple_T2OO cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    int64_t cpy_r_r156;
    CPyTagged cpy_r_r157;
    PyObject *cpy_r_r158;
    tuple_T4CIOO cpy_r_r159;
    CPyTagged cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_cir_2;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    tuple_T2OO cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyPtr cpy_r_r185;
    int64_t cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyTagged cpy_r_r188;
    CPyPtr cpy_r_r189;
    int64_t cpy_r_r190;
    CPyTagged cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_cir_3;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    CPyTagged cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    int64_t cpy_r_r201;
    PyObject *cpy_r_r202;
    CPyTagged cpy_r_r203;
    CPyPtr cpy_r_r204;
    int64_t cpy_r_r205;
    CPyTagged cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_cir_4;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    CPyTagged cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyPtr cpy_r_r215;
    int64_t cpy_r_r216;
    PyObject *cpy_r_r217;
    CPyTagged cpy_r_r218;
    CPyPtr cpy_r_r219;
    int64_t cpy_r_r220;
    CPyTagged cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_cir_5;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    CPyTagged cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    CPyPtr cpy_r_r234;
    int64_t cpy_r_r235;
    PyObject *cpy_r_r236;
    CPyTagged cpy_r_r237;
    CPyPtr cpy_r_r238;
    int64_t cpy_r_r239;
    CPyTagged cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_cir_6;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    CPyTagged cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject **cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject **cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject **cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_module_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[7752]; /* 'is_trait' */
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_trait;
    cpy_r_r6 = CPyStatics[7753]; /* 'is_ext_class' */
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_ext_class;
    cpy_r_r8 = CPyStatics[4008]; /* 'is_abstract' */
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_abstract;
    cpy_r_r10 = CPyStatics[7754]; /* 'is_generated' */
    cpy_r_r11 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_generated;
    cpy_r_r12 = CPyStatics[7755]; /* 'is_augmented' */
    cpy_r_r13 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_is_augmented;
    cpy_r_r14 = CPyStatics[7756]; /* 'inherits_python' */
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_inherits_python;
    cpy_r_r16 = CPyStatics[7757]; /* 'has_dict' */
    cpy_r_r17 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_has_dict;
    cpy_r_r18 = CPyStatics[7758]; /* 'allow_interpreted_subclasses' */
    cpy_r_r19 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_allow_interpreted_subclasses;
    cpy_r_r20 = CPyStatics[7759]; /* 'needs_getseters' */
    cpy_r_r21 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_needs_getseters;
    cpy_r_r22 = CPyStatics[7760]; /* '_serializable' */
    cpy_r_r23 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__serializable;
    cpy_r_r24 = CPyStatics[7761]; /* 'builtin_base' */
    cpy_r_r25 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_builtin_base;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[7762]; /* 'ctor' */
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_ctor;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "ctor", 358, CPyStatic_class_ir___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r27);
CPyL1: ;
    cpy_r_r28 = CPyDef_func_ir___FuncDecl___serialize(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 358, CPyStatic_class_ir___globals);
        goto CPyL136;
    }
    cpy_r_r29 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL137;
    }
    cpy_r_r31 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attributes;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "attributes", 360, CPyStatic_class_ir___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r31);
CPyL4: ;
    cpy_r_r32 = 0;
    cpy_r_r33 = PyDict_Size(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = CPyDict_GetItemsIter(cpy_r_r31);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL139;
    }
CPyL5: ;
    cpy_r_r36 = CPyDict_NextItem(cpy_r_r35, cpy_r_r32);
    cpy_r_r37 = cpy_r_r36.f1;
    cpy_r_r32 = cpy_r_r37;
    cpy_r_r38 = cpy_r_r36.f0;
    if (!cpy_r_r38) goto CPyL140;
    cpy_r_r39 = cpy_r_r36.f2;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = cpy_r_r36.f3;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r36.f2);
    CPy_DECREF(cpy_r_r36.f3);
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r41 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals, "str", cpy_r_r39);
        goto CPyL141;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_rtypes___RType)))
        cpy_r_r42 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals, "mypyc.ir.rtypes.RType", cpy_r_r40);
        goto CPyL142;
    }
    cpy_r_k = cpy_r_r41;
    cpy_r_t = cpy_r_r42;
    cpy_r_r43 = CPY_GET_METHOD(cpy_r_t, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_t); /* serialize */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL143;
    }
    cpy_r_r44.f0 = cpy_r_k;
    cpy_r_r44.f1 = cpy_r_r43;
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = PyTuple_New(2);
    if (unlikely(cpy_r_r45 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9793 = cpy_r_r44.f0;
    PyTuple_SET_ITEM(cpy_r_r45, 0, __tmp9793);
    PyObject *__tmp9794 = cpy_r_r44.f1;
    PyTuple_SET_ITEM(cpy_r_r45, 1, __tmp9794);
    cpy_r_r46 = PyList_Append(cpy_r_r30, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL144;
    }
    cpy_r_r48 = CPyDict_CheckSize(cpy_r_r31, cpy_r_r34);
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL144;
    } else
        goto CPyL5;
CPyL11: ;
    cpy_r_r49 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 360, CPyStatic_class_ir___globals);
        goto CPyL138;
    }
    cpy_r_r50 = CPyStatics[7763]; /* 'method_decls' */
    cpy_r_r51 = PyList_New(0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals);
        goto CPyL138;
    }
    cpy_r_r52 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_method_decls;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "method_decls", 365, CPyStatic_class_ir___globals);
        goto CPyL145;
    }
    CPy_INCREF(cpy_r_r52);
CPyL14: ;
    cpy_r_r53 = 0;
    cpy_r_r54 = PyDict_Size(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = CPyDict_GetItemsIter(cpy_r_r52);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals);
        goto CPyL146;
    }
CPyL15: ;
    cpy_r_r57 = CPyDict_NextItem(cpy_r_r56, cpy_r_r53);
    cpy_r_r58 = cpy_r_r57.f1;
    cpy_r_r53 = cpy_r_r58;
    cpy_r_r59 = cpy_r_r57.f0;
    if (!cpy_r_r59) goto CPyL147;
    cpy_r_r60 = cpy_r_r57.f2;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r57.f3;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r57.f2);
    CPy_DECREF(cpy_r_r57.f3);
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r62 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals, "str", cpy_r_r60);
        goto CPyL148;
    }
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_func_ir___FuncDecl))
        cpy_r_r63 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r61);
        goto CPyL149;
    }
    cpy_r_k_2 = cpy_r_r62;
    cpy_r_d = cpy_r_r63;
    cpy_r_r64 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_methods;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "methods", 364, CPyStatic_class_ir___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r64);
CPyL19: ;
    cpy_r_r65 = PyDict_Contains(cpy_r_r64, cpy_r_k_2);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 364, CPyStatic_class_ir___globals);
        goto CPyL150;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL23;
    cpy_r_r68 = CPY_GET_ATTR(cpy_r_d, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 364, CPyStatic_class_ir___globals);
        goto CPyL151;
    }
CPyL22: ;
    cpy_r_r69 = cpy_r_r68;
    goto CPyL25;
CPyL23: ;
    cpy_r_r70 = CPyDef_func_ir___FuncDecl___serialize(cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 364, CPyStatic_class_ir___globals);
        goto CPyL151;
    }
    cpy_r_r69 = cpy_r_r70;
CPyL25: ;
    cpy_r_r71.f0 = cpy_r_k_2;
    cpy_r_r71.f1 = cpy_r_r69;
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r72 = PyTuple_New(2);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9795 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp9795);
    PyObject *__tmp9796 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp9796);
    cpy_r_r73 = PyList_Append(cpy_r_r51, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals);
        goto CPyL152;
    }
    cpy_r_r75 = CPyDict_CheckSize(cpy_r_r52, cpy_r_r55);
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals);
        goto CPyL152;
    } else
        goto CPyL15;
CPyL27: ;
    cpy_r_r76 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 363, CPyStatic_class_ir___globals);
        goto CPyL145;
    }
    cpy_r_r77 = CPyStatics[4738]; /* 'methods' */
    cpy_r_r78 = PyList_New(0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL145;
    }
    cpy_r_r79 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_methods;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "methods", 368, CPyStatic_class_ir___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r79);
CPyL30: ;
    cpy_r_r80 = 0;
    cpy_r_r81 = PyDict_Size(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = CPyDict_GetItemsIter(cpy_r_r79);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL154;
    }
CPyL31: ;
    cpy_r_r84 = CPyDict_NextItem(cpy_r_r83, cpy_r_r80);
    cpy_r_r85 = cpy_r_r84.f1;
    cpy_r_r80 = cpy_r_r85;
    cpy_r_r86 = cpy_r_r84.f0;
    if (!cpy_r_r86) goto CPyL155;
    cpy_r_r87 = cpy_r_r84.f2;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = cpy_r_r84.f3;
    CPy_INCREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r84.f2);
    CPy_DECREF(cpy_r_r84.f3);
    if (likely(PyUnicode_Check(cpy_r_r87)))
        cpy_r_r89 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals, "str", cpy_r_r87);
        goto CPyL156;
    }
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_func_ir___FuncIR))
        cpy_r_r90 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r88);
        goto CPyL157;
    }
    cpy_r_k_3 = cpy_r_r89;
    cpy_r_m = cpy_r_r90;
    cpy_r_r91 = CPY_GET_ATTR(cpy_r_m, CPyType_func_ir___FuncIR, 8, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_m);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL158;
    }
CPyL35: ;
    cpy_r_r92.f0 = cpy_r_k_3;
    cpy_r_r92.f1 = cpy_r_r91;
    CPy_INCREF(cpy_r_r92.f0);
    CPy_INCREF(cpy_r_r92.f1);
    CPy_DECREF(cpy_r_k_3);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = PyTuple_New(2);
    if (unlikely(cpy_r_r93 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9797 = cpy_r_r92.f0;
    PyTuple_SET_ITEM(cpy_r_r93, 0, __tmp9797);
    PyObject *__tmp9798 = cpy_r_r92.f1;
    PyTuple_SET_ITEM(cpy_r_r93, 1, __tmp9798);
    cpy_r_r94 = PyList_Append(cpy_r_r78, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL159;
    }
    cpy_r_r96 = CPyDict_CheckSize(cpy_r_r79, cpy_r_r82);
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL159;
    } else
        goto CPyL31;
CPyL37: ;
    cpy_r_r97 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 368, CPyStatic_class_ir___globals);
        goto CPyL153;
    }
    cpy_r_r98 = CPyStatics[7764]; /* 'glue_methods' */
    cpy_r_r99 = PyList_New(0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL153;
    }
    cpy_r_r100 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_glue_methods;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "glue_methods", 370, CPyStatic_class_ir___globals);
        goto CPyL160;
    }
    CPy_INCREF(cpy_r_r100);
CPyL40: ;
    cpy_r_r101 = 0;
    cpy_r_r102 = PyDict_Size(cpy_r_r100);
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = CPyDict_GetItemsIter(cpy_r_r100);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL161;
    }
CPyL41: ;
    cpy_r_r105 = CPyDict_NextItem(cpy_r_r104, cpy_r_r101);
    cpy_r_r106 = cpy_r_r105.f1;
    cpy_r_r101 = cpy_r_r106;
    cpy_r_r107 = cpy_r_r105.f0;
    if (!cpy_r_r107) goto CPyL162;
    cpy_r_r108 = cpy_r_r105.f2;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = cpy_r_r105.f3;
    CPy_INCREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r105.f2);
    CPy_DECREF(cpy_r_r105.f3);
    PyObject *__tmp9799;
    if (unlikely(!(PyTuple_Check(cpy_r_r108) && PyTuple_GET_SIZE(cpy_r_r108) == 2))) {
        __tmp9799 = NULL;
        goto __LL9800;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r108, 0)) == CPyType_class_ir___ClassIR))
        __tmp9799 = PyTuple_GET_ITEM(cpy_r_r108, 0);
    else {
        __tmp9799 = NULL;
    }
    if (__tmp9799 == NULL) goto __LL9800;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r108, 1))))
        __tmp9799 = PyTuple_GET_ITEM(cpy_r_r108, 1);
    else {
        __tmp9799 = NULL;
    }
    if (__tmp9799 == NULL) goto __LL9800;
    __tmp9799 = cpy_r_r108;
__LL9800: ;
    if (unlikely(__tmp9799 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.class_ir.ClassIR, str]", cpy_r_r108); cpy_r_r110 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9801 = PyTuple_GET_ITEM(cpy_r_r108, 0);
        CPy_INCREF(__tmp9801);
        PyObject *__tmp9802;
        if (likely(Py_TYPE(__tmp9801) == CPyType_class_ir___ClassIR))
            __tmp9802 = __tmp9801;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9801); 
            __tmp9802 = NULL;
        }
        cpy_r_r110.f0 = __tmp9802;
        PyObject *__tmp9803 = PyTuple_GET_ITEM(cpy_r_r108, 1);
        CPy_INCREF(__tmp9803);
        PyObject *__tmp9804;
        if (likely(PyUnicode_Check(__tmp9803)))
            __tmp9804 = __tmp9803;
        else {
            CPy_TypeError("str", __tmp9803); 
            __tmp9804 = NULL;
        }
        cpy_r_r110.f1 = __tmp9804;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL163;
    }
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_func_ir___FuncIR))
        cpy_r_r111 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r109);
        goto CPyL164;
    }
    cpy_r_r112 = cpy_r_r110.f0;
    CPy_INCREF(cpy_r_r112);
    cpy_r_cir = cpy_r_r112;
    cpy_r_r113 = cpy_r_r110.f1;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r110.f0);
    CPy_DECREF(cpy_r_r110.f1);
    cpy_r_k_4 = cpy_r_r113;
    cpy_r_m_2 = cpy_r_r111;
    cpy_r_r114 = CPY_GET_ATTR(cpy_r_cir, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 370, CPyStatic_class_ir___globals);
        goto CPyL165;
    }
CPyL45: ;
    cpy_r_r115.f0 = cpy_r_r114;
    cpy_r_r115.f1 = cpy_r_k_4;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_k_4);
    cpy_r_r116 = CPY_GET_ATTR(cpy_r_m_2, CPyType_func_ir___FuncIR, 8, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_m_2);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 370, CPyStatic_class_ir___globals);
        goto CPyL166;
    }
CPyL46: ;
    cpy_r_r117.f0 = cpy_r_r115;
    cpy_r_r117.f1 = cpy_r_r116;
    CPy_INCREF(cpy_r_r117.f0.f0);
    CPy_INCREF(cpy_r_r117.f0.f1);
    CPy_INCREF(cpy_r_r117.f1);
    CPy_DECREF(cpy_r_r115.f0);
    CPy_DECREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = PyTuple_New(2);
    if (unlikely(cpy_r_r118 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9805 = PyTuple_New(2);
    if (unlikely(__tmp9805 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9806 = cpy_r_r117.f0.f0;
    PyTuple_SET_ITEM(__tmp9805, 0, __tmp9806);
    PyObject *__tmp9807 = cpy_r_r117.f0.f1;
    PyTuple_SET_ITEM(__tmp9805, 1, __tmp9807);
    PyTuple_SET_ITEM(cpy_r_r118, 0, __tmp9805);
    PyObject *__tmp9808 = cpy_r_r117.f1;
    PyTuple_SET_ITEM(cpy_r_r118, 1, __tmp9808);
    cpy_r_r119 = PyList_Append(cpy_r_r99, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL167;
    }
    cpy_r_r121 = CPyDict_CheckSize(cpy_r_r100, cpy_r_r103);
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL167;
    } else
        goto CPyL41;
CPyL48: ;
    cpy_r_r122 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 369, CPyStatic_class_ir___globals);
        goto CPyL160;
    }
    cpy_r_r123 = CPyStatics[7765]; /* 'property_types' */
    cpy_r_r124 = PyList_New(0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL160;
    }
    cpy_r_r125 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_property_types;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "property_types", 374, CPyStatic_class_ir___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r125);
CPyL51: ;
    cpy_r_r126 = 0;
    cpy_r_r127 = PyDict_Size(cpy_r_r125);
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = CPyDict_GetItemsIter(cpy_r_r125);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL169;
    }
CPyL52: ;
    cpy_r_r130 = CPyDict_NextItem(cpy_r_r129, cpy_r_r126);
    cpy_r_r131 = cpy_r_r130.f1;
    cpy_r_r126 = cpy_r_r131;
    cpy_r_r132 = cpy_r_r130.f0;
    if (!cpy_r_r132) goto CPyL170;
    cpy_r_r133 = cpy_r_r130.f2;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = cpy_r_r130.f3;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r130.f2);
    CPy_DECREF(cpy_r_r130.f3);
    if (likely(PyUnicode_Check(cpy_r_r133)))
        cpy_r_r135 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals, "str", cpy_r_r133);
        goto CPyL171;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r134, CPyType_rtypes___RType)))
        cpy_r_r136 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals, "mypyc.ir.rtypes.RType", cpy_r_r134);
        goto CPyL172;
    }
    cpy_r_k_5 = cpy_r_r135;
    cpy_r_t_2 = cpy_r_r136;
    cpy_r_r137 = CPY_GET_METHOD(cpy_r_t_2, CPyType_rtypes___RType, 4, mypyc___ir___rtypes___RTypeObject, PyObject * (*)(PyObject *))(cpy_r_t_2); /* serialize */
    CPy_DECREF(cpy_r_t_2);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL173;
    }
    cpy_r_r138.f0 = cpy_r_k_5;
    cpy_r_r138.f1 = cpy_r_r137;
    CPy_INCREF(cpy_r_r138.f0);
    CPy_INCREF(cpy_r_r138.f1);
    CPy_DECREF(cpy_r_k_5);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = PyTuple_New(2);
    if (unlikely(cpy_r_r139 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9809 = cpy_r_r138.f0;
    PyTuple_SET_ITEM(cpy_r_r139, 0, __tmp9809);
    PyObject *__tmp9810 = cpy_r_r138.f1;
    PyTuple_SET_ITEM(cpy_r_r139, 1, __tmp9810);
    cpy_r_r140 = PyList_Append(cpy_r_r124, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL174;
    }
    cpy_r_r142 = CPyDict_CheckSize(cpy_r_r125, cpy_r_r128);
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL174;
    } else
        goto CPyL52;
CPyL58: ;
    cpy_r_r143 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 374, CPyStatic_class_ir___globals);
        goto CPyL168;
    }
    cpy_r_r144 = CPyStatics[7766]; /* 'properties' */
    cpy_r_r145 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_properties;
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "properties", 375, CPyStatic_class_ir___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r145);
CPyL60: ;
    cpy_r_r146 = PySequence_List(cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 375, CPyStatic_class_ir___globals);
        goto CPyL168;
    }
    cpy_r_r147 = CPyStatics[7767]; /* 'vtable' */
    cpy_r_r148 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable;
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "vtable", 376, CPyStatic_class_ir___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r148);
CPyL62: ;
    cpy_r_r149 = CPyStatics[7768]; /* 'vtable_entries' */
    cpy_r_r150 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_vtable_entries;
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "vtable_entries", 377, CPyStatic_class_ir___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r150);
CPyL63: ;
    cpy_r_r151 = CPyDef_class_ir___serialize_vtable(cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 377, CPyStatic_class_ir___globals);
        goto CPyL176;
    }
    cpy_r_r152 = CPyStatics[7769]; /* 'trait_vtables' */
    cpy_r_r153 = PyList_New(0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals);
        goto CPyL177;
    }
    cpy_r_r154 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_trait_vtables;
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "trait_vtables", 379, CPyStatic_class_ir___globals);
        goto CPyL178;
    }
    CPy_INCREF(cpy_r_r154);
CPyL66: ;
    cpy_r_r155 = 0;
    cpy_r_r156 = PyDict_Size(cpy_r_r154);
    cpy_r_r157 = cpy_r_r156 << 1;
    cpy_r_r158 = CPyDict_GetItemsIter(cpy_r_r154);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals);
        goto CPyL179;
    }
CPyL67: ;
    cpy_r_r159 = CPyDict_NextItem(cpy_r_r158, cpy_r_r155);
    cpy_r_r160 = cpy_r_r159.f1;
    cpy_r_r155 = cpy_r_r160;
    cpy_r_r161 = cpy_r_r159.f0;
    if (!cpy_r_r161) goto CPyL180;
    cpy_r_r162 = cpy_r_r159.f2;
    CPy_INCREF(cpy_r_r162);
    cpy_r_r163 = cpy_r_r159.f3;
    CPy_INCREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r159.f2);
    CPy_DECREF(cpy_r_r159.f3);
    if (likely(Py_TYPE(cpy_r_r162) == CPyType_class_ir___ClassIR))
        cpy_r_r164 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r162);
        goto CPyL181;
    }
    if (likely(PyList_Check(cpy_r_r163)))
        cpy_r_r165 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals, "list", cpy_r_r163);
        goto CPyL182;
    }
    cpy_r_cir_2 = cpy_r_r164;
    cpy_r_v = cpy_r_r165;
    cpy_r_r166 = CPY_GET_ATTR(cpy_r_cir_2, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir_2);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 379, CPyStatic_class_ir___globals);
        goto CPyL183;
    }
CPyL71: ;
    cpy_r_r167 = CPyDef_class_ir___serialize_vtable(cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 379, CPyStatic_class_ir___globals);
        goto CPyL184;
    }
    cpy_r_r168.f0 = cpy_r_r166;
    cpy_r_r168.f1 = cpy_r_r167;
    CPy_INCREF(cpy_r_r168.f0);
    CPy_INCREF(cpy_r_r168.f1);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r169 = PyTuple_New(2);
    if (unlikely(cpy_r_r169 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9811 = cpy_r_r168.f0;
    PyTuple_SET_ITEM(cpy_r_r169, 0, __tmp9811);
    PyObject *__tmp9812 = cpy_r_r168.f1;
    PyTuple_SET_ITEM(cpy_r_r169, 1, __tmp9812);
    cpy_r_r170 = PyList_Append(cpy_r_r153, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals);
        goto CPyL185;
    }
    cpy_r_r172 = CPyDict_CheckSize(cpy_r_r154, cpy_r_r157);
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals);
        goto CPyL185;
    } else
        goto CPyL67;
CPyL74: ;
    cpy_r_r173 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 378, CPyStatic_class_ir___globals);
        goto CPyL178;
    }
    cpy_r_r174 = CPyStatics[3966]; /* 'base' */
    cpy_r_r175 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base;
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "base", 382, CPyStatic_class_ir___globals);
        goto CPyL178;
    }
    CPy_INCREF(cpy_r_r175);
CPyL76: ;
    cpy_r_r176 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r177 = cpy_r_r175 != cpy_r_r176;
    CPy_DECREF(cpy_r_r175);
    if (!cpy_r_r177) goto CPyL81;
    cpy_r_r178 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "base", 382, CPyStatic_class_ir___globals);
        goto CPyL178;
    }
    CPy_INCREF(cpy_r_r178);
CPyL78: ;
    if (likely(cpy_r_r178 != Py_None))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 382, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r178);
        goto CPyL178;
    }
    cpy_r_r180 = CPY_GET_ATTR(cpy_r_r179, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 382, CPyStatic_class_ir___globals);
        goto CPyL178;
    }
CPyL80: ;
    cpy_r_r181 = cpy_r_r180;
    goto CPyL82;
CPyL81: ;
    cpy_r_r182 = Py_None;
    CPy_INCREF(cpy_r_r182);
    cpy_r_r181 = cpy_r_r182;
CPyL82: ;
    cpy_r_r183 = CPyStatics[7770]; /* 'traits' */
    cpy_r_r184 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_traits;
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "traits", 383, CPyStatic_class_ir___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r184);
CPyL83: ;
    cpy_r_r185 = (CPyPtr)&((PyVarObject *)cpy_r_r184)->ob_size;
    cpy_r_r186 = *(int64_t *)cpy_r_r185;
    cpy_r_r187 = PyList_New(cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 383, CPyStatic_class_ir___globals);
        goto CPyL187;
    }
    cpy_r_r188 = 0;
CPyL85: ;
    cpy_r_r189 = (CPyPtr)&((PyVarObject *)cpy_r_r184)->ob_size;
    cpy_r_r190 = *(int64_t *)cpy_r_r189;
    cpy_r_r191 = cpy_r_r190 << 1;
    cpy_r_r192 = (Py_ssize_t)cpy_r_r188 < (Py_ssize_t)cpy_r_r191;
    if (!cpy_r_r192) goto CPyL188;
    cpy_r_r193 = CPyList_GetItemUnsafe(cpy_r_r184, cpy_r_r188);
    if (likely(Py_TYPE(cpy_r_r193) == CPyType_class_ir___ClassIR))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 383, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r193);
        goto CPyL189;
    }
    cpy_r_cir_3 = cpy_r_r194;
    cpy_r_r195 = CPY_GET_ATTR(cpy_r_cir_3, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir_3);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 383, CPyStatic_class_ir___globals);
        goto CPyL189;
    }
CPyL88: ;
    cpy_r_r196 = CPyList_SetItemUnsafe(cpy_r_r187, cpy_r_r188, cpy_r_r195);
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 383, CPyStatic_class_ir___globals);
        goto CPyL189;
    }
    cpy_r_r197 = cpy_r_r188 + 2;
    cpy_r_r188 = cpy_r_r197;
    goto CPyL85;
CPyL90: ;
    cpy_r_r198 = CPyStatics[3110]; /* 'mro' */
    cpy_r_r199 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_mro;
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "mro", 384, CPyStatic_class_ir___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r199);
CPyL91: ;
    cpy_r_r200 = (CPyPtr)&((PyVarObject *)cpy_r_r199)->ob_size;
    cpy_r_r201 = *(int64_t *)cpy_r_r200;
    cpy_r_r202 = PyList_New(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 384, CPyStatic_class_ir___globals);
        goto CPyL191;
    }
    cpy_r_r203 = 0;
CPyL93: ;
    cpy_r_r204 = (CPyPtr)&((PyVarObject *)cpy_r_r199)->ob_size;
    cpy_r_r205 = *(int64_t *)cpy_r_r204;
    cpy_r_r206 = cpy_r_r205 << 1;
    cpy_r_r207 = (Py_ssize_t)cpy_r_r203 < (Py_ssize_t)cpy_r_r206;
    if (!cpy_r_r207) goto CPyL192;
    cpy_r_r208 = CPyList_GetItemUnsafe(cpy_r_r199, cpy_r_r203);
    if (likely(Py_TYPE(cpy_r_r208) == CPyType_class_ir___ClassIR))
        cpy_r_r209 = cpy_r_r208;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 384, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r208);
        goto CPyL193;
    }
    cpy_r_cir_4 = cpy_r_r209;
    cpy_r_r210 = CPY_GET_ATTR(cpy_r_cir_4, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir_4);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 384, CPyStatic_class_ir___globals);
        goto CPyL193;
    }
CPyL96: ;
    cpy_r_r211 = CPyList_SetItemUnsafe(cpy_r_r202, cpy_r_r203, cpy_r_r210);
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 384, CPyStatic_class_ir___globals);
        goto CPyL193;
    }
    cpy_r_r212 = cpy_r_r203 + 2;
    cpy_r_r203 = cpy_r_r212;
    goto CPyL93;
CPyL98: ;
    cpy_r_r213 = CPyStatics[7771]; /* 'base_mro' */
    cpy_r_r214 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_base_mro;
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "base_mro", 385, CPyStatic_class_ir___globals);
        goto CPyL194;
    }
    CPy_INCREF(cpy_r_r214);
CPyL99: ;
    cpy_r_r215 = (CPyPtr)&((PyVarObject *)cpy_r_r214)->ob_size;
    cpy_r_r216 = *(int64_t *)cpy_r_r215;
    cpy_r_r217 = PyList_New(cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 385, CPyStatic_class_ir___globals);
        goto CPyL195;
    }
    cpy_r_r218 = 0;
CPyL101: ;
    cpy_r_r219 = (CPyPtr)&((PyVarObject *)cpy_r_r214)->ob_size;
    cpy_r_r220 = *(int64_t *)cpy_r_r219;
    cpy_r_r221 = cpy_r_r220 << 1;
    cpy_r_r222 = (Py_ssize_t)cpy_r_r218 < (Py_ssize_t)cpy_r_r221;
    if (!cpy_r_r222) goto CPyL196;
    cpy_r_r223 = CPyList_GetItemUnsafe(cpy_r_r214, cpy_r_r218);
    if (likely(Py_TYPE(cpy_r_r223) == CPyType_class_ir___ClassIR))
        cpy_r_r224 = cpy_r_r223;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 385, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r223);
        goto CPyL197;
    }
    cpy_r_cir_5 = cpy_r_r224;
    cpy_r_r225 = CPY_GET_ATTR(cpy_r_cir_5, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir_5);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 385, CPyStatic_class_ir___globals);
        goto CPyL197;
    }
CPyL104: ;
    cpy_r_r226 = CPyList_SetItemUnsafe(cpy_r_r217, cpy_r_r218, cpy_r_r225);
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 385, CPyStatic_class_ir___globals);
        goto CPyL197;
    }
    cpy_r_r227 = cpy_r_r218 + 2;
    cpy_r_r218 = cpy_r_r227;
    goto CPyL101;
CPyL106: ;
    cpy_r_r228 = CPyStatics[7772]; /* 'children' */
    cpy_r_r229 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "children", 387, CPyStatic_class_ir___globals);
        goto CPyL198;
    }
CPyL107: ;
    cpy_r_r230 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r231 = cpy_r_r229 != cpy_r_r230;
    if (!cpy_r_r231) goto CPyL118;
    cpy_r_r232 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_children;
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "children", 386, CPyStatic_class_ir___globals);
        goto CPyL198;
    }
    CPy_INCREF(cpy_r_r232);
CPyL109: ;
    if (likely(cpy_r_r232 != Py_None))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 386, CPyStatic_class_ir___globals, "list", cpy_r_r232);
        goto CPyL198;
    }
    cpy_r_r234 = (CPyPtr)&((PyVarObject *)cpy_r_r233)->ob_size;
    cpy_r_r235 = *(int64_t *)cpy_r_r234;
    cpy_r_r236 = PyList_New(cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 386, CPyStatic_class_ir___globals);
        goto CPyL199;
    }
    cpy_r_r237 = 0;
CPyL112: ;
    cpy_r_r238 = (CPyPtr)&((PyVarObject *)cpy_r_r233)->ob_size;
    cpy_r_r239 = *(int64_t *)cpy_r_r238;
    cpy_r_r240 = cpy_r_r239 << 1;
    cpy_r_r241 = (Py_ssize_t)cpy_r_r237 < (Py_ssize_t)cpy_r_r240;
    if (!cpy_r_r241) goto CPyL200;
    cpy_r_r242 = CPyList_GetItemUnsafe(cpy_r_r233, cpy_r_r237);
    if (likely(Py_TYPE(cpy_r_r242) == CPyType_class_ir___ClassIR))
        cpy_r_r243 = cpy_r_r242;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 386, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r242);
        goto CPyL201;
    }
    cpy_r_cir_6 = cpy_r_r243;
    cpy_r_r244 = CPY_GET_ATTR(cpy_r_cir_6, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cir_6);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 386, CPyStatic_class_ir___globals);
        goto CPyL201;
    }
CPyL115: ;
    cpy_r_r245 = CPyList_SetItemUnsafe(cpy_r_r236, cpy_r_r237, cpy_r_r244);
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 386, CPyStatic_class_ir___globals);
        goto CPyL201;
    }
    cpy_r_r246 = cpy_r_r237 + 2;
    cpy_r_r237 = cpy_r_r246;
    goto CPyL112;
CPyL117: ;
    cpy_r_r247 = cpy_r_r236;
    goto CPyL119;
CPyL118: ;
    cpy_r_r248 = Py_None;
    CPy_INCREF(cpy_r_r248);
    cpy_r_r247 = cpy_r_r248;
CPyL119: ;
    cpy_r_r249 = CPyStatics[7773]; /* 'deletable' */
    cpy_r_r250 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_deletable;
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "deletable", 389, CPyStatic_class_ir___globals);
        goto CPyL202;
    }
    CPy_INCREF(cpy_r_r250);
CPyL120: ;
    cpy_r_r251 = CPyStatics[7774]; /* 'attrs_with_defaults' */
    cpy_r_r252 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_attrs_with_defaults;
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "attrs_with_defaults", 390, CPyStatic_class_ir___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r252);
CPyL121: ;
    cpy_r_r253 = CPyModule_builtins;
    cpy_r_r254 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r255 = CPyObject_GetAttr(cpy_r_r253, cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 390, CPyStatic_class_ir___globals);
        goto CPyL204;
    }
    PyObject *cpy_r_r256[1] = {cpy_r_r252};
    cpy_r_r257 = (PyObject **)&cpy_r_r256;
    cpy_r_r258 = _PyObject_Vectorcall(cpy_r_r255, cpy_r_r257, 1, 0);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 390, CPyStatic_class_ir___globals);
        goto CPyL204;
    }
    CPy_DECREF(cpy_r_r252);
    if (likely(PyList_Check(cpy_r_r258)))
        cpy_r_r259 = cpy_r_r258;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 390, CPyStatic_class_ir___globals, "list", cpy_r_r258);
        goto CPyL203;
    }
    cpy_r_r260 = CPyStatics[7775]; /* '_always_initialized_attrs' */
    cpy_r_r261 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__always_initialized_attrs;
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "_always_initialized_attrs", 391, CPyStatic_class_ir___globals);
        goto CPyL205;
    }
    CPy_INCREF(cpy_r_r261);
CPyL125: ;
    cpy_r_r262 = CPyModule_builtins;
    cpy_r_r263 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r264 = CPyObject_GetAttr(cpy_r_r262, cpy_r_r263);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 391, CPyStatic_class_ir___globals);
        goto CPyL206;
    }
    PyObject *cpy_r_r265[1] = {cpy_r_r261};
    cpy_r_r266 = (PyObject **)&cpy_r_r265;
    cpy_r_r267 = _PyObject_Vectorcall(cpy_r_r264, cpy_r_r266, 1, 0);
    CPy_DECREF(cpy_r_r264);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 391, CPyStatic_class_ir___globals);
        goto CPyL206;
    }
    CPy_DECREF(cpy_r_r261);
    if (likely(PyList_Check(cpy_r_r267)))
        cpy_r_r268 = cpy_r_r267;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 391, CPyStatic_class_ir___globals, "list", cpy_r_r267);
        goto CPyL205;
    }
    cpy_r_r269 = CPyStatics[7776]; /* '_sometimes_initialized_attrs' */
    cpy_r_r270 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->__sometimes_initialized_attrs;
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "_sometimes_initialized_attrs", 392, CPyStatic_class_ir___globals);
        goto CPyL207;
    }
    CPy_INCREF(cpy_r_r270);
CPyL129: ;
    cpy_r_r271 = CPyModule_builtins;
    cpy_r_r272 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r273 = CPyObject_GetAttr(cpy_r_r271, cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 392, CPyStatic_class_ir___globals);
        goto CPyL208;
    }
    PyObject *cpy_r_r274[1] = {cpy_r_r270};
    cpy_r_r275 = (PyObject **)&cpy_r_r274;
    cpy_r_r276 = _PyObject_Vectorcall(cpy_r_r273, cpy_r_r275, 1, 0);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 392, CPyStatic_class_ir___globals);
        goto CPyL208;
    }
    CPy_DECREF(cpy_r_r270);
    if (likely(PyList_Check(cpy_r_r276)))
        cpy_r_r277 = cpy_r_r276;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize", 392, CPyStatic_class_ir___globals, "list", cpy_r_r276);
        goto CPyL207;
    }
    cpy_r_r278 = CPyStatics[7777]; /* 'init_self_leak' */
    cpy_r_r279 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_self)->_init_self_leak;
    if (unlikely(cpy_r_r279 == 2)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "serialize", "ClassIR", "init_self_leak", 393, CPyStatic_class_ir___globals);
        goto CPyL209;
    }
CPyL133: ;
    cpy_r_r280 = cpy_r_r5 ? Py_True : Py_False;
    cpy_r_r281 = cpy_r_r7 ? Py_True : Py_False;
    cpy_r_r282 = cpy_r_r9 ? Py_True : Py_False;
    cpy_r_r283 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r284 = cpy_r_r13 ? Py_True : Py_False;
    cpy_r_r285 = cpy_r_r15 ? Py_True : Py_False;
    cpy_r_r286 = cpy_r_r17 ? Py_True : Py_False;
    cpy_r_r287 = cpy_r_r19 ? Py_True : Py_False;
    cpy_r_r288 = cpy_r_r21 ? Py_True : Py_False;
    cpy_r_r289 = cpy_r_r23 ? Py_True : Py_False;
    cpy_r_r290 = cpy_r_r279 ? Py_True : Py_False;
    cpy_r_r291 = CPyDict_Build(33, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r280, cpy_r_r6, cpy_r_r281, cpy_r_r8, cpy_r_r282, cpy_r_r10, cpy_r_r283, cpy_r_r12, cpy_r_r284, cpy_r_r14, cpy_r_r285, cpy_r_r16, cpy_r_r286, cpy_r_r18, cpy_r_r287, cpy_r_r20, cpy_r_r288, cpy_r_r22, cpy_r_r289, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r50, cpy_r_r51, cpy_r_r77, cpy_r_r78, cpy_r_r98, cpy_r_r99, cpy_r_r123, cpy_r_r124, cpy_r_r144, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r174, cpy_r_r181, cpy_r_r183, cpy_r_r187, cpy_r_r198, cpy_r_r202, cpy_r_r213, cpy_r_r217, cpy_r_r228, cpy_r_r247, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r259, cpy_r_r260, cpy_r_r268, cpy_r_r269, cpy_r_r277, cpy_r_r278, cpy_r_r290);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r151);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r181);
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_r202);
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r247);
    CPy_DECREF(cpy_r_r250);
    CPy_DECREF(cpy_r_r259);
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r277);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 344, CPyStatic_class_ir___globals);
        goto CPyL135;
    }
    return cpy_r_r291;
CPyL135: ;
    cpy_r_r292 = NULL;
    return cpy_r_r292;
CPyL136: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    goto CPyL135;
CPyL137: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    goto CPyL135;
CPyL138: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    goto CPyL135;
CPyL139: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL135;
CPyL140: ;
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36.f2);
    CPy_DECREF(cpy_r_r36.f3);
    goto CPyL11;
CPyL141: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r40);
    goto CPyL135;
CPyL142: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r41);
    goto CPyL135;
CPyL143: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_k);
    goto CPyL135;
CPyL144: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r35);
    goto CPyL135;
CPyL145: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    goto CPyL135;
CPyL146: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL135;
CPyL147: ;
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57.f2);
    CPy_DECREF(cpy_r_r57.f3);
    goto CPyL27;
CPyL148: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r61);
    goto CPyL135;
CPyL149: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r62);
    goto CPyL135;
CPyL150: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_d);
    goto CPyL135;
CPyL151: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_k_2);
    goto CPyL135;
CPyL152: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r56);
    goto CPyL135;
CPyL153: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    goto CPyL135;
CPyL154: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    goto CPyL135;
CPyL155: ;
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84.f2);
    CPy_DECREF(cpy_r_r84.f3);
    goto CPyL37;
CPyL156: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r88);
    goto CPyL135;
CPyL157: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL135;
CPyL158: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_k_3);
    goto CPyL135;
CPyL159: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r83);
    goto CPyL135;
CPyL160: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    goto CPyL135;
CPyL161: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    goto CPyL135;
CPyL162: ;
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r105.f2);
    CPy_DECREF(cpy_r_r105.f3);
    goto CPyL48;
CPyL163: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r109);
    goto CPyL135;
CPyL164: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r110.f0);
    CPy_DecRef(cpy_r_r110.f1);
    goto CPyL135;
CPyL165: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_k_4);
    CPy_DecRef(cpy_r_m_2);
    goto CPyL135;
CPyL166: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    goto CPyL135;
CPyL167: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r104);
    goto CPyL135;
CPyL168: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    goto CPyL135;
CPyL169: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r125);
    goto CPyL135;
CPyL170: ;
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r130.f2);
    CPy_DECREF(cpy_r_r130.f3);
    goto CPyL58;
CPyL171: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r134);
    goto CPyL135;
CPyL172: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r135);
    goto CPyL135;
CPyL173: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_k_5);
    goto CPyL135;
CPyL174: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r129);
    goto CPyL135;
CPyL175: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    goto CPyL135;
CPyL176: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    goto CPyL135;
CPyL177: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    goto CPyL135;
CPyL178: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    goto CPyL135;
CPyL179: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    goto CPyL135;
CPyL180: ;
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r159.f2);
    CPy_DECREF(cpy_r_r159.f3);
    goto CPyL74;
CPyL181: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r163);
    goto CPyL135;
CPyL182: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r164);
    goto CPyL135;
CPyL183: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_v);
    goto CPyL135;
CPyL184: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r166);
    goto CPyL135;
CPyL185: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r158);
    goto CPyL135;
CPyL186: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    goto CPyL135;
CPyL187: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r184);
    goto CPyL135;
CPyL188: ;
    CPy_DECREF(cpy_r_r184);
    goto CPyL90;
CPyL189: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r184);
    CPy_DecRef(cpy_r_r187);
    goto CPyL135;
CPyL190: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    goto CPyL135;
CPyL191: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r199);
    goto CPyL135;
CPyL192: ;
    CPy_DECREF(cpy_r_r199);
    goto CPyL98;
CPyL193: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r202);
    goto CPyL135;
CPyL194: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    goto CPyL135;
CPyL195: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r214);
    goto CPyL135;
CPyL196: ;
    CPy_DECREF(cpy_r_r214);
    goto CPyL106;
CPyL197: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r214);
    CPy_DecRef(cpy_r_r217);
    goto CPyL135;
CPyL198: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    goto CPyL135;
CPyL199: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r233);
    goto CPyL135;
CPyL200: ;
    CPy_DECREF(cpy_r_r233);
    goto CPyL117;
CPyL201: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r236);
    goto CPyL135;
CPyL202: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    goto CPyL135;
CPyL203: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    goto CPyL135;
CPyL204: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r252);
    goto CPyL135;
CPyL205: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r259);
    goto CPyL135;
CPyL206: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r261);
    goto CPyL135;
CPyL207: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r268);
    goto CPyL135;
CPyL208: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r270);
    goto CPyL135;
CPyL209: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r247);
    CPy_DecRef(cpy_r_r250);
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r277);
    goto CPyL135;
}

PyObject *CPyPy_class_ir___ClassIR___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___ClassIR))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___ClassIR___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize", 343, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___ClassIR___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
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
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
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
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
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
    PyObject *cpy_r_k;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_k_3;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_k_4;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_v_3;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    tuple_T2OO cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_k_5;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_k_6;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    tuple_T2OO cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_k_7;
    PyObject *cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_v_4;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_base;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    char cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    int32_t cpy_r_r279;
    char cpy_r_r280;
    char cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_s_3;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    int32_t cpy_r_r292;
    char cpy_r_r293;
    char cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_s_4;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    int32_t cpy_r_r311;
    char cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    char cpy_r_r334;
    char cpy_r_r335;
    PyObject *cpy_r_r336;
    cpy_r_r0 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 398, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    cpy_r_r2 = CPyStatics[224]; /* '.' */
    cpy_r_r3 = PyNumber_Add(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 398, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    cpy_r_r4 = CPyStatics[2329]; /* 'name' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_data, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 398, CPyStatic_class_ir___globals);
        goto CPyL287;
    }
    cpy_r_r6 = PyNumber_Add(cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 398, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    cpy_r_fullname = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL288;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals, "dict", cpy_r_r7);
        goto CPyL288;
    }
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_fullname);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL288;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) goto CPyL14;
    cpy_r_r12 = PyObject_Str(cpy_r_fullname);
    CPy_DECREF(cpy_r_fullname);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    cpy_r_r13 = CPyStatics[5153]; /* 'Class ' */
    cpy_r_r14 = CPyStatics[7778]; /* ' not in deser class map' */
    cpy_r_r15 = CPyStr_Build(3, cpy_r_r13, cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL289;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r15};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL289;
    }
    CPy_DECREF(cpy_r_r15);
    CPy_Raise(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 399, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 400, CPyStatic_class_ir___globals);
        goto CPyL288;
    }
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 400, CPyStatic_class_ir___globals, "dict", cpy_r_r22);
        goto CPyL288;
    }
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r23, cpy_r_fullname);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_fullname);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 400, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_class_ir___ClassIR))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 400, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r24);
        goto CPyL286;
    }
    cpy_r_ir = cpy_r_r25;
    cpy_r_r26 = CPyStatics[7752]; /* 'is_trait' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_data, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 402, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 402, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait = cpy_r_r28;
    cpy_r_r30 = CPyStatics[7754]; /* 'is_generated' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_data, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 403, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 403, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_generated = cpy_r_r32;
    cpy_r_r34 = CPyStatics[4008]; /* 'is_abstract' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_data, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 404, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r35))) {
        CPy_TypeError("bool", cpy_r_r35); cpy_r_r36 = 2;
    } else
        cpy_r_r36 = cpy_r_r35 == Py_True;
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 404, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_abstract = cpy_r_r36;
    cpy_r_r38 = CPyStatics[7753]; /* 'is_ext_class' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_data, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 405, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 405, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class = cpy_r_r40;
    cpy_r_r42 = CPyStatics[7755]; /* 'is_augmented' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_data, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 406, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r43))) {
        CPy_TypeError("bool", cpy_r_r43); cpy_r_r44 = 2;
    } else
        cpy_r_r44 = cpy_r_r43 == Py_True;
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 406, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_augmented = cpy_r_r44;
    cpy_r_r46 = CPyStatics[7756]; /* 'inherits_python' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_data, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 407, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r47))) {
        CPy_TypeError("bool", cpy_r_r47); cpy_r_r48 = 2;
    } else
        cpy_r_r48 = cpy_r_r47 == Py_True;
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 407, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python = cpy_r_r48;
    cpy_r_r50 = CPyStatics[7757]; /* 'has_dict' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_data, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 408, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 408, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_has_dict = cpy_r_r52;
    cpy_r_r54 = CPyStatics[7758]; /* 'allow_interpreted_subclasses' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_data, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 409, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r55))) {
        CPy_TypeError("bool", cpy_r_r55); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r55 == Py_True;
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 409, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_allow_interpreted_subclasses = cpy_r_r56;
    cpy_r_r58 = CPyStatics[7759]; /* 'needs_getseters' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_data, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 410, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r59))) {
        CPy_TypeError("bool", cpy_r_r59); cpy_r_r60 = 2;
    } else
        cpy_r_r60 = cpy_r_r59 == Py_True;
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 410, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_needs_getseters = cpy_r_r60;
    cpy_r_r62 = CPyStatics[7760]; /* '_serializable' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_data, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 411, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r63))) {
        CPy_TypeError("bool", cpy_r_r63); cpy_r_r64 = 2;
    } else
        cpy_r_r64 = cpy_r_r63 == Py_True;
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 411, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__serializable = cpy_r_r64;
    cpy_r_r66 = CPyStatics[7761]; /* 'builtin_base' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_data, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 412, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (PyUnicode_Check(cpy_r_r67))
        cpy_r_r68 = cpy_r_r67;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL9813;
    if (cpy_r_r67 == Py_None)
        cpy_r_r68 = cpy_r_r67;
    else {
        cpy_r_r68 = NULL;
    }
    if (cpy_r_r68 != NULL) goto __LL9813;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 412, CPyStatic_class_ir___globals, "str or None", cpy_r_r67);
    goto CPyL290;
__LL9813: ;
    CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base = cpy_r_r68;
    cpy_r_r70 = (PyObject *)CPyType_func_ir___FuncDecl;
    cpy_r_r71 = CPyStatics[7762]; /* 'ctor' */
    cpy_r_r72 = CPyDict_GetItem(cpy_r_data, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 413, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (likely(PyDict_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 413, CPyStatic_class_ir___globals, "dict", cpy_r_r72);
        goto CPyL290;
    }
    cpy_r_r74 = CPyDef_func_ir___FuncDecl___deserialize(cpy_r_r70, cpy_r_r73, cpy_r_ctx);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 413, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor = cpy_r_r74;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 413, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r76 = PyDict_New();
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r77 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_data, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL291;
    }
    cpy_r_r79 = PyObject_GetIter(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL291;
    }
CPyL47: ;
    cpy_r_r80 = PyIter_Next(cpy_r_r79);
    if (cpy_r_r80 == NULL) goto CPyL292;
    cpy_r_r81 = PyObject_GetIter(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL293;
    }
    cpy_r_r82 = PyIter_Next(cpy_r_r81);
    if (cpy_r_r82 == NULL) {
        goto CPyL294;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_k = cpy_r_r82;
    cpy_r_r84 = PyIter_Next(cpy_r_r81);
    if (cpy_r_r84 == NULL) {
        goto CPyL295;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_t = cpy_r_r84;
    cpy_r_r86 = PyIter_Next(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (cpy_r_r86 == NULL) {
        goto CPyL58;
    } else
        goto CPyL296;
CPyL56: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL58: ;
    if (PyDict_Check(cpy_r_t))
        cpy_r_r88 = cpy_r_t;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL9814;
    if (PyUnicode_Check(cpy_r_t))
        cpy_r_r88 = cpy_r_t;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL9814;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals, "union[dict, str]", cpy_r_t);
    goto CPyL297;
__LL9814: ;
    cpy_r_r89 = CPyDef_rtypes___deserialize_type(cpy_r_r88, cpy_r_ctx);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL297;
    }
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r76, cpy_r_k, cpy_r_r89);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL293;
    } else
        goto CPyL47;
CPyL61: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL291;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes = cpy_r_r76;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 414, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r94 = PyDict_New();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r95 = CPyStatics[7763]; /* 'method_decls' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_data, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 417, CPyStatic_class_ir___globals);
        goto CPyL298;
    }
    cpy_r_r97 = PyObject_GetIter(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL298;
    }
CPyL66: ;
    cpy_r_r98 = PyIter_Next(cpy_r_r97);
    if (cpy_r_r98 == NULL) goto CPyL299;
    cpy_r_r99 = PyObject_GetIter(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL300;
    }
    cpy_r_r100 = PyIter_Next(cpy_r_r99);
    if (cpy_r_r100 == NULL) {
        goto CPyL301;
    } else
        goto CPyL71;
CPyL69: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_k_2 = cpy_r_r100;
    cpy_r_r102 = PyIter_Next(cpy_r_r99);
    if (cpy_r_r102 == NULL) {
        goto CPyL302;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r103 = 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_v = cpy_r_r102;
    cpy_r_r104 = PyIter_Next(cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (cpy_r_r104 == NULL) {
        goto CPyL77;
    } else
        goto CPyL303;
CPyL75: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r106 = (PyObject *)&PyUnicode_Type;
    cpy_r_r107 = PyObject_IsInstance(cpy_r_v, cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals);
        goto CPyL304;
    }
    cpy_r_r109 = cpy_r_r107;
    if (!cpy_r_r109) goto CPyL85;
    cpy_r_r110 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals);
        goto CPyL304;
    }
    if (likely(PyDict_Check(cpy_r_r110)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals, "dict", cpy_r_r110);
        goto CPyL304;
    }
    if (likely(PyUnicode_Check(cpy_r_v)))
        cpy_r_r112 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals, "str", cpy_r_v);
        goto CPyL305;
    }
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals);
        goto CPyL306;
    }
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_func_ir___FuncIR))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r113);
        goto CPyL306;
    }
    cpy_r_r115 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r114)->_decl;
    CPy_INCREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115;
    goto CPyL88;
CPyL85: ;
    cpy_r_r117 = (PyObject *)CPyType_func_ir___FuncDecl;
    if (likely(PyDict_Check(cpy_r_v)))
        cpy_r_r118 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals, "dict", cpy_r_v);
        goto CPyL306;
    }
    cpy_r_r119 = CPyDef_func_ir___FuncDecl___deserialize(cpy_r_r117, cpy_r_r118, cpy_r_ctx);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 416, CPyStatic_class_ir___globals);
        goto CPyL306;
    }
    cpy_r_r116 = cpy_r_r119;
CPyL88: ;
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r94, cpy_r_k_2, cpy_r_r116);
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL300;
    } else
        goto CPyL66;
CPyL89: ;
    cpy_r_r122 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL298;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls = cpy_r_r94;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 415, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r124 = PyDict_New();
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r125 = CPyStatics[4738]; /* 'methods' */
    cpy_r_r126 = CPyDict_GetItem(cpy_r_data, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL307;
    }
    cpy_r_r127 = PyObject_GetIter(cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL307;
    }
CPyL94: ;
    cpy_r_r128 = PyIter_Next(cpy_r_r127);
    if (cpy_r_r128 == NULL) goto CPyL308;
    cpy_r_r129 = PyObject_GetIter(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL309;
    }
    cpy_r_r130 = PyIter_Next(cpy_r_r129);
    if (cpy_r_r130 == NULL) {
        goto CPyL310;
    } else
        goto CPyL99;
CPyL97: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL99: ;
    cpy_r_k_3 = cpy_r_r130;
    cpy_r_r132 = PyIter_Next(cpy_r_r129);
    if (cpy_r_r132 == NULL) {
        goto CPyL311;
    } else
        goto CPyL102;
CPyL100: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_v_2 = cpy_r_r132;
    cpy_r_r134 = PyIter_Next(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    if (cpy_r_r134 == NULL) {
        goto CPyL105;
    } else
        goto CPyL312;
CPyL103: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r135 = 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r136 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL313;
    }
    if (likely(PyDict_Check(cpy_r_r136)))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals, "dict", cpy_r_r136);
        goto CPyL313;
    }
    cpy_r_r138 = CPyDict_GetItem(cpy_r_r137, cpy_r_v_2);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_v_2);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL314;
    }
    if (likely(Py_TYPE(cpy_r_r138) == CPyType_func_ir___FuncIR))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r138);
        goto CPyL314;
    }
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r124, cpy_r_k_3, cpy_r_r139);
    CPy_DECREF(cpy_r_k_3);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL309;
    } else
        goto CPyL94;
CPyL110: ;
    cpy_r_r142 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL307;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods = cpy_r_r124;
    cpy_r_r143 = 1;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 419, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r144 = PyDict_New();
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r145 = CPyStatics[7764]; /* 'glue_methods' */
    cpy_r_r146 = CPyDict_GetItem(cpy_r_data, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals);
        goto CPyL315;
    }
    cpy_r_r147 = PyObject_GetIter(cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL315;
    }
CPyL115: ;
    cpy_r_r148 = PyIter_Next(cpy_r_r147);
    if (cpy_r_r148 == NULL) goto CPyL316;
    cpy_r_r149 = PyObject_GetIter(cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL317;
    }
    cpy_r_r150 = PyIter_Next(cpy_r_r149);
    if (cpy_r_r150 == NULL) {
        goto CPyL318;
    } else
        goto CPyL120;
CPyL118: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r151 = 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL120: ;
    cpy_r_r152 = PyObject_GetIter(cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL319;
    }
    cpy_r_r153 = PyIter_Next(cpy_r_r152);
    if (cpy_r_r153 == NULL) {
        goto CPyL320;
    } else
        goto CPyL124;
CPyL122: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL124: ;
    cpy_r_c = cpy_r_r153;
    cpy_r_r155 = PyIter_Next(cpy_r_r152);
    if (cpy_r_r155 == NULL) {
        goto CPyL321;
    } else
        goto CPyL127;
CPyL125: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL127: ;
    cpy_r_k_4 = cpy_r_r155;
    cpy_r_r157 = PyIter_Next(cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (cpy_r_r157 == NULL) {
        goto CPyL130;
    } else
        goto CPyL322;
CPyL128: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r159 = PyIter_Next(cpy_r_r149);
    if (cpy_r_r159 == NULL) {
        goto CPyL323;
    } else
        goto CPyL133;
CPyL131: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r160 = 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_v_3 = cpy_r_r159;
    cpy_r_r161 = PyIter_Next(cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    if (cpy_r_r161 == NULL) {
        goto CPyL136;
    } else
        goto CPyL324;
CPyL134: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL136: ;
    cpy_r_r163 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals);
        goto CPyL325;
    }
    if (likely(PyDict_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals, "dict", cpy_r_r163);
        goto CPyL325;
    }
    cpy_r_r165 = CPyDict_GetItem(cpy_r_r164, cpy_r_c);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals);
        goto CPyL326;
    }
    if (likely(Py_TYPE(cpy_r_r165) == CPyType_class_ir___ClassIR))
        cpy_r_r166 = cpy_r_r165;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r165);
        goto CPyL326;
    }
    cpy_r_r167.f0 = cpy_r_r166;
    cpy_r_r167.f1 = cpy_r_k_4;
    CPy_INCREF(cpy_r_r167.f0);
    CPy_INCREF(cpy_r_r167.f1);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_k_4);
    cpy_r_r168 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals);
        goto CPyL327;
    }
    if (likely(PyDict_Check(cpy_r_r168)))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals, "dict", cpy_r_r168);
        goto CPyL327;
    }
    cpy_r_r170 = CPyDict_GetItem(cpy_r_r169, cpy_r_v_3);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_v_3);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals);
        goto CPyL328;
    }
    if (likely(Py_TYPE(cpy_r_r170) == CPyType_func_ir___FuncIR))
        cpy_r_r171 = cpy_r_r170;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 421, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r170);
        goto CPyL328;
    }
    cpy_r_r172 = PyTuple_New(2);
    if (unlikely(cpy_r_r172 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9815 = cpy_r_r167.f0;
    PyTuple_SET_ITEM(cpy_r_r172, 0, __tmp9815);
    PyObject *__tmp9816 = cpy_r_r167.f1;
    PyTuple_SET_ITEM(cpy_r_r172, 1, __tmp9816);
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r144, cpy_r_r172, cpy_r_r171);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL317;
    } else
        goto CPyL115;
CPyL145: ;
    cpy_r_r175 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL315;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_glue_methods != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_glue_methods);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_glue_methods = cpy_r_r144;
    cpy_r_r176 = 1;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 420, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r177 = PyDict_New();
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r178 = CPyStatics[7765]; /* 'property_types' */
    cpy_r_r179 = CPyDict_GetItem(cpy_r_data, cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL329;
    }
    cpy_r_r180 = PyObject_GetIter(cpy_r_r179);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL329;
    }
CPyL150: ;
    cpy_r_r181 = PyIter_Next(cpy_r_r180);
    if (cpy_r_r181 == NULL) goto CPyL330;
    cpy_r_r182 = PyObject_GetIter(cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL331;
    }
    cpy_r_r183 = PyIter_Next(cpy_r_r182);
    if (cpy_r_r183 == NULL) {
        goto CPyL332;
    } else
        goto CPyL155;
CPyL153: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r184 = 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL155: ;
    cpy_r_k_5 = cpy_r_r183;
    cpy_r_r185 = PyIter_Next(cpy_r_r182);
    if (cpy_r_r185 == NULL) {
        goto CPyL333;
    } else
        goto CPyL158;
CPyL156: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r186 = 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL158: ;
    cpy_r_t_2 = cpy_r_r185;
    cpy_r_r187 = PyIter_Next(cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    if (cpy_r_r187 == NULL) {
        goto CPyL161;
    } else
        goto CPyL334;
CPyL159: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r188 = 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL161: ;
    if (PyDict_Check(cpy_r_t_2))
        cpy_r_r189 = cpy_r_t_2;
    else {
        cpy_r_r189 = NULL;
    }
    if (cpy_r_r189 != NULL) goto __LL9817;
    if (PyUnicode_Check(cpy_r_t_2))
        cpy_r_r189 = cpy_r_t_2;
    else {
        cpy_r_r189 = NULL;
    }
    if (cpy_r_r189 != NULL) goto __LL9817;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals, "union[dict, str]", cpy_r_t_2);
    goto CPyL335;
__LL9817: ;
    cpy_r_r190 = CPyDef_rtypes___deserialize_type(cpy_r_r189, cpy_r_ctx);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL335;
    }
    cpy_r_r191 = CPyDict_SetItem(cpy_r_r177, cpy_r_k_5, cpy_r_r190);
    CPy_DECREF(cpy_r_k_5);
    CPy_DECREF(cpy_r_r190);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL331;
    } else
        goto CPyL150;
CPyL164: ;
    cpy_r_r193 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL329;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types = cpy_r_r177;
    cpy_r_r194 = 1;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 423, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r195 = PyDict_New();
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 424, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r196 = CPyStatics[7766]; /* 'properties' */
    cpy_r_r197 = CPyDict_GetItem(cpy_r_data, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals);
        goto CPyL336;
    }
    cpy_r_r198 = PyObject_GetIter(cpy_r_r197);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 424, CPyStatic_class_ir___globals);
        goto CPyL336;
    }
CPyL169: ;
    cpy_r_r199 = PyIter_Next(cpy_r_r198);
    if (cpy_r_r199 == NULL) goto CPyL337;
    cpy_r_k_6 = cpy_r_r199;
    cpy_r_r200 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "deserialize", "ClassIR", "methods", 425, CPyStatic_class_ir___globals);
        goto CPyL338;
    }
    CPy_INCREF(cpy_r_r200);
CPyL171: ;
    cpy_r_r201 = CPyDict_GetItem(cpy_r_r200, cpy_r_k_6);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals);
        goto CPyL338;
    }
    if (likely(Py_TYPE(cpy_r_r201) == CPyType_func_ir___FuncIR))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r201);
        goto CPyL338;
    }
    cpy_r_r203 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_methods;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("mypyc/ir/class_ir.py", "deserialize", "ClassIR", "methods", 425, CPyStatic_class_ir___globals);
        goto CPyL339;
    }
    CPy_INCREF(cpy_r_r203);
CPyL174: ;
    cpy_r_r204 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r205 = PyNumber_Add(cpy_r_r204, cpy_r_k_6);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals);
        goto CPyL340;
    }
    cpy_r_r206 = CPyDict_GetWithNone(cpy_r_r203, cpy_r_r205);
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals);
        goto CPyL339;
    }
    if (Py_TYPE(cpy_r_r206) == CPyType_func_ir___FuncIR)
        cpy_r_r207 = cpy_r_r206;
    else {
        cpy_r_r207 = NULL;
    }
    if (cpy_r_r207 != NULL) goto __LL9818;
    if (cpy_r_r206 == Py_None)
        cpy_r_r207 = cpy_r_r206;
    else {
        cpy_r_r207 = NULL;
    }
    if (cpy_r_r207 != NULL) goto __LL9818;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 425, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r206);
    goto CPyL339;
__LL9818: ;
    cpy_r_r208.f0 = cpy_r_r202;
    cpy_r_r208.f1 = cpy_r_r207;
    CPy_INCREF(cpy_r_r208.f0);
    CPy_INCREF(cpy_r_r208.f1);
    CPy_DECREF(cpy_r_r202);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r209 = PyTuple_New(2);
    if (unlikely(cpy_r_r209 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9819 = cpy_r_r208.f0;
    PyTuple_SET_ITEM(cpy_r_r209, 0, __tmp9819);
    PyObject *__tmp9820 = cpy_r_r208.f1;
    PyTuple_SET_ITEM(cpy_r_r209, 1, __tmp9820);
    cpy_r_r210 = CPyDict_SetItem(cpy_r_r195, cpy_r_k_6, cpy_r_r209);
    CPy_DECREF(cpy_r_k_6);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 424, CPyStatic_class_ir___globals);
        goto CPyL341;
    } else
        goto CPyL169;
CPyL178: ;
    cpy_r_r212 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 424, CPyStatic_class_ir___globals);
        goto CPyL336;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_properties != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_properties);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_properties = cpy_r_r195;
    cpy_r_r213 = 1;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 424, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r214 = CPyStatics[7767]; /* 'vtable' */
    cpy_r_r215 = CPyDict_GetItem(cpy_r_data, cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 428, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (PyDict_Check(cpy_r_r215))
        cpy_r_r216 = cpy_r_r215;
    else {
        cpy_r_r216 = NULL;
    }
    if (cpy_r_r216 != NULL) goto __LL9821;
    if (cpy_r_r215 == Py_None)
        cpy_r_r216 = cpy_r_r215;
    else {
        cpy_r_r216 = NULL;
    }
    if (cpy_r_r216 != NULL) goto __LL9821;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 428, CPyStatic_class_ir___globals, "dict or None", cpy_r_r215);
    goto CPyL290;
__LL9821: ;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable = cpy_r_r216;
    cpy_r_r217 = 1;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 428, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r218 = CPyStatics[7768]; /* 'vtable_entries' */
    cpy_r_r219 = CPyDict_GetItem(cpy_r_data, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 429, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (likely(PyList_Check(cpy_r_r219)))
        cpy_r_r220 = cpy_r_r219;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 429, CPyStatic_class_ir___globals, "list", cpy_r_r219);
        goto CPyL290;
    }
    cpy_r_r221 = CPyDef_class_ir___deserialize_vtable(cpy_r_r220, cpy_r_ctx);
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 429, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable_entries != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable_entries);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_vtable_entries = cpy_r_r221;
    cpy_r_r222 = 1;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 429, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r223 = PyDict_New();
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r224 = CPyStatics[7769]; /* 'trait_vtables' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_data, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals);
        goto CPyL342;
    }
    cpy_r_r226 = PyObject_GetIter(cpy_r_r225);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL342;
    }
CPyL190: ;
    cpy_r_r227 = PyIter_Next(cpy_r_r226);
    if (cpy_r_r227 == NULL) goto CPyL343;
    cpy_r_r228 = PyObject_GetIter(cpy_r_r227);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL344;
    }
    cpy_r_r229 = PyIter_Next(cpy_r_r228);
    if (cpy_r_r229 == NULL) {
        goto CPyL345;
    } else
        goto CPyL195;
CPyL193: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r230 = 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL195: ;
    cpy_r_k_7 = cpy_r_r229;
    cpy_r_r231 = PyIter_Next(cpy_r_r228);
    if (cpy_r_r231 == NULL) {
        goto CPyL346;
    } else
        goto CPyL198;
CPyL196: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r232 = 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL198: ;
    cpy_r_v_4 = cpy_r_r231;
    cpy_r_r233 = PyIter_Next(cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    if (cpy_r_r233 == NULL) {
        goto CPyL201;
    } else
        goto CPyL347;
CPyL199: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r234 = 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL286;
    }
    CPy_Unreachable();
CPyL201: ;
    cpy_r_r235 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals);
        goto CPyL348;
    }
    if (likely(PyDict_Check(cpy_r_r235)))
        cpy_r_r236 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals, "dict", cpy_r_r235);
        goto CPyL348;
    }
    cpy_r_r237 = CPyDict_GetItem(cpy_r_r236, cpy_r_k_7);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_k_7);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals);
        goto CPyL349;
    }
    if (likely(Py_TYPE(cpy_r_r237) == CPyType_class_ir___ClassIR))
        cpy_r_r238 = cpy_r_r237;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r237);
        goto CPyL349;
    }
    if (likely(PyList_Check(cpy_r_v_4)))
        cpy_r_r239 = cpy_r_v_4;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals, "list", cpy_r_v_4);
        goto CPyL350;
    }
    cpy_r_r240 = CPyDef_class_ir___deserialize_vtable(cpy_r_r239, cpy_r_ctx);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 431, CPyStatic_class_ir___globals);
        goto CPyL350;
    }
    cpy_r_r241 = CPyDict_SetItem(cpy_r_r223, cpy_r_r238, cpy_r_r240);
    CPy_DECREF(cpy_r_r238);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL344;
    } else
        goto CPyL190;
CPyL208: ;
    cpy_r_r243 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL342;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_trait_vtables != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_trait_vtables);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_trait_vtables = cpy_r_r223;
    cpy_r_r244 = 1;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 430, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r245 = CPyStatics[3966]; /* 'base' */
    cpy_r_r246 = CPyDict_GetItem(cpy_r_data, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 434, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_base = cpy_r_r246;
    cpy_r_r247 = PyObject_IsTrue(cpy_r_base);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 434, CPyStatic_class_ir___globals);
        goto CPyL351;
    }
    cpy_r_r249 = cpy_r_r247;
    if (!cpy_r_r249) goto CPyL352;
    cpy_r_r250 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 435, CPyStatic_class_ir___globals);
        goto CPyL351;
    }
    if (likely(PyDict_Check(cpy_r_r250)))
        cpy_r_r251 = cpy_r_r250;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 435, CPyStatic_class_ir___globals, "dict", cpy_r_r250);
        goto CPyL351;
    }
    cpy_r_r252 = CPyDict_GetItem(cpy_r_r251, cpy_r_base);
    CPy_DECREF(cpy_r_r251);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 435, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (likely(Py_TYPE(cpy_r_r252) == CPyType_class_ir___ClassIR))
        cpy_r_r253 = cpy_r_r252;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 435, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r252);
        goto CPyL290;
    }
    cpy_r_r254 = cpy_r_r253;
    goto CPyL219;
CPyL218: ;
    cpy_r_r255 = Py_None;
    CPy_INCREF(cpy_r_r255);
    cpy_r_r254 = cpy_r_r255;
CPyL219: ;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base = cpy_r_r254;
    cpy_r_r256 = 1;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 435, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r257 = PyList_New(0);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r258 = CPyStatics[7770]; /* 'traits' */
    cpy_r_r259 = CPyDict_GetItem(cpy_r_data, cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL353;
    }
    cpy_r_r260 = PyObject_GetIter(cpy_r_r259);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL353;
    }
CPyL223: ;
    cpy_r_r261 = PyIter_Next(cpy_r_r260);
    if (cpy_r_r261 == NULL) goto CPyL354;
    cpy_r_s = cpy_r_r261;
    cpy_r_r262 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL355;
    }
    if (likely(PyDict_Check(cpy_r_r262)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals, "dict", cpy_r_r262);
        goto CPyL355;
    }
    cpy_r_r264 = CPyDict_GetItem(cpy_r_r263, cpy_r_s);
    CPy_DECREF(cpy_r_r263);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL356;
    }
    if (likely(Py_TYPE(cpy_r_r264) == CPyType_class_ir___ClassIR))
        cpy_r_r265 = cpy_r_r264;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r264);
        goto CPyL356;
    }
    cpy_r_r266 = PyList_Append(cpy_r_r257, cpy_r_r265);
    CPy_DECREF(cpy_r_r265);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL356;
    } else
        goto CPyL223;
CPyL229: ;
    cpy_r_r268 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r268)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL353;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits = cpy_r_r257;
    cpy_r_r269 = 1;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 436, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r270 = PyList_New(0);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r271 = CPyStatics[3110]; /* 'mro' */
    cpy_r_r272 = CPyDict_GetItem(cpy_r_data, cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL357;
    }
    cpy_r_r273 = PyObject_GetIter(cpy_r_r272);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL357;
    }
CPyL234: ;
    cpy_r_r274 = PyIter_Next(cpy_r_r273);
    if (cpy_r_r274 == NULL) goto CPyL358;
    cpy_r_s_2 = cpy_r_r274;
    cpy_r_r275 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL359;
    }
    if (likely(PyDict_Check(cpy_r_r275)))
        cpy_r_r276 = cpy_r_r275;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals, "dict", cpy_r_r275);
        goto CPyL359;
    }
    cpy_r_r277 = CPyDict_GetItem(cpy_r_r276, cpy_r_s_2);
    CPy_DECREF(cpy_r_r276);
    CPy_DECREF(cpy_r_s_2);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL360;
    }
    if (likely(Py_TYPE(cpy_r_r277) == CPyType_class_ir___ClassIR))
        cpy_r_r278 = cpy_r_r277;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r277);
        goto CPyL360;
    }
    cpy_r_r279 = PyList_Append(cpy_r_r270, cpy_r_r278);
    CPy_DECREF(cpy_r_r278);
    cpy_r_r280 = cpy_r_r279 >= 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL360;
    } else
        goto CPyL234;
CPyL240: ;
    cpy_r_r281 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r281)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL357;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro = cpy_r_r270;
    cpy_r_r282 = 1;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 437, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r283 = PyList_New(0);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r284 = CPyStatics[7771]; /* 'base_mro' */
    cpy_r_r285 = CPyDict_GetItem(cpy_r_data, cpy_r_r284);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL361;
    }
    cpy_r_r286 = PyObject_GetIter(cpy_r_r285);
    CPy_DECREF(cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL361;
    }
CPyL245: ;
    cpy_r_r287 = PyIter_Next(cpy_r_r286);
    if (cpy_r_r287 == NULL) goto CPyL362;
    cpy_r_s_3 = cpy_r_r287;
    cpy_r_r288 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r288 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL363;
    }
    if (likely(PyDict_Check(cpy_r_r288)))
        cpy_r_r289 = cpy_r_r288;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals, "dict", cpy_r_r288);
        goto CPyL363;
    }
    cpy_r_r290 = CPyDict_GetItem(cpy_r_r289, cpy_r_s_3);
    CPy_DECREF(cpy_r_r289);
    CPy_DECREF(cpy_r_s_3);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL364;
    }
    if (likely(Py_TYPE(cpy_r_r290) == CPyType_class_ir___ClassIR))
        cpy_r_r291 = cpy_r_r290;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r290);
        goto CPyL364;
    }
    cpy_r_r292 = PyList_Append(cpy_r_r283, cpy_r_r291);
    CPy_DECREF(cpy_r_r291);
    cpy_r_r293 = cpy_r_r292 >= 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL364;
    } else
        goto CPyL245;
CPyL251: ;
    cpy_r_r294 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL361;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro = cpy_r_r283;
    cpy_r_r295 = 1;
    if (unlikely(!cpy_r_r295)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 438, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r296 = CPyStatics[7772]; /* 'children' */
    cpy_r_r297 = CPyDict_GetItem(cpy_r_data, cpy_r_r296);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r298 = PyObject_IsTrue(cpy_r_r297);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL365;
    }
    cpy_r_r300 = cpy_r_r298;
    if (cpy_r_r300) goto CPyL366;
    cpy_r_r301 = cpy_r_r297;
    goto CPyL268;
CPyL257: ;
    cpy_r_r302 = PyList_New(0);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r303 = CPyStatics[7772]; /* 'children' */
    cpy_r_r304 = CPyDict_GetItem(cpy_r_data, cpy_r_r303);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL367;
    }
    cpy_r_r305 = PyObject_GetIter(cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL367;
    }
CPyL260: ;
    cpy_r_r306 = PyIter_Next(cpy_r_r305);
    if (cpy_r_r306 == NULL) goto CPyL368;
    cpy_r_s_4 = cpy_r_r306;
    cpy_r_r307 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL369;
    }
    if (likely(PyDict_Check(cpy_r_r307)))
        cpy_r_r308 = cpy_r_r307;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals, "dict", cpy_r_r307);
        goto CPyL369;
    }
    cpy_r_r309 = CPyDict_GetItem(cpy_r_r308, cpy_r_s_4);
    CPy_DECREF(cpy_r_r308);
    CPy_DECREF(cpy_r_s_4);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL370;
    }
    if (likely(Py_TYPE(cpy_r_r309) == CPyType_class_ir___ClassIR))
        cpy_r_r310 = cpy_r_r309;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r309);
        goto CPyL370;
    }
    cpy_r_r311 = PyList_Append(cpy_r_r302, cpy_r_r310);
    CPy_DECREF(cpy_r_r310);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL370;
    } else
        goto CPyL260;
CPyL266: ;
    cpy_r_r313 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL367;
    }
    cpy_r_r301 = cpy_r_r302;
CPyL268: ;
    if (PyList_Check(cpy_r_r301))
        cpy_r_r314 = cpy_r_r301;
    else {
        cpy_r_r314 = NULL;
    }
    if (cpy_r_r314 != NULL) goto __LL9822;
    if (cpy_r_r301 == Py_None)
        cpy_r_r314 = cpy_r_r301;
    else {
        cpy_r_r314 = NULL;
    }
    if (cpy_r_r314 != NULL) goto __LL9822;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals, "list or None", cpy_r_r301);
    goto CPyL290;
__LL9822: ;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_children != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_children);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_children = cpy_r_r314;
    cpy_r_r315 = 1;
    if (unlikely(!cpy_r_r315)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 439, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r316 = CPyStatics[7773]; /* 'deletable' */
    cpy_r_r317 = CPyDict_GetItem(cpy_r_data, cpy_r_r316);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 440, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (likely(PyList_Check(cpy_r_r317)))
        cpy_r_r318 = cpy_r_r317;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize", 440, CPyStatic_class_ir___globals, "list", cpy_r_r317);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_deletable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_deletable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_deletable = cpy_r_r318;
    cpy_r_r319 = 1;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 440, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r320 = CPyStatics[7774]; /* 'attrs_with_defaults' */
    cpy_r_r321 = CPyDict_GetItem(cpy_r_data, cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 441, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r322 = PySet_New(cpy_r_r321);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 441, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attrs_with_defaults != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attrs_with_defaults);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attrs_with_defaults = cpy_r_r322;
    cpy_r_r323 = 1;
    if (unlikely(!cpy_r_r323)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 441, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r324 = CPyStatics[7775]; /* '_always_initialized_attrs' */
    cpy_r_r325 = CPyDict_GetItem(cpy_r_data, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 442, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r326 = PySet_New(cpy_r_r325);
    CPy_DECREF(cpy_r_r325);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 442, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__always_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__always_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__always_initialized_attrs = cpy_r_r326;
    cpy_r_r327 = 1;
    if (unlikely(!cpy_r_r327)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 442, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r328 = CPyStatics[7776]; /* '_sometimes_initialized_attrs' */
    cpy_r_r329 = CPyDict_GetItem(cpy_r_data, cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 443, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r330 = PySet_New(cpy_r_r329);
    CPy_DECREF(cpy_r_r329);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 443, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__sometimes_initialized_attrs != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__sometimes_initialized_attrs);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__sometimes_initialized_attrs = cpy_r_r330;
    cpy_r_r331 = 1;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 443, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    cpy_r_r332 = CPyStatics[7777]; /* 'init_self_leak' */
    cpy_r_r333 = CPyDict_GetItem(cpy_r_data, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 444, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    if (unlikely(!PyBool_Check(cpy_r_r333))) {
        CPy_TypeError("bool", cpy_r_r333); cpy_r_r334 = 2;
    } else
        cpy_r_r334 = cpy_r_r333 == Py_True;
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r334 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 444, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_init_self_leak = cpy_r_r334;
    cpy_r_r335 = 1;
    if (unlikely(!cpy_r_r335)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 444, CPyStatic_class_ir___globals);
        goto CPyL290;
    }
    return cpy_r_ir;
CPyL286: ;
    cpy_r_r336 = NULL;
    return cpy_r_r336;
CPyL287: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL286;
CPyL288: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL286;
CPyL289: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL286;
CPyL290: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL286;
CPyL291: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    goto CPyL286;
CPyL292: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL61;
CPyL293: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL286;
CPyL294: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r81);
    goto CPyL50;
CPyL295: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_k);
    goto CPyL53;
CPyL296: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r86);
    goto CPyL56;
CPyL297: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_k);
    goto CPyL286;
CPyL298: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r94);
    goto CPyL286;
CPyL299: ;
    CPy_DECREF(cpy_r_r97);
    goto CPyL89;
CPyL300: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL286;
CPyL301: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r99);
    goto CPyL69;
CPyL302: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_k_2);
    goto CPyL72;
CPyL303: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_v);
    CPy_DECREF(cpy_r_r104);
    goto CPyL75;
CPyL304: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v);
    goto CPyL286;
CPyL305: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_r111);
    goto CPyL286;
CPyL306: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_k_2);
    goto CPyL286;
CPyL307: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r124);
    goto CPyL286;
CPyL308: ;
    CPy_DECREF(cpy_r_r127);
    goto CPyL110;
CPyL309: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r127);
    goto CPyL286;
CPyL310: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    goto CPyL97;
CPyL311: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_k_3);
    goto CPyL100;
CPyL312: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_k_3);
    CPy_DECREF(cpy_r_v_2);
    CPy_DECREF(cpy_r_r134);
    goto CPyL103;
CPyL313: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_k_3);
    CPy_DecRef(cpy_r_v_2);
    goto CPyL286;
CPyL314: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_k_3);
    goto CPyL286;
CPyL315: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    goto CPyL286;
CPyL316: ;
    CPy_DECREF(cpy_r_r147);
    goto CPyL145;
CPyL317: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    goto CPyL286;
CPyL318: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    goto CPyL118;
CPyL319: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r149);
    goto CPyL286;
CPyL320: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r152);
    goto CPyL122;
CPyL321: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_c);
    goto CPyL125;
CPyL322: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_c);
    CPy_DECREF(cpy_r_k_4);
    CPy_DECREF(cpy_r_r157);
    goto CPyL128;
CPyL323: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_c);
    CPy_DECREF(cpy_r_k_4);
    goto CPyL131;
CPyL324: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_c);
    CPy_DECREF(cpy_r_k_4);
    CPy_DECREF(cpy_r_v_3);
    CPy_DECREF(cpy_r_r161);
    goto CPyL134;
CPyL325: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_k_4);
    CPy_DecRef(cpy_r_v_3);
    goto CPyL286;
CPyL326: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_k_4);
    CPy_DecRef(cpy_r_v_3);
    goto CPyL286;
CPyL327: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_v_3);
    CPy_DecRef(cpy_r_r167.f0);
    CPy_DecRef(cpy_r_r167.f1);
    goto CPyL286;
CPyL328: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r167.f0);
    CPy_DecRef(cpy_r_r167.f1);
    goto CPyL286;
CPyL329: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r177);
    goto CPyL286;
CPyL330: ;
    CPy_DECREF(cpy_r_r180);
    goto CPyL164;
CPyL331: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    goto CPyL286;
CPyL332: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r180);
    CPy_DECREF(cpy_r_r182);
    goto CPyL153;
CPyL333: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r180);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_k_5);
    goto CPyL156;
CPyL334: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r180);
    CPy_DECREF(cpy_r_k_5);
    CPy_DECREF(cpy_r_t_2);
    CPy_DECREF(cpy_r_r187);
    goto CPyL159;
CPyL335: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r180);
    CPy_DecRef(cpy_r_k_5);
    goto CPyL286;
CPyL336: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r195);
    goto CPyL286;
CPyL337: ;
    CPy_DECREF(cpy_r_r198);
    goto CPyL178;
CPyL338: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r198);
    CPy_DecRef(cpy_r_k_6);
    goto CPyL286;
CPyL339: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r198);
    CPy_DecRef(cpy_r_k_6);
    CPy_DecRef(cpy_r_r202);
    goto CPyL286;
CPyL340: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r198);
    CPy_DecRef(cpy_r_k_6);
    CPy_DecRef(cpy_r_r202);
    CPy_DecRef(cpy_r_r203);
    goto CPyL286;
CPyL341: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r198);
    goto CPyL286;
CPyL342: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r223);
    goto CPyL286;
CPyL343: ;
    CPy_DECREF(cpy_r_r226);
    goto CPyL208;
CPyL344: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r226);
    goto CPyL286;
CPyL345: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r226);
    CPy_DECREF(cpy_r_r228);
    goto CPyL193;
CPyL346: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r226);
    CPy_DECREF(cpy_r_r228);
    CPy_DECREF(cpy_r_k_7);
    goto CPyL196;
CPyL347: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r226);
    CPy_DECREF(cpy_r_k_7);
    CPy_DECREF(cpy_r_v_4);
    CPy_DECREF(cpy_r_r233);
    goto CPyL199;
CPyL348: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_k_7);
    CPy_DecRef(cpy_r_v_4);
    goto CPyL286;
CPyL349: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_v_4);
    goto CPyL286;
CPyL350: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_r238);
    goto CPyL286;
CPyL351: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_base);
    goto CPyL286;
CPyL352: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL218;
CPyL353: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r257);
    goto CPyL286;
CPyL354: ;
    CPy_DECREF(cpy_r_r260);
    goto CPyL229;
CPyL355: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_s);
    goto CPyL286;
CPyL356: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    goto CPyL286;
CPyL357: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r270);
    goto CPyL286;
CPyL358: ;
    CPy_DECREF(cpy_r_r273);
    goto CPyL240;
CPyL359: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r270);
    CPy_DecRef(cpy_r_r273);
    CPy_DecRef(cpy_r_s_2);
    goto CPyL286;
CPyL360: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r270);
    CPy_DecRef(cpy_r_r273);
    goto CPyL286;
CPyL361: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r283);
    goto CPyL286;
CPyL362: ;
    CPy_DECREF(cpy_r_r286);
    goto CPyL251;
CPyL363: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r286);
    CPy_DecRef(cpy_r_s_3);
    goto CPyL286;
CPyL364: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r283);
    CPy_DecRef(cpy_r_r286);
    goto CPyL286;
CPyL365: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r297);
    goto CPyL286;
CPyL366: ;
    CPy_DECREF(cpy_r_r297);
    goto CPyL257;
CPyL367: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r302);
    goto CPyL286;
CPyL368: ;
    CPy_DECREF(cpy_r_r305);
    goto CPyL266;
CPyL369: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r302);
    CPy_DecRef(cpy_r_r305);
    CPy_DecRef(cpy_r_s_4);
    goto CPyL286;
CPyL370: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r302);
    CPy_DecRef(cpy_r_r305);
    goto CPyL286;
}

PyObject *CPyPy_class_ir___ClassIR___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_class_ir___ClassIR___deserialize(arg_cls, arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize", 397, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir___NonExtClassInfo_____init__(PyObject *cpy_r_self, PyObject *cpy_r_dict, PyObject *cpy_r_bases, PyObject *cpy_r_anns, PyObject *cpy_r_metaclass) {
    CPy_INCREF(cpy_r_dict);
    ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_self)->_dict = cpy_r_dict;
    CPy_INCREF(cpy_r_bases);
    ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_self)->_bases = cpy_r_bases;
    CPy_INCREF(cpy_r_anns);
    ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_self)->_anns = cpy_r_anns;
    CPy_INCREF(cpy_r_metaclass);
    ((mypyc___ir___class_ir___NonExtClassInfoObject *)cpy_r_self)->_metaclass = cpy_r_metaclass;
    return 1;
}

PyObject *CPyPy_class_ir___NonExtClassInfo_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dict", "bases", "anns", "metaclass", 0};
    PyObject *obj_dict;
    PyObject *obj_bases;
    PyObject *obj_anns;
    PyObject *obj_metaclass;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_dict, &obj_bases, &obj_anns, &obj_metaclass)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_class_ir___NonExtClassInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_dict;
    if (likely(PyObject_TypeCheck(obj_dict, CPyType_ops___Value)))
        arg_dict = obj_dict;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_dict); 
        goto fail;
    }
    PyObject *arg_bases;
    if (likely(PyObject_TypeCheck(obj_bases, CPyType_ops___Value)))
        arg_bases = obj_bases;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_bases); 
        goto fail;
    }
    PyObject *arg_anns;
    if (likely(PyObject_TypeCheck(obj_anns, CPyType_ops___Value)))
        arg_anns = obj_anns;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_anns); 
        goto fail;
    }
    PyObject *arg_metaclass;
    if (likely(PyObject_TypeCheck(obj_metaclass, CPyType_ops___Value)))
        arg_metaclass = obj_metaclass;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_metaclass); 
        goto fail;
    }
    char retval = CPyDef_class_ir___NonExtClassInfo_____init__(arg_self, arg_dict, arg_bases, arg_anns, arg_metaclass);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "__init__", 456, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___serialize_vtable_entry(PyObject *cpy_r_entry) {
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
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatics[3930]; /* '.class' */
    cpy_r_r1 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r2 = CPyStatics[730]; /* 'cls' */
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_entry, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 466, CPyStatic_class_ir___globals);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_class_ir___ClassIR))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 466, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r3);
        goto CPyL18;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_class_ir___ClassIR, 2, mypyc___ir___class_ir___ClassIRObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 466, CPyStatic_class_ir___globals);
        goto CPyL18;
    }
CPyL3: ;
    cpy_r_r6 = CPyStatics[2329]; /* 'name' */
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_entry, 2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 467, CPyStatic_class_ir___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 467, CPyStatic_class_ir___globals, "str", cpy_r_r7);
        goto CPyL19;
    }
    cpy_r_r9 = CPyStatics[6083]; /* 'method' */
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_entry, 4);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 468, CPyStatic_class_ir___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_func_ir___FuncIR))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 468, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r10);
        goto CPyL20;
    }
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r11)->_decl;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 468, CPyStatic_class_ir___globals);
        goto CPyL20;
    }
CPyL8: ;
    cpy_r_r14 = CPyStatics[7780]; /* 'shadow_method' */
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 469, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
    if (Py_TYPE(cpy_r_r15) == CPyType_func_ir___FuncIR)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL9823;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL9823;
    CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 469, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR or None", cpy_r_r15);
    goto CPyL21;
__LL9823: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r18) goto CPyL15;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_entry, 6);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 469, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_func_ir___FuncIR))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 469, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r19);
        goto CPyL21;
    }
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r20)->_decl;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_func_ir___FuncDecl, 3, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* id */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 469, CPyStatic_class_ir___globals);
        goto CPyL21;
    }
CPyL14: ;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL16;
CPyL15: ;
    cpy_r_r24 = Py_None;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r23 = cpy_r_r24;
CPyL16: ;
    cpy_r_r25 = CPyDict_Build(5, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r23);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 464, CPyStatic_class_ir___globals);
        goto CPyL18;
    }
    return cpy_r_r25;
CPyL18: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL19: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r13);
    goto CPyL18;
}

PyObject *CPyPy_class_ir___serialize_vtable_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entry", 0};
    static CPyArg_Parser parser = {"O:serialize_vtable_entry", kwlist, 0};
    PyObject *obj_entry;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_entry)) {
        return NULL;
    }
    PyObject * arg_entry;
    if (likely(PyTuple_Check(obj_entry)))
        arg_entry = obj_entry;
    else {
        CPy_TypeError("tuple", obj_entry); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___serialize_vtable_entry(arg_entry);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable_entry", 463, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___serialize_vtable(PyObject *cpy_r_vtable) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_vtable)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable", 474, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_vtable)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_vtable, cpy_r_r3);
    if (likely(PyTuple_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "serialize_vtable", 474, CPyStatic_class_ir___globals, "tuple", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_v = cpy_r_r9;
    cpy_r_r10 = CPyDef_class_ir___serialize_vtable_entry(cpy_r_v);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable", 474, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable", 474, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_class_ir___serialize_vtable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"vtable", 0};
    static CPyArg_Parser parser = {"O:serialize_vtable", kwlist, 0};
    PyObject *obj_vtable;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_vtable)) {
        return NULL;
    }
    PyObject *arg_vtable;
    if (likely(PyList_Check(obj_vtable)))
        arg_vtable = obj_vtable;
    else {
        CPy_TypeError("list", obj_vtable); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___serialize_vtable(arg_vtable);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "serialize_vtable", 473, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___deserialize_vtable_entry(PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
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
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
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
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    cpy_r_r0 = CPyStatics[3930]; /* '.class' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 478, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r2 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 478, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 478, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL29;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 480, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 480, CPyStatic_class_ir___globals, "dict", cpy_r_r7);
        goto CPyL38;
    }
    cpy_r_r9 = CPyStatics[730]; /* 'cls' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_data, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 480, CPyStatic_class_ir___globals);
        goto CPyL39;
    }
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 480, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_class_ir___ClassIR))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 480, CPyStatic_class_ir___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r11);
        goto CPyL38;
    }
    cpy_r_r13 = CPyStatics[2329]; /* 'name' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_data, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 481, CPyStatic_class_ir___globals);
        goto CPyL40;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 482, CPyStatic_class_ir___globals);
        goto CPyL41;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 482, CPyStatic_class_ir___globals, "dict", cpy_r_r15);
        goto CPyL41;
    }
    cpy_r_r17 = CPyStatics[6083]; /* 'method' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_data, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 482, CPyStatic_class_ir___globals);
        goto CPyL42;
    }
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 482, CPyStatic_class_ir___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_func_ir___FuncIR))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 482, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r19);
        goto CPyL41;
    }
    cpy_r_r21 = CPyStatics[7780]; /* 'shadow_method' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_data, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals);
        goto CPyL43;
    }
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals);
        goto CPyL43;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL24;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals);
        goto CPyL43;
    }
    if (likely(PyDict_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals, "dict", cpy_r_r26);
        goto CPyL43;
    }
    cpy_r_r28 = CPyStatics[7780]; /* 'shadow_method' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_data, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals);
        goto CPyL44;
    }
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r27, cpy_r_r29);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_func_ir___FuncIR))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 483, CPyStatic_class_ir___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r30);
        goto CPyL43;
    }
    cpy_r_r32 = cpy_r_r31;
    goto CPyL25;
CPyL24: ;
    cpy_r_r33 = Py_None;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r32 = cpy_r_r33;
CPyL25: ;
    cpy_r_r34 = CPyStatic_class_ir___globals;
    cpy_r_r35 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 479, CPyStatic_class_ir___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r37[4] = {cpy_r_r12, cpy_r_r14, cpy_r_r20, cpy_r_r32};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 4, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 479, CPyStatic_class_ir___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r32);
    if (likely(PyTuple_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 479, CPyStatic_class_ir___globals, "tuple", cpy_r_r39);
        goto CPyL38;
    }
    return cpy_r_r40;
CPyL29: ;
    if (0) goto CPyL37;
    cpy_r_r41 = CPyStatics[3930]; /* '.class' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_data, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r43 = PyObject_Str(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r44 = CPyStatics[7781]; /* 'Bogus vtable .class: ' */
    cpy_r_r45 = CPyStr_Build(2, cpy_r_r44, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r45};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r45);
    CPy_Raise(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 485, CPyStatic_class_ir___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r52 = NULL;
    return cpy_r_r52;
CPyL39: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r27);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL38;
}

PyObject *CPyPy_class_ir___deserialize_vtable_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize_vtable_entry", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
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
    PyObject *retval = CPyDef_class_ir___deserialize_vtable_entry(arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable_entry", 477, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___deserialize_vtable(PyObject *cpy_r_data, PyObject *cpy_r_ctx) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_data)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable", 489, CPyStatic_class_ir___globals);
        goto CPyL8;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_data)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_data, cpy_r_r3);
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "deserialize_vtable", 489, CPyStatic_class_ir___globals, "dict", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_x = cpy_r_r9;
    cpy_r_r10 = CPyDef_class_ir___deserialize_vtable_entry(cpy_r_x, cpy_r_ctx);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable", 489, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_r11 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable", 489, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_r12 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r12;
    goto CPyL2;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_class_ir___deserialize_vtable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", "ctx", 0};
    static CPyArg_Parser parser = {"OO:deserialize_vtable", kwlist, 0};
    PyObject *obj_data;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_data;
    if (likely(PyList_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("list", obj_data); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___deserialize_vtable(arg_data, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "deserialize_vtable", 488, CPyStatic_class_ir___globals);
    return NULL;
}

PyObject *CPyDef_class_ir___all_concrete_classes(PyObject *cpy_r_class_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_concrete;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_class_ir___ClassIR___concrete_subclasses(cpy_r_class_ir);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "all_concrete_classes", 494, CPyStatic_class_ir___globals);
        goto CPyL9;
    }
    cpy_r_concrete = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_concrete == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL10;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_is_abstract;
    if (cpy_r_r4) goto CPyL7;
CPyL4: ;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_is_trait;
    if (cpy_r_r5) goto CPyL7;
CPyL5: ;
    CPy_INCREF(cpy_r_concrete);
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r6 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "all_concrete_classes", 498, CPyStatic_class_ir___globals, "list", cpy_r_concrete);
        goto CPyL11;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r6, cpy_r_class_ir);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "all_concrete_classes", 498, CPyStatic_class_ir___globals);
        goto CPyL11;
    }
CPyL7: ;
    if (likely(cpy_r_concrete != Py_None))
        cpy_r_r9 = cpy_r_concrete;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "all_concrete_classes", 499, CPyStatic_class_ir___globals, "list", cpy_r_concrete);
        goto CPyL9;
    }
    return cpy_r_r9;
CPyL9: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL10: ;
    CPy_DECREF(cpy_r_concrete);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_concrete);
    goto CPyL9;
}

PyObject *CPyPy_class_ir___all_concrete_classes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"class_ir", 0};
    static CPyArg_Parser parser = {"O:all_concrete_classes", kwlist, 0};
    PyObject *obj_class_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_class_ir)) {
        return NULL;
    }
    PyObject *arg_class_ir;
    if (likely(Py_TYPE(obj_class_ir) == CPyType_class_ir___ClassIR))
        arg_class_ir = obj_class_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_class_ir); 
        goto fail;
    }
    PyObject *retval = CPyDef_class_ir___all_concrete_classes(arg_class_ir);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/ir/class_ir.py", "all_concrete_classes", 492, CPyStatic_class_ir___globals);
    return NULL;
}

char CPyDef_class_ir_____top_level__(void) {
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
    char cpy_r_r35;
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
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
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
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
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
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", -1, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_class_ir___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 3, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10006]; /* ('List', 'NamedTuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_class_ir___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 5, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10007]; /* ('PROPSET_PREFIX', 'JsonDict') */
    cpy_r_r14 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r15 = CPyStatic_class_ir___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 7, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___common = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10008]; /* ('FuncDecl', 'FuncIR', 'FuncSignature') */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_class_ir___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 8, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10009]; /* ('DeserMaps', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_class_ir___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 9, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10010]; /* ('RInstance', 'RType', 'deserialize_type') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_class_ir___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 10, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9946]; /* ('NameGenerator', 'exported_name') */
    cpy_r_r30 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r31 = CPyStatic_class_ir___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 11, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___namegen = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyModule_typing;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    if (cpy_r_r35) goto CPyL13;
    cpy_r_r36 = CPyStatics[21]; /* 'typing' */
    cpy_r_r37 = PyImport_Import(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    CPyModule_typing = cpy_r_r37;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r37);
CPyL13: ;
    cpy_r_r38 = PyImport_GetModuleDict();
    cpy_r_r39 = CPyStatics[21]; /* 'typing' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r41 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r43 = PyTuple_Pack(1, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r44 = CPyModule_typing;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_r44 != cpy_r_r45;
    if (cpy_r_r46) goto CPyL19;
    cpy_r_r47 = CPyStatics[21]; /* 'typing' */
    cpy_r_r48 = PyImport_Import(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL54;
    }
    CPyModule_typing = cpy_r_r48;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r48);
CPyL19: ;
    cpy_r_r49 = PyImport_GetModuleDict();
    cpy_r_r50 = CPyStatics[21]; /* 'typing' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL54;
    }
    cpy_r_r52 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL54;
    }
    cpy_r_r54 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r55 = PyObject_HasAttr(cpy_r_r53, cpy_r_r54);
    if (!cpy_r_r55) goto CPyL26;
    cpy_r_r56 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r57 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r59[2] = {cpy_r_r56, cpy_r_r43};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 2, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL55;
    }
    if (likely(PyDict_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals, "dict", cpy_r_r61);
        goto CPyL55;
    }
    cpy_r_r63 = cpy_r_r62;
    goto CPyL28;
CPyL26: ;
    cpy_r_r64 = PyDict_New();
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL55;
    }
    cpy_r_r63 = cpy_r_r64;
CPyL28: ;
    cpy_r_r65 = PyDict_New();
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL56;
    }
    cpy_r_r66 = CPyStatics[6661]; /* 'ClassIR' */
    cpy_r_r67 = CPyStatics[730]; /* 'cls' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r65, cpy_r_r67, cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 73, CPyStatic_class_ir___globals);
        goto CPyL57;
    }
    cpy_r_r70 = (PyObject *)&PyUnicode_Type;
    cpy_r_r71 = CPyStatics[2329]; /* 'name' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r65, cpy_r_r71, cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 74, CPyStatic_class_ir___globals);
        goto CPyL57;
    }
    cpy_r_r74 = (PyObject *)CPyType_func_ir___FuncIR;
    cpy_r_r75 = CPyStatics[6083]; /* 'method' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r65, cpy_r_r75, cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 75, CPyStatic_class_ir___globals);
        goto CPyL57;
    }
    cpy_r_r78 = (PyObject *)&PyType_Type;
    cpy_r_r79 = CPyStatics[7780]; /* 'shadow_method' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r65, cpy_r_r79, cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 76, CPyStatic_class_ir___globals);
        goto CPyL57;
    }
    cpy_r_r82 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r83 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r63, cpy_r_r83, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL56;
    }
    cpy_r_r86 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r87 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r63, cpy_r_r87, cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL56;
    }
    cpy_r_r90 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r91 = CPyStatics[619]; /* '__module__' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r63, cpy_r_r91, cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r94[3] = {cpy_r_r82, cpy_r_r43, cpy_r_r63};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r95, 3, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r63);
    CPyType_class_ir___VTableMethod = (PyTypeObject *)cpy_r_r96;
    CPy_INCREF(CPyType_class_ir___VTableMethod);
    cpy_r_r97 = CPyStatic_class_ir___globals;
    cpy_r_r98 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 72, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r101 = (PyObject *)CPyType_class_ir___VTableMethod;
    cpy_r_r102 = CPyStatic_class_ir___globals;
    cpy_r_r103 = CPyStatics[81]; /* 'List' */
    cpy_r_r104 = CPyDict_GetItem(cpy_r_r102, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 79, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r105 = CPyStatic_class_ir___globals;
    cpy_r_r106 = CPyStatics[7779]; /* 'VTableMethod' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 79, CPyStatic_class_ir___globals);
        goto CPyL59;
    }
    cpy_r_r108 = PyObject_GetItem(cpy_r_r104, cpy_r_r107);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 79, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r109 = CPyStatic_class_ir___globals;
    cpy_r_r110 = CPyStatics[7272]; /* 'VTableEntries' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 79, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r113 = NULL;
    cpy_r_r114 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r115 = (PyObject *)CPyType_class_ir___ClassIR_template;
    cpy_r_r116 = CPyType_FromTemplate(cpy_r_r115, cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 82, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r117 = CPyDef_class_ir___ClassIR_trait_vtable_setup();
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", -1, CPyStatic_class_ir___globals);
        goto CPyL60;
    }
    cpy_r_r118 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r119 = CPyStatics[2329]; /* 'name' */
    cpy_r_r120 = CPyStatics[3995]; /* 'module_name' */
    cpy_r_r121 = CPyStatics[7752]; /* 'is_trait' */
    cpy_r_r122 = CPyStatics[7754]; /* 'is_generated' */
    cpy_r_r123 = CPyStatics[4008]; /* 'is_abstract' */
    cpy_r_r124 = CPyStatics[7753]; /* 'is_ext_class' */
    cpy_r_r125 = CPyStatics[7755]; /* 'is_augmented' */
    cpy_r_r126 = CPyStatics[7756]; /* 'inherits_python' */
    cpy_r_r127 = CPyStatics[7757]; /* 'has_dict' */
    cpy_r_r128 = CPyStatics[7758]; /* 'allow_interpreted_subclasses' */
    cpy_r_r129 = CPyStatics[7759]; /* 'needs_getseters' */
    cpy_r_r130 = CPyStatics[7760]; /* '_serializable' */
    cpy_r_r131 = CPyStatics[7761]; /* 'builtin_base' */
    cpy_r_r132 = CPyStatics[7762]; /* 'ctor' */
    cpy_r_r133 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r134 = CPyStatics[7773]; /* 'deletable' */
    cpy_r_r135 = CPyStatics[7763]; /* 'method_decls' */
    cpy_r_r136 = CPyStatics[4738]; /* 'methods' */
    cpy_r_r137 = CPyStatics[7764]; /* 'glue_methods' */
    cpy_r_r138 = CPyStatics[7766]; /* 'properties' */
    cpy_r_r139 = CPyStatics[7765]; /* 'property_types' */
    cpy_r_r140 = CPyStatics[7767]; /* 'vtable' */
    cpy_r_r141 = CPyStatics[7768]; /* 'vtable_entries' */
    cpy_r_r142 = CPyStatics[7769]; /* 'trait_vtables' */
    cpy_r_r143 = CPyStatics[3966]; /* 'base' */
    cpy_r_r144 = CPyStatics[7770]; /* 'traits' */
    cpy_r_r145 = CPyStatics[3110]; /* 'mro' */
    cpy_r_r146 = CPyStatics[7771]; /* 'base_mro' */
    cpy_r_r147 = CPyStatics[7772]; /* 'children' */
    cpy_r_r148 = CPyStatics[7774]; /* 'attrs_with_defaults' */
    cpy_r_r149 = CPyStatics[7775]; /* '_always_initialized_attrs' */
    cpy_r_r150 = CPyStatics[7776]; /* '_sometimes_initialized_attrs' */
    cpy_r_r151 = CPyStatics[7777]; /* 'init_self_leak' */
    cpy_r_r152 = CPyStatics[7783]; /* 'bitmap_attrs' */
    cpy_r_r153 = PyTuple_Pack(34, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 82, CPyStatic_class_ir___globals);
        goto CPyL60;
    }
    cpy_r_r154 = PyObject_SetAttr(cpy_r_r116, cpy_r_r118, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 82, CPyStatic_class_ir___globals);
        goto CPyL60;
    }
    CPyType_class_ir___ClassIR = (PyTypeObject *)cpy_r_r116;
    CPy_INCREF(CPyType_class_ir___ClassIR);
    cpy_r_r156 = CPyStatic_class_ir___globals;
    cpy_r_r157 = CPyStatics[6661]; /* 'ClassIR' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r156, cpy_r_r157, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 82, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r160 = NULL;
    cpy_r_r161 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r162 = (PyObject *)CPyType_class_ir___NonExtClassInfo_template;
    cpy_r_r163 = CPyType_FromTemplate(cpy_r_r162, cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 449, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    cpy_r_r164 = CPyDef_class_ir___NonExtClassInfo_trait_vtable_setup();
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", -1, CPyStatic_class_ir___globals);
        goto CPyL61;
    }
    cpy_r_r165 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r166 = CPyStatics[1164]; /* 'dict' */
    cpy_r_r167 = CPyStatics[2392]; /* 'bases' */
    cpy_r_r168 = CPyStatics[7784]; /* 'anns' */
    cpy_r_r169 = CPyStatics[772]; /* 'metaclass' */
    cpy_r_r170 = PyTuple_Pack(4, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 449, CPyStatic_class_ir___globals);
        goto CPyL61;
    }
    cpy_r_r171 = PyObject_SetAttr(cpy_r_r163, cpy_r_r165, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 449, CPyStatic_class_ir___globals);
        goto CPyL61;
    }
    CPyType_class_ir___NonExtClassInfo = (PyTypeObject *)cpy_r_r163;
    CPy_INCREF(CPyType_class_ir___NonExtClassInfo);
    cpy_r_r173 = CPyStatic_class_ir___globals;
    cpy_r_r174 = CPyStatics[7785]; /* 'NonExtClassInfo' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r173, cpy_r_r174, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/ir/class_ir.py", "<module>", 449, CPyStatic_class_ir___globals);
        goto CPyL53;
    }
    return 1;
CPyL53: ;
    cpy_r_r177 = 2;
    return cpy_r_r177;
CPyL54: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r53);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r63);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r65);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r63);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL53;
CPyL60: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_r163);
    goto CPyL53;
}
