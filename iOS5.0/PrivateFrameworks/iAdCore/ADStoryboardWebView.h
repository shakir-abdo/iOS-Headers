/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADWebView.h>

#import "ADJSODelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class ADAdData, ADAdJSO, NSMutableArray, NSMutableSet, NSString, UIViewController;

@interface ADStoryboardWebView : ADWebView <ADJSODelegate, UIAlertViewDelegate>
{
    BOOL _scrollingEnabled;
    id <ADStoryboardWebViewDelegate><ADWebViewDelegate> _delegate;
    NSString *_qToken;
    BOOL _privilegedClient;
    BOOL _adManagesPurchaseFlow;
    UIViewController *_viewController;
    ADAdData *_adResponse;
    ADAdJSO *_adScriptObject;
    NSMutableArray *_mapPlugins;
    id _currentModalOwner;
    struct dispatch_queue_s *_scriptObjectModalAccessDispatchQueue;
    int _javaScriptAlertButtonIndex;
    BOOL _isShuttingDown;
    NSMutableSet *_activeJavaScriptAlerts;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *activeJavaScriptAlerts; // @synthesize activeJavaScriptAlerts=_activeJavaScriptAlerts;
@property BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property int javaScriptAlertButtonIndex; // @synthesize javaScriptAlertButtonIndex=_javaScriptAlertButtonIndex;
@property(nonatomic) struct dispatch_queue_s *scriptObjectModalAccessDispatchQueue; // @synthesize scriptObjectModalAccessDispatchQueue=_scriptObjectModalAccessDispatchQueue;
@property(retain, nonatomic) id currentModalOwner; // @synthesize currentModalOwner=_currentModalOwner;
@property(retain, nonatomic) NSMutableArray *mapPlugins; // @synthesize mapPlugins=_mapPlugins;
@property(retain, nonatomic) ADAdJSO *adScriptObject; // @synthesize adScriptObject=_adScriptObject;
@property(retain, nonatomic) ADAdData *adResponse; // @synthesize adResponse=_adResponse;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL adManagesPurchaseFlow; // @synthesize adManagesPurchaseFlow=_adManagesPurchaseFlow;
@property(nonatomic, getter=isPrivilegedClient) BOOL privilegedClient; // @synthesize privilegedClient=_privilegedClient;
@property(retain, nonatomic) NSString *qToken; // @synthesize qToken=_qToken;
@property(nonatomic) id <ADWebViewDelegate><ADStoryboardWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL scrollingEnabled; // @synthesize scrollingEnabled=_scrollingEnabled;
- (id)scriptObject:(id)arg1 requestsURLForString:(id)arg2 allowOtherDomains:(BOOL)arg3 error:(id *)arg4;
- (int)interfaceOrientation;
- (struct CGRect)bannerRectOnScreen;
- (struct CGPoint)tapLocation;
- (id)bannerParameters;
- (id)humanReadableNameForContent;
- (void)logForPrivilegedClients:(id)arg1;
- (void)scriptObjectContentSignalsReady:(id)arg1;
- (void)javaScriptObjectDidFinishModalActivity:(id)arg1;
- (void)scriptObject:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
- (void)scriptObject:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(struct CGRect)arg3 animated:(BOOL)arg4;
- (void)scriptObject:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)javaScriptObjectShouldBeginModalActivity:(id)arg1;
- (void)scriptObjectDidTakeScreenShot:(id)arg1;
- (void)scriptObjectWillTakeScreenShot:(id)arg1;
- (void)scriptObjectRequestsGeolocation:(id)arg1;
- (void)privilegedAdWantsToDismiss;
- (void)scriptObject:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned int)arg2;
- (void)scriptObject:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (void)scriptObject:(id)arg1 didReportClickEventWithContext:(id)arg2;
- (void)scriptObject:(id)arg1 didCreateView:(id)arg2;
- (id)webViewForScriptObject:(id)arg1;
- (id)scriptObjectValueForQToken:(id)arg1;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
@property(readonly, nonatomic) BOOL isBusy;
- (void)clientApplicationDidBecomeActive;
- (void)clientApplicationDidResignActive;
- (void)willUnloadContent;
- (void)setPaused:(BOOL)arg1;
@property(readonly) float estimatedProgress;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mapPluginDestroyed:(id)arg1;
- (void)configureMapPlugin:(id)arg1;
- (void)dealloc;

@end

