//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AccsStatisticsProtocol-Protocol.h"

@class NSString;

@interface TBAccsStatistics : NSObject <AccsStatisticsProtocol>
{
    NSString *_type;
}

+ (void)commit;
+ (void)commitEvent:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 args:(id)arg5;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)success:(id)arg1 accsRequest:(id)arg2;
- (void)faile:(id)arg1 accsRequest:(id)arg2;
- (void)startSendRequest:(id)arg1 accsRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

