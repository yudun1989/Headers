//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBDetailUserTrackDelegate-Protocol.h"

@class NSString;

@interface TBDetailUserTrackAdapter : NSObject <TBDetailUserTrackDelegate>
{
}

+ (id)sharedIntance;
- (void)effectEventWithAction:(id)arg1 objectType:(id)arg2 objectId:(id)arg3;
- (void)commitOnPage:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (void)setListType:(id)arg1 listParam:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

