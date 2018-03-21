//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class NSMutableString, TBTradeLabelModel, UIImageView, UILabel;

@interface TBExtBuyLabelCell : TBExtBuyBaseCell
{
    _Bool _isAdapte;
    TBTradeLabelModel *_model;
    UIImageView *_labelIcon;
    UILabel *_dataLabel;
    UILabel *_descLabel;
    UIImageView *_linkIcon;
    NSMutableString *_voiceOverStr;
}

+ (double)onlyShowValueCellWidth:(double)arg1 rowHeightForObject:(id)arg2;
+ (double)showValueDescCellWidth:(double)arg1 rowHeightForObject:(id)arg2;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) NSMutableString *voiceOverStr; // @synthesize voiceOverStr=_voiceOverStr;
@property(nonatomic) _Bool isAdapte; // @synthesize isAdapte=_isAdapte;
@property(retain, nonatomic) UIImageView *linkIcon; // @synthesize linkIcon=_linkIcon;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *dataLabel; // @synthesize dataLabel=_dataLabel;
@property(retain, nonatomic) UIImageView *labelIcon; // @synthesize labelIcon=_labelIcon;
@property(nonatomic) __weak TBTradeLabelModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)showLinkIcon;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)configAccessibility;
- (void)initCell;

@end

