//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "FRConcernHomepageHeadViewProtocol-Protocol.h"

@class CAGradientLayer, FRCarEntity, FRConcernEntity, FRConcernHomepageViewModel, NSArray, NSDictionary, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTRotateAnimationHelper, UIImageView;

@interface FRConcernHomepageCarHeadView : SSThemedView <FRConcernHomepageHeadViewProtocol>
{
    _Bool _isTitleShow;
    _Bool _isTitleAnimate;
    _Bool _isImageCountShow;
    _Bool _isImageCountAnimate;
    NSString *_umengEventName;
    NSDictionary *_extraTracks;
    FRConcernHomepageViewModel *_viewModel;
    double _minimumHeaderHeight;
    FRConcernEntity *_concernEntity;
    FRCarEntity *_carEntity;
    CDUnknownBlockType _refreshHandle;
    double _percent;
    NSArray *_snapshotImages;
    UIImageView *_firstBlurImageView;
    UIImageView *_secondBlurImageView;
    SSThemedView *_titleContainerView;
    SSThemedView *_titleContentView;
    SSThemedLabel *_titleLabel;
    SSThemedImageView *_refreshImageView;
    TTRotateAnimationHelper *_rotateAnimationHelper;
    SSThemedView *_containerView;
    SSThemedView *_bannerContainerView;
    SSThemedImageView *_bannerImageView;
    CAGradientLayer *_bannerTopShadowLayer;
    SSThemedView *_bannerImageNightMaskView;
    SSThemedButton *_imageCountButton;
    SSThemedView *_carInfoContainerView;
    SSThemedLabel *_carSeriesLabel;
    SSThemedLabel *_carDescribeLabel;
    SSThemedButton *_carPriceButton;
    SSThemedButton *_moreButton;
    struct CGPoint _contentOffset;
}

+ (double)heightForConcernHomepageViewModel:(id)arg1;
@property(retain, nonatomic) SSThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) SSThemedButton *carPriceButton; // @synthesize carPriceButton=_carPriceButton;
@property(retain, nonatomic) SSThemedLabel *carDescribeLabel; // @synthesize carDescribeLabel=_carDescribeLabel;
@property(retain, nonatomic) SSThemedLabel *carSeriesLabel; // @synthesize carSeriesLabel=_carSeriesLabel;
@property(retain, nonatomic) SSThemedView *carInfoContainerView; // @synthesize carInfoContainerView=_carInfoContainerView;
@property(retain, nonatomic) SSThemedButton *imageCountButton; // @synthesize imageCountButton=_imageCountButton;
@property(retain, nonatomic) SSThemedView *bannerImageNightMaskView; // @synthesize bannerImageNightMaskView=_bannerImageNightMaskView;
@property(retain, nonatomic) CAGradientLayer *bannerTopShadowLayer; // @synthesize bannerTopShadowLayer=_bannerTopShadowLayer;
@property(retain, nonatomic) SSThemedImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) SSThemedView *bannerContainerView; // @synthesize bannerContainerView=_bannerContainerView;
@property(retain, nonatomic) SSThemedView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TTRotateAnimationHelper *rotateAnimationHelper; // @synthesize rotateAnimationHelper=_rotateAnimationHelper;
@property(retain, nonatomic) SSThemedImageView *refreshImageView; // @synthesize refreshImageView=_refreshImageView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(retain, nonatomic) SSThemedView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIImageView *secondBlurImageView; // @synthesize secondBlurImageView=_secondBlurImageView;
@property(retain, nonatomic) UIImageView *firstBlurImageView; // @synthesize firstBlurImageView=_firstBlurImageView;
@property(retain, nonatomic) NSArray *snapshotImages; // @synthesize snapshotImages=_snapshotImages;
@property(nonatomic) _Bool isImageCountAnimate; // @synthesize isImageCountAnimate=_isImageCountAnimate;
@property(nonatomic) _Bool isImageCountShow; // @synthesize isImageCountShow=_isImageCountShow;
@property(nonatomic) _Bool isTitleAnimate; // @synthesize isTitleAnimate=_isTitleAnimate;
@property(nonatomic) _Bool isTitleShow; // @synthesize isTitleShow=_isTitleShow;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(copy, nonatomic) CDUnknownBlockType refreshHandle; // @synthesize refreshHandle=_refreshHandle;
@property(retain, nonatomic) FRCarEntity *carEntity; // @synthesize carEntity=_carEntity;
@property(retain, nonatomic) FRConcernEntity *concernEntity; // @synthesize concernEntity=_concernEntity;
@property(nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
@property(retain, nonatomic) FRConcernHomepageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(copy, nonatomic) NSString *umengEventName; // @synthesize umengEventName=_umengEventName;
- (void).cxx_destruct;
- (id)takeSnapshotOfView:(id)arg1;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)stopRefresh;
- (void)startRefresh;
- (void)processTitleContainerWithShow:(_Bool)arg1 forceAnimate:(_Bool)arg2;
- (void)processImageCountWithShow:(_Bool)arg1 forceAnimate:(_Bool)arg2;
- (void)processBlur;
- (void)scrolledWithPercent:(double)arg1 contentOffset:(struct CGPoint)arg2 forceProcess:(_Bool)arg3;
- (void)scrolledWithPercent:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (void)refreshWithConcernEntity:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)openCarInfo:(id)arg1;
- (void)openCarPriceDetail:(id)arg1;
- (void)openCarImageGallery:(id)arg1;
- (void)refresh:(id)arg1;
- (void)createTitleComponent;
- (void)createBannerComponent;
- (void)createCarInfoComponent;
- (void)createComponent;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 refreshHandle:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

