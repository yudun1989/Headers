//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GroupHomeworkPbProxy : NSObject
{
}

+ (id)sharedInstance;
- (int)removeSSOPkgHeadBuffer:(char *)arg1 bufferLen:(int)arg2 bodyBuffer:(basic_string_075b6133 *)arg3;
- (char *)getOIDBSSOPkg:(long long)arg1 serviceType:(long long)arg2 buffer:(id)arg3;
- (id)parseIsHomeworkGroupRspBuffer:(char *)arg1 bufferLen:(int)arg2;
- (char *)getIsHomeworkGroupReqBuffer:(unsigned long long)arg1 withCommand:(long long)arg2 serviceType:(long long)arg3;

@end

