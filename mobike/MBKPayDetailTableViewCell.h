//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MBKPaymentPo, UILabel;

@interface MBKPayDetailTableViewCell : UITableViewCell
{
    MBKPaymentPo *_model;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MBKPaymentPo *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)attributeWithString:(id)arg1 isCoupon:(_Bool)arg2;
- (void)setupViews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

