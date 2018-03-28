//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTAccountMulticastProtocol-Protocol.h"
#import "TTDetailWebViewRequestProcessorDelegate-Protocol.h"
#import "TTDetailWebviewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class ArticleInfoManager, NSString, NSTimer, TTArticleCSPTracker, TTArticleDetailMonitor, TTArticleDetailTracker, TTArticleDetailViewModel, TTArticleDetailWebViewFooter, TTDetailModel, TTDetailWebviewContainer, TTPhotoScrollViewController, UITapGestureRecognizer;
@protocol TTArticleDetailViewDelegate;

@interface TTArticleDetailView : SSThemedView <TTDetailWebviewDelegate, TTDetailWebViewRequestProcessorDelegate, UIScrollViewDelegate, UIViewControllerErrorHandler, TTAccountMulticastProtocol, UIGestureRecognizerDelegate>
{
    _Bool _didDisAppear;
    _Bool _didEnterBackground;
    _Bool _isWebViewLoading;
    _Bool _webViewHasError;
    _Bool _webViewHasExecuteScriptJS;
    _Bool _webViewHasInsertedContextJS;
    NSString *_latestWebViewRequestURLString;
    NSString *_webViewURLBeforeRedirection;
    NSString *_webViewRedirectToURL;
    _Bool _webTypeContentStatusCodeChecked;
    _Bool _webTypeContentDidFinishLoadMonitorSent;
    _Bool _webViewAudioSessionCategorySet;
    _Bool _domReady;
    _Bool _shouldInterceptAutoJump;
    _Bool _didWebViewFinished;
    _Bool _hasInfomationGet;
    _Bool _hasInfomationJSInjected;
    TTDetailModel *_detailModel;
    TTArticleDetailViewModel *_detailViewModel;
    TTDetailWebviewContainer *_detailWebView;
    ArticleInfoManager *_infoManager;
    double _titleViewAnimationTriggerPosY;
    double _storyToolViewAnimationTriggerPosY;
    id <TTArticleDetailViewDelegate> _delegate;
    NSString *_requestUrlString;
    NSTimer *_countDownTimer;
    TTArticleDetailTracker *_tracker;
    TTArticleDetailMonitor *_monitor;
    TTArticleDetailWebViewFooter *_detailWebViewDivFooter;
    TTPhotoScrollViewController *_photoScrollViewController;
    UITapGestureRecognizer *_webTapGesture;
    double _clickTimeStamp;
    long long _webStayState;
    TTArticleCSPTracker *_cspTracker;
}

+ (id)sharedWebView;
+ (void)load;
@property(retain, nonatomic) TTArticleCSPTracker *cspTracker; // @synthesize cspTracker=_cspTracker;
@property(nonatomic) long long webStayState; // @synthesize webStayState=_webStayState;
@property(nonatomic) double clickTimeStamp; // @synthesize clickTimeStamp=_clickTimeStamp;
@property(retain, nonatomic) UITapGestureRecognizer *webTapGesture; // @synthesize webTapGesture=_webTapGesture;
@property(nonatomic) __weak TTPhotoScrollViewController *photoScrollViewController; // @synthesize photoScrollViewController=_photoScrollViewController;
@property(nonatomic) _Bool hasInfomationJSInjected; // @synthesize hasInfomationJSInjected=_hasInfomationJSInjected;
@property(nonatomic) _Bool hasInfomationGet; // @synthesize hasInfomationGet=_hasInfomationGet;
@property(nonatomic) _Bool didWebViewFinished; // @synthesize didWebViewFinished=_didWebViewFinished;
@property(retain, nonatomic) TTArticleDetailWebViewFooter *detailWebViewDivFooter; // @synthesize detailWebViewDivFooter=_detailWebViewDivFooter;
@property(retain, nonatomic) TTArticleDetailMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool shouldInterceptAutoJump; // @synthesize shouldInterceptAutoJump=_shouldInterceptAutoJump;
@property(retain, nonatomic) TTArticleDetailTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(copy, nonatomic) NSString *requestUrlString; // @synthesize requestUrlString=_requestUrlString;
@property(nonatomic) __weak id <TTArticleDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double storyToolViewAnimationTriggerPosY; // @synthesize storyToolViewAnimationTriggerPosY=_storyToolViewAnimationTriggerPosY;
@property(nonatomic) double titleViewAnimationTriggerPosY; // @synthesize titleViewAnimationTriggerPosY=_titleViewAnimationTriggerPosY;
@property(nonatomic) _Bool domReady; // @synthesize domReady=_domReady;
@property(retain, nonatomic) ArticleInfoManager *infoManager; // @synthesize infoManager=_infoManager;
@property(retain, nonatomic) TTDetailWebviewContainer *detailWebView; // @synthesize detailWebView=_detailWebView;
@property(retain, nonatomic) TTArticleDetailViewModel *detailViewModel; // @synthesize detailViewModel=_detailViewModel;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)p_didFinishedLoadInSharedWebView;
- (void)p_refreshContentInSharedWebView;
- (void)p_clearSharedWebViewContextIfNeed;
- (_Bool)p_needUseSharedWebView;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)processRequestShowSearchViewWithQuery:(id)arg1 fromType:(int)arg2 index:(unsigned long long)arg3;
- (void)processRequestOpenAppStoreByActionURL:(id)arg1 itunesID:(id)arg2;
- (void)processRequestShowPGCProfileWithParams:(id)arg1;
- (void)processRequestShowUserProfileForUserID:(id)arg1;
- (void)processRequestShowTipMsg:(id)arg1 icon:(id)arg2;
- (void)processRequestShowImgInPhotoScrollViewAtIndex:(unsigned long long)arg1 withFrameValue:(id)arg2;
- (void)processRequestOpenWebViewUseURL:(id)arg1 supportRotate:(_Bool)arg2;
- (void)processRequestUpdateArticleImageMode:(id)arg1;
- (void)processRequestReceiveDomReady;
- (void)guardTimerExceeded:(id)arg1;
- (void)stopCountDownTimer;
- (void)startCountDownTimer;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewWillCloseFooter;
- (void)webView:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)webView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewContainerInFooterHalfShowStatusWithScrollOffset:(double)arg1;
- (void)webViewContainerWillShowFirstCommentCellByScrolling;
- (void)webViewDidChangeContentSize;
- (_Bool)webViewContentIsNativeType;
- (_Bool)tt_hasValidateData;
- (void)pn_applicationStautsBarDidRotate;
- (void)pn_willEnterForeground;
- (void)pn_didEnterBackground;
- (void)pn_fontChanged;
- (void)p_handleTapGesture:(id)arg1;
- (_Bool)p_clickJumpRecognized;
- (_Bool)p_hasAudioInArticle;
- (void)p_pauseAudiosWhenDisappeared;
- (void)p_setWebViewAudioSessionCategoryIfNeed;
- (void)p_sendDetailTimeIntervalMonitorForService:(id)arg1;
- (void)p_uploadArticlePositionIfNeed;
- (void)p_skipReadPartIfNeed;
- (void)p_updateStoryToolViewAnimationTriggerPos;
- (void)p_updateTitleViewAnimationTriggerPos;
- (struct CGRect)p_frameForVisableRect;
- (void)p_addNotiCenterObservers;
- (void)p_execWebTypeArticleRedirectURLScript;
- (void)p_injectInfomationJSIfNeed;
- (void)p_insertJSContext:(id)arg1;
- (void)p_executeJsForWebViewWithJS:(id)arg1;
- (void)p_startLoadWebTypeContentDirectlyIfNeeded;
- (id)p_detailWebView:(id)arg1 stringByEvaluatingJavaScriptFromString:(id)arg2;
- (void)p_refreshDetailTheme;
- (void)p_removeLoadingView;
- (void)p_showLoadingView;
- (void)p_webViewUpdateFontSize;
- (_Bool)p_checkArticleReliable;
- (void)p_registerArticleWebViewVideoCallback;
- (id)categoryName;
- (id)enterFromString;
- (void)p_registerArticleWebViewImageCallback;
- (void)p_registerArticleWebViewJSCallback;
- (void)p_registerUserFollowActionCallback;
- (void)p_registerMenuItemTypos;
- (void)p_registerDislikeCallback;
- (void)p_registerActionSheetCallback;
- (void)p_registerADInfoCallback;
- (void)p_registerArticleDetailCloseCallback;
- (void)p_registerWebViewUserAgent;
- (void)p_startWebTransformWhenInfoGetIfNeed;
- (void)p_didStartLoadNativeContentForWebTimeoff;
- (void)p_startLoadNativeContentForWebTimeoffIfNeeded;
- (_Bool)p_canLoadNativeContentForWebTypeArticle;
- (void)p_refreshInformation;
- (void)p_startLoadWebTypeArticle;
- (void)p_startLoadNativeTypeArticleWithWKWebView;
- (void)p_startLoadNativeTypeArticleWithUIWebView;
- (void)p_startLoadNativeTypeArticle;
- (void)p_startLoadArticleContent;
- (void)p_startLoadForArticleDeleted;
- (void)p_deleteArticleIfNeeded;
- (void)tt_startLoadWebViewContent;
- (void)p_buildDetailWebView;
- (void)p_detailCommonInit;
- (void)p_initViewModel;
- (void)p_initMonitor;
- (void)p_initTracker;
- (void)p_initAdInfo;
- (void)tt_serverRequestTimeMonitorWithName:(id)arg1 error:(id)arg2;
- (void)tt_initializeServerRequestMonitorWithName:(id)arg1;
- (_Bool)tt_isNovelArticle;
- (void)tt_setNatantWithFooterView:(id)arg1 includingFooterScrollView:(id)arg2;
- (void)tt_deleteArticleByInfoFetchedIfNeeded;
- (void)tt_handleDetailViewWithInfoManager:(id)arg1;
- (void)tt_setContentAndExtraWithArticle:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (void)didDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2;
- (void)subscribeAction:(_Bool)arg1 withPGCID:(id)arg2;
- (unsigned long long)followNewSource;
- (void)p_sendSubscribeTrackWithLabel:(id)arg1 concernType:(id)arg2;
- (void)subscribe:(id)arg1 subscribeJSCallback:(CDUnknownBlockType)arg2;
- (void)registerJSBridge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
