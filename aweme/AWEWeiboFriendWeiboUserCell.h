//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEButton, AWEWeiboUserModel, UIImageView, UILabel;

@interface AWEWeiboFriendWeiboUserCell : UITableViewCell
{
    _Bool _showSeparatorLine;
    UIImageView *_thumbView;
    UILabel *_titleLabel;
    AWEButton *_followButton;
    AWEWeiboUserModel *_model;
}

@property(retain, nonatomic) AWEWeiboUserModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
- (void).cxx_destruct;
- (void)onFollowButtonClicked:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)_addViewElements;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

