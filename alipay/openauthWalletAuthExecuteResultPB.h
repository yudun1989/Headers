//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString;

@interface openauthWalletAuthExecuteResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *authCode; // @dynamic authCode;
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) PBMapStringString *errorScopes; // @dynamic errorScopes;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(readonly) _Bool hasAppId; // @dynamic hasAppId;
@property(readonly) _Bool hasAuthCode; // @dynamic hasAuthCode;
@property(readonly) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(readonly) _Bool hasErrorMsg; // @dynamic hasErrorMsg;
@property(readonly) _Bool hasErrorScopes; // @dynamic hasErrorScopes;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasIsSuccess; // @dynamic hasIsSuccess;
@property(readonly) _Bool hasIsvAppId; // @dynamic hasIsvAppId;
@property(readonly) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool isSuccess; // @dynamic isSuccess;
@property(retain, nonatomic) NSString *isvAppId; // @dynamic isvAppId;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSArray *successScopes; // @dynamic successScopes;

@end

