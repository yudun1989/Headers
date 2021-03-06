//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "SNPopoverWindowDismissDelegate-Protocol.h"
#import "WBBaseSegmentListViewWrapperDelegate-Protocol.h"
#import "WBComposeViewControllerDelegate-Protocol.h"
#import "WBSearchTypeMenuDelegate-Protocol.h"
#import "WBSegmentCardListViewControllerCallback-Protocol.h"
#import "WBViewControllerTopViewControllerGetter-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, QRCodeEncodeEngine, UIBarButtonItem, UIButton, UIImageView, UIView, WBBaseSegmentListViewWrapper, WBSearchType, WBSearchTypeMenu, WBSegmentBaseModel, WBTableViewEmptyView;

@interface WBUniversalSegmentViewController : WBViewController <WBSearchTypeMenuDelegate, SNPopoverWindowDismissDelegate, WBComposeViewControllerDelegate, WBSegmentCardListViewControllerCallback, WBBaseSegmentListViewWrapperDelegate, WBViewControllerTopViewControllerGetter>
{
    UIButton *btnHead;
    UIImageView *imgAtt;
    _Bool swipeViewDragging;
    _Bool _loadingChannelsInfo;
    _Bool _isFirstLoad;
    _Bool _isFullScreenMode;
    _Bool _autoLoadDataWhenViewDidLoad;
    _Bool _backItemDidHide;
    _Bool _needLocation;
    _Bool _forceReload;
    _Bool _showNavCloseButton;
    WBBaseSegmentListViewWrapper *_wrapper;
    NSString *_containerID;
    WBSegmentBaseModel *_baseModel;
    long long _currentIndex;
    WBSearchType *_currentType;
    WBSearchTypeMenu *_searchTypeMenu;
    WBTableViewEmptyView *_emptyView;
    unsigned long long _defaultSelectedIndex;
    UIBarButtonItem *_storageBackItem;
    QRCodeEncodeEngine *_codeEncodeEngine;
    NSMutableDictionary *_segmentViewControllerInfos;
    UIView *_btnHeadContainer;
    NSString *_navTitle;
    NSMutableArray *_filterGroups;
}

+ (void)clearCache;
+ (id)channelsCacheDirectory;
@property(nonatomic) _Bool showNavCloseButton; // @synthesize showNavCloseButton=_showNavCloseButton;
@property(nonatomic) _Bool forceReload; // @synthesize forceReload=_forceReload;
@property(retain, nonatomic) NSMutableArray *filterGroups; // @synthesize filterGroups=_filterGroups;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) UIView *btnHeadContainer; // @synthesize btnHeadContainer=_btnHeadContainer;
@property(retain, nonatomic) NSMutableDictionary *segmentViewControllerInfos; // @synthesize segmentViewControllerInfos=_segmentViewControllerInfos;
@property(retain, nonatomic) QRCodeEncodeEngine *codeEncodeEngine; // @synthesize codeEncodeEngine=_codeEncodeEngine;
@property(nonatomic) _Bool needLocation; // @synthesize needLocation=_needLocation;
@property(nonatomic) _Bool backItemDidHide; // @synthesize backItemDidHide=_backItemDidHide;
@property(retain, nonatomic) UIBarButtonItem *storageBackItem; // @synthesize storageBackItem=_storageBackItem;
@property(readonly, nonatomic) unsigned long long defaultSelectedIndex; // @synthesize defaultSelectedIndex=_defaultSelectedIndex;
@property(retain, nonatomic) WBTableViewEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool autoLoadDataWhenViewDidLoad; // @synthesize autoLoadDataWhenViewDidLoad=_autoLoadDataWhenViewDidLoad;
@property(nonatomic) _Bool isFullScreenMode; // @synthesize isFullScreenMode=_isFullScreenMode;
@property(retain, nonatomic) WBSearchTypeMenu *searchTypeMenu; // @synthesize searchTypeMenu=_searchTypeMenu;
@property(retain, nonatomic) WBSearchType *currentType; // @synthesize currentType=_currentType;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WBSegmentBaseModel *baseModel; // @synthesize baseModel=_baseModel;
@property(nonatomic) _Bool loadingChannelsInfo; // @synthesize loadingChannelsInfo=_loadingChannelsInfo;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) WBBaseSegmentListViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void).cxx_destruct;
- (id)segmentSwipeView;
- (id)segmentChannelsListView;
- (id)segmentChannelBar;
- (id)currentChannelModels;
- (id)segmentViewControllers;
- (_Bool)generalMediaAutoPlayIgnored;
- (_Bool)panNavigationSimultaneouslyWithGestureRecognizer:(id)arg1;
- (_Bool)panToNavigation;
- (id)moduleID;
- (void)createAndShareQRCode;
- (void)rightMoreItemPressed:(id)arg1;
- (id)fID;
- (void)onReceivedShareData:(id)arg1 in:(id)arg2;
- (void)onReceivedFilterGroup:(id)arg1 in:(id)arg2;
- (void)onReceivedTitle:(id)arg1 in:(id)arg2;
- (void)updateTitleView;
- (void)updateRightItemButton;
- (void)didReceiveFeedBackNotification:(id)arg1;
- (void)currentAccountDidChanged:(id)arg1;
- (id)getCurrentIdsWithCurrentChannels:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)showBackItemButton;
- (void)hideBackItemButton;
- (void)wrapperDidAddChildViewController:(id)arg1 toIndex:(long long)arg2;
- (void)wrapperDidUpdateChannels:(id)arg1 unusedChannels:(id)arg2;
- (void)wrapperDidChangeSwipeViewCurrentItem:(id)arg1;
- (id)userInfoForChildViewController;
- (void)setDatas;
- (void)updateChannelsData;
- (void)configNaviCloseButton;
- (_Bool)createDirectoryIfNonExistent:(id)arg1;
- (id)cachePath;
- (void)writeChannelsDictionary:(id)arg1 toFileWithPath:(id)arg2;
- (_Bool)hasCache;
- (id)loadChannelsCache;
- (void)saveChannelsCache;
- (void)saveBaseModel:(id)arg1;
- (void)sendChannelDataWithCurrentChannels:(id)arg1 unusedChannels:(id)arg2;
- (void)loadChannelData;
- (void)showError:(id)arg1;
- (void)refresh:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)configSubviewsFrame;
- (void)refreshDataIfNeed:(id)arg1;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2 forceReload:(_Bool)arg3;
- (id)topMostViewControllerForSelf;
- (void)configFilterGroup:(id)arg1;
- (void)configFilterGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resetTitleViewRightIcon:(_Bool)arg1;
- (void)btnHeadDown:(id)arg1;
- (void)loadSearchMenu;
- (void)resetGroupPickerTitle;
- (void)createTitleView;
- (void)initializeSubviews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initializeSelf;
- (Class)segmentViewWrapperClass;
- (void)viewDidLoad;
- (id)initWithSegmentId:(id)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

