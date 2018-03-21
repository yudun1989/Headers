//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/IUserSummaryService-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQDynamicAvatarUploader, UserSummaryModel;

@interface UserSummaryServiceImpl : NSObject <IUserSummaryService, IEngineDispatchDelegate, DBAsyncCallbackProtocol>
{
    UserSummaryModel *_curModel;
    NSTimer *_timer;
    NSMutableDictionary *_requestQueque;
    NSMutableArray *_fileTransferQueue;
    unsigned int _requestId;
    unsigned int _audioSeconds;
    NSMutableDictionary *_dicBlock;
    long long _importPhotoQueryTimes;
    int _xo;
    long long _uploadAvatarTaskID;
    unsigned int _searchType;
    _Bool _oldSearch;
    NSMutableDictionary *_dicSummaryCardRequest;
    NSMutableDictionary *_appleWatchDic;
    QQDynamicAvatarUploader *_uploader;
    NSMutableDictionary *_cancelUploadFlags;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *cancelUploadFlags; // @synthesize cancelUploadFlags=_cancelUploadFlags;
@property(retain, nonatomic) QQDynamicAvatarUploader *uploader; // @synthesize uploader=_uploader;
@property(retain) NSMutableDictionary *appleWatchDic; // @synthesize appleWatchDic=_appleWatchDic;
@property(retain, nonatomic) NSMutableDictionary *dicSummaryCardRequest; // @synthesize dicSummaryCardRequest=_dicSummaryCardRequest;
- (void).cxx_destruct;
- (void)receiveLtSummaryMsg:(CDStruct_7895f40e)arg1;
- (id)reqLtSummary:(unsigned long long)arg1 phoneNum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)respQueryImportPhotoState:(int)arg1 buffer:(char *)arg2 DataLen:(int)arg3 Seq:(int)arg4;
- (void)queryImportPhotoState;
- (void)requestQueryImportPhotoStateCompleted:(CDUnknownBlockType)arg1;
- (void)respSessionKeyForUploadImage:(int)arg1 buffer:(char *)arg2 DataLen:(int)arg3 Seq:(int)arg4;
- (int)requestSessionKeyForUploadImageCompleted:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)sessionKeyRequestBlockFromDicBlockWithReq:(int)arg1;
- (void)addSessionKeyRequestBlockToDicBlock:(CDUnknownBlockType)arg1 withReq:(int)arg2;
- (void)respImportQzonePhotos:(int)arg1 buffer:(char *)arg2 DataLen:(int)arg3 Seq:(int)arg4;
- (int)requestImportQzonePhotos:(unsigned int)arg1 serviceType:(unsigned int)arg2;
- (id)respNearbyPhoto:(int)arg1 buffer:(char *)arg2 DataLen:(int)arg3 Seq:(int)arg4;
- (id)respNearbyPhoto:(struct RspBody *)arg1 errorCode:(int)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (int)requestUploadQQFaceWithFileTrans:(id)arg1 videoList:(id)arg2 videoInfo:(id)arg3;
- (void)cancelUploadAvatar;
- (void)respReportIllegalUser:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)delayPostReportIllegalSuccNotification:(id)arg1;
- (_Bool)requestReportIllegalUser:(long long)arg1;
- (void)respModifyRemark:(id)arg1;
- (_Bool)requestModifyRemark:(long long)arg1 remark:(id)arg2;
- (int)requestSearch:(id)arg1 countryCode:(id)arg2 type:(unsigned int)arg3 start:(unsigned int)arg4 count:(unsigned int)arg5 fliter:(int)arg6;
- (int)requestSearch:(id)arg1 countryCode:(id)arg2;
- (void)respUserSummary:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)updateAvatarPendantIDProperty:(long long)arg1 uin:(id)arg2;
- (void)respEIMUserSummary:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (int)requestEIMUserSummary:(long long)arg1;
- (int)requestUserSummary:(long long)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3 secureSig:(id)arg4;
- (int)requestUserSummary:(long long)arg1 tinyID:(long long)arg2 comeFrom:(int)arg3 groupCode:(long long)arg4 secureSig:(id)arg5 needDateData:(_Bool)arg6 uSource:(int)arg7;
- (int)requestUserSummaryBySearchName:(id)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3 secureSig:(id)arg4;
- (int)requestUserSummaryBySearchName:(id)arg1 comeFrom:(int)arg2 groupCode:(long long)arg3;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)msfSendAndRecvRequestResult:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)openUsersummaryPage:(long long)arg1 type:(int)arg2;
- (void)removeRequestItem:(id)arg1;
- (void)reset;
- (void)setCurModelValue:(id)arg1;
- (id)getModelWithUin:(long long)arg1;
- (void)saveModelName:(id)arg1 withUin:(long long)arg2;
- (void)terminateAction;
- (void)LogoutNotification;
- (void)dealloc;
- (id)init;
- (void)parseCampusFields:(id)arg1 response:(const struct RespSummaryCard *)arg2;

// Remaining properties
@property(retain, nonatomic) UserSummaryModel *curModel; // @dynamic curModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableDictionary *dicBlock; // @dynamic dicBlock;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long importPhotoQueryTimes; // @dynamic importPhotoQueryTimes;
@property(nonatomic) _Bool oldSearch; // @dynamic oldSearch;
@property(nonatomic) unsigned int searchType; // @dynamic searchType;
@property(readonly) Class superclass;

@end

