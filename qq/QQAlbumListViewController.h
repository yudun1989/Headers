//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQAsset, QQNoPhotoView, UITableView;
@protocol IAlbumService;

@interface QQAlbumListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <IAlbumService> _albumService;
    NSMutableArray *_assetGroups;
    int _assetsFilter;
    _Bool _isFirstInit;
    UITableView *_tableView;
    QQNoPhotoView *_noPhotoView;
    QQAsset *lastSelectedAsset;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QQAsset *lastSelectedAsset; // @synthesize lastSelectedAsset;
@property(nonatomic) int assetsFilter; // @synthesize assetsFilter=_assetsFilter;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)getAssetGroupIndex:(id)arg1;
- (void)reloadTableView;
- (void)gotoImageTableViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)pushImgaeTableView;
- (void)toSystemSettingView:(id)arg1;
- (void)loadGroupsFromLibrary;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

