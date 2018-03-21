//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BaseHttpConnectionDelegate-Protocol.h"

@class BaseHttpConnection, ITTRequestResult, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol WXHttpRequestDelegate;

@interface WXHttpRequest : NSObject <BaseHttpConnectionDelegate>
{
    CDUnknownBlockType _didStartBlock;
    CDUnknownBlockType _didFinishBlock;
    CDUnknownBlockType _didFailBlock;
    CDUnknownBlockType _onProgressBlock;
    NSDictionary *_responseHeaders;
    NSData *_responseData;
    int _responseCode;
    NSRecursiveLock *_cancelLock;
    _Bool _isExecuting;
    int _retryTimes;
    NSString *_logString;
    _Bool _isAsyncCall;
    _Bool _isSuccess;
    _Bool _hasCallSuperHandleResult;
    _Bool _hasCallSuperShouldStarted;
    _Bool _isResend;
    NSError *_error;
    int _firstConnectionType;
    NSMutableArray *_requestPostData;
    NSString *_requestUrl;
    _Bool _isJsonResult;
    int _specifiedConnectionType;
    int _requestMethod;
    id <WXHttpRequestDelegate> _delegate;
    BaseHttpConnection *_connection;
    NSString *_tag;
    NSDictionary *_userInfo;
    NSDictionary *_requestParams;
    NSMutableDictionary *_requestHeaders;
    unsigned long long _timeout;
    NSData *_requestBody;
    NSDate *_requestStartTime;
    NSString *_resultString;
    NSDictionary *_resultDic;
    ITTRequestResult *_result;
}

+ (id)stringFromDictionary:(id)arg1 needURLEncoding:(_Bool)arg2;
+ (id)serializeURL:(id)arg1 params:(id)arg2 needURLEncoding:(_Bool)arg3;
+ (id)serializeURL:(id)arg1 params:(id)arg2;
+ (void)removeRequeset:(id)arg1;
+ (void)addRequest:(id)arg1;
+ (id)persistemPool;
@property(retain, nonatomic) ITTRequestResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSDictionary *resultDic; // @synthesize resultDic=_resultDic;
@property(nonatomic) _Bool isJsonResult; // @synthesize isJsonResult=_isJsonResult;
@property(retain, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) int requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) int specifiedConnectionType; // @synthesize specifiedConnectionType=_specifiedConnectionType;
@property(retain, nonatomic) BaseHttpConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <WXHttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkCallStatusForShouldStarted;
- (void)checkCallStatusForHandleResult;
- (void)generateRequestWithUrl:(id)arg1 withParameters:(id)arg2;
- (void)addData:(id)arg1 withFileName:(id)arg2 andContentType:(id)arg3 forKey:(id)arg4;
- (int)getDataLen;
- (_Bool)isResend;
- (int)getConnectionType;
- (_Bool)isFailedForHttpCode:(int)arg1;
- (int)getRequestMethod;
@property(copy, nonatomic, getter=getRequestUrl, setter=setRequestUrl:) NSString *requestUrl;
- (_Bool)isSuccess;
- (_Bool)handleResult;
- (id)getLogString;
- (id)getStaticParams;
- (_Bool)shouldResend;
- (unsigned long long)shouldStarted;
- (void)httpRequest:(id)arg1 didUpdateProgress:(id)arg2;
- (void)httpRequestFailed:(id)arg1;
- (void)httpRequestFinished:(id)arg1;
- (void)httpRequestStarted:(id)arg1;
- (void)setOnProgressBlock:(CDUnknownBlockType)arg1;
- (void)setDidFailBlock:(CDUnknownBlockType)arg1;
- (void)setDidFinishBlock:(CDUnknownBlockType)arg1;
- (void)setDidStartBlock:(CDUnknownBlockType)arg1;
- (id)getResponseData;
- (id)getResponseHeaders;
- (int)getHttpStatusCode;
- (void)addBasicAuthenticationHeaderWithUsername:(id)arg1 andPassword:(id)arg2;
- (_Bool)isSyncCall;
- (void)cancel;
- (_Bool)startWithASync:(_Bool)arg1;
- (void)startASync;
- (_Bool)startSync;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
