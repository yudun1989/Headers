//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSString, TBRateAuctionComponent, TBRateBaseTypeItem, TBRateCheckComponent, TBRateSelectRateComponent, TBRateShareComponent, TBRateStarRateComponent, TBRateTextRateComponent;

@interface TBRateSubOrderRateInfoComponent : TBRateComponent
{
    TBRateAuctionComponent *_auctionInfo;
    TBRateTextRateComponent *_feedback;
    TBRateBaseTypeItem *_extendsRateOptions;
    NSString *_key;
    TBRateStarRateComponent *_orderMerchandiseScore;
    TBRateCheckComponent *_rateAnnoy;
    TBRateShareComponent *_share;
    TBRateSelectRateComponent *_rateResult;
}

@property(retain, nonatomic) TBRateSelectRateComponent *rateResult; // @synthesize rateResult=_rateResult;
@property(retain, nonatomic) TBRateShareComponent *share; // @synthesize share=_share;
@property(retain, nonatomic) TBRateCheckComponent *rateAnnoy; // @synthesize rateAnnoy=_rateAnnoy;
@property(retain, nonatomic) TBRateStarRateComponent *orderMerchandiseScore; // @synthesize orderMerchandiseScore=_orderMerchandiseScore;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) TBRateBaseTypeItem *extendsRateOptions; // @synthesize extendsRateOptions=_extendsRateOptions;
@property(retain, nonatomic) TBRateTextRateComponent *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) TBRateAuctionComponent *auctionInfo; // @synthesize auctionInfo=_auctionInfo;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

