//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ProtoClientSyncAck : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasCmk;
    _Bool _hasMk;
    _Bool _hasRespCode;
    _Bool _hasRespPayload;
    _Bool _hasBizName;
    int _bizType;
    NSString *_cmk;
    long long _mk;
    long long _respCode;
    NSString *_respPayload;
    NSString *_bizName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *respPayload; // @synthesize respPayload=_respPayload;
@property(nonatomic) long long respCode; // @synthesize respCode=_respCode;
@property(nonatomic) long long mk; // @synthesize mk=_mk;
@property(retain, nonatomic) NSString *cmk; // @synthesize cmk=_cmk;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasRespPayload; // @synthesize hasRespPayload=_hasRespPayload;
@property(readonly) _Bool hasRespCode; // @synthesize hasRespCode=_hasRespCode;
@property(readonly) _Bool hasMk; // @synthesize hasMk=_hasMk;
@property(readonly) _Bool hasCmk; // @synthesize hasCmk=_hasCmk;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
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

