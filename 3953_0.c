static int dissect_h245_OCTET_STRING_SIZE_6 ( tvbuff_t * tvb _U_ , int offset _U_ , asn1_ctx_t * actx _U_ , proto_tree * tree _U_ , int hf_index _U_ ) {
 offset = dissect_per_octet_string ( tvb , offset , actx , tree , hf_index , 6 , 6 , FALSE , NULL ) ;
 return offset ;
 }