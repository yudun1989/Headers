//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "TBAddressBookCellDelegate-Protocol.h"
#import "TBAddressShareDefaultWordsViewDelegate-Protocol.h"
#import "TBContactIndexBarDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TBAddressBookEmptyView, TBAddressBookInteractor, TBAddressBookMessageContainerKeyboardBackgroundView, TBAddressBookMessageContainerView, TBAddressBookMessageShowFloatContainerTipView, TBAddressBookRestrictedView, TBAddressBookSearchBar, TBAddressBookShareContactView, TBAddressShareDefaultWordsFloatView, TBAddressShareDefaultWordsView, TBContactHeaderView, TBContactIndexBar, TBContactShareItem, TBContactShareRelationshipModel, TBContactsDataSourceObserver, UISearchDisplayController, UITableView, UIView, UIWindow;

@interface TBAddressBookViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate, TBAddressBookCellDelegate, MFMessageComposeViewControllerDelegate, TBAddressShareDefaultWordsViewDelegate, TBContactIndexBarDelegate>
{
    _Bool _isExistRecentContacts;
    _Bool _isSearchTableViewShow;
    _Bool _isNeedLoadInterface;
    _Bool _canShowOrHideAllScreen;
    TBContactHeaderView *_headerView;
    UIView *_shareView;
    TBAddressBookSearchBar *_searchBar;
    UITableView *_tableView;
    TBAddressBookRestrictedView *_restrictedView;
    TBAddressBookEmptyView *_emptyView;
    TBAddressBookMessageContainerView *_messageContainerView;
    TBAddressBookMessageShowFloatContainerTipView *_messageShowFloatContainerTipView;
    TBAddressBookMessageContainerKeyboardBackgroundView *_messageContainerKeyboardBackgroundView;
    TBAddressShareDefaultWordsFloatView *_shareDefaultWordsFloatView;
    TBAddressShareDefaultWordsView *_shareDefaultWordsView;
    UISearchDisplayController *_displayController;
    TBContactIndexBar *_indexBar;
    TBAddressBookShareContactView *_addressBookShareContactView;
    UIWindow *_toastSMSWindow;
    NSMutableArray *_listContent;
    NSMutableArray *_filteredListContent;
    NSMutableArray *_shareContacts;
    NSMutableArray *_sectionIndexTitles;
    NSArray *_contactsFromDataSource;
    TBAddressBookInteractor *_addressBookInteractor;
    TBContactShareRelationshipModel *_relationshipModel;
    NSString *_originRecommendName;
    TBContactShareItem *_shareItem;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _shareResultBlock;
    NSMutableDictionary *_friendsMap;
    TBContactsDataSourceObserver *_contactsDataSourceObserver;
    long long _oldBarStyle;
    struct CGPoint _lastOffset;
    struct CGRect _messageContainerLastKeyboardRect;
}

+ (_Bool)tbNeedNavibar;
+ (_Bool)tbNeedToolbar;
@property(nonatomic) long long oldBarStyle; // @synthesize oldBarStyle=_oldBarStyle;
@property(retain, nonatomic) TBContactsDataSourceObserver *contactsDataSourceObserver; // @synthesize contactsDataSourceObserver=_contactsDataSourceObserver;
@property(nonatomic) _Bool canShowOrHideAllScreen; // @synthesize canShowOrHideAllScreen=_canShowOrHideAllScreen;
@property(nonatomic) _Bool isNeedLoadInterface; // @synthesize isNeedLoadInterface=_isNeedLoadInterface;
@property(retain, nonatomic) NSMutableDictionary *friendsMap; // @synthesize friendsMap=_friendsMap;
@property(copy, nonatomic) CDUnknownBlockType shareResultBlock; // @synthesize shareResultBlock=_shareResultBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) TBContactShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) NSString *originRecommendName; // @synthesize originRecommendName=_originRecommendName;
@property(retain, nonatomic) TBContactShareRelationshipModel *relationshipModel; // @synthesize relationshipModel=_relationshipModel;
@property(retain, nonatomic) TBAddressBookInteractor *addressBookInteractor; // @synthesize addressBookInteractor=_addressBookInteractor;
@property(nonatomic) struct CGRect messageContainerLastKeyboardRect; // @synthesize messageContainerLastKeyboardRect=_messageContainerLastKeyboardRect;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
@property(retain, nonatomic) NSArray *contactsFromDataSource; // @synthesize contactsFromDataSource=_contactsFromDataSource;
@property(retain, nonatomic) NSMutableArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(retain, nonatomic) NSMutableArray *shareContacts; // @synthesize shareContacts=_shareContacts;
@property(nonatomic) _Bool isSearchTableViewShow; // @synthesize isSearchTableViewShow=_isSearchTableViewShow;
@property(nonatomic) _Bool isExistRecentContacts; // @synthesize isExistRecentContacts=_isExistRecentContacts;
@property(retain, nonatomic) NSMutableArray *filteredListContent; // @synthesize filteredListContent=_filteredListContent;
@property(retain, nonatomic) NSMutableArray *listContent; // @synthesize listContent=_listContent;
@property(retain, nonatomic) UIWindow *toastSMSWindow; // @synthesize toastSMSWindow=_toastSMSWindow;
@property(retain, nonatomic) TBAddressBookShareContactView *addressBookShareContactView; // @synthesize addressBookShareContactView=_addressBookShareContactView;
@property(retain, nonatomic) TBContactIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(retain, nonatomic) UISearchDisplayController *displayController; // @synthesize displayController=_displayController;
@property(retain, nonatomic) TBAddressShareDefaultWordsView *shareDefaultWordsView; // @synthesize shareDefaultWordsView=_shareDefaultWordsView;
@property(retain, nonatomic) TBAddressShareDefaultWordsFloatView *shareDefaultWordsFloatView; // @synthesize shareDefaultWordsFloatView=_shareDefaultWordsFloatView;
@property(retain, nonatomic) TBAddressBookMessageContainerKeyboardBackgroundView *messageContainerKeyboardBackgroundView; // @synthesize messageContainerKeyboardBackgroundView=_messageContainerKeyboardBackgroundView;
@property(retain, nonatomic) TBAddressBookMessageShowFloatContainerTipView *messageShowFloatContainerTipView; // @synthesize messageShowFloatContainerTipView=_messageShowFloatContainerTipView;
@property(retain, nonatomic) TBAddressBookMessageContainerView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
@property(retain, nonatomic) TBAddressBookEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBAddressBookRestrictedView *restrictedView; // @synthesize restrictedView=_restrictedView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBAddressBookSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) TBContactHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)resetStatusBar;
- (void)setStatusBar;
- (_Bool)isIPhoneX;
- (double)getSearchBarHeight;
- (void)addressShareDefaultWordsView:(id)arg1 didSelectWords:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1 scope:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)indexBar:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexesForIndexBar:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCellTaoAndAvtarAndFriendShipWithData:(id)arg1 cell:(id)arg2;
- (void)gotoIMChatWithShareFriendList:(id)arg1;
- (_Bool)needShowAllShareSuccessGuideView;
- (void)cacheRelationshipWithShareResultListModel:(id)arg1;
- (long long)decodeTel:(id)arg1 withDecode:(id)arg2;
- (id)currentFirstWindow;
- (void)pushShareResultViewController:(id)arg1;
- (void)handleShareSuccessWithShareResultListModel:(id)arg1;
- (long long)indexForShareType:(id)arg1;
- (void)changeContactsAndSaveContactsWithItem:(id)arg1;
- (id)dictionaryFromContactData:(id)arg1 withTimestamp:(id)arg2;
- (void)hideLoading;
- (void)showLoading;
- (void)shareItem:(id)arg1;
- (void)addressBookSearchBarBecomeFirstResponder:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)hideKeyBoardIfNeed;
- (void)addressBookMessageAvatarViewDeleteItemNotification:(id)arg1;
- (void)addressBookAcceptShareComponentNotification:(id)arg1;
- (void)addressShareDefaultWordsFloatViewReceivedTouch:(id)arg1;
- (void)addressBookMessageChangeNameViewDidMaxChars:(id)arg1;
- (void)addressBookMessageInputViewTextViewDidMaxChars:(id)arg1;
- (void)addressBookMessageInputViewBecomeFirstResponder:(id)arg1;
- (void)addressBookMessageChangeNameViewClickedConfirmButton:(id)arg1;
- (void)addressBookMessageShareNameViewClickedHideButton:(id)arg1;
- (void)addressBookMessageShareNameViewClickedChangeNameButton:(id)arg1;
- (void)addressBookMessageInputViewClickedShareButton:(id)arg1;
- (void)addressBookMessageInputViewTextViewHeightChange:(id)arg1;
- (void)addressBookMessageInputViewClickedPhraseButton:(id)arg1;
- (void)addressBookMessageContainerKeyboardBackgroundViewHandleTapGesture:(id)arg1;
- (void)addressBookMessageShowFloatContainerTipViewClickedTipButton:(id)arg1;
- (_Bool)canCheckAnyBody;
- (void)hideMessageContainerKeyboardBackgroundViewIfNeed;
- (void)showMessageContainerKeyboardBackgroundViewIfNeed;
- (void)handleMessageChangeNameViewHideKeyboardEvent;
- (struct CGRect)messageContainerViewFrameForMessageChangeNameViewFirstShowKeyBoardWithRect:(struct CGRect)arg1;
- (void)hideShareDefaultWordsView;
- (void)showShareDefaultWordsView;
- (id)messageInputViewText;
- (void)changeMessageInputViewToHeight:(double)arg1;
- (void)hideMessageChangeNameView;
- (void)showMessageChangeNameView;
- (void)hideMessageFloatContainerView;
- (void)showMessageFloatContainerView;
- (void)resetMessageContinerViewAndTipView;
- (void)unenableMessageContainerView;
- (void)enableMessageContainerView;
- (void)hideMessageContainerViewWithTableView:(id)arg1;
- (void)showMessageContainerViewWithTableView:(id)arg1;
- (_Bool)validateContent:(id)arg1 isNickName:(_Bool)arg2;
- (id)shareNameForShareContacts:(id)arg1;
- (void)correctCheckButtonStateWithTableView:(id)arg1 indexPath:(id)arg2 addressBook:(id)arg3;
- (_Bool)isNeedNewContact;
- (void)tableView:(id)arg1 checkButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)sectionNumberByPinyin:(id)arg1;
- (void)addressBookHeaderViewClickedCloseButton:(id)arg1;
- (void)unregistNotifications;
- (void)registNotifications;
- (void)setUpView;
- (id)imageByScalingAndCroppingToSize:(struct CGSize)arg1 withOriginImage:(id)arg2;
- (void)handleCallBackForSuccessReadContacts;
- (void)loadData;
- (void)showRestrictedView;
- (void)showAddressBookShareContactView;
- (void)moreItemClicked:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (id)initWithShareItem:(id)arg1 shareResultBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

