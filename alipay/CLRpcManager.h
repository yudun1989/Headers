//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CLRpcManager : NSObject
{
}

+ (void)modifyRecommendSwitchValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestRecommendSwitchCompletion:(CDUnknownBlockType)arg1;
+ (void)requestShortLink:(id)arg1 inVC:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)shared;
- (void)requestEssence:(id)arg1 feedId:(id)arg2 cancelEssence:(_Bool)arg3 inVC:(id)arg4 onSuccess:(CDUnknownBlockType)arg5;
- (void)requestDeleteFeed:(id)arg1 ifAddBlack:(_Bool)arg2 blackReason:(id)arg3 inVC:(id)arg4 onSuccess:(CDUnknownBlockType)arg5;
- (void)quitClubWithCommunityId:(id)arg1 inViewController:(id)arg2 onSuccess:(CDUnknownBlockType)arg3;
- (id)initInPrivate;
- (id)init;

@end

