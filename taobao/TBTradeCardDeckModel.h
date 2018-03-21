//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSArray, NSString;

@interface TBTradeCardDeckModel : TBTradeComponentModel
{
    NSArray *_cards;
    NSString *_comfirm;
}

@property(readonly, nonatomic) NSString *comfirm; // @synthesize comfirm=_comfirm;
@property(readonly, nonatomic) NSArray *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (void)setShowSequence:(id)arg1 values:(id)arg2;
@property(readonly, nonatomic) NSArray *shownSequence;
@property(readonly, nonatomic) NSString *cancel;
- (id)confirm;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)loadCardsArray:(id)arg1;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;
- (id)displayValueByCard:(id)arg1 value:(id)arg2;
- (id)findCardByCardName:(id)arg1;
- (id)modifiedCardsWithSequence:(id)arg1 values:(id)arg2;
- (id)decsWithModifiedCards:(id)arg1 values:(id)arg2;
- (id)oldValuesWithModifiedCards:(id)arg1;

@end

