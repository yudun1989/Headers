//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class TSVPullToRefreshView;

@interface UIScrollView (TSVPullToRefresh)
@property(nonatomic) _Bool t_showsPullToRefresh; // @dynamic t_showsPullToRefresh;
@property(retain, nonatomic) TSVPullToRefreshView *t_pullToRefreshView; // @dynamic t_pullToRefreshView;
- (void)t_triggerPullToRefresh;
- (void)t_addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;
@end

