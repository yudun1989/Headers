//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSArray, NSData;

@interface QQPimVCardVCardContent : JceObjectV2
{
    int jcev2_p_0_r_type;
    NSData *jcev2_p_1_o_typeLabel;
    NSData *jcev2_p_2_o_value;
    NSArray *jcev2_p_3_o_subContentList__b0x9i_VOQQPimVCardVCardSubContent;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_subContentList, setter=setJce_subContentList:) NSArray *jcev2_p_3_o_subContentList__b0x9i_VOQQPimVCardVCardSubContent; // @synthesize jcev2_p_3_o_subContentList__b0x9i_VOQQPimVCardVCardSubContent;
@property(retain, nonatomic, getter=jce_value, setter=setJce_value:) NSData *jcev2_p_2_o_value; // @synthesize jcev2_p_2_o_value;
@property(retain, nonatomic, getter=jce_typeLabel, setter=setJce_typeLabel:) NSData *jcev2_p_1_o_typeLabel; // @synthesize jcev2_p_1_o_typeLabel;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void).cxx_destruct;

@end

