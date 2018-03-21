//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQMessageProcessor-Protocol.h>

@class NSTimer;

@interface QMsgDuplicateChecker : NSObject <IQQMessageProcessor>
{
    id _msgCache;
    NSTimer *_recoverTimer;
}

+ (_Bool)isFromOneLargeMsg:(id)arg1 bMsg:(id)arg2;
+ (id)filterSelfTroopMessages:(id)arg1 logTips:(id)arg2;
+ (id)mergeTroopMessages:(id)arg1 withArray:(id)arg2;
+ (id)getInstance;
- (id)removeDuplicateInArray:(id)arg1;
- (id)processMsgEncapsulation:(id)arg1;
- (id)filterC2CMsgArray:(id)arg1 readInfoDic:(id)arg2;
- (list_618bb2fb *)getMsgList;
- (void)ClearMsgCache;
- (void)addMsgToCache:(struct TMsgIndexInfo *)arg1;
- (void)cacheMessage:(id)arg1;
- (_Bool)checkMsgIsDuplicateNotC2C:(id)arg1 cache:(_Bool)arg2;
- (_Bool)checkMsgIsDuplicate:(id)arg1 cache:(_Bool)arg2;
- (_Bool)checkMsgIsDuplicate:(id)arg1;
- (_Bool)checkC2CMsgIsDuplicate:(id)arg1;
- (_Bool)isMessageC2C:(id)arg1;
- (void)recoverTimerCallback;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)doInit;

@end

