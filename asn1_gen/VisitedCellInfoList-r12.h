/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_VisitedCellInfoList_r12_H_
#define	_VisitedCellInfoList_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VisitedCellInfo_r12;

/* VisitedCellInfoList-r12 */
typedef struct VisitedCellInfoList_r12 {
	A_SEQUENCE_OF(struct VisitedCellInfo_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VisitedCellInfoList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VisitedCellInfoList_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VisitedCellInfo-r12.h"

#endif	/* _VisitedCellInfoList_r12_H_ */
#include <asn_internal.h>
