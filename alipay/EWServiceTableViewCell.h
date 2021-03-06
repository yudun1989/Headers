//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class MASConstraint, UIImageView, UILabel;

@interface EWServiceTableViewCell : APTableViewCell
{
    UIImageView *_mainImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UILabel *_distanceLabel;
    UILabel *_merchantLabel;
    UIImageView *_merchantIcon;
    MASConstraint *_nameLabelConstraint;
}

+ (double)cellHeightWithInfo:(id)arg1 width:(double)arg2 andServiceType:(int)arg3;
@property(retain, nonatomic) MASConstraint *nameLabelConstraint; // @synthesize nameLabelConstraint=_nameLabelConstraint;
@property(retain, nonatomic) UIImageView *merchantIcon; // @synthesize merchantIcon=_merchantIcon;
@property(retain, nonatomic) UILabel *merchantLabel; // @synthesize merchantLabel=_merchantLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)merchantAttributedText:(id)arg1;
- (void)updateDisplayWithInfo:(id)arg1 withServiceType:(int)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

