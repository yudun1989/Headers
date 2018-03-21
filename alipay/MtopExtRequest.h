//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TBSDKRequest, UTDataSet;
@protocol MtopExtRequestDelegate;

@interface MtopExtRequest : NSObject
{
    _Bool isFromOfflineOperation;
    _Bool isForceHttps;
    _Bool isForceSpdy;
    _Bool _isSync;
    _Bool _isNeedEcode;
    _Bool _isEnableWUA;
    _Bool _isCanceled;
    BOOL _retryCount;
    _Bool _isNeedValidateResponse;
    _Bool _isNotUseMainThreadCallback;
    int sessionExpiredOption;
    int cachePolicy;
    float _xCoordinate;
    float _yCoordinate;
    int _serverType;
    NSMutableArray *excludedCacheKeyParameters;
    TBSDKRequest *mrequest;
    id <MtopExtRequestDelegate> delegate;
    NSString *ttid;
    NSString *_wuaPageName;
    NSString *_wuaCtrlName;
    NSString *_customHost;
    CDUnknownBlockType _startedBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _succeedBlock;
    id _context;
    UTDataSet *_mtopUT;
    NSString *_request_id;
}

@property(retain, nonatomic) NSString *request_id; // @synthesize request_id=_request_id;
@property(nonatomic) _Bool isNotUseMainThreadCallback; // @synthesize isNotUseMainThreadCallback=_isNotUseMainThreadCallback;
@property(nonatomic) _Bool isNeedValidateResponse; // @synthesize isNeedValidateResponse=_isNeedValidateResponse;
@property(nonatomic) int serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) UTDataSet *mtopUT; // @synthesize mtopUT=_mtopUT;
@property(nonatomic) BOOL retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(copy) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
@property(copy) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy) CDUnknownBlockType startedBlock; // @synthesize startedBlock=_startedBlock;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(nonatomic) float yCoordinate; // @synthesize yCoordinate=_yCoordinate;
@property(nonatomic) float xCoordinate; // @synthesize xCoordinate=_xCoordinate;
@property(retain, nonatomic) NSString *wuaCtrlName; // @synthesize wuaCtrlName=_wuaCtrlName;
@property(retain, nonatomic) NSString *wuaPageName; // @synthesize wuaPageName=_wuaPageName;
@property(nonatomic) _Bool isEnableWUA; // @synthesize isEnableWUA=_isEnableWUA;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode=_isNeedEcode;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(nonatomic) _Bool isForceSpdy; // @synthesize isForceSpdy;
@property(nonatomic) _Bool isForceHttps; // @synthesize isForceHttps;
@property(retain, nonatomic) NSString *ttid; // @synthesize ttid;
@property __weak id <MtopExtRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) TBSDKRequest *mrequest; // @synthesize mrequest;
@property(nonatomic) _Bool isFromOfflineOperation; // @synthesize isFromOfflineOperation;
@property(retain, nonatomic) NSMutableArray *excludedCacheKeyParameters; // @synthesize excludedCacheKeyParameters;
@property(nonatomic) int cachePolicy; // @synthesize cachePolicy;
@property(nonatomic) int sessionExpiredOption; // @synthesize sessionExpiredOption;
- (void).cxx_destruct;
- (void)useCustomHostIfNeed;
- (id)nextId;
- (_Bool)isNeedCallback;
- (void)cancel;
- (void)utJsonParseEndTime;
- (void)utJsonParseStartTime;
- (void)utEnd;
- (void)utStart:(_Bool)arg1;
- (_Bool)isNeedRetry;
- (void)retryed;
- (_Bool)isUseHttps;
- (_Bool)isUseHttpPost;
- (id)getBizParameters;
- (id)getExtParameters;
- (void)setApiVersion:(id)arg1;
- (void)setApiName:(id)arg1;
- (id)getApiVersion;
- (id)getApiName;
- (id)getRequestId;
- (id)enableWUAWithPageName:(id)arg1 ctrlName:(id)arg2 xCoordinate:(float)arg3 yCoordinate:(float)arg4;
- (id)enableWUA;
- (id)addExcludedCacheKeyParameter:(id)arg1;
- (id)addUploadFileWithData:(id)arg1 fileName:(id)arg2 forKey:(id)arg3;
- (id)clearBizParameters;
- (id)removeBizParameter:(id)arg1;
- (id)addBizParameters:(id)arg1;
- (id)addBizParameter:(id)arg1 forKey:(id)arg2;
- (id)removeExtParameter:(id)arg1;
- (id)addExtParameters:(id)arg1;
- (id)addExtParameter:(id)arg1 forKey:(id)arg2;
- (id)addProtocolParameter:(id)arg1 forKey:(id)arg2;
- (id)addHttpHeaders:(id)arg1;
- (id)addHttpHeader:(id)arg1 forKey:(id)arg2;
- (id)useHttpPost;
- (id)disableHttps;
- (id)useHttps;
- (id)setNetworkTimeout:(int)arg1;
- (void)dealloc;
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2;

@end

