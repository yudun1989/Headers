//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQWalletReqBaseInfo : NSObject
{
    NSString *_CMDName;
    NSString *_functionName;
    NSString *_servantName;
    NSString *_qwDescriptionName;
    NSString *_reqAttrKey;
    NSString *_rspAttrKey;
    NSString *_cachePacketKey;
    _Bool _shouldCacheRspPacket;
    _Bool _shouldMultiRequest;
    CDUnknownBlockType _judgeRspRetFailedBlock;
    int _xo;
    Class _requestClass;
    Class _responseClass;
}

@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) Class requestClass; // @synthesize requestClass=_requestClass;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSString *CMDName; // @dynamic CMDName;
@property(copy, nonatomic) NSString *cachePacketKey; // @dynamic cachePacketKey;
@property(copy, nonatomic) NSString *functionName; // @dynamic functionName;
@property(copy, nonatomic) CDUnknownBlockType judgeRspRetFailedBlock; // @dynamic judgeRspRetFailedBlock;
@property(copy, nonatomic) NSString *qwDescriptionName; // @dynamic qwDescriptionName;
@property(copy, nonatomic) NSString *reqAttrKey; // @dynamic reqAttrKey;
@property(copy, nonatomic) NSString *rspAttrKey; // @dynamic rspAttrKey;
@property(copy, nonatomic) NSString *servantName; // @dynamic servantName;
@property(nonatomic) _Bool shouldCacheRspPacket; // @dynamic shouldCacheRspPacket;
@property(nonatomic) _Bool shouldMultiRequest; // @dynamic shouldMultiRequest;

@end

