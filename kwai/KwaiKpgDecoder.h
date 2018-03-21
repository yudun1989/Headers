//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KwaiKpgDecoder : NSObject
{
    struct AVCodec *codec;
    struct AVCodecContext *codecCtx;
    struct AVPacket *packet;
    struct AVFrame *yuvFrame;
    struct AVFrame *rgbFrame;
    struct SwsContext *swsContext;
}

- (int)fillResult:(struct _KpgMetaData *)arg1 result:(struct _KpgResult *)arg2;
- (int)doDecode:(const char *)arg1 size:(int)arg2 metadata:(struct _KpgMetaData *)arg3;
- (int)initFFmpeg:(struct _KpgMetaData *)arg1 dstFormat:(int)arg2;
- (void)dealloc;
- (id)init;
- (int)decode:(const char *)arg1 size:(int)arg2 output:(struct _KpgResult *)arg3;

@end

