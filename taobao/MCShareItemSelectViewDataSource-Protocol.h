//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCShareItemSelectView, NSString;
@protocol MCShareItemObject;

@protocol MCShareItemSelectViewDataSource <NSObject>
- (unsigned long long)maxCommitItemNumberForShareItemSelectView:(MCShareItemSelectView *)arg1;
- (id <MCShareItemObject>)shareItemSelectView:(MCShareItemSelectView *)arg1 itemObjectForRow:(unsigned long long)arg2 inContentTab:(unsigned long long)arg3;
- (long long)shareItemSelectView:(MCShareItemSelectView *)arg1 numberOfRowsInContentTab:(unsigned long long)arg2;
- (NSString *)shareItemSelectView:(MCShareItemSelectView *)arg1 titleForTabIndex:(unsigned long long)arg2;
- (unsigned long long)selectedTabIndexOfShareItemSelectView:(MCShareItemSelectView *)arg1;
- (unsigned long long)contentTabNumberOfShareItemSelectView:(MCShareItemSelectView *)arg1;
@end
