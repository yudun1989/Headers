//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VoiceChangeObject : NSObject
{
    void *mVCer;
    _Bool initialized;
}

- (void)resetVoiceChangeId:(int)arg1 sampleRate:(int)arg2;
- (int)VoiceChange:(char *)arg1 outbuf:(char *)arg2 inlen:(int)arg3;
- (void)dealloc;
- (id)init;

@end

