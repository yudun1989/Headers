//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TTAlphaThemedButton, UIImageView, UILabel;

@interface TSVWriteCommentButton : UIButton
{
    _Bool _banEmojiInput;
    CDUnknownBlockType _emojiButtonDidClick;
    UILabel *_label;
    UIImageView *_iconImageView;
    TTAlphaThemedButton *_emojiButton;
}

@property(retain, nonatomic) TTAlphaThemedButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType emojiButtonDidClick; // @synthesize emojiButtonDidClick=_emojiButtonDidClick;
@property(nonatomic) _Bool banEmojiInput; // @synthesize banEmojiInput=_banEmojiInput;
- (void).cxx_destruct;
- (void)emojiButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

