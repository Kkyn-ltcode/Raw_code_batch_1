IN_PROC_BROWSER_TEST_F ( FullscreenControllerInteractiveTest , MAYBE_TestTabExitsMouseLockOnNavigation ) {
 ASSERT_TRUE ( test_server ( ) -> Start ( ) ) ;
 ui_test_utils : : NavigateToURL ( browser ( ) , test_server ( ) -> GetURL ( kFullscreenMouseLockHTML ) ) ;
 ASSERT_TRUE ( ui_test_utils : : SendKeyPressAndWait ( browser ( ) , ui : : VKEY_1 , false , false , false , false , chrome : : NOTIFICATION_MOUSE_LOCK_CHANGED , content : : NotificationService : : AllSources ( ) ) ) ;
 ASSERT_TRUE ( IsFullscreenBubbleDisplayed ( ) ) ;
 ASSERT_TRUE ( IsMouseLockPermissionRequested ( ) ) ;
 ASSERT_FALSE ( IsMouseLocked ( ) ) ;
 AcceptCurrentFullscreenOrMouseLockRequest ( ) ;
 ASSERT_TRUE ( IsMouseLocked ( ) ) ;
 ui_test_utils : : NavigateToURL ( browser ( ) , GURL ( "chrome:/ewtab" ) ) ;
 ASSERT_FALSE ( IsMouseLocked ( ) ) ;
 }