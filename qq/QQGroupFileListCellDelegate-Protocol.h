//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QQGroupFileListCell;

@protocol QQGroupFileListCellDelegate <NSObject>

@optional
- (void)cellDidClickDownloadButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickGroupName:(QQGroupFileListCell *)arg1;
- (void)cellDidClickRenameButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickMoveButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickDeleteFolderButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickDeleteLocalFileButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickDeleteServerFileButton:(QQGroupFileListCell *)arg1;
- (void)cellDidClickUploaderName:(QQGroupFileListCell *)arg1;
@end

