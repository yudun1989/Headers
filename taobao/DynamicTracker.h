//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class NSString;

@interface DynamicTracker : WVDynamicHandler
{
    NSString *_pageUrl;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
- (void).cxx_destruct;
- (id)getUrlFromVC:(id)arg1;
- (void)updateConfig:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)dealloc;
- (id)init;

@end

