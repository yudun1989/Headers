//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TTVideoFeedListServiceMessage <NSObject>

@optional
- (void)message_deleteItemsOnRealTime:(NSArray *)arg1;
- (void)message_getMoreItems:(NSArray *)arg1 onCategory:(NSString *)arg2;
- (void)message_refreshFeedItems:(NSArray *)arg1 onCategory:(NSString *)arg2;
- (void)message_getLocalItems:(NSArray *)arg1;
@end

