//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZUploadPacket.h>

@class QZJFileUploadUploadVideoInfoReq;

@interface QZUploadVideo : QZUploadPacket
{
    long long sourceRefer;
    QZJFileUploadUploadVideoInfoReq *_videoInfoReq;
}

@property(retain, nonatomic) QZJFileUploadUploadVideoInfoReq *videoInfoReq; // @synthesize videoInfoReq=_videoInfoReq;
@property(nonatomic) long long sourceRefer; // @synthesize sourceRefer;
- (void).cxx_destruct;
- (id)ipMgrKey;
- (id)appidName;
- (id)packetRespWithRspData:(id)arg1;
- (_Bool)useSHAForCheckSum;
- (id)sliceUploadAppId;
- (id)getControlDataWithError:(id *)arg1;
- (id)init;

@end

