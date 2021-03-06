//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUser, NSArray, NSDictionary, NSMutableArray, NSSet;

@protocol MIBuddyEngine <NSObject>
- (int)queryUserSetting:(long long)arg1;
- (_Bool)saveUserSetting:(long long)arg1 locationSettingType:(int)arg2;
- (_Bool)updateUser:(long long)arg1 relationship:(int)arg2;
- (_Bool)updateUser:(long long)arg1 blockState:(_Bool)arg2;
- (void)saveBuddies:(NSArray *)arg1;
- (void)fetchUsersInfo:(NSArray *)arg1 uiUserInfo:(NSDictionary *)arg2;
- (NSMutableArray *)queryFriends;
- (NSMutableArray *)queryUsers:(NSSet *)arg1;
- (MMUser *)queryUser:(long long)arg1;
@end

