//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSEAudioGetBuffer-Protocol.h"

@class NSString;
@protocol KSEAudioGetBuffer;

@interface KSEAudioPlay : NSObject <KSEAudioGetBuffer>
{
    struct OpaqueAudioComponentInstance *audioComponent;
    struct AudioStreamBasicDescription audioStreamDesc;
    _Bool _isPlaying;
    id <KSEAudioGetBuffer> _delegateGetBuffer;
    struct TrackAudioDecodeService *_tracAudioServiceObj;
    struct RefClock *_refClockObj;
    struct TimeMessageCenter *_playerTimeMsgCenterObj;
}

@property(nonatomic) struct TimeMessageCenter *playerTimeMsgCenterObj; // @synthesize playerTimeMsgCenterObj=_playerTimeMsgCenterObj;
@property(nonatomic) struct RefClock *refClockObj; // @synthesize refClockObj=_refClockObj;
@property(nonatomic) struct TrackAudioDecodeService *tracAudioServiceObj; // @synthesize tracAudioServiceObj=_tracAudioServiceObj;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) id <KSEAudioGetBuffer> delegateGetBuffer; // @synthesize delegateGetBuffer=_delegateGetBuffer;
- (void)cleanup;
- (int)initialAudio;
- (void)getAudio:(void *)arg1 len:(int)arg2 renderPos:(double *)arg3 playbackPts:(double *)arg4;
- (int)pause;
- (int)play;
- (void)setAudioGetPlayObj:(struct TrackAudioDecodeService *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

