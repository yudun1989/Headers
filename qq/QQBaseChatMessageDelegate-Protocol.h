//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSString, QQBaseChatMessage;

@protocol QQBaseChatMessageDelegate <NSObject>

@optional
- (void)baseChatMessage:(QQBaseChatMessage *)arg1 didLoadUnreadMessages:(NSArray *)arg2 first:(_Bool)arg3;
- (void)AIOFirstInMessageLoadedFinished;
- (void)handleGroupMessageSilent:(NSArray *)arg1 userInfo:(NSString *)arg2:(NSString *)arg3:(long long)arg4;
- (void)QQBaseChatMessageDidGetAllOffLineTroopMessage:(QQBaseChatMessage *)arg1;
@end

