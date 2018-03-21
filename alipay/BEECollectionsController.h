//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary;

@interface BEECollectionsController : UITableViewController
{
    NSArray *_collectionArray;
    NSMutableDictionary *_collectionKey2PhotosCountMap;
    NSMutableDictionary *_collectionKey2PosterImageMap;
}

@property(retain, nonatomic) NSMutableDictionary *collectionKey2PosterImageMap; // @synthesize collectionKey2PosterImageMap=_collectionKey2PosterImageMap;
@property(retain, nonatomic) NSMutableDictionary *collectionKey2PhotosCountMap; // @synthesize collectionKey2PhotosCountMap=_collectionKey2PhotosCountMap;
@property(retain, nonatomic) NSArray *collectionArray; // @synthesize collectionArray=_collectionArray;
- (void).cxx_destruct;
- (id)assetManager;
- (void)didClickDismiss:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showNoAssets;
- (void)showNotAllowed;
- (void)reloadData;
- (void)didMemoryWarning:(id)arg1;
- (void)didPhotoChanged;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

