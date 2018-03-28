//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTFollowManager : NSObject
{
}

+ (void)updateUserFollowStateChangeForAction:(int)arg1 userID:(id)arg2;
+ (id)sharedManager;
- (void)notifyMediaID:(id)arg1 isFollowing:(_Bool)arg2;
- (id)commonURLParameters;
- (void)startFollowAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5 reason:(id)arg6 newReason:(id)arg7 newSource:(id)arg8 extra:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)startFollowAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5 reason:(id)arg6 newReason:(id)arg7 newSource:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)newStartAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5 reason:(id)arg6 newReason:(id)arg7 newSource:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)follow:(id)arg1 action:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unfollow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)follow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tt_requestWrapperChangedUsersFollowStateModel:(id)arg1 actionType:(int)arg2 responseClass:(Class)arg3 keypath:(id)arg4 finalClassPair:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)tt_requestWrapperChangedSingleFollowStateModel:(id)arg1 userId:(id)arg2 actionType:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)multiFollowUserIdArray:(id)arg1 source:(unsigned long long)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

