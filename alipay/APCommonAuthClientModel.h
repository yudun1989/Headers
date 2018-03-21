//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APCommonAuthClientModelProto-Protocol.h"

@class NSString;

@interface APCommonAuthClientModel : NSObject <APCommonAuthClientModelProto>
{
    NSString *_productId;
    NSString *_productVersion;
    NSString *_clientId;
    NSString *_mobileBrand;
    NSString *_manufacturer;
    NSString *_mobileModel;
    NSString *_netType;
    NSString *_utdid;
    NSString *_platform;
    NSString *_osVersion;
}

@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *mobileBrand; // @synthesize mobileBrand=_mobileBrand;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

