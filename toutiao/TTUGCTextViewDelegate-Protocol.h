//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TTUGCTextView;

@protocol TTUGCTextViewDelegate <NSObject>

@optional
- (void)textViewDidInputTextHashtag:(TTUGCTextView *)arg1;
- (void)textViewDidInputTextAt:(TTUGCTextView *)arg1;
- (_Bool)textViewShouldReturn:(TTUGCTextView *)arg1;
- (void)textViewDidChangeSelection:(TTUGCTextView *)arg1;
- (void)textView:(TTUGCTextView *)arg1 didChangeHeight:(float)arg2 withDiffHeight:(double)arg3;
- (void)textView:(TTUGCTextView *)arg1 willChangeHeight:(float)arg2 withDiffHeight:(double)arg3;
- (void)textViewDidChange:(TTUGCTextView *)arg1;
- (_Bool)textView:(TTUGCTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textViewDidEndEditing:(TTUGCTextView *)arg1;
- (void)textViewDidBeginEditing:(TTUGCTextView *)arg1;
- (_Bool)textViewShouldEndEditing:(TTUGCTextView *)arg1;
- (_Bool)textViewShouldBeginEditing:(TTUGCTextView *)arg1;
@end

