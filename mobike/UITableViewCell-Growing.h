//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GrowingEventProtocol-Protocol.h"

@class NSString;

@interface UITableViewCell (Growing) <GrowingEventProtocol>
- (_Bool)growingEventProtocolCanTrackWithType:(long long)arg1 triggerNode:(id)arg2;
- (id)growingHook_parentTableviewWeakShell;
- (void)setGrowingHook_parentTableviewWeakShell:(id)arg1;
- (id)growingHook_indexPath;
- (void)setGrowingHook_indexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

