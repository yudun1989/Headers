//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RTEventCenter;

@interface RTREventTracker : NSObject
{
    RTEventCenter *_eventCenter;
}

@property(nonatomic) __weak RTEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
- (void).cxx_destruct;
- (void)cleanAllTrackedEvents;
- (void)resetForUpdateGroup:(id)arg1;
- (void)trackExpirationForUpdateGroup:(id)arg1;
- (void)trackEvent:(id)arg1 forUpdateGroup:(id)arg2;

@end

