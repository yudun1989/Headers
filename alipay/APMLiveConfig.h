//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APMLiveConfig : NSObject
{
    _Bool _landscapeVideo;
    _Bool _enablePing;
    _Bool _usingNSBundleForManualLoad;
    int _bitRate;
    int _fps;
    float _minimumiOSVersionToSupportLive;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _timeout;
    NSString *_pingHost;
    unsigned long long _period4HandleLowBandwidth;
    unsigned long long _countOfPing;
    unsigned long long _maxSendBufferSize;
    unsigned long long _period4BandwidthSample;
    unsigned long long _maxCongestionResumeEventCount;
}

+ (id)sharedInstance;
@property(nonatomic) float minimumiOSVersionToSupportLive; // @synthesize minimumiOSVersionToSupportLive=_minimumiOSVersionToSupportLive;
@property(nonatomic) _Bool usingNSBundleForManualLoad; // @synthesize usingNSBundleForManualLoad=_usingNSBundleForManualLoad;
@property(nonatomic) unsigned long long maxCongestionResumeEventCount; // @synthesize maxCongestionResumeEventCount=_maxCongestionResumeEventCount;
@property(nonatomic) unsigned long long period4BandwidthSample; // @synthesize period4BandwidthSample=_period4BandwidthSample;
@property(nonatomic) unsigned long long maxSendBufferSize; // @synthesize maxSendBufferSize=_maxSendBufferSize;
@property(nonatomic) unsigned long long countOfPing; // @synthesize countOfPing=_countOfPing;
@property(nonatomic) unsigned long long period4HandleLowBandwidth; // @synthesize period4HandleLowBandwidth=_period4HandleLowBandwidth;
@property(copy, nonatomic) NSString *pingHost; // @synthesize pingHost=_pingHost;
@property(nonatomic) _Bool enablePing; // @synthesize enablePing=_enablePing;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool landscapeVideo; // @synthesize landscapeVideo=_landscapeVideo;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) int bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1;
- (id)init;

@end

