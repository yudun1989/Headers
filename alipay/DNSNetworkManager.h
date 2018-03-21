//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DNSNetworkStatusManager, DNSRAMCache, NSOperationQueue, NSString;

@interface DNSNetworkManager : NSObject
{
    _Bool _dnsLoading;
    _Bool _hasInit;
    _Bool _hasDNSDomainIp;
    _Bool _hasTryDomain;
    _Bool _useBakupIp;
    int _backupUseCount;
    NSOperationQueue *_downloadQueue;
    long long _failCount;
    DNSRAMCache *_cache;
    DNSNetworkStatusManager *_networkStatusManager;
    double _lastUpdateTime;
    long long _addTTL;
    NSString *_clientIp;
}

+ (id)sharedInstance;
@property(retain) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(nonatomic) _Bool useBakupIp; // @synthesize useBakupIp=_useBakupIp;
@property(nonatomic) _Bool hasTryDomain; // @synthesize hasTryDomain=_hasTryDomain;
@property(nonatomic) _Bool hasDNSDomainIp; // @synthesize hasDNSDomainIp=_hasDNSDomainIp;
@property(nonatomic) int backupUseCount; // @synthesize backupUseCount=_backupUseCount;
@property(nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(nonatomic) long long addTTL; // @synthesize addTTL=_addTTL;
@property _Bool dnsLoading; // @synthesize dnsLoading=_dnsLoading;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) DNSNetworkStatusManager *networkStatusManager; // @synthesize networkStatusManager=_networkStatusManager;
@property(retain, nonatomic) DNSRAMCache *cache; // @synthesize cache=_cache;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (_Bool)oversea;
- (void)ttlTimeout:(id)arg1;
- (id)getOriginListByHost:(id)arg1;
- (id)getOriginByHost:(id)arg1;
- (void)setError:(id)arg1;
- (void)resetFailcount;
- (void)flushAllCacheLimit;
- (void)flushAllCache;
- (_Bool)isOnlineDomain;
- (id)getAppId;
- (id)signKey;
- (id)signWithHttpBody:(id)arg1 appid:(id)arg2 ts:(id)arg3;
- (id)getBackupIp;
- (id)getHttpHostOrIp;
- (id)getHttpDnsURL;
- (void)incFailCount;
- (void)addDNSOriginsToCache:(id)arg1;
- (void)dealWithJSONData:(id)arg1 netType:(int)arg2;
- (_Bool)getIpFromJson:(id)arg1 netType:(int)arg2;
- (_Bool)isAlipay;
- (id)allHeadDicHeadData:(id)arg1;
- (long long)checkSignWithHeader:(id)arg1 httpBody:(id)arg2 headers:(id)arg3;
- (long long)getNumFromOxcString:(id)arg1;
- (char *)findBuff:(char *)arg1 len:(long long)arg2;
- (id)getChunkedBodyFromHttpBody:(char *)arg1 length:(unsigned long long)arg2;
- (id)httpData2HttpBody:(id)arg1 httpCode:(int *)arg2 needCheckSign:(_Bool)arg3 signResult:(long long *)arg4 iszipOpen:(_Bool)arg5;
- (void)logRemote:(id)arg1 result:(id)arg2 errcode:(long long)arg3 strError:(id)arg4 clientIp:(id)arg5;
- (id)signHeaderWithBody:(id)arg1;
- (id)settingsForPxy:(id)arg1;
- (void)dnsRequestInQuue;
- (void)dnsRequestWithURLSession;
- (_Bool)dealWithResponse:(id)arg1 error:(id)arg2 responseData:(id)arg3 reqNet:(int)arg4 isFromeSession:(_Bool)arg5;
- (void)dnsRequest:(id)arg1;
- (id)clientVersion;
- (id)buildBodyParams:(id)arg1 domains:(id)arg2;
- (void)refreshDNSAsync;
- (void)dnsRequestWithURLSessionAsynInQueue;
- (void)refreshDNSSafe;
- (void)refreshDNS;
- (void)initWithHosts:(id)arg1;
- (id)init;
- (void)setDSNDomain:(id)arg1;

@end

