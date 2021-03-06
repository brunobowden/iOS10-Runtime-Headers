/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProcessStateManager : NSObject {
    BKSApplicationStateMonitor * _applicationMonitor;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    NSMutableDictionary * _currentProcessStateByBundleID;
    HDDaemon * _daemon;
    NSHashTable * _generalProcessObservers;
    NSMutableDictionary * _processObserversByBundleID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) HDDaemon *daemon;

+ (bool)applicationIsForeground:(id)arg1;
+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
+ (int)processIdentifierForApplicationIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_getApplicationStateForBundleIdentifier:(id)arg1;
- (void)_queue_stateChangeHandler:(id)arg1;
- (long long)countOfForegroundObservedApplications;
- (id)daemon;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (bool)isApplicationStateForegroundForBundleIdentifier:(id)arg1;
- (bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (void)registerAllProcessObserver:(id)arg1;
- (bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setDaemon:(id)arg1;
- (void)unregisterAllProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;

@end
