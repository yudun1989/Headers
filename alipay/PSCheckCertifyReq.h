//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSBaseReqVO.h"

@class NSString;

@interface PSCheckCertifyReq : PSBaseReqVO
{
    NSString *_receiveID;
    NSString *_paymentID;
}

@property(retain, nonatomic) NSString *paymentID; // @synthesize paymentID=_paymentID;
@property(retain, nonatomic) NSString *receiveID; // @synthesize receiveID=_receiveID;
- (void).cxx_destruct;

@end

