//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/ActionSheetDataDelegate-Protocol.h>
#import <QQMainProject/IQQPreviewStatus-Protocol.h>
#import <QQMainProject/ISkinProtocol-Protocol.h>
#import <QQMainProject/UserSummaryNavBarItemDelagate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, PreviewTitleBar, QQReadInJoyVideoFullScreenAssistant, QQVIPFunctionComicTabBarView, QQView, ReadInJoyVideoArticleModel, ThemeBackgroundAnimateImageView, UIActivityIndicatorView, UIButton, UILabel, UIView, UserSummaryNavigationBar;
@protocol QQPreviewActionDelegate, QQPreviewApearStateDelegate, QQReadInJoyVideoCellShareDelegate, QQReadInJoyVideoShareAutoPlayDelegate;

@interface QQViewController : UIViewController <UserSummaryNavBarItemDelagate, ActionSheetDataDelegate, ISkinProtocol, IQQPreviewStatus>
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    QQView *_mainView;
    NSString *_controllerTitle;
    _Bool _notChangeLbtn;
    int _maxLeftTitleNum;
    NSString *_setSuperTitle;
    int _viewTag;
    _Bool _bPreviewStatus;
    PreviewTitleBar *_privateTitleBar;
    UILabel *_titleLabel;
    _Bool _isPushViewController;
    _Bool _isAccountRelated;
    UIActivityIndicatorView *_actView;
    NSMutableDictionary *_timeoutHandlers;
    _Bool _shouldReloadAppearance;
    _Bool _canAddGesture;
    _Bool _bTextRightButton;
    id <QQPreviewApearStateDelegate> _previewDelegate;
    id <QQPreviewActionDelegate> _previewActionDelegate;
    _Bool _slideOutDrawerWhenSwipe;
    _Bool _showLeftButtonImg;
    unsigned long long _viewID;
    _Bool _isRestoreNavigationBar;
    ThemeBackgroundAnimateImageView *_bgApngImageView;
    int _xo;
    UIView *navigationBarView;
}

+ (id)getVisibleRootView;
+ (_Bool)CanShowAnimated;
+ (void)showShareAppWebViewController:(id)arg1 title:(id)arg2 shareAppID:(unsigned int)arg3 shareIcon:(id)arg4 webViewStyle:(long long)arg5 stackStyle:(int)arg6 andModel:(id)arg7;
+ (void)showNoStyleTestWebController:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4;
+ (void)showWebController:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 msgModel:(id)arg5;
+ (Class)webviewClassForWebviewType:(long long)arg1;
@property int maxLeftTitleNum; // @synthesize maxLeftTitleNum=_maxLeftTitleNum;
- (void)adjustScrollViewInsets;
- (void)setAutomaticallyAdjustsScrollViewInsets:(_Bool)arg1;
- (id)animateBackgroundViewWithFilePath:(id)arg1 defaultImage:(id)arg2;
- (void)addBgApngImageViewWithFilePath:(id)arg1 defaultImage:(id)arg2 aboveView:(id)arg3;
- (void)removeBgApngImageView;
- (void)setBgApngImageViewWithFilePath:(id)arg1 defaultImage:(id)arg2 aboveView:(id)arg3;
- (void)viewDidAppearHandleNavi;
- (void)viewWillAppearHandleNavi;
- (void)cz_mv_addSubview:(id)arg1;
- (void)viewWillDisappearOnNormalStatus;
- (void)viewWillAppearOnNormalStatus;
- (void)viewWillDisappearOnPreviewStatus;
- (void)viewWillAppearOnPreviewStatus;
- (void)onActionItemDidSelectecd:(int)arg1 actionItem:(id)arg2;
- (id)previewActionItems;
- (void)leavePreviewStatus;
- (void)enterPreviewStatus;
- (_Bool)isPreviewing;
- (_Bool)isSupportPreview;
- (_Bool)accessibilityPerformEscape;
- (void)removeUnreadCountGesture;
- (void)addUnreadCountGesture;
@property(nonatomic) unsigned long long viewID; // @dynamic viewID;
@property(nonatomic) int viewTag; // @dynamic viewTag;
- (_Bool)isSupportFullScreenLayout;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)handleQQThemeChangedNotification:(id)arg1;
- (void)reloadAppearanceIfNeeded;
- (void)reloadAppearance;
- (void)setTabBarHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popQQController:(_Bool)arg1;
- (void)pushQQViewControllerToNav:(id)arg1 animated:(_Bool)arg2;
- (void)pushQQViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=getNavigationBarView) UIView *navigationBarView; // @synthesize navigationBarView;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (id)actView;
- (void)removeRightButton;
@property(retain, nonatomic) UIButton *rightButton; // @dynamic rightButton;
- (void)createTextRightButton:(id)arg1 action:(SEL)arg2 eventType:(long long)arg3 andShowRedPoint:(_Bool)arg4;
- (void)createTextRightButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)createTextRightButton:(id)arg1 action:(SEL)arg2;
- (void)createDoubleImageRightButton:(id)arg1 firAction:(SEL)arg2 firVoiceStr:(id)arg3 secIconName:(id)arg4 secAction:(SEL)arg5 secVoiceStr:(id)arg6;
- (id)imageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3;
- (id)imageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3 useDefaultIcon:(_Bool)arg4;
- (void)createImageRightButtonWithNormalIcon:(id)arg1 selectedIcon:(id)arg2 action:(SEL)arg3;
- (void)createImageRightButton:(id)arg1 action:(SEL)arg2;
- (void)rigthButtonClick:(id)arg1;
- (void)createDefaultImageRightButton;
- (void)updateButton:(id)arg1 color:(id)arg2;
- (void)removeLeftButton;
- (void)setLeftButton:(id)arg1;
- (void)onHeadButtonClick;
- (void)createTabAvatarLeftButton;
- (void)createAIOLeftButton;
- (void)createTextLeftButton:(id)arg1 action:(SEL)arg2;
- (id)GetLeftButtonTitle;
- (void)leftButtonClick:(id)arg1;
- (void)reSetLeftButtonTitle;
- (void)ResetLeftButton;
- (id)getCustomTitleView:(id)arg1 subTitle:(id)arg2 color:(id)arg3;
- (void)resetTitleView;
- (void)setCustomTitleView:(id)arg1;
- (void)resetTitleLabelFrame;
@property(retain, nonatomic) NSString *controllerTitle; // @dynamic controllerTitle;
- (void)setControllerTitleWithoutUpdateTitleView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)clickBottomTab;
- (void)removeTimeoutHandler;
- (void)addTimeoutHandler:(SEL)arg1 interval:(double)arg2;
- (void)removeTimeoutHandler:(id)arg1;
- (void)addTimeoutHandler:(id)arg1 selector:(SEL)arg2 interval:(double)arg3;
- (void)commonTimeoutHandler:(id)arg1;
- (void)onStartPushing:(id)arg1;
- (void)onStartPopping:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)printViewControllerInfo:(id)arg1;
- (void)checkPreviewStatus;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)judgeNavigationBarDistroyed;
- (id)topNavigationController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)loadStatusBar;
- (void)restoreData;
- (void)handleGestureRecognizerRight:(id)arg1;
- (void)firAction;
@property(readonly, nonatomic) UIButton *leftButton; // @dynamic leftButton;
- (void)ActionLogin;
- (id)GetCurrentTitle;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)releaseUI;
- (void)dealloc;
- (void)clearReference:(id)arg1;
@property(readonly, nonatomic, getter=visible) _Bool visible;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)getCustomTitleView:(id)arg1 titleColor:(id)arg2 subTitle:(id)arg3 subTitleColor:(id)arg4;
- (void)viewDidBecomeInvisible;
- (void)viewWillBecomeVisible;
@property(nonatomic) unsigned long long navigationBarStyle;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)navigationBarHandleWithLeftTitle:(id)arg1;
- (void)navigationBarHandle;
- (void)restoreNavigationBarWithColor:(id)arg1;
@property(nonatomic) unsigned long long displayLevelInComic;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible;
@property(nonatomic) _Bool hidesComicTabBarWhenPushed;
@property(retain, nonatomic) QQVIPFunctionComicTabBarView *comicTabBar;
@property(retain, nonatomic) UserSummaryNavigationBar *navigationBar;
- (int)getPbArticleSourceWithAIO;
- (void)didSelectedSendFlwMember:(id)arg1;
- (void)openImagePicker:(unsigned long long)arg1;
- (void)openWebURL:(id)arg1 withTitle:(id)arg2;
- (_Bool)openNativeURL:(id)arg1 withTitle:(id)arg2 params:(id)arg3;
- (_Bool)openActionURL:(id)arg1 withTitle:(id)arg2;
- (void)reportPublicAccountGroupMsgClick:(id)arg1;
- (id)appendUinIfPAQQJumpUrl:(id)arg1;
- (void)didSelectURL:(id)arg1 msgModel:(id)arg2;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2;
- (void)showWebUrl:(id)arg1 webTitle:(id)arg2 style:(long long)arg3;
- (void)openSharedURL:(id)arg1 withModel:(id)arg2;
- (void)showQQBrowser:(id)arg1;
- (void)openUrl:(id)arg1 withTitle:(id)arg2 isSupportOrientations:(_Bool)arg3;
- (void)openUrl:(id)arg1 withTitle:(id)arg2;
- (void)showWebViewBottomBarNoSharePush:(id)arg1 title:(id)arg2;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5 reportSourceInfo:(id)arg6 JDWeb:(_Bool)arg7;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5 reportSourceInfo:(id)arg6;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 supportOrientations:(_Bool)arg5;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4;
- (void)showWebView:(id)arg1 title:(id)arg2 webViewStyle:(long long)arg3 stackStyle:(int)arg4 recomposing:(_Bool)arg5;
- (void)openUrl:(id)arg1 withTitle:(id)arg2 recomposing:(_Bool)arg3;
- (void)showWebView:(id)arg1 extraData:(id)arg2;
- (_Bool)isEmailReadUrl:(id)arg1;
- (CDUnknownBlockType)didRemovedBlock;
- (void)setDidRemovedBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double outTimeStamp;
@property(nonatomic) double inTimeStamp;
@property(nonatomic) _Bool recordDurationManual;
- (void)callDidRemovedBlockIfNeed;
- (void)stopRecordInQQViewControllerIfNeed;
- (void)startRecordInQQViewControllerIfNeed;
- (void)recordStayDuration:(CDUnknownBlockType)arg1;
- (double)stayDuration;
- (void)report88B4:(int)arg1;
- (void)report740F:(int)arg1;
- (void)actionSheetClickedAtIndexForVideo:(int)arg1 sender:(id)arg2;
- (id)urlEncode:(id)arg1;
- (void)shareToWeiboWithRichMsgData:(id)arg1 image:(id)arg2 presentCompletion:(CDUnknownBlockType)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
- (void)shareToWeiboWithRichMsgData:(id)arg1 presentCompletion:(CDUnknownBlockType)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
- (void)shareVideoWithSinaWeibo:(id)arg1;
- (void)didShareToQzoneWithNotification:(id)arg1;
- (void)shareVideoWithQzone:(id)arg1;
- (void)shareVideoWithFriend:(id)arg1;
- (void)dismissCompleted;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(id)arg2;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2 urlRichData:(id)arg3;
@property(nonatomic) _Bool isSharingTopic;
@property(nonatomic) _Bool isTopic;
@property(nonatomic, getter=isShowingSLVC) _Bool showingSLVC;
@property(retain, nonatomic) NSDictionary *sharingInfo;
@property(retain, nonatomic) NSNumber *sharingChannelID;
@property(nonatomic) id <QQReadInJoyVideoShareAutoPlayDelegate> autoPlayDelegate;
@property(retain, nonatomic) QQReadInJoyVideoFullScreenAssistant *assistant;
@property(nonatomic, getter=isShowingActionSheet) _Bool showingActionSheet;
@property(nonatomic, getter=isDisablePlayAfterActionSheetDismiss) _Bool disablePlayAfterActionSheetDismiss;
@property(copy, nonatomic) NSString *likeCountString;
@property(copy, nonatomic) NSString *playCountString;
@property(retain, nonatomic) ReadInJoyVideoArticleModel *sharingVideoArticleModel;
@property(retain, nonatomic) id <QQReadInJoyVideoCellShareDelegate> sharingVideoCell;
- (void)presentModal:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool bTextRightButton; // @dynamic bTextRightButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAccountRelated; // @dynamic isAccountRelated;
@property(nonatomic) _Bool isPushViewController; // @dynamic isPushViewController;
@property(nonatomic) _Bool isRestoreNavigationBar; // @dynamic isRestoreNavigationBar;
@property(retain, nonatomic) QQView *mainView; // @dynamic mainView;
@property(nonatomic) _Bool notChangeLbtn; // @dynamic notChangeLbtn;
@property(nonatomic) id <QQPreviewActionDelegate> previewActionDelegate; // @dynamic previewActionDelegate;
@property(nonatomic) id <QQPreviewApearStateDelegate> previewDelegate; // @dynamic previewDelegate;
@property(retain, nonatomic) NSString *setSuperTitle; // @dynamic setSuperTitle;
@property(nonatomic) _Bool showLeftButtonImg; // @dynamic showLeftButtonImg;
@property(nonatomic) _Bool slideOutDrawerWhenSwipe; // @dynamic slideOutDrawerWhenSwipe;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

