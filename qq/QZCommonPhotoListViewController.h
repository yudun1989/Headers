//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBasePhotoListViewController.h>

#import <QQMainProject/QZAlbumCoverViewDelegate-Protocol.h>
#import <QQMainProject/QZAlbumPasswordPickerDelegate-Protocol.h>
#import <QQMainProject/QZCommonPhotoCellDelegate-Protocol.h>
#import <QQMainProject/QZCommonPhotoMoreViewDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>
#import <QQMainProject/UIViewControllerPreviewingDelegate-Protocol.h>

@class ETQZFont, NSArray, NSDictionary, NSMutableArray, NSString, QZAlbumCoverView, QZJPhotoGetAlbumRsp, QZJPhotoGetShareAlbumMemberRsp, QZPhotoOperationBar, QZPhotoRecommendAlbum, QZPhotoTimeLineView, QZSuggestUploadImageViewCell, QzoneAlbumTemplate, QzonePhotoModel, UIButton, UIImage, UIImageView;

@interface QZCommonPhotoListViewController : QZBasePhotoListViewController <QZAlbumCoverViewDelegate, QZPhotoModuleDownloaderInterfaceDelegate, QZAlbumPasswordPickerDelegate, UIViewControllerPreviewingDelegate, QZCommonPhotoMoreViewDelegate, QZCommonPhotoCellDelegate, QZPhotoModuleCellDelegate>
{
    NSString *_jumpUrl;
    UIImageView *_backgroundView;
    NSString *_individualIconURL;
    UIImage *_individualIcon;
    QZJPhotoGetAlbumRsp *_albumResponse;
    long long _errorCode;
    NSMutableArray *_otherPreloadURLs;
    long long _lastAnonymity;
    NSDictionary *_userParamForCSPlugin;
    double _layoutDrawingBeginTime;
    _Bool _hasLoadAlbumCache;
    QZPhotoRecommendAlbum *_recommendAlbum;
    NSArray *_recommendPhotos;
    NSString *_recommendPhotosID;
    double _oldScrollOffsetY;
    NSString *_loveSpaceJumpUrl;
    _Bool _hasLoadedSugguestOCS;
    QZJPhotoGetShareAlbumMemberRsp *_shareAlbumMemberResponse;
    QzonePhotoModel *_firstModel;
    _Bool _shouldLoadPluginAfterAppeared;
    _Bool _hasDidAppeared;
    NSString *_videoMakeCoverUrl;
    NSMutableArray *_multiPoiArray;
    double _coverViewHeight;
    _Bool _shouldRefresh;
    _Bool _hasShowUploadTips;
    _Bool _isAlbumSkinChanged;
    _Bool _canLoadSuggestUploadImageCell;
    _Bool _canShowUnTimeCell;
    _Bool _shouldShowToast;
    int _albumOpmask;
    QZAlbumCoverView *_albumCoverView;
    ETQZFont *_etFont;
    long long _albumCoverRequestId;
    long long _joinAlbumRequstId;
    long long _loveSpaceStatusRequestId;
    QZPhotoOperationBar *_operationBottomBar;
    NSMutableArray *_suggestAssets;
    NSMutableArray *_allSuggestAssetsIdentifier;
    QZSuggestUploadImageViewCell *_suggestUploadImageViewCell;
    NSMutableArray *_cacheSuggestInfo;
    QZPhotoTimeLineView *_timeLineView;
    UIButton *_timeLineButton;
    UIImageView *_gaussImageView;
    QzoneAlbumTemplate *_albumTemplate;
    NSString *_shareAlbumInviteKey;
}

+ (id)photoListViewCtr:(id)arg1 status:(long long)arg2 param:(id)arg3;
@property(retain, nonatomic) NSString *shareAlbumInviteKey; // @synthesize shareAlbumInviteKey=_shareAlbumInviteKey;
@property(retain, nonatomic) QzoneAlbumTemplate *albumTemplate; // @synthesize albumTemplate=_albumTemplate;
@property(nonatomic) _Bool shouldShowToast; // @synthesize shouldShowToast=_shouldShowToast;
@property(retain, nonatomic) UIImageView *gaussImageView; // @synthesize gaussImageView=_gaussImageView;
@property(retain, nonatomic) UIButton *timeLineButton; // @synthesize timeLineButton=_timeLineButton;
@property(retain, nonatomic) QZPhotoTimeLineView *timeLineView; // @synthesize timeLineView=_timeLineView;
@property(nonatomic) _Bool canShowUnTimeCell; // @synthesize canShowUnTimeCell=_canShowUnTimeCell;
@property(nonatomic) _Bool canLoadSuggestUploadImageCell; // @synthesize canLoadSuggestUploadImageCell=_canLoadSuggestUploadImageCell;
@property(retain, nonatomic) NSMutableArray *cacheSuggestInfo; // @synthesize cacheSuggestInfo=_cacheSuggestInfo;
@property(retain, nonatomic) QZSuggestUploadImageViewCell *suggestUploadImageViewCell; // @synthesize suggestUploadImageViewCell=_suggestUploadImageViewCell;
@property(retain, nonatomic) NSMutableArray *allSuggestAssetsIdentifier; // @synthesize allSuggestAssetsIdentifier=_allSuggestAssetsIdentifier;
@property(retain, nonatomic) NSMutableArray *suggestAssets; // @synthesize suggestAssets=_suggestAssets;
@property(retain, nonatomic) QZPhotoOperationBar *operationBottomBar; // @synthesize operationBottomBar=_operationBottomBar;
@property(nonatomic) long long loveSpaceStatusRequestId; // @synthesize loveSpaceStatusRequestId=_loveSpaceStatusRequestId;
@property(nonatomic) long long joinAlbumRequstId; // @synthesize joinAlbumRequstId=_joinAlbumRequstId;
@property(nonatomic) long long albumCoverRequestId; // @synthesize albumCoverRequestId=_albumCoverRequestId;
@property(nonatomic) _Bool isAlbumSkinChanged; // @synthesize isAlbumSkinChanged=_isAlbumSkinChanged;
@property(nonatomic) _Bool hasShowUploadTips; // @synthesize hasShowUploadTips=_hasShowUploadTips;
@property(nonatomic) _Bool shouldRefresh; // @synthesize shouldRefresh=_shouldRefresh;
@property(nonatomic) int albumOpmask; // @synthesize albumOpmask=_albumOpmask;
@property(retain, nonatomic) ETQZFont *etFont; // @synthesize etFont=_etFont;
@property(retain, nonatomic) QZAlbumCoverView *albumCoverView; // @synthesize albumCoverView=_albumCoverView;
- (void).cxx_destruct;
- (void)reportClickInviteMemberThirdAction:(id)arg1;
- (id)inviteAlbumMemberAlbumResponse;
- (_Bool)albumHasPhoto;
- (long long)reportReserve:(long long)arg1;
- (id)photoButtonWithPhotoModel:(id)arg1;
- (_Bool)isHost;
- (void)onAddPhotoComment:(id)arg1;
- (void)makeMusicVideo;
- (void)showLoveSpaceAdv:(id)arg1 jumpUrl:(id)arg2 type:(long long)arg3 traceInfo:(id)arg4;
- (void)getLoveSpaceQbossAdv;
- (void)goToLoveSpace;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onClickAlbumCover:(id)arg1;
- (void)goToLikeList;
- (void)onClickComment;
- (void)onClickLike;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)updateShareUserSelectedList:(id)arg1;
- (void)onClickAlbumLoverHeart;
- (void)inviteLover;
- (void)handleClickLoverAvatar:(long long)arg1 nick:(id)arg2;
- (void)onCLickMaskView:(id)arg1;
- (void)onClickAdvButton:(id)arg1 shownKey:(id)arg2;
- (void)onClickShareUserView;
- (_Bool)shouldShowOpaqueNaviationBar;
- (void)onGetSpaceRightNotify:(id)arg1;
- (long long)onNotifyShareOutsiteOperation:(id)arg1;
- (void)didDeletePhotos:(id)arg1;
- (void)beginProjection;
- (void)refreshAfterManagement:(_Bool)arg1;
- (void)enterManageMode:(long long)arg1;
- (void)forwardPhoto;
- (void)showUploadSuccessTip;
- (void)onSuggestUploadBegin;
- (void)onUploadSuccess:(id)arg1;
- (void)addFakeVideoList:(id)arg1;
- (void)showFakeVideoList:(_Bool)arg1;
- (void)addFakePhotoList:(id)arg1;
- (void)addFakePhotosFromSendBox;
- (void)jumpToClickedEvent:(id)arg1;
- (void)updateTimeLineViewWithHeaderList:(id)arg1 eventDic:(id)arg2 timeLineArray:(id)arg3;
- (void)dealloc;
- (_Bool)isTransparentRefreshControl;
- (void)onClickCommentButton:(id)arg1;
- (void)requestLikeWithPhotoModel:(id)arg1 ugcKey:(id)arg2;
- (long long)feedPictureCount;
- (void)onClickLikeButton:(id)arg1;
- (_Bool)shouldSupportPicComment;
- (void)onClickManageUntime;
- (void)onClickPhotoDescModify:(id)arg1;
- (void)onSelectPhotoToBrowse:(id)arg1 btn:(id)arg2;
- (void)onEnterHomePageWithUIN:(long long)arg1 nickName:(id)arg2;
- (void)onClickAlbumCover;
- (void)gotoEditViewController:(long long)arg1;
- (void)gotoEditViewController;
- (void)applyForShareAlbumMember:(CDUnknownBlockType)arg1;
- (void)gotoShareMemberVC:(_Bool)arg1;
- (void)onClickJoinBtn;
- (void)onClickUploadBtn;
- (void)onClickVisitorBtn;
- (id)jumpUrlURLParam;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setOperationBottomBarHidden:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldShowUploaders;
- (long long)restUntimeNum;
- (_Bool)hasMoreUntimePhotos;
- (void)updateSectionList;
- (_Bool)checkSuggestUploadCondition;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)loadingCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBgButtonClick:(id)arg1;
- (id)getAnIndividualAlbumPhotoEmptyCellForTableView:(id)arg1;
- (id)getAnPhotoEmptyCellForTableView:(id)arg1;
- (_Bool)isFromLoveSpace;
- (void)refreshPhotoList:(id)arg1;
- (void)onPasswordError:(id)arg1;
- (void)updateLikeNum:(id)arg1;
- (void)didModifyAlbumBigEvent:(id)arg1;
- (void)didModifyAlbum:(id)arg1;
- (void)onCommentNotify:(id)arg1;
- (void)onLikeNotify:(id)arg1;
- (id)fetchUserShareClentAttr:(id)arg1 uin:(long long)arg2;
- (void)replaceNewPhotoListViewController;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (int)onJoinAlbumNotify:(id)arg1;
- (void)updateCoverViewUploadBtn;
- (int)onGetAlbumNotify:(id)arg1;
- (void)updateFeedModelWithAlbumInfo:(id)arg1;
- (void)onAlbumSkinSet:(id)arg1;
- (void)deleteRecommendPhoto:(id)arg1;
- (void)deletePhoto:(id)arg1;
- (void)onDeletePhoto:(id)arg1;
- (void)updateParamForChild:(id)arg1;
- (void)onAddFakeVideoNotify:(id)arg1;
- (void)onRemoveFakeVideoNotify:(id)arg1;
- (void)onGetTimeLinePhotoListNotify:(id)arg1;
- (void)fakeVideoTimeOut;
- (void)removeFakeVideoFeeds:(id)arg1 isThemeAlbum:(_Bool)arg2;
- (void)saveFakeVideoList;
- (void)loadFakeVideoList;
- (void)preloadURLsFromPhotoModels:(id)arg1;
- (void)createSuggestUploadImageViewCell;
- (void)loadOCSPlusgin;
- (CDUnknownBlockType)loadSuccessBlock;
- (void)reloadData;
- (void)addMultiPoiArray:(id)arg1;
- (void)addRecommendAlbumToCollectionList;
- (int)onGetPhotoListNotify:(id)arg1;
- (void)updateFeedModelWithShareInfo:(id)arg1;
- (void)onFakeFeedNotify:(id)arg1;
- (void)onNotifyShouldRefresh:(id)arg1;
- (void)onNotifyDeleteAlbum:(id)arg1;
- (void)onNotifyForward:(id)arg1;
- (void)initNotificationObservers:(id)arg1;
- (void)requestLocalPhotoList;
- (void)requestAlbumCover:(_Bool)arg1;
- (void)bigEventModifyRequest:(id)arg1;
- (_Bool)requestCommonPhotoList:(_Bool)arg1;
- (_Bool)onRefresh;
- (void)resetVideoMakerCoverUrl;
- (void)createVideoMakeMoreView;
- (void)setPhotModeForAlbum;
- (id)photoModeForAblum;
- (void)onClickMenuBtn:(id)arg1 itemType:(long long)arg2;
- (void)onClickMoreView:(id)arg1 itemType:(long long)arg2;
- (void)createMoreView;
- (void)onClickRightMoreBtn:(id)arg1;
- (void)onClickMoreBtn;
- (void)onAddComment;
- (void)likeAlbum:(_Bool)arg1;
- (void)updateOperationBarBrowserMode;
- (void)updateOperationBottomBar;
- (_Bool)hideVideoList;
- (_Bool)hasNoAlbumCover;
- (_Bool)isThemeAlbum;
- (void)updateAlbumCoverWithPoiArray:(id)arg1;
- (void)createHeaderView;
- (void)updateHeaderView;
- (void)updatePhotoModeForNormalStatus;
- (void)onUpdateAlbumCommentNotify:(id)arg1;
- (void)removeHintView:(id)arg1;
- (void)updateWithQBossHint:(id)arg1 iconURL:(id)arg2 duration:(double)arg3;
- (void)afterViewDidAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pinchView:(id)arg1;
- (void)viewDidLoad;
- (void)setShareMemberFirstPagePhotos:(id)arg1;
- (id)initWithJumpUrl:(id)arg1;
- (id)initWithFeedModel:(id)arg1 param:(id)arg2;
- (id)init;
- (_Bool)shouldRequestShareMemberPhoto;
- (void)updateLoversAlbumFont:(id)arg1;
- (void)etFontChanged:(id)arg1;
- (void)downloadLoversAlbumFont;
- (void)scrollToRowWithIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

