//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GTLRObject.h"

@class NSDictionary;

@interface GMSx_GTLRBatchResult : GMSx_GTLRObject
{
    NSDictionary *_successes;
    NSDictionary *_failures;
    NSDictionary *_responseHeaders;
}

@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain) NSDictionary *failures; // @synthesize failures=_failures;
@property(retain) NSDictionary *successes; // @synthesize successes=_successes;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
