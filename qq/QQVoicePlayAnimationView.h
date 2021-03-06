//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer, UIColor;
@protocol QQVoiceAnimDelegate;

@interface QQVoicePlayAnimationView : UIView
{
    NSTimer *_timer;
    int _volumeNumber;
    UIColor *_volumeColor;
    float _startX;
    _Bool _needReflect;
    float _startXDeleta;
    NSMutableArray *_volumeValues;
    float _curTimeInterval;
    int _volumeWidth;
    int _volumeGap;
    int _volumeMinHeight;
    int _volumeMaxHeight;
    float _volumeRefreshInterval;
    _Bool _bZeroStartY;
    _Bool _bShowTime;
    id <QQVoiceAnimDelegate> _voiceDelegate;
}

@property(nonatomic) _Bool bShowTime; // @synthesize bShowTime=_bShowTime;
@property(nonatomic) id <QQVoiceAnimDelegate> voiceDelegate; // @synthesize voiceDelegate=_voiceDelegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)startMonitor;
- (void)endMonitor;
- (id)initWithFrame:(struct CGRect)arg1 volumeNumber:(int)arg2 color:(id)arg3 reflect:(_Bool)arg4 deletaStartX:(float)arg5;
- (void)setVolumeWidth:(int)arg1 gap:(int)arg2 minHeight:(int)arg3 maxHeight:(int)arg4 refreshInterval:(float)arg5 middle:(_Bool)arg6;
- (void)initVolumeDefaultParameter;
- (void)dealloc;
- (void)removeFromSuperview;

@end

