//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SVTableViewCell, UIScrollView;

@protocol SVTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCell:(SVTableViewCell *)arg1 didScroll:(UIScrollView *)arg2;
- (void)swipeableTableViewCellDidEndScrolling:(SVTableViewCell *)arg1;
- (_Bool)swipeableTableViewCell:(SVTableViewCell *)arg1 canSwipeToState:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(SVTableViewCell *)arg1;
- (void)swipeableTableViewCell:(SVTableViewCell *)arg1 scrollingToState:(long long)arg2;
- (void)swipeableTableViewCell:(SVTableViewCell *)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (void)swipeableTableViewCell:(SVTableViewCell *)arg1 didTriggerLeftUtilityButtonWithIndex:(long long)arg2;
@end

