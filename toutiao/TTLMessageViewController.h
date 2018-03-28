//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAGradientLayer, NSString, TTLRoomMessageStore, TTLRoomModel, UIButton, UITableView;
@protocol TTLMessageViewControllerDelegate;

@interface TTLMessageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _userChecking;
    TTLRoomMessageStore *_messageStore;
    id <TTLMessageViewControllerDelegate> _delegate;
    UITableView *_messageTableView;
    TTLRoomModel *_roomModel;
    UIButton *_hasMoreButton;
    long long _lastReadIndex;
    CAGradientLayer *_gradient;
}

@property(nonatomic) _Bool userChecking; // @synthesize userChecking=_userChecking;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) long long lastReadIndex; // @synthesize lastReadIndex=_lastReadIndex;
@property(retain, nonatomic) UIButton *hasMoreButton; // @synthesize hasMoreButton=_hasMoreButton;
@property(retain, nonatomic) TTLRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) UITableView *messageTableView; // @synthesize messageTableView=_messageTableView;
@property(nonatomic) __weak id <TTLMessageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTLRoomMessageStore *messageStore; // @synthesize messageStore=_messageStore;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollToBottom;
- (void)hasMoreButtonCLicked:(id)arg1;
- (_Bool)isLastReadIndexVisible;
- (void)showHasMoreMessageLabel;
- (_Bool)shouldScrollToBottom;
- (void)refreshMessageTable;
- (void)loadMessageArray:(id)arg1 forRoom:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
