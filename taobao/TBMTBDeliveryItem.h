//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBMTBDeliveryItemExtraInfo;

@interface TBMTBDeliveryItem : TBJSONModel
{
    NSString *_cpCode;
    NSString *_cpName;
    NSString *_status;
    NSString *_statusDesc;
    NSString *_traceNo;
    NSString *_expectArriveTime;
    NSString *_packageId;
    NSString *_goodsUrl;
    NSString *_goodsNum;
    NSString *_goodsName;
    NSString *_tip;
    NSString *_orderCode;
    NSString *_tradeId;
    NSString *_lastDetail;
    NSString *_statusIconFont;
    TBMTBDeliveryItemExtraInfo *_extraInfo;
}

@property(retain, nonatomic) TBMTBDeliveryItemExtraInfo *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *statusIconFont; // @synthesize statusIconFont=_statusIconFont;
@property(retain, nonatomic) NSString *lastDetail; // @synthesize lastDetail=_lastDetail;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(retain, nonatomic) NSString *goodsNum; // @synthesize goodsNum=_goodsNum;
@property(retain, nonatomic) NSString *goodsUrl; // @synthesize goodsUrl=_goodsUrl;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *expectArriveTime; // @synthesize expectArriveTime=_expectArriveTime;
@property(retain, nonatomic) NSString *traceNo; // @synthesize traceNo=_traceNo;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *cpName; // @synthesize cpName=_cpName;
@property(retain, nonatomic) NSString *cpCode; // @synthesize cpCode=_cpCode;
- (void).cxx_destruct;

@end

