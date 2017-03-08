/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "NeighCellsInfo-r12.h"

static int
crs_PortsCount_r12_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
crs_PortsCount_r12_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
crs_PortsCount_r12_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
crs_PortsCount_r12_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
crs_PortsCount_r12_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
crs_PortsCount_r12_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
crs_PortsCount_r12_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
crs_PortsCount_r12_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
crs_PortsCount_r12_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
crs_PortsCount_r12_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_dec_rval_t
crs_PortsCount_r12_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
crs_PortsCount_r12_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	crs_PortsCount_r12_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static int
memb_p_b_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 3LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p_aList_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1LL && size <= 3LL)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_transmissionModeList_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_resAllocGranularity_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 1LL && value <= 4LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_crs_PortsCount_r12_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_p_aList_r12_constr_10 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_b_r12_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_aList_r12_constr_10 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_transmissionModeList_r12_constr_12 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_resAllocGranularity_r12_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_crs_PortsCount_r12_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_crs_PortsCount_r12_enum2value_4[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_crs_PortsCount_r12_specs_4 = {
	asn_MAP_crs_PortsCount_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_crs_PortsCount_r12_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_crs_PortsCount_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crs_PortsCount_r12_4 = {
	"crs-PortsCount-r12",
	"crs-PortsCount-r12",
	crs_PortsCount_r12_4_free,
	crs_PortsCount_r12_4_print,
	crs_PortsCount_r12_4_constraint,
	crs_PortsCount_r12_4_decode_ber,
	crs_PortsCount_r12_4_encode_der,
	crs_PortsCount_r12_4_decode_xer,
	crs_PortsCount_r12_4_encode_xer,
	crs_PortsCount_r12_4_decode_uper,
	crs_PortsCount_r12_4_encode_uper,
	crs_PortsCount_r12_4_decode_aper,
	crs_PortsCount_r12_4_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_crs_PortsCount_r12_tags_4,
	sizeof(asn_DEF_crs_PortsCount_r12_tags_4)
		/sizeof(asn_DEF_crs_PortsCount_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_crs_PortsCount_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_crs_PortsCount_r12_tags_4)
		/sizeof(asn_DEF_crs_PortsCount_r12_tags_4[0]), /* 2 */
	&asn_PER_type_crs_PortsCount_r12_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crs_PortsCount_r12_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p_aList_r12_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_P_a,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_p_aList_r12_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_p_aList_r12_specs_10 = {
	sizeof(struct NeighCellsInfo_r12__p_aList_r12),
	offsetof(struct NeighCellsInfo_r12__p_aList_r12, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p_aList_r12_10 = {
	"p-aList-r12",
	"p-aList-r12",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_p_aList_r12_tags_10,
	sizeof(asn_DEF_p_aList_r12_tags_10)
		/sizeof(asn_DEF_p_aList_r12_tags_10[0]) - 1, /* 1 */
	asn_DEF_p_aList_r12_tags_10,	/* Same as above */
	sizeof(asn_DEF_p_aList_r12_tags_10)
		/sizeof(asn_DEF_p_aList_r12_tags_10[0]), /* 2 */
	&asn_PER_type_p_aList_r12_constr_10,
	asn_MBR_p_aList_r12_10,
	1,	/* Single element */
	&asn_SPC_p_aList_r12_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NeighCellsInfo_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, p_b_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p_b_r12_constraint_1,
		&asn_PER_memb_p_b_r12_constr_3,
		0,
		"p-b-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, crs_PortsCount_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crs_PortsCount_r12_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crs-PortsCount-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct NeighCellsInfo_r12, mbsfn_SubframeConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbsfn-SubframeConfig-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, p_aList_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_p_aList_r12_10,
		memb_p_aList_r12_constraint_1,
		&asn_PER_memb_p_aList_r12_constr_10,
		0,
		"p-aList-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, transmissionModeList_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_transmissionModeList_r12_constraint_1,
		&asn_PER_memb_transmissionModeList_r12_constr_12,
		0,
		"transmissionModeList-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsInfo_r12, resAllocGranularity_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_resAllocGranularity_r12_constraint_1,
		&asn_PER_memb_resAllocGranularity_r12_constr_13,
		0,
		"resAllocGranularity-r12"
		},
};
static const int asn_MAP_NeighCellsInfo_r12_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_NeighCellsInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighCellsInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-b-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* crs-PortsCount-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mbsfn-SubframeConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p-aList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* transmissionModeList-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* resAllocGranularity-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NeighCellsInfo_r12_specs_1 = {
	sizeof(struct NeighCellsInfo_r12),
	offsetof(struct NeighCellsInfo_r12, _asn_ctx),
	asn_MAP_NeighCellsInfo_r12_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NeighCellsInfo_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellsInfo_r12 = {
	"NeighCellsInfo-r12",
	"NeighCellsInfo-r12",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NeighCellsInfo_r12_tags_1,
	sizeof(asn_DEF_NeighCellsInfo_r12_tags_1)
		/sizeof(asn_DEF_NeighCellsInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_NeighCellsInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighCellsInfo_r12_tags_1)
		/sizeof(asn_DEF_NeighCellsInfo_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NeighCellsInfo_r12_1,
	7,	/* Elements count */
	&asn_SPC_NeighCellsInfo_r12_specs_1	/* Additional specs */
};
