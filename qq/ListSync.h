//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/FavAddDelegate-Protocol.h>
#import <QQMainProject/PostURLConnectionDelegate-Protocol.h>

@class NSMutableArray, NSString, PostURLConnection;
@protocol ListSyncDelegate;

@interface ListSync : NSObject <FavAddDelegate, PostURLConnectionDelegate>
{
    PostURLConnection *_connFetchList;
    PostURLConnection *_connFetchDescendingList;
    PostURLConnection *_connFetchDetail;
    PostURLConnection *_connGetShareUrl;
    PostURLConnection *_connGetSummary;
    PostURLConnection *_connCompatibleHtmlInfo;
    PostURLConnection *_connGetCustomGroupInfo;
    PostURLConnection *_connAddCustomGroupInfo;
    PostURLConnection *_connModCustomGroupInfo;
    PostURLConnection *_connDelCustomGroupInfo;
    PostURLConnection *_connModCollectionCustomGroupInfo;
    PostURLConnection *_connGetCollectionGroupList;
    NSMutableArray *_taskAddCmdArray;
    NSMutableArray *_connDelCmdArray;
    id <ListSyncDelegate> _fetcherDelegate;
}

- (void)OnModifyCallback:(int)arg1 errorType:(int)arg2 model:(id)arg3 userInfo:(id)arg4;
- (void)OnAdderCallback:(int)arg1 errorType:(int)arg2 model:(id)arg3 userInfo:(id)arg4;
- (void)OnSuccRsp_ModCollection2Group:(id)arg1;
- (void)OnSuccRsp_GetCollection2GroupList:(id)arg1;
- (void)OnSuccRsp_GetCustomGroup:(id)arg1;
- (void)OnSuccRsp_DelCustomGroup:(id)arg1;
- (void)onSuccRsp_ModCustomGroup:(id)arg1;
- (void)onSuccRsp_AddCustomGroup:(id)arg1;
- (void)onSuccRsp_delFav:(id)arg1;
- (void)onSuccRsp_getCollectionSummary:(id)arg1;
- (void)onSuccRsp_getCompatibleHtmlInfo:(id)arg1;
- (void)onSuccRsp_getShareUrl:(id)arg1;
- (void)onSuccRsp_detailFetch:(id)arg1;
- (id)createModelByProtoObj:(struct CPBMessageDecoder *)arg1;
- (Class)modelClassByType:(int)arg1;
- (void)onSuccRsp_listFetch:(id *)arg1;
- (void)listFetchCallback:(int)arg1 errorCode:(int)arg2 errorType:(int)arg3 addList:(id)arg4 delList:(id)arg5;
- (void)onSuccRsp_listDescendingFetch:(id)arg1;
- (void)onSuccRsp_listAscendingFetch:(id)arg1;
- (void)didConnectionFailed:(id)arg1 Error:(id)arg2;
- (void)didConnectionFinished:(id)arg1;
- (_Bool)GetCollectionGroupList:(unsigned int)arg1 order_type:(unsigned int)arg2 page_size:(unsigned int)arg3;
- (_Bool)ModCollectionCustomGroupinfo:(id)arg1 custom_group_id:(unsigned int)arg2;
- (_Bool)DelCustomGroup:(id)arg1;
- (_Bool)ModCustomGroupInfo:(unsigned int)arg1 name:(id)arg2;
- (_Bool)AddCustomGroupInfo:(id)arg1;
- (_Bool)GetCustomGroupInfo:(unsigned int)arg1 modi_group_time:(unsigned int)arg2;
- (_Bool)getSummaries:(id)arg1;
- (_Bool)getSummary:(id)arg1;
- (_Bool)getCompatibleHtmlInfo:(id)arg1;
- (_Bool)getShareUrl:(id)arg1;
- (_Bool)sendDelCmdInternal;
- (_Bool)sendDelCmd:(id)arg1;
- (_Bool)isModelUploading:(unsigned long long)arg1;
- (_Bool)cancelAddFav:(unsigned long long)arg1;
- (_Bool)sendAddCmdInternal;
- (_Bool)sendAddCmd:(id)arg1 userInfo:(id)arg2;
- (_Bool)sendAddCmd:(id)arg1;
- (unsigned long long)getFetchingDetailId;
- (_Bool)fetchDetail:(id)arg1;
- (_Bool)doFetch:(unsigned long long)arg1 numPerReq:(int)arg2 policy:(int)arg3 orderType:(int)arg4 repSource:(int)arg5 action:(int)arg6 connection:(id *)arg7;
- (_Bool)fetchDecreased:(unsigned long long)arg1 numPerReq:(int)arg2 policy:(int)arg3 repSource:(int)arg4;
- (_Bool)fetchIncreased:(unsigned long long)arg1 numPerReq:(int)arg2 policy:(int)arg3 repSource:(int)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

