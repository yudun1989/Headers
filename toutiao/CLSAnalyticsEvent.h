//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLSEventLogEvent.h"

@class NSDictionary, NSString;

@interface CLSAnalyticsEvent : CLSEventLogEvent
{
    NSString *_eventIdentifier;
    NSDictionary *_stringPayloadValueDict;
}

@property(readonly, copy, nonatomic) NSDictionary *stringPayloadValueDict; // @synthesize stringPayloadValueDict=_stringPayloadValueDict;
@property(readonly, copy, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnswersEvent:(id)arg1 timestamp:(unsigned long long)arg2 eventIdentifier:(id)arg3;
- (id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 eventIdentifier:(id)arg4;
- (id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 eventIdentifier:(id)arg4 payloadValues:(id)arg5;

@end

