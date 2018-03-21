//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQGroupConcernedEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_groupConcernedObservers;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)addGroupShield:(unsigned long long)arg1 withUinInfoList:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)addGroupDefault:(unsigned long long)arg1 withUinInfoList:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)addGroupConcerned:(unsigned long long)arg1 withUinInfoList:(id)arg2 withUserInfo:(id)arg3;
- (void)deleteFromGroupConcernedObserverWithSeq:(int)arg1;
- (void)addToGroupConcernedObserver:(id)arg1 withSeq:(int)arg2;
- (_Bool)isConnected;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

