//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMutableDictionary;

@interface QQFastSendImageReport : NSObject
{
    NSMutableDictionary *_fsiDic;
    NSDateFormatter *_dateFormatter;
    int _checkRdmSdkCount;
}

+ (id)GetInstace;
- (void)checkRdmSdkToReportFSI:(id)arg1;
- (void)reportRdmYesterdayFSIDic:(id)arg1;
- (void)saveFSIDicToFile;
- (void)saveFSIDic:(id)arg1;
- (id)loadFSIData;
- (void)dealloc;

@end

