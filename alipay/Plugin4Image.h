//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PluginBase.h"

@class NSMutableDictionary;

@interface Plugin4Image : PluginBase
{
    NSMutableDictionary *_streamImageCaches;
}

@property(retain, nonatomic) NSMutableDictionary *streamImageCaches; // @synthesize streamImageCaches=_streamImageCaches;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (_Bool)isWebPType:(id)arg1;
- (id)name;
- (void)addProxy;
- (id)init;
- (void)dealloc;

@end

