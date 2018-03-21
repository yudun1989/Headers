//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KSPagesViewDelegate-Protocol.h"

@class KSFeedImageAtlasLoader, KSMarquisePageControl, KSPagesView, NSString;

@interface KSFeedFullscreenGalleryView : UIView <KSPagesViewDelegate>
{
    _Bool _animating;
    KSFeedImageAtlasLoader *_atlasLoader;
    CDUnknownBlockType _changePageBlock;
    CDUnknownBlockType _didDismissBlock;
    UIView *_contentView;
    KSPagesView *_pagesView;
    KSMarquisePageControl *_pageControl;
    KSMarquisePageControl *_originalPageControl;
    UIView *_originalThumbnailView;
    long long _orientation;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIView *originalThumbnailView; // @synthesize originalThumbnailView=_originalThumbnailView;
@property(retain, nonatomic) KSMarquisePageControl *originalPageControl; // @synthesize originalPageControl=_originalPageControl;
@property(retain, nonatomic) KSMarquisePageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) KSPagesView *pagesView; // @synthesize pagesView=_pagesView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType changePageBlock; // @synthesize changePageBlock=_changePageBlock;
@property(retain, nonatomic) KSFeedImageAtlasLoader *atlasLoader; // @synthesize atlasLoader=_atlasLoader;
- (void).cxx_destruct;
- (void)pagesView:(id)arg1 didRevealView:(id)arg2 atPageIndex:(long long)arg3;
- (void)pagesView:(id)arg1 willDisplayView:(id)arg2 atPageIndex:(long long)arg3;
- (void)pagesViewDidEndScroll:(id)arg1;
- (void)stopObserveOrientation;
- (void)startObserveOrientation;
- (void)orientationChanged:(id)arg1;
- (void)rotateToDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showFromThumbnailView:(id)arg1 attachedPageControl:(id)arg2;
- (void)dismiss;
- (void)didSingleTap:(id)arg1;
- (void)layoutContents;
- (void)setFrame:(struct CGRect)arg1;
- (void)commonInit;
@property(readonly, nonatomic) long long currentPage; // @dynamic currentPage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

