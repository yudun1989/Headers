//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "FRPhotoBrowserCellDelegate-Protocol.h"
#import "TTPreviewPanBackDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, TTImagePreviewAnimateManager, UIButton, UICollectionView, UILabel, UIPanGestureRecognizer, UIView;

@interface FRPhotoBrowserViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FRPhotoBrowserCellDelegate, CAAnimationDelegate, TTPreviewPanBackDelegate, UIGestureRecognizerDelegate>
{
    _Bool _reachDismissCondition;
    _Bool _reachDragCondition;
    _Bool _isFirstLayout;
    _Bool _hasShowStartIndex;
    _Bool _statusBarHidden;
    _Bool _inList;
    CDUnknownBlockType _indexUpdatedBlock;
    CDUnknownBlockType _willDismissBlock;
    NSArray *_models;
    unsigned long long _startIndex;
    UIView *_maskView;
    UICollectionView *_photoBrowserCollectionView;
    UIView *_bottomToolBar;
    UIView *_photoIndexIndicatorLabelContainerView;
    UILabel *_photoIndexIndicatorLabel;
    UIButton *_savePhotoButton;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _direction;
    unsigned long long _pageIndex;
    UIView *_targetView;
    UIView *_finishBackView;
    TTImagePreviewAnimateManager *_animateManager;
}

+ (_Bool)photoBrowserAtTop;
@property(nonatomic) _Bool inList; // @synthesize inList=_inList;
@property(retain, nonatomic) TTImagePreviewAnimateManager *animateManager; // @synthesize animateManager=_animateManager;
@property(nonatomic) __weak UIView *finishBackView; // @synthesize finishBackView=_finishBackView;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool hasShowStartIndex; // @synthesize hasShowStartIndex=_hasShowStartIndex;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(nonatomic) _Bool reachDragCondition; // @synthesize reachDragCondition=_reachDragCondition;
@property(nonatomic) _Bool reachDismissCondition; // @synthesize reachDismissCondition=_reachDismissCondition;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIButton *savePhotoButton; // @synthesize savePhotoButton=_savePhotoButton;
@property(retain, nonatomic) UILabel *photoIndexIndicatorLabel; // @synthesize photoIndexIndicatorLabel=_photoIndexIndicatorLabel;
@property(retain, nonatomic) UIView *photoIndexIndicatorLabelContainerView; // @synthesize photoIndexIndicatorLabelContainerView=_photoIndexIndicatorLabelContainerView;
@property(retain, nonatomic) UIView *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
@property(retain, nonatomic) UICollectionView *photoBrowserCollectionView; // @synthesize photoBrowserCollectionView=_photoBrowserCollectionView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) NSArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType indexUpdatedBlock; // @synthesize indexUpdatedBlock=_indexUpdatedBlock;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)ttPreviewPanGestureRecognizerShouldBegin:(id)arg1;
- (id)ttPreviewPanBackViewForSwitch;
- (void)ttPreviewPanBackCancelAnimationCompletion;
- (void)ttPreviewPanBackFinishAnimationCompletion;
- (id)ttPreviewPanBackGetFinishBackgroundView;
- (void)ttPreviewPanBackStateChange:(unsigned long long)arg1 scale:(float)arg2;
- (struct CGRect)ttPreviewPanBackTargetViewFrame;
- (id)ttPreviewPanBackImageForSwitch;
- (id)ttPreviewPanBackGetBackMaskView;
- (id)ttPreviewPanBackGetOriginView;
- (void)hidePhotoBrowser;
- (void)showPhotoBrowserInViewController:(id)arg1;
- (void)frameTransform;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tapPhotoBrowserCell:(id)arg1;
- (void)hideCompleteWithModel:(id)arg1;
- (void)showCompleteWithModel:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeAnimatedViewToContainerView;
- (void)addAnimatedViewToContainerView:(double)arg1;
- (void)animatePhotoViewWhenGestureEnd;
- (void)refreshPhotoBrowserViewFrame:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)pan:(id)arg1;
- (void)savePhotoToAlbum;
- (void)updatePhotoIndexIndicator;
- (void)createComponents;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)updateOriginFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updatePlaceholderImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithModels:(id)arg1 startIndex:(unsigned long long)arg2 targetView:(id)arg3;
- (id)initWithModels:(id)arg1 startIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

