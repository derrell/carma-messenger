/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityRequest_H_
#define	_MobilityRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobilityStrategy.h"
#include "MobilityPlanType.h"
#include "MobilityUrgency.h"
#include "MobilityLocation.h"
#include "MobilityParameters.h"
#include "MobilityTimestamp.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MobilityLocation;
struct MobilityLocationOffsets;

/* MobilityRequest */
typedef struct MobilityRequest {
	MobilityStrategy_t	 strategy;
	MobilityPlanType_t	 planType;
	MobilityUrgency_t	 urgency;
	MobilityLocation_t	 location;
	MobilityParameters_t	 strategyParams;
	struct MobilityLocation	*trajectoryStart	/* OPTIONAL */;
	struct MobilityLocationOffsets	*trajectory	/* OPTIONAL */;
	MobilityTimestamp_t	*expiration	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityRequest_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MobilityLocation.h"
#include "MobilityLocationOffsets.h"

#endif	/* _MobilityRequest_H_ */
#include <asn_internal.h>