//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTImageAlbumSelectViewDelegate-Protocol.h"
#import "TTImagePickerBackGestureViewDelegate-Protocol.h"
#import "TTImagePickerNavDelegate-Protocol.h"
#import "TTImagePreviewViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, TTAlbumModel, TTImageAlbumSelectView, TTImagePickerBackGestureCollectionView, TTImagePickerBackGestureView, TTImagePickerBottomView, TTTakePhotoViewController, UILabel, UIView;
@protocol TTImagePickerControllerDelegate, TTImagePickerNavProtocol;

@interface TTImagePickerController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, TTImagePickerNavDelegate, TTImageAlbumSelectViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, TTImagePreviewViewControllerDelegate, UIGestureRecognizerDelegate, TTImagePickerBackGestureViewDelegate>
{
    TTImagePickerBackGestureCollectionView *_collectionView;
    TTImagePickerBackGestureView *backView;
    TTImagePickerBottomView *_bottomView;
    UIView *maskBg;
    UILabel *emptyTips;
    UIView *_collectionViewBack;
    _Bool _allowTakePicture;
    _Bool _allowAutoSavePicture;
    _Bool _isRequestPhotosBack;
    _Bool _isAllowPhoto;
    _Bool _isAllowVideo;
    _Bool _lastHidden;
    long long _maxImagesCount;
    unsigned long long _imagePickerMode;
    unsigned long long _selectedCount;
    long long _columnNumber;
    UIView<TTImagePickerNavProtocol> *_customAlmumNav;
    id <TTImagePickerControllerDelegate> _delegate;
    TTAlbumModel *_currentAlbumModel;
    NSMutableArray *_seletedModels;
    NSMutableArray *_selectedImages;
    UIViewController *_retainSelf;
    TTImageAlbumSelectView *_albumSelectView;
    TTTakePhotoViewController *_imagePickerVc;
    UIView *_currentPreviewMaskView;
    long long _lastStyle;
}

@property(nonatomic) _Bool lastHidden; // @synthesize lastHidden=_lastHidden;
@property(nonatomic) long long lastStyle; // @synthesize lastStyle=_lastStyle;
@property(retain, nonatomic) UIView *currentPreviewMaskView; // @synthesize currentPreviewMaskView=_currentPreviewMaskView;
@property(retain, nonatomic) TTTakePhotoViewController *imagePickerVc; // @synthesize imagePickerVc=_imagePickerVc;
@property(retain, nonatomic) TTImageAlbumSelectView *albumSelectView; // @synthesize albumSelectView=_albumSelectView;
@property(retain, nonatomic) UIViewController *retainSelf; // @synthesize retainSelf=_retainSelf;
@property(retain, nonatomic) NSMutableArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(retain, nonatomic) NSMutableArray *seletedModels; // @synthesize seletedModels=_seletedModels;
@property(retain, nonatomic) TTAlbumModel *currentAlbumModel; // @synthesize currentAlbumModel=_currentAlbumModel;
@property(nonatomic) __weak id <TTImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAllowVideo; // @synthesize isAllowVideo=_isAllowVideo;
@property(nonatomic) _Bool isAllowPhoto; // @synthesize isAllowPhoto=_isAllowPhoto;
@property(retain, nonatomic) UIView<TTImagePickerNavProtocol> *customAlmumNav; // @synthesize customAlmumNav=_customAlmumNav;
@property(nonatomic) _Bool isRequestPhotosBack; // @synthesize isRequestPhotosBack=_isRequestPhotosBack;
@property(nonatomic) long long columnNumber; // @synthesize columnNumber=_columnNumber;
@property(readonly, nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) _Bool allowAutoSavePicture; // @synthesize allowAutoSavePicture=_allowAutoSavePicture;
@property(nonatomic) _Bool allowTakePicture; // @synthesize allowTakePicture=_allowTakePicture;
@property(nonatomic) unsigned long long imagePickerMode; // @synthesize imagePickerMode=_imagePickerMode;
@property(nonatomic) long long maxImagesCount; // @synthesize maxImagesCount=_maxImagesCount;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)ttImagePickerBackGestureViewdidCancel;
- (void)ttImagePickerBackGestureViewdidFinnish;
- (void)ttImagePickerBackGestureViewdidScrollScale:(float)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_didFinishPickingMediaWithInfo:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)ttImagePreviewViewControllerSelectChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerSelectDidFinish:(id)arg1;
- (void)ttImagePreviewViewControllerScrollChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerDidDismiss:(id)arg1;
- (void)ttImagePickerNavDidFinish;
- (void)ttImagePickerNavDidSelect:(id)arg1;
- (void)ttImagePickerNavDidClose;
- (void)previewAction:(id)arg1 select:(id)arg2 index:(long long)arg3 tapView:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectItemWithCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)takePhoto;
- (void)didDeselectModel:(id)arg1;
- (void)didSelectModel:(id)arg1;
- (void)_getAllAlbums;
- (void)_getCurrentImages;
- (void)completeAction;
- (void)_initViews;
- (void)showPromptViewAtBottomViewTop:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentOn:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

