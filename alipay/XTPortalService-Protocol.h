//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class NSString, XTPortalInfo;

@protocol XTPortalService <DTService>
- (void)removeTagIdForApp:(NSString *)arg1;
- (NSString *)currentTagId;
- (NSString *)getTagIdForApp:(NSString *)arg1;
- (void)setTagId:(NSString *)arg1 forApp:(NSString *)arg2;
- (XTPortalInfo *)portalInfo;
- (NSString *)sessionIdForDomain:(NSString *)arg1;
@end

