//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSMutableArray, NSString, TBRateShopRateComponent;

@interface TBRateOrderRateInfoComponent : TBRateComponent
{
    NSString *_orderType;
    NSMutableArray *_auctionComponents;
    TBRateShopRateComponent *_shopRateInfo;
}

@property(retain, nonatomic) TBRateShopRateComponent *shopRateInfo; // @synthesize shopRateInfo=_shopRateInfo;
@property(retain, nonatomic) NSMutableArray *auctionComponents; // @synthesize auctionComponents=_auctionComponents;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

