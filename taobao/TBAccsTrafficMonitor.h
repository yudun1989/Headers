//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBAccsTrafficMonitor : NSObject
{
    int _timer;
    NSMutableDictionary *_trafficDict;
    NSString *_dataPath;
}

+ (id)fomrateDate:(id)arg1;
+ (void)addTrafficUp:(double)arg1 down:(double)arg2 host:(id)arg3 bizId:(id)arg4;
+ (void)start;
+ (id)shareInstance;
+ (void)initialize;
@property(nonatomic) int timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) NSMutableDictionary *trafficDict; // @synthesize trafficDict=_trafficDict;
- (void).cxx_destruct;
- (id)serviceIDToID:(id)arg1;
- (void)commit:(id)arg1;
- (void)checkData;
- (void)saveData;
- (void)loadData;
- (void)handleEnteredBackground:(id)arg1;
- (id)init;

@end

