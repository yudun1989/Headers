//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStoryCubeViewController;

@protocol AWEStoryCubeViewControllerDelegate <NSObject>
- (void)cubeViewControllerDidRemoveExpireStory:(AWEStoryCubeViewController *)arg1;
- (void)cubeViewController:(AWEStoryCubeViewController *)arg1 didDisplayCellAtIndex:(unsigned long long)arg2;
- (void)cubeViewController:(AWEStoryCubeViewController *)arg1 willBeginTransitionForCellAtIndex:(unsigned long long)arg2;
@end
