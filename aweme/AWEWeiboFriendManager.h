//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWEWeiboFriendManager : NSObject
{
}

+ (void)setExpireIn:(long long)arg1;
+ (void)setUid:(id)arg1;
+ (void)setAccessToken:(id)arg1;
+ (id)retrieveInfoForWeibo;
+ (id)retrieveAccessTokenForWeibo:(_Bool *)arg1;
+ (void)requestWeiboAccessTokenWithCompletion:(CDUnknownBlockType)arg1;
+ (void)requestBindWeiboWithCompletion:(CDUnknownBlockType)arg1;
+ (void)sendWeiboText:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendWeiboText:(id)arg1 accessToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)noticeWeiboRegistered;
+ (void)requestWeiboFriendWithType:(long long)arg1 cursor:(id)arg2 count:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestWeiboFriendWithCompletion:(CDUnknownBlockType)arg1;

@end

