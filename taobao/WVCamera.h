//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "WVImagePickerControllerDelegate-Protocol.h"

@class NSDictionary, NSString, UIPopoverController;

@interface WVCamera : WVDynamicHandler <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, WVImagePickerControllerDelegate>
{
    _Bool _takingPhoto;
    NSDictionary *_requestParam;
    long long _uploadType;
    NSString *_takingPhotoType;
    UIPopoverController *_popover;
    CDUnknownBlockType _callback;
}

+ (_Bool)checkCameraPermission;
+ (_Bool)checkPhotoPermission;
+ (void)takePhotoInteract:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSString *takingPhotoType; // @synthesize takingPhotoType=_takingPhotoType;
@property(nonatomic) _Bool takingPhoto; // @synthesize takingPhoto=_takingPhoto;
@property(nonatomic) long long uploadType; // @synthesize uploadType=_uploadType;
@property(retain, nonatomic) NSDictionary *requestParam; // @synthesize requestParam=_requestParam;
- (void).cxx_destruct;
- (void)fireEventNotifyForTakePhotoSuccess:(id)arg1;
- (void)fireEventNotifyForPressPhotoSuccess;
- (void)fireEventNotifyForSavePhotoSuccess;
- (void)markChooseImageEnd;
- (void)markBeginProcess;
- (id)dictionaryParam:(id)arg1;
- (void)imagePickerControllerDidCancelSelecting:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingAssets:(id)arg2;
- (void)callbackNoPermission;
- (void)callbackCancel;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)saveImage:(id)arg1;
- (id)compressImage:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)showCamera:(id)arg1 isPhotoLibrary:(_Bool)arg2;
- (void)startPhotoWithType:(long long)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)chooseImage;
- (void)confirmUploadPhoto:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)takePhotoPlus:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)takePhoto:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

