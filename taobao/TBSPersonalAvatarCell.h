//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBSPersonalAvatar, UIImageView, UILabel;

@interface TBSPersonalAvatarCell : UITableViewCell
{
    TBSPersonalAvatar *_personalAvatar;
    UILabel *_titleLabel;
    UIImageView *_avatarImage;
    UILabel *_arrawLabel;
}

+ (id)personalAvatarCellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *arrawLabel; // @synthesize arrawLabel=_arrawLabel;
@property(retain, nonatomic) UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBSPersonalAvatar *personalAvatar; // @synthesize personalAvatar=_personalAvatar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

