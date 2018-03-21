//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEEPhotoPickerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class ASPhotoEditorController, BEEPhotoPicker, NSString, UINavigationController;

@interface ASImagePickerController : NSObject <BEEPhotoPickerDelegate, UINavigationControllerDelegate>
{
    _Bool _originalStatusBarHidden;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _cancelHandler;
    UINavigationController *_currentNavigationController;
    BEEPhotoPicker *_imagePicker;
    ASPhotoEditorController *_editorController;
    long long _originalStatusBarStyle;
}

@property(nonatomic) long long originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
@property(nonatomic) _Bool originalStatusBarHidden; // @synthesize originalStatusBarHidden=_originalStatusBarHidden;
@property(retain, nonatomic) ASPhotoEditorController *editorController; // @synthesize editorController=_editorController;
@property(retain, nonatomic) BEEPhotoPicker *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) __weak UINavigationController *currentNavigationController; // @synthesize currentNavigationController=_currentNavigationController;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imageFromMediaInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (void)takePhoto;
- (void)takeLibrary;
- (void)restoreStatusBarStatus;
- (void)saveStatusBarStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

