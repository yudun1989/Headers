//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TfsIpListInfo : NSObject
{
    NSMutableArray *_ipList;
    long long _timeoutTime;
}

+ (id)TfsIplistInfoWithIplist:(id)arg1 TimeoutTime:(long long)arg2;
@property(nonatomic) long long timeoutTime; // @synthesize timeoutTime=_timeoutTime;
@property(retain, nonatomic) NSMutableArray *ipList; // @synthesize ipList=_ipList;
- (void).cxx_destruct;
- (id)init;

@end

