static void generate_json_float ( FBuffer * buffer , VALUE Vstate , JSON_Generator_State * state , VALUE obj ) {
 double value = RFLOAT_VALUE ( obj ) ;
 char allow_nan = state -> allow_nan ;
 VALUE tmp = rb_funcall ( obj , i_to_s , 0 ) ;
 if ( ! allow_nan ) {
 if ( isinf ( value ) ) {
 fbuffer_free ( buffer ) ;
 rb_raise ( eGeneratorError , "%u: %" PRIsVALUE " not allowed in JSON" , __LINE__ , RB_OBJ_STRING ( tmp ) ) ;
 }
 else if ( isnan ( value ) ) {
 fbuffer_free ( buffer ) ;
 rb_raise ( eGeneratorError , "%u: %" PRIsVALUE " not allowed in JSON" , __LINE__ , RB_OBJ_STRING ( tmp ) ) ;
 }
 }
 fbuffer_append_str ( buffer , tmp ) ;
 }