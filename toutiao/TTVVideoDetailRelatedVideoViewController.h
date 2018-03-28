//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TLIndexPathControllerDelegate-Protocol.h"
#import "TTVDetailContext-Protocol.h"
#import "TTVFetchedResultsTableDataSourceProtocol-Protocol.h"
#import "TTVVideoInformationSyncProtocol-Protocol.h"

@class NSArray, NSString, SSThemedTableView, TLIndexPathController, TTVDetailStateStore, TTVVideoDetailRelatedAdActionService, TTVVideoInformationResponse;
@protocol TTVVideoDetailHomeToRelatedVideoVCActionProtocol;

@interface TTVVideoDetailRelatedVideoViewController : SSViewControllerBase <TTVFetchedResultsTableDataSourceProtocol, TLIndexPathControllerDelegate, TTVVideoInformationSyncProtocol, TTVDetailContext>
{
    _Bool _hasAlreadyClickShowMoreButton;
    _Bool _hasVideoAdShowSend;
    _Bool _hasRelatedShowSend;
    TLIndexPathController *_indexPathController;
    TTVVideoInformationResponse *_videoInfo;
    id <TTVVideoDetailHomeToRelatedVideoVCActionProtocol> _homeActionDelegate;
    SSThemedTableView *_tableView;
    TTVDetailStateStore *_detailStateStore;
    NSArray *_allRelatedItems;
    TTVVideoDetailRelatedAdActionService *_adActionService;
}

+ (void)recordVideoDetailForArticle:(id)arg1 rArticle:(id)arg2 status:(long long)arg3;
@property(retain, nonatomic) TTVVideoDetailRelatedAdActionService *adActionService; // @synthesize adActionService=_adActionService;
@property(nonatomic) _Bool hasRelatedShowSend; // @synthesize hasRelatedShowSend=_hasRelatedShowSend;
@property(nonatomic) _Bool hasVideoAdShowSend; // @synthesize hasVideoAdShowSend=_hasVideoAdShowSend;
@property(retain, nonatomic) NSArray *allRelatedItems; // @synthesize allRelatedItems=_allRelatedItems;
@property(nonatomic) _Bool hasAlreadyClickShowMoreButton; // @synthesize hasAlreadyClickShowMoreButton=_hasAlreadyClickShowMoreButton;
@property(retain, nonatomic) TTVDetailStateStore *detailStateStore; // @synthesize detailStateStore=_detailStateStore;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TTVVideoDetailHomeToRelatedVideoVCActionProtocol> homeActionDelegate; // @synthesize homeActionDelegate=_homeActionDelegate;
@property(retain, nonatomic) TTVVideoInformationResponse *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) TLIndexPathController *indexPathController; // @synthesize indexPathController=_indexPathController;
- (void).cxx_destruct;
- (void)sendAdImpressionForArticle:(id)arg1 rArticle:(id)arg2 status:(long long)arg3;
- (void)didSelectVideoAlbum:(id)arg1;
- (_Bool)addAlbumViewWithArticle:(id)arg1;
- (void)openNextViewControllerWithArticle:(id)arg1 fromArticle:(id)arg2 fromSource:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)controller:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)setupUI;
- (id)getDisplayedItems;
- (void)directShowVideoSubjectIfNeeded;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

