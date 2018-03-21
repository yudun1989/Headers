//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSEBeautyFilterParam, KSEColorFilterParam, KSEInputFileOptions, KSEProbedFile, KSETimeRange, NSString;

@interface KSETrackAsset : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *assetAudioPath; // @dynamic assetAudioPath;
@property(nonatomic) unsigned long long assetId; // @dynamic assetId;
@property(copy, nonatomic) NSString *assetPath; // @dynamic assetPath;
@property(retain, nonatomic) KSEInputFileOptions *assetPathOptions; // @dynamic assetPathOptions;
@property(nonatomic) double assetSpeed; // @dynamic assetSpeed;
@property(retain, nonatomic) KSEBeautyFilterParam *beautyFilter; // @dynamic beautyFilter;
@property(retain, nonatomic) KSETimeRange *clippedRange; // @dynamic clippedRange;
@property(retain, nonatomic) KSEColorFilterParam *colorFilter; // @dynamic colorFilter;
@property(nonatomic) _Bool hasAssetPathOptions; // @dynamic hasAssetPathOptions;
@property(nonatomic) _Bool hasBeautyFilter; // @dynamic hasBeautyFilter;
@property(nonatomic) _Bool hasClippedRange; // @dynamic hasClippedRange;
@property(nonatomic) _Bool hasColorFilter; // @dynamic hasColorFilter;
@property(nonatomic) _Bool hasProbedAssetAudioFile; // @dynamic hasProbedAssetAudioFile;
@property(nonatomic) _Bool hasProbedAssetFile; // @dynamic hasProbedAssetFile;
@property(retain, nonatomic) KSEProbedFile *probedAssetAudioFile; // @dynamic probedAssetAudioFile;
@property(retain, nonatomic) KSEProbedFile *probedAssetFile; // @dynamic probedAssetFile;
@property(nonatomic) double volume; // @dynamic volume;

@end

