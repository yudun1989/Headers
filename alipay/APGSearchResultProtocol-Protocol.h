//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APGSearchGroupResult, MOBILESEARCHGroupRecord, NSArray, NSError, NSString;

@protocol APGSearchResultProtocol <NSObject>

@optional
- (void)onLocalAndRemoteSearchGroup:(NSString *)arg1 text:(NSString *)arg2 localResult:(APGSearchGroupResult *)arg3 remoteResult:(MOBILESEARCHGroupRecord *)arg4 hasMore:(_Bool)arg5 bucketId:(NSString *)arg6 error:(NSError *)arg7;
- (void)onRemoteSearchGroup:(NSString *)arg1 text:(NSString *)arg2 remoteResult:(MOBILESEARCHGroupRecord *)arg3 hasMore:(_Bool)arg4 bucketId:(NSString *)arg5 error:(NSError *)arg6;
- (void)onSearchText:(NSString *)arg1 result:(NSArray *)arg2 resultSource:(unsigned long long *)arg3 bucketId:(NSString *)arg4 error:(NSError *)arg5;
@end

