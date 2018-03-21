//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

@interface KSYStreamerBase : NSObject
{
    struct AVStream *_ffVStream;
    struct AVStream *_ffAStream;
    struct AVFormatContext *_fmtCtx;
    _Bool _AudioCfging;
    NSObject<OS_dispatch_queue> *v_enc_q;
    NSObject<OS_dispatch_queue> *a_enc_q;
    NSObject<OS_dispatch_queue> *qos_q;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_mutex_t _ffmpegContextMutex;
    struct AVFrame *_vframe;
    struct AVFrame *_aframe;
    int _vFrameCnt;
    int _aFrameCnt;
    struct _FFPktList _aPktList;
    long long _ffStartTime;
    long long _ffStartTimeAbs;
    long long _firstAudioTime;
    long long _lastVideoTime;
    long long _lastAudioTime;
    long long _expectAudioPts;
    CDStruct_c5d49230 _inputPCMBuf;
    long long _bufDuration;
    struct URLContext *_ffRtmpURLCtx;
    struct URLContext *_ffTcpCtx;
    int _encVTime[5];
    long long _totalEncVTime;
    long long _inVpts;
    long long _inApts;
    long long _lastBenchMarkTime;
    int _lastUploadKBytes;
    int _lastPktVKB;
    int _lastPktAByte;
    int _pktVKB;
    int _pktAByte;
    int _lastFrameCnt;
    int _lastAFrameCnt;
    _Bool _bMuteStream;
    int _audioSampleFmt;
    _Bool _needTakePhoto;
    _Bool _wallClockUpdated;
    long long _wallClockOffset;
    long long _lastTimeCalcDelay;
    int _vSentPktsCnt;
    int _vEncDelaySum;
    struct ResourceMonitor *_resourceMonitor;
    struct EncoderAdapter *_encoderAdapter;
    struct X264Opts *_x264_option;
    float s_cpu_usage;
    int *cpu_stats;
    int cpu_stats_length;
    int *x264_opt_level_stats;
    int x264_opt_level_length;
    int bit_rate_available;
    _Bool bit_rate_available_changed;
    int rc_mode;
    int rc_crf;
    long long lastKeyFramePts;
    double psnrs;
    double psnr_avg;
    double psnr_realtime;
    double ssims;
    double ssim_avg;
    double ssim_realtime;
    long long video_quality_measurement_frames;
    NSString *_appVersion;
    int _videoWidth;
    int _videoHeight;
    long long _tickStartTime;
    long long _pushStartTime;
    long long _lastSampleTime;
    long long _lastRecordTime;
    int _lastDroppedVideoFrames;
    int _blockCnt;
    int _lastBlockCnt;
    int _lastEncodedFrames;
    int _lastUploadKBytesForQos;
    int _lastVFrameCnt;
    int _lastUploadKBytesForMonitor;
    int *_kbps_stats;
    int _kbps_stats_length;
    int _lastEncodeSizeForMonitor;
    int *_fps_stats;
    int _fps_stats_length;
    int _lastCapturedFramesForMonitor;
    int *_captured_fps_stats;
    int *_send_buffer_len_stats;
    int _send_buffer_len_stats_length;
    int *_cpu_stats_new;
    struct CAudioDenoise *_audio_denoise;
    _Bool _enableQosStat;
    _Bool _enAutoApplyEstimateBW;
    _Bool _shouldEnableKSYStatModule;
    int _videoFPS;
    int _videoInitBitrate;
    int _videoMaxBitrate;
    int _videoMinBitrate;
    float _maxKeyInterval;
    int _audiokBPS;
    int _uploadedKByte;
    int _encodedFrames;
    int _droppedVideoFrames;
    int _averageVideoEncDelay;
    int _videoQualityMeasurement;
    NSURL *_hostURL;
    unsigned long long _videoCodec;
    unsigned long long _audioCodec;
    long long _qosTickDuration;
    CDUnknownBlockType _qosStatBlock;
    unsigned long long _streamState;
    unsigned long long _streamErrorCode;
    unsigned long long _netStateCode;
    NSString *_streamID;
    double _encodeVKbps;
    double _encodeAKbps;
    double _encodingFPS;
    NSString *_rtmpHostIP;
    CDUnknownBlockType _logBlock;
    double _jpegCompressionQuality;
    NSString *_fileName;
}

+ (id)getVersionExt;
+ (id)getVersion;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property double jpegCompressionQuality; // @synthesize jpegCompressionQuality=_jpegCompressionQuality;
@property(nonatomic) int videoQualityMeasurement; // @synthesize videoQualityMeasurement=_videoQualityMeasurement;
@property(readonly, nonatomic) int averageVideoEncDelay; // @synthesize averageVideoEncDelay=_averageVideoEncDelay;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(nonatomic) _Bool shouldEnableKSYStatModule; // @synthesize shouldEnableKSYStatModule=_shouldEnableKSYStatModule;
@property(readonly) NSString *rtmpHostIP; // @synthesize rtmpHostIP=_rtmpHostIP;
@property(readonly, nonatomic) int droppedVideoFrames; // @synthesize droppedVideoFrames=_droppedVideoFrames;
@property(readonly, nonatomic) int encodedFrames; // @synthesize encodedFrames=_encodedFrames;
@property(readonly, nonatomic) double encodingFPS; // @synthesize encodingFPS=_encodingFPS;
@property(readonly, nonatomic) int uploadedKByte; // @synthesize uploadedKByte=_uploadedKByte;
@property(readonly, nonatomic) double encodeAKbps; // @synthesize encodeAKbps=_encodeAKbps;
@property(readonly, nonatomic) double encodeVKbps; // @synthesize encodeVKbps=_encodeVKbps;
@property(readonly, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) unsigned long long netStateCode; // @synthesize netStateCode=_netStateCode;
@property(readonly, nonatomic) unsigned long long streamErrorCode; // @synthesize streamErrorCode=_streamErrorCode;
@property(readonly, nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
@property(nonatomic) _Bool enAutoApplyEstimateBW; // @synthesize enAutoApplyEstimateBW=_enAutoApplyEstimateBW;
@property(nonatomic) int audiokBPS; // @synthesize audiokBPS=_audiokBPS;
@property(nonatomic) float maxKeyInterval; // @synthesize maxKeyInterval=_maxKeyInterval;
@property(nonatomic) int videoMinBitrate; // @synthesize videoMinBitrate=_videoMinBitrate;
@property(nonatomic) int videoMaxBitrate; // @synthesize videoMaxBitrate=_videoMaxBitrate;
@property(nonatomic) int videoInitBitrate; // @synthesize videoInitBitrate=_videoInitBitrate;
@property(copy, nonatomic) CDUnknownBlockType qosStatBlock; // @synthesize qosStatBlock=_qosStatBlock;
@property(nonatomic) _Bool enableQosStat; // @synthesize enableQosStat=_enableQosStat;
@property(nonatomic) long long qosTickDuration; // @synthesize qosTickDuration=_qosTickDuration;
@property(nonatomic) unsigned long long audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) unsigned long long videoCodec; // @synthesize videoCodec=_videoCodec;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(readonly, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
- (void).cxx_destruct;
- (_Bool)doAgcInPlace:(struct opaqueCMSampleBuffer *)arg1;
- (void)setVideoWidth:(int)arg1 AndHeight:(int)arg2;
- (id)getVideoQuality;
- (void)setCRF:(int)arg1;
- (void)setEncoderOption:(id)arg1;
- (void)setEncoderComplexity:(int)arg1;
- (int)getCurrentEncoderComplexity;
- (float)getCurrentCpuUsage;
- (id)getLiveStreamStatistics;
- (id)getEncoderAdapterEnabled;
- (id)getX264LevelStatistics;
- (id)getCpuStatistics;
- (void)setAppVersion:(id)arg1;
- (void)updateCurrentWallClock:(long long)arg1;
- (void)takePhotoWithQuality:(double)arg1 fileName:(id)arg2;
- (void)muteStreame:(_Bool)arg1;
- (void)benchMarks:(long long)arg1;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideoPixelBuffer:(struct __CVBuffer *)arg1 yuv:(struct __CVBuffer *)arg2 timeInfo:(CDStruct_1b6d18a9)arg3;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)sendPacket:(struct AVPacket *)arg1;
- (void)encodeAudio:(struct opaqueCMSampleBuffer *)arg1;
- (int)saveInputPCM:(struct opaqueCMSampleBuffer *)arg1;
- (int)readAFrame:(struct AVFrame *)arg1;
- (void)encodeVideo:(struct __CVBuffer *)arg1 timeInfo:(long long)arg2;
- (long long)getPTSValue:(struct opaqueCMSampleBuffer *)arg1;
- (void)insertKwaiNal:(struct AVPacket *)arg1;
- (void)stopStream;
- (void)closeStream;
- (id)getRecordStat:(long long)arg1;
- (void)sampleStat;
- (void)sample:(long long)arg1;
- (void)clearMetric;
- (struct cJSON *)getCpuUsageMetric;
- (struct cJSON *)getSendBufferLenMetric;
- (struct cJSON *)getCapturedFpsMetric;
- (struct cJSON *)getFpsMetric;
- (struct cJSON *)getKbpsMetric;
- (struct cJSON *)getMetric:(int)arg1 fields:(id)arg2 stats:(int *)arg3;
- (void)recordSendBufferLenStat:(long long)arg1;
- (void)computeCpuUsage:(long long)arg1;
- (void)computeCapturedFps:(long long)arg1;
- (void)computeFps:(long long)arg1;
- (void)computeKbps:(long long)arg1;
- (void)recordStat:(int)arg1 timeInterval:(long long)arg2 scale:(int *)arg3 length:(int)arg4 stats:(int *)arg5;
- (void)stopQosStatTimer;
- (void)startQosStatTimer;
- (void)startConnection;
- (_Bool)isRtmpHost;
- (void)startStream:(id)arg1;
- (struct AVStream *)setupAudioEncoder:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)useAtEncoder;
- (struct AVStream *)setupVideoEncoder:(struct __CVBuffer *)arg1;
- (void)newStreamErrorState:(unsigned long long)arg1;
- (void)newNetStateEvent:(unsigned long long)arg1;
- (void)newStreamState:(unsigned long long)arg1;
- (int)getVBVBufferInterval;
- (void)clearStatusProperty;
- (void)resetStreamer;
- (void)dealloc;
- (void)deletelResource;
- (id)initWithDefaultCfg;
- (struct EncoderAdapter *)getEncoderAdapter;
- (id)init;

@end

