//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTModalWrapControllerProtocol-Protocol.h"

@class NSString, SSJSBridgeWebView;

@interface TTPopupBrowserController : SSViewControllerBase <TTModalWrapControllerProtocol>
{
    SSJSBridgeWebView *_webview;
    NSString *_url;
}

+ (id)reassginedUserInfoWithParamObj:(id)arg1;
+ (long long)preferredRouteViewControllerOpenStyle;
+ (void)load;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) SSJSBridgeWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (_Bool)shouldInterceptBackBarItemInModalContainer;
- (_Bool)hiddenTitleViewBottomLineInModalContainer;
- (unsigned long long)leftBarItemStyle;
- (_Bool)shouldDisableRightSwipeGesture;
- (id)simultaneouslyPullGestureViews;
- (id)tt_scrollView;
- (id)presentNavigationControllerName;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasNestedInModalContainer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
