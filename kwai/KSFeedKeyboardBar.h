//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSKeyboardBarProtocol-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CAAnimationlessLayer, CAGradientLayer, KSTextView, NSString, UIButton, UIColor, UILabel;
@protocol KSFeedKeyboardBarDelegate;

@interface KSFeedKeyboardBar : UIView <KSKeyboardBarProtocol, UITextViewDelegate>
{
    _Bool _enabled;
    _Bool _hiddenAtBtn;
    _Bool _autoSizeSendBtn;
    _Bool _shouldHideSendButtonWhenEndEditing;
    _Bool _shouldDisableAdjuctKeyboardBarTop;
    long long _style;
    KSTextView *_textView;
    NSString *_textViewPlaceholder;
    double _minHeight;
    unsigned long long _maxLineNumber;
    id <KSFeedKeyboardBarDelegate> _delegate;
    id _userInfo;
    double *_seperatorWidth;
    UIColor *_bottomSeperatorColor;
    UIColor *_topSeperatorColor;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIColor *_placeholderColor;
    UIColor *_titleColor;
    UIColor *_atColor;
    UIButton *_atBtn;
    UILabel *_title;
    UIView *_backgroundView;
    UIButton *_sendButton;
    CAAnimationlessLayer *_topSeperator;
    CAAnimationlessLayer *_bottomSeperator;
    double _currentProgress;
    unsigned long long _currentLineNumber;
    CAGradientLayer *_gradientMaskLayer;
    struct UIEdgeInsets _textViewInsets;
}

@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(nonatomic) unsigned long long currentLineNumber; // @synthesize currentLineNumber=_currentLineNumber;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) CAAnimationlessLayer *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) CAAnimationlessLayer *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *atBtn; // @synthesize atBtn=_atBtn;
@property(retain, nonatomic) UIColor *atColor; // @synthesize atColor=_atColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *topSeperatorColor; // @synthesize topSeperatorColor=_topSeperatorColor;
@property(retain, nonatomic) UIColor *bottomSeperatorColor; // @synthesize bottomSeperatorColor=_bottomSeperatorColor;
@property(nonatomic) double *seperatorWidth; // @synthesize seperatorWidth=_seperatorWidth;
@property(nonatomic) _Bool shouldDisableAdjuctKeyboardBarTop; // @synthesize shouldDisableAdjuctKeyboardBarTop=_shouldDisableAdjuctKeyboardBarTop;
@property(nonatomic) _Bool shouldHideSendButtonWhenEndEditing; // @synthesize shouldHideSendButtonWhenEndEditing=_shouldHideSendButtonWhenEndEditing;
@property(nonatomic) _Bool autoSizeSendBtn; // @synthesize autoSizeSendBtn=_autoSizeSendBtn;
@property(nonatomic) _Bool hiddenAtBtn; // @synthesize hiddenAtBtn=_hiddenAtBtn;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <KSFeedKeyboardBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxLineNumber; // @synthesize maxLineNumber=_maxLineNumber;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) struct UIEdgeInsets textViewInsets; // @synthesize textViewInsets=_textViewInsets;
@property(retain, nonatomic) NSString *textViewPlaceholder; // @synthesize textViewPlaceholder=_textViewPlaceholder;
@property(retain, nonatomic) KSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setTitleAlignment:(long long)arg1;
- (void)updateColors;
- (id)colorFrom:(id)arg1 to:(id)arg2 progress:(double)arg3 ignoreAlpha:(_Bool)arg4;
- (void)setColorWithProgress:(double)arg1;
- (void)keyboardWillShow:(_Bool)arg1;
- (void)updateColorWithProgress:(double)arg1;
- (void)disableBlurAndUseBackgroundColor:(id)arg1 foregroundColor:(id)arg2 placeholderColor:(id)arg3 seperatorColor:(id)arg4 atTintColor:(id)arg5;
- (void)resetTextView;
- (void)adjustViewHeight;
- (void)adjustWithTextViewHeight:(double)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTapSendBtn;
- (void)didTapAtBtn;
- (void)changeSendButtonState;
- (id)createSendButton;
- (void)enableSendButtonWithInitialText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)disableKeyboardWithTitle:(id)arg1;
- (void)closeKeyboard;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

