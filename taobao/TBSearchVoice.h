//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "MRecognizerDelegate-Protocol.h"

@class MRecognizer, NSString;

@interface TBSearchVoice : WVDynamicHandler <MRecognizerDelegate>
{
    CDUnknownBlockType _callBack;
    MRecognizer *_p_recognizer;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) MRecognizer *p_recognizer; // @synthesize p_recognizer=_p_recognizer;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)getVoicePermission:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)cancelVoiceRecognition:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopVoiceRecognition:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startVoiceRecognition:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)resetWVJSBridgeInstance;
- (void)releaseInstance;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

