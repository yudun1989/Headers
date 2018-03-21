//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQGroupMemberMgr : NSObject
{
    _Bool _initCache;
    NSMutableDictionary *_memberCache;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *memberCache; // @synthesize memberCache=_memberCache;
- (void)updateMemberCacheToDB:(id)arg1;
- (void)updateGroupMember:(id)arg1 forGroup:(id)arg2 isUpdateDB:(_Bool)arg3;
- (void)updateGroupMember:(id)arg1 memUin:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 syncGet:(_Bool)arg4 isUpdateDB:(_Bool)arg5;
- (void)clearAllGroupMemberCache;
- (void)clearGroupMemberCache:(id)arg1;
- (id)getMemberModelWith:(id)arg1 memUin:(id)arg2;
- (id)getTroopMemberInCache:(id)arg1;
- (id)getGroupMemberArray:(id)arg1 queryDBWhenNoCache:(_Bool)arg2;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)init;

@end

