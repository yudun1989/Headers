//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBProfileStrategyProtocol-Protocol.h"

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface TBRuntimeProfileHandler : NSObject <TBProfileStrategyProtocol>
{
    NSMutableDictionary *_methodTimeConsumingDict;
    NSMutableArray *_overWriteSelectorArray;
    double _methodTimeConsumingThreshold;
    NSMutableString *_methodTimeConsumingString;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableString *methodTimeConsumingString; // @synthesize methodTimeConsumingString=_methodTimeConsumingString;
@property(nonatomic) double methodTimeConsumingThreshold; // @synthesize methodTimeConsumingThreshold=_methodTimeConsumingThreshold;
@property(retain, nonatomic) NSMutableArray *overWriteSelectorArray; // @synthesize overWriteSelectorArray=_overWriteSelectorArray;
@property(retain, nonatomic) NSMutableDictionary *methodTimeConsumingDict; // @synthesize methodTimeConsumingDict=_methodTimeConsumingDict;
- (void).cxx_destruct;
- (void)commitLaunchMethodLog;
- (id)getMethodTimeConsuming;
- (void)findInappropriateClass:(Class)arg1 overWriteSelector:(SEL)arg2;
- (void)handleExceptionForwardMsgWithObject:(id)arg1 selector:(SEL)arg2 exception:(id)arg3;
- (void)msgSendElapseTimeInterval:(double)arg1 className:(id)arg2 selectorName:(id)arg3;
- (void)afterForwardMsgWithObject:(id)arg1 selector:(SEL)arg2;
- (void)beforeForwardMsgWithObject:(id)arg1 selector:(SEL)arg2;
- (_Bool)filterProfileClass:(Class)arg1 selector:(SEL)arg2;
- (_Bool)filterProfileClass:(Class)arg1;
- (id)init;
- (id)filterOverWriteArray;
- (id)filterArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

