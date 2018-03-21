//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBLiveScreenRecorderCallBack-Protocol.h"

@class NSString;
@protocol TBLiveScreenRecorderDelegate, TBLiveScreenRecorderProtocol;

@interface TBLiveScreenRecorder : NSObject <TBLiveScreenRecorderCallBack>
{
    id <TBLiveScreenRecorderProtocol> _recorder;
    id <TBLiveScreenRecorderDelegate> _delegate;
}

@property(nonatomic) __weak id <TBLiveScreenRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)screenRecordingFinishedWithPath:(id)arg1 error:(id)arg2;
- (_Bool)isRecording;
- (void)discardRecording;
- (void)stopRecording;
- (void)startRecordingWithBlock:(CDUnknownBlockType)arg1;
- (void)setupScreenRecorder;
- (void)setRecorderViewController:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

