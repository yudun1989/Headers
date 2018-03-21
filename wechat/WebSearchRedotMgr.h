//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMsgExt-Protocol.h"

@class WSRedPointCtrlInfo;

@interface WebSearchRedotMgr : NSObject <IMsgExt>
{
    WSRedPointCtrlInfo *_ctrlInfo;
}

- (void).cxx_destruct;
- (void)tryInitCtrlInfo;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getWSRedPointInfo:(_Bool)arg1;
- (void)tryUpdateRecommendReddotClearedTimeStamps:(unsigned int)arg1;
- (void)clearFFBrowseRedot;
- (void)clearFFSearchRedot;
- (_Bool)shouldShowFFBrowseRedot:(_Bool)arg1;
- (_Bool)shouldShowFFSearchRedot:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForSearch:(_Bool)arg1;
- (_Bool)shouldShowFindFriendTabRedotForRecommend:(_Bool)arg1;
- (void)loadData;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

@end

