/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DataBLER_MCH_Result_r12_H_
#define	_DataBLER_MCH_Result_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "BLER-Result-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DataBLER-MCH-Result-r12 */
typedef struct DataBLER_MCH_Result_r12 {
	long	 mch_Index_r12;
	BLER_Result_r12_t	 dataBLER_Result_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataBLER_MCH_Result_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataBLER_MCH_Result_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _DataBLER_MCH_Result_r12_H_ */
#include <asn_internal.h>
