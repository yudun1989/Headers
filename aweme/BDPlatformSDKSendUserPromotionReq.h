//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPlatformSDKBaseReq.h"

@class NSString;

@interface BDPlatformSDKSendUserPromotionReq : BDPlatformSDKBaseReq
{
    NSString *_consumerURLScheme;
    NSString *_sessionId;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *consumerURLScheme; // @synthesize consumerURLScheme=_consumerURLScheme;
- (void).cxx_destruct;
- (id)init;

@end

