//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCartFeatureComponent-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TBCartFeatureComponent : NSObject <TBCartFeatureComponent>
{
    NSMutableDictionary *_data;
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *exceedMaxCountTips;
@property(nonatomic) _Bool clientTotalPrice;
@property(retain, nonatomic) NSString *forceReloadText;
@property(retain, nonatomic) NSString *forceReloadTitle;
@property(nonatomic) _Bool forceReload;
@property(nonatomic) _Bool isAsyncCheck;
@property(nonatomic) long long maxCheckCount;
@property(nonatomic, getter=isGzip) _Bool gzip;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

