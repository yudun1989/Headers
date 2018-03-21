//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHFUNDCommonResult.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, WEALTHFundBaseAssetAccountInfo, WEALTHFundInfo;

@interface WEALTHFundHomeInfoBaseResult : WEALTHFUNDCommonResult <NSCoding>
{
    WEALTHFundInfo *_fundInfo;
    WEALTHFundBaseAssetAccountInfo *_fundBaseAssetAccountInfo;
    NSArray *_fundProfitChartInfoList;
    NSDictionary *_extraInfo;
}

+ (Class)extraInfoElementClass;
+ (Class)fundProfitChartInfoListElementClass;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *fundProfitChartInfoList; // @synthesize fundProfitChartInfoList=_fundProfitChartInfoList;
@property(retain, nonatomic) WEALTHFundBaseAssetAccountInfo *fundBaseAssetAccountInfo; // @synthesize fundBaseAssetAccountInfo=_fundBaseAssetAccountInfo;
@property(retain, nonatomic) WEALTHFundInfo *fundInfo; // @synthesize fundInfo=_fundInfo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

