//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSDictionary;

@interface QZJBatchGetSimilarGroupidReq : JceObjectV2
{
    _Bool jcev2_p_2_o_is_need_new_groupids;
    unsigned int jcev2_p_0_o_uin;
    NSDictionary *jcev2_p_1_o_infos__b0x9i_M09ONSStringOQZJPhotoInfos;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_is_need_new_groupids, setter=setJce_is_need_new_groupids:) _Bool jcev2_p_2_o_is_need_new_groupids; // @synthesize jcev2_p_2_o_is_need_new_groupids;
@property(retain, nonatomic, getter=jce_infos, setter=setJce_infos:) NSDictionary *jcev2_p_1_o_infos__b0x9i_M09ONSStringOQZJPhotoInfos; // @synthesize jcev2_p_1_o_infos__b0x9i_M09ONSStringOQZJPhotoInfos;
@property(nonatomic, getter=jce_uin, setter=setJce_uin:) unsigned int jcev2_p_0_o_uin; // @synthesize jcev2_p_0_o_uin;
- (void).cxx_destruct;
- (id)init;

@end

