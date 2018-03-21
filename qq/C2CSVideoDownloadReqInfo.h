//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseSVideoDownloadReqInfo.h>

@interface C2CSVideoDownloadReqInfo : BaseSVideoDownloadReqInfo
{
    long long _toUin;
    long long _groupUin;
    long long _groupCode;
    _Bool _isDiscuss;
    long long _groupPicFileId;
    int _seq;
    int _retryCount;
    int _httpSessionId;
    long long _svideoDownloadMode;
    _Bool _isPtt;
    long long _svideoDownloadChannel;
}

@property(nonatomic) long long svideoDownloadChannel; // @synthesize svideoDownloadChannel=_svideoDownloadChannel;
- (id)description;
- (id)initWithQQMessageModel:(id)arg1 getSVideoType:(int)arg2;

// Remaining properties
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(nonatomic) long long groupUin; // @dynamic groupUin;
@property(nonatomic) int httpSessionId; // @dynamic httpSessionId;
@property(nonatomic) _Bool isDiscuss; // @dynamic isDiscuss;
@property(nonatomic) _Bool isPtt; // @dynamic isPtt;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(nonatomic) int seq; // @dynamic seq;
@property(nonatomic) long long svideoDownloadMode; // @dynamic svideoDownloadMode;
@property(nonatomic) long long toUin; // @dynamic toUin;

@end

