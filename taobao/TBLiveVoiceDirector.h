//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NlsRecognizerDelegate-Protocol.h"
#import "SMVolumeMicViewDataSource-Protocol.h"

@class NSString, NlsRecognizer, TBLiveVoiceAudioPlayer;
@protocol TBLiveVoiceDelegate;

@interface TBLiveVoiceDirector : NSObject <NlsRecognizerDelegate, SMVolumeMicViewDataSource>
{
    _Bool _isExiting;
    id <TBLiveVoiceDelegate> _delegate;
    CDUnknownBlockType _resultCallBack;
    CDUnknownBlockType _answerCallBack;
    NlsRecognizer *_recognizer;
    NSString *_resultText;
    TBLiveVoiceAudioPlayer *_audioPlayer;
    unsigned long long _voiceVolume;
}

+ (_Bool)isAvailable;
@property(nonatomic) unsigned long long voiceVolume; // @synthesize voiceVolume=_voiceVolume;
@property(retain, nonatomic) TBLiveVoiceAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSString *resultText; // @synthesize resultText=_resultText;
@property(retain, nonatomic) NlsRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool isExiting; // @synthesize isExiting=_isExiting;
@property(copy, nonatomic) CDUnknownBlockType answerCallBack; // @synthesize answerCallBack=_answerCallBack;
@property(copy, nonatomic) CDUnknownBlockType resultCallBack; // @synthesize resultCallBack=_resultCallBack;
@property(nonatomic) __weak id <TBLiveVoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)currentVolume;
- (void)stopVoiceRecognize;
- (void)requestAnswerWithText:(id)arg1;
- (void)recognizePlainTextToVoiceOutput:(id)arg1;
- (void)recognizeVoiceToPlainText;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)recognizerDidStopRecording:(id)arg1 withRecorderData:(id)arg2;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizerDidStartRecording:(id)arg1;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)asrStatusChanged:(id)arg1;
- (void)dealloc;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

