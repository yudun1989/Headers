//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSThread;

@interface ThreadEntry : NSObject
{
    _Bool _shouldKeepRunning;
    NSThread *_workThread;
    long long _refCount;
}

@property(nonatomic) _Bool shouldKeepRunning; // @synthesize shouldKeepRunning=_shouldKeepRunning;
@property(nonatomic) long long refCount; // @synthesize refCount=_refCount;
@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
- (void).cxx_destruct;
- (void)detachNewThread;
- (id)init;

@end

