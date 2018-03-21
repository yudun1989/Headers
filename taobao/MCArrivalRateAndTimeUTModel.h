//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKTMonitorItem-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MCArrivalRateAndTimeUTModel : NSObject <MKTMonitorItem>
{
    long long _typeId;
    NSString *_usrId;
    NSString *_ccode;
    NSString *_syncId;
    NSString *_msgId;
    long long _serverTime;
    NSMutableDictionary *_networkInfoDict;
    unsigned long long _channel;
    long long _receiveTime;
    long long _receiveMtopTime;
    long long _checkStart;
    long long _checkEnd;
    long long _dbTime;
    long long _time;
}

@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long dbTime; // @synthesize dbTime=_dbTime;
@property(nonatomic) long long checkEnd; // @synthesize checkEnd=_checkEnd;
@property(nonatomic) long long checkStart; // @synthesize checkStart=_checkStart;
@property(nonatomic) long long receiveMtopTime; // @synthesize receiveMtopTime=_receiveMtopTime;
@property(nonatomic) long long receiveTime; // @synthesize receiveTime=_receiveTime;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSMutableDictionary *networkInfoDict; // @synthesize networkInfoDict=_networkInfoDict;
@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
@property(retain, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(retain, nonatomic) NSString *usrId; // @synthesize usrId=_usrId;
@property(nonatomic) long long typeId; // @synthesize typeId=_typeId;
- (void).cxx_destruct;
- (id)uniqueKey;
- (id)bizName;
- (id)toDictionary;
- (id)initWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

