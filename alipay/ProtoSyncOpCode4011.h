//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ProtoSyncOpCode4011 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasKey;
    _Bool _hasVersion;
    _Bool _hasClientLocalTime;
    NSString *_bizType;
    NSString *_key;
    NSString *_version;
    long long _clientLocalTime;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long clientLocalTime; // @synthesize clientLocalTime=_clientLocalTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasClientLocalTime; // @synthesize hasClientLocalTime=_hasClientLocalTime;
@property(readonly) _Bool hasVersion; // @synthesize hasVersion=_hasVersion;
@property(readonly) _Bool hasKey; // @synthesize hasKey=_hasKey;
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

