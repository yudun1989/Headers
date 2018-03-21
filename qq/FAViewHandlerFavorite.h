//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAViewHandlerOffline.h>

#import <QQMainProject/FavFileDelegate-Protocol.h>

@class NSString;

@interface FAViewHandlerFavorite : FAViewHandlerOffline <FavFileDelegate>
{
}

- (void)onCallback_OnlinePreview:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Download:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Thumbnail:(int)arg1 errorType:(int)arg2;
- (void)alertViewClicked:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didFileTransferUpdate:(id)arg1;
- (void)onDownloadAction;
- (void)onStopAction;
- (void)onOperateAction;
- (id)getSizeTimeLabelText;
- (_Bool)canFreeForward;
- (_Bool)canShowProgress;
- (int)getCurrentViewMode;
- (_Bool)canShowRightButton;
- (_Bool)isKindOfHandler;
- (int)businessType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

