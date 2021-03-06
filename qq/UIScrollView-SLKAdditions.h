//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (SLKAdditions)
- (void)slk_stopScrolling;
- (struct CGRect)slk_bottomRect;
- (struct CGRect)slk_topRect;
@property(readonly, nonatomic) struct CGRect slk_visibleRect;
@property(readonly, nonatomic) _Bool slk_isAtBottom;
@property(readonly, nonatomic) _Bool slk_isAtTop;
- (void)slk_scrollToBottomAnimated:(_Bool)arg1;
- (void)slk_scrollToTopAnimated:(_Bool)arg1;
@end

