//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemePlayInteractionDelegate-Protocol.h"
#import "AWEPreviewable-Protocol.h"
#import "AWEShareGuideDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWEAdOperationGuideView, AWEAwemeModel, AWEAwemeMusicInfoView, AWEAwemePlayDislikeViewController, AWEAwemePlayInteractionPresenter, AWEBubble, AWEButton, AWECommentListViewController, AWEDynamicLabel, AWEFeedLearnMoreView, AWEFeedLiveMarkView, AWEFeedTagsView, AWEFeedVideoButton, AWELoadingAndVolumeView, AWEMarkView, AWEMusicAnimationView, AWEMusicCoverButton, AWERedPacketView, LOTAnimationView, MPVolumeView, NSString, NSTimer, TTTAttributedLabel, UILabel, UILongPressGestureRecognizer, UITextView, UIView;
@protocol AWEAwemePlayVideoDelegate, AWEGoodsListViewProtocol;

@interface AWEAwemePlayInteractionViewController : UIViewController <AWEPreviewable, TTTAttributedLabelDelegate, AWEShareGuideDelegate, AWEAwemePlayInteractionDelegate>
{
    _Bool _isRedPacketShowed;
    _Bool _showFollowStatus;
    _Bool _pureMode;
    _Bool _hasStickerShow;
    long long _mediaType;
    NSString *_referString;
    AWEAwemeModel *_model;
    id <AWEAwemePlayVideoDelegate> _videoDelegate;
    double _controlOffset;
    CDUnknownBlockType _pureModeBlock;
    AWERedPacketView *_redPacketView;
    NSTimer *_timer;
    AWEAwemePlayInteractionPresenter *_presenter;
    AWEFeedVideoButton *_shoppingCartButton;
    AWEButton *_userAvatarButton;
    AWEFeedLiveMarkView *_liveMarkView;
    UIView *_followPromptView;
    LOTAnimationView *_followAnimationView;
    AWEFeedVideoButton *_likeButton;
    LOTAnimationView *_likeAnimationView;
    AWEFeedVideoButton *_commentButton;
    AWEFeedVideoButton *_shareButton;
    AWEMusicCoverButton *_musicButton;
    AWEBubble *_musicGuideBubbleView;
    AWEMarkView *_challengeButton;
    AWEMarkView *_poiButton;
    AWEButton *_authorButton;
    UILabel *_authorLabel;
    AWEFeedTagsView *_tagsView;
    AWEDynamicLabel *_dynamicLabel;
    UITextView *_adDescriptionTextView;
    TTTAttributedLabel *_descriptionLabel;
    AWEAwemeMusicInfoView *_musicInfoView;
    AWEMusicAnimationView *_musicAnimationView;
    AWECommentListViewController *_commentVC;
    AWELoadingAndVolumeView *_loadAndVolumeView;
    MPVolumeView *_volumeView;
    UILongPressGestureRecognizer *_dislikeGesture;
    AWEAwemePlayDislikeViewController *_dislikeViewController;
    id <AWEGoodsListViewProtocol> _goodsCollectionVC;
    AWEFeedLearnMoreView *_learnMoreView;
    AWEAdOperationGuideView *_adOperationView;
}

@property(retain, nonatomic) AWEAdOperationGuideView *adOperationView; // @synthesize adOperationView=_adOperationView;
@property(retain, nonatomic) AWEFeedLearnMoreView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
@property(retain, nonatomic) id <AWEGoodsListViewProtocol> goodsCollectionVC; // @synthesize goodsCollectionVC=_goodsCollectionVC;
@property(retain, nonatomic) AWEAwemePlayDislikeViewController *dislikeViewController; // @synthesize dislikeViewController=_dislikeViewController;
@property(retain, nonatomic) UILongPressGestureRecognizer *dislikeGesture; // @synthesize dislikeGesture=_dislikeGesture;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) AWELoadingAndVolumeView *loadAndVolumeView; // @synthesize loadAndVolumeView=_loadAndVolumeView;
@property(retain, nonatomic) AWECommentListViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(retain, nonatomic) AWEMusicAnimationView *musicAnimationView; // @synthesize musicAnimationView=_musicAnimationView;
@property(retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView; // @synthesize musicInfoView=_musicInfoView;
@property(retain, nonatomic) TTTAttributedLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UITextView *adDescriptionTextView; // @synthesize adDescriptionTextView=_adDescriptionTextView;
@property(retain, nonatomic) AWEDynamicLabel *dynamicLabel; // @synthesize dynamicLabel=_dynamicLabel;
@property(retain, nonatomic) AWEFeedTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) AWEButton *authorButton; // @synthesize authorButton=_authorButton;
@property(retain, nonatomic) AWEMarkView *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) AWEMarkView *challengeButton; // @synthesize challengeButton=_challengeButton;
@property(retain, nonatomic) AWEBubble *musicGuideBubbleView; // @synthesize musicGuideBubbleView=_musicGuideBubbleView;
@property(retain, nonatomic) AWEMusicCoverButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) AWEFeedVideoButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) AWEFeedVideoButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) LOTAnimationView *likeAnimationView; // @synthesize likeAnimationView=_likeAnimationView;
@property(retain, nonatomic) AWEFeedVideoButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) LOTAnimationView *followAnimationView; // @synthesize followAnimationView=_followAnimationView;
@property(retain, nonatomic) UIView *followPromptView; // @synthesize followPromptView=_followPromptView;
@property(retain, nonatomic) AWEFeedLiveMarkView *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) AWEButton *userAvatarButton; // @synthesize userAvatarButton=_userAvatarButton;
@property(retain, nonatomic) AWEFeedVideoButton *shoppingCartButton; // @synthesize shoppingCartButton=_shoppingCartButton;
@property(retain, nonatomic) AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AWERedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(nonatomic) _Bool hasStickerShow; // @synthesize hasStickerShow=_hasStickerShow;
@property(copy, nonatomic) CDUnknownBlockType pureModeBlock; // @synthesize pureModeBlock=_pureModeBlock;
@property(nonatomic) double controlOffset; // @synthesize controlOffset=_controlOffset;
@property(nonatomic) __weak id <AWEAwemePlayVideoDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool pureMode; // @synthesize pureMode=_pureMode;
@property(nonatomic) _Bool showFollowStatus; // @synthesize showFollowStatus=_showFollowStatus;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool isRedPacketShowed; // @synthesize isRedPacketShowed=_isRedPacketShowed;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)refreshGoodsPanelWithNotificationObject:(id)arg1;
- (void)refreshCommentPanelWithNotificationObject:(id)arg1;
- (void)showDislikeOnVideo;
- (void)dislikeVideoFromShare;
- (void)showGoodsPanel;
- (void)showCommentPanel;
- (_Bool)alertIfNotValid;
- (void)onLearnMoreViewClicked:(id)arg1;
- (_Bool)onVideoPlayerViewSingleClicked:(id)arg1;
- (void)onVideoPlayerViewDoubleClicked:(id)arg1;
@property(readonly, nonatomic) long long type;
- (void)setHide:(_Bool)arg1;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)touchCapturedWithPosition:(struct CGPoint)arg1;
- (void)willSetPureModeBlock:(_Bool)arg1;
- (void)reset;
- (_Bool)isInDislikeMode;
- (_Bool)shouldShowShoppingEntrance;
- (_Bool)adOperationGuideShowing;
- (void)hideAdOperationGuideView;
- (void)closeAdOperationGuide;
- (void)showAdOperationGuide;
- (void)showLearnMoreView;
- (void)showEnterMusicHint;
- (void)showAdOperationViewWithPlayTimes:(long long)arg1;
- (void)showShareHintWithPlayTimes:(long long)arg1;
- (void)showFollowHint;
- (void)commentVCDidDismiss;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithMediaType:(long long)arg1;
- (void)didCommitViewController:(id)arg1;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)onAwemeDiggNotification:(id)arg1;
- (void)updateLiveMarkView;
- (_Bool)canShowDislike;
- (void)updateLayout;
- (void)updateAllSubViews;
- (void)setVolume:(float)arg1;
- (void)setDescriptionTextViewContent;
- (void)updateDynamicLabel;
- (void)updateTagsView;
- (void)updateShareButton;
- (void)updateAdOperationView;
- (void)updateLearnMoreView;
- (void)updateShoppingCartView;
- (void)updatePOIText;
- (void)updateChallengeText;
- (void)updateExtraLabel;
- (void)updateMusicInfoView;
- (void)updateMusicButtonImage;
- (void)updateAuthorLabel;
- (void)updateCommentCount;
- (void)updateAvatarImage;
- (void)updateDiggCount;
- (void)updateFollowStatus;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 scale:(double)arg2;
- (void)cancelDislikeAnimation;
- (void)removeShareGuideAnimation;
- (void)playShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playFollowAnimation;
- (void)_stopLikeAnimation;
- (void)_playDislikeAnimation;
- (void)_playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playLikeAnimation;
- (void)playDiggAnimation:(struct CGPoint)arg1;
- (void)playDiscoverGuideAnimation;
- (void)stopMusicAnimations;
- (void)playMusicAnimations;
- (void)removeRedPacketView;
- (void)redPacketContentShow:(id)arg1;
- (void)redPacketShowAnimation;
- (void)enableGrabRedPacket:(_Bool)arg1;
- (void)updatePlayProgressWithTime:(double)arg1 totalDuration:(double)arg2;
- (void)stopLoadingAnimation;
- (void)playLoadingAnimation;
- (void)_removeNotificationsObserversAtCurrentVC;
- (void)_addNotificationsObserversAtCurrentVC;
- (void)_removeNotificationsObservers;
- (void)_addNotificationsObservers;
- (void)_dismissSystemVolume;
- (_Bool)p_shouldShowPoiButton;
- (_Bool)_shouldShowChallengeButton;
- (_Bool)_canFollow;
- (void)_layoutSubViews;
- (void)_addSubViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *view;

@end

