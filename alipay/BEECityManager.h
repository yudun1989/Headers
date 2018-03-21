//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEECityRegionDataDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol BEECityManagerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BEECityManager : NSObject <BEECityRegionDataDelegate>
{
    id <BEECityManagerDelegate> _cityDelegate;
    NSMutableArray *_regionDataList;
    NSObject<OS_dispatch_semaphore> *_ioSemaphore;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_loadCityListQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadCityListQueue; // @synthesize loadCityListQueue=_loadCityListQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *ioSemaphore; // @synthesize ioSemaphore=_ioSemaphore;
@property(retain, nonatomic) NSMutableArray *regionDataList; // @synthesize regionDataList=_regionDataList;
@property(nonatomic) __weak id <BEECityManagerDelegate> cityDelegate; // @synthesize cityDelegate=_cityDelegate;
- (void).cxx_destruct;
- (void)didFinishLoadBinCache:(id)arg1 toFile:(id)arg2;
- (void)performDelegate:(id)arg1 sel:(SEL)arg2;
- (id)beeCityInfoAtIndexPath:(id)arg1 tabIndex:(unsigned long long)arg2;
- (id)cityIdxArrayAtTabIndex:(unsigned long long)arg1;
- (id)cityDictAtTabIndex:(unsigned long long)arg1;
- (id)regionDataAtTabIndex:(unsigned long long)arg1;
- (id)generateRegionCity:(id)arg1 showHistoryCity:(_Bool)arg2 showHotCity:(_Bool)arg3 currentCity:(id)arg4;
- (void)generateRegionCityList:(id)arg1 showHistoryCity:(_Bool)arg2 showHotCity:(_Bool)arg3 currentCity:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

