//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, QZUploadPacket, QZUploadRespPacket;

@protocol QZUploadConfigQueryDelegate <NSObject>

@optional
- (NSString *)qzoneDocPath;
- (QZUploadRespPacket *)buildUploadRspPacket:(long long)arg1;
- (_Bool)updatePacketEXIF:(QZUploadPacket *)arg1;
- (_Bool)waitFileProcessing:(NSString *)arg1;
- (long long)checkFileStatus:(NSString *)arg1;
- (long long)getSocketMaxSeg3;
- (long long)getSocketMaxSeg2;
- (long long)getSocketMaxSeg1;
- (NSString *)getDeviceInfo;
- (int)getNetworkType;
- (NSString *)getQua;
- (NSString *)getLocalIP;
- (NSDictionary *)getTestIp;
- (_Bool)isTestEnv;
- (NSString *)getCarrierNameWWAN;
- (long long)getCarrierTypeWWAN;
- (long long)getWifiCarrierType;
- (_Bool)shouldReadBackupIpWithClientInfo;
- (NSMutableArray *)getBackUpIpReport;
- (NSMutableArray *)getOptimumIpReport;
- (NSArray *)getUploadPorts;
- (NSString *)getReportURL;
- (NSMutableArray *)getBackUpIpOtherV2;
- (NSMutableArray *)getBackUpIpVideoV2;
- (NSMutableArray *)getBackUpIpPicV2;
- (NSString *)getOtherV2DomainName;
- (NSString *)getVideoV2DomainName;
- (NSString *)getPicV2DomainName;
- (NSMutableArray *)getOptimumIpOtherV2;
- (NSMutableArray *)getOptimumIpVideoV2;
- (NSMutableArray *)getOptimumIpPicV2;
- (long long)uploadV2NetTimeout;
- (long long)uploadV2ConnRetryMaxCount;
- (long long)uploadV2PacketRetryMaxCount;
- (long long)uploadV2SocketTimeout;
- (long long)uploadV2ConnectTimeout;
- (long long)batchControlCount;
- (long long)multiSocketCount;
- (long long)concurrentFileCount;
@end

