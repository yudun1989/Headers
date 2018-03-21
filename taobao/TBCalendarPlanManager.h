//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext;

@interface TBCalendarPlanManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)saveContext;
- (id)getCalendarPlanList:(id)arg1 endTime:(id)arg2 currentPage:(int)arg3 pageSize:(int)arg4 searchParams:(id)arg5;
- (id)getCalendarPlanCount:(id)arg1;
- (id)getPlanByUID:(id)arg1 ignoreDeleted:(_Bool)arg2;
- (id)getWaitForSyncPlanAlarm:(id)arg1 limit:(unsigned long long)arg2;
- (id)queryRemind:(id)arg1;
- (id)getAlarmInfo:(id)arg1;
- (id)getClosestAlarmInfo:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 order:(id)arg4;
- (id)getClosestAlarmInfo;
- (void)cannelPlanAlarm:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)mergePlans:(id)arg1;
- (id)cannelPlanAlarmWithSync:(id)arg1;
- (void)addPlanAlarm:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;

@end

