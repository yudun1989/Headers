//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAListMgrBase.h>

#import <QQMainProject/FAOfflineFileDeleteDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FAListMgrCloud : FAListMgrBase <FAOfflineFileDeleteDelegate>
{
    NSMutableDictionary *_deleteTaskMap;
    NSMutableArray *_loadingListType;
    NSMutableDictionary *_fileListCache;
    NSMutableDictionary *_listFinishFlag;
    NSMutableDictionary *_typeVersionDict;
}

- (id)getlibName:(int)arg1;
- (_Bool)isCategoryType:(int)arg1;
- (int)getFAListCategoryType:(id)arg1;
- (long long)getWeiyunFileType:(id)arg1;
- (void)onOfflineFileDeleteFailedWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(id)arg3 error:(id)arg4;
- (void)onOfflineFileDeleteFinishWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(id)arg3;
- (void)offlineFileDeleteFailedWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(id)arg3 error:(id)arg4;
- (void)offlineFileDeleteFinishWithPeerUin:(unsigned long long)arg1 fileType:(unsigned int)arg2 fileID:(id)arg3;
- (void)cloudfileDeleteFailedWithFileID:(id)arg1 error:(id)arg2;
- (void)cloudfileDeleteFinishWithFileID:(id)arg1;
- (void)getOfflineFileListDidFailWithFailWithError:(id)arg1;
- (void)getOfflineFileListDidFinishWithRsp:(struct CrossBidProxyOfflineFileGetListMsgRsp *)arg1 offset:(unsigned int)arg2 fileNum:(unsigned int)arg3;
- (id)convertOfflineFileToFAModel:(const struct OfflineFileInfo *)arg1 isSend:(_Bool)arg2;
- (void)getFileListOfLibrary:(id)arg1 didFailWithError:(id)arg2;
- (void)getFileListOfLibrary:(id)arg1 didFinishWithFiles:(id)arg2 atOffset:(unsigned long long)arg3 hasmore:(_Bool)arg4;
- (void)categoryFileList:(id)arg1 lib:(id)arg2 start:(int)arg3 end:(int)arg4;
- (void)deleteOfflineFile:(id)arg1;
- (void)deleteWYFile:(id)arg1;
- (_Bool)isCloudFileDeleting:(id)arg1;
- (void)getWeiYunFileList:(id)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3;
- (void)getOfflineFileListFromstart:(unsigned short)arg1 toEnd:(unsigned short)arg2;
- (void)requestFileList:(int)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3;
- (void)getFileList:(int)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3 isForce:(_Bool)arg4;
- (void)onAccountLogout;
- (void)onAccountChanged;
- (void)clearFileList;
- (void)clearListFinishFlag;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

