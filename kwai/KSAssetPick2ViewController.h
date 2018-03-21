//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSAssetPickViewControllerProtocol-Protocol.h"
#import "KSPostComponent-Protocol.h"
#import "KSVideoImageFullScreenViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class KSAlbumListViewController, KSAssetPick2ViewModel, KSAssetPreviewView, KSAssetsCollectionViewController, KSImage2VideoCollectionDataSource, KSPhotoToVideoProcessor, NSLayoutConstraint, NSString, UIButton, UICollectionView, UIImageView, UIScrollView, UIView;
@protocol KSAssetPickViewControllerDelegate, KSPickAssetGroup;

@interface KSAssetPick2ViewController : KSBaseViewController <KSVideoImageFullScreenViewControllerDelegate, KSAssetPickViewControllerProtocol, UICollectionViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, KSPostComponent>
{
    _Bool _catchingAssetCollectionPan;
    id <KSAssetPickViewControllerDelegate> _delegate;
    KSAssetPick2ViewModel *_viewModel;
    double _initialConstant;
    KSPhotoToVideoProcessor *_photoToVideoProcessor;
    CDUnknownBlockType _photoVideoGenerateBlock;
    KSAssetsCollectionViewController *_assetsVC;
    UICollectionView *_atlasCollectionView;
    NSLayoutConstraint *_assetAndAtlasVerticalConstraint;
    UIView *_previewTopGuideView;
    NSLayoutConstraint *_previewTopGuideTopConstraint;
    UIView *_previewContainerView;
    UIScrollView *_previewScrollView;
    KSAssetPreviewView *_assetPreviewView;
    UIImageView *_previewCoverView;
    UIView *_previewModeView;
    UIView *_previewPlaceHolderView;
    UIView *_navigationBar;
    UIButton *_closeButton;
    UIButton *_confirmButton;
    UIButton *_cameraAlbumButton;
    NSLayoutConstraint *_navigationBarTopConstraint;
    unsigned long long _assetMediaTypes;
    id <KSPickAssetGroup> _assetGroup;
    KSImage2VideoCollectionDataSource *_image2videoCollectionDataSource;
    struct CGPoint _initialLocationInView;
    struct UIEdgeInsets _ks_additionalSafeAreaInsetsForBelowIOS11;
}

+ (id)assetPickViewController;
@property(retain, nonatomic) KSImage2VideoCollectionDataSource *image2videoCollectionDataSource; // @synthesize image2videoCollectionDataSource=_image2videoCollectionDataSource;
@property(retain, nonatomic) id <KSPickAssetGroup> assetGroup; // @synthesize assetGroup=_assetGroup;
@property(nonatomic) unsigned long long assetMediaTypes; // @synthesize assetMediaTypes=_assetMediaTypes;
@property(retain, nonatomic) NSLayoutConstraint *navigationBarTopConstraint; // @synthesize navigationBarTopConstraint=_navigationBarTopConstraint;
@property(retain, nonatomic) UIButton *cameraAlbumButton; // @synthesize cameraAlbumButton=_cameraAlbumButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *previewPlaceHolderView; // @synthesize previewPlaceHolderView=_previewPlaceHolderView;
@property(retain, nonatomic) UIView *previewModeView; // @synthesize previewModeView=_previewModeView;
@property(retain, nonatomic) UIImageView *previewCoverView; // @synthesize previewCoverView=_previewCoverView;
@property(retain, nonatomic) KSAssetPreviewView *assetPreviewView; // @synthesize assetPreviewView=_assetPreviewView;
@property(retain, nonatomic) UIScrollView *previewScrollView; // @synthesize previewScrollView=_previewScrollView;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) NSLayoutConstraint *previewTopGuideTopConstraint; // @synthesize previewTopGuideTopConstraint=_previewTopGuideTopConstraint;
@property(retain, nonatomic) UIView *previewTopGuideView; // @synthesize previewTopGuideView=_previewTopGuideView;
@property(retain, nonatomic) NSLayoutConstraint *assetAndAtlasVerticalConstraint; // @synthesize assetAndAtlasVerticalConstraint=_assetAndAtlasVerticalConstraint;
@property(retain, nonatomic) UICollectionView *atlasCollectionView; // @synthesize atlasCollectionView=_atlasCollectionView;
@property(retain, nonatomic) KSAssetsCollectionViewController *assetsVC; // @synthesize assetsVC=_assetsVC;
@property(copy, nonatomic) CDUnknownBlockType photoVideoGenerateBlock; // @synthesize photoVideoGenerateBlock=_photoVideoGenerateBlock;
@property(retain, nonatomic) KSPhotoToVideoProcessor *photoToVideoProcessor; // @synthesize photoToVideoProcessor=_photoToVideoProcessor;
@property(nonatomic) _Bool catchingAssetCollectionPan; // @synthesize catchingAssetCollectionPan=_catchingAssetCollectionPan;
@property(nonatomic) double initialConstant; // @synthesize initialConstant=_initialConstant;
@property(nonatomic) struct CGPoint initialLocationInView; // @synthesize initialLocationInView=_initialLocationInView;
@property(readonly, nonatomic) KSAssetPick2ViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <KSAssetPickViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets ks_additionalSafeAreaInsetsForBelowIOS11; // @synthesize ks_additionalSafeAreaInsetsForBelowIOS11=_ks_additionalSafeAreaInsetsForBelowIOS11;
- (void).cxx_destruct;
- (void)editVideoWith:(id)arg1 originalVideoAsset:(id)arg2 movieInfo:(id)arg3 maxDuration:(double)arg4;
- (void)generatePhotoVideoOnFinish:(CDUnknownBlockType)arg1 onProgress:(CDUnknownBlockType)arg2;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (long long)preferredBottomBarStyle;
- (void)prepareComponentPermissions;
- (_Bool)disablePageGestureRecognizerShouldBegin:(id)arg1;
- (void)resumePreviewing;
- (void)pausePreviewing;
@property(nonatomic) _Bool active;
- (void)processSelectedPicturesProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)centerPreviewIfNeeded;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)requestAssetImageForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeLastImageInAtlas;
- (void)insertImage2Video:(id)arg1 asset:(id)arg2;
- (void)finishSingleSelectImage:(id)arg1 info:(id)arg2;
- (void)finishSingleSelectALAsset:(id)arg1;
- (void)finishSingleSelectPHAsset:(id)arg1 movieInfo:(id)arg2;
- (void)didClickConfirm:(id)arg1;
- (void)updateAssetPreviewsWithCurrentAsset;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_assetCollectionViewDidPanWithGesture:(id)arg1;
- (void)_previewScollViewDidPanWithGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_handleAssetSelection:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (void)videoImageFullScreenViewControllerDidClickedBackground:(id)arg1;
- (void)videoImageFullScreenViewController:(id)arg1 didDismissTargetView:(id)arg2;
- (void)outVideoImageFullScreenViewControllerAnimation:(id)arg1;
- (struct CGSize)sizeForVideoImageFullScreenViewController:(id)arg1 ofTargetView:(id)arg2;
- (void)presentPreviewViewControllerWithTargetView:(id)arg1;
- (void)showAssetPreviewTipIfNeeded;
- (id)_currentAssetType;
- (_Bool)isCurrentPreviewAssetVideo;
- (_Bool)isCurrentPreviewAssetPhoto;
- (void)initialAssetCollectionCompletion:(CDUnknownBlockType)arg1;
- (void)_resetToPreviewMode;
- (void)_exitScanningMode;
- (void)_transitionBetweenPreviewAndScanningWithTranslation:(double)arg1;
- (void)_finishAtlasTransitionWithVelocity:(struct CGPoint)arg1;
- (void)_finishScanningTransitionWithVelocity:(struct CGPoint)arg1;
- (void)_exitAtlasModeWithLastImage:(id)arg1 asset:(id)arg2;
- (void)_enterAtlasModeWith2ndAsset:(id)arg1 secondImage:(id)arg2;
- (void)_transitionBetweenPreviewAndAtlasModeWithTranslation:(double)arg1;
@property(nonatomic) struct CGRect previewAndAtlasTransitionToFrame;
@property(nonatomic) struct CGRect previewAndAtlasTransitionFromFrame;
- (void)setPreviewAndAtlasTransitionView:(id)arg1;
- (id)previewAndAtlasTransitionView;
- (void)hideAlbumListController;
- (void)showAlbumListController;
@property(retain, nonatomic) KSAlbumListViewController *albumListViewController;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setInitalCaption:(id)arg1;
- (void)setDefaultPoi:(id)arg1;
- (void)setCurrentPageURL:(id)arg1;
- (void)setupPreviewCover;
- (void)setupPreview;
- (void)setupAtlasCollectionView;
- (void)setupAssetCollectionView;
- (void)setupNavigationBar;
- (void)exportAndEditVideoAsset:(id)arg1 movieInfo:(id)arg2;
- (void)exportPHVideoAsset:(id)arg1 exportPreset:(id)arg2 slow:(_Bool)arg3 movieInfo:(id)arg4;
- (void)setProgressTimer:(id)arg1;
- (id)progressTimer;
- (id)avExportVideoOperationQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

