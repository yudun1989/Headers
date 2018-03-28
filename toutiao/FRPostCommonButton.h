//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class FRLineView, SSThemedButton, TTAlphaThemedButton, TTDiggButton;

@interface FRPostCommonButton : SSThemedView
{
    TTAlphaThemedButton *_emojiButton;
    TTDiggButton *_diggButton;
    SSThemedButton *_button;
    FRLineView *_topLine;
    CDUnknownBlockType _postCommentButtonClick;
    CDUnknownBlockType _emojiButtonClick;
    CDUnknownBlockType _diggButtonClick;
    CDUnknownBlockType _shareButtonClick;
    TTAlphaThemedButton *_shareButton;
}

@property(retain, nonatomic) TTAlphaThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(copy, nonatomic) CDUnknownBlockType shareButtonClick; // @synthesize shareButtonClick=_shareButtonClick;
@property(copy, nonatomic) CDUnknownBlockType diggButtonClick; // @synthesize diggButtonClick=_diggButtonClick;
@property(copy, nonatomic) CDUnknownBlockType emojiButtonClick; // @synthesize emojiButtonClick=_emojiButtonClick;
@property(copy, nonatomic) CDUnknownBlockType postCommentButtonClick; // @synthesize postCommentButtonClick=_postCommentButtonClick;
@property(retain, nonatomic) FRLineView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) SSThemedButton *button; // @synthesize button=_button;
@property(retain, nonatomic) TTDiggButton *diggButton; // @synthesize diggButton=_diggButton;
@property(retain, nonatomic) TTAlphaThemedButton *emojiButton; // @synthesize emojiButton=_emojiButton;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)shareAction;
- (void)diggAction;
- (void)emojiAction:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)setPlaceholderContent:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

