//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface ProtoOplog : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSc;
    _Bool _hasSt;
    _Bool _hasMct;
    _Bool _hasMk;
    _Bool _hasMId;
    _Bool _hasAppId;
    _Bool _hasBizId;
    _Bool _hasPayload;
    _Bool _hasBinaryPayload;
    _Bool _hasExt;
    _Bool _hasPushData;
    _Bool _hasMsgId;
    _Bool _hasStatId;
    int _sc;
    int _st;
    long long _mct;
    long long _mk;
    NSString *_mId;
    NSString *_appId;
    NSString *_bizId;
    NSString *_payload;
    NSData *_binaryPayload;
    NSString *_ext;
    NSString *_pushData;
    NSString *_msgId;
    NSString *_statId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *statId; // @synthesize statId=_statId;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *pushData; // @synthesize pushData=_pushData;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSData *binaryPayload; // @synthesize binaryPayload=_binaryPayload;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *mId; // @synthesize mId=_mId;
@property(nonatomic) long long mk; // @synthesize mk=_mk;
@property(nonatomic) long long mct; // @synthesize mct=_mct;
@property(nonatomic) int st; // @synthesize st=_st;
@property(nonatomic) int sc; // @synthesize sc=_sc;
@property(readonly) _Bool hasStatId; // @synthesize hasStatId=_hasStatId;
@property(readonly) _Bool hasMsgId; // @synthesize hasMsgId=_hasMsgId;
@property(readonly) _Bool hasPushData; // @synthesize hasPushData=_hasPushData;
@property(readonly) _Bool hasExt; // @synthesize hasExt=_hasExt;
@property(readonly) _Bool hasBinaryPayload; // @synthesize hasBinaryPayload=_hasBinaryPayload;
@property(readonly) _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(readonly) _Bool hasBizId; // @synthesize hasBizId=_hasBizId;
@property(readonly) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(readonly) _Bool hasMId; // @synthesize hasMId=_hasMId;
@property(readonly) _Bool hasMk; // @synthesize hasMk=_hasMk;
@property(readonly) _Bool hasMct; // @synthesize hasMct=_hasMct;
@property(readonly) _Bool hasSt; // @synthesize hasSt=_hasSt;
@property(readonly) _Bool hasSc; // @synthesize hasSc=_hasSc;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

