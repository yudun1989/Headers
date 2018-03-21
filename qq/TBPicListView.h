//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol TBPicListViewDelegate;

@interface TBPicListView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isDragLeftInEnd;
    id <TBPicListViewDelegate> _viewDelegate;
    double _itemWidth;
    double _itemHeight;
    double _itemGap;
    double _itemFirstToLeft;
    NSMutableDictionary *_reusableItems;
    NSMutableArray *_visibleItems;
    long long _itemCount;
    struct CGRect _viewFrame;
}

@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) _Bool isDragLeftInEnd; // @synthesize isDragLeftInEnd=_isDragLeftInEnd;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) NSMutableArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(retain, nonatomic) NSMutableDictionary *reusableItems; // @synthesize reusableItems=_reusableItems;
@property(nonatomic) double itemFirstToLeft; // @synthesize itemFirstToLeft=_itemFirstToLeft;
@property(nonatomic) double itemGap; // @synthesize itemGap=_itemGap;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) __weak id <TBPicListViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (id)getFirstItem;
- (void)locateToIndex:(long long)arg1;
- (void)onClickVideoView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadItems:(struct _NSRange)arg1;
- (id)dequeueReusableItem:(id)arg1;
- (void)enqueueReusableItem:(id)arg1;
- (void)clearAllItem;
- (void)loadMoreData;
- (void)reloadData;
- (void)clearView;
- (struct _NSRange)prepareItemsRange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

