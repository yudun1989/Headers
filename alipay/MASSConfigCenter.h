//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol NetAccessInfo;

@interface MASSConfigCenter : NSObject
{
    _Bool _usingGuardThread;
    _Bool _usingChunkLogic;
    _Bool _djangoUsingUrlEncodeLogic;
    _Bool _tfsUsingUrlEncodeLogic;
    _Bool _useNewRunloopFunc;
    _Bool _tfsUseCookieManager;
    _Bool _tfsUseGzip;
    _Bool _recordingUseFileUpload;
    _Bool _tfsUseDnsBefore;
    _Bool _massUpErrReport;
    _Bool _abroadUseMMDP;
    _Bool _abroadUseMMUP;
    _Bool _backGroudTokenGet;
    float _tokenRequestInternal;
    float _deltaPercentPartlyImgShow;
    long long _netType;
    NSMutableDictionary *_rttTimeOutConf;
    NSString *_registHostUp;
    NSMutableArray *_upIpList;
    NSString *_registHostDown;
    NSMutableArray *_downIpList;
    NSString *_registHostDownCrypto;
    NSMutableArray *_downIplistCrypto;
    NSString *_registTokenHost;
    NSMutableArray *_tokenIpList;
    NSMutableDictionary *_dataPiceUnitSize;
    NSMutableDictionary *_dataPartUnitSize;
    long long _downloadTasksSameTime;
    long long _tfsDownloadTasksSameTime;
    id <NetAccessInfo> _tfsHostInfoInterface;
    NSMutableSet *_tfsCanCryptoHosts;
    NSMutableArray *_bizNotUseMASS;
    NSArray *_lowPriorityHosts;
    NSArray *_lowPriorityBiztypes;
    NSArray *_bizIdUseDjangoEnforce;
    NSMutableDictionary *_tfsIplist;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *tfsIplist; // @synthesize tfsIplist=_tfsIplist;
@property(nonatomic) _Bool backGroudTokenGet; // @synthesize backGroudTokenGet=_backGroudTokenGet;
@property(nonatomic) _Bool abroadUseMMUP; // @synthesize abroadUseMMUP=_abroadUseMMUP;
@property(nonatomic) _Bool abroadUseMMDP; // @synthesize abroadUseMMDP=_abroadUseMMDP;
@property(retain, nonatomic) NSArray *bizIdUseDjangoEnforce; // @synthesize bizIdUseDjangoEnforce=_bizIdUseDjangoEnforce;
@property(nonatomic) _Bool massUpErrReport; // @synthesize massUpErrReport=_massUpErrReport;
@property(nonatomic) _Bool tfsUseDnsBefore; // @synthesize tfsUseDnsBefore=_tfsUseDnsBefore;
@property(nonatomic) _Bool recordingUseFileUpload; // @synthesize recordingUseFileUpload=_recordingUseFileUpload;
@property(nonatomic) _Bool tfsUseGzip; // @synthesize tfsUseGzip=_tfsUseGzip;
@property(retain, nonatomic) NSArray *lowPriorityBiztypes; // @synthesize lowPriorityBiztypes=_lowPriorityBiztypes;
@property(retain, nonatomic) NSArray *lowPriorityHosts; // @synthesize lowPriorityHosts=_lowPriorityHosts;
@property(nonatomic) _Bool tfsUseCookieManager; // @synthesize tfsUseCookieManager=_tfsUseCookieManager;
@property(retain, nonatomic) NSMutableArray *bizNotUseMASS; // @synthesize bizNotUseMASS=_bizNotUseMASS;
@property(nonatomic) _Bool useNewRunloopFunc; // @synthesize useNewRunloopFunc=_useNewRunloopFunc;
@property(nonatomic) _Bool tfsUsingUrlEncodeLogic; // @synthesize tfsUsingUrlEncodeLogic=_tfsUsingUrlEncodeLogic;
@property(nonatomic) _Bool djangoUsingUrlEncodeLogic; // @synthesize djangoUsingUrlEncodeLogic=_djangoUsingUrlEncodeLogic;
@property(nonatomic) _Bool usingChunkLogic; // @synthesize usingChunkLogic=_usingChunkLogic;
@property(nonatomic) _Bool usingGuardThread; // @synthesize usingGuardThread=_usingGuardThread;
@property(retain, nonatomic) NSMutableSet *tfsCanCryptoHosts; // @synthesize tfsCanCryptoHosts=_tfsCanCryptoHosts;
@property(retain, nonatomic) id <NetAccessInfo> tfsHostInfoInterface; // @synthesize tfsHostInfoInterface=_tfsHostInfoInterface;
@property(nonatomic) long long tfsDownloadTasksSameTime; // @synthesize tfsDownloadTasksSameTime=_tfsDownloadTasksSameTime;
@property(nonatomic) long long downloadTasksSameTime; // @synthesize downloadTasksSameTime=_downloadTasksSameTime;
@property(nonatomic) float deltaPercentPartlyImgShow; // @synthesize deltaPercentPartlyImgShow=_deltaPercentPartlyImgShow;
@property(nonatomic) float tokenRequestInternal; // @synthesize tokenRequestInternal=_tokenRequestInternal;
@property(retain) NSMutableDictionary *dataPartUnitSize; // @synthesize dataPartUnitSize=_dataPartUnitSize;
@property(retain) NSMutableDictionary *dataPiceUnitSize; // @synthesize dataPiceUnitSize=_dataPiceUnitSize;
@property(retain, nonatomic) NSMutableArray *tokenIpList; // @synthesize tokenIpList=_tokenIpList;
@property(retain, nonatomic) NSString *registTokenHost; // @synthesize registTokenHost=_registTokenHost;
@property(retain, nonatomic) NSMutableArray *downIplistCrypto; // @synthesize downIplistCrypto=_downIplistCrypto;
@property(retain, nonatomic) NSString *registHostDownCrypto; // @synthesize registHostDownCrypto=_registHostDownCrypto;
@property(retain, nonatomic) NSMutableArray *downIpList; // @synthesize downIpList=_downIpList;
@property(retain, nonatomic) NSString *registHostDown; // @synthesize registHostDown=_registHostDown;
@property(retain, nonatomic) NSMutableArray *upIpList; // @synthesize upIpList=_upIpList;
@property(retain, nonatomic) NSString *registHostUp; // @synthesize registHostUp=_registHostUp;
@property(retain) NSMutableDictionary *rttTimeOutConf; // @synthesize rttTimeOutConf=_rttTimeOutConf;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
- (void).cxx_destruct;
- (id)toString;
- (void)freshConfig:(id)arg1;
- (_Bool)bizIdEnforceDjango:(id)arg1;
- (void)storeDataPartUnitSize:(id)arg1;
- (void)storeDataPiceUnitSize:(id)arg1;
- (_Bool)isLowPriorityWithHost:(id)arg1 andBiz:(id)arg2;
- (_Bool)isBizNotUseMASS:(id)arg1;
- (_Bool)canCryptoOnHost:(id)arg1;
- (void)setTfsCryptoHosts:(id)arg1;
- (void)storeRttTimeOutConf:(id)arg1;
- (float)getRspTimeout;
- (float)getConnectTimeout;
- (id)makeIpHostListFromIplist:(id)arg1 host:(id)arg2;
- (id)searchTfsIpList:(id)arg1;
- (id)getTfsDownloadSvrIp:(id)arg1 retryTimes:(unsigned long long)arg2 succ:(_Bool *)arg3;
- (id)getDownloadSvrIpCryptoRetrytimes:(unsigned long long)arg1;
- (id)getDownloadSvrIpRetrytimes:(unsigned long long)arg1;
- (id)getTokenSvrIpRetrytimes:(unsigned long long)arg1;
- (id)getUploadSvrIpRetrytimes:(unsigned long long)arg1;
- (unsigned long long)getPartUnitSize;
- (unsigned long long)getPiceUnitSize;
- (id)getTfsCryptoHostsStorage;
- (void)initFromFileStorage;
- (id)init;

@end

