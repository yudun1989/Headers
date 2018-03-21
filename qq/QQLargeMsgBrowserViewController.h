//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QQAvatarPendantLoadObserver-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, QQAIOMsgModel, QQAvatarView, QQMessageInfoModel, UIButton, UITapGestureRecognizer, UITextView, UIView;

@interface QQLargeMsgBrowserViewController : QQViewController <QQAvatarPendantLoadObserver, UIActionSheetDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    QQAIOMsgModel *_messageModel;
    QQMessageInfoModel *_messageInfo;
    struct CGRect _startRect;
    UITextView *_textView;
    double _viewAppearBegin;
    unsigned long long _textAmount;
    UIView *_bottomView;
    unsigned int _bubbleId;
    long long _fontId;
    UIView *_bottomBounceView;
    QQAvatarView *_headIcon;
    UIButton *_avatarLabel;
    UIButton *_bubbleEventControl;
    UIButton *_bubbleLabel;
    UIButton *_fontEventControl;
    UIButton *_fontLabel;
    UIButton *_magicFontLabel;
    UIButton *_magicFontEventControl;
    _Bool _shouldShowBottomView;
    UITapGestureRecognizer *_tapGesture;
}

@property(nonatomic) __weak UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool shouldShowBottomView; // @synthesize shouldShowBottomView=_shouldShowBottomView;
- (void).cxx_destruct;
- (void)doSelectMiddleLineReport;
- (void)doCollectMessageReport;
- (void)doCollectSelectMessageReport;
- (void)doLongMsgAmountReport:(unsigned long long)arg1 residentTime:(double)arg2;
- (void)doLongMsgDoubleReport;
- (unsigned long long)getTextAmount;
- (void)collectSelectMessage;
- (void)collectMessage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionPasteString:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gestureTapTouch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)popViewController;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (unsigned long long)GetMaxWidth;
- (void)saveLastInfo;
- (void)restoreLastInfo;
- (void)readLastInfo;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)delay;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didMissViewController;
- (void)showInController:(id)arg1 startRect:(struct CGRect)arg2;
- (id)GetHiddenViewImage;
- (void)loadAvater;
- (void)hiddenStatusBar:(_Bool)arg1;
- (void)openMagicFont;
- (void)openFontStore;
- (void)openBubbleStore;
- (void)openAvatarStore;
- (void)recoverColor;
- (void)magicFontTouchDown;
- (void)fontThouchDown;
- (void)bubbleThouchDown;
- (void)avatarThouchDown;
- (void)showDiyChartletAndText;
- (void)showBottomView;
- (void)initBottomTextButtonState:(id)arg1;
- (void)loadView;
- (id)bottomBgView;
- (_Bool)isSupportRightDragToGoBack;
- (id)GetContentText;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

