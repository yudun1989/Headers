//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeServiceAddressModel, UILabel;

@interface TBExtBuyServiceAddressCell : TBExtBuyBaseCell
{
    TBTradeServiceAddressModel *_model;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_contactInfoLabel;
    UILabel *_addressLabel;
}

+ (id)addressStr:(id)arg1;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *contactInfoLabel; // @synthesize contactInfoLabel=_contactInfoLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TBTradeServiceAddressModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

