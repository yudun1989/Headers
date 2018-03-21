//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TBIMGroupAdapter, TBIMGroupUserAdapter;

@protocol MKTBizConfig <NSObject>

@optional
- (_Bool)needUserCustomItemUrlForGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canShowNoticeBarForGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canCustomFunctionalMenuWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canEditGroupAnnouncementWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canShowQRCodeItemWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canShowGroupNameWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canShowDeleteEntranceWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)canShowAddEntranceWithGroupInfo:(id <TBIMGroupAdapter>)arg1 groupUser:(id <TBIMGroupUserAdapter>)arg2;
- (_Bool)isNeedCheckJoinConditionWithGroupInfo:(id <TBIMGroupAdapter>)arg1;
@end

