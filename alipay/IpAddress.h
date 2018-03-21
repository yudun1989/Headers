//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface IpAddress : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasIp;
    _Bool _hasPort;
    _Bool _hasType;
    _Bool _hasAccIp;
    _Bool _hasAccPort;
    _Bool _hasScore;
    int _port;
    int _type;
    int _accPort;
    int _score;
    NSString *_ip;
    NSString *_accIp;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic) int accPort; // @synthesize accPort=_accPort;
@property(retain, nonatomic) NSString *accIp; // @synthesize accIp=_accIp;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(readonly) _Bool hasScore; // @synthesize hasScore=_hasScore;
@property(readonly) _Bool hasAccPort; // @synthesize hasAccPort=_hasAccPort;
@property(readonly) _Bool hasAccIp; // @synthesize hasAccIp=_hasAccIp;
@property(readonly) _Bool hasType; // @synthesize hasType=_hasType;
@property(readonly) _Bool hasPort; // @synthesize hasPort=_hasPort;
@property(readonly) _Bool hasIp; // @synthesize hasIp=_hasIp;
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

