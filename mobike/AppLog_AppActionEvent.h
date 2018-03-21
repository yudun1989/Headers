//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "MBKAnalyticsLogProtocol-Protocol.h"

@class AppLog_AppActionEvent_AppCommon, AppLog_AppActionEvent_Page, AppLog_AppActionEvent_Target, AppLog_Location, AppLog_User, NSString;

@interface AppLog_AppActionEvent : GPBMessage <MBKAnalyticsLogProtocol>
{
}

+ (id)descriptor;
- (id)serilizedData;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) AppLog_AppActionEvent_Page *atPage; // @dynamic atPage;
@property(retain, nonatomic) AppLog_AppActionEvent_AppCommon *common; // @dynamic common;
@property(copy, nonatomic) NSString *customAction; // @dynamic customAction;
@property(nonatomic) _Bool hasAtPage; // @dynamic hasAtPage;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) AppLog_Location *location; // @dynamic location;
@property(retain, nonatomic) AppLog_AppActionEvent_Target *target; // @dynamic target;
@property(retain, nonatomic) AppLog_User *user; // @dynamic user;

@end

