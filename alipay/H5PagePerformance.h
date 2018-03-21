//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBContentViewPageProfile.h"

@class H5PageHAR, H5PerformanceTiming, NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSString;

@interface H5PagePerformance : NBContentViewPageProfile
{
    _Bool _isReport;
    _Bool _isWK;
    _Bool _loadWithSPDY;
    _Bool _isSPDYError;
    _Bool _canReportProfile;
    _Bool _isWaitForStopLoading;
    _Bool _isWaitForStopLoadingWithLoc;
    int _instanceId;
    int _loadingReqs;
    int _loadingReqsWithLoc;
    int _jsApiNum;
    NSString *_ipAddress;
    double _startTime;
    double _stopLoadingTime;
    double _stopLoadingTimeWithLoc;
    H5PerformanceTiming *_performanceTiming;
    NSDictionary *_generateFirst;
    NSString *_jsApiNames;
    NSString *_xContentVersion;
    NSMutableDictionary *_extraDict;
    H5PageHAR *_h5PageHAR;
    unsigned long long _srcClick;
    NSDate *_firstAsyncStartDate;
    double _waitForStopTime;
    double _waitForStopTimeWithLoc;
    NSString *_errorType;
    NSString *_errorDomain;
    NSString *_errorCode;
    NSString *_errorExtra;
    NSString *_errorTrigger;
    NSMutableString *_jsErrorsDetail;
}

+ (id)p_calc_getMCC_MNC;
@property(retain, nonatomic) NSMutableString *jsErrorsDetail; // @synthesize jsErrorsDetail=_jsErrorsDetail;
@property(copy, nonatomic) NSString *errorTrigger; // @synthesize errorTrigger=_errorTrigger;
@property(copy, nonatomic) NSString *errorExtra; // @synthesize errorExtra=_errorExtra;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
@property(nonatomic) double waitForStopTimeWithLoc; // @synthesize waitForStopTimeWithLoc=_waitForStopTimeWithLoc;
@property(nonatomic) double waitForStopTime; // @synthesize waitForStopTime=_waitForStopTime;
@property(nonatomic) _Bool isWaitForStopLoadingWithLoc; // @synthesize isWaitForStopLoadingWithLoc=_isWaitForStopLoadingWithLoc;
@property(nonatomic) _Bool isWaitForStopLoading; // @synthesize isWaitForStopLoading=_isWaitForStopLoading;
@property(retain, nonatomic) NSDate *firstAsyncStartDate; // @synthesize firstAsyncStartDate=_firstAsyncStartDate;
@property(nonatomic) _Bool canReportProfile; // @synthesize canReportProfile=_canReportProfile;
@property(nonatomic) _Bool isSPDYError; // @synthesize isSPDYError=_isSPDYError;
@property(nonatomic) unsigned long long srcClick; // @synthesize srcClick=_srcClick;
@property(retain, nonatomic) H5PageHAR *h5PageHAR; // @synthesize h5PageHAR=_h5PageHAR;
@property(retain, nonatomic) NSMutableDictionary *extraDict; // @synthesize extraDict=_extraDict;
@property(copy, nonatomic) NSString *xContentVersion; // @synthesize xContentVersion=_xContentVersion;
@property(nonatomic) _Bool loadWithSPDY; // @synthesize loadWithSPDY=_loadWithSPDY;
@property(copy, nonatomic) NSString *jsApiNames; // @synthesize jsApiNames=_jsApiNames;
@property(nonatomic) int jsApiNum; // @synthesize jsApiNum=_jsApiNum;
@property(copy, nonatomic) NSDictionary *generateFirst; // @synthesize generateFirst=_generateFirst;
@property(nonatomic) int loadingReqsWithLoc; // @synthesize loadingReqsWithLoc=_loadingReqsWithLoc;
@property(nonatomic) int loadingReqs; // @synthesize loadingReqs=_loadingReqs;
@property(nonatomic) _Bool isWK; // @synthesize isWK=_isWK;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(retain, nonatomic) H5PerformanceTiming *performanceTiming; // @synthesize performanceTiming=_performanceTiming;
@property(nonatomic) double stopLoadingTimeWithLoc; // @synthesize stopLoadingTimeWithLoc=_stopLoadingTimeWithLoc;
@property(nonatomic) double stopLoadingTime; // @synthesize stopLoadingTime=_stopLoadingTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(nonatomic) int instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
- (id)p_calc_charset;
- (id)p_calc_contentType;
- (id)p_abnormal_param4;
- (id)p_performance_param4;
- (id)p_performance_param4__abnormal_param1;
- (id)p_abnormal_param1_distinct;
- (id)p_performance_param4__abnormal_param4;
- (id)p_performance_params;
- (id)p_abnormal_params;
- (void)printLog;
- (void)reportLoadWithXContentVersion:(id)arg1;
- (void)reportLoadWithSPDY;
- (void)reportDidFinishedLoadDate:(id)arg1;
- (void)reportRenderTime:(id)arg1;
- (void)reportCreateDate:(id)arg1;
- (void)reportJSReport:(id)arg1;
- (void)reportJSMonitor:(id)arg1;
- (void)stopWaitForStopLoadingWithLoc;
- (void)stopWaitForStopLoading;
- (void)reportLocStart;
- (void)reportReqStart;
- (void)stopLoadingWithLoc;
- (void)stopLoading;
- (void)waitForStopLoadingWithLoc;
- (void)waitForStopLoading;
- (void)reportLocEnd;
- (void)reportReqEnd;
- (void)recordSyncAjax;
- (void)recordOnlineImage;
- (void)recordJSErrorsDetail;
- (void)willReportPerformance;
- (void)reportPageHAR2TempPool;
- (void)reportPageAbnormal;
- (void)reportPageAbnormalWithErrorType:(id)arg1 withError:(id)arg2;
- (void)reportPageAbnormalWithErrorType:(id)arg1 andErrorCode:(id)arg2;
- (void)reportPerformance;
- (void)mergeProfile:(id)arg1;
- (id)getH5PageHAR;
- (id)init;

@end

