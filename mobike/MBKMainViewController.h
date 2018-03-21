//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "JTSImageViewControllerOptionsDelegate-Protocol.h"
#import "MBKDataProviderDelegate-Protocol.h"
#import "MBKHelpActionSheetDelegate-Protocol.h"
#import "MBKMainToScanQRTransitionAnimationProtocol-Protocol.h"
#import "MBKManhattanViewControllerDelegate-Protocol.h"
#import "MBKRidingMapViewDelegate-Protocol.h"
#import "MBKRidingStatusProtocol-Protocol.h"
#import "MMMapContextDelegate-Protocol.h"
#import "NetworkStatusDelegate-Protocol.h"
#import "PointHelpDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "activitionCardDelegate-Protocol.h"
#import "closeHelpDelegate-Protocol.h"
#import "mbkTakeNotificationDelegate-Protocol.h"
#import "shareSelectDelegate-Protocol.h"

@class ALAlertBanner, AssistPointAnnotation, CLLocation, CardBackGroundView, CustomBMKPointAnnotation, CustomPointView, CustomPolygon, JTSImageViewController, MBKAdoptionStatusManager, MBKAnnotationCache, MBKCardConfigManager, MBKGeoFencingAnnotation, MBKGeoFencingBanner, MBKHelpActionSheet, MBKMPLPointAnnotation, MBKManhattanViewController, MBKMapAnnotaionsHelper, MBKParentView, MBKPaymentBannerConfig, MBKResponse, MBKRidingMapViewController, MBKRidingStatusSubscriber, MBKUserPaymentBonus, MMAnnotationView, MMMapContext, MMPointAnnotation, MMPolyline, NSDictionary, NSString, PersonalCenterViewController, ReserveAnnotation, ReservePointView, UIAlertView, UIImage, UITapGestureRecognizer, UIView, activitionCard, takeScreenShotShare;

@interface MBKMainViewController : Mobike_ViewController <MMMapContextDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, NetworkStatusDelegate, UIActionSheetDelegate, closeHelpDelegate, activitionCardDelegate, PointHelpDelegate, JTSImageViewControllerOptionsDelegate, MBKHelpActionSheetDelegate, mbkTakeNotificationDelegate, shareSelectDelegate, MBKDataProviderDelegate, MBKRidingStatusProtocol, MBKManhattanViewControllerDelegate, MBKRidingMapViewDelegate, MBKMainToScanQRTransitionAnimationProtocol>
{
    MBKGeoFencingBanner *banner;
    NSDictionary *verCodeParam;
    MBKParentView *mainView;
    NSString *uCityName;
    NSString *uCityCode;
    NSString *userCityName;
    NSString *userCityCode;
    NSString *userAdCode;
    double mapViewCenterY;
    MMAnnotationView *currentShortDisAnnotation;
    ReserveAnnotation *reserveAnnotation;
    UIAlertView *popReserveAlert;
    _Bool haveActivate;
    _Bool reverseGocodeOnce;
    activitionCard *card;
    ALAlertBanner *frzeenAlertBanner;
    _Bool isDragMapSign;
    _Bool isGetConfig;
    JTSImageViewController *imageViewer;
    _Bool isPraiseSign;
    AssistPointAnnotation *assistAnnotation;
    takeScreenShotShare *share;
    UIImage *screenShotImage;
    MBKHelpActionSheet *actionsheet;
    CDStruct_b7cb895d originRegion;
    _Bool isTapMyLocat;
    double lastZoomLevel;
    MBKMPLPointAnnotation *nearstMpl;
    CustomBMKPointAnnotation *nearstAnnotation;
    MBKUserPaymentBonus *_paymentBonusConfig;
    id orderInfo;
    struct CLLocationCoordinate2D poiBase;
    struct CLLocationCoordinate2D poiFurthest;
    double poiDistanceMax;
    _Bool requsetingWechatPay;
    _Bool needShowPayAlert;
    NSString *wechaFreePayType;
    NSString *weChatFreeStatus;
    unsigned long long requestNearbyStep;
    MBKRidingStatusSubscriber *_subscriber;
    _Bool inBackground;
    MBKGeoFencingAnnotation *inSpock;
    _Bool _isUserClicked;
    CDStruct_34734122 _lastMapCenterPoint;
    _Bool _hasShownOpCard;
    _Bool _currentIsChina;
    _Bool _isShowingLogin;
    _Bool _isPulledAdConfig;
    _Bool _isGoingToBackupBike;
    CustomPointView *currentPointView;
    PersonalCenterViewController *_PersonalCenterViewControllerr;
    MMPointAnnotation *_lastInCircleAnnotation;
    MMMapContext *_mapBase;
    UIView *_mapView;
    MBKMapAnnotaionsHelper *_mapAnnotationsHelper;
    MMAnnotationView *_selectAnnotationView;
    MMPolyline *_routePolyline;
    MMPolyline *_comPoyline;
    MMPolyline *_endPolyline;
    UITapGestureRecognizer *_singleTap;
    ReservePointView *_reserveDefaultView;
    CardBackGroundView *_cards;
    double _routeDistance;
    double _routeDuration;
    MBKAdoptionStatusManager *_adoptionStatusManager;
    MBKCardConfigManager *_cardConfigManager;
    CustomPolygon *_spockOperationalOverlay;
    CustomBMKPointAnnotation *_backupAnnotation;
    long long _nearbyAndStatusTag;
    MBKResponse *_firstNearbyResponse;
    MBKAnnotationCache *_annotationCache;
    CLLocation *_lastUserCoordinate;
    MBKManhattanViewController *_panelVC;
    MBKRidingMapViewController *_mapVC;
}

@property(retain, nonatomic) MBKRidingMapViewController *mapVC; // @synthesize mapVC=_mapVC;
@property(retain, nonatomic) MBKManhattanViewController *panelVC; // @synthesize panelVC=_panelVC;
@property(retain, nonatomic) CLLocation *lastUserCoordinate; // @synthesize lastUserCoordinate=_lastUserCoordinate;
@property(retain, nonatomic) MBKAnnotationCache *annotationCache; // @synthesize annotationCache=_annotationCache;
@property(retain, nonatomic) MBKResponse *firstNearbyResponse; // @synthesize firstNearbyResponse=_firstNearbyResponse;
@property(nonatomic) long long nearbyAndStatusTag; // @synthesize nearbyAndStatusTag=_nearbyAndStatusTag;
@property(nonatomic) _Bool isGoingToBackupBike; // @synthesize isGoingToBackupBike=_isGoingToBackupBike;
@property(retain, nonatomic) CustomBMKPointAnnotation *backupAnnotation; // @synthesize backupAnnotation=_backupAnnotation;
@property(nonatomic) __weak CustomPolygon *spockOperationalOverlay; // @synthesize spockOperationalOverlay=_spockOperationalOverlay;
@property(retain, nonatomic) MBKCardConfigManager *cardConfigManager; // @synthesize cardConfigManager=_cardConfigManager;
@property(retain, nonatomic) MBKAdoptionStatusManager *adoptionStatusManager; // @synthesize adoptionStatusManager=_adoptionStatusManager;
@property(nonatomic) _Bool isPulledAdConfig; // @synthesize isPulledAdConfig=_isPulledAdConfig;
@property(nonatomic) _Bool isShowingLogin; // @synthesize isShowingLogin=_isShowingLogin;
@property(nonatomic) _Bool currentIsChina; // @synthesize currentIsChina=_currentIsChina;
@property(nonatomic) _Bool hasShownOpCard; // @synthesize hasShownOpCard=_hasShownOpCard;
@property(nonatomic) double routeDuration; // @synthesize routeDuration=_routeDuration;
@property(nonatomic) double routeDistance; // @synthesize routeDistance=_routeDistance;
@property(retain) CardBackGroundView *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) ReservePointView *reserveDefaultView; // @synthesize reserveDefaultView=_reserveDefaultView;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) MMPolyline *endPolyline; // @synthesize endPolyline=_endPolyline;
@property(retain, nonatomic) MMPolyline *comPoyline; // @synthesize comPoyline=_comPoyline;
@property(retain, nonatomic) MMPolyline *routePolyline; // @synthesize routePolyline=_routePolyline;
@property(retain, nonatomic) MMAnnotationView *selectAnnotationView; // @synthesize selectAnnotationView=_selectAnnotationView;
@property(retain, nonatomic) MBKMapAnnotaionsHelper *mapAnnotationsHelper; // @synthesize mapAnnotationsHelper=_mapAnnotationsHelper;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) MMMapContext *mapBase; // @synthesize mapBase=_mapBase;
@property(retain, nonatomic) MMPointAnnotation *lastInCircleAnnotation; // @synthesize lastInCircleAnnotation=_lastInCircleAnnotation;
@property(retain, nonatomic) PersonalCenterViewController *PersonalCenterViewControllerr; // @synthesize PersonalCenterViewControllerr=_PersonalCenterViewControllerr;
@property(copy, nonatomic) CustomPointView *currentPointView; // @synthesize currentPointView;
- (void).cxx_destruct;
- (void)showTipsWhenOperationAreaAppear;
- (_Bool)shouldHideNavigationBarShadow;
- (id)snapshotOfUnlockButtonView;
- (void)removeAnnotationsOfTypes:(id)arg1 exceptBikeAnnotation:(struct MMPointAnnotation *)arg2 animated:(_Bool)arg3;
- (void)requestFailured:(id)arg1 error:(id)arg2;
- (void)requestSuccessed:(id)arg1;
- (void)goToFeedBackView;
- (_Bool)isRidingAppraiseVCInNaviStack;
- (void)showOperationCardWith:(id)arg1;
- (void)popOperationCard;
- (void)requestConfigsScheduFailed:(id)arg1;
- (void)requestConfigsSucc:(id)arg1;
- (void)getConfigsFromServer;
- (void)detailButtonClicked:(id)arg1 title:(id)arg2;
- (void)swicthNaviMode:(_Bool)arg1;
- (void)praiseDisdainProxy:(id)arg1;
- (void)pointHelpInfoAction:(id)arg1;
- (void)cancelReservationOperate;
- (void)networkStatusChanged:(long long)arg1;
- (void)makeOrderBike;
- (void)ridingStatusNone;
- (void)currentPager;
- (void)lockAbnormalProxy;
- (void)showUnlockNotice;
- (_Bool)showRidingAppraiseViewController:(id)arg1;
- (id)getOrderinfoUrlStirng:(id)arg1 resultValue:(id)arg2;
- (void)goToRidingAppraiseWebView:(id)arg1;
- (void)getAppraiseInfo;
- (void)showUnlockOBCard;
- (void)lockDidUnlocked;
- (void)requestPointHelpUsefulFailed:(id)arg1;
- (void)requestPointHelpUsefulSucc:(id)arg1;
- (void)requestPointhelpFailed:(id)arg1;
- (void)requestPointhelpSucc:(id)arg1;
- (void)unlockBicycleFailed:(id)arg1;
- (void)requestSingingFailed:(id)arg1;
- (void)requestSingingSucc:(id)arg1;
- (void)onGetPointFailed:(id)arg1;
- (void)mapViewFitWith:(id)arg1 center:(struct CLLocationCoordinate2D)arg2;
- (void)refreshGeoFencingAnnotaionsOnMap:(id)arg1;
- (void)refreshRedPacketStopAreasOnMap:(id)arg1;
- (void)clearSpockOperationalOverlay;
- (void)zoomToShowWholeSpockOperatingArea;
- (_Bool)isCurrentLocationInSpockOperatingArea;
- (id)parseMplWith:(id)arg1 parkingMode:(_Bool)arg2;
- (void)zoomToShowNearAnnotaionsOfTypes:(id)arg1 maxCount:(long long)arg2 hasMinimumZoomLevel:(_Bool)arg3;
- (void)zoomToShowNearRedPacketStopsAnimated;
- (void)mapViewFitAnnotations:(id)arg1 base:(struct CLLocationCoordinate2D)arg2;
- (struct UIEdgeInsets)insetsForMap;
- (void)mbkRidingMapViewController:(id)arg1 withinAnnotationDidUpdateToAnnotation:(struct MMPointAnnotation *)arg2;
- (void)mbkRidingMapViewController:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mbkRidingMapViewController:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 distance:(double)arg3 byGesture:(_Bool)arg4;
- (void)mbkRidingMapViewController:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)popGeoFencingWarning;
- (void)mbkRidingMapViewController:(id)arg1 didSelectAnnotationView:(id)arg2 fromCalloutView:(_Bool)arg3;
- (void)mbkRidingMapViewController:(id)arg1 didUpdateUserLocation:(id)arg2;
- (struct CGRect)mbkRidingMapViewControllerDisplayInsetsEdges:(id)arg1;
- (void)mbkRidingMapViewControllerAppearanceRestore:(id)arg1;
- (void)showFirstBikeTypeWith:(int)arg1;
- (void)currentScrollPage:(long long)arg1;
- (void)presentScanQRCodeViewController;
- (void)autonymProgressMethod;
- (void)mbkRidingStatusManager:(id)arg1 AccountFinishedWithInfo:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManager:(id)arg1 UnlockProcedureTringWithModel:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManager:(id)arg1 EnterBookingStatusWithModel:(id)arg2;
- (void)mbkRidingStatusManager:(id)arg1 RidingStatusUpdatedWithModel:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManagerExitRidingStatus:(id)arg1;
- (void)mbkRidingStatusManager:(id)arg1 EnterRidingStatusWithModel:(id)arg2;
- (void)mbkRidingStatusManager:(id)arg1 UpdateUnlockingStatusWithModel:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManagerExitUnlockingStatus:(id)arg1;
- (void)mbkRidingStatusManager:(id)arg1 UnlockProcedurefinishedWithModel:(id)arg2 error:(id)arg3;
- (void)mbkRidingStatusManager:(id)arg1 EnterUnlockingStatusWithModel:(id)arg2;
- (void)mbkRidingStatusManagerEnterNoneStatus:(id)arg1;
- (void)displaySpockStateWith:(id)arg1 spockInfo:(id)arg2;
- (void)uploadLockStaus:(id)arg1;
- (void)presentGiftBox:(id)arg1;
- (void)unlockBikeOperationWithObject:(id)arg1 coolDwonWarnCode:(id)arg2;
- (void)unlockAnnimationWithResponse:(id)arg1;
- (void)requestAndShowPOIAndAutoZoomWithIsRedPacketBike:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAndShowPOIAndAutoZoomWithIsRedPacketBike:(_Bool)arg1;
- (void)addReserveAnnotation:(id)arg1;
- (void)clearNaviRouteAndReserveAnnotation;
- (void)clearGeoFencing;
- (void)clearAllAnnotations;
- (void)clearAllMapElement;
- (void)clearAllMapOverlay;
- (id)getCustomLocationCityCode;
- (struct CLLocationCoordinate2D)getCustomLocationCoordinate;
- (void)reportProblemAction:(id)arg1;
- (void)startUseBike;
- (void)jumptoMemeberRightsWebView;
- (void)requestGeoFencingOfTypes:(id)arg1 coord:(struct CLLocationCoordinate2D)arg2;
- (void)popGoComment;
- (void)presentPenaltyWebViewController;
- (void)showLoginViewControllerIfNeeded;
- (void)presentAuthenticationViewController;
- (void)presentMemberSelectViewController;
- (void)presentLoginViewController;
- (void)presentLoginViewControllerAnimated:(_Bool)arg1;
- (void)pushSearchViewAction:(id)arg1;
- (void)goWeChatPay:(id)arg1;
- (void)showPayFinishedAlert:(id)arg1;
- (void)requesSettlement;
- (void)showGoToPayAlert;
- (void)onRightBarButtonSearchAction:(id)arg1;
- (void)onBannerAction:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showUpdataVersionInfo:(id)arg1;
- (void)requestUserReviewFailed:(id)arg1;
- (void)reqeustUserReviewSucc:(id)arg1;
- (void)showPaySuccAlert:(id)arg1;
- (void)showEducationCardIfNeed;
- (void)getRidingAgreementInfo;
- (void)handleNotification:(id)arg1;
- (void)appWillTeminate:(id)arg1;
- (void)appToForeGround:(id)arg1;
- (void)appToBackGround:(id)arg1;
- (_Bool)checkLocationService;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)loadTakeScreenWithImage:(id)arg1;
- (void)takeScreenShot:(id)arg1;
- (void)shareClicked;
- (void)checkToShowBanner;
- (void)queryNoauthContract;
- (void)getAcountInfo:(_Bool)arg1;
- (id)shareDataForImage;
- (void)shareImageAndTextToPlatformType:(long long)arg1;
- (void)shareWithSelectType:(long long)arg1;
- (void)setupController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeHelpEvent:(id)arg1;
- (void)logButtonClicked;
- (void)displayCardsWithType:(id)arg1;
- (void)manhattanViewControllerDidTapSpockLockButton:(id)arg1 isButtonValid:(_Bool)arg2;
- (void)manhattanViewControllerDidTapFeedbackButton:(id)arg1;
- (void)manhattanViewControllerDidTapLocateButton:(id)arg1 tapCount:(long long)arg2;
- (void)manhattanViewControllerDidTapUnlockButton:(id)arg1;
- (void)mbkBikePanelDidTapCancelBookingButton:(id)arg1;
- (void)mbkBikePanelDidTapBookingButton:(id)arg1;
- (void)showGoToRechargeActionSheet;
- (void)mbkHelpActionSheetSeviceDidSelect:(long long)arg1 actionSheet:(id)arg2;
- (void)mbkHelpA3ctionSheetSeviceDidSelect:(long long)arg1 actionSheet:(id)arg2;
- (_Bool)userAuthorizedLocation;
- (void)showTopWarningBarIfNeeded;
- (void)setupRidingSubscriber;
- (struct CGRect)mainViewFrame;
- (void)setupView;
- (void)loadUserProtocol;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)managerDidRecvLaunchFromWXReq:(id)arg1;
- (void)onTapAdImageView:(id)arg1;
- (void)deleteOldAdConfig;
- (void)downloadAdImage:(id)arg1;
- (void)checkToPullNewAdConfig;
- (_Bool)_neverBindCreditCard;
- (_Bool)_unpaidDepositAbroad;
- (_Bool)_neverPayDepositAbroad;
- (_Bool)_unconfirmBithday;
- (_Bool)_unpaidTryMobikers;
- (_Bool)_unselectCountry;
@property(retain, nonatomic) MBKPaymentBannerConfig *paymentBannerConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

