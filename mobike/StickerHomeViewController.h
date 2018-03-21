//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKStickerCellDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBKTableViewDataSource, NSString, StickerPlaygroundView, UITableView, UIView;

@interface StickerHomeViewController : MBKBaseViewController <UITableViewDelegate, UICollectionViewDelegate, MBKStickerCellDelegate, UICollectionViewDelegateFlowLayout>
{
    MBKTableViewDataSource *_tableviewDataSource;
    UITableView *_mainTableView;
    UIView *_tableUnderView;
    StickerPlaygroundView *_playgroundView;
}

@property(retain, nonatomic) StickerPlaygroundView *playgroundView; // @synthesize playgroundView=_playgroundView;
@property(retain, nonatomic) UIView *tableUnderView; // @synthesize tableUnderView=_tableUnderView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain) MBKTableViewDataSource *tableviewDataSource; // @synthesize tableviewDataSource=_tableviewDataSource;
- (void).cxx_destruct;
- (void)requestActivityList:(_Bool)arg1;
- (void)buttonDisclosureDelegate:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)hideActivity;
- (void)loadActivity;
- (void)setupView;
- (void)addNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

