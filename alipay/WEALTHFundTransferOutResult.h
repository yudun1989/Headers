//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHCommonResult.h"

@class NSDictionary, NSString;

@interface WEALTHFundTransferOutResult : WEALTHCommonResult
{
    NSString *_tairKey;
    NSString *_mobile;
    NSString *_hiddenedMobile;
    NSString *_canTransferTimes;
    NSDictionary *_extInfosMap;
    NSDictionary *_transferOutSucessStateMap;
}

+ (Class)transferOutSucessStateMapElementClass;
+ (Class)extInfosMapElementClass;
@property(retain, nonatomic) NSDictionary *transferOutSucessStateMap; // @synthesize transferOutSucessStateMap=_transferOutSucessStateMap;
@property(retain, nonatomic) NSDictionary *extInfosMap; // @synthesize extInfosMap=_extInfosMap;
@property(retain, nonatomic) NSString *canTransferTimes; // @synthesize canTransferTimes=_canTransferTimes;
@property(retain, nonatomic) NSString *hiddenedMobile; // @synthesize hiddenedMobile=_hiddenedMobile;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *tairKey; // @synthesize tairKey=_tairKey;
- (void).cxx_destruct;

@end

