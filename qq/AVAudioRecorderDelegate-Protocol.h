//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AVAudioRecorder, NSError;

@protocol AVAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withOptions:(unsigned long long)arg2;
- (void)audioRecorderBeginInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder *)arg1 successfully:(_Bool)arg2;
@end

