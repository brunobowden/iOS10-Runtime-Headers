/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject  {
    struct __CFURLStorageSession { } *_storageSession;
    struct _CFURLCache { } *_urlCache;
    SSAppPurchaseHistoryCache *_purchaseHistoryCache;
}


- (unsigned long long)purgeableSpace;
- (unsigned long long)purge:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end