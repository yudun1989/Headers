//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBCPhotoBrowseView;

@protocol TBCPhotoBrowseViewDelegate <NSObject>

@optional
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 videoMaksViewTapAtIndex:(long long)arg2;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 longTapIndex:(long long)arg2;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 tapIndex:(long long)arg2;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 didScrollToContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3 singlePageSize:(struct CGSize)arg4;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 didScrollToHalfOfIndex:(long long)arg2;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 didEndDeceleratingToIndex:(long long)arg2 fromIndex:(long long)arg3;
- (void)photoBrowseView:(TBCPhotoBrowseView *)arg1 didEndDeceleratingToIndex:(long long)arg2;
@end

