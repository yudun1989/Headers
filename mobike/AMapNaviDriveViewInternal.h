//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AMapNaviDriveDataRepresentable-Protocol.h"
#import "AMapNaviDriveManagerInternalDelegateForView-Protocol.h"
#import "MAMapViewDelegate-Protocol.h"

@class AMapNaviCarAnnotation, AMapNaviCarAnnotationView, AMapNaviGuidePolyline, AMapNaviInfo, AMapNaviLocation, AMapNaviPoint, AMapNaviRoute, AMapNaviRoutePolylineOption, AMapNaviTrafficBarViewInternal, MACustomCalloutView, MAMapView, NSArray, NSDictionary, NSLayoutConstraint, NSString, NSTimer, UIButton, UIImage, UIImageView, UILabel;
@protocol AMapNaviDriveViewInternalDelegate;

@interface AMapNaviDriveViewInternal : UIView <MAMapViewDelegate, AMapNaviDriveDataRepresentable, AMapNaviDriveManagerInternalDelegateForView>
{
    _Bool _showUIElements;
    _Bool _showCamera;
    _Bool _showCrossImage;
    _Bool _showStandardNightType;
    _Bool _showBrowseRouteButton;
    _Bool _showMoreButton;
    _Bool _showTrafficBar;
    _Bool _showTrafficButton;
    _Bool _showTrafficLayer;
    _Bool _showTurnArrow;
    _Bool _showCompass;
    _Bool _lockCarPosition;
    _Bool _needMoving;
    _Bool _moveDirectly;
    _Bool _isEmulatorNavi;
    _Bool _isShowingSetView;
    id <AMapNaviDriveViewInternalDelegate> _delegate;
    long long _trackingMode;
    long long _showMode;
    double _cameraDegree;
    MACustomCalloutView *_customCalloutView;
    double _lineWidth;
    UIImage *_normalTexture;
    NSDictionary *_statusTextures;
    NSTimer *_moveCarTimer;
    AMapNaviCarAnnotation *_carAnnotation;
    AMapNaviCarAnnotationView *_carAnnotationView;
    long long _splitCount;
    long long _stepCount;
    AMapNaviPoint *_priorPoint;
    double _priorCarDirection;
    double _priorZoomLevel;
    double _directionOffset;
    double _zoomLevelOffset;
    double _latOffset;
    double _lonOffset;
    NSTimer *_autoSwitchToCarPositionLockedTimer;
    long long _currentNaviMode;
    AMapNaviLocation *_currentCarLocation;
    AMapNaviInfo *_currentNaviInfo;
    NSArray *_cameraInfos;
    AMapNaviRoute *_currentNaviRoute;
    NSArray *_trafficStatus;
    NSArray *_splittedPolylines;
    AMapNaviGuidePolyline *_carToDestinationGuidePolyline;
    UIView *_customView;
    MAMapView *_internalMapView;
    UIImageView *_laneInfoView;
    UIView *_topInfoView;
    UIImageView *_topTurnImageView;
    UILabel *_topTurnRemainLabel;
    UILabel *_topRoadLabel;
    UIImageView *_badGPSSignalImageView;
    UIView *_topInfoContainerViewInCrossMode;
    UIImageView *_crossImageView;
    UIImageView *_topTurnImageViewInCrossMode;
    UILabel *_topTurnRemainLabelInCrossMode;
    UILabel *_topRoadLabelInCrossMode;
    UIView *_bottomInfoView;
    UIImageView *_bottomBgImageViewPortrait;
    UIView *_bottomRemainBgView;
    UILabel *_bottomRemainTimeLabel;
    UILabel *_bottomRemainDistanceLabel;
    UIView *_bottomContinueNaviBgView;
    UIButton *_bottomContinueNaviBtnInLandscape;
    UILabel *_bottomReainInfoLabelPortrait;
    UIButton *_bottomEmulatorSpeedBtn;
    UIView *_bottomRoadView;
    UIImageView *_bottomRoadImageView;
    UILabel *_bottomRoadLabel;
    UIButton *_rightSetBtn;
    UIButton *_rightBrowserBtn;
    UIButton *_rightSwitchTrafficBtn;
    AMapNaviTrafficBarViewInternal *_rightTrafficBarView;
    UIButton *_zoomInBtn;
    UIButton *_zoomOutBtn;
    UIButton *_swtichTrackModeBtn;
    UILabel *_speedLabel;
    UIButton *_reCalculateRoutesBtn;
    NSLayoutConstraint *_setMoreBtnHeight;
    NSLayoutConstraint *_rightBrowserBtnHeight;
    NSLayoutConstraint *_rightSwitchTrafficBtnHeight;
    NSLayoutConstraint *_topInfoViewHeightPortrait;
    NSLayoutConstraint *_mapViewTopPortrait;
    NSLayoutConstraint *_topInfoViewHeightInCrossModePortrait;
    NSLayoutConstraint *_bottomInfoViewRightPortrait;
    NSLayoutConstraint *_topInfoViewWidthLandscape;
    NSLayoutConstraint *_mapViewLeftLandscape;
    NSLayoutConstraint *_mapViewTopLandscape;
    NSLayoutConstraint *_crossImageViewHeightLandscape;
    NSLayoutConstraint *_crossImageViewWidthLandScape;
    NSLayoutConstraint *_rightBrowserBtnBottomLandscape;
    UIImage *_cameraImage;
    UIImage *_startPointImage;
    UIImage *_wayPointImage;
    UIImage *_endPointImage;
    UIImage *_carImage;
    UIImage *_carCompassImage;
    AMapNaviRoutePolylineOption *_routePolylineOption;
    NSLayoutConstraint *_ios7_topInfoViewRight;
    NSLayoutConstraint *_ios7_mapViewLeft;
    NSLayoutConstraint *_ios7_mapViewTop;
    NSLayoutConstraint *_ios7_rightTrafficBarTop;
    UIView *_ios7_topInfoContainerViewPor;
    UIView *_ios7_topInfoContainerViewLad;
    UIImageView *_ios7_topTurnImageView;
    UILabel *_ios7_topTurnRemainLabel;
    UILabel *_ios7_topRoadLabel;
    UIView *_ios7_bottomInfoViewLandscape;
    UIView *_ios7_bottomRemainBgView;
    UILabel *_ios7_bottomRemainTimeLabel;
    UILabel *_ios7_bottomRemainDistanceLabel;
    UIView *_ios7_bottomContinueNaviBgView;
    UIImageView *_ios7_crossImageView;
    NSLayoutConstraint *_ios7_bottomRoadViewBottom;
    UIButton *_ios7_bottomEmulatorSpeedBtn;
    AMapNaviPoint *_searchEndPoint;
    NSArray *_searchWayPoints;
}

@property(retain, nonatomic) NSArray *searchWayPoints; // @synthesize searchWayPoints=_searchWayPoints;
@property(retain, nonatomic) AMapNaviPoint *searchEndPoint; // @synthesize searchEndPoint=_searchEndPoint;
@property(nonatomic) _Bool isShowingSetView; // @synthesize isShowingSetView=_isShowingSetView;
@property(nonatomic) _Bool isEmulatorNavi; // @synthesize isEmulatorNavi=_isEmulatorNavi;
@property(nonatomic) __weak UIButton *ios7_bottomEmulatorSpeedBtn; // @synthesize ios7_bottomEmulatorSpeedBtn=_ios7_bottomEmulatorSpeedBtn;
@property(nonatomic) __weak NSLayoutConstraint *ios7_bottomRoadViewBottom; // @synthesize ios7_bottomRoadViewBottom=_ios7_bottomRoadViewBottom;
@property(nonatomic) __weak UIImageView *ios7_crossImageView; // @synthesize ios7_crossImageView=_ios7_crossImageView;
@property(nonatomic) __weak UIView *ios7_bottomContinueNaviBgView; // @synthesize ios7_bottomContinueNaviBgView=_ios7_bottomContinueNaviBgView;
@property(nonatomic) __weak UILabel *ios7_bottomRemainDistanceLabel; // @synthesize ios7_bottomRemainDistanceLabel=_ios7_bottomRemainDistanceLabel;
@property(nonatomic) __weak UILabel *ios7_bottomRemainTimeLabel; // @synthesize ios7_bottomRemainTimeLabel=_ios7_bottomRemainTimeLabel;
@property(nonatomic) __weak UIView *ios7_bottomRemainBgView; // @synthesize ios7_bottomRemainBgView=_ios7_bottomRemainBgView;
@property(nonatomic) __weak UIView *ios7_bottomInfoViewLandscape; // @synthesize ios7_bottomInfoViewLandscape=_ios7_bottomInfoViewLandscape;
@property(nonatomic) __weak UILabel *ios7_topRoadLabel; // @synthesize ios7_topRoadLabel=_ios7_topRoadLabel;
@property(nonatomic) __weak UILabel *ios7_topTurnRemainLabel; // @synthesize ios7_topTurnRemainLabel=_ios7_topTurnRemainLabel;
@property(nonatomic) __weak UIImageView *ios7_topTurnImageView; // @synthesize ios7_topTurnImageView=_ios7_topTurnImageView;
@property(nonatomic) __weak UIView *ios7_topInfoContainerViewLad; // @synthesize ios7_topInfoContainerViewLad=_ios7_topInfoContainerViewLad;
@property(nonatomic) __weak UIView *ios7_topInfoContainerViewPor; // @synthesize ios7_topInfoContainerViewPor=_ios7_topInfoContainerViewPor;
@property(nonatomic) __weak NSLayoutConstraint *ios7_rightTrafficBarTop; // @synthesize ios7_rightTrafficBarTop=_ios7_rightTrafficBarTop;
@property(nonatomic) __weak NSLayoutConstraint *ios7_mapViewTop; // @synthesize ios7_mapViewTop=_ios7_mapViewTop;
@property(nonatomic) __weak NSLayoutConstraint *ios7_mapViewLeft; // @synthesize ios7_mapViewLeft=_ios7_mapViewLeft;
@property(nonatomic) __weak NSLayoutConstraint *ios7_topInfoViewRight; // @synthesize ios7_topInfoViewRight=_ios7_topInfoViewRight;
@property(retain, nonatomic) AMapNaviRoutePolylineOption *routePolylineOption; // @synthesize routePolylineOption=_routePolylineOption;
@property(retain, nonatomic) UIImage *carCompassImage; // @synthesize carCompassImage=_carCompassImage;
@property(retain, nonatomic) UIImage *carImage; // @synthesize carImage=_carImage;
@property(retain, nonatomic) UIImage *endPointImage; // @synthesize endPointImage=_endPointImage;
@property(retain, nonatomic) UIImage *wayPointImage; // @synthesize wayPointImage=_wayPointImage;
@property(retain, nonatomic) UIImage *startPointImage; // @synthesize startPointImage=_startPointImage;
@property(retain, nonatomic) UIImage *cameraImage; // @synthesize cameraImage=_cameraImage;
@property(nonatomic) __weak NSLayoutConstraint *rightBrowserBtnBottomLandscape; // @synthesize rightBrowserBtnBottomLandscape=_rightBrowserBtnBottomLandscape;
@property(nonatomic) __weak NSLayoutConstraint *crossImageViewWidthLandScape; // @synthesize crossImageViewWidthLandScape=_crossImageViewWidthLandScape;
@property(nonatomic) __weak NSLayoutConstraint *crossImageViewHeightLandscape; // @synthesize crossImageViewHeightLandscape=_crossImageViewHeightLandscape;
@property(nonatomic) __weak NSLayoutConstraint *mapViewTopLandscape; // @synthesize mapViewTopLandscape=_mapViewTopLandscape;
@property(nonatomic) __weak NSLayoutConstraint *mapViewLeftLandscape; // @synthesize mapViewLeftLandscape=_mapViewLeftLandscape;
@property(nonatomic) __weak NSLayoutConstraint *topInfoViewWidthLandscape; // @synthesize topInfoViewWidthLandscape=_topInfoViewWidthLandscape;
@property(nonatomic) __weak NSLayoutConstraint *bottomInfoViewRightPortrait; // @synthesize bottomInfoViewRightPortrait=_bottomInfoViewRightPortrait;
@property(nonatomic) __weak NSLayoutConstraint *topInfoViewHeightInCrossModePortrait; // @synthesize topInfoViewHeightInCrossModePortrait=_topInfoViewHeightInCrossModePortrait;
@property(nonatomic) __weak NSLayoutConstraint *mapViewTopPortrait; // @synthesize mapViewTopPortrait=_mapViewTopPortrait;
@property(nonatomic) __weak NSLayoutConstraint *topInfoViewHeightPortrait; // @synthesize topInfoViewHeightPortrait=_topInfoViewHeightPortrait;
@property(nonatomic) __weak NSLayoutConstraint *rightSwitchTrafficBtnHeight; // @synthesize rightSwitchTrafficBtnHeight=_rightSwitchTrafficBtnHeight;
@property(nonatomic) __weak NSLayoutConstraint *rightBrowserBtnHeight; // @synthesize rightBrowserBtnHeight=_rightBrowserBtnHeight;
@property(nonatomic) __weak NSLayoutConstraint *setMoreBtnHeight; // @synthesize setMoreBtnHeight=_setMoreBtnHeight;
@property(nonatomic) __weak UIButton *reCalculateRoutesBtn; // @synthesize reCalculateRoutesBtn=_reCalculateRoutesBtn;
@property(nonatomic) __weak UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(nonatomic) __weak UIButton *swtichTrackModeBtn; // @synthesize swtichTrackModeBtn=_swtichTrackModeBtn;
@property(nonatomic) __weak UIButton *zoomOutBtn; // @synthesize zoomOutBtn=_zoomOutBtn;
@property(nonatomic) __weak UIButton *zoomInBtn; // @synthesize zoomInBtn=_zoomInBtn;
@property(nonatomic) __weak AMapNaviTrafficBarViewInternal *rightTrafficBarView; // @synthesize rightTrafficBarView=_rightTrafficBarView;
@property(nonatomic) __weak UIButton *rightSwitchTrafficBtn; // @synthesize rightSwitchTrafficBtn=_rightSwitchTrafficBtn;
@property(nonatomic) __weak UIButton *rightBrowserBtn; // @synthesize rightBrowserBtn=_rightBrowserBtn;
@property(nonatomic) __weak UIButton *rightSetBtn; // @synthesize rightSetBtn=_rightSetBtn;
@property(nonatomic) __weak UILabel *bottomRoadLabel; // @synthesize bottomRoadLabel=_bottomRoadLabel;
@property(nonatomic) __weak UIImageView *bottomRoadImageView; // @synthesize bottomRoadImageView=_bottomRoadImageView;
@property(nonatomic) __weak UIView *bottomRoadView; // @synthesize bottomRoadView=_bottomRoadView;
@property(nonatomic) __weak UIButton *bottomEmulatorSpeedBtn; // @synthesize bottomEmulatorSpeedBtn=_bottomEmulatorSpeedBtn;
@property(nonatomic) __weak UILabel *bottomReainInfoLabelPortrait; // @synthesize bottomReainInfoLabelPortrait=_bottomReainInfoLabelPortrait;
@property(nonatomic) __weak UIButton *bottomContinueNaviBtnInLandscape; // @synthesize bottomContinueNaviBtnInLandscape=_bottomContinueNaviBtnInLandscape;
@property(nonatomic) __weak UIView *bottomContinueNaviBgView; // @synthesize bottomContinueNaviBgView=_bottomContinueNaviBgView;
@property(nonatomic) __weak UILabel *bottomRemainDistanceLabel; // @synthesize bottomRemainDistanceLabel=_bottomRemainDistanceLabel;
@property(nonatomic) __weak UILabel *bottomRemainTimeLabel; // @synthesize bottomRemainTimeLabel=_bottomRemainTimeLabel;
@property(nonatomic) __weak UIView *bottomRemainBgView; // @synthesize bottomRemainBgView=_bottomRemainBgView;
@property(nonatomic) __weak UIImageView *bottomBgImageViewPortrait; // @synthesize bottomBgImageViewPortrait=_bottomBgImageViewPortrait;
@property(nonatomic) __weak UIView *bottomInfoView; // @synthesize bottomInfoView=_bottomInfoView;
@property(nonatomic) __weak UILabel *topRoadLabelInCrossMode; // @synthesize topRoadLabelInCrossMode=_topRoadLabelInCrossMode;
@property(nonatomic) __weak UILabel *topTurnRemainLabelInCrossMode; // @synthesize topTurnRemainLabelInCrossMode=_topTurnRemainLabelInCrossMode;
@property(nonatomic) __weak UIImageView *topTurnImageViewInCrossMode; // @synthesize topTurnImageViewInCrossMode=_topTurnImageViewInCrossMode;
@property(nonatomic) __weak UIImageView *crossImageView; // @synthesize crossImageView=_crossImageView;
@property(nonatomic) __weak UIView *topInfoContainerViewInCrossMode; // @synthesize topInfoContainerViewInCrossMode=_topInfoContainerViewInCrossMode;
@property(nonatomic) __weak UIImageView *badGPSSignalImageView; // @synthesize badGPSSignalImageView=_badGPSSignalImageView;
@property(nonatomic) __weak UILabel *topRoadLabel; // @synthesize topRoadLabel=_topRoadLabel;
@property(nonatomic) __weak UILabel *topTurnRemainLabel; // @synthesize topTurnRemainLabel=_topTurnRemainLabel;
@property(nonatomic) __weak UIImageView *topTurnImageView; // @synthesize topTurnImageView=_topTurnImageView;
@property(nonatomic) __weak UIView *topInfoView; // @synthesize topInfoView=_topInfoView;
@property(nonatomic) __weak UIImageView *laneInfoView; // @synthesize laneInfoView=_laneInfoView;
@property(nonatomic) __weak MAMapView *internalMapView; // @synthesize internalMapView=_internalMapView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) AMapNaviGuidePolyline *carToDestinationGuidePolyline; // @synthesize carToDestinationGuidePolyline=_carToDestinationGuidePolyline;
@property(copy, nonatomic) NSArray *splittedPolylines; // @synthesize splittedPolylines=_splittedPolylines;
@property(copy, nonatomic) NSArray *trafficStatus; // @synthesize trafficStatus=_trafficStatus;
@property(retain, nonatomic) AMapNaviRoute *currentNaviRoute; // @synthesize currentNaviRoute=_currentNaviRoute;
@property(copy, nonatomic) NSArray *cameraInfos; // @synthesize cameraInfos=_cameraInfos;
@property(retain, nonatomic) AMapNaviInfo *currentNaviInfo; // @synthesize currentNaviInfo=_currentNaviInfo;
@property(retain, nonatomic) AMapNaviLocation *currentCarLocation; // @synthesize currentCarLocation=_currentCarLocation;
@property(nonatomic) long long currentNaviMode; // @synthesize currentNaviMode=_currentNaviMode;
@property(retain, nonatomic) NSTimer *autoSwitchToCarPositionLockedTimer; // @synthesize autoSwitchToCarPositionLockedTimer=_autoSwitchToCarPositionLockedTimer;
@property(nonatomic) double lonOffset; // @synthesize lonOffset=_lonOffset;
@property(nonatomic) double latOffset; // @synthesize latOffset=_latOffset;
@property(nonatomic) double zoomLevelOffset; // @synthesize zoomLevelOffset=_zoomLevelOffset;
@property(nonatomic) double directionOffset; // @synthesize directionOffset=_directionOffset;
@property(nonatomic) double priorZoomLevel; // @synthesize priorZoomLevel=_priorZoomLevel;
@property(nonatomic) double priorCarDirection; // @synthesize priorCarDirection=_priorCarDirection;
@property(retain, nonatomic) AMapNaviPoint *priorPoint; // @synthesize priorPoint=_priorPoint;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) long long splitCount; // @synthesize splitCount=_splitCount;
@property(nonatomic) _Bool moveDirectly; // @synthesize moveDirectly=_moveDirectly;
@property(nonatomic) _Bool needMoving; // @synthesize needMoving=_needMoving;
@property(retain, nonatomic) AMapNaviCarAnnotationView *carAnnotationView; // @synthesize carAnnotationView=_carAnnotationView;
@property(retain, nonatomic) AMapNaviCarAnnotation *carAnnotation; // @synthesize carAnnotation=_carAnnotation;
@property(retain, nonatomic) NSTimer *moveCarTimer; // @synthesize moveCarTimer=_moveCarTimer;
@property(nonatomic) _Bool lockCarPosition; // @synthesize lockCarPosition=_lockCarPosition;
@property(copy, nonatomic) NSDictionary *statusTextures; // @synthesize statusTextures=_statusTextures;
@property(copy, nonatomic) UIImage *normalTexture; // @synthesize normalTexture=_normalTexture;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) MACustomCalloutView *customCalloutView; // @synthesize customCalloutView=_customCalloutView;
@property(nonatomic) double cameraDegree; // @synthesize cameraDegree=_cameraDegree;
@property(nonatomic) _Bool showCompass; // @synthesize showCompass=_showCompass;
@property(nonatomic) _Bool showTurnArrow; // @synthesize showTurnArrow=_showTurnArrow;
@property(nonatomic) _Bool showTrafficLayer; // @synthesize showTrafficLayer=_showTrafficLayer;
@property(nonatomic) _Bool showTrafficButton; // @synthesize showTrafficButton=_showTrafficButton;
@property(nonatomic) _Bool showTrafficBar; // @synthesize showTrafficBar=_showTrafficBar;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) _Bool showBrowseRouteButton; // @synthesize showBrowseRouteButton=_showBrowseRouteButton;
@property(nonatomic) _Bool showStandardNightType; // @synthesize showStandardNightType=_showStandardNightType;
@property(nonatomic) _Bool showCrossImage; // @synthesize showCrossImage=_showCrossImage;
@property(nonatomic) _Bool showCamera; // @synthesize showCamera=_showCamera;
@property(nonatomic) _Bool showUIElements; // @synthesize showUIElements=_showUIElements;
@property(nonatomic) long long showMode; // @synthesize showMode=_showMode;
@property(nonatomic) long long trackingMode; // @synthesize trackingMode=_trackingMode;
@property(nonatomic) __weak id <AMapNaviDriveViewInternalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionChanged:(id)arg1;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)defaultTextureImageForRouteStatus:(long long)arg1;
- (id)textureImageWithTrafficPolyline:(long long)arg1;
- (id)textureImageWithoutTrafficPolyline;
- (void)addRouteDashPolylineFromStartIndex:(long long)arg1 coordinateCount:(long long)arg2;
- (void)addRoutePolylineWithoutTrafficStatus;
- (void)addRoutePolylineWithPolylineOption;
- (void)addRoutePolylineWithTrafficStatus;
- (void)removeRoutePolyline;
- (void)updateRoutePolyline;
- (void)removeRouteTurnArrowPolyline;
- (id)getRouteTurnArrowPolylineWithSegmentIndex:(long long)arg1;
- (void)updateRouteTurnArrowPolylineWithSegmentIndex:(long long)arg1;
- (void)updateCarToDestinationGuidePolylineWhenCarMove;
- (void)removeCarToDestinationGuidLine;
- (void)updateCarToDestinationGuidLine;
- (void)removeRouteCameraTypeAnnotation;
- (void)updateRouteCameraAnnotationWithCameraInfos:(id)arg1;
- (void)removeRouteCameraAnnotation;
- (void)updateRouteCameraAnnotationWithStartIndex:(long long)arg1;
- (void)removeNaviRoutePointAnnotation;
- (void)updateRoutePointAnnotation;
- (void)switchEmulatorSpeedBtnClick:(id)arg1;
- (void)moreBtnClick:(id)arg1;
- (void)goBack:(id)arg1;
- (void)zoomOutButtonAction:(id)arg1;
- (void)zoomInButtonAction:(id)arg1;
- (void)browserBtnClick:(id)arg1;
- (void)swichTrafficBtnClick:(id)arg1;
- (void)continueNaviBtnClick:(id)arg1;
- (void)reCalculeRouteBtnClick:(id)arg1;
- (void)switchTrackingMode:(id)arg1;
- (void)didArrivedDestination;
- (void)setupGPSSignalStrength:(long long)arg1;
- (void)updateZoomButtonState;
- (void)handleRightBrowserBtnShowOrHide;
- (void)handleRightBrowserBtnBottomLandscape;
- (void)handleLeftSpeedViewViewShowOrHide;
- (void)handleRightTrafficBarViewShowOrHide;
- (void)configureRightTipsView;
- (void)updateBottomInfoView;
- (void)configureBottomInfoView;
- (void)updateTopInfoView;
- (void)turnImageViewTap;
- (void)configureTopInfoView;
- (void)configureLaneInfoView;
- (void)handleWhenCrossImageShowAndHide:(id)arg1;
- (void)updateMapViewLogoAndScaleState;
- (void)configureMapView;
- (id)attributedStringAllString:(id)arg1 targetString:(id)arg2 targetFont:(id)arg3 targetColor:(id)arg4;
- (double)normalizeOffsetDegree:(double)arg1;
- (void)driveViewInternalAutoSwitchToLockedCar;
- (void)stopAutoSwitchToCarLockedTimer;
- (void)startAutoSwitchToCarLockedTimer;
- (void)internalDriveManager:(id)arg1 updateTurnIconImage:(id)arg2 turnIconType:(long long)arg3;
- (void)internalDriveManager:(id)arg1 updateGPSSignalStrength:(long long)arg2;
- (void)driveManagerHideLaneInfo:(id)arg1;
- (void)driveManager:(id)arg1 showLaneBackInfo:(id)arg2 laneSelectInfo:(id)arg3;
- (void)driveManagerHideCrossImage:(id)arg1;
- (void)driveManager:(id)arg1 showCrossImage:(id)arg2;
- (void)driveManager:(id)arg1 updateTrafficStatus:(id)arg2;
- (void)driveManager:(id)arg1 updateNaviLocation:(id)arg2;
- (void)driveManager:(id)arg1 updateCameraInfos:(id)arg2;
- (void)driveManager:(id)arg1 updateNaviInfo:(id)arg2;
- (void)driveManager:(id)arg1 updateNaviRoute:(id)arg2;
- (void)driveManager:(id)arg1 updateNaviMode:(long long)arg2;
- (void)moveCarAnnotationToCoordinate:(id)arg1 direction:(double)arg2 zoomLevel:(double)arg3;
- (void)moveCarLocationSmooth:(id)arg1;
- (void)stopMoveCarTimer;
- (void)startMoveCarTimer;
- (void)resetCarAnnotaionToRightStateAndIsNeedResetMapView:(_Bool)arg1;
- (void)showMapRegionWithBounds:(id)arg1 centerCoordinate:(id)arg2;
- (void)changeToNaviModeAtPoint:(id)arg1 animation:(_Bool)arg2;
- (void)handleShowModeToOverview;
- (void)handleShowModeToLockedCarPosition;
- (void)handleShowModeToNormal;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setCustomMapStyle:(id)arg1;
@property(nonatomic) _Bool customMapStyleEnabled;
@property(nonatomic) struct CGPoint scaleOrigin;
@property(nonatomic) _Bool showScale;
@property(nonatomic) double mapZoomLevel;
- (void)ios7NoShowUIElements;
- (void)ios7Landscape;
- (void)ios7Portrait;
- (void)ios7CrossImage;
- (void)orientaionChanged;
- (void)initInIOS7;
- (void)initProperties;
- (void)configureTheConstraint;
- (void)setUp;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

