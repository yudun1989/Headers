//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, SSThemedView;

@interface TTCertificationChooseIndustryCell : SSThemedTableViewCell
{
    SSThemedLabel *_titleLabel;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

