//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor;

@interface QQAVAudioWaveView : UIView
{
    CADisplayLink *_meterUpdateDisplayLink;
    int _waveAnamationState;
    float _amplitudeState;
    float _c;
    double _frequency;
    UIColor *_waveColor;
    double _phase;
    double _amplitude;
    long long _numberOfWaves;
    double _primaryWaveLineWidth;
    double _secondaryWaveLineWidth;
    double _idleAmplitude;
    double _density;
    double _phaseShift;
}

@property(nonatomic) double phaseShift; // @synthesize phaseShift=_phaseShift;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double idleAmplitude; // @synthesize idleAmplitude=_idleAmplitude;
@property(nonatomic) double secondaryWaveLineWidth; // @synthesize secondaryWaveLineWidth=_secondaryWaveLineWidth;
@property(nonatomic) double primaryWaveLineWidth; // @synthesize primaryWaveLineWidth=_primaryWaveLineWidth;
@property(nonatomic) long long numberOfWaves; // @synthesize numberOfWaves=_numberOfWaves;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) double phase; // @synthesize phase=_phase;
@property(retain, nonatomic) UIColor *waveColor; // @synthesize waveColor=_waveColor;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (void)updateMeters;
- (void)stopUpdatingMeter;
- (void)startUpdatingMeter;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)updateWithLevel:(double)arg1;
- (void)setup;
- (void)awakeFromNib;
- (void)dealloc;
- (void)stopRealWave;
- (void)startRealWave;
- (void)stopDefaultWaveWithAnimation:(_Bool)arg1;
- (void)startDefaultWaveWithAnimation:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

