//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class AVMutableComposition, TBStoryVideoPreviewView;

@protocol TBMultimediaEditClipVideoComponentDelegate <NSObject>
- (AVMutableComposition *)compositionVideoWithStartTime:(double)arg1 stopTime:(double)arg2;
- (TBStoryVideoPreviewView *)videoPreviewView;
- (void)startVideoPlayWithMusic:(_Bool)arg1 isGifClick:(_Bool)arg2;
- (void)stopVideoPlay;
@end

