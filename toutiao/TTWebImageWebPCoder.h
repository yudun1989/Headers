//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTWebImageCoder-Protocol.h"

@class NSString;

@interface TTWebImageWebPCoder : NSObject <TTWebImageCoder>
{
    struct WebPIDecoder *_idec;
}

+ (id)sharedCoder;
- (id)sd_encodedWebpDataWithImage:(id)arg1;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2;
- (id)sd_rawWebpImageWithData:(struct WebPData)arg1;
- (id)sd_nonblendWebpImageWithCanvas:(struct CGContext *)arg1 iterator:(struct WebPIterator)arg2;
- (id)sd_blendWebpImageWithCanvas:(struct CGContext *)arg1 iterator:(struct WebPIterator)arg2;
- (id)decompressedImageWithImage:(id)arg1 data:(id *)arg2 format:(long long)arg3 shouldScaleDown:(_Bool)arg4;
- (id)incrementalDecodedImageWithData:(id)arg1 format:(long long)arg2 finished:(_Bool)arg3;
- (id)decodedImageWithData:(id)arg1 format:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

