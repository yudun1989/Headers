//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSRunLoop;

@interface _NlsRunLoopThread : NSThread
{
    struct dispatch_group_s *_waitGroup;
    NSRunLoop *_runLoop;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;
- (void)dealloc;

@end
