//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXCPlayerConfig;
@protocol TXICustomRenderDelegate, TXINotifyDelegate;

@interface TXIPlayer : NSObject
{
    TXCPlayerConfig *_config;
    _Bool _isAutoPlay;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXICustomRenderDelegate> _customRenderDelegate;
    struct CGSize _videoSize;
}

+ (void)setAudioMode:(long long)arg1;
@property _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) __weak id <TXICustomRenderDelegate> customRenderDelegate; // @synthesize customRenderDelegate=_customRenderDelegate;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void).cxx_destruct;
- (void)setRate:(float)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)decodeNAL:(id)arg1;
- (void)setMute:(_Bool)arg1;
- (void)seek:(float)arg1;
- (void)resume;
- (void)pause;
- (void)stopPlay;
- (int)startPlay:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)config;
- (void)removeVideoWidget;
- (void)insertVideoWidgetToView:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isPlaying;
- (id)init;

@end

