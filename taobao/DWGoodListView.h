//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DWScrollViewDelegate-Protocol.h"

@class DWContext, DWGoodListCollectionView, NSString, UIImageView, UIPageControl;

@interface DWGoodListView : UIView <DWScrollViewDelegate>
{
    _Bool _isShow;
    _Bool _isRequestSuccess;
    _Bool _hasNoItems;
    _Bool _doingAnimation;
    _Bool _needPageControl;
    DWGoodListCollectionView *_collectionView;
    UIPageControl *_pageControl;
    UIImageView *_upflodArrow;
    long long _imagePathsGroup;
    long long _viewMode;
    DWContext *_context;
    CDUnknownBlockType _complete;
}

@property(nonatomic) _Bool needPageControl; // @synthesize needPageControl=_needPageControl;
@property(nonatomic) _Bool doingAnimation; // @synthesize doingAnimation=_doingAnimation;
@property(nonatomic) _Bool hasNoItems; // @synthesize hasNoItems=_hasNoItems;
@property(nonatomic) _Bool isRequestSuccess; // @synthesize isRequestSuccess=_isRequestSuccess;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(nonatomic) long long imagePathsGroup; // @synthesize imagePathsGroup=_imagePathsGroup;
@property(retain, nonatomic) UIImageView *upflodArrow; // @synthesize upflodArrow=_upflodArrow;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) DWGoodListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)dwscrollViewDidEndDecelerating:(id)arg1;
- (void)showWithAnimate:(_Bool)arg1;
- (void)disAppearWithAnimate;
- (void)setHidden:(_Bool)arg1;
- (void)showToast:(id)arg1;
- (void)showGoodListWithAnimate:(_Bool)arg1;
- (_Bool)deviceUnder6;
- (_Bool)needDegree;
- (void)setUpPageControl;
- (void)loadDataWithAnimate:(_Bool)arg1;
- (void)setUpPortraitFullScreenConstraints;
- (void)setUpFullScreenConstraints;
- (void)setUpNormalConstraints;
- (void)setUpUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 viewMode:(long long)arg2 needPageControl:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

