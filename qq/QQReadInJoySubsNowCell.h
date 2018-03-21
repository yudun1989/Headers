//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReadInJoySubsTableViewCell.h>

@class CAGradientLayer, MQZoneShadowBlurLabel, QQAvatarView, ReadInJoyChannel, ReadInJoyChannelArticle, ReadInJoyTitleView, ReadInjoyAsynImageView, UIButton, UIImageView, UILabel, UIView;

@interface QQReadInJoySubsNowCell : QQReadInJoySubsTableViewCell
{
    ReadInJoyChannelArticle *_articleInfo;
    UIImageView *_buttonView;
    MQZoneShadowBlurLabel *_playCountLabel;
    QQAvatarView *_avatar;
    UILabel *_accountTitleLabel;
    ReadInJoyChannel *_channel;
    ReadInJoyTitleView *_titleView;
    ReadInjoyAsynImageView *_imgView;
    UILabel *_titleLable;
    UIImageView *_liveImgView;
    UIButton *_liveBtn;
    CAGradientLayer *_titleGradientLayer;
    UIButton *_accountTitleBtn;
    UIView *_whiteInfoBackView;
    UIView *_grayInfoBackView;
    UIImageView *_imageViewForCorner;
}

@property(retain, nonatomic) UIImageView *imageViewForCorner; // @synthesize imageViewForCorner=_imageViewForCorner;
@property(retain, nonatomic) UIView *grayInfoBackView; // @synthesize grayInfoBackView=_grayInfoBackView;
@property(retain, nonatomic) UIView *whiteInfoBackView; // @synthesize whiteInfoBackView=_whiteInfoBackView;
@property(retain, nonatomic) UIButton *accountTitleBtn; // @synthesize accountTitleBtn=_accountTitleBtn;
@property(retain, nonatomic) CAGradientLayer *titleGradientLayer; // @synthesize titleGradientLayer=_titleGradientLayer;
@property(retain, nonatomic) UIButton *liveBtn; // @synthesize liveBtn=_liveBtn;
@property(retain, nonatomic) UIImageView *liveImgView; // @synthesize liveImgView=_liveImgView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) ReadInjoyAsynImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) ReadInJoyTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ReadInJoyChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UILabel *accountTitleLabel; // @synthesize accountTitleLabel=_accountTitleLabel;
@property(retain, nonatomic) QQAvatarView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) MQZoneShadowBlurLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) ReadInJoyChannelArticle *articleInfo; // @synthesize articleInfo=_articleInfo;
- (void).cxx_destruct;
- (void)setIsNeedCorner;
- (void)layoutSubviews;
- (_Bool)isVideoChannel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

