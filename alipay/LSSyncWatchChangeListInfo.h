//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface LSSyncWatchChangeListInfo : NSObject
{
    NSString *_bizType;
    NSString *_liveId;
    unsigned long long _currentWatcherCount;
    double _time;
    NSArray *_watcherInfos;
}

+ (id)instanceWithDic:(id)arg1;
@property(retain, nonatomic) NSArray *watcherInfos; // @synthesize watcherInfos=_watcherInfos;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long currentWatcherCount; // @synthesize currentWatcherCount=_currentWatcherCount;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end

