//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBURLActionRequestMiddleware-Protocol.h"

@class NSArray, NSString;

@interface TBTradeSafePayURLActionRequestMiddleware : NSObject <TBURLActionRequestMiddleware>
{
    NSArray *_alipayHostArray;
    NSArray *_alipayPathArray;
}

@property(retain, nonatomic) NSArray *alipayPathArray; // @synthesize alipayPathArray=_alipayPathArray;
@property(retain, nonatomic) NSArray *alipayHostArray; // @synthesize alipayHostArray=_alipayHostArray;
- (void).cxx_destruct;
- (id)processURLActionRequest:(id)arg1;
- (_Bool)handleAlipayFeedBackAction:(id)arg1;
- (_Bool)handleAlipayAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

