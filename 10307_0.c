static void sig_server_looking ( SERVER_REC * server ) {
 g_return_if_fail ( server != NULL ) ;
 printformat ( server , NULL , MSGLEVEL_CLIENTNOTICE , TXT_LOOKING_UP , server -> connrec -> address ) ;
 }