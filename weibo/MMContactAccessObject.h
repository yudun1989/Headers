//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAccessObject.h"

@interface MMContactAccessObject : MMAccessObject
{
}

- (int)queryUserSetting:(long long)arg1;
- (_Bool)saveUserSetting:(long long)arg1 locationSettingType:(int)arg2;
- (_Bool)updateUser:(long long)arg1 relationship:(int)arg2;
- (_Bool)updateUser:(long long)arg1 blockState:(_Bool)arg2;
- (_Bool)saveUser:(id)arg1;
- (_Bool)saveUser:(id)arg1 isGroup:(_Bool)arg2;
- (_Bool)buddyExists:(long long)arg1;
- (id)queryUsersWithRelationship:(int)arg1;
- (id)queryUsers:(id)arg1;
- (id)queryUser:(long long)arg1;

@end

