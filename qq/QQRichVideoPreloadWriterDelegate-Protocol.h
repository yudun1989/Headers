//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError, NSURL, QQRichVideoPreloadWriter;

@protocol QQRichVideoPreloadWriterDelegate <NSObject>

@optional
- (void)QQRichVideoPreloadWriter:(QQRichVideoPreloadWriter *)arg1 recordError:(NSError *)arg2;
- (void)QQRichVideoPreloadWriter:(QQRichVideoPreloadWriter *)arg1 finishedRecordWithUrl:(NSURL *)arg2;
@end

