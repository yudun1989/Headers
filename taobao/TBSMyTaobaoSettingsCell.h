//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBSMyTaobaoSettingsCellModel, UIImageView, UILabel;

@interface TBSMyTaobaoSettingsCell : UITableViewCell
{
    TBSMyTaobaoSettingsCellModel *_settingsCellModel;
    UILabel *_titleLabel;
    UILabel *_rightTitleLabel;
    UILabel *_rightArrowLabel;
    UILabel *_qrLabel;
    UIImageView *_redDotImageView;
}

+ (id)mainMenuCellWithTableView:(id)arg1;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) UILabel *qrLabel; // @synthesize qrLabel=_qrLabel;
@property(retain, nonatomic) UILabel *rightArrowLabel; // @synthesize rightArrowLabel=_rightArrowLabel;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBSMyTaobaoSettingsCellModel *settingsCellModel; // @synthesize settingsCellModel=_settingsCellModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

