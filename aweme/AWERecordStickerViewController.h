//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEStickerPicker-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEBonusView, NSArray, NSIndexPath, NSMutableArray, NSString, UICollectionView, UILabel, UIView;
@protocol AWEStickerPickerDelegate;

@interface AWERecordStickerViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, AWEStickerPicker>
{
    _Bool _isUsedOnLive;
    CDUnknownBlockType _dissmissBlock;
    id <AWEStickerPickerDelegate> _delegate;
    UICollectionView *_stickerCollectionView;
    UIView *_stickerContainerView;
    NSMutableArray *_stickerItems;
    UILabel *_stickerTipLabel;
    NSIndexPath *_seletedIndexPath;
    UIView *_slideControlView;
    UIView *_slideIndicatorView;
    AWEBonusView *_userBonusView;
    NSString *_blessWords;
    NSArray *_placeholds;
    NSString *_redPacketTips;
    NSIndexPath *_lastClickedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *lastClickedIndexPath; // @synthesize lastClickedIndexPath=_lastClickedIndexPath;
@property(copy, nonatomic) NSString *redPacketTips; // @synthesize redPacketTips=_redPacketTips;
@property(copy, nonatomic) NSArray *placeholds; // @synthesize placeholds=_placeholds;
@property(copy, nonatomic) NSString *blessWords; // @synthesize blessWords=_blessWords;
@property(retain, nonatomic) AWEBonusView *userBonusView; // @synthesize userBonusView=_userBonusView;
@property(retain, nonatomic) UIView *slideIndicatorView; // @synthesize slideIndicatorView=_slideIndicatorView;
@property(retain, nonatomic) UIView *slideControlView; // @synthesize slideControlView=_slideControlView;
@property(retain, nonatomic) NSIndexPath *seletedIndexPath; // @synthesize seletedIndexPath=_seletedIndexPath;
@property(retain, nonatomic) UILabel *stickerTipLabel; // @synthesize stickerTipLabel=_stickerTipLabel;
@property(retain, nonatomic) NSMutableArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property(retain, nonatomic) UIView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(retain, nonatomic) UICollectionView *stickerCollectionView; // @synthesize stickerCollectionView=_stickerCollectionView;
@property(nonatomic) _Bool isUsedOnLive; // @synthesize isUsedOnLive=_isUsedOnLive;
@property(nonatomic) __weak id <AWEStickerPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType dissmissBlock; // @synthesize dissmissBlock=_dissmissBlock;
- (void).cxx_destruct;
- (void)p_moveToOffset:(struct CGPoint)arg1;
- (void)p_showOnView:(id)arg1 fromOffset:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)p_dismissWithAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)p_dismiss;
- (void)p_showOnViewController:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)showOnViewController:(id)arg1;
- (void)updateWithStickerArray:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_onPlaceHolderStickerBtnPress:(id)arg1 atIndexPath:(id)arg2;
- (void)downloadStickerResourceForCell:(id)arg1 indexPath:(id)arg2;
- (void)p_onStickerCellClick:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateStickerContainerViewFrame:(id)arg1;
- (void)stickerTipLabelDismiss;
- (void)stickerTipLabelAppear;
- (void)p_onClearBackgroundPress:(id)arg1;
- (id)_maskLayerWithRect:(struct CGRect)arg1;
- (id)rotationAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)receiveRedPacketViewAnimation;
- (void)dismissBonusView;
- (void)showBonusView;
- (void)sendBlessWords;
- (void)configureUserBonusView;
- (void)p_setupSubviews;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStickerItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

