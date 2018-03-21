//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APBNJSPluginProtocol-Protocol.h"
#import "APBirdNestServiceDelegate-Protocol.h"
#import "APSKLaunchpadDelegate-Protocol.h"
#import "FBDocumentDelegate-Protocol.h"

@class APBNJSPluginPage, APBirdNestPageOptions, APBirdNestSession, APSKLaunchpad, FBDocument, NSArray, NSDictionary, NSString, UIActivityIndicatorView;
@protocol APBirdNestServiceDelegate;

@interface APBirdNestAppViewController : DTViewController <FBDocumentDelegate, APSKLaunchpadDelegate, APBirdNestServiceDelegate, APBNJSPluginProtocol>
{
    float _viewHeight;
    APBirdNestPageOptions *_options;
    APBirdNestSession *_session;
    id <APBirdNestServiceDelegate> _delegate;
    FBDocument *_doc;
    NSString *_url;
    CDUnknownBlockType _share_js_callback;
    APSKLaunchpad *_skLaunchpad;
    NSDictionary *_shareParams;
    UIActivityIndicatorView *_loadingView;
    double _enterPageTime;
    APBNJSPluginPage *_JSPlugin;
    NSArray *_canHandleEventNameList;
}

@property(retain, nonatomic) NSArray *canHandleEventNameList; // @synthesize canHandleEventNameList=_canHandleEventNameList;
@property(retain, nonatomic) APBNJSPluginPage *JSPlugin; // @synthesize JSPlugin=_JSPlugin;
@property(nonatomic) double enterPageTime; // @synthesize enterPageTime=_enterPageTime;
@property(nonatomic) float viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSDictionary *shareParams; // @synthesize shareParams=_shareParams;
@property(retain, nonatomic) APSKLaunchpad *skLaunchpad; // @synthesize skLaunchpad=_skLaunchpad;
@property(copy, nonatomic) CDUnknownBlockType share_js_callback; // @synthesize share_js_callback=_share_js_callback;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
@property(nonatomic) __weak id <APBirdNestServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak APBirdNestSession *session; // @synthesize session=_session;
@property(retain, nonatomic) APBirdNestPageOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)contextMenu4Clicked;
- (void)contextMenu3Clicked;
- (void)contextMenu2Clicked;
- (void)contextMenu1Clicked;
- (void)contextMenu0Clicked;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize)onContainerSize;
- (void)setDocFrame:(struct CGRect)arg1;
- (id)viewById:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)showSharePad:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleJSEvent:(id)arg1;
- (_Bool)respondsToJSEvent:(id)arg1;
- (void)dealloc;
- (void)back;
- (void)registerJSPlugin;
- (id)autoAdaptImagePath:(id)arg1;
- (id)onReadImage:(id)arg1;
- (id)onReadFile:(id)arg1;
- (void)performJSMethod:(id)arg1 param:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)respondsToJSMethod:(id)arg1;
- (void)onAsyncEventNotify:(id)arg1 withDocument:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)tapGestureRecognizer:(id)arg1;
- (void)tryToExecuteJSMethod:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateNavBar;
- (void)renderDocument;
- (void)templateNotExist;
- (void)createBirdNestDocument;
- (void)viewWillLayoutSubviews;
- (void)refreshWithOptions:(id)arg1;
- (void)hideLoading;
- (void)viewDidLayoutSubviews;
- (void)showLoading;
- (void)viewDidLoad;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (id)initWithOptions:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

