//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QAVVideoFrame;

@protocol QAVLocalVideoDelegate <NSObject>
- (void)OnLocalVideoRawSampleBuf:(struct opaqueCMSampleBuffer *)arg1 result:(struct opaqueCMSampleBuffer **)arg2;
- (void)OnLocalVideoPreProcess:(QAVVideoFrame *)arg1;
- (void)OnLocalVideoPreview:(QAVVideoFrame *)arg1;
@end

