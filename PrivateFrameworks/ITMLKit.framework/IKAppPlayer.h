/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppContext, IKJSPlayer, <IKAppPlayerDelegate>;

@interface IKAppPlayer : NSObject <IKJSPlayerAppBridge, IKJSDOMFeature> {
    IKAppContext *_appContext;
    <IKAppPlayerDelegate> *_delegate;
    IKJSPlayer *_jsPlayer;
}

@property <IKAppPlayerDelegate> * delegate;
@property IKJSPlayer * jsPlayer;
@property IKAppContext * appContext;


- (id)retrieveJSFeature;
- (void)migrateFromFeature:(id)arg1;
- (id)featureName;
- (id)jsPlayer;
- (void)setJsPlayer:(id)arg1;
- (id)currentAVMediaElementForPlayer:(id)arg1;
- (void)setAppContext:(id)arg1;
- (id)appContext;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end