//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol IHttpPostRequest, aluRPCProxy;

@interface aluRPC : NSObject
{
    _Bool _isCancelled;
    _Bool _showNetworkErrorToast;
    id <aluRPCProxy> _proxy;
    NSString *_operationType;
    id _parameters;
    Class _resultClass;
    NSDictionary *_headerDic;
    id <IHttpPostRequest> _request;
    id <IHttpPostRequest> _currentRequest;
    CDUnknownBlockType _callBack;
    NSDictionary *_httpRespHeaderFields;
}

+ (id)rpcWith:(id)arg1 param:(id)arg2 resultClass:(id)arg3 header:(id)arg4;
+ (id)rpcWith:(id)arg1 param:(id)arg2 resultClass:(id)arg3;
@property(retain, nonatomic) NSDictionary *httpRespHeaderFields; // @synthesize httpRespHeaderFields=_httpRespHeaderFields;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) id <IHttpPostRequest> currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool showNetworkErrorToast; // @synthesize showNetworkErrorToast=_showNetworkErrorToast;
@property(retain, nonatomic) id <IHttpPostRequest> request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *headerDic; // @synthesize headerDic=_headerDic;
@property(retain, nonatomic) Class resultClass; // @synthesize resultClass=_resultClass;
@property(retain, nonatomic) id parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) id <aluRPCProxy> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)triggerCallbackOnMainthread:(id)arg1 error:(id)arg2;
- (id)getAllHttpRespHeaderFields;
- (id)networkErrorToString:(id)arg1;
- (void)performRPCAsync:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)performBackgroundWithRequestBuilder:(CDUnknownBlockType)arg1 preInterceptor:(CDUnknownBlockType)arg2 callBack:(CDUnknownBlockType)arg3;
- (_Bool)isCancelled;
- (void)cancelRpc;

@end

