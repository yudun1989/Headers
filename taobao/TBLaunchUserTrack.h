//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, NSTimer;

@interface TBLaunchUserTrack : NSObject
{
    _Bool _shouldCompleteClean;
    _Bool _haveViewAppeared;
    _Bool _recordFinished;
    _Bool _isObservingNotifcation;
    NSDateFormatter *_dateFormatter;
    NSTimer *_watchDogTimer;
    NSString *_launchBeginKey;
    NSString *_launchCrashFlagFilePath;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *launchCrashFlagFilePath; // @synthesize launchCrashFlagFilePath=_launchCrashFlagFilePath;
@property(retain, nonatomic) NSString *launchBeginKey; // @synthesize launchBeginKey=_launchBeginKey;
@property(retain, nonatomic) NSTimer *watchDogTimer; // @synthesize watchDogTimer=_watchDogTimer;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool isObservingNotifcation; // @synthesize isObservingNotifcation=_isObservingNotifcation;
@property(nonatomic) _Bool recordFinished; // @synthesize recordFinished=_recordFinished;
@property(nonatomic) _Bool haveViewAppeared; // @synthesize haveViewAppeared=_haveViewAppeared;
@property(nonatomic) _Bool shouldCompleteClean; // @synthesize shouldCompleteClean=_shouldCompleteClean;
- (void).cxx_destruct;
- (_Bool)synchronizeSafeModeFlagPlist:(id)arg1;
- (id)safeModeFlagPlist;
- (_Bool)isEnterSafeModeForLaunch;
- (void)postLaunchFail:(unsigned long long)arg1;
- (void)stopWatchDog;
- (void)appResignActive:(id)arg1;
- (void)watchDogFired:(id)arg1;
- (void)homePageDidAppear:(id)arg1;
- (void)clearCurrentRecord;
- (void)setHaveUserActioned;
- (void)beginLaunch;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

@end

