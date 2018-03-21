//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQVipFunctionDownloadProtocol-Protocol.h>

@class ComicInfoModel, ComicManageDownloadStatus, NSLock, NSMutableDictionary, NSString, NSThread, QQLockDictionary, QQVipFunctionComicDBModel, QQVipFunctionComicDownloadTable;

@interface QQVipFunctionComicManageObj : NSObject <QQVipFunctionDownloadProtocol>
{
    ComicInfoModel *_commicModel;
    NSMutableDictionary *_sectionsDic;
    QQLockDictionary *_sectionModelDic;
    ComicManageDownloadStatus *_comicStatus;
    int _xo;
    QQVipFunctionComicDownloadTable *_table;
    QQVipFunctionComicDBModel *_dbModel;
    NSLock *_lock;
    NSThread *_callBackThread;
    NSString *_uin;
}

- (void).cxx_destruct;
- (void)notifySectionStatus:(id)arg1;
- (void)notifyActionResult:(id)arg1 useCallBackThread:(_Bool)arg2;
- (void)notifyComicManageStatus;
- (void)notifyActionResultInCallBackThread:(id)arg1;
- (void)syncToDBAndNotifyInCallBackThread:(id)arg1;
- (void)deleteSectionRecordsAndNotify:(id)arg1 whthCompleteBlock:(CDUnknownBlockType)arg2;
- (void)deleteSectionRecord:(id)arg1;
- (void)syncToDBAndNotify:(id)arg1;
- (void)syncToDBAndNotify:(id)arg1 whthCompleteBlock:(CDUnknownBlockType)arg2;
- (void)syncSectionStateToDBInCallBackThread:(id)arg1;
- (void)syncSectionStateToDB:(id)arg1 whthCompleteBlock:(CDUnknownBlockType)arg2;
- (void)downloadNewTask:(id)arg1;
- (void)addNewRecord:(id)arg1;
- (void)thraedSafeSetObj:(id)arg1 forKey:(id)arg2;
- (id)thraedSafeObjectForKey:(id)arg1;
- (id)taskForSectionID:(id)arg1;
- (int)seq;
- (void)DownloadQueue:(id)arg1 didCancel:(id)arg2;
- (void)DownloadQueue:(id)arg1 didFailed:(id)arg2;
- (void)DownloadQueue:(id)arg1 didSuccess:(id)arg2;
- (void)DownloadQueue:(id)arg1 didDownloading:(id)arg2;
- (void)DownloadQueue:(id)arg1 didStart:(id)arg2;
- (void)callbackMainThread:(void *)arg1;
- (void)doDoNothing:(id)arg1;
- (void)notifyComicStatusWhenDownloadingArrChanged;
- (void)setSectionDBStatus:(id)arg1 withStatus:(unsigned long long)arg2;
- (void)updateSectionModelDic:(id)arg1;
- (void)updateHistoryDownloadState;
- (void)resumeAllPauseSectionTask;
- (void)pauseAllSectionTask;
- (_Bool)deleteSectionArr:(id)arg1;
- (void)cancelDownloadSectionArr:(id)arg1;
- (int)asynDownloadSectionArr:(id)arg1;
- (int)asynDownloadSection:(id)arg1;
- (int)dbModelToResult:(id)arg1;
- (id)allSectionTaskDBModel;
- (id)runningTaskIDArr;
- (id)queryComicByID;
- (id)querySectionDBModelArrByDBStatus:(unsigned long long)arg1;
- (id)querySectionByID:(id)arg1;
- (void)checkLastDownloadStatus;
- (void)loadHistoryDownloadStatus;
- (id)initWithComicModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSThread *callBackThread; // @dynamic callBackThread;
@property(retain, nonatomic) ComicManageDownloadStatus *comicStatus; // @dynamic comicStatus;
@property(retain, nonatomic) ComicInfoModel *commicModel; // @dynamic commicModel;
@property(retain, nonatomic) QQVipFunctionComicDBModel *dbModel; // @dynamic dbModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSLock *lock; // @dynamic lock;
@property(retain, nonatomic) QQLockDictionary *sectionModelDic; // @dynamic sectionModelDic;
@property(retain, nonatomic) NSMutableDictionary *sectionsDic; // @dynamic sectionsDic;
@property(readonly) Class superclass;
@property(retain, nonatomic) QQVipFunctionComicDownloadTable *table; // @dynamic table;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;

@end

