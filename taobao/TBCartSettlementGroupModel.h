//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCartSettlementGroupModel-Protocol.h"

@class NSArray, NSString;

@interface TBCartSettlementGroupModel : NSObject <TBCartSettlementGroupModel>
{
    unsigned long long _type;
    NSString *_exclude;
    NSString *_mutex;
    long long _totalPrice;
    NSArray *_items;
    NSString *_currencySymbol;
    double _currencyUnitFactor;
    NSString *_groupTitle;
    NSString *_shopTitle;
    NSString *_shopSubTitle;
}

@property(retain, nonatomic) NSString *shopSubTitle; // @synthesize shopSubTitle=_shopSubTitle;
@property(retain, nonatomic) NSString *shopTitle; // @synthesize shopTitle=_shopTitle;
@property(retain, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(nonatomic) double currencyUnitFactor; // @synthesize currencyUnitFactor=_currencyUnitFactor;
@property(retain, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long totalPrice; // @synthesize totalPrice=_totalPrice;
@property(retain, nonatomic) NSString *mutex; // @synthesize mutex=_mutex;
@property(retain, nonatomic) NSString *exclude; // @synthesize exclude=_exclude;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)titleWithExclude:(id)arg1;
@property(readonly, nonatomic) NSString *displayTitle;
- (id)addSubTitle:(id)arg1;
- (void)generateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

