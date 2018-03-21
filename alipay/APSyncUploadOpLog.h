//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface APSyncUploadOpLog : NSObject
{
    long long _opId;
    NSString *_userId;
    NSString *_biz;
    NSString *_bizId;
    long long _dateTime;
    unsigned long long _sendTime;
    unsigned long long _expireTime;
    unsigned long long _random;
    NSString *_payload;
    NSData *_payloadPB;
    long long _sendStatus;
    unsigned long long _needCallback;
    NSString *_reserve1;
    NSString *_reserve2;
    NSString *_reserve3;
    NSString *_clientSkey;
}

+ (long long)opIdWithClientSkey:(id)arg1;
+ (id)clientSkeyDateTime:(long long)arg1 random:(long long)arg2 opId:(long long)arg3;
+ (id)syncUploadOpLogWithDic:(id)arg1;
+ (id)syncUploadOpLog:(id)arg1;
@property(retain, nonatomic) NSString *clientSkey; // @synthesize clientSkey=_clientSkey;
@property(retain, nonatomic) NSString *reserve3; // @synthesize reserve3=_reserve3;
@property(retain, nonatomic) NSString *reserve2; // @synthesize reserve2=_reserve2;
@property(retain, nonatomic) NSString *reserve1; // @synthesize reserve1=_reserve1;
@property(nonatomic) unsigned long long needCallback; // @synthesize needCallback=_needCallback;
@property(nonatomic) long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(retain, nonatomic) NSData *payloadPB; // @synthesize payloadPB=_payloadPB;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned long long random; // @synthesize random=_random;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned long long sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) long long dateTime; // @synthesize dateTime=_dateTime;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long opId; // @synthesize opId=_opId;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long sendAbsTime;
- (_Bool)isPBData;

@end

