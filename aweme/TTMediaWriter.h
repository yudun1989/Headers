//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NotifyHandler-Protocol.h"
#import "TTMediaWriter-Protocol.h"

@class NSString;

@interface TTMediaWriter : NSObject <NotifyHandler, TTMediaWriter>
{
    struct MediaWriter *_mediaWriter;
    struct ApApp *_mWrapper;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)handleNotify:(id)arg1;
- (void)handleNotifyOnMainQueue:(id)arg1;
- (void)close;
- (void)start:(CDUnknownBlockType)arg1;
- (void)configWithParameters:(id)arg1;
- (void)open;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

