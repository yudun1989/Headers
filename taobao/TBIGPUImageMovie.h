//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIGPUImageOutput.h"

@class NSURL;

@interface TBIGPUImageMovie : TBIGPUImageOutput
{
    struct __CVBuffer *_currentBuffer;
    NSURL *_url;
}

@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)endProcessing;
- (void)processFrame;
- (void)startProcessing;
- (id)initWithURL:(id)arg1;

@end

