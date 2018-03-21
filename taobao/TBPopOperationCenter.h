//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TBPopOperationStrategyManager;
@protocol OS_dispatch_queue, TBPopOperationProvider;

@interface TBPopOperationCenter : NSObject
{
    _Bool _isShowingPopOperation;
    _Bool _hasShowPopOperationStarted;
    _Bool _firstShowPopOperChecked;
    _Bool _isWaitingFirstShowPopOper;
    id <TBPopOperationProvider> _popOperProvider;
    TBPopOperationStrategyManager *_strategryManager;
    NSMutableArray *_isTryingToShowPopOperationList;
    NSMutableArray *_popOperPendingList;
    NSMutableArray *_popOperShownNotFinishList;
    NSObject<OS_dispatch_queue> *_popOperCtrlQueue;
    NSObject<OS_dispatch_queue> *_strategyHandleQueue;
    long long _popOperShowingToleranceTime;
    NSString *_waitingFirstShowPopOperIdentifier;
}

+ (id)defaultCenter;
@property(retain) NSString *waitingFirstShowPopOperIdentifier; // @synthesize waitingFirstShowPopOperIdentifier=_waitingFirstShowPopOperIdentifier;
@property _Bool isWaitingFirstShowPopOper; // @synthesize isWaitingFirstShowPopOper=_isWaitingFirstShowPopOper;
@property(nonatomic) _Bool firstShowPopOperChecked; // @synthesize firstShowPopOperChecked=_firstShowPopOperChecked;
@property(nonatomic) long long popOperShowingToleranceTime; // @synthesize popOperShowingToleranceTime=_popOperShowingToleranceTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *strategyHandleQueue; // @synthesize strategyHandleQueue=_strategyHandleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *popOperCtrlQueue; // @synthesize popOperCtrlQueue=_popOperCtrlQueue;
@property(retain, nonatomic) NSMutableArray *popOperShownNotFinishList; // @synthesize popOperShownNotFinishList=_popOperShownNotFinishList;
@property(retain, nonatomic) NSMutableArray *popOperPendingList; // @synthesize popOperPendingList=_popOperPendingList;
@property(retain, nonatomic) NSMutableArray *isTryingToShowPopOperationList; // @synthesize isTryingToShowPopOperationList=_isTryingToShowPopOperationList;
@property(retain, nonatomic) TBPopOperationStrategyManager *strategryManager; // @synthesize strategryManager=_strategryManager;
@property(retain, nonatomic) id <TBPopOperationProvider> popOperProvider; // @synthesize popOperProvider=_popOperProvider;
@property _Bool hasShowPopOperationStarted; // @synthesize hasShowPopOperationStarted=_hasShowPopOperationStarted;
@property(readonly) _Bool isShowingPopOperation; // @synthesize isShowingPopOperation=_isShowingPopOperation;
- (void).cxx_destruct;
- (void)loadProvider;
- (void)dispatch_sync_safe_on_ctrl_queue:(CDUnknownBlockType)arg1;
- (_Bool)isPopOperUnderControl:(id)arg1 onPage:(id)arg2;
- (_Bool)hasIdentifierInPendingList:(id)arg1;
- (_Bool)targetPageHasStrategies:(id)arg1;
- (_Bool)popOperTargetAllPages:(id)arg1;
- (_Bool)allTargetPagesHasStrategies:(id)arg1;
- (_Bool)popOper:(id)arg1 targetPagesContainsCurrentPage:(id)arg2;
- (id)popOperPendingListForCurrentPage:(id)arg1;
- (_Bool)hasPastPopOperShowingToleranceTime:(id)arg1;
- (_Bool)isPopOperShownNotFinishListEmptyForCurrentPage:(id)arg1;
- (_Bool)isPopOperPendingListEmptyForCurrentPage:(id)arg1;
- (void)applyDefaultBehaviorForNonConfigStrategyPage:(id)arg1;
- (void)applyDefaultBehaviorForConfigStrategyPage:(id)arg1;
- (void)doPickUpOnePopOperationIfAnyForCurrentPage:(id)arg1;
- (void)pickUpOnePopOperationIfAnyForCurrentPage:(id)arg1;
- (void)doShowPopOperation:(id)arg1 withCtrl:(_Bool)arg2;
- (void)dequeuePopOperationSafely:(id)arg1;
- (void)enqueuePopOperationSafely:(id)arg1;
- (void)bootImageDidFinish:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)viewControllerWillChange:(id)arg1;
- (void)stat:(id)arg1;
- (void)finishShowingPopOperation:(id)arg1;
- (void)handlePopOper:(id)arg1 byCurrentPage:(id)arg2;
- (void)tryShowPopOperation:(id)arg1;
- (void)startShowingPopOperation;

@end

