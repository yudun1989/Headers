//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class CreateGroupClientInfo, GroupGeoInfo, NSString;

@interface QQCreateGroupModel : QQGroupPropertyModel
{
    CreateGroupClientInfo *_clientInfo;
}

@property(retain, nonatomic) CreateGroupClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;

// Remaining properties
@property(retain, nonatomic) NSString *answer; // @dynamic answer;
@property(nonatomic) unsigned int checkLimitFlag; // @dynamic checkLimitFlag;
@property(nonatomic) unsigned int confUin; // @dynamic confUin;
@property(nonatomic) unsigned long long createFlag; // @dynamic createFlag;
@property(retain, nonatomic) GroupGeoInfo *geoInfo; // @dynamic geoInfo;
@property(nonatomic) unsigned int groupAppId; // @dynamic groupAppId;
@property(nonatomic) unsigned int groupClass; // @dynamic groupClass;
@property(nonatomic) unsigned int groupClassExt; // @dynamic groupClassExt;
@property(nonatomic) unsigned int groupCode; // @dynamic groupCode;
@property(nonatomic) unsigned int groupFace; // @dynamic groupFace;
@property(nonatomic) unsigned int groupFaceFlag; // @dynamic groupFaceFlag;
@property(retain, nonatomic) NSString *groupFingerMemo; // @dynamic groupFingerMemo;
@property(retain, nonatomic) NSString *groupMemo; // @dynamic groupMemo;
@property(retain, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) unsigned int groupOption; // @dynamic groupOption;
@property(retain, nonatomic) NSString *groupRichFingerMemo; // @dynamic groupRichFingerMemo;
@property(nonatomic) unsigned int groupSize; // @dynamic groupSize;
@property(nonatomic) unsigned int groupType; // @dynamic groupType;
@property(nonatomic) unsigned long long ownerUin; // @dynamic ownerUin;
@property(retain, nonatomic) NSString *question; // @dynamic question;

@end

