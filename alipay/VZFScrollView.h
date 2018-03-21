//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "VZFNodeBackingViewInterface-Protocol.h"

@class NSString;

@interface VZFScrollView : UIScrollView <VZFNodeBackingViewInterface>
{
}

- (void)vz_applyNodeAttributes:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)resetState;
- (void)didLeaveReusePool;
- (void)willEnterReusePool;
- (void)prepareForReuse;
- (void)dead;
- (void)born;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
