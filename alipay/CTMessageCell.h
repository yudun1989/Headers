//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKCell.h"

#import "CTMessageCoverViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ALPProgressView, APChatMedia, APSnapChatTimerView, CTMessageCoverView, NSMutableArray, NSMutableDictionary, NSString, PKActivityIndicatorView, PKImageView, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIMenuController, UITapGestureRecognizer, UIView;

@interface CTMessageCell : PKCell <UIGestureRecognizerDelegate, CTMessageCoverViewDelegate>
{
    UIMenuController *menu;
    _Bool _showBadge;
    _Bool _backgroundAnimating;
    _Bool _showProgressView;
    _Bool _tracksTouch;
    PKActivityIndicatorView *_activityIndicatorView;
    UIButton *_retryButton;
    UIButton *_cancelButton;
    UIButton *_refusedButton;
    ALPProgressView *_progressView;
    UITapGestureRecognizer *_voicePlayTap;
    NSMutableArray *_voiceImageArray;
    NSMutableArray *_voiceRImageArray;
    PKImageView *_sendBGImageView;
    NSMutableDictionary *_mediaState;
    PKImageView *_playImageView;
    UIButton *_downloadButton;
    APChatMedia *_voiceObj;
    UIImageView *_badgeView;
    UILabel *_timeLineLabel;
    NSString *_clientMsgID;
    NSString *_timeLine;
    NSString *_voiceUrl;
    UILabel *_userNameLabel;
    UIView *_tagView;
    UIImageView *_sexImgView;
    UILabel *_tagLabel;
    UIButton *_selectEditButton;
    CTMessageCoverView *_coverView;
    UILongPressGestureRecognizer *_longPress;
    UILongPressGestureRecognizer *_voiceOverLongPress;
    UITapGestureRecognizer *_tapGesture;
    struct CGSize _voiceBGImageSize;
}

+ (_Bool)canReferenceMessage:(id)arg1;
+ (_Bool)canAddEmotionWithMessage:(id)arg1;
+ (_Bool)didLoadImageWithMessage:(id)arg1;
+ (void)stopCurrentVoiceIfNeed:(id)arg1;
+ (_Bool)messageCanVoiceToWord:(id)arg1;
+ (_Bool)messageCanTranlate:(id)arg1;
+ (_Bool)messageShowOriginal:(id)arg1;
+ (_Bool)messageTranslated:(id)arg1;
+ (id)getVideoIndetifier:(id)arg1;
+ (_Bool)isMessageReady:(id)arg1;
+ (id)menuTypesWithMessage:(id)arg1 matchTemplateId:(_Bool)arg2;
+ (id)menuTypesWithPrivateMessage:(id)arg1 hasWithdraw:(_Bool)arg2 templateIdStr:(id)arg3 alignmentType:(int)arg4 matchTemplateId:(_Bool)arg5;
+ (void)onMenuWillHide:(id)arg1;
+ (void)setUpPopMenuNotification;
+ (id)cellHoldingPopMenus;
+ (void)clearNameHeight;
+ (double)userNameHeight;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *voiceOverLongPress; // @synthesize voiceOverLongPress=_voiceOverLongPress;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(nonatomic) _Bool tracksTouch; // @synthesize tracksTouch=_tracksTouch;
@property(nonatomic) _Bool showProgressView; // @synthesize showProgressView=_showProgressView;
@property(retain, nonatomic) CTMessageCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIButton *selectEditButton; // @synthesize selectEditButton=_selectEditButton;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *sexImgView; // @synthesize sexImgView=_sexImgView;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) _Bool backgroundAnimating; // @synthesize backgroundAnimating=_backgroundAnimating;
@property(copy, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(copy, nonatomic) NSString *timeLine; // @synthesize timeLine=_timeLine;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(copy, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(nonatomic) struct CGSize voiceBGImageSize; // @synthesize voiceBGImageSize=_voiceBGImageSize;
@property(retain, nonatomic) UILabel *timeLineLabel; // @synthesize timeLineLabel=_timeLineLabel;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) APChatMedia *voiceObj; // @synthesize voiceObj=_voiceObj;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) PKImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) NSMutableDictionary *mediaState; // @synthesize mediaState=_mediaState;
@property(retain, nonatomic) PKImageView *sendBGImageView; // @synthesize sendBGImageView=_sendBGImageView;
@property(retain, nonatomic) NSMutableArray *voiceRImageArray; // @synthesize voiceRImageArray=_voiceRImageArray;
@property(retain, nonatomic) NSMutableArray *voiceImageArray; // @synthesize voiceImageArray=_voiceImageArray;
@property(retain, nonatomic) UITapGestureRecognizer *voicePlayTap; // @synthesize voicePlayTap=_voicePlayTap;
@property(retain, nonatomic) ALPProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *refusedButton; // @synthesize refusedButton=_refusedButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) PKActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)setupVoiceOverObserver;
- (void)addLongPressGestureForCellContenViewIfNeed;
- (void)setupVoiceOverLongGesture;
- (void)handlePressShadow:(id)arg1;
- (void)handleLongPressShadow:(id)arg1 show:(_Bool)arg2;
- (_Bool)respondToBubbleShadow:(id)arg1;
- (id)ctdelegate;
- (_Bool)shouldAbandonResponseLongPress;
- (void)longPress:(id)arg1;
- (void)cellTaped:(id)arg1;
- (void)becomeGray:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool cellSelected;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)specialHandling;
- (void)setupUI;
- (void)dealloc;
- (void)cancelUploadDownloadVideo:(id)arg1;
- (void)downloadStatusNotification:(id)arg1;
- (void)downloadProcessNotification:(id)arg1;
- (void)uploadStatusNotification:(id)arg1;
- (void)uploadProgressNotification:(id)arg1;
- (void)registeNotifications;
- (void)bringLockViewToFront;
- (void)setUploadDownloadVideoState:(long long)arg1;
- (void)hideSnapBigVideo;
- (void)showSnapBigVideo;
- (void)setupSnapVideo;
- (void)doUpdateTimerStatusWith:(long long)arg1;
- (void)updateTimerTimeWith:(double)arg1;
- (void)updateSnpachatLockStatusWith:(_Bool)arg1;
- (void)exitTimerCountStatus;
@property(retain, nonatomic) APSnapChatTimerView *snapchatTimerView;
@property(retain, nonatomic) UIImageView *snapchatLockView;
- (void)handlingSnapChat;
- (void)handlingLocation;
- (void)referenceMenu:(id)arg1;
- (void)originalMenu:(id)arg1;
- (void)transferVoiceToWords:(id)arg1;
- (void)translateMenu:(id)arg1;
- (void)saveMenu:(id)arg1;
- (void)moreItem:(id)arg1;
- (void)addEmotionMenu:(id)arg1;
- (void)withdrawMenu:(id)arg1;
- (void)collectMenu:(id)arg1;
- (void)forwardMenu:(id)arg1;
- (void)copyMenu:(id)arg1;
- (void)playModelEarphone:(id)arg1;
- (void)playModelSPK:(id)arg1;
- (void)deleteMenu:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)dismissPopMenus;
- (void)showPopMenus:(id)arg1;
- (void)showRefuseButton:(_Bool)arg1;
- (_Bool)canShowRefuseButton;
- (void)showRefuseButtonIfNeed;
- (void)setState:(long long)arg1;
- (void)setupRefuseView;
- (void)setupStatesView;
- (void)hideActivityIndicatorView;
- (void)showActivityIndicatorView;
- (void)hideRetryButton;
- (void)showRetryButton;
- (double)userNameHeight;
- (void)bindAndLayoutUserName;
- (void)setupUserName;
- (void)setupTagView;
- (void)releaseTagView;
- (void)handlingUserName;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityString;
- (id)accessibilityStringForMessageType:(unsigned long long)arg1 alignmentType:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)didTapCoverView;
- (void)handlingEditMode;
- (void)layoutEditMode;
- (void)setupEditMode;
- (_Bool)shouldEnterEditMode;
- (void)playAnimating;
- (void)stopAnimating;
- (void)stopBoboImage;
- (void)pauseAudio;
- (void)postMediaStateChangeNotification;
- (void)refreshVoiceSendStatus;
- (void)hiddenLoadingFailView;
- (void)showLoadingFailView;
- (void)refreshVoiceDownloadStatus;
- (void)stopBackgroundAnimation;
- (void)startBackgroundAnimation;
- (void)stopDownloadingView;
- (void)showDownloadingView;
- (void)stopPlay;
- (void)beginPlay;
- (void)loadFail;
- (void)loadEnd;
- (void)loadBegin;
- (void)playAudio;
- (void)reloadMediaState;
- (void)reloadRedState;
- (void)doHandleSingleFingerEvent;
- (void)handleSingleFingerEvent:(id)arg1;
- (void)releaseTapGestureRecognizer;
- (void)voiceDownloadTaped;
- (struct CGSize)voiceSize;
- (void)bindVoiceData;
- (void)layoutVoice;
- (void)hideDownloadButton;
- (void)showDownloadButton;
- (void)setupDownloadButton;
- (void)setupBadgeView;
- (void)setupSendBGImageView;
- (void)setupPlayImageView;
- (void)setupTimeLineLabel;
- (void)initResource;
- (void)setupVoice;
- (void)refresh;
- (void)handlingVoice;
- (void)receivePlayVoiceStatusChanged:(id)arg1;
- (void)refreshVoiceStatusIfNeed:(id)arg1;
- (void)setupVoiceNotify;
- (void)clearVoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

