/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSSoftwareUpdateStoreDelegate>, SSXPCConnection, NSObject<OS_dispatch_queue>, SSUpdatesDatabase;

@interface SSSoftwareUpdatesStore : NSObject  {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    SSXPCConnection *_connection;
    SSUpdatesDatabase *_database;
    <SSSoftwareUpdateStoreDelegate> *_delegate;
    BOOL _didMigration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_mobileCoreServices;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

@property <SSSoftwareUpdateStoreDelegate> * delegate;


- (void)_sendStoreDidChange;
- (void)showApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(id)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)getUpdatesWithCompletionBlock:(id)arg1;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id)arg1;
- (id)_copyUpdatesWithSession:(id)arg1;
- (BOOL)_migrateReadOnlyDatabase;
- (id)_copyUpdates;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end