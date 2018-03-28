//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItemAccessLog, NSArray, NSMutableArray;
@protocol TTPlayer;

@interface TTAVPlayerItemAccessLog : NSObject
{
    AVPlayerItemAccessLog *_accessLog;
    NSObject<TTPlayer> *_player;
    NSMutableArray *_eventArray;
}

@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) __weak NSObject<TTPlayer> *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItemAccessLog *accessLog; // @synthesize accessLog=_accessLog;
- (void).cxx_destruct;
- (void)clearEvent;
- (void)willReadWatchedDuration;
@property(readonly, nonatomic) NSArray *events;
- (void)addEvent:(id)arg1;
- (id)init;

@end

