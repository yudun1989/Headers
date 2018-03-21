//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GAGrowingTextView.h>

#import <QQMainProject/QQTextViewInternalDelegate-Protocol.h>

@class NSObject, NSString, QQTextViewInternal, UIColor, UIFont;
@protocol QQGrowingTextViewDelegate;

@interface QQGrowingTextView : GAGrowingTextView <QQTextViewInternalDelegate>
{
    long long currInterfaceOrientation;
    double keyBoardHeight;
    double keyBoardHeight_Landscape;
    double popupHeight;
    NSObject<QQGrowingTextViewDelegate> *delegate;
    NSString *text;
    UIFont *font;
    UIColor *textColor;
    NSString *_tmpTextContent;
    struct CGRect _ViewFrame;
    int currentIndex;
    unsigned long long _preTextLength;
    struct _NSRange _preCursorRange;
}

@property(nonatomic) struct _NSRange preCursorRange; // @synthesize preCursorRange=_preCursorRange;
@property(nonatomic) unsigned long long preTextLength; // @synthesize preTextLength=_preTextLength;
- (id)textColor;
@property int currentIndex; // @synthesize currentIndex;
@property(nonatomic) long long currInterfaceOrientation; // @synthesize currInterfaceOrientation;
@property(nonatomic) double popupHeight; // @synthesize popupHeight;
@property(nonatomic) double keyBoardHeight_Landscape; // @synthesize keyBoardHeight_Landscape;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight;
@property __weak NSObject<QQGrowingTextViewDelegate> *delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)replace:(id)arg1 replaceText:(id)arg2 atRange:(struct _NSRange)arg3;
- (id)doBackSpace:(id)arg1 atRange:(struct _NSRange *)arg2;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)cleanCacheArray;
- (id)literalText;
- (id)text;
- (void)insertEMJText:(id)arg1;
- (void)setText:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)setText:(id)arg1;
- (void)dealloc;
- (void)InternalSetFame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
@property(getter=growingViewFrame, setter=setgrowingViewFrame:) struct CGRect growingViewFrame;
- (void)resizeTextView:(double)arg1;
- (void)textViewDidChange:(id)arg1;
- (long long)maxInputLength;
- (void)setMinNumberOfLines:(int)arg1;
- (void)setMaxNumberOfLines:(int)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)resetContentInset:(struct UIEdgeInsets)arg1;
- (void)commonInitialiser;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQTextViewInternal *internalTextView; // @dynamic internalTextView;
@property(readonly) Class superclass;

@end

