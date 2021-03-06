//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class ALAssetsLibrary, NSMutableArray;
@protocol WVImagePickerControllerDelegate;

@interface WVAlbumPickerController : UITableViewController
{
    _Bool _allowsMultipleSelection;
    ALAssetsLibrary *_assetsLibrary;
    NSMutableArray *_assetsGroups;
    NSMutableArray *_selectedAssets;
    id <WVImagePickerControllerDelegate> _delegate;
    unsigned long long _minimumNumberOfSelection;
    unsigned long long _maximumNumberOfSelection;
}

@property(nonatomic) unsigned long long maximumNumberOfSelection; // @synthesize maximumNumberOfSelection=_maximumNumberOfSelection;
@property(nonatomic) unsigned long long minimumNumberOfSelection; // @synthesize minimumNumberOfSelection=_minimumNumberOfSelection;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) __weak id <WVImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(retain, nonatomic) NSMutableArray *assetsGroups; // @synthesize assetsGroups=_assetsGroups;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (id)toolbarItems;
- (id)confirmTitle;
- (id)confirmButtonItem;
- (id)spaceButtonItem;
- (id)maxPhotoNumberButtonItem;
- (id)toolbarTitle;
- (_Bool)validateNumberOfSelections:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeObjectFromSelectedAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSelectedAssetsAtIndex:(unsigned long long)arg2;
- (void)deselectAsset:(id)arg1;
- (void)selectAsset:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKeyValueObserver;
- (void)addKeyValueObserver;
- (void)loadAlbums;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setup;
- (id)init;

@end

