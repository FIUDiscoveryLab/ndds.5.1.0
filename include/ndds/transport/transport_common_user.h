/* (c) Copyright, Real-Time Innovations, Inc. 2003-2009. All rights reserved. */
/*
 * @(#)transport_common_user.h    generated by: makeheader    Sat Nov 23 02:38:25 2013
 *
 *		built from:	common_user.ifc
 */

#ifndef transport_common_user_h
#define transport_common_user_h


#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif

#ifndef reda_buffer_h
#include "reda/reda_buffer.h"
#endif

#ifndef transport_dll_h
#include "transport/transport_dll.h"
#endif

#ifdef __cplusplus
    extern "C" {
#endif

struct TransportAllocationSettings_t {
    RTI_INT32 initial_count;
    RTI_INT32 max_count;
    RTI_INT32 incremental_count;
};


#define NDDS_TRANSPORT_ALLOCATION_SETTINGS_MAX_COUNT_UNLIMITED          (-1)


#define NDDS_TRANSPORT_ALLOCATION_SETTINGS_INCREMENTAL_COUNT_AUTOMATIC  (-1)


#define NDDS_TRANSPORT_ALLOCATION_SETTINGS_DEFAULT {                                \
        2L, /* initial_count */                                                     \
        NDDS_TRANSPORT_ALLOCATION_SETTINGS_MAX_COUNT_UNLIMITED, /* max_count */     \
        NDDS_TRANSPORT_ALLOCATION_SETTINGS_INCREMENTAL_COUNT_AUTOMATIC /* incremental_count */ \
}

typedef RTI_INT32 NDDS_Transport_ClassId_t;


#define NDDS_TRANSPORT_CLASSID_INVALID (-1)


#define NDDS_TRANSPORT_CLASSID_ANY (0)


#define NDDS_TRANSPORT_CLASSID_UDPv4        (1)  


#define NDDS_TRANSPORT_CLASSID_SHMEM        (2)  


#define NDDS_TRANSPORT_CLASSID_INTRA        (3)  


#define NDDS_TRANSPORT_CLASSID_UDPv6        (5)  


#define NDDS_TRANSPORT_CLASSID_DTLS         (6)


#define NDDS_TRANSPORT_CLASSID_WAN        (7)  


#define NDDS_TRANSPORT_CLASSID_TCPV4_LAN  (8)


#define NDDS_TRANSPORT_CLASSID_TCPV4_WAN  (9)


#define NDDS_TRANSPORT_CLASSNAME_TCPV4_WAN      "tcpv4_wan"


#define NDDS_TRANSPORT_CLASSID_TLSV4_LAN  (10)


#define NDDS_TRANSPORT_CLASSID_TLSV4_WAN  (11)


#define NDDS_TRANSPORT_CLASSID_PCIE        (12)  


#define NDDS_TRANSPORT_CLASSID_ITP        (13)


#define NDDS_TRANSPORT_CLASSID_RESERVED_RANGE  (1000)


#define NDDS_TRANSPORT_ADDRESS_LENGTH  (16)

typedef struct {
    /*e network-byte ordered (i.e., bit 0 is the most
      significant bit and bit 128 is the least significant bit).
    */
    unsigned char network_ordered_value[NDDS_TRANSPORT_ADDRESS_LENGTH];
} NDDS_Transport_Address_t;

extern NDDS_Transport_DllExport 
RTI_INT32 NDDS_Transport_Address_to_string(
    const NDDS_Transport_Address_t *self,
    char                           *buffer_inout,
    RTI_INT32                       buffer_length_in);

extern NDDS_Transport_DllExport 
RTI_INT32 NDDS_Transport_Address_from_string(
    NDDS_Transport_Address_t *address_out,
    const char               *address_in);

extern NDDS_Transport_DllExport 
RTIBool NDDS_Transport_get_address(
    const char* list, 
    int index, 
    char *toReturn);

extern NDDS_Transport_DllExport 
RTIBool NDDS_Transport_get_number_of_addresses_in_string(
    const char* list, RTI_UINT32 *number_out);

extern NDDS_Transport_DllExport 
void NDDS_Transport_Address_print(
    const NDDS_Transport_Address_t *address_in,
    const char                     *desc_in,
    RTI_INT32                       indent_in);

extern NDDS_Transport_DllExport 
void NDDS_Transport_Address_copy(
    NDDS_Transport_Address_t       *dst_out,
    const NDDS_Transport_Address_t *src_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_equal(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_bits_are_equal(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in,
    RTI_INT32 transport_address_bit_count_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_compare(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_ipv4(
    const NDDS_Transport_Address_t *address_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_multicast(
    const NDDS_Transport_Address_t *address_in);

extern NDDS_Transport_DllExport void NDDS_Transport_Address_from_ipv4_host_byte(
    NDDS_Transport_Address_t* me,
    RTI_UINT32 ipv4AddressInHostOrderIn);

extern NDDS_Transport_DllExport RTI_UINT32
NDDS_Transport_Address_to_ipv4_host_byte(const NDDS_Transport_Address_t* me);


#define NDDS_TRANSPORT_ADDRESS_INVALID  \
                {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}} 


#define NDDS_TRANSPORT_ADDRESS_STRING_BUFFER_SIZE     (40)


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* transport_common_user_h */
