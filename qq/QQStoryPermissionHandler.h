//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQStoryPermissionViewControllerDelegate-Protocol.h>
#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>

@class MulMemSelUserInfo, NSMutableArray, NSString;

@interface QQStoryPermissionHandler : NSObject <QQStoryPermissionViewControllerDelegate, TBBizNetworkLogicDelegate>
{
    _Bool _isSetPermissionType;
    unsigned long long _selectedPermissionType;
    _Bool _needLoadForbidden;
    NSMutableArray *_selectedMemsUinList;
    NSMutableArray *_selectedMemList;
    NSMutableArray *_groupModelList_show;
    NSMutableArray *_groupModelList_shield;
    MulMemSelUserInfo *_mulMemSelUserInfo;
}

+ (id)DidCancelPublishOptionSetting;
+ (id)DidFinishPublishOptionSetting;
+ (id)sharedInstance;
@property(nonatomic) _Bool needLoadForbidden; // @synthesize needLoadForbidden=_needLoadForbidden;
@property(retain, nonatomic) MulMemSelUserInfo *mulMemSelUserInfo; // @synthesize mulMemSelUserInfo=_mulMemSelUserInfo;
@property(retain, nonatomic) NSMutableArray *groupModelList_shield; // @synthesize groupModelList_shield=_groupModelList_shield;
@property(retain, nonatomic) NSMutableArray *groupModelList_show; // @synthesize groupModelList_show=_groupModelList_show;
@property(retain, nonatomic) NSMutableArray *selectedMemList; // @synthesize selectedMemList=_selectedMemList;
@property(retain, nonatomic) NSMutableArray *selectedMemsUinList; // @synthesize selectedMemsUinList=_selectedMemsUinList;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (unsigned long long)getPermissionCaches;
- (void)syncGroupModelState:(id)arg1 withList:(id)arg2;
- (void)QQStoryPermissionSyncGroupModelStateWithShowlist:(id)arg1 shieldList:(id)arg2;
- (void)QQStoryPermissionFinishWithSelectedMemList:(id)arg1 selectedType:(unsigned long long)arg2;
- (void)QQStoryPermissionFinishWithForbiddenList:(_Bool)arg1;
- (void)showPageViewControllerFrom:(id)arg1;
- (void)loadGroupModeList:(id)arg1;
- (void)loadQQFriendsData;
- (void)savePublishLimit;
- (void)clearSetting;
- (unsigned long long)getSelectedPermissionType;
- (void)setSelectedPermissionType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

