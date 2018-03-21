//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, ProtoPrincipalData;

@interface ProtoSyncOpCode6005 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasUserData;
    _Bool _hasDeviceData;
    _Bool _hasServerIp;
    unsigned int _serverIp;
    ProtoPrincipalData *_userData;
    ProtoPrincipalData *_deviceData;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) unsigned int serverIp; // @synthesize serverIp=_serverIp;
@property(retain, nonatomic) ProtoPrincipalData *deviceData; // @synthesize deviceData=_deviceData;
@property(retain, nonatomic) ProtoPrincipalData *userData; // @synthesize userData=_userData;
@property(readonly) _Bool hasServerIp; // @synthesize hasServerIp=_hasServerIp;
@property(readonly) _Bool hasDeviceData; // @synthesize hasDeviceData=_hasDeviceData;
@property(readonly) _Bool hasUserData; // @synthesize hasUserData=_hasUserData;
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

