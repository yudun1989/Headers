//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface _KSRedPacketGradeCell : UICollectionViewCell
{
    long long _grade;
    UILabel *_amountLabel;
    UILabel *_metricLabel;
    UIImageView *_innerView;
}

@property(retain, nonatomic) UIImageView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UILabel *metricLabel; // @synthesize metricLabel=_metricLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)_initUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

