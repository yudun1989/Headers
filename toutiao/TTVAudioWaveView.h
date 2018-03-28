//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TTVAudioWaveView : UIView
{
    _Bool _isWaving;
    NSArray *_waveLayers;
    NSArray *_waveKeyValues;
}

@property(retain, nonatomic) NSArray *waveKeyValues; // @synthesize waveKeyValues=_waveKeyValues;
@property(retain, nonatomic) NSArray *waveLayers; // @synthesize waveLayers=_waveLayers;
@property(nonatomic) _Bool isWaving; // @synthesize isWaving=_isWaving;
- (void).cxx_destruct;
- (id)waveLayerAtIndex:(long long)arg1;
- (void)addAnimationToWaveAtIndex:(long long)arg1;
- (void)_customThemeChanged:(id)arg1;
- (void)finish;
- (void)wave;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

