//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class HPTextViewInternal, NSObject, NSString, UIColor, UIFont, UITextView;
@protocol HPGrowingTextViewDelegate;

@interface HPGrowingTextView : UIView <UITextViewDelegate>
{
    HPTextViewInternal *internalTextView;
    int minHeight;
    int maxHeight;
    int maxNumberOfLines;
    int minNumberOfLines;
    _Bool animateHeightChange;
    double animationDuration;
    NSObject<HPGrowingTextViewDelegate> *delegate;
    long long textAlignment;
    struct _NSRange selectedRange;
    _Bool editable;
    unsigned long long dataDetectorTypes;
    long long returnKeyType;
    long long keyboardType;
    struct UIEdgeInsets contentInset;
    UIFont *font;
    UIColor *textColor;
}

@property double animationDuration; // @synthesize animationDuration;
@property _Bool animateHeightChange; // @synthesize animateHeightChange;
@property(nonatomic) int minHeight; // @synthesize minHeight;
@property(nonatomic) int maxHeight; // @synthesize maxHeight;
@property __weak NSObject<HPGrowingTextViewDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) UITextView *internalTextView; // @synthesize internalTextView;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (_Bool)hasText;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable;
@property(nonatomic) _Bool isScrollable;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
- (id)backgroundColor;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font;
@property(retain, nonatomic) NSString *text;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)growDidStop;
- (void)resizeTextView:(long long)arg1;
- (void)resetScrollPositionForIOS7;
- (double)measureHeight;
- (void)refreshHeight;
- (void)textViewDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *placeholderColor; // @dynamic placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @dynamic placeholder;
@property int minNumberOfLines;
@property int maxNumberOfLines;
@property struct UIEdgeInsets contentInset;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commonInitialiser:(id)arg1;
- (void)commonInitialiser;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

