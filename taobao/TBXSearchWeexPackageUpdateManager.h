//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBBizDownloadTask;

@interface TBXSearchWeexPackageUpdateManager : NSObject
{
    TBBizDownloadTask *_task;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updatingGroup:(id)arg1 key:(id)arg2;
- (void)startUpdatingGroup:(id)arg1 key:(id)arg2 WhenComplete:(CDUnknownBlockType)arg3;
- (void)startUpdatingGroup:(id)arg1 key:(id)arg2 withComplete:(CDUnknownBlockType)arg3;
- (void)groupConfigure:(id)arg1;
- (id)init;

@end

