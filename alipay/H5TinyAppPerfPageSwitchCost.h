//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class H5TinyAppPerfContext, NSString;

@interface H5TinyAppPerfPageSwitchCost : NSObject
{
    double _timePagePushStart;
    NSString *_fromUrl;
    NSString *_toUrl;
    unsigned long long _pushViewLevel;
    H5TinyAppPerfContext *_context;
}

- (void).cxx_destruct;
- (void)onPageLoadComplete:(id)arg1 viewLevel:(unsigned long long)arg2;
- (void)onPushStart:(id)arg1 viewLevel:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1;

@end

