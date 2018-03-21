//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSString, ODJSBridgeMethodConfig, ODRoomPluginViewController, UIButton;
@protocol ODJSBridgeControlWindowDelegate, ODWebViewControllerDelegate;

@interface ODWebViewController : QQWebViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    ODJSBridgeMethodConfig *_jsMethodConfig;
    _Bool _leftButtonHidden;
    _Bool _disableNavBarSetting;
    id <ODWebViewControllerDelegate> _odWebViewDelegate;
    id <ODJSBridgeControlWindowDelegate> _jsBridgeCtrlWinDelegate;
    long long _iconType;
    UIButton *_backButton;
    ODRoomPluginViewController *_roomPluginController;
    long long _hywv;
}

@property(nonatomic) long long hywv; // @synthesize hywv=_hywv;
@property(nonatomic) _Bool disableNavBarSetting; // @synthesize disableNavBarSetting=_disableNavBarSetting;
@property(nonatomic) __weak ODRoomPluginViewController *roomPluginController; // @synthesize roomPluginController=_roomPluginController;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) __weak id <ODJSBridgeControlWindowDelegate> jsBridgeCtrlWinDelegate; // @synthesize jsBridgeCtrlWinDelegate=_jsBridgeCtrlWinDelegate;
@property(nonatomic) __weak id <ODWebViewControllerDelegate> odWebViewDelegate; // @synthesize odWebViewDelegate=_odWebViewDelegate;
- (void).cxx_destruct;
- (void)decideNavigationBarWithStyle;
- (void)loadStatusBar;
- (void)disableNavBarSeting:(_Bool)arg1;
- (void)setBackgroundTransparent:(_Bool)arg1;
- (void)closeWebView;
- (id)getPluginById;
- (void)setNavBarHide:(_Bool)arg1;
- (void)onBackButtonClick;
- (void)updateLeftButtonHidden;
@property(nonatomic) _Bool leftButtonHidden; // @synthesize leftButtonHidden=_leftButtonHidden;
- (void)setStatusBarStyle:(long long)arg1;
- (void)handelCommonQuery:(id)arg1;
- (_Bool)HandleRequest:(id)arg1;
- (void)navigationBarHandle;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUrl:(id)arg1 hywv:(long long)arg2;
- (id)initWithUrl:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setCookie;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

