//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIGBDTaskItem.h"

@class GIGBDData;

@interface GIGBDDataTask : GIGBDTaskItem
{
    GIGBDData *gbdData_;
    _Bool isUploadIng_;
    int curTryTimes_;
    int nextTryTime_;
}

+ (void)scheduleGBDReport:(id)arg1 andAppId:(id)arg2 andAppKey:(id)arg3 andLocation:(id)arg4 andWifi:(id)arg5 andBeaconArray:(id)arg6 andWifiStatus:(_Bool)arg7 andbuletooleStatus:(int)arg8;
- (void).cxx_destruct;
- (void)onTimer;
- (id)initWithClientId:(id)arg1 andAppId:(id)arg2 andAppKey:(id)arg3 andLocation:(id)arg4 andWifi:(id)arg5 andBeaconArray:(id)arg6 andWifiStatus:(_Bool)arg7 andbuletooleStatus:(int)arg8;

@end

