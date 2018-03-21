//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/PersonalSignNetServiceProtocal-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PSInteractionsCountLoader : NSObject <PersonalSignNetServiceProtocal>
{
    NSMutableDictionary *_completions;
    NSMutableDictionary *_requestingUins;
    NSMutableDictionary *_sleepTimes;
    int _xo;
}

+ (id)defaultLoader;
- (void).cxx_destruct;
- (void)requestFailForCommand:(id)arg1 seq:(int)arg2 errorCode:(int)arg3 errorTip:(id)arg4;
- (void)requestSuccessForCommand:(id)arg1 msg:(CDStruct_7895f40e)arg2;
- (void)notifyFinishForUin:(id)arg1 success:(_Bool)arg2 count:(unsigned long long)arg3 latestUin:(id)arg4 error:(id)arg5;
- (id)requestDataForUin:(id)arg1;
- (void)getInteractionCountForUin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *completions; // @dynamic completions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *requestingUins; // @dynamic requestingUins;
@property(retain, nonatomic) NSMutableDictionary *sleepTimes; // @dynamic sleepTimes;
@property(readonly) Class superclass;

@end

