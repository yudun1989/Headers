//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SwitchInfoReq : NSObject
{
    NSString *_clientVersion;
    NSString *_utdid;
    NSString *_userId;
    NSString *_channelId;
    NSString *_imei;
    NSString *_lastResponseTime;
    NSString *_business;
    NSString *_systemType;
    NSString *_requestIp;
    NSString *_productId;
}

@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *requestIp; // @synthesize requestIp=_requestIp;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *lastResponseTime; // @synthesize lastResponseTime=_lastResponseTime;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
- (void).cxx_destruct;

@end

