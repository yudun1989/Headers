//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIORichModel.h>

#import <QQMainProject/QQAIOFAModel-Protocol.h>

@class FAModel, NSString, QQChatImageMetaInfo;

@interface QQAIOFileImgModel : QQAIORichModel <QQAIOFAModel>
{
    FAModel *_fileModel;
    _Bool _isDownloadingThumb;
    unsigned long long _uJobId;
    _Bool _aioThumbFail;
    QQChatImageMetaInfo *_imageMetaInfo;
    int _mediaType;
}

+ (id)getImageMetaInfo:(id)arg1;
+ (id)modeWithMessageModelAsync:(id)arg1;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool aioThumbFail; // @synthesize aioThumbFail=_aioThumbFail;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (void)removeThumbFromCache;
- (_Bool)canPhotoBrowser;
- (_Bool)isSendCanceled;
- (void)cancelSendFile;
- (void)downThumb;
- (id)process;
- (_Bool)loading;
- (_Bool)downloading;
- (_Bool)uploading;
- (struct CGSize)getChatFitSize;
- (void)removeChatImageMetaInfo;
- (id)getChatImageMetaInfo;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellViewClassName;
- (id)cellClassName;
- (void)dealloc;
- (void)prepareFileToImageSendPath;
- (void)syncFileModel;
- (id)initWithMessageModel:(id)arg1 syncFAModel:(_Bool)arg2;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDownloadingThumb; // @dynamic isDownloadingThumb;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long uJobId; // @dynamic uJobId;

@end

