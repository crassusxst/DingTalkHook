//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LAWebViewProgressEstimaterDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class LAWebScrollViewDelegateIMP, LAWebViewProgressEstimater, NSString, NSTimer, NSURL, NSURLRequest, UIScrollView;
@protocol LAWebViewDelegate, UIScrollViewDelegate;

@interface LAWebView : UIView <UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate, LAWebViewProgressEstimaterDelegate>
{
    _Bool _scalesPageToFit;
    id <LAWebViewDelegate> _delegate;
    NSString *_title;
    id _realWebView;
    long long _webViewType;
    double _estimatedProgress;
    NSURLRequest *_originRequest;
    NSURLRequest *_currentRequest;
    NSTimer *_wkRequestTimmer;
    long long _expiredTimes;
    long long _terminateTimes;
    LAWebViewProgressEstimater *_progressEstimater;
    LAWebScrollViewDelegateIMP *_wkScrollDelegateIMP;
}

+ (void)optimizeConfiguration:(id)arg1;
+ (id)configurationWithSharedPool;
+ (id)exclusiveConfiguration;
+ (id)sharedProcessPool;
+ (void)resetSharedRelatedWebView;
+ (id)sharedRelatedWebView;
@property(retain, nonatomic) LAWebScrollViewDelegateIMP *wkScrollDelegateIMP; // @synthesize wkScrollDelegateIMP=_wkScrollDelegateIMP;
@property(retain, nonatomic) LAWebViewProgressEstimater *progressEstimater; // @synthesize progressEstimater=_progressEstimater;
@property(nonatomic) long long terminateTimes; // @synthesize terminateTimes=_terminateTimes;
@property(nonatomic) long long expiredTimes; // @synthesize expiredTimes=_expiredTimes;
@property(retain, nonatomic) NSTimer *wkRequestTimmer; // @synthesize wkRequestTimmer=_wkRequestTimmer;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSURLRequest *originRequest; // @synthesize originRequest=_originRequest;
@property(nonatomic) double estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(nonatomic) long long webViewType; // @synthesize webViewType=_webViewType;
@property(retain, nonatomic) id realWebView; // @synthesize realWebView=_realWebView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <LAWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)gobackWithStep:(long long)arg1;
- (long long)countOfHistory;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 timeout:(double)arg2;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
- (void)sharedWKWebViewExpired;
- (void)stopWKWebViewRequestTimer;
- (void)startWKWebViewReuqestTimer;
- (void)stopLoading;
- (id)reloadFromOrigin;
- (id)reload;
- (id)goForward;
- (id)goBack;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSURL *URL;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
- (void)callback_webViewProgress:(double)arg1;
- (void)callback_webViewDidFailLoadWithError:(id)arg1;
- (void)callback_webViewDidFinishLoad;
- (void)callback_webViewDidStartLoad;
- (_Bool)callback_webViewShouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)specialSchema:(id)arg1;
- (void)estimater:(id)arg1 updateProgress:(double)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)initUIWebView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initWKWebView;
- (void)_privateInit;
- (id)initWithFrame:(struct CGRect)arg1 webViewType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)wkWebView:(id)arg1 snapshotViewFromRect:(struct CGRect)arg2 withCapInsets:(struct UIEdgeInsets)arg3;
- (id)uiWebView:(id)arg1 snapshotViewFromRect:(struct CGRect)arg2 withCapInsets:(struct UIEdgeInsets)arg3;
- (id)webContentCaptureImage;
- (id)cropImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)screenCapture:(struct CGRect)arg1;
- (void)callback:(CDUnknownBlockType)arg1 point:(struct CGPoint)arg2;
- (void)jsp_htmlScrollOffset:(CDUnknownBlockType)arg1;
- (struct CGPoint)jsp_htmlScrollOffset;
- (void)callback:(CDUnknownBlockType)arg1 size:(struct CGSize)arg2;
- (void)jsp_htmlContentSize:(CDUnknownBlockType)arg1;
- (struct CGSize)jsp_htmlContentSize;
- (void)jsp_webKitTouchCallout:(CDUnknownBlockType)arg1;
- (_Bool)jsp_webKitTouchCallout;
- (void)setJsp_webKitTouchCallout:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

