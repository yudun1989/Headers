//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTArticleDetailMonitor : NSObject
{
    double _webRequestStartTime;
    NSMutableDictionary *_serverRequestStartTimeDict;
}

@property(retain, nonatomic) NSMutableDictionary *serverRequestStartTimeDict; // @synthesize serverRequestStartTimeDict=_serverRequestStartTimeDict;
@property(nonatomic) double webRequestStartTime; // @synthesize webRequestStartTime=_webRequestStartTime;
- (void).cxx_destruct;
- (id)intervalFromServerRequestStartTimeWithName:(id)arg1;
- (id)intervalFromWebRequestStartTime;
- (void)initializeServerRequestTimeMonitorWithName:(id)arg1;
- (void)initializeWebRequestTimeMonitor;
- (id)init;

@end

