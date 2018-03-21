//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBInteractiveElementView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>
#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class NSMutableString, NSString, QQWeakContainer, TBStoryTextEditTextView, UIColor, UIView;
@protocol TBStoryTextEditViewDelegate;

@interface TBStoryTextEditView : TBInteractiveElementView <UIGestureRecognizerDelegate, UITextViewDelegate>
{
    double keyboardHeight;
    double _storyTextHeightMax;
    QQWeakContainer *_supMainEditViewWeakContainer;
    _Bool _enterEditMode;
    TBStoryTextEditTextView *_storyTextView;
    UIView *_confirmBar;
    UIColor *_textColor;
    UIColor *_tintColor;
    id <TBStoryTextEditViewDelegate> _delegate;
    UIView *_supMainEditView;
    NSMutableString *_validLengthVideoText;
    struct CGPoint _lastCenter;
    struct CGRect _screenRect;
    struct CGAffineTransform _lastTransform;
}

@property(nonatomic, getter=hasEnterEditMode) _Bool enterEditMode; // @synthesize enterEditMode=_enterEditMode;
@property(retain, nonatomic) NSMutableString *validLengthVideoText; // @synthesize validLengthVideoText=_validLengthVideoText;
@property(nonatomic) struct CGRect screenRect; // @synthesize screenRect=_screenRect;
@property(nonatomic) UIView *supMainEditView; // @synthesize supMainEditView=_supMainEditView;
@property(nonatomic) __weak id <TBStoryTextEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct CGPoint lastCenter; // @synthesize lastCenter=_lastCenter;
@property(nonatomic) struct CGAffineTransform lastTransform; // @synthesize lastTransform=_lastTransform;
@property(retain, nonatomic) UIView *confirmBar; // @synthesize confirmBar=_confirmBar;
@property(retain, nonatomic) TBStoryTextEditTextView *storyTextView; // @synthesize storyTextView=_storyTextView;
- (void).cxx_destruct;
- (void)makeScaleAnimation;
- (void)videoEdit_keyboardWillHidden:(id)arg1;
- (void)videoEdit_keyboardWillShown:(id)arg1;
- (void)updateForZoomScale;
- (void)gestureRecognizerDidEnd:(id)arg1;
- (void)gestureRecognizerWillBegin:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (int)calculateTextLength:(id)arg1;
- (void)newAdjustTextViewFrameRect:(struct CGSize)arg1;
- (double)oneRowHeight;
- (void)calcFrameInBackgroud:(id)arg1;
- (void)newAdjustTextViewFrame:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)startTextEdit;
- (void)endTextEdit;
- (void)resetStoryTextEditTextView;
- (void)cleanStoryText;
- (void)registerNotification;
- (void)createTextView;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

