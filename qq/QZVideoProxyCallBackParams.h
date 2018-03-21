//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QZVideoProxyCallBackParams : NSObject
{
    long long _playID;
    long long _clipNo;
    long long _callBackType;
    long long _errorCode;
    long long _serverDetailErrorCode;
    long long _errorDetailCode;
    NSString *_errorMsg;
    long long _fileSize;
    NSString *_httpLocationURL;
    NSString *_httpURL;
    NSString *_httpHeader;
    int _httpRedirectNum;
    int _httpRedirectCostMs;
    int _speedKBS;
    int _httpDNSCostMs;
    int _httpConnectCostMs;
    int _httpFirstRecvCostMs;
    long long _offset;
    long long _httpDownloadSum;
    long long _dataFromCacheSize;
    _Bool _isPreLoad;
    int _retryFailedTimes;
    NSString *_contentType;
    NSString *_allLocationHost;
    NSString *_strSerIP;
    NSString *_oriReqUrl;
    int _httpCDNPort;
    NSString *_videoUrl;
    long long _fileType;
    NSString *_fileID;
    NSString *_savePath;
    long long _fileDuration;
    id _extraInfo;
    int _xo;
}

- (void).cxx_destruct;
- (void)setupWithParams:(id)arg1;
- (id)initWithSDKRetDic:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *allLocationHost; // @dynamic allLocationHost;
@property(nonatomic) long long callBackType; // @dynamic callBackType;
@property(nonatomic) long long clipNo; // @dynamic clipNo;
@property(retain, nonatomic) NSString *contentType; // @dynamic contentType;
@property(nonatomic) long long dataFromCacheSize; // @dynamic dataFromCacheSize;
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(nonatomic) long long errorDetailCode; // @dynamic errorDetailCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) id extraInfo; // @dynamic extraInfo;
@property(nonatomic) long long fileDuration; // @dynamic fileDuration;
@property(retain, nonatomic) NSString *fileID; // @dynamic fileID;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(nonatomic) long long fileType; // @dynamic fileType;
@property(nonatomic) int httpCDNPort; // @dynamic httpCDNPort;
@property(nonatomic) int httpConnectCostMs; // @dynamic httpConnectCostMs;
@property(nonatomic) int httpDNSCostMs; // @dynamic httpDNSCostMs;
@property(nonatomic) long long httpDownloadSum; // @dynamic httpDownloadSum;
@property(nonatomic) int httpFirstRecvCostMs; // @dynamic httpFirstRecvCostMs;
@property(retain, nonatomic) NSString *httpHeader; // @dynamic httpHeader;
@property(retain, nonatomic) NSString *httpLocationURL; // @dynamic httpLocationURL;
@property(nonatomic) int httpRedirectCostMs; // @dynamic httpRedirectCostMs;
@property(nonatomic) int httpRedirectNum; // @dynamic httpRedirectNum;
@property(retain, nonatomic) NSString *httpURL; // @dynamic httpURL;
@property(nonatomic) _Bool isPreLoad; // @dynamic isPreLoad;
@property(nonatomic) long long offset; // @dynamic offset;
@property(retain, nonatomic) NSString *oriReqUrl; // @dynamic oriReqUrl;
@property(nonatomic) long long playID; // @dynamic playID;
@property(nonatomic) int retryFailedTimes; // @dynamic retryFailedTimes;
@property(retain, nonatomic) NSString *savePath; // @dynamic savePath;
@property(nonatomic) long long serverDetailErrorCode; // @dynamic serverDetailErrorCode;
@property(nonatomic) int speedKBS; // @dynamic speedKBS;
@property(retain, nonatomic) NSString *strSerIP; // @dynamic strSerIP;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;

@end

