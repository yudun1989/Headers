//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TBIMutiSelectionViewController;

@protocol TBIMutiSelectionViewDelegate <NSObject>
- (void)TBIMutiSelectionView:(TBIMutiSelectionViewController *)arg1 shouldSend:(NSArray *)arg2;
- (void)TBIMutiSelectionViewShouldGoCamera:(TBIMutiSelectionViewController *)arg1;
- (void)TBIMutiSelectionViewShouldExit:(TBIMutiSelectionViewController *)arg1;
@end

