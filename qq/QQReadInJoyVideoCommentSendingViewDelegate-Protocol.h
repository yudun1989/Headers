//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSNotification, NSString, QQReadInJoyVideoCommentSendingView;

@protocol QQReadInJoyVideoCommentSendingViewDelegate <NSObject>
- (void)commentSendingView:(QQReadInJoyVideoCommentSendingView *)arg1 willActiveKeyboard:(_Bool)arg2 notification:(NSNotification *)arg3;
- (_Bool)commentSendingView:(QQReadInJoyVideoCommentSendingView *)arg1 shouldSendCommentWithComment:(NSString *)arg2;
@end

