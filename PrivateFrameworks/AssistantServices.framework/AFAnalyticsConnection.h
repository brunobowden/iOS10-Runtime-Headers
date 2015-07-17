/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsConnection : NSObject <AFAnalyticsService> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _houseKeepingTimer;
    BOOL  _needsCleanUpConnection;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _stagedEventsBeingSent;
    NSMutableSet * _stagedEventsToBeSent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL needsCleanUpConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_finalizeSendingEvents:(id)arg1;
- (void)_handleBarrierCallbackForEvents:(id)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2;
- (void)_houseKeeperArrived;
- (void)_mutateStagedEventsSynchronouslyUsingBlock:(id /* block */)arg1;
- (unsigned int)_numberOfStagedEvents;
- (void)_processStagedEvents;
- (void)_sendEvents:(id)arg1;
- (void)_stageEvent:(id)arg1;
- (void)_stageEvents:(id)arg1;
- (void)_startHouseKeepingTimer;
- (void)_stopHouseKeepingTimer;
- (void)dealloc;
- (id)init;
- (BOOL)needsCleanUpConnection;
- (void)setNeedsCleanUpConnection:(BOOL)arg1;
- (oneway void)stageEvent:(id)arg1;
- (oneway void)stageEvents:(id)arg1;

@end