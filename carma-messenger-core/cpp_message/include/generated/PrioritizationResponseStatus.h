/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_PrioritizationResponseStatus_H_
#define	_PrioritizationResponseStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PrioritizationResponseStatus {
	PrioritizationResponseStatus_unknown	= 0,
	PrioritizationResponseStatus_requested	= 1,
	PrioritizationResponseStatus_processing	= 2,
	PrioritizationResponseStatus_watchOtherTraffic	= 3,
	PrioritizationResponseStatus_granted	= 4,
	PrioritizationResponseStatus_rejected	= 5,
	PrioritizationResponseStatus_maxPresence	= 6,
	PrioritizationResponseStatus_reserviceLocked	= 7
	/*
	 * Enumeration is extensible
	 */
} e_PrioritizationResponseStatus;

/* PrioritizationResponseStatus */
typedef long	 PrioritizationResponseStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PrioritizationResponseStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PrioritizationResponseStatus;
extern const asn_INTEGER_specifics_t asn_SPC_PrioritizationResponseStatus_specs_1;
asn_struct_free_f PrioritizationResponseStatus_free;
asn_struct_print_f PrioritizationResponseStatus_print;
asn_constr_check_f PrioritizationResponseStatus_constraint;
ber_type_decoder_f PrioritizationResponseStatus_decode_ber;
der_type_encoder_f PrioritizationResponseStatus_encode_der;
xer_type_decoder_f PrioritizationResponseStatus_decode_xer;
xer_type_encoder_f PrioritizationResponseStatus_encode_xer;
oer_type_decoder_f PrioritizationResponseStatus_decode_oer;
oer_type_encoder_f PrioritizationResponseStatus_encode_oer;
per_type_decoder_f PrioritizationResponseStatus_decode_uper;
per_type_encoder_f PrioritizationResponseStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PrioritizationResponseStatus_H_ */
#include <asn_internal.h>
