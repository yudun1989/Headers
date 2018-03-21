//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MMMapContextDelegate-Protocol.h"

@class MBKLBSManager, MBKMoCarBookingCarModel, MBKMoCarFindRebackCarPlaceButton, MBKMoCarOrderViewController, MBKMoCarUnlockCardView, MBKMoCarUnlockTopTimerView, MBKMocarAnnotationView, MBKOnMyLocationButton, MBKTimer, MMMapContext, MMWalkingRouteRequest, NSArray, NSString;

@interface MBKMoCarUnlockCarViewController : MBKBaseViewController <MMMapContextDelegate>
{
    MBKMoCarBookingCarModel *_dataModel;
    MMMapContext *_mapContext;
    MBKMoCarOrderViewController *_orderVc;
    CDUnknownBlockType _unlockCarSuccess;
    MBKLBSManager *_lbsManager;
    MBKMoCarUnlockCardView *_cardView;
    MBKMoCarUnlockTopTimerView *_topTimterView;
    MBKMoCarFindRebackCarPlaceButton *_findRebackPlaceBtn;
    NSArray *_overlays;
    MBKTimer *_timer;
    MBKOnMyLocationButton *_serviceBtn;
    MBKOnMyLocationButton *_locationBtn;
    MBKMocarAnnotationView *_carpositionView;
    MMWalkingRouteRequest *_walkingRouteRequest;
}

+ (void)load;
@property(nonatomic) __weak MMWalkingRouteRequest *walkingRouteRequest; // @synthesize walkingRouteRequest=_walkingRouteRequest;
@property(retain, nonatomic) MBKMocarAnnotationView *carpositionView; // @synthesize carpositionView=_carpositionView;
@property(retain, nonatomic) MBKOnMyLocationButton *locationBtn; // @synthesize locationBtn=_locationBtn;
@property(retain, nonatomic) MBKOnMyLocationButton *serviceBtn; // @synthesize serviceBtn=_serviceBtn;
@property(retain, nonatomic) MBKTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(retain, nonatomic) MBKMoCarFindRebackCarPlaceButton *findRebackPlaceBtn; // @synthesize findRebackPlaceBtn=_findRebackPlaceBtn;
@property(retain, nonatomic) MBKMoCarUnlockTopTimerView *topTimterView; // @synthesize topTimterView=_topTimterView;
@property(retain, nonatomic) MBKMoCarUnlockCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) MBKLBSManager *lbsManager; // @synthesize lbsManager=_lbsManager;
@property(copy, nonatomic) CDUnknownBlockType unlockCarSuccess; // @synthesize unlockCarSuccess=_unlockCarSuccess;
@property(nonatomic) __weak MBKMoCarOrderViewController *orderVc; // @synthesize orderVc=_orderVc;
@property(nonatomic) __weak MMMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(retain, nonatomic) MBKMoCarBookingCarModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)mapViewAnnotationsAndFitOverLayers;
- (void)unlockCarRequest;
- (void)watchParkLot;
- (id)mapContext:(id)arg1 renderForOverlay:(id)arg2;
- (void)mapContext:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapContext:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setupSubViews;
- (void)addNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)cancelTimer;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

