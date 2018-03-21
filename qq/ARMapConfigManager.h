//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ARMapConfigModel, LYStorage, NSMutableArray, NSTimer;

@interface ARMapConfigManager : NSObject
{
    LYStorage *_storage;
    ARMapConfigModel *_configModel;
    NSMutableArray *_successBlocks;
    NSMutableArray *_failedBlocks;
    NSMutableArray *_progressBlocks;
    _Bool _isDownloading;
    NSObject *_configModelLock;
    NSObject *_unzipLock;
    NSObject *_snapShotLock;
    int _downloadFileCount;
    int _downloadFileTotalSize;
    _Bool _isWealthGodDownloading;
    _Bool _isConfigResped;
    NSMutableArray *_successWealthGodBlocks;
    NSMutableArray *_failedWealthGodBlocks;
    NSObject *_wealthGodBlockLock;
    NSTimer *_curfewBeginTimer;
    NSTimer *_curfewEndTimer;
}

+ (id)getNameFromUrl:(id)arg1 md5:(id)arg2;
+ (id)makePoiAbsoluteLinkPath:(id)arg1 md5:(id)arg2;
+ (id)makePoiRelativeLinkPath:(id)arg1 md5:(id)arg2;
+ (id)makePoiMainPath;
+ (id)makeARMapResourcePath;
+ (id)makePoiZipPath:(id)arg1;
+ (id)makePoiZipMainPath;
+ (id)makeUnzipPath:(id)arg1;
+ (id)makeARMapUnZipMainPath;
+ (id)makeUnzipTempPath:(id)arg1;
+ (id)makeARMapUnZipMainTempPath;
+ (int)resTypeToConfigType:(id)arg1;
+ (id)getCommonResOpenBoxPath;
+ (id)getCommonResCommonMusicsPath;
+ (id)getCommonResCommonImagesPath;
+ (id)getCommonResShadersPath;
+ (id)getCommonSuperStarsPath;
+ (id)makeCommonResPath;
+ (id)getTreeMainPath;
+ (id)getSkyMainPath;
+ (id)getMapUnZipPath:(id)arg1;
+ (id)getInstance;
+ (id)httpToHttpsByATS:(id)arg1;
+ (id)httpToHttps:(id)arg1;
+ (id)stringRemoveBothEndsWhitespace:(id)arg1;
+ (id)QArmapNetTypestring:(unsigned long long)arg1;
+ (_Bool)checkNetTypeSuitableForDownload:(unsigned long long)arg1;
+ (unsigned long long)tomorrowTimestamp;
+ (unsigned long long)todayTimestamp;
+ (long long)getTimeStamp:(id)arg1;
+ (int)getFileSize:(id)arg1;
+ (_Bool)copyFiles:(id)arg1 type:(int)arg2;
+ (_Bool)copyAllFiles:(id)arg1 srcPath:(id)arg2 overrideFile:(_Bool)arg3;
+ (_Bool)isAllFilesExist:(id)arg1 files:(id)arg2;
+ (id)getFileNames:(id)arg1;
+ (_Bool)shouldIgnoreFile:(id)arg1;
+ (_Bool)createDirectoryIfNeed:(id)arg1;
+ (_Bool)checkSymbolicLink:(id)arg1 md5:(id)arg2;
+ (_Bool)isSymbolicLinkValid:(id)arg1 md5:(id)arg2;
+ (_Bool)isSymbolicLink:(id)arg1;
@property _Bool isConfigResped; // @synthesize isConfigResped=_isConfigResped;
@property(retain, nonatomic) NSTimer *curfewEndTimer; // @synthesize curfewEndTimer=_curfewEndTimer;
@property(retain, nonatomic) NSTimer *curfewBeginTimer; // @synthesize curfewBeginTimer=_curfewBeginTimer;
@property(retain, nonatomic) NSObject *wealthGodBlockLock; // @synthesize wealthGodBlockLock=_wealthGodBlockLock;
@property(retain, nonatomic) NSMutableArray *failedWealthGodBlocks; // @synthesize failedWealthGodBlocks=_failedWealthGodBlocks;
@property(retain, nonatomic) NSMutableArray *successWealthGodBlocks; // @synthesize successWealthGodBlocks=_successWealthGodBlocks;
@property(nonatomic) _Bool isWealthGodDownloading; // @synthesize isWealthGodDownloading=_isWealthGodDownloading;
- (void).cxx_destruct;
- (id)getUrlByPoiTypeId:(id)arg1;
- (void)clearARMapConfig;
- (void)clearARMapResourcePath;
- (_Bool)checkSnapShotForDirectoryAndRemoveDirIfCheckFailed:(id)arg1;
- (_Bool)checkSnapShotForDirectory:(id)arg1;
- (_Bool)createSnapShotForDirectory:(id)arg1;
- (_Bool)unZipPacketByZipFilePath:(id)arg1 unZipTempPath:(id)arg2 unZipPath:(id)arg3 isDeleteZipFileAftarUnZipSuccess:(_Bool)arg4;
- (void)notifyProgressBlock:(float)arg1;
- (void)notifyFailedBlock:(int)arg1;
- (void)notifySuccessBlock;
- (void)clearAllDownloadBlocks;
- (void)downloadARMapConfigResource:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 isPreDownload:(_Bool)arg4;
- (_Bool)isUnzipMapConfigDataExist:(id)arg1;
- (_Bool)isMapConfigDataExist:(id)arg1;
- (int)getNightId:(int)arg1;
- (int)getDayId:(int)arg1;
- (_Bool)isResourceReady;
- (_Bool)checkResExists;
- (id)getMainPathByType:(int)arg1;
- (id)configModelHandleHttpToHttpsByATS:(id)arg1;
- (void)handleARMapConfigActionIfNeed;
- (void)handleARMapConfigClear;
- (void)handleARMapConfigFailed;
- (void)handleARMapConfigNotUpdate;
- (void)handleARMapConfigUpdate:(id)arg1 configVersion:(int)arg2;
- (id)createStoreKey;
- (id)getOrLoadConfigModel;
- (id)loadConfigModel;
- (id)getConfigModel;
- (void)requestLBSConfig;
- (void)dealloc;
- (void)logoutNotification;
- (void)initConfigPath;
- (id)init;
- (_Bool)isNeedShowCurfew;
- (void)postFinishCurfew;
- (void)postStartCurfew;
- (void)startCurfewTimer:(int)arg1 endInterval:(int)arg2;
- (void)stopCurfewTimer;
- (void)checkCurfewNotification;
- (id)getNextActModel;
- (_Bool)hasActToday;
- (_Bool)isWealthGodEntryOpenNow;
- (id)getWealthGodConfigModel;
- (void)clearWealthGodDownloadBlocks;
- (void)notifyWealthGodFailedBlock:(int)arg1;
- (void)notifyWealthGodSuccessBlock;
- (void)downloadWealthGodResource:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2 isPreDownload:(_Bool)arg3;
- (id)makeARMapWealthGodMainPath;
- (_Bool)isWealthGodResourceReady;
- (void)handleWealthGodConfig;

@end

