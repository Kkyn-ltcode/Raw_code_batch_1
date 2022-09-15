static gboolean confirm_empty_trash ( CommonJob * job ) {
 char * prompt ;
 int response ;
 if ( ! should_confirm_trash ( ) ) {
 return TRUE ;
 }
 prompt = f ( _ ( "Empty all items from Trash?" ) ) ;
 response = run_warning ( job , prompt , f ( _ ( "All items in the Trash will be permanently deleted." ) ) , NULL , FALSE , CANCEL , _ ( "Empty _Trash" ) , NULL ) ;
 return ( response == 1 ) ;
 }