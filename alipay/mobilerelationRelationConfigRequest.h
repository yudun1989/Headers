//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobilerelationRelationConfigRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *action; // @dynamic action;
@property(retain, nonatomic) NSArray *addUserIds; // @dynamic addUserIds;
@property(retain, nonatomic) NSArray *delUserIds; // @dynamic delUserIds;
@property(readonly) _Bool hasAction; // @dynamic hasAction;
@property(readonly) _Bool hasOriginalId; // @dynamic hasOriginalId;
@property(readonly) _Bool hasScope; // @dynamic hasScope;
@property(readonly) _Bool hasSubScope; // @dynamic hasSubScope;
@property(retain, nonatomic) NSString *originalId; // @dynamic originalId;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *subScope; // @dynamic subScope;

@end

