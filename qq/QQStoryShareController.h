//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQActivityViewController.h>

#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQStroyLinkDelegate-Protocol.h>
#import <QQMainProject/QQStructureMsgUtilityDelegate-Protocol.h>
#import <QQMainProject/RichMsgPreviewDialogDelegate-Protocol.h>

@class NSArray, NSString, PGCStoryModel, QQFriendSelectedViewController, QQNavigationController, QQStoryMsgExInfo, QQStructureMsgUtility, TBHotTopicPackModel, TBQQUserInfoModel;
@protocol QQStoryShareControllerDelegate;

@interface QQStoryShareController : QQActivityViewController <QQFriendSelectedViewControllerDelegate, QQStructureMsgUtilityDelegate, QQStroyLinkDelegate, RichMsgPreviewDialogDelegate>
{
    NSArray *_activities;
    int _shareType;
    NSString *_shareLink;
    QQNavigationController *_share2QZoneVC;
    QQFriendSelectedViewController *_friendSelectedViewController;
    QQStoryMsgExInfo *_storyExInfo;
    unsigned int _flag;
    QQStructureMsgUtility *_structureMsgUtility;
    id <QQStoryShareControllerDelegate> _delegate;
    PGCStoryModel *_storyModel;
    TBHotTopicPackModel *_ugcModel;
    TBQQUserInfoModel *_userModel;
}

@property(retain, nonatomic) TBQQUserInfoModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) TBHotTopicPackModel *ugcModel; // @synthesize ugcModel=_ugcModel;
@property(retain, nonatomic) PGCStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(nonatomic) __weak id <QQStoryShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealShareCopyLinkResult:(id)arg1;
- (void)getShortUrlsFailed:(id)arg1 error1:(int)arg2 error2:(int)arg3;
- (void)getShortUrlsSuccess:(id)arg1;
- (id)clipToRect:(id)arg1 rect:(struct CGRect)arg2;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (id)addPlayIcon:(id)arg1 size:(struct CGSize)arg2;
- (id)makeSmallCoverImage:(id)arg1;
- (id)makeQZoneSmallCoverImage:(id)arg1;
- (void)linkActivityDidAction:(id)arg1;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)cancelButtonClick;
- (void)shareToQZoneSuccess;
- (void)showShareLinkDialog;
- (void)dismissQZoneShareVC;
- (id)urlEncode:(id)arg1 onlyLinkSymbol:(_Bool)arg2;
- (id)getShareWeiboTitle;
- (void)doShareToWeibo:(id)arg1;
- (void)doShareToQZone:(id)arg1;
- (id)buildFriendSelectViewController:(id)arg1;
- (void)shareToFriendSuccess;
- (void)shareToFriendCancelled;
- (void)doShareToQQ:(id)arg1;
- (void)fixStoryShareInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestShareCoverImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)doShareToQQInternal;
- (void)onWeiXinResp:(id)arg1;
- (void)doShareToWeiXin:(id)arg1;
- (id)compressGroupHeadImageLimitTo32K:(id)arg1;
- (void)doShareToFriends:(id)arg1;
- (void)weixinNotInstallTips;
- (void)shareGroupLink:(id)arg1;
- (id)shareGroupCardShareLink:(id)arg1;
- (id)infoCardShareLink:(id)arg1;
- (int)shareFromType;
- (id)getCommonShareLinkWebPara;
- (id)getCommonShareLinkPara;
- (id)getShareFrom;
- (long long)getActionNameKey;
- (void)showGroupLinkActionSheet:(int)arg1;
- (void)viewDidLoad;
- (void)appNotInstall;
- (void)actionDidClick;
- (void)actionDidCancel;
- (void)actionDidFail;
- (void)actionDidSuccess;
- (void)shareDidDismiss:(id)arg1;
- (void)shareDidAppear:(id)arg1;
- (void)show;
- (id)initWithFlag:(id)arg1;
- (id)initWithFlag:(unsigned int)arg1 storyExInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

