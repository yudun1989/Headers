//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GXDatagramChannelDelegate-Protocol.h"

@class GXDataPackage_Object, NSString;

@interface GXDatagramBuilder : NSObject <GXDatagramChannelDelegate>
{
    int state_;
    GXDataPackage_Object *datagram_;
}

- (void).cxx_destruct;
- (_Bool)datagaramChannel:(id)arg1 didReceiveData:(id)arg2;
- (void)datagaramChannel:(id)arg1 didReset:(void *)arg2;
- (_Bool)handleReceivedData:(id)arg1;
- (void)finishBuildDatagram;
- (void)resetDatagramBuffer;
- (void)dealloc;
- (void)cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

