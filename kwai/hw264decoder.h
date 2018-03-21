//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString;

@interface hw264decoder : NSObject
{
    void *phw264Dec;
    CDUnknownFunctionPointerType pDecCB;
    NSString *spsstring;
    NSString *ppsstring;
    char *headdata;
    char *pps;
    char *decBuf;
    NSMutableArray *pFrameIndex;
    NSLock *IndexLock;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    struct opaqueCMFormatDescription *_formatDesc;
}

- (void).cxx_destruct;
- (char *)getFrameHeader:(const char *)arg1 withDataLen:(long long)arg2 OutDataLen:(int *)arg3 OutHeaderlen:(int *)arg4;
- (char *)getPPS:(const char *)arg1 withDataLen:(long long)arg2 OutDataLen:(int *)arg3;
- (char *)getSPS:(const char *)arg1 withDataLen:(long long)arg2 OutDataLen:(int *)arg3;
- (int)getHeaderSize:(const char *)arg1;
- (int)IsIFrame:(const char *)arg1;
- (int)IsHeader:(const char *)arg1;
- (int)FillDecBuffer:(const char *)arg1 InputBufLen:(int)arg2 OutBuffer:(char *)arg3 OutDataLen:(int *)arg4 OutDataLen:(int *)arg5 FrameType:(int)arg6;
- (int)DoIndexFind:(int *)arg1 withFrameType:(int *)arg2;
- (void)DoDecCB:(char *)arg1 withU:(char *)arg2 withV:(char *)arg3 withDataLenw:(int)arg4 withDataLenh:(int)arg5 withStideY:(int)arg6 withStrideUV:(int)arg7 withFrameIndex:(int)arg8 withDataFormat:(int)arg9 withCodecFormat:(int)arg10 withPixelbuffer:(char *)arg11;
- (void)setDecCallback:(void *)arg1 withFunction:(CDUnknownFunctionPointerType)arg2;
- (int)releasedecoder;
- (int)dodecoder:(const char *)arg1 withDataLen:(int)arg2 withFrameIndex:(int)arg3 withSyncId:(int)arg4 withIFrame:(int)arg5 withFrameType:(int)arg6;
- (int)createdecoder:(const char *)arg1 withDataLen:(int)arg2 withImageMode:(int)arg3;
- (int)initdecoder;

@end

