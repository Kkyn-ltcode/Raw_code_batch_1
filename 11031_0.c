static int dissect_h225_T_standard ( tvbuff_t * tvb _U_ , int offset _U_ , asn1_ctx_t * actx _U_ , proto_tree * tree _U_ , int hf_index _U_ ) {
 # line 874 "./asn1/h225/h225.cnf" guint32 value_int = ( guint32 ) - 1 ;
 gef_ctx_t * gefx ;
 offset = dissect_per_constrained_integer ( tvb , offset , actx , tree , hf_index , 0U , 16383U , & value_int , TRUE ) ;
 gefx = gef_ctx_get ( actx -> private_data ) ;
 if ( gefx ) gefx -> id = wmem_strdup_printf ( wmem_packet_scope ( ) , "%u" , value_int ) ;
 return offset ;
 }