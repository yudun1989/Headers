//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, openauthAuthRequestContextPB;

@interface openauthWalletAuthExecuteRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *appExtInfo; // @dynamic appExtInfo;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) openauthAuthRequestContextPB *authRequestContext; // @dynamic authRequestContext;
@property(retain, nonatomic) NSString *currentPageUrl; // @dynamic currentPageUrl;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *fromSystem; // @dynamic fromSystem;
@property(readonly) _Bool hasAppExtInfo; // @dynamic hasAppExtInfo;
@property(readonly) _Bool hasAppId; // @dynamic hasAppId;
@property(readonly) _Bool hasAuthRequestContext; // @dynamic hasAuthRequestContext;
@property(readonly) _Bool hasCurrentPageUrl; // @dynamic hasCurrentPageUrl;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasFromSystem; // @dynamic hasFromSystem;
@property(readonly) _Bool hasIsvAppId; // @dynamic hasIsvAppId;
@property(readonly) _Bool hasState; // @dynamic hasState;
@property(retain, nonatomic) NSString *isvAppId; // @dynamic isvAppId;
@property(retain, nonatomic) NSArray *scopeNicks; // @dynamic scopeNicks;
@property(retain, nonatomic) NSString *state; // @dynamic state;

@end

