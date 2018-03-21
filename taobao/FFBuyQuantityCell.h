//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeQuantityModel, UIButton, UILabel;

@interface FFBuyQuantityCell : TBExtBuyBaseCell
{
    UILabel *_titleLabel;
    UIButton *_decrementBtn;
    UIButton *_incrementBtn;
    UILabel *_quatityLabel;
    TBTradeQuantityModel *_quantityModel;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) TBTradeQuantityModel *quantityModel; // @synthesize quantityModel=_quantityModel;
@property(retain, nonatomic) UILabel *quatityLabel; // @synthesize quatityLabel=_quatityLabel;
@property(retain, nonatomic) UIButton *incrementBtn; // @synthesize incrementBtn=_incrementBtn;
@property(retain, nonatomic) UIButton *decrementBtn; // @synthesize decrementBtn=_decrementBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateActionBtnStateWithQuatity:(long long)arg1;
- (void)bindData:(id)arg1;
- (void)updateQuatity:(long long)arg1;
- (void)decrementAction:(id)arg1;
- (void)incrementAction:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

