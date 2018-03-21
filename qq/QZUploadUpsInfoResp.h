//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZUploadRespPacket.h>

@class NSData, NSString;

@interface QZUploadUpsInfoResp : QZUploadRespPacket
{
    long long _iType;
    NSData *_busiData;
    NSString *_surl;
    int _iWidth;
    int _iHeight;
    int _iPhotoType;
}

@property(nonatomic) int iPhotoType; // @synthesize iPhotoType=_iPhotoType;
@property(nonatomic) int iHeight; // @synthesize iHeight=_iHeight;
@property(nonatomic) int iWidth; // @synthesize iWidth=_iWidth;
@property(retain, nonatomic) NSString *surl; // @synthesize surl=_surl;
@property(retain, nonatomic) NSData *busiData; // @synthesize busiData=_busiData;
@property(nonatomic) long long iType; // @synthesize iType=_iType;
- (void).cxx_destruct;
- (void)decodeBodyForSDKV2WithData:(id)arg1;
- (void)setupResponse:(id)arg1;

@end

