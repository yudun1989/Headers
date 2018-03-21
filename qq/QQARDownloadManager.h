//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQARConfigModel, QQARDownloadTool;
@protocol ARDownloadTaskDelegate;

@interface QQARDownloadManager : NSObject
{
    QQARDownloadTool *_mDownloadTool;
    QQARDownloadTool *_mDownloadToolCloud;
    double _downloadPercent;
    double _downloadPercentCloud;
    _Bool _isDownloading;
    _Bool _isDownloadingCloud;
    id <ARDownloadTaskDelegate> _delegate;
    QQARConfigModel *_downloadingConfigModel;
    QQARConfigModel *_downloadingConfigModelCloud;
}

+ (id)getArMediaCatchDir;
+ (id)getFeatureDir:(id)arg1;
+ (id)getARResourceDir:(id)arg1;
+ (id)getARCardResRootPath;
+ (id)getZipPathByARCardResModel:(id)arg1;
+ (id)getARVideoFilePathByFeatureModel:(id)arg1 md5:(id)arg2;
+ (id)getZipPathBy3DResModel:(id)arg1;
+ (id)getResourcePath:(id)arg1 md5:(id)arg2;
+ (id)get3DResourceUnzipDirByFeatureModel:(id)arg1 isOld:(_Bool)arg2;
+ (id)get3DResourceUnzipDir:(id)arg1 isOld:(_Bool)arg2;
+ (id)getARCardResourceUnzipDir:(id)arg1;
+ (id)getPathByFeatureModel:(id)arg1;
+ (id)getBusinessBanner:(id)arg1;
+ (id)getBusinessLogo:(id)arg1;
+ (_Bool)isUnZipFilesInvalid:(id)arg1 unzipDir:(id)arg2;
+ (_Bool)isNeadDownloadARResources:(id)arg1;
+ (id)getInstance;
@property(retain, nonatomic) QQARDownloadTool *mDownloadToolCloud; // @synthesize mDownloadToolCloud=_mDownloadToolCloud;
@property(retain, nonatomic) QQARDownloadTool *mDownloadTool; // @synthesize mDownloadTool=_mDownloadTool;
@property(nonatomic) _Bool isDownloadingCloud; // @synthesize isDownloadingCloud=_isDownloadingCloud;
@property(retain, nonatomic) QQARConfigModel *downloadingConfigModelCloud; // @synthesize downloadingConfigModelCloud=_downloadingConfigModelCloud;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) QQARConfigModel *downloadingConfigModel; // @synthesize downloadingConfigModel=_downloadingConfigModel;
@property(nonatomic) __weak id <ARDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportArCloudDownloadAllTask:(_Bool)arg1;
- (void)revertReportModel:(id)arg1;
- (_Bool)isNeedDownload3DRes:(id)arg1;
- (_Bool)isNeedUnzip3DRes:(id)arg1;
- (void)unzipExistFile:(id)arg1;
- (id)getNotiResultDict:(id)arg1 downloadUrl:(id)arg2;
- (id)getNotiProgressDict:(id)arg1 downloadUrl:(id)arg2 percentage:(double)arg3 hasDownloadSize:(float)arg4 totalSize:(float)arg5;
- (void)reportArSingleFileDownloadSuccessRateCloud:(id)arg1 success:(_Bool)arg2 failedCode:(long long)arg3;
- (void)initDownloadNotificationCallBack;
- (void)postDownloadingProgressNotification:(id)arg1;
- (void)postDownloadingFailNotification:(id)arg1 error:(id)arg2 isCloud:(_Bool)arg3;
- (void)postDownloadingFailNotificationWithErrorCode:(id)arg1 errorCode:(long long)arg2 isCloud:(_Bool)arg3;
- (void)downloadARResourceFile:(id)arg1;
- (void)downLoadARResources:(id)arg1 needDownloadFeatureRes:(_Bool *)arg2 needDownload3DRes:(_Bool *)arg3 needDownloadVideoRes:(_Bool *)arg4 needUnzip3DRes:(_Bool *)arg5 isOnLogin:(_Bool)arg6;
- (id)getDownloadTask:(id)arg1 baseModel:(id)arg2 isNeedDownload:(_Bool)arg3;
- (void)clearDownloadData:(id)arg1;
- (void)downLoadAllResources:(id)arg1 success:(CDUnknownBlockType)arg2 featureSuccess:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4 forceDownload:(_Bool)arg5;
- (void)stopDownload:(_Bool)arg1;
- (_Bool)isNeedDownloadVideoRes:(id)arg1;
- (_Bool)isNeedDownloadFeatureRes:(id)arg1;
- (_Bool)downloadArResourceOnScaning:(id)arg1;
- (_Bool)needDownloadArResource:(id)arg1;
- (void)downLoadAllResourcesOnLogin:(id)arg1;
- (_Bool)unzipFile:(id)arg1 toFolder:(id)arg2 fileInfoDic:(id)arg3;
- (id)init;
- (void)dealloc;

@end

