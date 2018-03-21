//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichShortVideoPreviewViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSDictionary, NSString, QQAsset, QQRichShortVideoPreviewViewController, QQUGCVideoPickerWrapper;

@interface QQJSBridgePublicAccountNewPlugin : QQWebViewPluginQQBizBase <QQMultiImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, QQRichShortVideoPreviewViewControllerDelegate>
{
    long long _groupID;
    QQAsset *_videoAsset;
    QQRichShortVideoPreviewViewController *_videoPreview;
    QQUGCVideoPickerWrapper *_videoPicker;
    NSDictionary *_requestQuery;
    unsigned long long _uploadScene;
}

@property(nonatomic) unsigned long long uploadScene; // @synthesize uploadScene=_uploadScene;
@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
- (void).cxx_destruct;
- (void)handleJsBridgeRequest_publicAccountNew_preloadNativeAdResource:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showNativeAd:(id)arg1;
- (void)previewControllerDidSelected:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)handleJsBridgeRequest_publicAccountNew_getLocalCache:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_updateTopicCardFollowInfo:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showCommentEditor:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showUGCVideoRecordPage:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showUGCVideoUploadPage:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showUGCEditPage:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showMultiBiuEditPage:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_reportpreloaddata:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_isEnabledRightButton:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_showPicture:(id)arg1;
- (void)handleJsBridgeRequest_publicAccountNew_chooseVideoFromAlbum:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

