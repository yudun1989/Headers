//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@class KSFeedKeyboardBar, KSTextView, UIButton;

@protocol KSFeedKeyboardBarDelegate <UITextViewDelegate>

@optional
- (void)willCloseKeyboardBar:(KSFeedKeyboardBar *)arg1;
- (void)keyboardBar:(KSFeedKeyboardBar *)arg1 changingFrame:(struct CGRect)arg2;
- (void)keyboardBar:(KSFeedKeyboardBar *)arg1 changingHeight:(double)arg2;
- (_Bool)keyboardBar:(KSFeedKeyboardBar *)arg1 shouldReturn:(KSTextView *)arg2;
- (void)keyboardBar:(KSFeedKeyboardBar *)arg1 didTapAtBtn:(UIButton *)arg2;
@end

