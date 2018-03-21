//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

#import "KSIntensityAdjustable-Protocol.h"
#import "KSSingleValueBeautyFilter-Protocol.h"

@class KSImageSkinSmootherFilter2, NSString;

@interface FMVPBeautifyFilter : GPUImageFilterGroup <KSIntensityAdjustable, KSSingleValueBeautyFilter>
{
    KSImageSkinSmootherFilter2 *_skinSmootherFilter;
    _Bool _fastMode;
    double _bright;
    double _soften;
    double _quality;
}

+ (double)normalizedSoftenWithValue:(double)arg1;
+ (double)normalizedBrightWithValue:(double)arg1;
+ (id)beautifyFilter;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool fastMode; // @synthesize fastMode=_fastMode;
@property(nonatomic) double soften; // @synthesize soften=_soften;
@property(nonatomic) double bright; // @synthesize bright=_bright;
- (void).cxx_destruct;
- (void)loadLookupFromPath:(id)arg1;
- (id)init;
- (void)setIntensity:(double)arg1 forCategory:(long long)arg2;
- (double)intensityForCategory:(long long)arg1;
- (void)setBeautifyValue:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

