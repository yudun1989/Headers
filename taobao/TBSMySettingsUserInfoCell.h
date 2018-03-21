//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBSUserInfoCellModel, UIImageView, UILabel;

@interface TBSMySettingsUserInfoCell : UITableViewCell
{
    TBSUserInfoCellModel *_userInfo;
    UIImageView *_avatarImageView;
    UILabel *_jianghuNameLabel;
    UILabel *_userNickLabel;
    UILabel *_qrLabel;
    UILabel *_arrowLabel;
}

+ (id)userInfoCellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *qrLabel; // @synthesize qrLabel=_qrLabel;
@property(retain, nonatomic) UILabel *userNickLabel; // @synthesize userNickLabel=_userNickLabel;
@property(retain, nonatomic) UILabel *jianghuNameLabel; // @synthesize jianghuNameLabel=_jianghuNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TBSUserInfoCellModel *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

