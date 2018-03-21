//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>
#import <QQMainProject/NSURLConnectionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQMessageModel;

@interface QQPerformanceURLCacheLoader : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate>
{
    _Bool _success;
    NSString *_hostname;
    NSString *_oldURL;
    NSString *_safeCheckURL;
    NSString *_wholeNewURL;
    NSMutableDictionary *_caches;
    NSMutableArray *_records;
    QQMessageModel *_msgModel;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *wholeNewURL; // @synthesize wholeNewURL=_wholeNewURL;
@property(copy, nonatomic) NSString *safeCheckURL; // @synthesize safeCheckURL=_safeCheckURL;
@property(copy, nonatomic) NSString *oldURL; // @synthesize oldURL=_oldURL;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (id)encodeRecomposeUrl:(id)arg1;
- (id)GetTargetUinTag;
- (id)GetCurrentUinTag;
- (id)getSourceTag:(id)arg1;
- (void)cacheURL:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)prepareForDNS;
- (id)getRediectionURL:(id)arg1;
- (void)sendShortURL:(id)arg1 withTag:(unsigned long long)arg2;
- (_Bool)isMatchShortURL:(id)arg1;
- (void)startWithURL:(id)arg1 AndMsg:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

