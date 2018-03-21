//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQTroopModel : NSObject
{
    NSString *_groupName;
    NSString *_groupCode;
    NSString *_groupUin;
    NSString *_lastSeq;
    int _groupType;
    int _groupFlag;
    int _groupFace;
    int _infoSeq;
    NSString *_groupMemo;
    long long _groupMaxSeq;
    _Bool _shouldSave;
    int _dwGroupFlagExt;
    int _rankSeq;
    int _xo;
    int _memNSeq;
    int _memOSeq;
    int _memCardNSeq;
    int _memCardOSeq;
    int _groupMemNum;
    unsigned int _uinJoinTime;
    NSArray *_avatarUinList;
}

+ (id)createTroopModel2FromDic:(id)arg1;
+ (id)createTroopModel1FromDic:(id)arg1;
@property(retain, nonatomic) NSArray *avatarUinList; // @synthesize avatarUinList=_avatarUinList;
@property(nonatomic) unsigned int uinJoinTime; // @synthesize uinJoinTime=_uinJoinTime;
@property(nonatomic) int groupMemNum; // @synthesize groupMemNum=_groupMemNum;
@property(nonatomic) int dwGroupFlagExt; // @synthesize dwGroupFlagExt=_dwGroupFlagExt;
@property(nonatomic) _Bool shouldSave; // @synthesize shouldSave=_shouldSave;
@property(nonatomic) long long groupMaxSeq; // @synthesize groupMaxSeq=_groupMaxSeq;
@property(retain, nonatomic) NSString *groupMemo; // @synthesize groupMemo=_groupMemo;
@property(nonatomic) int memCardOSeq; // @synthesize memCardOSeq=_memCardOSeq;
@property(nonatomic) int memCardNSeq; // @synthesize memCardNSeq=_memCardNSeq;
@property(nonatomic) int memOSeq; // @synthesize memOSeq=_memOSeq;
@property(nonatomic) int memNSeq; // @synthesize memNSeq=_memNSeq;
@property(nonatomic) int rankSeq; // @synthesize rankSeq=_rankSeq;
@property(nonatomic) int infoSeq; // @synthesize infoSeq=_infoSeq;
@property(nonatomic) int groupFace; // @synthesize groupFace=_groupFace;
@property(nonatomic) int groupFlag; // @synthesize groupFlag=_groupFlag;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *lastSeq; // @synthesize lastSeq=_lastSeq;
@property(retain, nonatomic) NSString *groupUin; // @synthesize groupUin=_groupUin;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (_Bool)hasSetGroupFace;
- (_Bool)hasSetGroupName;
- (id)description;
- (void)dealloc;

@end

