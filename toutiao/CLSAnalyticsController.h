//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLSAnalyticsViewControllerTrackingDelegate-Protocol.h"

@class CLSAnalyticsIdentifierGenerator, CLSAnalyticsMetadataController, CLSAnalyticsNetworkingClient, CLSAnalyticsTimestampGenerator, CLSEventLogEventFile, CLSEventLogSessionRepository, NSData, NSFileManager, NSMutableArray, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CLSAnalyticsController : NSObject <CLSAnalyticsViewControllerTrackingDelegate>
{
    NSURL *_analyticsRootDirectoryURL;
    _Bool _haveSettings;
    _Bool _settingsShouldCollectAnalytics;
    NSURL *_settingsAnalyticsURL;
    _Bool _settingsShouldTrackViewControllers;
    _Bool _settingsShouldFlushOnBackground;
    unsigned long long _settingsMaxByteSizePerFile;
    unsigned int _settingsFlushIntervalSecs;
    unsigned int _settingsMaxPendingSendFileCount;
    _Bool _settingsTrackCustomEvents;
    _Bool _settingsTrackPredefinedEvents;
    long long _settingsSamplingRate;
    NSString *_betaToken;
    NSString *_sessionIdentifier;
    unsigned long long _sessionTimestamp;
    CLSAnalyticsNetworkingClient *_networkingClient;
    NSFileManager *_fileManager;
    NSString *_currentSessionFragmentIdentifier;
    unsigned long long _currentSessionFragmentTimestamp;
    NSURL *_currentSessionFragmentDirectoryURL;
    _Bool _performSessionMaintenanceAfterSettingsArrive;
    CLSEventLogSessionRepository *_logSessionRepository;
    CLSAnalyticsMetadataController *_metadataController;
    CLSAnalyticsIdentifierGenerator *_identifierGenerator;
    CLSAnalyticsTimestampGenerator *_timestampGenerator;
    NSMutableArray *_sessionFragmentsToTransmit;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionMaintenanceQueue;
    NSObject<OS_dispatch_source> *_sessionFragmentMaintenanceTimerSource;
    NSObject<OS_dispatch_queue> *_priorityEventLoggingQueues[3];
    NSURL *_priorityCurrentFragmentEventFileURLs[3];
    CLSEventLogEventFile *_priorityCurrentFragmentEventFiles[3];
    _Bool _loggedAnalyticsEnabled;
    NSString *_lastSessionIdentifier;
    unsigned long long _lastSessionTimestamp;
    NSData *_lastSessionMetadata;
}

+ (id)mutableSortedFileURLsGroupedByPrioritiesFromLogFileURLs:(id)arg1;
+ (_Bool)deviceMeetsMinimumRequirements;
+ (_Bool)supported;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionMaintenanceQueue; // @synthesize sessionMaintenanceQueue=_sessionMaintenanceQueue;
- (void)handleSubmissionRequestCompletion:(id)arg1 withRestart:(_Bool)arg2 forSessionFragmentDirectory:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)maintainSessionFragments:(CDUnknownBlockType)arg1;
- (void)maintainSessionFragmentsIgnoringError;
- (void)cleanUpRepository:(CDUnknownBlockType)arg1;
- (void)pruneSessionFragmentLogFiles:(CDUnknownBlockType)arg1;
- (id)nonCurrentLogFileURLsForAllStates:(id *)arg1;
- (void)scheduleSessionMaintenance;
- (unsigned long long)initialMaintenanceTimeWithFlushInterval:(double)arg1;
- (void)cancelSessionMaintenance;
- (void)saveLastMaintenanceDate:(id)arg1;
- (id)lastMaintenanceDate;
- (void)transmitPackagedSessionFragments:(CDUnknownBlockType)arg1;
- (void)transmitNextPackagedSessionFragment:(CDUnknownBlockType)arg1;
- (void)transmitLogsForSessionFragmentDirectory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)packageClosedSessionFragments:(CDUnknownBlockType)arg1;
- (_Bool)runPackageClosedSessionFragments:(id *)arg1;
- (_Bool)packageLogsFromActiveSessionFragmentDirectoryURL:(id)arg1 intoPackagedSessionFragmentDirectoryURL:(id)arg2 error:(id *)arg3;
- (_Bool)isOpenSessionFragmentDirectoryURL:(id)arg1;
- (_Bool)purgePackagedPrepSessionFragmentDirectories;
- (id)sessionFragmentDirectoryURLsForStateName:(id)arg1 error:(id *)arg2;
- (void)openNewSessionFragment:(CDUnknownBlockType)arg1;
- (_Bool)runOpenNewSessionFragment:(id *)arg1;
- (void)viewControllerTrackingController:(id)arg1 didDetectDisappearanceOfViewController:(id)arg2;
- (void)viewControllerTrackingController:(id)arg1 didDetectAppearanceOfViewController:(id)arg2;
- (void)logPreviousSessionCrashedOnDate:(id)arg1;
- (void)logAppLaunched;
- (void)logAppInstalled;
- (_Bool)prepareNewSessionFragmentWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 error:(id *)arg3;
- (id)createEventFileURLForPriority:(unsigned long long)arg1 error:(id *)arg2;
- (void)logEvent:(id)arg1;
- (_Bool)ensureLogFileExistsForPriority:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)handlePriorityTriggeredMaintainSessionFragmentForEvent:(id)arg1;
- (_Bool)handleSizeTriggeredMaintainSessionFragmentForLogFile:(id)arg1;
- (void)logCustomEvent:(id)arg1;
- (void)logPredefinedEvent:(id)arg1;
- (void)logAnswersEvent:(id)arg1;
- (void)applicationLifecycleEvent:(id)arg1;
- (void)dispatchToQueue:(id)arg1 asynchronous:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)handleDisabledFeatureSwitch;
- (void)saveCurrentSessionInformation;
- (void)readLastSessionInformation;
- (void)saveShouldStartTrackingViewControllers:(_Bool)arg1;
- (_Bool)readShouldStartTrackingViewControllers;
@property(readonly, nonatomic) _Bool predefinedEventsFeatureSwitchEnabled;
@property(readonly, nonatomic) _Bool customEventsFeatureSwitchEnabled;
- (id)metadataJSONData;
- (id)metadataController;
- (_Bool)analyticsFeatureSwitchEnabled;
- (id)fabricInstallId;
- (id)fabricAPIKey;
- (_Bool)fabricIsFirstInstall;
- (id)fabricSettings;
- (void)setSettings:(id)arg1;
- (void)fabricSettingsDownloaded:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 sessionTimestamp:(unsigned long long)arg2 analyticsRootDirectoryWithURL:(id)arg3 betaToken:(id)arg4 identifierGenerator:(id)arg5 timestampGenerator:(id)arg6 metadataController:(id)arg7 networkingClient:(id)arg8;
- (id)initWithSessionIdentifier:(id)arg1 analyticsRootDirectoryWithURL:(id)arg2 betaToken:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

