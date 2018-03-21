//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LPEvent-Protocol.h"

@class NSDictionary, NSString;

@interface LPBaseEvent : NSObject <LPEvent>
{
    long long _eventID;
    NSDictionary *_params;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)initWithEventID:(long long)arg1 params:(id)arg2 token:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

