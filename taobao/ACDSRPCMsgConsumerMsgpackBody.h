//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSRPCMarshal.h"

@class NSArray, NSData, NSNumber, NSString;

@interface ACDSRPCMsgConsumerMsgpackBody : ACDSRPCMarshal
{
    NSString *_msgType;
    NSString *_dataId;
    NSNumber *_userId;
    NSString *_unitRedirect;
    NSNumber *_timestampOrSerializetype;
    NSString *_trackId;
    NSData *_binaryValue;
    NSArray *_flowKeys;
    NSNumber *_flowTime;
}

@property(retain, nonatomic) NSNumber *flowTime; // @synthesize flowTime=_flowTime;
@property(retain, nonatomic) NSArray *flowKeys; // @synthesize flowKeys=_flowKeys;
@property(retain, nonatomic) NSData *binaryValue; // @synthesize binaryValue=_binaryValue;
@property(copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSNumber *timestampOrSerializetype; // @synthesize timestampOrSerializetype=_timestampOrSerializetype;
@property(copy, nonatomic) NSString *unitRedirect; // @synthesize unitRedirect=_unitRedirect;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (id)toCommonProtocolBody;
- (id)filedsMeta__;
- (id)init;

@end

