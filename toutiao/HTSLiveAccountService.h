//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HTSLiveAccountService : NSObject
{
}

+ (id)sharedInstance;
- (id)currentLoginUser;
- (void)needLogin:(id)arg1 completionBlock:(id)arg2;
- (void)needLogin:(id)arg1;
- (_Bool)isLogin;
- (void)registerLogoutResultListener;
- (void)registerLoginResultListener;
- (id)init;

@end

