//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NotifyHandler-Protocol.h"

@class NSDictionary, NSMutableString, NSString, TTAVAssetResourceLoader, TTAVPlayerItem, TTPlayerView;
@protocol OS_dispatch_queue, TTMediaWriter;

@interface TTAVPlayer : NSObject <NotifyHandler>
{
    // Error parsing type: ^{TTPlayer=^^?^^?iiiiB*^{AVSource}^{AVHandler}^^?^v^?^?{_opaque_pthread_rwlock_t=q[192c]}^{AVHandler}Bii{list<com::ss::ttm::AVSource *, std::__1::allocator<com::ss::ttm::AVSource *> >={__list_node_base<com::ss::ttm::AVSource *, void *>=^{__list_node_base<com::ss::ttm::AVSource *, void *>}^{__list_node_base<com::ss::ttm::AVSource *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<com::ss::ttm::AVSource *, void *> > >=Q}}^{AVBasePlayer}*[3^{AVSource}]^{AVSource}^{VideoOut}^{AudioOut}^{VideoOutlet}^{AudioOutlet}^{AVFactory}^^?^{APPWRAPPER}^{AVLooper}^{AVWindow}{SeekInfo=q{atomic<long long>=Aq}qqqq}{NextPlayInfo=*i*i*i{_opaque_pthread_mutex_t=q[56c]}}BqB{atomic<bool>=AB}iiiii*iiiiiqqq{TTPlayerConfig=^^?iifffB******iiiiiiiiiiiiiiiiiiiii***iiifiiiiiiiiiiiiiii}}, name: _player
    TTPlayerView *_playerView;
    ApApp_41a7cf77 *_wrapper;
    struct APPWRAPPER *_appWrapper;
    struct YUVCapture *_capture;
    struct AVSource *_pcmWriter;
    struct AVSource *_yuvWriter;
    _Bool _prepared;
    float _volume;
    int _playerErrorCode;
    NSMutableString *_playerErrorInfo;
    NSString *_bufferInfo;
    NSString *_voiceInfo;
    _Bool _ignoreAudioInterruption;
    _Bool _isPlayingBeforeInterruption;
    _Bool _looping;
    _Bool _isCapturing;
    float _speed;
    TTAVPlayerItem *_currentItem;
    long long _playbackState;
    long long _loadState;
    unsigned long long _stallReason;
    CDUnknownBlockType _bufferCallback;
    CDUnknownBlockType _captureCompletionCallback;
    CDUnknownBlockType _seekCompletionBlock;
    CDUnknownBlockType _playNextCompletionBlock;
    CDUnknownBlockType _screenshotCompletionBlock;
    NSDictionary *_header;
    NSString *_audioFilePath;
    NSString *_videoFilePath;
    NSString *_mp4FilePath;
    id <TTMediaWriter> _mediaWriter;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    TTAVAssetResourceLoader *_resourceLoader;
}

+ (id)playerWithItem:(id)arg1 options:(id)arg2;
+ (id)playerWithItem:(id)arg1;
+ (id)playerWithURL:(id)arg1 options:(id)arg2;
+ (id)playerWithURL:(id)arg1;
+ (_Bool)isMetalCapable;
+ (_Bool)supportsSSL;
+ (id)versionInfo;
+ (id)playerVersion;
@property(retain, nonatomic) TTAVAssetResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) id <TTMediaWriter> mediaWriter; // @synthesize mediaWriter=_mediaWriter;
@property(copy, nonatomic) NSString *mp4FilePath; // @synthesize mp4FilePath=_mp4FilePath;
@property(copy, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(nonatomic) _Bool looping; // @synthesize looping=_looping;
@property _Bool isPlayingBeforeInterruption; // @synthesize isPlayingBeforeInterruption=_isPlayingBeforeInterruption;
@property _Bool ignoreAudioInterruption; // @synthesize ignoreAudioInterruption=_ignoreAudioInterruption;
@property(copy, nonatomic) CDUnknownBlockType screenshotCompletionBlock; // @synthesize screenshotCompletionBlock=_screenshotCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType playNextCompletionBlock; // @synthesize playNextCompletionBlock=_playNextCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType seekCompletionBlock; // @synthesize seekCompletionBlock=_seekCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType captureCompletionCallback; // @synthesize captureCompletionCallback=_captureCompletionCallback;
@property(copy, nonatomic) CDUnknownBlockType bufferCallback; // @synthesize bufferCallback=_bufferCallback;
@property(nonatomic) unsigned long long stallReason; // @synthesize stallReason=_stallReason;
@property(nonatomic) long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(retain, nonatomic) TTAVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
- (void).cxx_destruct;
- (id)parseCommentString:(id)arg1;
- (void)setResourceLoaderDelegate:(id)arg1;
- (void)playNextWithURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buildFilePath;
- (void)screenshotSuccess;
- (void)takeScreenshot:(CDUnknownBlockType)arg1;
- (void)endRecording:(CDUnknownBlockType)arg1;
- (_Bool)startToRecord;
- (void)endCaptureBuffer:(CDUnknownBlockType)arg1;
- (void)startToCaptureBuffer:(CDUnknownBlockType)arg1;
- (id)getMediaComment;
- (void)setAutoRotation:(_Bool)arg1;
- (void)setViewRotation:(long long)arg1;
- (void)rotateCamera:(struct CGPoint)arg1;
- (void)setValue:(int)arg1 forKey:(int)arg2;
- (void)setValueString:(id)arg1 forKey:(int)arg2;
- (int)getIntValue:(int)arg1 forKey:(int)arg2;
- (long long)getInt64Value:(long long)arg1 forKey:(int)arg2;
- (id)getIPAddress;
- (void)audioSessionDidChangeInterruptionType:(id)arg1;
- (void)setCacheFile:(id)arg1 mode:(int)arg2;
@property(nonatomic) float volume;
@property(nonatomic, getter=isHardwareDecode) _Bool hardwareDecode;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)onNotify:(id)arg1 withObject:(id)arg2;
- (void)handleNotify:(id)arg1;
- (void)paseLogInfo:(id)arg1;
- (void)handleNotify:(id)arg1 playID:(int)arg2;
- (void)setContentURL:(id)arg1;
- (void)addHeader;
- (void)resetError;
- (void)create;
- (void)setLoop:(_Bool)arg1;
- (void)close;
- (void)closeWithoutRelease;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)stop;
- (void)pause;
- (void)play;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 options:(id)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (id)initWithPlayerItem:(id)arg1 options:(id)arg2;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

