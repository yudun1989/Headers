//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSString;

@interface KSVideoEncodeResponse : KSUBaseResponse
{
    NSString *_encodeConfig;
    NSString *_swEncodeConfig;
}

@property(copy, nonatomic) NSString *swEncodeConfig; // @synthesize swEncodeConfig=_swEncodeConfig;
@property(copy, nonatomic) NSString *encodeConfig; // @synthesize encodeConfig=_encodeConfig;
- (void).cxx_destruct;

@end

