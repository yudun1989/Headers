//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HTTPDNSTools : NSObject
{
    _Bool ttlInQueue;
    int totalFailCount;
    int eachRoundFailCount;
    int rand;
    struct _opaque_pthread_rwlock_t lock;
    long long _lastTimeFailCountUpdate;
}

+ (id)sloveJsonFromFile:(id)arg1;
+ (id)decryptData:(id)arg1;
+ (id)encryptData:(id)arg1;
+ (id)getCheckSum:(id)arg1;
+ (long long)currentTimeInSecond;
+ (_Bool)domainWithLegal:(id)arg1;
+ (_Bool)ipWithLegal:(id)arg1;
+ (id)sharedInstanceManage;
@property(nonatomic) long long lastTimeFailCountUpdate; // @synthesize lastTimeFailCountUpdate=_lastTimeFailCountUpdate;
- (id)structRequest:(id)arg1 useDomain:(_Bool)arg2;
- (void)failCountInc;
- (void)resetTimeoutTaskFlags;
- (_Bool)setTimeoutTaskFlags;
- (void)resetRound;
- (void)resetFailcount;
- (void)getIpFromJson:(id)arg1;
- (void)httpDnsRequest:(id)arg1;
- (_Bool)legalSignature:(id)arg1 signatureString:(id)arg2;
- (void)errorHandler:(int)arg1;
- (id)getHttpHeaderArgsWithCheckSum:(id)arg1;
- (id)getQueryBody:(int)arg1;
- (id)init;

@end

