//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSVideoPlayGrowingTextView, NSString;

@protocol HTSVideoPlayGrowingTextViewDelegate <NSObject>

@optional
- (_Bool)growingTextViewShouldReturn:(HTSVideoPlayGrowingTextView *)arg1;
- (void)growingTextViewDidChangeSelection:(HTSVideoPlayGrowingTextView *)arg1;
- (void)growingTextView:(HTSVideoPlayGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(HTSVideoPlayGrowingTextView *)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidChange:(HTSVideoPlayGrowingTextView *)arg1;
- (_Bool)growingTextView:(HTSVideoPlayGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidEndEditing:(HTSVideoPlayGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(HTSVideoPlayGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldEndEditing:(HTSVideoPlayGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(HTSVideoPlayGrowingTextView *)arg1;
@end

