//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXContextBindingObject.h"

@interface WXLoginBizLogic : WXContextBindingObject
{
}

+ (_Bool)isWXTokenAvailableForUserId:(id)arg1 prefix:(id)arg2;
+ (void)applicationWillEnterForeground;
+ (void)applicationDidEnterBackground;
+ (void)autoLoginForAllUser;
+ (void)cancelAllUserLogin;
+ (_Bool)hasLoginedOfUser:(id)arg1;
+ (void)deleteLoginedUserAtIndex:(int)arg1;
+ (void)deleteLoginedUser:(id)arg1;
+ (id)getLoginedUserList;
+ (id)getServerTime;
+ (void)unInitInet;
+ (id)getUserIdFromHistoryUserListByUserName:(id)arg1 prefix:(id)arg2;

@end

