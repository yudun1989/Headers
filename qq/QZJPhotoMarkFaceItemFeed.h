//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class NSString, QZJFeedsStFaceItem;

@interface QZJPhotoMarkFaceItemFeed : JceObjectV2
{
    long long _jcev2_p_0_o_op;
    QZJFeedsStFaceItem *_jcev2_p_1_o_faceinfo;
    NSString *_jcev2_p_2_o_albumid;
    NSString *_jcev2_p_3_o_photoid;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_photoid, setter=setJce_photoid:) NSString *jcev2_p_3_o_photoid; // @synthesize jcev2_p_3_o_photoid=_jcev2_p_3_o_photoid;
@property(retain, nonatomic, getter=jce_albumid, setter=setJce_albumid:) NSString *jcev2_p_2_o_albumid; // @synthesize jcev2_p_2_o_albumid=_jcev2_p_2_o_albumid;
@property(retain, nonatomic, getter=jce_faceinfo, setter=setJce_faceinfo:) QZJFeedsStFaceItem *jcev2_p_1_o_faceinfo; // @synthesize jcev2_p_1_o_faceinfo=_jcev2_p_1_o_faceinfo;
@property(nonatomic, getter=jce_op, setter=setJce_op:) long long jcev2_p_0_o_op; // @synthesize jcev2_p_0_o_op=_jcev2_p_0_o_op;
- (void).cxx_destruct;
- (id)init;

@end

