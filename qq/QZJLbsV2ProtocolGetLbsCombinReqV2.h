//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSString, QZJLbsV2ProtocolDate, QZJLbsV2ProtocolGeoInfoV2, QZJLbsV2ProtocolGpsV2, QZJLbsV2ProtocolReqCommonV2;

@interface QZJLbsV2ProtocolGetLbsCombinReqV2 : JceObjectV2
{
}

- (id)init;

// Remaining properties
@property(retain, nonatomic, getter=jce_stCommon, setter=setJce_stCommon:) QZJLbsV2ProtocolReqCommonV2 *jcev2_p_0_r_stCommon; // @dynamic jcev2_p_0_r_stCommon;
@property(nonatomic, getter=jce_iUserTime, setter=setJce_iUserTime:) unsigned int jcev2_p_10_o_iUserTime; // @dynamic jcev2_p_10_o_iUserTime;
@property(nonatomic, getter=jce_iAppID, setter=setJce_iAppID:) int jcev2_p_11_o_iAppID; // @dynamic jcev2_p_11_o_iAppID;
@property(retain, nonatomic, getter=jce_stUserDate, setter=setJce_stUserDate:) QZJLbsV2ProtocolDate *jcev2_p_12_o_stUserDate; // @dynamic jcev2_p_12_o_stUserDate;
@property(retain, nonatomic, getter=jce_strClientIP, setter=setJce_strClientIP:) NSString *jcev2_p_1_r_strClientIP; // @dynamic jcev2_p_1_r_strClientIP;
@property(retain, nonatomic, getter=jce_stGps, setter=setJce_stGps:) QZJLbsV2ProtocolGpsV2 *jcev2_p_2_r_stGps; // @dynamic jcev2_p_2_r_stGps;
@property(retain, nonatomic, getter=jce_vCellData, setter=setJce_vCellData:) NSArray *jcev2_p_3_r_vCellData__b0x9i_VOQZJLbsV2ProtocolCellV2; // @dynamic jcev2_p_3_r_vCellData__b0x9i_VOQZJLbsV2ProtocolCellV2;
@property(retain, nonatomic, getter=jce_vWifiData, setter=setJce_vWifiData:) NSArray *jcev2_p_4_r_vWifiData__b0x9i_VOQZJLbsV2ProtocolWifiV2; // @dynamic jcev2_p_4_r_vWifiData__b0x9i_VOQZJLbsV2ProtocolWifiV2;
@property(nonatomic, getter=jce_iReqNum, setter=setJce_iReqNum:) int jcev2_p_5_r_iReqNum; // @dynamic jcev2_p_5_r_iReqNum;
@property(nonatomic, getter=jce_iAccuracy, setter=setJce_iAccuracy:) int jcev2_p_6_o_iAccuracy; // @dynamic jcev2_p_6_o_iAccuracy;
@property(nonatomic, getter=jce_iLocateCostTime, setter=setJce_iLocateCostTime:) int jcev2_p_7_o_iLocateCostTime; // @dynamic jcev2_p_7_o_iLocateCostTime;
@property(nonatomic, getter=jce_iMood, setter=setJce_iMood:) int jcev2_p_8_o_iMood; // @dynamic jcev2_p_8_o_iMood;
@property(retain, nonatomic, getter=jce_stGeoInfo, setter=setJce_stGeoInfo:) QZJLbsV2ProtocolGeoInfoV2 *jcev2_p_9_o_stGeoInfo; // @dynamic jcev2_p_9_o_stGeoInfo;

@end

