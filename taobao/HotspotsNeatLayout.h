//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HotspotsLayout-Protocol.h"

@class NSString, SearchHotspotView;

@interface HotspotsNeatLayout : NSObject <HotspotsLayout>
{
    SearchHotspotView *_hotspotsView;
}

@property(nonatomic) __weak SearchHotspotView *hotspotsView; // @synthesize hotspotsView=_hotspotsView;
- (void).cxx_destruct;
- (void)layoutHotspots:(id)arg1 maxLine:(long long)arg2 eachLineCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

