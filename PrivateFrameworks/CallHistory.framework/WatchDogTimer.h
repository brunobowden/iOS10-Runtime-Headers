/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSString, NSObject<OS_dispatch_source>;

@interface WatchDogTimer : CHLogger  {
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}


- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(id)arg4;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;

@end