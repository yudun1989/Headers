//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "HTSVideoPlayGrowingTextViewDelegate-Protocol.h"

@class AWECommentModel, HTSVideoPlayGrowingTextView, NSMutableDictionary, NSString, SSThemedButton;
@protocol HTSVideoPlayGrowingTextViewDelegate;

@interface AWECommentInputBar : SSThemedView <HTSVideoPlayGrowingTextViewDelegate>
{
    HTSVideoPlayGrowingTextView *_textView;
    SSThemedButton *_sendButton;
    CDUnknownBlockType _textDidChangeBlock;
    unsigned long long _maxInputCount;
    NSString *_defaultPlaceHolder;
    AWECommentModel *_targetCommentModel;
    NSMutableDictionary *_params;
    id <HTSVideoPlayGrowingTextViewDelegate> _textViewDelegate;
    CDUnknownBlockType _onSendBlock;
    SSThemedView *_textBgView;
}

+ (id)imageWithUIColor:(id)arg1;
@property(retain, nonatomic) SSThemedView *textBgView; // @synthesize textBgView=_textBgView;
@property(copy, nonatomic) CDUnknownBlockType onSendBlock; // @synthesize onSendBlock=_onSendBlock;
@property(nonatomic) __weak id <HTSVideoPlayGrowingTextViewDelegate> textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(readonly, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AWECommentModel *targetCommentModel; // @synthesize targetCommentModel=_targetCommentModel;
@property(copy, nonatomic) NSString *defaultPlaceHolder; // @synthesize defaultPlaceHolder=_defaultPlaceHolder;
@property(nonatomic) unsigned long long maxInputCount; // @synthesize maxInputCount=_maxInputCount;
@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(retain, nonatomic) SSThemedButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) HTSVideoPlayGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
- (void)handleSend;
- (void)setMaxY:(double)arg1;
- (void)setMinY:(double)arg1;
- (void)resignActive;
- (_Bool)isActive;
- (void)becomeActive;
- (void)clearInputBar;
- (void)themeChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textViewDelegate:(id)arg2 sendBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

