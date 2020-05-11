/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ControlType_H_
#define	_ControlType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ControlType {
	ControlType_signal	= 0,
	ControlType_stop	= 1,
	ControlType_yield	= 2,
	ControlType_closed	= 3,
	ControlType_direction	= 4,
	ControlType_lataffinity	= 5,
	ControlType_maxspeed	= 6,
	ControlType_minspeed	= 7,
	ControlType_minhdwy	= 8,
	ControlType_leftperm	= 9,
	ControlType_rightperm	= 10,
	ControlType_leftmrg	= 11,
	ControlType_rightmrg	= 12,
	ControlType_leftopnng	= 13,
	ControlType_rightopnng	= 14,
	ControlType_maxvehmass	= 15,
	ControlType_maxvehheight	= 16,
	ControlType_maxvehwidth	= 17,
	ControlType_maxvehlength	= 18,
	ControlType_maxaxles	= 19,
	ControlType_regchains	= 20,
	ControlType_restricted	= 21,
	ControlType_noparking	= 22,
	ControlType_vehicleocc	= 23,
	ControlType_notowing	= 24
} e_ControlType;

/* ControlType */
typedef long	 ControlType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ControlType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ControlType;
extern const asn_INTEGER_specifics_t asn_SPC_ControlType_specs_1;
asn_struct_free_f ControlType_free;
asn_struct_print_f ControlType_print;
asn_constr_check_f ControlType_constraint;
ber_type_decoder_f ControlType_decode_ber;
der_type_encoder_f ControlType_encode_der;
xer_type_decoder_f ControlType_decode_xer;
xer_type_encoder_f ControlType_encode_xer;
oer_type_decoder_f ControlType_decode_oer;
oer_type_encoder_f ControlType_encode_oer;
per_type_decoder_f ControlType_decode_uper;
per_type_encoder_f ControlType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ControlType_H_ */
#include <asn_internal.h>
