//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "TTAudioRecorderDelegate-Protocol.h"
#import "TTCommonTimerObjDelegate-Protocol.h"
#import "TTImagePickTrackDelegate-Protocol.h"
#import "TTImagePickerControllerDelegate-Protocol.h"
#import "TTLiveCameraVCDelegate-Protocol.h"

@class HPGrowingTextView, NSDictionary, NSNumber, NSString, NSTimer, SSThemedButton, SSThemedImageView, SSThemedLabel, TTAudioRecorder, TTCommonTimerObj, TTImageView, TTLiveMainViewController, TTLiveMessage;
@protocol TTLiveMessageBoxDelegate;

@interface TTLiveMessageBox : SSThemedView <TTAudioRecorderDelegate, TTLiveCameraVCDelegate, HPGrowingTextViewDelegate, TTCommonTimerObjDelegate, TTImagePickerControllerDelegate, TTImagePickTrackDelegate>
{
    NSString *_previousEntry;
    NSString *_replyPreviousEntry;
    NSNumber *_replyId;
    _Bool _shouldShowPariseButton;
    _Bool _disableSendMsg;
    _Bool _audioCanceling;
    _Bool _preinstallTime;
    _Bool _hasBeforeMessage;
    _Bool _replyMode;
    id <TTLiveMessageBoxDelegate> _delegate;
    TTLiveMessage *_replyedMsg;
    TTLiveMainViewController *_mainChatroom;
    SSThemedButton *_pariseButton;
    NSString *_pariseImageUrl;
    unsigned long long _type;
    SSThemedView *_audioRecordViewBtn;
    HPGrowingTextView *_textFieldView;
    SSThemedImageView *_textImageView;
    SSThemedLabel *_textFieldButtonView;
    SSThemedImageView *_speakerAvatar;
    SSThemedButton *_sendTextBtn;
    SSThemedView *_btnWrapperView;
    unsigned long long _messageType;
    TTAudioRecorder *_audioRecorder;
    SSThemedView *_audioToastView;
    NSTimer *_audioPowerTimer;
    TTCommonTimerObj *_audioCountTimer;
    NSDictionary *_ssTrackerDic;
    SSThemedLabel *_audioTitleLabel;
    SSThemedButton *_audioBtn;
    SSThemedView *_inputBarView;
    TTImageView *_pariseImageView;
    SSThemedLabel *_pariseCountLabel;
}

@property(retain, nonatomic) SSThemedLabel *pariseCountLabel; // @synthesize pariseCountLabel=_pariseCountLabel;
@property(retain, nonatomic) TTImageView *pariseImageView; // @synthesize pariseImageView=_pariseImageView;
@property(retain, nonatomic) SSThemedView *inputBarView; // @synthesize inputBarView=_inputBarView;
@property(retain, nonatomic) SSThemedButton *audioBtn; // @synthesize audioBtn=_audioBtn;
@property(retain, nonatomic) SSThemedLabel *audioTitleLabel; // @synthesize audioTitleLabel=_audioTitleLabel;
@property(nonatomic) _Bool replyMode; // @synthesize replyMode=_replyMode;
@property(nonatomic) _Bool hasBeforeMessage; // @synthesize hasBeforeMessage=_hasBeforeMessage;
@property(copy, nonatomic) NSDictionary *ssTrackerDic; // @synthesize ssTrackerDic=_ssTrackerDic;
@property(nonatomic) _Bool preinstallTime; // @synthesize preinstallTime=_preinstallTime;
@property(retain, nonatomic) TTCommonTimerObj *audioCountTimer; // @synthesize audioCountTimer=_audioCountTimer;
@property(retain, nonatomic) NSTimer *audioPowerTimer; // @synthesize audioPowerTimer=_audioPowerTimer;
@property(nonatomic) _Bool audioCanceling; // @synthesize audioCanceling=_audioCanceling;
@property(retain, nonatomic) SSThemedView *audioToastView; // @synthesize audioToastView=_audioToastView;
@property(retain, nonatomic) TTAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) SSThemedView *btnWrapperView; // @synthesize btnWrapperView=_btnWrapperView;
@property(retain, nonatomic) SSThemedButton *sendTextBtn; // @synthesize sendTextBtn=_sendTextBtn;
@property(retain, nonatomic) SSThemedImageView *speakerAvatar; // @synthesize speakerAvatar=_speakerAvatar;
@property(retain, nonatomic) SSThemedLabel *textFieldButtonView; // @synthesize textFieldButtonView=_textFieldButtonView;
@property(retain, nonatomic) SSThemedImageView *textImageView; // @synthesize textImageView=_textImageView;
@property(retain, nonatomic) HPGrowingTextView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(retain, nonatomic) SSThemedView *audioRecordViewBtn; // @synthesize audioRecordViewBtn=_audioRecordViewBtn;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool disableSendMsg; // @synthesize disableSendMsg=_disableSendMsg;
@property(nonatomic) _Bool shouldShowPariseButton; // @synthesize shouldShowPariseButton=_shouldShowPariseButton;
@property(readonly, copy, nonatomic) NSString *pariseImageUrl; // @synthesize pariseImageUrl=_pariseImageUrl;
@property(retain, nonatomic) SSThemedButton *pariseButton; // @synthesize pariseButton=_pariseButton;
@property(nonatomic) __weak TTLiveMainViewController *mainChatroom; // @synthesize mainChatroom=_mainChatroom;
@property(retain, nonatomic) TTLiveMessage *replyedMsg; // @synthesize replyedMsg=_replyedMsg;
@property(nonatomic) __weak id <TTLiveMessageBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickPraiseButton:(id)arg1;
- (_Bool)currentIsEditing;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)ttImagePickOnTrackType:(unsigned long long)arg1 extra:(id)arg2;
- (void)ttimagePickerController:(id)arg1 didFinishPickerPhotosAndVideoWithSourceAssets:(id)arg2;
- (void)ttImagePickerControllerDidCancel:(id)arg1;
- (void)ttCameraViewControllerDidCanceled:(id)arg1;
- (void)ttCameraVideoBack:(id)arg1 previewImage:(id)arg2;
- (void)ttCameraPhotoBackAssetUrl:(id)arg1 image:(id)arg2;
- (void)ttAudioRecorderLessThanOneSecond;
- (void)ttAudioRecorderFailBackError:(id)arg1;
- (void)ttAudioRecorderFinishedWithURL:(id)arg1 duration:(double)arg2;
- (void)ttTimer:(id)arg1 preinstallTime:(float)arg2;
- (void)ttTimer:(id)arg1 EachIntervalAction:(float)arg2;
- (void)ttTimerReachMaxTimeStop:(id)arg1;
- (void)ttTimer:(id)arg1 StopLessThanMinTime:(_Bool)arg2;
- (void)setPariseCount:(id)arg1;
- (void)checkCameraFileGroup;
- (void)clearTempVideoFileCache;
- (id)getViewFromParentView:(id)arg1 withTag:(long long)arg2;
- (void)activedWithType:(unsigned long long)arg1 replyedMessage:(id)arg2;
- (void)getAudioRecorderPowerRatio;
- (void)setInputBarSpeakerAvatar:(id)arg1;
- (void)setInputPlaceholder:(id)arg1 TextColor:(id)arg2;
- (void)audioRecorderDoRecording;
- (void)moveUpAudioRecorderCancle;
- (void)makeAudioToastView;
- (void)showAlertToPromptAuthorizationWithMessage:(id)arg1;
- (void)handleAudioRecorderGesture:(id)arg1;
- (void)openAudoRecorder;
- (void)openCameraViewController;
- (void)openAlbumAssetsLibrary;
- (void)onlyShowMediaMessageArea:(_Bool)arg1;
- (void)becomeToShortestAtBottom:(_Bool)arg1;
- (void)showTextFieldOnly;
- (void)showShareButtonOnly;
- (void)showSendBtnOnly;
- (void)clearPreviousData:(_Bool)arg1 replyPreviousData:(_Bool)arg2;
- (void)sendTextMessageOut:(id)arg1;
- (void)clearDataBySendSuccess;
- (void)textFieldButtonClick:(id)arg1;
- (void)setMessageViewType:(unsigned long long)arg1;
- (void)setUpCameraAlbumAudioTextSubviews:(id)arg1;
- (void)changePariseCommonImage:(id)arg1;
- (void)setUpOnlyTextSubviews:(id)arg1;
- (id)adjustContentIfNeedWithContent:(id)arg1;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

