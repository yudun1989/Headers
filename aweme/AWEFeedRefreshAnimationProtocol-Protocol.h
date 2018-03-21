//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol AWEFeedRefreshAnimationProtocol <NSObject>
+ (id)animationWithController:(UIViewController *)arg1;
- (void)stopRefreshing;
- (void)beginRefreshingAfterDragEnd;
- (void)beginRefreshing;
- (void)dragToEndWithProgress:(double)arg1 refreshBlock:(void (^)(void))arg2;
- (void)dragCancellation;
- (void)dragWithProgress:(double)arg1;
- (id)init;
@end

