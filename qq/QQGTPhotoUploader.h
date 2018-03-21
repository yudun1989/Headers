//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>

@class NSDictionary, NSFileHandle, NSString, NSThread, NSTimer, NSURLConnection, QQAsset, QQGTFileInfo, QQPhotoUploadRequestCreater, UIImage;
@protocol QQGTPhotoUploaderDelegate;

@interface QQGTPhotoUploader : NSObject <NSURLConnectionDataDelegate>
{
    QQAsset *_asset;
    NSString *_assetIdentifier;
    id <QQGTPhotoUploaderDelegate> _theDelegate;
    int _uploadError;
    NSString *_filePath;
    UIImage *_image;
    UIImage *_thumb;
    long long _fileTag;
    double _process;
    NSDictionary *_resultInfo;
    int _uploadState;
    QQGTFileInfo *_filePhotoInfo;
    QQPhotoUploadRequestCreater *_requestCreater;
    NSString *_fileKey;
    int _xo;
    NSFileHandle *_fileHandle;
    NSTimer *_httpPostTimer;
    NSURLConnection *_connection;
    int _uPostCount;
    _Bool _isTaskFinished;
    unsigned long long _fileSize;
    NSThread *_httpThread;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)doPost;
- (_Bool)startUpLoad;
- (_Bool)isTaskUploadSuccess;
- (_Bool)isTaskFinishUpload;
- (_Bool)isTaskUploading;
- (_Bool)canStartUpload;
- (void)doRunloop;
- (void)uploadFile;
- (_Bool)isCanRetry;
- (void)cancelUpLoadWithError:(int)arg1;
- (void)cancelHttpConnection;
- (void)cancelRetryHttpPost;
- (void)retryHttpPost;
- (void)stop;
- (void)onErrorFinish:(int)arg1;
- (void)httpPostTimeOut;
- (void)startHttpPostTimer;
- (void)stopHttpPostTimer;
@property(retain, nonatomic) UIImage *thumb; // @dynamic thumb;
@property(retain, nonatomic) NSString *assetIdentifier; // @dynamic assetIdentifier;
@property(nonatomic) long long fileTag; // @dynamic fileTag;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 withThread:(id)arg2;

// Remaining properties
@property(retain, nonatomic) QQAsset *asset; // @dynamic asset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(retain, nonatomic) QQGTFileInfo *filePhotoInfo; // @dynamic filePhotoInfo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) double process; // @dynamic process;
@property(retain, nonatomic) QQPhotoUploadRequestCreater *requestCreater; // @dynamic requestCreater;
@property(retain, nonatomic) NSDictionary *resultInfo; // @dynamic resultInfo;
@property(readonly) Class superclass;
@property(nonatomic) id <QQGTPhotoUploaderDelegate> theDelegate; // @dynamic theDelegate;
@property(nonatomic) int uploadError; // @dynamic uploadError;
@property(nonatomic) int uploadState; // @dynamic uploadState;

@end

