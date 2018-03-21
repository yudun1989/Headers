//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQMsgRegisterMsgTimeManager-Protocol.h>

@class NSRecursiveLock, NSString;

@interface QQLightMsgRegisterLastTimeManager : NSObject <IQQMsgRegisterMsgTimeManager>
{
    long long _uin;
    NSRecursiveLock *_lock;
    double _groupDiscussMsgTime;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)loadData:(long long)arg1;
- (void)resetData;
- (void)save;
- (id)getFilePath:(long long)arg1;
- (double)getGroupDiscussMsgTime:(long long)arg1;
- (void)updateGroupDiscussMsgTime:(double)arg1 forUin:(long long)arg2;
- (void)saveData;
- (void)loadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

