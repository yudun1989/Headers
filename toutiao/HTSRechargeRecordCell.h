//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface HTSRechargeRecordCell : UITableViewCell
{
    UILabel *_platformLabel;
    UILabel *_amountLabel;
    UILabel *_stateLabel;
    UILabel *_timeLabel;
    UIView *_seprator;
}

+ (id)dateFormatter;
+ (id)displayTimeFromCreateTime:(id)arg1;
@property(retain, nonatomic) UIView *seprator; // @synthesize seprator=_seprator;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *platformLabel; // @synthesize platformLabel=_platformLabel;
- (void).cxx_destruct;
- (void)shouldShowSeprateLine:(_Bool)arg1;
- (void)refreshWithRecord:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

