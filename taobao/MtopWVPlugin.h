//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class MtopWVStatisticsImpl, NSMutableDictionary, NSObject;

@interface MtopWVPlugin : WVDynamicHandler
{
    NSMutableDictionary *_pendingRequests;
    NSObject *_NULL_VALUE;
    MtopWVStatisticsImpl *_statisticsImp;
}

+ (id)instance;
@property(retain, nonatomic) MtopWVStatisticsImpl *statisticsImp; // @synthesize statisticsImp=_statisticsImp;
@property(retain, nonatomic) NSObject *NULL_VALUE; // @synthesize NULL_VALUE=_NULL_VALUE;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (void)send:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)dealloc;
- (id)init;

@end

