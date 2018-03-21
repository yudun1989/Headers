//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSDate, NSNumber, NSString;

@protocol TLOptionStoreDAOProtocol <APDAOProtocol>
- (APDAOResult *)deleteOptionListWithout:(NSArray *)arg1;
- (NSNumber *)existOption:(NSString *)arg1;
- (APDAOResult *)clearOptionWithFeedId:(NSString *)arg1 type:(NSString *)arg2 userId:(NSString *)arg3;
- (APDAOResult *)clearOptionWithFeedIdList:(NSArray *)arg1;
- (NSArray *)selectFeedOptionedByUserId:(NSString *)arg1 type:(NSString *)arg2 feedId:(NSString *)arg3;
- (NSArray *)selectOptionListFromDate:(NSDate *)arg1 limit:(NSNumber *)arg2 type:(NSString *)arg3 feedId:(NSString *)arg4;
- (NSArray *)selectOptionList:(NSArray *)arg1;
- (APDAOResult *)deleteOptionList:(NSArray *)arg1;
- (APDAOResult *)insertOptionList:(NSArray *)arg1;
@end

