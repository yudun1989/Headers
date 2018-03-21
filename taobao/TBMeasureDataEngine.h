//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSString, NSURL;

@interface TBMeasureDataEngine : NSObject
{
    NSDictionary *_queryParams;
    NSURL *_url;
    NSString *_eventToken;
    NSMutableDictionary *_mtopServerCache;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *mtopServerCache; // @synthesize mtopServerCache=_mtopServerCache;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
- (void).cxx_destruct;
- (id)createMtopServer:(id)arg1 verstion:(id)arg2 params:(id)arg3;
- (void)appendQueryParamsTo:(id)arg1 plusExtra:(id)arg2;
- (id)getMSOADataItem:(id)arg1;
- (id)urlParams:(id)arg1;
- (id)eventTrackParams:(id)arg1;
@property(readonly, nonatomic) NSString *msoaToken;
@property(readonly, nonatomic) NSString *msoaData;
- (id)parseSizeChartModel:(id)arg1;
- (id)getMtopServerByType:(unsigned long long)arg1 extraParams:(id)arg2;
- (void)dealloc;
- (id)init;

@end

