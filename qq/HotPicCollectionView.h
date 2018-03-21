//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <QQMainProject/QQHotPicLayoutDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDataSource-Protocol.h>
#import <QQMainProject/UICollectionViewDelegate-Protocol.h>
#import <QQMainProject/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class GifViewAdapter, HotPicFooterView, HotPicGuideView, HotPicInfo, HotPicLoadingView, NSMutableArray, NSString, QQHotPicLayout, UIButton, UILabel;
@protocol HotPicCollectionDelegate;

@interface HotPicCollectionView : UICollectionView <UICollectionViewDataSource, QQHotPicLayoutDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    UIButton *_backView;
    double _beginOffsetY;
    _Bool _isDragging;
    _Bool _firstScroll;
    _Bool _hasNewRecent;
    _Bool _isSwitch;
    _Bool _dataFinish;
    _Bool _isLoading;
    _Bool _isNormalAnim;
    int _dirtyCount;
    id <HotPicCollectionDelegate> _hotPicCollectionDelegate;
    unsigned long long _picTag;
    HotPicGuideView *_guideView;
    NSString *_tagName;
    GifViewAdapter *_gifAdapter;
    HotPicLoadingView *_loadingView;
    HotPicInfo *_longInfo;
    UILabel *_noPhotolabel;
    QQHotPicLayout *_lineLayout;
    NSMutableArray *_dataPicInfos;
    NSMutableArray *_insertPicInfos;
    HotPicFooterView *_fView;
    NSMutableArray *_picReportsArr;
}

@property(retain, nonatomic) NSMutableArray *picReportsArr; // @synthesize picReportsArr=_picReportsArr;
@property(nonatomic) _Bool isNormalAnim; // @synthesize isNormalAnim=_isNormalAnim;
@property(retain, nonatomic) HotPicFooterView *fView; // @synthesize fView=_fView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int dirtyCount; // @synthesize dirtyCount=_dirtyCount;
@property(nonatomic) _Bool dataFinish; // @synthesize dataFinish=_dataFinish;
@property(retain, nonatomic) NSMutableArray *insertPicInfos; // @synthesize insertPicInfos=_insertPicInfos;
@property(retain, nonatomic) NSMutableArray *dataPicInfos; // @synthesize dataPicInfos=_dataPicInfos;
@property(retain, nonatomic) QQHotPicLayout *lineLayout; // @synthesize lineLayout=_lineLayout;
@property(retain, nonatomic) UILabel *noPhotolabel; // @synthesize noPhotolabel=_noPhotolabel;
@property(retain, nonatomic) HotPicInfo *longInfo; // @synthesize longInfo=_longInfo;
@property(retain, nonatomic) HotPicLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) GifViewAdapter *gifAdapter; // @synthesize gifAdapter=_gifAdapter;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(retain, nonatomic) HotPicGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) _Bool hasNewRecent; // @synthesize hasNewRecent=_hasNewRecent;
@property(nonatomic) unsigned long long picTag; // @synthesize picTag=_picTag;
@property(nonatomic) __weak id <HotPicCollectionDelegate> hotPicCollectionDelegate; // @synthesize hotPicCollectionDelegate=_hotPicCollectionDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dismissPreviewAnimation;
- (void)showPreviewAnimation:(id)arg1 frame:(struct CGRect)arg2;
- (void)startGifPreview:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)showCellPreview:(id)arg1 withPicInfo:(id)arg2 isOrigin:(_Bool)arg3;
- (void)handleLongGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)showFirstGuide;
- (void)dismissNoPhoto;
- (void)showNoPhoto;
- (void)dismissLoadingView;
- (void)showLoadingView;
- (void)showFooterView:(_Bool)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)flowLayout:(id)arg1 heightForWidth:(double)arg2 atIndexPath:(id)arg3;
- (void)insertHotData2:(id)arg1;
- (void)dealloc;
- (void)clearState;
- (void)clearCache;
- (void)handleImage:(id)arg1 picInfo:(id)arg2 loadStatus:(int)arg3 isThumb:(_Bool)arg4;
- (void)handleListInfoList:(id)arg1 loadStatus:(int)arg2;
- (void)loadMore:(_Bool)arg1;
- (_Bool)shouldLoading;
- (void)hotPicAppearReport:(id)arg1 hotPicInfo:(id)arg2;
- (void)hotPicCollectionViewAppear;
- (void)hotPicHidden;
- (void)hotPicShown;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 withTag:(unsigned long long)arg2 tagType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

