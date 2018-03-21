//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSUBeautyStatusPackage, KSUFeatureSwitchPackage, KSUMusicDetailPackage, NSMutableArray, NSString;

@interface KSUCameraRecordFeaturesStatusPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) KSUFeatureSwitchPackage *beatsSwitchPackage; // @dynamic beatsSwitchPackage;
@property(nonatomic) _Bool beauty; // @dynamic beauty;
@property(retain, nonatomic) KSUBeautyStatusPackage *beautyStatusPackage; // @dynamic beautyStatusPackage;
@property(nonatomic) _Bool hasBeatsSwitchPackage; // @dynamic hasBeatsSwitchPackage;
@property(nonatomic) _Bool hasBeautyStatusPackage; // @dynamic hasBeautyStatusPackage;
@property(nonatomic) _Bool hasMusicDetailPackage; // @dynamic hasMusicDetailPackage;
@property(retain, nonatomic) NSMutableArray *magicFacePackageArray; // @dynamic magicFacePackageArray;
@property(readonly, nonatomic) unsigned long long magicFacePackageArray_Count; // @dynamic magicFacePackageArray_Count;
@property(copy, nonatomic) NSString *magicMusic; // @dynamic magicMusic;
@property(copy, nonatomic) NSString *music; // @dynamic music;
@property(retain, nonatomic) KSUMusicDetailPackage *musicDetailPackage; // @dynamic musicDetailPackage;

@end

