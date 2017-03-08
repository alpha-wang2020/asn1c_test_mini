/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType1_v9e0_IEs_H_
#define	_SystemInformationBlockType1_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfoList_v9e0;
struct SystemInformationBlockType1_v10j0_IEs;

/* SystemInformationBlockType1-v9e0-IEs */
typedef struct SystemInformationBlockType1_v9e0_IEs {
	FreqBandIndicator_v9e0_t	*freqBandIndicator_v9e0	/* OPTIONAL */;
	struct MultiBandInfoList_v9e0	*multiBandInfoList_v9e0	/* OPTIONAL */;
	struct SystemInformationBlockType1_v10j0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v9e0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiBandInfoList-v9e0.h"
#include "SystemInformationBlockType1-v10j0-IEs.h"

#endif	/* _SystemInformationBlockType1_v9e0_IEs_H_ */
#include <asn_internal.h>