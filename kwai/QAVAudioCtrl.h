//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QAVAudioCtrl : NSObject
{
    unsigned int _volume;
    unsigned int _dynamicVolume;
    long long _outputMode;
}

@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
@property(readonly, nonatomic) unsigned int dynamicVolume; // @synthesize dynamicVolume=_dynamicVolume;
@property(readonly, nonatomic) unsigned int volume; // @synthesize volume=_volume;

@end

