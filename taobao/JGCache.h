//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface JGCache : NSObject
{
    NSMutableDictionary *_moduleMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *moduleMap; // @synthesize moduleMap=_moduleMap;
- (void).cxx_destruct;
- (void)clearQueueWithModuleName:(id)arg1;
- (void)queueJuggler:(id)arg1;
- (id)dequeueReusableJugglerWithTemplate:(id)arg1 moduleName:(id)arg2;
- (id)init;

@end

