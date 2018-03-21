//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SilenceHuDongAudioPlayerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SilenceHuDongAudio : NSObject <SilenceHuDongAudioPlayerDelegate>
{
    NSMutableDictionary *_indexToPlayerDict;
}

+ (id)sharedInstance;
+ (void)pause:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
+ (void)resume:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
+ (void)stop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
+ (void)start:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *indexToPlayerDict; // @synthesize indexToPlayerDict=_indexToPlayerDict;
- (void).cxx_destruct;
- (void)seekTo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
- (void)pause:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
- (void)resume:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
- (void)stop:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
- (void)start:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3;
- (void)playFinished:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

