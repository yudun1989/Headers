//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBBizDownloadTask, TBDownloadResult;

@protocol TBDataMonitorProtocol <NSObject>
- (void)log:(NSString *)arg1;
- (void)monitorTaskDestinationInvalid:(NSString *)arg1 destination:(NSString *)arg2;
- (void)monitorTask:(TBBizDownloadTask *)arg1 result:(TBDownloadResult *)arg2;
@end

