//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEEPhotoPickerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@class H5WebViewController, NSMutableDictionary, NSString;

@interface NPImagePicker : NSObject <BEEPhotoPickerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _allowEdit;
    _Bool _useFrontCamera;
    _Bool _enableSwitchCamera;
    _Bool _translateToLocalId;
    _Bool _usePublicDomainLocalId;
    _Bool _upload;
    _Bool _useMultiMedia;
    _Bool _storeOriginal;
    _Bool _storeToAlbum;
    CDUnknownBlockType _callbackBlock;
    NSMutableDictionary *_callbackParams;
    H5WebViewController *_viewController;
    unsigned long long _scene;
    NSString *_extType;
    NSString *_dateType;
    long long _maxWidth;
    long long _maxHeight;
    double _beautyLevel;
    long long _quality;
    NSString *_uploadTo;
    NSString *_multiMediaBiz;
    unsigned long long _multiMediaCompress;
    unsigned long long _maximumSelected;
}

@property(nonatomic) _Bool storeToAlbum; // @synthesize storeToAlbum=_storeToAlbum;
@property(nonatomic) _Bool storeOriginal; // @synthesize storeOriginal=_storeOriginal;
@property(nonatomic) unsigned long long maximumSelected; // @synthesize maximumSelected=_maximumSelected;
@property(nonatomic) unsigned long long multiMediaCompress; // @synthesize multiMediaCompress=_multiMediaCompress;
@property(copy, nonatomic) NSString *multiMediaBiz; // @synthesize multiMediaBiz=_multiMediaBiz;
@property(nonatomic) _Bool useMultiMedia; // @synthesize useMultiMedia=_useMultiMedia;
@property(copy, nonatomic) NSString *uploadTo; // @synthesize uploadTo=_uploadTo;
@property(nonatomic) _Bool upload; // @synthesize upload=_upload;
@property(nonatomic) _Bool usePublicDomainLocalId; // @synthesize usePublicDomainLocalId=_usePublicDomainLocalId;
@property(nonatomic) _Bool translateToLocalId; // @synthesize translateToLocalId=_translateToLocalId;
@property(nonatomic) _Bool enableSwitchCamera; // @synthesize enableSwitchCamera=_enableSwitchCamera;
@property(nonatomic) _Bool useFrontCamera; // @synthesize useFrontCamera=_useFrontCamera;
@property(nonatomic) _Bool allowEdit; // @synthesize allowEdit=_allowEdit;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSString *dateType; // @synthesize dateType=_dateType;
@property(copy, nonatomic) NSString *extType; // @synthesize extType=_extType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak H5WebViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableDictionary *callbackParams; // @synthesize callbackParams=_callbackParams;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (void)translateAssetDatas:(id)arg1;
- (void)translateAssets:(id)arg1;
- (void)processAssetData:(id)arg1;
- (void)processAsset:(id)arg1;
- (void)photoPickerControllerDidCancel:(id)arg1 withError:(unsigned long long)arg2;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(id)arg2 theOriginal:(_Bool)arg3;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (id)info4ErrorCode:(unsigned long long)arg1 extInfo:(id)arg2;
- (void)uploadFileAP:(id)arg1;
- (void)uploadFileNP:(id)arg1;
- (_Bool)writeImage:(id)arg1 ToFilePath:(id)arg2;
- (id)scaleImage:(id)arg1;
- (void)processImage:(id)arg1;
- (void)showActionSheet:(id)arg1;
- (void)pickImage:(id)arg1 parent:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

