//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSMarquisePageControl, UICollectionView;

@interface KSLiveGiftPicker : UIView
{
    KSMarquisePageControl *_pageControl;
    UICollectionView *_collectionView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
@property(readonly, nonatomic) KSMarquisePageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void)addPageLog;
- (void)updatePageControl;
- (void)reloadData;
- (id)collectionViewLayout;
- (void)scrollToItemAtIndexPath:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2;

@end

