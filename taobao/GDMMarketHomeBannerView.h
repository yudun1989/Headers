//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class GDMMarketStyledPageControl, NSArray, NSDictionary, NSString, UIColor, UIScrollView;

@interface GDMMarketHomeBannerView : UIView <UIScrollViewDelegate>
{
    GDMMarketStyledPageControl *_pageControl;
    UIScrollView *_scrollView;
    NSArray *_bannerArray;
    _Bool _isLoopEnable;
    _Bool _isAnimatingSwitchBanner;
    NSDictionary *_loopDictionary;
    UIColor *_styleColor;
    id _delegate;
    NSString *_userTrackPageName;
}

@property(retain) NSString *userTrackPageName; // @synthesize userTrackPageName=_userTrackPageName;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endAutoChangeLoop;
- (void)beginAutoChangeLoop;
- (void)loopFunctionWithKey:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onBannerCallBack:(id)arg1;
- (id)initWithItems:(id)arg1 channelColor:(id)arg2;
- (void)createItemsWithArray:(id)arg1;
- (void)setBannerHeight:(float)arg1;
- (id)itemViewAtIndex:(unsigned long long)arg1 item:(id)arg2;
- (id)bannerViewFromItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

