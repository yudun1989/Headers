//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKAbroadWalletNormalCellModel, UIButton, UILabel;

@interface MBKAbroadWalletNormalCell : UIView
{
    MBKAbroadWalletNormalCellModel *_model;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MBKAbroadWalletNormalCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupView;
- (void)actionButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

