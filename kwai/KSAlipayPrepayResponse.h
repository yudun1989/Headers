//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSString;

@interface KSAlipayPrepayResponse : KSUBaseResponse
{
    NSString *_ksOrderId;
    NSString *_orderInfo;
}

@property(retain, nonatomic) NSString *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) NSString *ksOrderId; // @synthesize ksOrderId=_ksOrderId;
- (void).cxx_destruct;

@end

