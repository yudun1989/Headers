//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "TTBlockManagerDelegate-Protocol.h"

@class ArticleFriendModel, NSString, NewFriendListCellUnit, TTBlockManager;
@protocol BlockUsersListCellDelegate;

@interface BlockUsersListCell : SSThemedTableViewCell <TTBlockManagerDelegate>
{
    ArticleFriendModel *_blockUser;
    NewFriendListCellUnit *_listCellUnit;
    id <BlockUsersListCellDelegate> _delegate;
    TTBlockManager *_blockManager;
}

@property(retain, nonatomic) TTBlockManager *blockManager; // @synthesize blockManager=_blockManager;
@property(nonatomic) __weak id <BlockUsersListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NewFriendListCellUnit *listCellUnit; // @synthesize listCellUnit=_listCellUnit;
@property(retain, nonatomic) ArticleFriendModel *blockUser; // @synthesize blockUser=_blockUser;
- (void).cxx_destruct;
- (void)blockUserManager:(id)arg1 unblockResult:(_Bool)arg2 unblockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)blockUserManager:(id)arg1 blocResult:(_Bool)arg2 blockedUserID:(id)arg3 error:(id)arg4 errorTip:(id)arg5;
- (void)refreshListCellUnitRelationButtonType;
- (void)relationButtonClicked:(id)arg1;
- (void)refreshUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

