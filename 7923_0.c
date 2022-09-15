static void print_value ( FILE * file , MYSQL_RES * result , MYSQL_ROW row , const char * prefix , const char * name , int string_value ) {
 MYSQL_FIELD * field ;
 mysql_field_seek ( result , 0 ) ;
 for ( ;
 ( field = mysql_fetch_field ( result ) ) ;
 row ++ ) {
 if ( ! strcmp ( field -> name , name ) ) {
 if ( row [ 0 ] && row [ 0 ] [ 0 ] && strcmp ( row [ 0 ] , "0" ) ) {
 fputc ( ' ' , file ) ;
 fputs ( prefix , file ) ;
 if ( string_value ) unescape ( file , row [ 0 ] , strlen ( row [ 0 ] ) ) ;
 else fputs ( row [ 0 ] , file ) ;
 check_io ( file ) ;
 return ;
 }
 }
 }
 return ;
 }