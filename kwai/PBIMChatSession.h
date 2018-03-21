//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, PBBasicUser, PBIMMessage;

@interface PBIMChatSession : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int accountType; // @dynamic accountType;
@property(nonatomic) long long activeTime; // @dynamic activeTime;
@property(nonatomic) int categoryId; // @dynamic categoryId;
@property(nonatomic) int chatTargetType; // @dynamic chatTargetType;
@property(copy, nonatomic) NSString *cursor; // @dynamic cursor;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasUnreadVisualMessage; // @dynamic hasUnreadVisualMessage;
@property(retain, nonatomic) NSMutableArray *latestMessageArray; // @dynamic latestMessageArray;
@property(readonly, nonatomic) unsigned long long latestMessageArray_Count; // @dynamic latestMessageArray_Count;
@property(nonatomic) long long maxSeqId; // @dynamic maxSeqId;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) long long readSeqId; // @dynamic readSeqId;
@property(retain, nonatomic) PBBasicUser *target; // @dynamic target;
@property(nonatomic) long long targetId; // @dynamic targetId;
@property(nonatomic) int unreadMsgCount; // @dynamic unreadMsgCount;
@property(retain, nonatomic) PBIMMessage *unreadVisualMessage; // @dynamic unreadVisualMessage;
@property(nonatomic) int unreadVisualMessageCount; // @dynamic unreadVisualMessageCount;

@end

