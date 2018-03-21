//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface QQGroupVideoUserLevelInfoMgr : NSObject
{
    _Bool _needResort;
    NSMutableArray *_userLevelModels;
    NSArray *_sorteduserLevelModels;
    unsigned long long _groupCode;
    NSMutableDictionary *_lastSelectedUin;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *lastSelectedUin; // @synthesize lastSelectedUin=_lastSelectedUin;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (void).cxx_destruct;
- (void)removeMember:(unsigned long long)arg1;
- (id)findMemberModelInUsersLevelModes:(unsigned long long)arg1;
- (void)removeMemberFromUsersLevelModes:(unsigned long long)arg1;
- (void)memberOut:(id)arg1;
- (void)memberIn:(id)arg1;
- (void)memberOffStage:(id)arg1;
- (void)memberOnStage:(id)arg1;
- (void)onGroupAudioChatNotification:(id)arg1;
- (_Bool)isInGroupVideoRoom:(unsigned long long)arg1;
- (id)membersOnStage;
- (id)reSortUsersLevelModel;
- (void)clear;
- (void)internalInitConfig;
- (void)dealloc;
- (id)init;

@end

