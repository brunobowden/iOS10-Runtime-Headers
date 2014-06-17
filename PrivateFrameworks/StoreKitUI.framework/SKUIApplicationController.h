/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary, UIViewController, SKUIPreviewOverlayViewController, IKAppDataStorage, SKUIModalDocumentController, SKUIClientContext, NSMutableArray, SKUISimpleContainerViewController, NSArray, IKAppContext, SKUITabBarController, SKUIPreviewDocumentController, NSOperationQueue, <SKUIApplicationDelegate>, UITabBarController, SKUINavigationDocumentController, SKUIAppDeviceConfig, SKUIMetricsController, NSURL, SKUIURLResolver;

@interface SKUIApplicationController : NSObject <IKAppContextDelegate, IKApplication, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, SKUIURLResolverDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate> {
    NSURL *_applicationScriptURL;
    Class _clientContextClass;
    SKUIClientContext *_clientContext;
    <SKUIApplicationDelegate> *_delegate;
    SKUIAppDeviceConfig *_deviceConfig;
    bool_hidesTabBar;
    long long _lastNavigationControllerOperation;
    UIViewController *_lastPoppedViewController;
    NSDictionary *_launchOptions;
    IKAppDataStorage *_localStorage;
    SKUIModalDocumentController *_modalDocumentController;
    SKUIMetricsController *_metricsController;
    SKUISimpleContainerViewController *_navigationContainerViewController;
    NSMutableArray *_navigationDocumentControllers;
    NSOperationQueue *_operationQueue;
    SKUIPreviewDocumentController *_previewDocumentController;
    SKUIPreviewOverlayViewController *_previewOverlayViewController;
    UIViewController *_rootViewController;
    IKAppContext *_scriptContext;
    long long _scriptLoadState;
    SKUITabBarController *_tabBarController;
    NSArray *_tabBarItems;
    SKUINavigationDocumentController *_transientNavigationDocument;
    SKUIURLResolver *_urlResolver;
    IKAppDataStorage *_vendorStorage;
    NSMutableArray *_whenLoadedBlocks;
}

@property <SKUIApplicationDelegate> * delegate;
@property(readonly) SKUIClientContext * clientContext;
@property(readonly) UIViewController * rootViewController;
@property(readonly) UITabBarController * tabBarController;
@property(copy) NSArray * tabBarItems;
@property(readonly) long long _applicationMode;
@property(setter=_setHidesTabBar:) bool _hidesTabBar;
@property(readonly) NSArray * _navigationControllers;
@property(readonly) SKUIPreviewDocumentController * _previewOverlayDocumentController;
@property(setter=_setSelectedTabBarIndex:) long long _selectedTabBarIndex;
@property(readonly) SKUINavigationDocumentController * _transientNavigationController;

+ (id)applicationOptionsWithLaunchOptions:(id)arg1;

- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (id)appLaunchParams;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (bool)shouldIgnoreJSValidation;
- (id)appJSURL;
- (bool)appIsTrusted;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)vendorStorage;
- (id)localStorage;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)tabBarItems;
- (id)_previewOverlayDocumentController;
- (void)_setHidesTabBar:(bool)arg1;
- (bool)_hidesTabBar;
- (id)_transientNavigationController;
- (void)_setSelectedTabBarIndex:(long long)arg1;
- (long long)_selectedTabBarIndex;
- (void)_resetDocumentControllers;
- (id)_navigationControllers;
- (bool)appJSURLTrusted;
- (void)updateTabBarWithItems:(id)arg1 animated:(bool)arg2;
- (void)setTabBarItems:(id)arg1;
- (void)resumeApplicationWithOptions:(id)arg1;
- (void)evaluateBlockWhenLoaded:(id)arg1;
- (id)initWithClientContextClass:(Class)arg1;
- (void)modalDocumentControllerDidFinish:(id)arg1;
- (void)_sendClientContextDidChange;
- (void)loadApplication;
- (void)_handleScriptUnavailable;
- (void)_startScriptContextWithURL:(id)arg1;
- (long long)_applicationMode;
- (void)_resetUserInterfaceAfterStoreFrontChange;
- (bool)_isStoreFront:(id)arg1 equalToStoreFront:(id)arg2;
- (id)_selectedNavigationDocument;
- (void)_recordTabBarMetricsEventToSelectViewController:(id)arg1;
- (id)_documentControllerForNavigationController:(id)arg1;
- (void)recordMetricsEvent:(id)arg1 flushImmediately:(bool)arg2;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)showTransientViewController:(id)arg1;
- (void)_showFloatingPreviewOverlayAnimated:(bool)arg1;
- (bool)_usesFloatingPreviewOverlayForWidth:(double)arg1;
- (void)_showPreviewOverlayForNavigationController:(id)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (bool)_playPreviewForPreviewTemplate:(id)arg1;
- (void)_previewDocumentIsActiveChangeNotification:(id)arg1;
- (void)_reloadApplication;
- (void)_fireBlocksAfterLoad;
- (id)_newNavigationControllerWithTabBarItem:(id)arg1;
- (id)_transientNavigationDocument;
- (id)_launchOptionsWithURL:(id)arg1;
- (void)_reloadRootViewControllers;
- (void)_tintTabBarWithViewController:(id)arg1;
- (void)_dispatchTabBarOnSelect;
- (id)_tabBarController;
- (id)_navigationContainerViewController;
- (void)_setClientContextWithDictionary:(id)arg1;
- (void)_loadApplicationScript;
- (void)loadApplicationWithOptions:(id)arg1;
- (void)_storeFrontChangeNotification:(id)arg1;
- (void)_pageDidDisplayNotification:(id)arg1;
- (void)tabBarController:(id)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (void)showExternalURL:(id)arg1;
- (void)URLResolver:(id)arg1 didFinishWithResult:(bool)arg2;
- (void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
- (bool)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
- (void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;
- (id)presentationViewControllerForURLResolver:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id)arg2;
- (void)appContext:(id)arg1 setPreviewOverlayDocument:(id)arg2 withOptions:(id)arg3;
- (void)appContext:(id)arg1 didExitWithOptions:(id)arg2;
- (id)_operationQueue;
- (id)clientContext;
- (id)vendorIdentifier;
- (id)appIdentifier;
- (void)_failWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)tabBarController;
- (id)rootViewController;

@end