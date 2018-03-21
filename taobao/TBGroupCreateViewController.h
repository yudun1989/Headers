//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMSelectFriendsController.h"

#import "TBIMGroupServiceDelegate-Protocol.h"
#import "TBIMSelectFriendsControllerDelegate-Protocol.h"

@class NSString;
@protocol TBGroupCreatDelegate;

@interface TBGroupCreateViewController : TBIMSelectFriendsController <TBIMGroupServiceDelegate, TBIMSelectFriendsControllerDelegate>
{
    id <TBGroupCreatDelegate> _createDelegate;
    _Bool _ignoreGroupSelecte;
    long long _maxCount;
    long long _barStyle;
}

@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) _Bool ignoreGroupSelecte; // @synthesize ignoreGroupSelecte=_ignoreGroupSelecte;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (void)groupCreateFaild:(id)arg1;
- (void)groupCreateSuccess:(id)arg1;
- (void)friendDidDeselectedAtIndex:(unsigned long long)arg1;
- (void)friendDidSelectedAtIndex:(unsigned long long)arg1;
- (void)didMeetLimitSelectionNumber;
- (void)gotoAddFriend;
- (void)showEmptyView;
- (long long)maxSelectionNumber;
- (id)selectFriendLoadingText;
- (void)selectFriendVC:(id)arg1 commitAction:(id)arg2;
- (void)selectedGroup:(id)arg1;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)configTableViewHeaderView;
- (void)selectedGroup;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

