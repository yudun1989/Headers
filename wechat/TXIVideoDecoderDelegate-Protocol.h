//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TXIVideoDecoderDelegate <NSObject>
- (void)onDecodeFrame:(struct opaqueCMSampleBuffer *)arg1 FrameType:(long long)arg2 FrameIndex:(unsigned long long)arg3 FramePTS:(unsigned long long)arg4 FrameDTS:(unsigned long long)arg5 ErrorCode:(unsigned long long)arg6;
@end

