//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AUDialogDelegate-Protocol.h"
#import "BEEDirectPreviewPickerDelegate-Protocol.h"
#import "BEEGridPickControllerDelegate-Protocol.h"
#import "BEENaviControllerDelegate-Protocol.h"
#import "BEEQuickPickViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AUActionSheet, AUToast, BEEAssetManager, BEEAssetPickedManager, BEEDirectPreviewPicker, BEEPhotoBrowser, DTNavigationController, NSArray, NSString, UIViewController;

@interface BEEPhotoPicker : NSObject <UIActionSheetDelegate, UIImagePickerControllerDelegate, BEENaviControllerDelegate, UINavigationControllerDelegate, BEEQuickPickViewDelegate, BEEDirectPreviewPickerDelegate, BEEGridPickControllerDelegate, AUDialogDelegate>
{
    _Bool _justPickVideo;
    _Bool _enablePickGif;
    _Bool _enablePickVideo;
    _Bool _enableQuickPick;
    _Bool _enablePhotoPreview;
    _Bool _enableSelectButton;
    _Bool _enableSerialNumber;
    _Bool _enableOriginPhotoForSelectOne;
    _Bool _enableEditingToCamera;
    _Bool _enterGridViewFirst;
    _Bool _enableSysNaviInPreview;
    _Bool _enableBottomViewInPreview;
    _Bool _hidePickOriginControl;
    _Bool _hideProcessingIndicator;
    _Bool _useFrontCamera;
    _Bool _fixOrientation;
    _Bool _noAnimationForDismissAssetPicker;
    _Bool _enableTapAssetToSend;
    _Bool _enableDoodle;
    _Bool _enablePickAssetInCloud;
    _Bool _shouldSyncAssetInCloud;
    _Bool _saveToAlbum;
    _Bool _enableEditVideo;
    _Bool _manuDismissAfterPicking;
    NSArray *_selectedAssetKeys;
    double _beautyLevel;
    NSString *_confirmButtonTitle;
    NSArray *_previewAssetArray;
    double _maximumVideoLength;
    double _minimumVideoLength;
    NSString *_remoteActionTitle;
    NSArray *_remoteSources;
    unsigned long long _scene;
    unsigned long long _errorCode;
    AUToast *_toastView;
    id _delegate;
    BEEAssetManager *_assetManager;
    BEEAssetPickedManager *_assetPickedManager;
    BEEPhotoBrowser *_photoBrowser;
    BEEDirectPreviewPicker *_directPreviewPicker;
    AUActionSheet *_actionSheet;
    UIViewController *_fromPresentedVC;
    DTNavigationController *_beeNaviVC;
    struct CGRect _actionSheetFrame;
}

+ (id)sharedPicker;
@property(nonatomic) _Bool manuDismissAfterPicking; // @synthesize manuDismissAfterPicking=_manuDismissAfterPicking;
@property(nonatomic) __weak DTNavigationController *beeNaviVC; // @synthesize beeNaviVC=_beeNaviVC;
@property(nonatomic) __weak UIViewController *fromPresentedVC; // @synthesize fromPresentedVC=_fromPresentedVC;
@property(nonatomic) struct CGRect actionSheetFrame; // @synthesize actionSheetFrame=_actionSheetFrame;
@property(retain, nonatomic) AUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) BEEDirectPreviewPicker *directPreviewPicker; // @synthesize directPreviewPicker=_directPreviewPicker;
@property(retain, nonatomic) BEEPhotoBrowser *photoBrowser; // @synthesize photoBrowser=_photoBrowser;
@property(retain, nonatomic) BEEAssetPickedManager *assetPickedManager; // @synthesize assetPickedManager=_assetPickedManager;
@property(retain, nonatomic) BEEAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AUToast *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSArray *remoteSources; // @synthesize remoteSources=_remoteSources;
@property(copy, nonatomic) NSString *remoteActionTitle; // @synthesize remoteActionTitle=_remoteActionTitle;
@property(nonatomic) double minimumVideoLength; // @synthesize minimumVideoLength=_minimumVideoLength;
@property(nonatomic) double maximumVideoLength; // @synthesize maximumVideoLength=_maximumVideoLength;
@property(nonatomic) _Bool enableEditVideo; // @synthesize enableEditVideo=_enableEditVideo;
@property(retain, nonatomic) NSArray *previewAssetArray; // @synthesize previewAssetArray=_previewAssetArray;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
@property(nonatomic) _Bool shouldSyncAssetInCloud; // @synthesize shouldSyncAssetInCloud=_shouldSyncAssetInCloud;
@property(nonatomic) _Bool enablePickAssetInCloud; // @synthesize enablePickAssetInCloud=_enablePickAssetInCloud;
@property(nonatomic) _Bool enableDoodle; // @synthesize enableDoodle=_enableDoodle;
@property(nonatomic) _Bool enableTapAssetToSend; // @synthesize enableTapAssetToSend=_enableTapAssetToSend;
@property(nonatomic) _Bool noAnimationForDismissAssetPicker; // @synthesize noAnimationForDismissAssetPicker=_noAnimationForDismissAssetPicker;
@property(nonatomic) _Bool fixOrientation; // @synthesize fixOrientation=_fixOrientation;
@property(nonatomic) _Bool useFrontCamera; // @synthesize useFrontCamera=_useFrontCamera;
@property(nonatomic) _Bool hideProcessingIndicator; // @synthesize hideProcessingIndicator=_hideProcessingIndicator;
@property(nonatomic) _Bool hidePickOriginControl; // @synthesize hidePickOriginControl=_hidePickOriginControl;
@property(nonatomic) _Bool enableBottomViewInPreview; // @synthesize enableBottomViewInPreview=_enableBottomViewInPreview;
@property(nonatomic) _Bool enableSysNaviInPreview; // @synthesize enableSysNaviInPreview=_enableSysNaviInPreview;
@property(nonatomic) _Bool enterGridViewFirst; // @synthesize enterGridViewFirst=_enterGridViewFirst;
@property(nonatomic) _Bool enableEditingToCamera; // @synthesize enableEditingToCamera=_enableEditingToCamera;
@property(nonatomic) _Bool enableOriginPhotoForSelectOne; // @synthesize enableOriginPhotoForSelectOne=_enableOriginPhotoForSelectOne;
@property(nonatomic) _Bool enableSerialNumber; // @synthesize enableSerialNumber=_enableSerialNumber;
@property(nonatomic) _Bool enableSelectButton; // @synthesize enableSelectButton=_enableSelectButton;
@property(nonatomic) _Bool enablePhotoPreview; // @synthesize enablePhotoPreview=_enablePhotoPreview;
@property(nonatomic) _Bool enableQuickPick; // @synthesize enableQuickPick=_enableQuickPick;
@property(nonatomic) _Bool enablePickVideo; // @synthesize enablePickVideo=_enablePickVideo;
@property(nonatomic) _Bool enablePickGif; // @synthesize enablePickGif=_enablePickGif;
@property(nonatomic) _Bool justPickVideo; // @synthesize justPickVideo=_justPickVideo;
- (void).cxx_destruct;
- (void)gridPickView:(id)arg1 didUnpickAssets:(id)arg2;
- (void)gridPickView:(id)arg1 didPickAssets:(id)arg2;
- (void)assetPickerControllerDidCancel:(id)arg1;
- (void)assetPickerControllerWillCancel:(id)arg1;
- (void)assetPickerControllerDidFinish:(id)arg1 toastInView:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)dialogView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dialogView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)showPreviewPicker;
- (void)showRemotePicker;
- (void)showVideoPicker;
- (void)showGridPicker;
- (void)showCameraPicker;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDismissDirectPicker:(id)arg1;
- (void)quickPickView:(id)arg1 didUnpickAssets:(id)arg2;
- (void)quickPickView:(id)arg1 didPickAssets:(id)arg2;
- (void)quickPickView:(id)arg1 didChangedSelectedCount:(long long)arg2;
- (id)otherButtonTitles:(unsigned long long)arg1;
- (void)setProcessingIndicatorHidden;
- (void)dismissPhotoPickerAfterPicking;
- (id)actionSheetWithScene:(unsigned long long)arg1 delegate:(id)arg2;
- (void)showPhotoPickerFromRect:(struct CGRect)arg1 withScene:(unsigned long long)arg2 manuDismiss:(_Bool)arg3 delegate:(id)arg4;
- (void)showPhotoPickerFromRect:(struct CGRect)arg1 inViewController:(id)arg2 withScene:(unsigned long long)arg3 delegate:(id)arg4;
- (void)showPhotoPickerFromRect:(struct CGRect)arg1 withScene:(unsigned long long)arg2 delegate:(id)arg3;
@property(retain, nonatomic) NSArray *selectedAssetKeys; // @synthesize selectedAssetKeys=_selectedAssetKeys;
- (void)setMaximumSelected:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)dismissPickerController:(id)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postResults:(id)arg1 withPickerController:(id)arg2;
- (id)generateCamVideoInfo:(id)arg1;
- (id)assetDataWithResult:(id)arg1;
- (id)beautyImage:(id)arg1 beautyLevel:(double)arg2;
- (id)convertMediaInfo:(id)arg1 withPickController:(id)arg2;
- (id)convertAssets:(id)arg1 withOrigin:(_Bool)arg2;
- (void)processImageDoodled:(id)arg1 picker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processMediaInfo:(id)arg1 picker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processAssets:(id)arg1 origin:(_Bool)arg2 picker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processResultInScene:(unsigned long long)arg1 withAssets:(id)arg2 origin:(_Bool)arg3 mediaInfo:(id)arg4 pickController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)assetImageIsVisible;
- (void)resetDataManager;
- (void)resetLoaderConfig;
- (void)resetWhenDidFinishPicking;
- (void)photoDidFinishPickWithController:(id)arg1 isQuickPick:(_Bool)arg2;
- (void)videoIsPickingAfterEdit:(id)arg1 picker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)photoIsPickingAfterDoodle:(id)arg1 picker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)photoIsPickingInScene:(unsigned long long)arg1 originImage:(_Bool)arg2 mediaWithInfo:(id)arg3 picker:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)hasDelegateRespondsToSelector;
- (double)calculateProgress:(id)arg1;
- (_Bool)syncAssetInCloud:(id)arg1 sizeType:(unsigned long long)arg2;
- (void)tipSyncAssetInCloudFailed;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateSyncAssetProgress:(double)arg1;
- (int)syncAssetImage:(id)arg1 Progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showToastInView:(id)arg1 isQuickPick:(_Bool)arg2;
- (_Bool)showGuideForCameraAuthIfNeed;
- (_Bool)showGuideForAlbumAuthIfNeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

