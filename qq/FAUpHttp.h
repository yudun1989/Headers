//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLSessionDataDelegate-Protocol.h>

@class FATaskInfoUpload, NSDate, NSMutableArray, NSMutableData, NSOperationQueue, NSString, NSTimerNonRetain, NSURLSession, NSURLSessionTask;
@protocol FAUpHttpDelegate;

@interface FAUpHttp : NSObject <NSURLSessionDataDelegate>
{
    id <FAUpHttpDelegate> _delegate;
    NSString *_tmpfileName;
    NSString *_curURL;
    NSMutableArray *_arURL;
    FATaskInfoUpload *_fileInfo;
    _Bool _isInvalidUrl;
    unsigned long long _uploadBytePos;
    _Bool _isFinishInATick;
    int _alltryCount;
    int _tryCount;
    NSTimerNonRetain *_httpPostTimer;
    _Bool _bStop;
    int _ftnRetCode;
    int _httpStatusCode;
    NSMutableData *_responseData;
    unsigned long long _localFileSize;
    unsigned long long _realTransSize;
    float _reportProgress;
    NSDate *_lastNotifyTime;
    double _taskStartTime;
    int _logId;
    int _lastFailCode;
    NSString *_lastErrorDisc;
    _Bool _isWriteDataFail;
    NSString *_dataReportId;
    NSString *_dataReportDetailId;
    NSString *_requestLog;
    NSString *_logModuleName;
    int _timeOutInterval;
    unsigned int _uRangeZeroCount;
    unsigned long long _uploadedDataLen;
    unsigned long long _rangeLen;
    int _nextUrlRetryFlag;
    unsigned long long _httpBodyPrivateBodyLen;
    unsigned long long _rollBackOffset;
    NSOperationQueue *_transferQueue;
    int _xo;
    NSURLSession *_urlSession;
    NSURLSessionTask *_urlTask;
}

@property(retain, nonatomic) NSURLSessionTask *urlTask; // @synthesize urlTask=_urlTask;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)dealloc;
- (void)dataReport:(_Bool)arg1 failCode:(int)arg2 errorDisc:(id)arg3 reportcollect:(_Bool)arg4 reportDetail:(_Bool)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getHttpDataReportInfo:(unsigned long long *)arg1 elapseTime:(double *)arg2 httpRetryCount:(int *)arg3 urlRetryCount:(int *)arg4;
- (void)stopHttpPostTimer;
- (void)onDelayStartTimeOut;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)tryNextURL;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)notifyProgress:(unsigned long long)arg1 isForce:(_Bool)arg2;
- (void)handleFTNReturnCode:(int)arg1 errMsg:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getErrMsg:(int)arg1 httpHeaders:(id)arg2;
- (_Bool)hasFTNUserReturnCode:(id)arg1;
- (void)onComplete:(_Bool)arg1;
- (void)onComplete_MainThread:(id)arg1;
- (void)confirmFail;
- (void)notifyUISpaceNotEnough;
- (void)notifyUIComplete:(_Bool)arg1;
- (id)createURLRequest:(unsigned long long)arg1;
- (void)ThreadHttpPost:(_Bool)arg1;
- (void)delayStartHttpPost;
- (id)reMakeUploadUrl:(id)arg1 fileDataSize:(unsigned long long)arg2;
- (id)generatePostBody:(unsigned long long)arg1;
- (_Bool)isCanRetry;
- (void)ThreadStop;
- (void)stop;
- (void)cancel;
- (void)ThreadHttpPostStart;
- (void)startUp:(id)arg1 delegate:(id)arg2;
- (id)init:(int)arg1 delegate:(id)arg2 reportId:(id)arg3 reportDetailId:(id)arg4;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *arURL; // @dynamic arURL;
@property(retain, nonatomic) NSString *curURL; // @dynamic curURL;
@property(copy, nonatomic) NSString *dataReportDetailId; // @dynamic dataReportDetailId;
@property(copy, nonatomic) NSString *dataReportId; // @dynamic dataReportId;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FAUpHttpDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FATaskInfoUpload *fileInfo; // @dynamic fileInfo;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long httpBodyPrivateBodyLen; // @dynamic httpBodyPrivateBodyLen;
@property(retain, nonatomic) NSTimerNonRetain *httpPostTimer; // @dynamic httpPostTimer;
@property(retain, nonatomic) NSString *lastErrorDisc; // @dynamic lastErrorDisc;
@property(retain, nonatomic) NSDate *lastNotifyTime; // @dynamic lastNotifyTime;
@property(copy, nonatomic) NSString *logModuleName; // @dynamic logModuleName;
@property(nonatomic) float reportProgress; // @dynamic reportProgress;
@property(retain, nonatomic) NSString *requestLog; // @dynamic requestLog;
@property(retain, nonatomic) NSMutableData *responseData; // @dynamic responseData;
@property(readonly) Class superclass;
@property(nonatomic) int tryCount; // @dynamic tryCount;
@property(nonatomic) unsigned long long uploadBytePos; // @dynamic uploadBytePos;

@end

