//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveUserModel, NSNumber;

@protocol HTSUserServiceMessage <NSObject>

@optional
- (void)didUnfollowUser:(NSNumber *)arg1 status:(long long)arg2;
- (void)didFollowUser:(NSNumber *)arg1 status:(long long)arg2;
- (void)userDidUpdate:(LiveUserModel *)arg1;
- (void)userDidClear;
- (void)userDidUnlink;
- (void)userDidLinked:(LiveUserModel *)arg1;
@end

