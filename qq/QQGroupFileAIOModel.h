//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class NSString, QQGroupFileCellView, QQGroupFileInfo, QQGroupFileTask;

@interface QQGroupFileAIOModel : QQAIOMsgModel
{
    double _cellHeight;
    NSString *_fileName;
    QQGroupFileInfo *_fileInfo;
    QQGroupFileTask *_task;
    unsigned long long _fileSize;
    QQGroupFileCellView *_cellView;
    struct CGSize _imageBubbleSize;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) __weak QQGroupFileCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) struct CGSize imageBubbleSize; // @synthesize imageBubbleSize=_imageBubbleSize;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) QQGroupFileTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSString *localPath;
- (void)transferProgressChanged:(id)arg1;
- (void)transferStatusChanged:(id)arg1;
- (_Bool)shouldDisplaySelfNick;
- (double)cellHeight;
- (_Bool)forceImageCellHeight;
- (_Bool)allowPreviewVideo;
- (_Bool)allowPreviewImage;
- (id)cellViewClassName;
- (id)cellClassName;
- (void)calculateBubbleImageSizeWithOriginImageSize:(struct CGSize)arg1;
- (void)reloadBubbleSize;
@property(readonly, nonatomic) unsigned long long videoDuration;
- (void)initFileInfoWithMessageModel:(id)arg1;
- (id)initWithMessageModel:(id)arg1;

@end

