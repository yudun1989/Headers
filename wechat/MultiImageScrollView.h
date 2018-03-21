//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "ImageScrollViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMAnimationTipView, MMUIViewController, NSMutableDictionary, NSString;
@protocol MultiImageScrollViewDelegate;

@interface MultiImageScrollView : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate>
{
    NSMutableDictionary *dicVisiblePageIndex;
    int m_iNumberOfPages;
    int m_iCurrentPage;
    MMAnimationTipView *m_tipView;
    _Bool m_bFromPicker;
    _Bool m_bDragAnimating;
    _Bool _m_isFromWebview;
    _Bool _m_needUseWindowFrame;
    id <MultiImageScrollViewDelegate> m_delegate;
    MMUIViewController *m_viewController;
}

@property(nonatomic) _Bool m_needUseWindowFrame; // @synthesize m_needUseWindowFrame=_m_needUseWindowFrame;
@property(nonatomic) _Bool m_isFromWebview; // @synthesize m_isFromWebview=_m_isFromWebview;
@property(nonatomic) _Bool m_bFromPicker; // @synthesize m_bFromPicker;
@property(nonatomic) int m_iCurrentPage; // @synthesize m_iCurrentPage;
@property(nonatomic) int m_iNumberOfPages; // @synthesize m_iNumberOfPages;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController;
@property(nonatomic) __weak id <MultiImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (void)changeToPageAtIndex:(unsigned long long)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)updatePageCount:(unsigned int)arg1;
- (unsigned long long)imageCount;
- (id)viewAtPage:(unsigned long long)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned long long)arg1;
- (void)adjustToMinimumScale;
- (void)adjustToNewSize;
- (struct CGPoint)contentOffsetForPagingScrollView;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)tilePages;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initScrollView;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

