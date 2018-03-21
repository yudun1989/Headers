//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatBaseController.h"

#import "APSKLaunchpadDelegate-Protocol.h"
#import "PPChatMessageCellDelegate-Protocol.h"
#import "PPChatMessageDataDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWPhotoBrowserDelegate-Protocol.h"

@class APSKLaunchpad, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, PPChatContext, PPChatHeaderView, PPChatMessage, PPChatMessageLoadingView, PPChatPublicAccount, PPChatThirdPartyAccount, PPChatTimelineMessage, UIActivityIndicatorView, UIColor, UITableView, UIView;
@protocol ChatBaseMessageControllerDelegate, PPChatMessageDataSource;

@interface PPChatBaseMessageController : PPChatBaseController <UITableViewDataSource, WWPhotoBrowserDelegate, UITableViewDelegate, PPChatMessageCellDelegate, PPChatMessageDataDelegate, APSKLaunchpadDelegate>
{
    _Bool _frozen;
    _Bool _isPopLoading;
    _Bool _isLoading;
    _Bool _loadingHead;
    _Bool _loadingHistory;
    _Bool _allHistoryLoaded;
    _Bool _isLoadedHead;
    _Bool _needFreshToEnd;
    _Bool _needWaitProcess;
    _Bool _needQueryHistory;
    _Bool _isHistoryLoading;
    _Bool _isHoldFrame;
    id <PPChatMessageDataSource> _messageDataSource;
    id <ChatBaseMessageControllerDelegate> _delegateChange;
    UITableView *_tableView;
    NSArray *_messagesHistoryTemp;
    NSMutableArray *_messageArray;
    NSString *_userName;
    NSString *_publicName;
    PPChatMessage *_firstVisibleMessage;
    UIView *_headerActivityView;
    UIActivityIndicatorView *_headerActivity;
    PPChatTimelineMessage *_timeMsgModelTop;
    NSTimer *_loadingTimer;
    double _lastMsgHeight;
    double _previousOffset;
    unsigned long long _previousMsgCount;
    NSMutableDictionary *_posedMessageInfo;
    UIView *_newsEmptyView;
    PPChatPublicAccount *_publicAccount;
    PPChatThirdPartyAccount *_thirdPartyAccount;
    PPChatMessage *_activeMessage;
    id _activeItem;
    UIView *_footerView;
    PPChatMessageLoadingView *_messageLoadingView;
    PPChatContext *_context;
    APSKLaunchpad *_shareLaunchpad;
}

@property(nonatomic) __weak APSKLaunchpad *shareLaunchpad; // @synthesize shareLaunchpad=_shareLaunchpad;
@property(nonatomic) _Bool isHoldFrame; // @synthesize isHoldFrame=_isHoldFrame;
@property(nonatomic) __weak PPChatContext *context; // @synthesize context=_context;
@property(retain, nonatomic) PPChatMessageLoadingView *messageLoadingView; // @synthesize messageLoadingView=_messageLoadingView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) id activeItem; // @synthesize activeItem=_activeItem;
@property(retain, nonatomic) PPChatMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
@property(retain, nonatomic) PPChatThirdPartyAccount *thirdPartyAccount; // @synthesize thirdPartyAccount=_thirdPartyAccount;
@property(retain, nonatomic) PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) UIView *newsEmptyView; // @synthesize newsEmptyView=_newsEmptyView;
@property(retain) NSMutableDictionary *posedMessageInfo; // @synthesize posedMessageInfo=_posedMessageInfo;
@property(nonatomic) unsigned long long previousMsgCount; // @synthesize previousMsgCount=_previousMsgCount;
@property(nonatomic) double previousOffset; // @synthesize previousOffset=_previousOffset;
@property(nonatomic) _Bool isHistoryLoading; // @synthesize isHistoryLoading=_isHistoryLoading;
@property(nonatomic) _Bool needQueryHistory; // @synthesize needQueryHistory=_needQueryHistory;
@property(nonatomic) _Bool needWaitProcess; // @synthesize needWaitProcess=_needWaitProcess;
@property(nonatomic) double lastMsgHeight; // @synthesize lastMsgHeight=_lastMsgHeight;
@property(nonatomic) _Bool needFreshToEnd; // @synthesize needFreshToEnd=_needFreshToEnd;
@property(nonatomic) _Bool isLoadedHead; // @synthesize isLoadedHead=_isLoadedHead;
@property(nonatomic) _Bool allHistoryLoaded; // @synthesize allHistoryLoaded=_allHistoryLoaded;
@property(nonatomic) _Bool loadingHistory; // @synthesize loadingHistory=_loadingHistory;
@property(nonatomic) _Bool loadingHead; // @synthesize loadingHead=_loadingHead;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isPopLoading; // @synthesize isPopLoading=_isPopLoading;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) __weak NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(nonatomic) __weak PPChatTimelineMessage *timeMsgModelTop; // @synthesize timeMsgModelTop=_timeMsgModelTop;
@property(retain, nonatomic) UIActivityIndicatorView *headerActivity; // @synthesize headerActivity=_headerActivity;
@property(retain, nonatomic) UIView *headerActivityView; // @synthesize headerActivityView=_headerActivityView;
@property(readonly, nonatomic) PPChatMessage *firstVisibleMessage; // @synthesize firstVisibleMessage=_firstVisibleMessage;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) NSArray *messagesHistoryTemp; // @synthesize messagesHistoryTemp=_messagesHistoryTemp;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ChatBaseMessageControllerDelegate> delegateChange; // @synthesize delegateChange=_delegateChange;
@property(nonatomic) __weak id <PPChatMessageDataSource> messageDataSource; // @synthesize messageDataSource=_messageDataSource;
- (void).cxx_destruct;
- (void)favourite:(id)arg1;
- (void)forwarding:(id)arg1;
- (void)controlClear;
- (void)action:(int)arg1 withControllerParam:(id)arg2;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (double)heightOfView;
- (void)holdContentWithFrame:(struct CGRect)arg1;
- (void)freshContentWithFrame:(struct CGRect)arg1;
- (void)gotoEndWithAnimate:(_Bool)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)downTableViewForLoading;
- (void)upTableViewForLoading;
- (void)hideLoading;
- (void)showLoading;
- (void)onMenuDismiss:(id)arg1;
- (void)share:(id)arg1;
- (void)reportAbuseClicked:(id)arg1;
- (void)customDelete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)cellsForMessage:(id)arg1;
- (void)setActiveCellsHighlighted:(_Bool)arg1;
- (void)showPopMenu:(id)arg1;
- (void)showAutoMessagePopMenu:(id)arg1;
- (void)stopLoadingHistory:(CDUnknownBlockType)arg1;
- (void)startLoadingHistory;
- (void)loadHistoryWhenScrollStatudChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)stopLoadingHead;
- (_Bool)startLoadingHead;
- (void)postClickMessage:(id)arg1 withIndex:(int)arg2;
- (void)postLongPressDeleteMessage:(id)arg1;
@property(readonly, nonatomic) NSString *userIconUrl;
@property(readonly, nonatomic) NSString *objectIconUrl;
@property(readonly, nonatomic) UIColor *baseColor;
@property(readonly, nonatomic) _Bool injectsTimeline;
@property(readonly, nonatomic) PPChatHeaderView *headerView;
@property(readonly, nonatomic) NSArray *messages;
- (void)refreshWithProgressHUD;
- (void)refresh;
@property(readonly, nonatomic) _Bool loadingMessage;
- (void)templateDidLoadedFromServer:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)applicationWillResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)messageCell:(id)arg1 notifyAction:(id)arg2 withActionParam:(id)arg3 andActionId:(id)arg4;
- (void)notifyCellEvent:(int)arg1 withContext:(id)arg2;
- (id)captureImageWithView:(id)arg1;
- (id)imageForZoomAnimationInPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadTableView;
- (void)addMessage:(id)arg1;
- (_Bool)filterRecallMessage:(id)arg1;
- (void)removeRecallMessageAndReloadTableView:(id)arg1;
- (void)messageDataDidIncoming:(id)arg1;
- (void)messageDataAfterRealitmeMessage;
- (void)messageDataRealitmeMessageEncounterError;
- (_Bool)messageDataShouldAcceptRealtimeMessage:(id)arg1 withContext:(id)arg2;
- (void)messageDataBeforeRealitmeMessage;
- (void)messageDataDidUpdateMessages:(id)arg1;
- (void)messageDataDeleteMessage:(id)arg1 failWithError:(id)arg2;
- (void)messageDataDidDeleteMessage:(id)arg1;
- (void)messageDataDidLoadRealtimeMessages:(id)arg1;
- (void)messageDataRequestHistoryMessagesFailWithError:(id)arg1;
- (void)setTopTimeMsg:(id)arg1;
- (void)messageDataDidLoadHistoryMessages:(id)arg1 gotAll:(_Bool)arg2;
- (void)messageDataRequestHeadMessgesFailWithError:(id)arg1;
- (void)messageDataIgnoreLoadHeadMessages;
- (void)messageDataDidLoadHeadMessages:(id)arg1 shouldReplace:(_Bool)arg2 gotAll:(_Bool)arg3;
- (_Bool)loadingWaitWithSel:(SEL)arg1 funcParam:(id)arg2;
- (void)hideLoadingNoTimeOut;
- (void)hideLoadingTimeOut;
- (_Bool)canReloadTable;
- (void)prependHistoryMsg:(id)arg1;
- (void)refreshTimeLineFromMsgAry:(long long)arg1;
- (void)updateMessages:(id)arg1;
- (void)afterDelete;
- (void)deleteMessage:(id)arg1;
- (void)reloadInsertMessageAtIndex:(long long)arg1;
- (void)reloadMessageAtIndex:(long long)arg1;
- (void)afterAppendMessagesWithIndexSet:(id)arg1;
- (void)appendMessages:(id)arg1;
- (void)afterPrependMessagesWithMessageAry:(id)arg1;
- (void)prependMessages:(id)arg1;
- (void)setMessages:(id)arg1;
- (id)preprocessMessages:(id)arg1 withPrev:(id)arg2 next:(id)arg3;
- (void)configureMessage:(id)arg1;
- (id)getTimeLineString:(id)arg1;
- (id)getTimeLineArray:(id)arg1 withNext:(id)arg2;
- (id)injectTimeline:(id)arg1 withNext:(id)arg2;
- (id)injectTimelines:(id)arg1 withPrev:(id)arg2 next:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

