//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBTradeLinkageProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "VLViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TBBuyQueryKey, TBQueueSDK, TBTradeBuyEngine, UIButton, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, UIViewController, VLView;
@protocol TBBuyAliPayProtocol, TBBuyMiscInfoProtocol, TBBuyNavigationProtocol, TBBuyTableViewAdapterProtocol, TBBuyTrackProtocol, TBBuyViewInterceptProtocol, TBExtBuyImageProtocol;

@interface TBBuyViewBuilder : NSObject <TBTradeLinkageProtocol, VLViewDelegate, UIAlertViewDelegate, UIScrollViewDelegate>
{
    _Bool _isSoldoutError;
    _Bool _isFamilyEnvironment;
    NSDictionary *_queueOrderTrackParam;
    NSString *_pageUrl;
    long long _responseStatusCode;
    NSString *_currentBizCode;
    UIViewController *_viewController;
    NSMutableDictionary *_queryParams;
    UIView *_bottomBar;
    UITableView *_tableView;
    UIView *_maskView;
    UIView *_floatTipsView;
    UIView *_floatTipsAddressView;
    UITapGestureRecognizer *_tapTableViewRecognizer;
    NSArray *_eventHandlers;
    UIView *_familyTipsView;
    UIImageView *_familyTipsIconView;
    UILabel *_familyTipsLabel;
    TBBuyQueryKey *_queryKey;
    TBTradeBuyEngine *_buyEngine;
    id <TBBuyTableViewAdapterProtocol> _tableViewAdapter;
    id <TBBuyAliPayProtocol> _alipayInvoker;
    id <TBBuyMiscInfoProtocol> _miscInfoProvider;
    id <TBBuyNavigationProtocol> _navigator;
    id <TBBuyViewInterceptProtocol> _viewInterceptor;
    id <TBBuyTrackProtocol> _tracker;
    id <TBExtBuyImageProtocol> _imageLoader;
    UIButton *_cancelBtn;
    TBQueueSDK *_orderQueue;
    VLView *_vlView;
    NSString *_errorCode;
    NSString *_errorMsg;
    double _minOffset;
    NSDictionary *_fljDic;
    struct CGRect _originRect;
    struct CGRect _finalRect;
}

@property(retain, nonatomic) NSDictionary *fljDic; // @synthesize fljDic=_fljDic;
@property(nonatomic) double minOffset; // @synthesize minOffset=_minOffset;
@property(nonatomic) struct CGRect finalRect; // @synthesize finalRect=_finalRect;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isFamilyEnvironment; // @synthesize isFamilyEnvironment=_isFamilyEnvironment;
@property(nonatomic) _Bool isSoldoutError; // @synthesize isSoldoutError=_isSoldoutError;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
@property(retain, nonatomic) TBQueueSDK *orderQueue; // @synthesize orderQueue=_orderQueue;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) id <TBExtBuyImageProtocol> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <TBBuyTrackProtocol> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <TBBuyViewInterceptProtocol> viewInterceptor; // @synthesize viewInterceptor=_viewInterceptor;
@property(retain, nonatomic) id <TBBuyNavigationProtocol> navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) id <TBBuyMiscInfoProtocol> miscInfoProvider; // @synthesize miscInfoProvider=_miscInfoProvider;
@property(retain, nonatomic) id <TBBuyAliPayProtocol> alipayInvoker; // @synthesize alipayInvoker=_alipayInvoker;
@property(retain, nonatomic) id <TBBuyTableViewAdapterProtocol> tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) TBTradeBuyEngine *buyEngine; // @synthesize buyEngine=_buyEngine;
@property(retain, nonatomic) TBBuyQueryKey *queryKey; // @synthesize queryKey=_queryKey;
@property(retain, nonatomic) UILabel *familyTipsLabel; // @synthesize familyTipsLabel=_familyTipsLabel;
@property(retain, nonatomic) UIImageView *familyTipsIconView; // @synthesize familyTipsIconView=_familyTipsIconView;
@property(retain, nonatomic) UIView *familyTipsView; // @synthesize familyTipsView=_familyTipsView;
@property(retain, nonatomic) NSArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) UITapGestureRecognizer *tapTableViewRecognizer; // @synthesize tapTableViewRecognizer=_tapTableViewRecognizer;
@property(retain, nonatomic) UIView *floatTipsAddressView; // @synthesize floatTipsAddressView=_floatTipsAddressView;
@property(retain, nonatomic) UIView *floatTipsView; // @synthesize floatTipsView=_floatTipsView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *currentBizCode; // @synthesize currentBizCode=_currentBizCode;
@property(nonatomic) long long responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSDictionary *queueOrderTrackParam; // @synthesize queueOrderTrackParam=_queueOrderTrackParam;
- (void).cxx_destruct;
- (void)setCreateOrderError:(id)arg1 errorMsg:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLoadVLView:(id)arg1 Error:(id)arg2;
- (void)viewCall:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (id)buildQueueOrderTrackParam:(id)arg1;
- (void)setSoldoutError:(_Bool)arg1;
- (void)cancelQueue;
- (void)floatTipsViewTapped;
- (void)updateQueryParams:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)respondsToLinkage:(id)arg1 withAction:(unsigned long long)arg2;
- (void)removeQueueViewAfterFinish;
- (void)clean;
- (void)handleTapTableView:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)scrollToInvalidCell:(id)arg1;
- (void)confirmButtonClicked;
- (void)confirmButtonClickedWithTag:(id)arg1;
- (void)familySimplePay;
- (void)familyConfirmButtonClicked;
- (void)refreshFloatTipsView:(id)arg1;
- (void)refreshFamilyTipsView:(id)arg1;
- (void)familyUserTrack:(id)arg1;
- (void)refreshView;
- (void)reloadComponents:(id)arg1;
- (void)addNavigationBar;
- (void)loadDefaultImplementations;
- (void)closeFamilyTips:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updatePagePropertie;
- (void)viewDidLoad;
- (void)setupFLJparams;
- (id)initWithParams:(id)arg1 viewController:(id)arg2;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 errorCode:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)didShowErrorCode;
- (id)mappingErrorCode:(id)arg1 responseStatusCode:(long long)arg2;
- (id)messageForDisplayWithErrorCode:(id)arg1 errorMsg:(id)arg2;
- (void)postCreateOrderSuccessNotification;
- (void)handleBindAlipayCase:(id)arg1;
- (void)handleCreateOrderPartSuccessCase:(CDUnknownBlockType)arg1;
- (void)handleLbsManageAddressCase:(id)arg1;
- (void)handleLbsCreateAddressCase:(id)arg1;
- (void)handleNoShipAddressCase:(id)arg1;
- (void)handleCreateOrderFailedCase:(id)arg1 mappingCode:(id)arg2 popController:(_Bool)arg3;
- (void)handleCreateOrderFailedCaseWithErrorCode:(id)arg1 mappingCode:(id)arg2 errorMsg:(id)arg3;
- (void)handleAdjustOrderFailedCase:(id)arg1 mappingCode:(id)arg2;
- (void)handleAdjustOrderFailedCaseWithErrorCode:(id)arg1 mappingCode:(id)arg2 errorMsg:(id)arg3;
- (void)handleBuildOrderFailedCase:(id)arg1 mappingCode:(id)arg2;
- (void)handleBuildOrderFailedCaseWithErrorCode:(id)arg1 mappingCode:(id)arg2 errorMsg:(id)arg3;
- (_Bool)isQueueGrayUser;
- (void)addInQueueView;
- (void)queryCreateOrderData;
- (void)queryCreateOrderDataWithQueue;
- (void)queryCreateOrderDataNormal;
- (void)queryAdjustOrderDataWithModel:(id)arg1;
- (void)queryBuildOrderData;
- (void)manageLBSAddress;
- (void)createLBSAddress;
- (id)queryPoiId;
- (id)queryLatitude;
- (id)queryLongitude;
- (void)updateQueryWith:(id)arg1 longitude:(id)arg2 latitude:(id)arg3;
- (id)exParams;
- (void)stopCommitLoading;
- (void)startCommitLoading;
- (void)handleLongTapTableView:(id)arg1;
- (void)openDebugModel;
- (void)setOverlayView:(id)arg1;
- (id)overlayView;
- (void)setLoadingView:(id)arg1;
- (id)loadingView;
- (struct CGRect)frameForOverlayView;
- (struct CGRect)frameForLoadingView;
- (void)cancelSubmittingView;
- (void)cancelLoadingView;
- (void)showSubmittingView;
- (void)showLoadingViewWithCheckingData;
- (void)showLoadingView;
- (id)listOfEventHandlers;
- (void)removeEventHandler;
- (void)registerEventHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

