//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface FMAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    _Bool _playing;
    int _loop;
    NSMutableDictionary *_playingItems;
    NSMutableSet *_itemCache;
    NSURL *_audioUrl;
}

@property(nonatomic) int loop; // @synthesize loop=_loop;
@property(retain, nonatomic) NSURL *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) NSMutableSet *itemCache; // @synthesize itemCache=_itemCache;
@property(retain, nonatomic) NSMutableDictionary *playingItems; // @synthesize playingItems=_playingItems;
- (void).cxx_destruct;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopImmediately:(_Bool)arg1;
- (void)resume;
- (void)pause;
- (void)play;
- (void)setLoopCount:(int)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 loopCount:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
