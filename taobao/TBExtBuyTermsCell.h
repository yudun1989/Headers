//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeTermsModel, UIImageView, UILabel, UISwitch;

@interface TBExtBuyTermsCell : TBExtBuyBaseCell
{
    _Bool _previousTermSwitchValue;
    TBTradeTermsModel *_model;
    UISwitch *_switchButton;
    UILabel *_titleLabel;
    UIImageView *_linkIcon;
    UILabel *_descLabel;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(nonatomic) _Bool previousTermSwitchValue; // @synthesize previousTermSwitchValue=_previousTermSwitchValue;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *linkIcon; // @synthesize linkIcon=_linkIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) TBTradeTermsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)adjustLabel;
- (void)switchButtonChecked;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

