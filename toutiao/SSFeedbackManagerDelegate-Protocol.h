//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, SSFeedbackManager;

@protocol SSFeedbackManagerDelegate <NSObject>

@optional
- (void)feedbackManager:(SSFeedbackManager *)arg1 postMsgUserInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)feedbackManager:(SSFeedbackManager *)arg1 fetchedNewModels:(NSArray *)arg2 userInfo:(NSDictionary *)arg3 error:(NSError *)arg4;
@end

