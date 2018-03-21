//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSSHPBaseCell.h"

@class SFABanner, UIImageView, UILabel, UIView;

@interface AWSStockProfileBannerCell : AWSSHPBaseCell
{
    SFABanner *_banner;
    UIImageView *_bannerImageView;
    UIView *_imageContainer;
    UIView *_guideContainer;
    UILabel *_title;
    UILabel *_desc;
}

+ (double)height:(id)arg1;
+ (id)createCellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *guideContainer; // @synthesize guideContainer=_guideContainer;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) SFABanner *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (void)onImageClick:(id)arg1;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

