//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface JDKeplerUserAccountDataMangaer : NSObject
{
}

+ (void)deleteUserCookie;
+ (void)saveUserCookie:(id)arg1;
+ (void)saveUserNick:(id)arg1;
+ (void)saveUserUid:(id)arg1;
+ (void)saveUserRefreshTime:(id)arg1;
+ (void)saveUserRefreshToken:(id)arg1;
+ (void)saveUserTokenExpiresIn:(id)arg1;
+ (void)saveUserToken:(id)arg1;
+ (void)userLoginOut;
+ (_Bool)checkUserLoginFlag;
+ (void)saveUserLoginFlag:(_Bool)arg1;

@end

