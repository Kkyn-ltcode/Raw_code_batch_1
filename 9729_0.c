static VALUE mObject_to_json ( int argc , VALUE * argv , VALUE self ) {
 VALUE state ;
 VALUE string = rb_funcall ( self , i_to_s , 0 ) ;
 rb_scan_args ( argc , argv , "01" , & state ) ;
 Check_Type ( string , T_STRING ) ;
 state = cState_from_state_s ( cState , state ) ;
 return cState_partial_generate ( state , string ) ;
 }