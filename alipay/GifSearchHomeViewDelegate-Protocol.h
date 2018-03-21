//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GifSearchHomeView, GifSearchImageCell, NSIndexPath, NSString;

@protocol GifSearchHomeViewDelegate <NSObject>
- (void)removeKeyboardObserver;
- (void)regsiterKeyboardObserver:(_Bool)arg1;
- (void)homeView:(GifSearchHomeView *)arg1 didClickRetryButton:(id)arg2;
- (void)homeView:(GifSearchHomeView *)arg1 didClickCloseButton:(id)arg2;
- (void)homeView:(GifSearchHomeView *)arg1 didClickSearchButton:(id)arg2;
- (void)homeView:(GifSearchHomeView *)arg1 searchKeyword:(NSString *)arg2 withAttachment:(id)arg3;
- (void)homeView:(GifSearchHomeView *)arg1 didMoveLongpressToGifCell:(GifSearchImageCell *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)homeView:(GifSearchHomeView *)arg1 didLongpressGifCell:(GifSearchImageCell *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)homeViewDidEndLongpressGifCell:(GifSearchHomeView *)arg1;
- (void)homeView:(GifSearchHomeView *)arg1 didSelectGifCell:(GifSearchImageCell *)arg2 indexPath:(NSIndexPath *)arg3;
@end

