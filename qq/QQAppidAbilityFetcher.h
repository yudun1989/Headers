//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQAppidAbilityFetcher : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_delegates;
    NSMutableDictionary *_appids;
}

+ (id)getInstance;
- (void)responseAbility:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)fetchAbility:(unsigned int)arg1 abiIDs:(id)arg2 withDelegate:(id)arg3;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)removeDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

