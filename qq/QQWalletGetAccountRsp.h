//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSString, QQWalletRedPoint, QQWalletStatus;

@interface QQWalletGetAccountRsp : JceObjectV2
{
}

+ (id)jceType;

// Remaining properties
@property(retain, nonatomic, getter=jce_status, setter=setJce_status:) QQWalletStatus *jcev2_p_0_o_status; // @dynamic jcev2_p_0_o_status;
@property(retain, nonatomic, getter=jce_vecEntry, setter=setJce_vecEntry:) NSArray *jcev2_p_1_o_vecEntry__b0x9i_VOQQWalletEntry; // @dynamic jcev2_p_1_o_vecEntry__b0x9i_VOQQWalletEntry;
@property(retain, nonatomic, getter=jce_vecBlueBelt, setter=setJce_vecBlueBelt:) NSArray *jcev2_p_2_o_vecBlueBelt__b0x9i_VOQQWalletLittleBlueBelt; // @dynamic jcev2_p_2_o_vecBlueBelt__b0x9i_VOQQWalletLittleBlueBelt;
@property(retain, nonatomic, getter=jce_transactionRecordUrl, setter=setJce_transactionRecordUrl:) NSString *jcev2_p_3_o_transactionRecordUrl; // @dynamic jcev2_p_3_o_transactionRecordUrl;
@property(retain, nonatomic, getter=jce_extralEntryName, setter=setJce_extralEntryName:) NSString *jcev2_p_4_o_extralEntryName; // @dynamic jcev2_p_4_o_extralEntryName;
@property(retain, nonatomic, getter=jce_extralEntryUrl, setter=setJce_extralEntryUrl:) NSString *jcev2_p_5_o_extralEntryUrl; // @dynamic jcev2_p_5_o_extralEntryUrl;
@property(retain, nonatomic, getter=jce_redpoint, setter=setJce_redpoint:) QQWalletRedPoint *jcev2_p_6_o_redpoint; // @dynamic jcev2_p_6_o_redpoint;
@property(nonatomic, getter=jce_qCointFlag, setter=setJce_qCointFlag:) int jcev2_p_7_o_qCointFlag; // @dynamic jcev2_p_7_o_qCointFlag;

@end

