//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EWBaseViewController.h"

#import "APSKLaunchpadDelegate-Protocol.h"

@class APCustomNavigationView, APMapKitView, APSKLaunchpad, CAGradientLayer, CLLocation, EWAgreementPopupView, EWImageBrowser, MKPolyline, MKPolylineView, MOPTaskDetailResponse, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface EWTaskDetailViewController : EWBaseViewController <APSKLaunchpadDelegate>
{
    _Bool _needRefresh;
    _Bool _isShowNavRightItem;
    _Bool _needChangeNavStyle;
    UILabel *_productDescription;
    EWImageBrowser *_imageBrowser;
    UIView *_mapWarpView;
    APMapKitView *_mapView;
    MKPolyline *_routeLine;
    MKPolylineView *_routeLineView;
    UIScrollView *_scrollView;
    UIView *_buttonWarpView;
    UIView *_userInfoView;
    UIView *_helpInfoWrap;
    NSString *_taskId;
    MOPTaskDetailResponse *_response;
    UILabel *_detailDescLabel;
    UIImageView *_avatarView;
    UILabel *_userName;
    UIImageView *_creditLevel;
    UIImageView *_isReadName;
    UILabel *_serviceNameLabel;
    UILabel *_priceLabel;
    UIView *_timeView;
    UILabel *_timeLabel;
    UIButton *_navButton;
    UIButton *_chatButton;
    UIButton *_bookingButton;
    NSMutableArray *_imageViews;
    APSKLaunchpad *_shareLaunchPad;
    NSString *_searchTag;
    CLLocation *_userLocation;
    CLLocation *_taskLocation;
    APCustomNavigationView *_navigationView;
    CAGradientLayer *_backgroundLayer;
    EWAgreementPopupView *_popupView;
}

@property(retain, nonatomic) EWAgreementPopupView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) _Bool needChangeNavStyle; // @synthesize needChangeNavStyle=_needChangeNavStyle;
@property(nonatomic) _Bool isShowNavRightItem; // @synthesize isShowNavRightItem=_isShowNavRightItem;
@property(retain, nonatomic) APCustomNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) CLLocation *taskLocation; // @synthesize taskLocation=_taskLocation;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) APSKLaunchpad *shareLaunchPad; // @synthesize shareLaunchPad=_shareLaunchPad;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) UIButton *bookingButton; // @synthesize bookingButton=_bookingButton;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) UIButton *navButton; // @synthesize navButton=_navButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *serviceNameLabel; // @synthesize serviceNameLabel=_serviceNameLabel;
@property(retain, nonatomic) UIImageView *isReadName; // @synthesize isReadName=_isReadName;
@property(retain, nonatomic) UIImageView *creditLevel; // @synthesize creditLevel=_creditLevel;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *detailDescLabel; // @synthesize detailDescLabel=_detailDescLabel;
@property(retain, nonatomic) MOPTaskDetailResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UIView *helpInfoWrap; // @synthesize helpInfoWrap=_helpInfoWrap;
@property(retain, nonatomic) UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIView *buttonWarpView; // @synthesize buttonWarpView=_buttonWarpView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MKPolylineView *routeLineView; // @synthesize routeLineView=_routeLineView;
@property(retain, nonatomic) MKPolyline *routeLine; // @synthesize routeLine=_routeLine;
@property(retain, nonatomic) APMapKitView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *mapWarpView; // @synthesize mapWarpView=_mapWarpView;
@property(retain, nonatomic) EWImageBrowser *imageBrowser; // @synthesize imageBrowser=_imageBrowser;
@property(retain, nonatomic) UILabel *productDescription; // @synthesize productDescription=_productDescription;
- (void).cxx_destruct;
- (void)tryToShowDistance;
- (id)findHairlineImageViewUnder:(id)arg1;
- (void)shareToChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)reportTask;
- (void)shareTask;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doHelp;
- (void)viewOrder;
- (void)edit;
- (void)notifyAbandonHelpConfirm;
- (void)abandonHelpConfirm;
- (void)abandonHelp;
- (void)updateButtonView:(id)arg1;
- (void)gotoUserProfilePage;
- (void)chatWithPeople;
- (long long)preferredStatusBarStyle;
- (void)mapKitView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapKitView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapKitView:(id)arg1 userLocationViewForAnnotation:(id)arg2;
- (id)mapKitView:(id)arg1 viewForAnnotation:(id)arg2;
- (_Bool)autohideNavigationBar;
- (id)customNavigationBar;
- (long long)customStatusBarStytle;
- (void)updateNavRightItemWithStyle:(int)arg1;
- (void)setNavSpecialStyleWithAlpha:(double)arg1;
- (void)setNavNormalStyleWithAlpha:(double)arg1;
- (void)updateNavigationContollerStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)navigate;
- (void)createSubview;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)EWPhotoPreview:(id)arg1;
- (void)updateContentSize;
- (long long)handleResponse:(id)arg1;
- (void)requestDetailData;
- (void)onRightNavigationItemClicked;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

