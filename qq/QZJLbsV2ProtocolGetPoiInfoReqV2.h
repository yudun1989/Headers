//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSString, QZJLbsV2ProtocolGpsV2, QZJLbsV2ProtocolReqCommonV2;

@interface QZJLbsV2ProtocolGetPoiInfoReqV2 : JceObjectV2
{
}

- (id)init;

// Remaining properties
@property(retain, nonatomic, getter=jce_stCommon, setter=setJce_stCommon:) QZJLbsV2ProtocolReqCommonV2 *jcev2_p_0_r_stCommon; // @dynamic jcev2_p_0_r_stCommon;
@property(retain, nonatomic, getter=jce_stGps, setter=setJce_stGps:) QZJLbsV2ProtocolGpsV2 *jcev2_p_1_r_stGps; // @dynamic jcev2_p_1_r_stGps;
@property(retain, nonatomic, getter=jce_vCellData, setter=setJce_vCellData:) NSArray *jcev2_p_2_r_vCellData__b0x9i_VOQZJLbsV2ProtocolCellV2; // @dynamic jcev2_p_2_r_vCellData__b0x9i_VOQZJLbsV2ProtocolCellV2;
@property(retain, nonatomic, getter=jce_vWifiData, setter=setJce_vWifiData:) NSArray *jcev2_p_3_r_vWifiData__b0x9i_VOQZJLbsV2ProtocolWifiV2; // @dynamic jcev2_p_3_r_vWifiData__b0x9i_VOQZJLbsV2ProtocolWifiV2;
@property(retain, nonatomic, getter=jce_strClientIP, setter=setJce_strClientIP:) NSString *jcev2_p_4_r_strClientIP; // @dynamic jcev2_p_4_r_strClientIP;
@property(retain, nonatomic, getter=jce_strKeyWord, setter=setJce_strKeyWord:) NSString *jcev2_p_5_r_strKeyWord; // @dynamic jcev2_p_5_r_strKeyWord;
@property(nonatomic, getter=jce_iDistance, setter=setJce_iDistance:) int jcev2_p_6_r_iDistance; // @dynamic jcev2_p_6_r_iDistance;
@property(nonatomic, getter=jce_iAccuracy, setter=setJce_iAccuracy:) int jcev2_p_7_o_iAccuracy; // @dynamic jcev2_p_7_o_iAccuracy;
@property(nonatomic, getter=jce_iLocateCostTime, setter=setJce_iLocateCostTime:) int jcev2_p_8_o_iLocateCostTime; // @dynamic jcev2_p_8_o_iLocateCostTime;
@property(retain, nonatomic, getter=jce_strAttachInfo, setter=setJce_strAttachInfo:) NSString *jcev2_p_9_o_strAttachInfo; // @dynamic jcev2_p_9_o_strAttachInfo;

@end

