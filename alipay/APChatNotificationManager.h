//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APChatResponse, NSDictionary;

@interface APChatNotificationManager : NSObject
{
    NSDictionary *_sessionInfo;
    APChatResponse *_response;
}

+ (void)postSnapChatScreenshotNotification:(id)arg1;
+ (id)shareManager;
@property(retain, nonatomic) APChatResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSDictionary *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void).cxx_destruct;
- (void)destroySnapChatMessage:(id)arg1;
- (void)sendSnapChatScreenShotMessage:(id)arg1;
- (void)userTakenScreenshot:(id)arg1;
- (void)removeScreenshotNotification;
- (void)registerScreenshotNotification;
- (id)init;
- (void)dealloc;

@end

