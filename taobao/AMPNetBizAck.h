//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPNetBizAck : AMPNetPacket
{
    _Bool _isSuccess;
    NSString *_dataId;
    long long _type;
}

@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
- (void).cxx_destruct;
- (id)generateAMPRPCBody;
- (id)generateAMPRPCHeader;
- (id)init;

@end

