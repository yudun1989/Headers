//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TTVSwipeView, UIView;

@protocol TTVSwipeViewDataSource <NSObject>
- (UIView *)swipeView:(TTVSwipeView *)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(UIView *)arg3;
- (long long)numberOfItemsInSwipeView:(TTVSwipeView *)arg1;
@end

