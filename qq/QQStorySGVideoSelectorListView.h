//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/QQStorySGVideoSelectorItemViewDelegate-Protocol.h>
#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQStorySGVideoSelectorCellModel;
@protocol QQStorySGVideoSelectorListViewActionDelegate;

@interface QQStorySGVideoSelectorListView : UIScrollView <UIScrollViewDelegate, QQStorySGVideoSelectorItemViewDelegate, TBBizNetworkLogicDelegate>
{
    _Bool _isDragLeftToEnd;
    NSMutableArray *_reusableItems;
    NSMutableArray *_visibleItems;
    NSMutableArray *_totalModels;
    unsigned long long _seq;
    QQStorySGVideoSelectorCellModel *_model;
    id <QQStorySGVideoSelectorListViewActionDelegate> _actionDelegate;
}

@property(nonatomic) id <QQStorySGVideoSelectorListViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) QQStorySGVideoSelectorCellModel *model; // @synthesize model=_model;
- (void)didClickShareGroupVideo:(id)arg1;
- (_Bool)didSelectShareGroupVideo:(id)arg1;
- (void)reloadVideoModels;
- (void)handleSimpleInfoList:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (_Bool)loadItem:(id)arg1;
- (id)dequeueReusableItem;
- (void)enqueueReusableItem:(id)arg1;
- (void)loadItemsInRange:(struct _NSRange)arg1;
- (void)appendModels:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearItems;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

