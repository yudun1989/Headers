//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQPTTRecordeVolumeMonitor : NSObject
{
    _Bool _hasNotificate;
    double _startTime;
    double _maxVol;
    float _minVolume;
    double _simpleTime;
}

+ (id)getInstance;
@property(nonatomic) double simpleTime; // @synthesize simpleTime=_simpleTime;
@property(nonatomic) float minVolume; // @synthesize minVolume=_minVolume;
- (_Bool)dismissTips;
- (_Bool)showTips;
- (void)simpleVolume:(float)arg1;
- (_Bool)stopMonitor;
- (_Bool)startMonitor;
- (void)dealloc;
- (id)init;

@end

