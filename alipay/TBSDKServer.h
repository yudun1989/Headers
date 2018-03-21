//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKRequestDelegate-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, TBSDKRequest, TBSDKRequestDataSource;
@protocol TBSDKErrorHandleDelegate, TBSDKErrorRule, TBSDKNetworkProgressProtocol, TBSDKServerDelegate;

@interface TBSDKServer : NSObject <TBSDKRequestDelegate>
{
    _Bool _usePost;
    _Bool _useHTTPS;
    _Bool _autoLogin;
    _Bool _useHTTPCache;
    _Bool _isFromCache;
    _Bool _isCacheExpired;
    _Bool _forceRefresh;
    TBSDKRequest *_tbsdkRequest;
    TBSDKRequestDataSource *_tbsdkRequestDataSource;
    NSString *_apiMethod;
    id <TBSDKServerDelegate> _delegate;
    id _context;
    id <TBSDKErrorHandleDelegate> _errorHandle;
    id <TBSDKErrorRule> _tbsdkError;
    SEL _requestDidStartSelector;
    SEL _requestDidFinishSelector;
    SEL _requestDidFailedSelector;
    SEL _requestReciveResponseHeaders;
    CDUnknownBlockType _onStartBlock;
    CDUnknownBlockType _onFinishedBlock;
    CDUnknownBlockType _onFailBlock;
    CDUnknownBlockType _reciveResponseHeadersBlock;
    CDUnknownBlockType _didLoadCache;
    CDUnknownBlockType _requestCache;
    NSMutableDictionary *_params;
    id _responseJSON;
    NSData *_responseData;
    NSString *_responseString;
    unsigned long long _responseEncoding;
    NSDictionary *_requestHeaders;
    NSDictionary *_responseHeaders;
    NSString *_mainURLForRequest;
    NSString *_apiVersion;
    double _timeOutSeconds;
    NSDictionary *_userInfo;
    long long _tag;
    double _cacheTimeout;
    NSString *_cacheKey;
    id <TBSDKNetworkProgressProtocol> _networkProgressDelegate;
    id __json;
}

@property(retain, nonatomic) id _json; // @synthesize _json=__json;
@property(nonatomic) __weak id <TBSDKNetworkProgressProtocol> networkProgressDelegate; // @synthesize networkProgressDelegate=_networkProgressDelegate;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) _Bool isCacheExpired; // @synthesize isCacheExpired=_isCacheExpired;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(nonatomic) double cacheTimeout; // @synthesize cacheTimeout=_cacheTimeout;
@property(nonatomic) _Bool useHTTPCache; // @synthesize useHTTPCache=_useHTTPCache;
@property(nonatomic) _Bool autoLogin; // @synthesize autoLogin=_autoLogin;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(nonatomic) _Bool useHTTPS; // @synthesize useHTTPS=_useHTTPS;
@property(nonatomic) _Bool usePost; // @synthesize usePost=_usePost;
@property(readonly, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *mainURLForRequest; // @synthesize mainURLForRequest=_mainURLForRequest;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(nonatomic) unsigned long long responseEncoding; // @synthesize responseEncoding=_responseEncoding;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) id responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType requestCache; // @synthesize requestCache=_requestCache;
@property(copy, nonatomic) CDUnknownBlockType didLoadCache; // @synthesize didLoadCache=_didLoadCache;
@property(copy, nonatomic) CDUnknownBlockType reciveResponseHeadersBlock; // @synthesize reciveResponseHeadersBlock=_reciveResponseHeadersBlock;
@property(copy, nonatomic) CDUnknownBlockType onFailBlock; // @synthesize onFailBlock=_onFailBlock;
@property(copy, nonatomic) CDUnknownBlockType onFinishedBlock; // @synthesize onFinishedBlock=_onFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType onStartBlock; // @synthesize onStartBlock=_onStartBlock;
@property(nonatomic) SEL requestReciveResponseHeaders; // @synthesize requestReciveResponseHeaders=_requestReciveResponseHeaders;
@property(nonatomic) SEL requestDidFailedSelector; // @synthesize requestDidFailedSelector=_requestDidFailedSelector;
@property(nonatomic) SEL requestDidFinishSelector; // @synthesize requestDidFinishSelector=_requestDidFinishSelector;
@property(nonatomic) SEL requestDidStartSelector; // @synthesize requestDidStartSelector=_requestDidStartSelector;
@property(retain, nonatomic) id <TBSDKErrorRule> tbsdkError; // @synthesize tbsdkError=_tbsdkError;
@property(nonatomic) __weak id <TBSDKErrorHandleDelegate> errorHandle; // @synthesize errorHandle=_errorHandle;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <TBSDKServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(retain, nonatomic) TBSDKRequestDataSource *tbsdkRequestDataSource; // @synthesize tbsdkRequestDataSource=_tbsdkRequestDataSource;
- (void).cxx_destruct;
- (void)endParseJson;
- (void)beginParseJson;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)setProgress:(float)arg1;
- (void)cacheResponseString;
- (id)getResponseStringFromCacheByCacheKey:(id)arg1 timeout:(double)arg2;
- (void)clearData;
- (void)setApiMethod:(id)arg1;
- (void)performDelegatFailSelector;
- (void)performReciveResponseHeaders:(id)arg1;
- (void)performDelegatSuccessSelector;
- (void)performDelegatStartSelector;
@property(retain, nonatomic) TBSDKRequest *tbsdkRequest; // @synthesize tbsdkRequest=_tbsdkRequest;
- (void)clearDelegatesAndCancel;
- (void)startAsynchronousByCacheKey:(id)arg1 cacheTimeout:(double)arg2;
- (void)startSynchronousByCacheKey:(id)arg1 cacheTimeout:(double)arg2;
- (void)startAsynchronous;
- (void)startSynchronous;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

