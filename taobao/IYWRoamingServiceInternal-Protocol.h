//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IYWRoamingService-Protocol.h"

@class NSArray, NSDate, NSString;

@protocol IYWRoamingServiceInternal <IYWRoamingService>
- (void)roamBatchP2PReceiverReadFlag:(NSString *)arg1 WithMessage:(NSArray *)arg2 completion:(void (^)(NSError *, NSDictionary *))arg3;
- (void)autoRoamTribeChatLogWithTribeId:(NSString *)arg1 endTime:(NSDate *)arg2 count:(unsigned long long)arg3 completion:(void (^)(NSError *, NSDictionary *))arg4;
- (void)roamTribeChatLogWithTribeId:(NSString *)arg1 endTime:(NSDate *)arg2 count:(unsigned long long)arg3 nextKey:(NSString *)arg4 completion:(void (^)(NSError *, NSDictionary *))arg5;
- (void)roamTribeChatLogWithTribeId:(NSString *)arg1 endTime:(NSDate *)arg2 count:(unsigned long long)arg3 completion:(void (^)(NSError *, NSDictionary *))arg4;
- (void)autoRoamP2PChatLogWithContactId:(NSString *)arg1 endTime:(NSDate *)arg2 count:(unsigned long long)arg3 isSeller:(_Bool)arg4 completion:(void (^)(NSError *, NSDictionary *))arg5;
- (void)roamP2PChatLogWithContactId:(NSString *)arg1 endTime:(NSDate *)arg2 count:(unsigned long long)arg3 isSeller:(_Bool)arg4 nextKey:(NSString *)arg5 completion:(void (^)(NSError *, NSDictionary *))arg6;
@end
