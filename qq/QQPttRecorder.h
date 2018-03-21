//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQAmrRecorderDelegate-Protocol.h>
#import <QQMainProject/QQSilkRecorderDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class AQLevelMeter, GetMicrophonePeakPowerLogic, NSMutableData, NSString, QQAmrRecorder, QQSilkRecorder, UIView;
@protocol IPttRecorderInterface, QQPttRecorderDelegate;

@interface QQPttRecorder : NSObject <QQSilkRecorderDelegate, UIAlertViewDelegate, QQAmrRecorderDelegate>
{
    _Bool _voicechange;
    int _xo;
    NSString *_uuid;
    QQAmrRecorder *_amrRecorder;
    QQSilkRecorder *_silkRecorder;
    NSObject<IPttRecorderInterface> *_recorder;
    id <QQPttRecorderDelegate> _delegate;
    _Bool _isStreamPtt;
    AQLevelMeter *_aqlvlMeter;
    UIView *_lvlMeterSuperView;
    _Bool _notifyUi;
    NSMutableData *_streamData;
    NSMutableData *_cacheStreamData;
    float _maxRecordTime;
    _Bool _audition;
    _Bool _showLevelMeter;
    double _last_record_time;
    GetMicrophonePeakPowerLogic *_PeakPowerLogic;
    int _type;
}

+ (id)getInstance;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSObject<IPttRecorderInterface> *recorder; // @synthesize recorder=_recorder;
@property _Bool audition; // @synthesize audition=_audition;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getSliceData:(int)arg1 beginSlice:(int)arg2 uuid:(id)arg3;
- (void)removeRecordFile:(id)arg1;
- (id)getRecord;
- (void)removePcmFile:(id)arg1;
- (void)setMaxRecordTime:(float)arg1;
- (void)showNormalNotice;
- (_Bool)isRecording;
- (void)pauseLevelMeter:(float)arg1;
- (id)getCurrentUuid;
- (double)getMinSendTime;
- (void)setLevelMeterSuperView:(id)arg1;
- (void)onTimeOut;
- (void)onRecordReady;
- (void)onRecordData:(id)arg1;
- (void)onRecordBeInterrupt;
- (void)notifyUi;
- (void)auditionSendData:(id)arg1;
- (void)onRecordFinish:(id)arg1;
- (void)onSilkFrameRecord:(id)arg1 andTotalFrameCount:(unsigned long long)arg2;
- (void)sendRecordData;
- (void)onRecordError:(int)arg1;
- (double)getRecordTime;
@property(nonatomic) __weak id <QQPttRecorderDelegate> delegate; // @dynamic delegate;
- (void)cancelRecord;
- (void)fireCancelRecorde;
- (void)delayStopRecordIfNeed:(CDUnknownBlockType)arg1;
- (void)stopRecord;
- (void)startRecordStreamPtt:(id)arg1;
- (float)getPeakPower;
- (_Bool)startRecvData:(_Bool)arg1 isCallback:(_Bool)arg2;
- (_Bool)startRecvData:(_Bool)arg1;
- (_Bool)prepareRecordPTR:(id)arg1;
- (void)startRecord:(id)arg1;
- (void)startRecord:(id)arg1 recvData:(_Bool)arg2 showLevelMeter:(_Bool)arg3;
- (_Bool)isMicPhoneAccessable;
- (void)hideLevelMeter;
- (void)showLevelMeter;
- (void)initRecorder;
- (void)createRecorder;
- (void)NotifyError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isStreamPtt; // @dynamic isStreamPtt;
@property(readonly) Class superclass;
@property(nonatomic) _Bool voicechange; // @dynamic voicechange;

@end
