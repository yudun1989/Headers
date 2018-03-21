//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACAppDataManager, ACCleanAppTask, ACDownloadManager, ACLanguage, ACPreloadTask, ACRecentUseManager, ACRequestManager, ACStageDataManager, ACSyncCenter, ACZipArchiveManager;

@interface ACContext : NSObject
{
    ACDownloadManager *_downloadManager;
    ACRequestManager *_requestManager;
    ACZipArchiveManager *_zipArchiveManager;
    ACCleanAppTask *_cleanAppTask;
    ACPreloadTask *_preloadTask;
    ACAppDataManager *_appDataManager;
    ACStageDataManager *_stageDataManager;
    ACSyncCenter *_syncCenter;
    ACLanguage *_acLanguage;
    ACRecentUseManager *_recentUseManager;
}

+ (id)shareRecentUseManager;
+ (id)shareLanguage;
+ (id)shareRequestManager;
+ (id)shareStageDataManager;
+ (id)shareAppDataManager;
+ (id)sharePreloadTask;
+ (id)shareCleanAppTask;
+ (id)shareZipArchiveManager;
+ (id)shareDownloadManager;
+ (id)shareDataStorage;
+ (id)findAppManagerService;
+ (id)shareContext;
+ (_Bool)isAppLoginBindEnabled;
@property(retain, nonatomic) ACRecentUseManager *recentUseManager; // @synthesize recentUseManager=_recentUseManager;
@property(retain, nonatomic) ACLanguage *acLanguage; // @synthesize acLanguage=_acLanguage;
@property(retain, nonatomic) ACSyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(retain, nonatomic) ACStageDataManager *stageDataManager; // @synthesize stageDataManager=_stageDataManager;
@property(retain, nonatomic) ACAppDataManager *appDataManager; // @synthesize appDataManager=_appDataManager;
@property(retain, nonatomic) ACPreloadTask *preloadTask; // @synthesize preloadTask=_preloadTask;
@property(retain, nonatomic) ACCleanAppTask *cleanAppTask; // @synthesize cleanAppTask=_cleanAppTask;
@property(retain, nonatomic) ACZipArchiveManager *zipArchiveManager; // @synthesize zipArchiveManager=_zipArchiveManager;
@property(retain, nonatomic) ACRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) ACDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void).cxx_destruct;
- (id)init;

@end

