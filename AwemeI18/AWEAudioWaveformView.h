//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AWEAudioWaveformDataFilter, NSArray, UIColor;

@interface AWEAudioWaveformView : UIView
{
    double _hasRecordedLocation;
    double _playingLocation;
    double _toBePlayedLocation;
    AWEAudioWaveformDataFilter *_filter;
    NSArray *_filteredSamples;
    AVAsset *_asset;
    UIColor *_hasRecordedColor;
    UIColor *_playingColor;
    UIColor *_toBePlayedColor;
    UIColor *_notPlayedColor;
}

@property(retain, nonatomic) UIColor *notPlayedColor; // @synthesize notPlayedColor=_notPlayedColor;
@property(retain, nonatomic) UIColor *toBePlayedColor; // @synthesize toBePlayedColor=_toBePlayedColor;
@property(retain, nonatomic) UIColor *playingColor; // @synthesize playingColor=_playingColor;
@property(retain, nonatomic) UIColor *hasRecordedColor; // @synthesize hasRecordedColor=_hasRecordedColor;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSArray *filteredSamples; // @synthesize filteredSamples=_filteredSamples;
@property(retain, nonatomic) AWEAudioWaveformDataFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) double toBePlayedLocation; // @synthesize toBePlayedLocation=_toBePlayedLocation;
@property(nonatomic) double playingLocation; // @synthesize playingLocation=_playingLocation;
@property(nonatomic) double hasRecordedLocation; // @synthesize hasRecordedLocation=_hasRecordedLocation;
- (void).cxx_destruct;
- (void)drawWithStartLocation:(double)arg1 endLocation:(double)arg2 rect:(struct CGRect)arg3 filterSamples:(id)arg4 context:(struct CGContext *)arg5 color:(id)arg6;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAsset:(id)arg1 choosedStartLocation:(double)arg2 endLocation:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

