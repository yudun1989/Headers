//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XTBusinessCommonOperationHelper : NSObject
{
    NSString *_notificationKey;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)writeRemoteLoggerWithType:(int)arg1;
- (void)recvLanguageChangedNotification:(id)arg1;
- (void)recvTapLocalNotification:(id)arg1;
- (void)recvConfigServiceUpdateNotification:(id)arg1;
- (void)handleLoginSuccess:(id)arg1;
- (id)getLoginPromptConfig;
- (void)promptLoginWithLocalNotification;
- (void)setOrRemoveUserDefaultByConfigKey:(id)arg1 service:(id)arg2;
- (void)setOrRemovePreferenceByConfigKey:(id)arg1 service:(id)arg2;
- (void)refreshDefaultsConfig;
- (void)startABTestWithNotification:(id)arg1;
- (void)doWork;
- (void)dealloc;

@end

