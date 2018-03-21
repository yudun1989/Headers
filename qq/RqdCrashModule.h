//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RqdLocalStrategy;
@protocol RqdCrashReporterDelegate;

@interface RqdCrashModule : NSObject
{
    _Bool userEnabled;
    RqdLocalStrategy *localStrategy;
    _Bool hasLocalDB;
    _Bool hasSyncServer;
    id delegate;
}

+ (id)sharedInstance;
@property id <RqdCrashReporterDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool hasSyncServer; // @synthesize hasSyncServer;
@property(nonatomic) _Bool hasLocalDB; // @synthesize hasLocalDB;
@property(retain) RqdLocalStrategy *localStrategy; // @synthesize localStrategy;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled;
- (id)strategyUrl:(unsigned long long)arg1;
- (id)localUrl;
- (id)targetURL:(unsigned long long)arg1;
- (void)checkAndUploadUserInfo;
- (id)creatSummaryInfo:(int)arg1 withTime:(long long)arg2;
- (void)insertUserChangeSm;
- (void)insertDailySummaryInfo;
- (void)closeDailySummaryInfodTimer;
- (void)initDailySummaryInfoTimer;
- (_Bool)processStrategy:(id)arg1;
- (_Bool)fetchCrashStrategyFormDB;
- (void)appRQDEnterBack;
- (void)appRQDResumed;
- (void)appRQDStarted;
- (void)initCrashProperties;
- (void)appEnterBackground;
- (void)appResumed;
- (void)unregistObserver;
- (void)registObserver;
- (void)enableModule;
- (void)disableModule;
- (_Bool)checkAndEnable;
- (void)dealloc;
- (id)init;

@end

