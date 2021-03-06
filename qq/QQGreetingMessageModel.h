//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQClusterMessageModel.h>

@class NSMutableArray, NSMutableDictionary;

@interface QQGreetingMessageModel : QQClusterMessageModel
{
    NSMutableArray *_clearingMsgArr;
    NSMutableDictionary *_clearingMsgDic;
}

- (id)getMsgUinList;
- (void)clearGreetingUnreadCount;
- (void)refreshGreetingUnreadCount;
- (long long)calcUnreadCount;
- (id)getMsgArr;
- (id)getMsgAtIndex:(unsigned long long)arg1;
- (void)insertMsg:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)getMsgCount;
- (void)removeMsg:(id)arg1;
- (_Bool)addDraftMsg:(id)arg1;
- (void)addMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

