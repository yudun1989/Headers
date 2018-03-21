//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZTVBase.h>

@class NSArray, NSDate, NSError, NSString, QZTVURLRequest, QZVideoInfo;

@interface QZTVURLInfo : QZTVBase
{
    QZTVURLRequest *_req;
    _Bool _isHevc;
    double _fetchUrlTimeCost;
    long long _retryNetCount;
    long long _retryLastError;
}

+ (id)videoIDFromCacheFileName:(id)arg1 info:(id *)arg2;
+ (id)videoIDFromFakeUrl:(id)arg1 info:(id *)arg2;
+ (id)videoIDFromFakeUrl:(id)arg1;
+ (unsigned long long)checkRequestType:(unsigned long long)arg1;
+ (id)URLInfoWithVideoInfo:(id)arg1;
@property(nonatomic) _Bool isHevc; // @synthesize isHevc=_isHevc;
@property(nonatomic) long long retryLastError; // @synthesize retryLastError=_retryLastError;
@property(nonatomic) long long retryNetCount; // @synthesize retryNetCount=_retryNetCount;
@property double fetchUrlTimeCost; // @synthesize fetchUrlTimeCost=_fetchUrlTimeCost;
- (void).cxx_destruct;
- (void)expireUrls:(id)arg1;
- (double)videoDuration:(id)arg1;
- (id)cacheFileName:(id)arg1;
- (_Bool)isHLS:(id)arg1;
- (id)realUrlWithBaseInfo:(id)arg1;
- (id)realUrl:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)durations:(unsigned long long)arg1;
- (id)fakeUrls:(unsigned long long)arg1;
- (id)tipWording:(unsigned long long)arg1;
- (id)error:(unsigned long long)arg1;
- (id)fakeUrl:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)requestUrl:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)canRefresh:(unsigned long long)arg1;
- (_Bool)videoValid:(unsigned long long)arg1;
- (unsigned long long)checkRequestType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)urlReq;

// Remaining properties
@property(retain) NSError *lastHLSError; // @dynamic lastHLSError;
@property(retain) NSDate *lastHLSGetTime; // @dynamic lastHLSGetTime;
@property(retain) NSError *lastMP4Error; // @dynamic lastMP4Error;
@property(retain) NSDate *lastMP4GetTime; // @dynamic lastMP4GetTime;
@property(retain) NSString *tipWordingWhenHLS; // @dynamic tipWordingWhenHLS;
@property(retain) NSString *tipWordingWhenMP4; // @dynamic tipWordingWhenMP4;
@property(retain) NSArray *urlHLS; // @dynamic urlHLS;
@property _Bool urlHLSExpired; // @dynamic urlHLSExpired;
@property(retain) NSArray *urlMP4; // @dynamic urlMP4;
@property _Bool urlMP4Expired; // @dynamic urlMP4Expired;
@property(retain) QZVideoInfo *videoInfo; // @dynamic videoInfo;

@end

