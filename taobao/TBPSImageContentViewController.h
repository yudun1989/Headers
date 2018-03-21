//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSAdapterViewController.h"

#import "TBPSImageCollectionViewControllerDelegate-Protocol.h"

@class NSString, TBPSAssetGroup, TBPSImageCollectionViewController, TBPSImagePickerErrorView;
@protocol TBPSImagePickerViewControllerDelegate;

@interface TBPSImageContentViewController : TBPSAdapterViewController <TBPSImageCollectionViewControllerDelegate>
{
    _Bool _addObserver;
    _Bool _addPhotoLibararyChangeObserver;
    _Bool _isShowCancel;
    id <TBPSImagePickerViewControllerDelegate> _delegate;
    TBPSImageCollectionViewController *_collectionViewController;
    TBPSImagePickerErrorView *_errorView;
    TBPSAssetGroup *_selectedGroup;
}

@property(retain, nonatomic) TBPSAssetGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) TBPSImagePickerErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBPSImageCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) _Bool isShowCancel; // @synthesize isShowCancel=_isShowCancel;
@property(nonatomic) __weak id <TBPSImagePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishPicking:(id)arg1 mediaWithInfo:(id)arg2;
- (void)didSelectCellWithImage:(id)arg1 WithMetaInfo:(id)arg2;
- (void)layoutSubviews;
- (void)loadGroup:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)handleAssetGroupDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dismiss:(id)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
