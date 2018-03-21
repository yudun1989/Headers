//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "FavSecurityDelegate-Protocol.h"
#import "FavoritesAsyncUploadMgrDelegate-Protocol.h"
#import "FavoritesBatchDelMgrDelegate-Protocol.h"
#import "FavoritesBatchGetMgrDelegate-Protocol.h"
#import "FavoritesDownloadMgrDelegate-Protocol.h"
#import "FavoritesSearchMgrDelegate-Protocol.h"
#import "FavoritesSyncMgrDelegate-Protocol.h"
#import "FavoritesUploadMgrDelegate-Protocol.h"
#import "IClearDataMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCScheduleLogicControllerDelegate-Protocol.h"

@class FavSecurityLogic, FavoritesAsyncUploadMgr, FavoritesBatchDelMgr, FavoritesBatchGetMgr, FavoritesDownloadMgr, FavoritesItemDB, FavoritesRepairSvrDataLogic, FavoritesReportLogic, FavoritesSearchMgr, FavoritesSetting, FavoritesSyncMgr, FavoritesTagMgr, FavoritesUploadMgr, MyFavoritesDB, NSMutableArray, NSObject, NSString, WCScheduleLogicController;
@protocol OS_dispatch_semaphore;

@interface FavoritesMgr : MMService <IClearDataMgrExt, WCScheduleLogicControllerDelegate, MMService, PBMessageObserverDelegate, FavoritesUploadMgrDelegate, FavoritesDownloadMgrDelegate, FavoritesBatchGetMgrDelegate, FavoritesSearchMgrDelegate, FavoritesSyncMgrDelegate, FavoritesAsyncUploadMgrDelegate, FavoritesBatchDelMgrDelegate, FavSecurityDelegate>
{
    FavoritesItemDB *_favItemDB;
    MyFavoritesDB *_favDB;
    FavoritesUploadMgr *_favUploadMgr;
    FavoritesDownloadMgr *_favDownloadMgr;
    FavoritesSearchMgr *_favSearchMgr;
    FavoritesTagMgr *_favTagMgr;
    FavoritesSyncMgr *_favSyncMgr;
    FavoritesAsyncUploadMgr *_favAsyncUploadMgr;
    FavoritesBatchDelMgr *_batchDelMgr;
    FavoritesBatchGetMgr *_batchGetMgr;
    FavoritesRepairSvrDataLogic *_repairSvrDataLogic;
    FavSecurityLogic *_securityLogic;
    _Bool _isCheckingItem;
    NSMutableArray *_removingItemsArray;
    FavoritesSetting *_setting;
    unsigned int m_curMinItemUpdateTime;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool m_bCustomUsedCapacity_on;
    int m_usedCapacity;
    WCScheduleLogicController *_scheduleLogicController;
    FavoritesReportLogic *_reportLogic;
}

@property(retain, nonatomic) FavoritesReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) FavoritesSetting *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(id)arg3;
- (void)checkNeedUpdateScheduleItem:(id)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (id)getLastUpdateFavItem;
- (id)getLastFavItem;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemByfavId:(unsigned int)arg1;
- (id)getFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavMusicList;
- (void)search:(id)arg1 byType:(int)arg2 andTags:(id)arg3;
- (_Bool)updateItem:(id)arg1 tags:(id)arg2;
- (id)getItemTags:(unsigned int)arg1;
- (id)getAllTags;
- (void)updateItemTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (_Bool)updateItemXml:(id)arg1;
- (void)onSecurityCheckFail:(int)arg1;
- (void)onSecurityCheckOK:(int)arg1;
- (id)getSemaphore;
- (void)onBatchDelItemSuccess;
- (void)OnNeedUpdateFavInfo;
- (void)OnSyncResult:(int)arg1;
- (void)OnSearch:(id)arg1;
- (id)GetNextBatchGetList;
- (void)batchDownloadItemList:(id)arg1;
- (void)onBatchGetItemList:(id)arg1 ErrCode:(int)arg2;
- (void)onDownloadFavoritesItemFail:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)BroadcastDownloadFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (void)onAsyncUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)BroadcastAddFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetFavInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleModifyFavItemTagOk:(id)arg1;
- (void)handleModifyFavItemDescriptionOk:(id)arg1;
- (unsigned long long)getUserUsedCapacity;
- (void)setUserUsedCapacity:(int)arg1;
- (_Bool)getCustomUsedCapacity;
- (void)setCustomUsedCapacity:(_Bool)arg1;
- (_Bool)isSaveNoteAsImageEnable;
- (_Bool)isNoteShareMomentEnable;
- (unsigned long long)getTotalCapacity;
- (unsigned long long)getUsedCapacity;
- (void)cancelCheckNoteSecurity:(unsigned int)arg1;
- (void)checkNoteSecurity:(id)arg1;
- (void)batchGetFavItem:(int)arg1;
- (id)getDownloadPausedItemList;
- (id)getUploadPausedItemList;
- (id)getDownloadingItemList;
- (id)getUploadFailedItemList;
- (id)getUploadingItemList;
- (void)restartAllUploadFailedItems;
- (_Bool)isAutoUploadOrDownload;
- (_Bool)pauseDownloadFavoritesItem:(id)arg1;
- (_Bool)pauseUploadFavoritesItem:(unsigned int)arg1;
- (_Bool)startDownloadDataWrapPrior:(id)arg1;
- (_Bool)startDownloadFavoritesItem:(id)arg1 ISPriority:(_Bool)arg2;
- (_Bool)startUploadFavoritesItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)updateCapacityInfo;
- (void)checkBatchDelQueue;
- (_Bool)updateItem:(id)arg1 Description:(id)arg2 Time:(unsigned int)arg3;
- (_Bool)updateItem:(id)arg1 Remark:(id)arg2 Time:(unsigned int)arg3;
- (void)updateItemUpdateTime:(id)arg1;
- (void)search:(id)arg1 byType:(int)arg2;
- (_Bool)delAllFavoritesItems;
- (_Bool)batchDelFavoritesItem:(id)arg1;
- (void)removeItemFile:(id)arg1;
- (_Bool)delFavoritesItems:(id)arg1;
- (_Bool)delFavoritesItem:(id)arg1;
- (_Bool)delFavoritesItemById:(unsigned int)arg1;
- (_Bool)updateFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)updateFavoritesItem:(id)arg1;
- (_Bool)addFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)addFavoritesItem:(id)arg1;
- (_Bool)tryCalculateFavItemSize;
- (void)getNextPageFavoritesCapacityListByCurMinDataSize:(unsigned int)arg1;
- (void)getFirstPageFavoritesCapacityList;
- (void)getNextPageFavoritesList:(int)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (void)getFirstPageFavoritesList:(int)arg1;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)clearSyncKey;
- (void)dealloc;
- (void)saveSetting;
- (void)loadFavoritesSetting;
- (void)initDB:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

