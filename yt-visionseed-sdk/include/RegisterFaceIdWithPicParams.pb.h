/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Mon Jun 24 19:58:14 2019. */

#ifndef PB_REGISTERFACEIDWITHPICPARAMS_PB_H_INCLUDED
#define PB_REGISTERFACEIDWITHPICPARAMS_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _RegisterFaceIdWithPicParams {
    char faceId[32];
    char filePath[255];
/* @@protoc_insertion_point(struct:RegisterFaceIdWithPicParams) */
} RegisterFaceIdWithPicParams;

/* Default values for struct fields */

/* Initializer values for message structs */
#define RegisterFaceIdWithPicParams_init_default {"", ""}
#define RegisterFaceIdWithPicParams_init_zero    {"", ""}

/* Field tags (for use in manual encoding/decoding) */
#define RegisterFaceIdWithPicParams_faceId_tag   1
#define RegisterFaceIdWithPicParams_filePath_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t RegisterFaceIdWithPicParams_fields[3];

/* Maximum encoded size of messages (where known) */
#define RegisterFaceIdWithPicParams_size         292

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define REGISTERFACEIDWITHPICPARAMS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
