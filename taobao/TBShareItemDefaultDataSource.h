//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ShareItemDelegate-Protocol.h"

@class NSString;

@interface TBShareItemDefaultDataSource : NSObject <ShareItemDelegate>
{
}

- (id)pageTitle;
- (void)searchIMShareGoodsWithArgs:(id)arg1 keyword:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getIMShareGoodsAtTabIndex:(int)arg1 WithPageStart:(id)arg2 otherData:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)getIMShareGoodsAtTabIndex:(int)arg1 WithPageStart:(id)arg2 otherData:(id)arg3 args:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (int)maxCountForShare;
- (id)getShareItem;
- (void)trackUserSelectItemAtTabIndex:(int)arg1;
- (void)trackUserCancelItemAtTabIndex:(int)arg1;
- (_Bool)needSearch;
- (id)getParameters;
- (void)sendShareItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

