//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@interface DBStatus : JceObjectV2
{
    int jcev2_p_1_r_totalCount;
    int jcev2_p_2_r_addCount;
    int jcev2_p_3_r_mdfCount;
    int jcev2_p_4_r_delCount;
    long long jcev2_p_0_r_dataType;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_delCount, setter=setJce_delCount:) int jcev2_p_4_r_delCount; // @synthesize jcev2_p_4_r_delCount;
@property(nonatomic, getter=jce_mdfCount, setter=setJce_mdfCount:) int jcev2_p_3_r_mdfCount; // @synthesize jcev2_p_3_r_mdfCount;
@property(nonatomic, getter=jce_addCount, setter=setJce_addCount:) int jcev2_p_2_r_addCount; // @synthesize jcev2_p_2_r_addCount;
@property(nonatomic, getter=jce_totalCount, setter=setJce_totalCount:) int jcev2_p_1_r_totalCount; // @synthesize jcev2_p_1_r_totalCount;
@property(nonatomic, getter=jce_dataType, setter=setJce_dataType:) long long jcev2_p_0_r_dataType; // @synthesize jcev2_p_0_r_dataType;

@end

