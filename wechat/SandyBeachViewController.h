//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CanvasManagerDelegate-Protocol.h"
#import "IBottleMgrExt-Protocol.h"
#import "IBottleSessionExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class BottleAnimation, BottleButton, BottleTipView, FishBottleLogicView, MMScrollView, NSString, ThrowBottleLogicView, UIImageView, UIView;

@interface SandyBeachViewController : MMUIViewController <CanvasManagerDelegate, scrollViewDelegate, IBottleSessionExt, IBottleMgrExt, MMTipsViewControllerDelegate>
{
    _Bool mIsFirstAppear;
    unsigned int mTimeOfDayType;
    _Bool mIsTouchEnabeld;
    unsigned int mThrowCount;
    unsigned int mFishCount;
    unsigned int mNewBottleCount;
    _Bool mIsSandyAnimation;
    _Bool mIsShouldDoSandyAnimation;
    MMScrollView *mScrollView;
    UIImageView *mBGImageView;
    UIImageView *mMaskImageView;
    UIImageView *mSpotLightView;
    BottleTipView *mBottleTipView;
    BottleAnimation *mBottleAnimation;
    UIView *mBeachFlatView;
    BottleButton *mThrowBtnView;
    BottleButton *mFishBtnView;
    BottleButton *mBottleBtnView;
    ThrowBottleLogicView *mThrowLogicView;
    FishBottleLogicView *mFishLogicView;
}

@property(retain, nonatomic) FishBottleLogicView *mFishLogicView; // @synthesize mFishLogicView;
@property(retain, nonatomic) ThrowBottleLogicView *mThrowLogicView; // @synthesize mThrowLogicView;
@property(retain, nonatomic) BottleButton *mBottleBtnView; // @synthesize mBottleBtnView;
@property(retain, nonatomic) BottleButton *mFishBtnView; // @synthesize mFishBtnView;
@property(retain, nonatomic) BottleButton *mThrowBtnView; // @synthesize mThrowBtnView;
@property(retain, nonatomic) UIView *mBeachFlatView; // @synthesize mBeachFlatView;
@property(retain, nonatomic) BottleAnimation *mBottleAnimation; // @synthesize mBottleAnimation;
@property(retain, nonatomic) BottleTipView *mBottleTipView; // @synthesize mBottleTipView;
@property(retain, nonatomic) UIImageView *mSpotLightView; // @synthesize mSpotLightView;
@property(retain, nonatomic) UIImageView *mMaskImageView; // @synthesize mMaskImageView;
@property(retain, nonatomic) UIImageView *mBGImageView; // @synthesize mBGImageView;
@property(retain, nonatomic) MMScrollView *mScrollView; // @synthesize mScrollView;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)willShow;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)toggleSetting:(id)arg1;
- (void)toggleBottle;
- (void)toggleFish;
- (void)toggleThrow;
- (void)showGuideToNearbyTipView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)undoSandyAnimation:(_Bool)arg1;
- (void)doSandyAnimation;
- (void)showWarningTipViewNoConfirm:(id)arg1;
- (void)showWarningTipView:(id)arg1;
- (void)updateBottleCountLabel;
- (void)updateFishCountLabel;
- (void)updateThrowCountLabel;
- (void)removeViewSlipToLeft:(_Bool)arg1;
- (void)addViewSlipToLeft:(_Bool)arg1;
- (void)hideTopBar;
- (void)initButtonView;
- (id)cropImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (void)viewDidTransitionToNewSize;
- (void)initBgView;
- (void)initData;
- (id)NavigationController;
- (void)enableTouch;
- (void)disableTouch;
- (void)unSpotLightCanvasAnimated:(_Bool)arg1;
- (void)spotLightCanvasAnimated:(_Bool)arg1;
- (void)unDarkenCanvasAnimated:(_Bool)arg1;
- (void)darkenCanvasAnimated:(_Bool)arg1;
- (unsigned int)canvasHeightForDraw;
- (void)showCanvasTopBarAnimated:(_Bool)arg1;
- (void)showCanvasBottomBarAnimated:(_Bool)arg1;
- (void)hideCanvasBottomBarAnimated:(_Bool)arg1;
- (void)hideCanvasTopBarAnimated:(_Bool)arg1;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)BottleTotalUnreadCountChanged;
- (void)OnEndLoadBottleContact;
- (void)OnBeginLoadBottleContact;
- (void)StartShowSyncAllContactLoadingView;
- (void)OnFishNumChanged:(unsigned int)arg1;
- (void)OnThrowNumChanged:(unsigned int)arg1;
- (void)OnBottleBan:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;
- (void)OnGetCountFail;
- (void)OnGetCountOK:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

