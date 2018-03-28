//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol TTActivityDelegate;

@interface TTActivity : SSViewBase
{
    _Bool _selected;
    UIView *_nightModeMaskView;
    UIImageView *_iconImageView;
    NSString *_count;
    id <TTActivityDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_activityButton;
}

+ (id)activityOfVideoCommodity;
+ (id)activityOfSaveVideo;
+ (id)activityOfWeitoutiao;
+ (id)activityOfUnBlockUser;
+ (id)activityOfBlockUser;
+ (id)activityOfDislike;
+ (id)activityOfCantEdit;
+ (id)activityOfEdit;
+ (id)activityOfForbidComment;
+ (id)activityOfAllowComment;
+ (id)activityOfCantDelete;
+ (id)activityOfDelete;
+ (id)activityOfSystem;
+ (id)activityOfDingTalk;
+ (id)activityOfZhiFuBaoMoment;
+ (id)activityOfZhiFuBao;
+ (id)activityOfVideoFavorite;
+ (id)activityOfFavorite;
+ (id)activityOfReport;
+ (id)activityOfFontSetting;
+ (id)activityOfNightMode;
+ (id)activityOfPGCWithAvatarUrl:(id)arg1 showName:(id)arg2;
+ (id)activityOfQQZoneShare;
+ (id)activityOfRenRenShare;
+ (id)activityOfKaiXinShare;
+ (id)activityOfQQWeiboShare;
+ (id)activityOfSinaWeiboShare;
+ (id)activityOfQQShare;
+ (id)activityOfMessageShare;
+ (id)activityOfMailShare;
+ (id)activityOfTwitterShare;
+ (id)activityOfFacebookShare;
+ (id)activityOfWeixinMoment;
+ (id)activityOfWeixin;
+ (id)activityOfCopyContent;
+ (id)activityOfMyMoment;
+ (id)activityOfCopy;
+ (id)activityOfDigDownWithCount:(id)arg1;
+ (id)activityOfDigUpWithCount:(id)arg1;
+ (id)activityWithModel:(id)arg1;
@property(retain, nonatomic) UIButton *activityButton; // @synthesize activityButton=_activityButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TTActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *nightModeMaskView; // @synthesize nightModeMaskView=_nightModeMaskView;
- (void).cxx_destruct;
- (void)performActionIfSelected;
- (id)activityImageUrl;
- (id)activityImageName;
- (id)activityImage;
- (id)activityTitle;
- (long long)activityType;
- (void)layoutSubviews;
- (void)refreshSubViewFrame;
- (void)activityButtonClicked;
- (void)themeChanged:(id)arg1;
- (void)setImageWithUrl:(id)arg1 placeholder:(id)arg2;
- (id)init;

@end

