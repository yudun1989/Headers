//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVRequestInterceptorProtocol-Protocol.h"
#import "WVRequestRewriterProtocol-Protocol.h"

@class NSString;
@protocol RangerServiceProtocol;

@interface WVTBRangerHandler : NSObject <WVRequestRewriterProtocol, WVRequestInterceptorProtocol>
{
    id <RangerServiceProtocol> _rangerService;
}

+ (void)init;
@property(retain, nonatomic) id <RangerServiceProtocol> rangerService; // @synthesize rangerService=_rangerService;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 canInterceptRequest:(id)arg2 withNavigation:(id)arg3;
- (_Bool)rewrite:(id)arg1 phase:(long long)arg2;
- (_Bool)rewrite:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

