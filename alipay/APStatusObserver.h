//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MAStatusInterface-Protocol.h"

@class NSString;

@interface APStatusObserver : NSObject <MAStatusInterface>
{
}

- (void)mmtpToSPDY;
- (void)connectStatistic:(id)arg1;
- (void)reLoginNotice;
- (void)accessOnLoginOut:(id)arg1;
- (void)accessOnLogin:(id)arg1;
- (void)accessDidInit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

