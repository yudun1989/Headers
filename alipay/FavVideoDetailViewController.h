//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "FavVideoPlayerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class APActionSheet, APBarButtonItem, FavVideoPlayer, MOBILECHATFAVCollectionVO, NSString;

@interface FavVideoDetailViewController : DTViewController <UIActionSheetDelegate, UIScrollViewDelegate, FavVideoPlayerDelegate>
{
    FavVideoPlayer *_videoPlayer;
    MOBILECHATFAVCollectionVO *_favData;
    APActionSheet *_moreActionSheet;
    APActionSheet *_deleteActionSheet;
    APBarButtonItem *_rightBarBtnItem;
}

@property(retain, nonatomic) APBarButtonItem *rightBarBtnItem; // @synthesize rightBarBtnItem=_rightBarBtnItem;
@property(retain, nonatomic) APActionSheet *deleteActionSheet; // @synthesize deleteActionSheet=_deleteActionSheet;
@property(retain, nonatomic) APActionSheet *moreActionSheet; // @synthesize moreActionSheet=_moreActionSheet;
@property(retain, nonatomic) MOBILECHATFAVCollectionVO *favData; // @synthesize favData=_favData;
@property(retain, nonatomic) FavVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)videoPlayerStateChangedTo:(unsigned long long)arg1 oldStatus:(unsigned long long)arg2;
- (void)onSave;
- (void)onMore:(id)arg1;
- (void)onDeleteFavItem;
- (void)hiddenToolBar:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

