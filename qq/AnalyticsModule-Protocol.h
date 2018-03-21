//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BeaconModuleStrategy, NSArray;

@protocol AnalyticsModule
- (_Bool)isEnabled;
- (int)moduleKey;

@optional
- (NSArray *)getModuleUploadPersistTypes;
- (BeaconModuleStrategy *)moduleStrategy;
- (void)setModuleStrategy:(BeaconModuleStrategy *)arg1;
- (_Bool)uploadModuleHistoryData;
- (_Bool)executeFunction;
- (_Bool)checkAndEnable;
- (void)appEnterBack;
- (void)appResumed;
- (void)appStarted;
@end

