//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPBaseBiz-Protocol.h"

@class NSString;

@protocol AMPBlacklistBiz <AMPBaseBiz>
- (void)modifyStatus:(_Bool)arg1 withModifyUserId:(NSString *)arg2 forUserId:(NSString *)arg3;
- (void)blacklistPageNo:(long long)arg1 pageSize:(long long)arg2 forUserId:(NSString *)arg3;
@end

