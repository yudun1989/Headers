//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GInsightSDKDelegate;

@interface GInsightSDK : NSObject
{
    id <GInsightSDKDelegate> _myDelegate;
}

+ (id)version;
+ (void)startSDKWithAppId:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <GInsightSDKDelegate> myDelegate; // @synthesize myDelegate=_myDelegate;
- (void).cxx_destruct;
- (void)handleBindingUserError:(id)arg1;
- (void)handleBindingUser:(id)arg1;
- (void)applicationWillEnterForegroundNotification;
- (void)unRegisterApplicationNotifycation;
- (void)registerApplicationNotifycation;
- (void)dealloc;

@end
