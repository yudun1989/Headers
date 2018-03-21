//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSDictionary, NSNumber, NSString;

@protocol DRPageConfigDAOProxy <APDAOProtocol>
- (void)deleteAllPageItems:(NSString *)arg1;
- (APDAOResult *)updatePageConfigItems:(NSArray *)arg1;
- (APDAOResult *)updatePageConfig:(NSDictionary *)arg1 withConfigId:(NSString *)arg2;
- (APDAOResult *)updatePageUrlByConfigIds:(NSArray *)arg1;
- (NSNumber *)queryAllPageConfigCount;
- (NSArray *)queryPageConfigsWithConfigId:(NSString *)arg1;
- (NSArray *)queryAllPageConfigs:(NSString *)arg1;
- (APDAOResult *)insertPageConfigs:(NSArray *)arg1;
@end

