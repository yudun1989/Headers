//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/MKMapViewDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class MKMapView, NSArray, NSMutableDictionary, NSString, NinePatchPhoto, QZAlbumCoverImageView, QZAlbumCoverInfoView, QZAlbumCoverShareUserView, QZAlbumCoverUploadButton, QZAlbumLoverInfoView, QZHeartWaveProgressView, QZJPhotoAlbum, UIButton, UIImage, UIImageView, UILabel;
@protocol QZAlbumCoverViewDelegate;

@interface QZAlbumCoverView : UIView <UIScrollViewDelegate, QZPhotoModuleDownloaderInterfaceDelegate, MKMapViewDelegate>
{
    id <QZAlbumCoverViewDelegate> _delegate;
    QZAlbumCoverImageView *_albumCoverImgView;
    long long _coverType;
    _Bool _isHost;
    UILabel *_descLabel;
    UILabel *_albumNameLabel;
    UILabel *_bottomDescLabel;
    UIButton *_bottomDescBtn;
    double _bottomDescOriginY;
    UIView *_faceView;
    QZAlbumCoverUploadButton *_bindButton;
    UIImageView *_titleBgView;
    UIImageView *_dataAndNumBgView;
    UIImageView *_descLeftView;
    UIImageView *_descRightView;
    UIButton *_parentLogoBtn;
    UIView *_middleBgView;
    NSString *_previousAlbumCoverUrl;
    NSArray *_templateElement;
    NSMutableDictionary *_tempUrlDic;
    unsigned long long downloadedNum;
    NinePatchPhoto *_titleInfo;
    NinePatchPhoto *_dateAndNumInfo;
    QZAlbumCoverInfoView *_albumCoverInfoView;
    QZAlbumCoverShareUserView *_shareUsersView;
    QZAlbumLoverInfoView *_loversInfoView;
    QZHeartWaveProgressView *_loverHeartView;
    NSArray *_annotations;
    UIImageView *_mapMaskView;
    MKMapView *_mkMapView;
    _Bool _shouldShowMapViewScreenShot;
    NSArray *_poiArray;
    long long _previousValidPoiNum;
    _Bool _isRenderingAnnotations;
    struct {
        struct {
            double x;
            double y;
        } origin;
        struct {
            double width;
            double height;
        } size;
    } _previousMapRect;
    UIView *_joinShareAlbumTipView;
    UIView *_recommendInfoView;
    UILabel *_recommendThemeTitle;
    UILabel *_recommendHintLabel;
    UIImageView *_recommendDressImg;
    _Bool _showRecommendInfoFirstTime;
    UIButton *_loveSpaceBtn;
    _Bool _isLoveSpaceBtnFold;
    NSString *_loveSpaceAdvUrl;
    NSString *_loveSpaceQbossTraceInfo;
    UIButton *_videoMakerBtn;
    NSString *_videoMakerCoverUrl;
    _Bool _isIndividual;
    _Bool _isInteracting;
    _Bool _isShareUser;
    _Bool _showJoinShareAlbumBtn;
    NSString *_albumName;
    long long _travelAlbumStartTime;
    long long _travelAlbumEndTime;
    UIImage *_albumCoverImage;
    NSString *_albumCoverUrl;
    NSString *_coverUrlForAlbum;
    QZJPhotoAlbum *_album;
    long long _uin;
    NSString *_ownerName;
    long long _recommendAlbumType;
}

@property(nonatomic) long long recommendAlbumType; // @synthesize recommendAlbumType=_recommendAlbumType;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) _Bool showJoinShareAlbumBtn; // @synthesize showJoinShareAlbumBtn=_showJoinShareAlbumBtn;
@property(nonatomic) _Bool isShareUser; // @synthesize isShareUser=_isShareUser;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak id <QZAlbumCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) QZJPhotoAlbum *album; // @synthesize album=_album;
@property(nonatomic) _Bool isIndividual; // @synthesize isIndividual=_isIndividual;
@property(retain, nonatomic) NSString *coverUrlForAlbum; // @synthesize coverUrlForAlbum=_coverUrlForAlbum;
@property(retain, nonatomic) NSString *albumCoverUrl; // @synthesize albumCoverUrl=_albumCoverUrl;
@property(retain, nonatomic) UIImage *albumCoverImage; // @synthesize albumCoverImage=_albumCoverImage;
@property(nonatomic) long long travelAlbumEndTime; // @synthesize travelAlbumEndTime=_travelAlbumEndTime;
@property(nonatomic) long long travelAlbumStartTime; // @synthesize travelAlbumStartTime=_travelAlbumStartTime;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)inviteHintViewWithType:(long long)arg1;
- (void)dismissInviteHint:(id)arg1;
- (void)checkCanShowInviteHint;
- (id)shareUserViewWithAlbumInfo:(id)arg1;
- (_Bool)isTheHost;
- (long long)getCoverType;
- (void)dealloc;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (id)birthStrFromAlbum:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutAlbumName;
- (double)descHeight;
- (id)attrStrWithAlbumDesc:(id)arg1;
- (void)resetView;
- (void)setAlbumTemplate;
- (void)updateTemplateUIWithType:(long long)arg1 image:(id)arg2;
- (double)getBindButtonBottom;
- (void)updateHeight;
- (double)getLeftMargin:(long long)arg1 width:(double)arg2;
- (void)updateWithLikeNum:(long long)arg1 commentNum:(long long)arg2 visitorNum:(long long)arg3;
- (void)onClickMaskPanel:(id)arg1;
- (void)bindBtnClick:(id)arg1;
- (void)clickLoveSpace;
- (void)removeLoverSpaceBtn;
- (void)updateLoverSpaceBtnStatus:(_Bool)arg1;
- (void)autoFoldLoveSpaceBtn;
- (void)createLoverSpaceBtn:(id)arg1 traceInfo:(id)arg2;
- (void)updateRightAvatarView:(id)arg1;
- (void)stopHeartViewAnimation;
- (void)onClickLoverHeartView:(id)arg1;
- (void)updateLoverAlbumName:(id)arg1;
- (void)setLoversAvatarView:(id)arg1;
- (void)setLoverHeartProgress:(unsigned int)arg1;
- (void)createLoverHeartView:(unsigned int)arg1;
- (void)createLoversInfoView;
- (void)updateTitleFont:(id)arg1;
- (_Bool)isQualifiedLat:(double)arg1 Lon:(double)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (double)distanceFromCoordinate1:(struct CLLocationCoordinate2D)arg1 coordinate2:(struct CLLocationCoordinate2D)arg2;
- (void)displayMapViewWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 distance:(double)arg2 annotations:(id)arg3;
- (void)updateCoverWithPoiArray:(id)arg1;
- (double)maxMapViewLength;
- (_Bool)qualifiedAndCorrectLat:(double *)arg1 lon:(double *)arg2;
- (void)updateMapViewFrame;
- (void)updateContentOffset:(double)arg1;
- (void)closeReommendInfo;
- (void)onClickSettingAlbumTypeBtn;
- (void)setRecommendAlbumType:(long long)arg1 albumId:(id)arg2;
- (void)hideRecommendInfoView;
- (void)updateRecommendInfoView:(long long)arg1;
- (void)createRecommendInfoView;
- (void)createBindBtnWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 albumName:(id)arg2 type:(long long)arg3 isHost:(_Bool)arg4 isIndividual:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

