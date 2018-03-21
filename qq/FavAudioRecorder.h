//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAudioRecorderBase.h>

#import <QQMainProject/IPttRecorderInterface-Protocol.h>

@class NSString;

@interface FavAudioRecorder : QQAudioRecorderBase <IPttRecorderInterface>
{
    struct OpaqueAudioFileID *_audioFile;
    unsigned int _audioFileType;
    struct AudioStreamBasicDescription _dataFormat;
    long long _packetIndex;
    _Bool _propertiesSet;
}

- (int)getFrameLength;
- (void)saveRecordData:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)calcRecordTimeFromData:(id)arg1 numPackets:(unsigned long long)arg2 audioQueue:(struct OpaqueAudioQueue *)arg3;
- (_Bool)shouldFinishRecord;
- (_Bool)shouldStartRecord;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
