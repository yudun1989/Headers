//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBSNSTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSMutableDictionary, NSString, TBModelStatusHandler, TBSNSFollowBaseRequestResult, TBSNSFollowModelStatusInfo, UITableView;

@interface TBSNSFollowBaseViewController : TBViewController <TBSNSTableViewDelegate, UITableViewDataSource>
{
    _Bool _requestCounterChangedNeedNotification;
    _Bool _dataDidLoaded;
    _Bool _autoLoadData;
    _Bool _isShowSecondRightBtn;
    NSMutableDictionary *_requests;
    unsigned long long _requestCounter;
    UITableView *_tableView;
    TBSNSFollowBaseRequestResult *_result;
    TBSNSFollowModelStatusInfo *_statusInfo;
    TBModelStatusHandler *_statusHandler;
}

@property(nonatomic) _Bool isShowSecondRightBtn; // @synthesize isShowSecondRightBtn=_isShowSecondRightBtn;
@property(nonatomic) _Bool autoLoadData; // @synthesize autoLoadData=_autoLoadData;
@property(nonatomic) _Bool dataDidLoaded; // @synthesize dataDidLoaded=_dataDidLoaded;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) TBSNSFollowModelStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(retain, nonatomic) TBSNSFollowBaseRequestResult *result; // @synthesize result=_result;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool requestCounterChangedNeedNotification; // @synthesize requestCounterChangedNeedNotification=_requestCounterChangedNeedNotification;
@property(nonatomic) unsigned long long requestCounter; // @synthesize requestCounter=_requestCounter;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (_Bool)isExistRequestWithName:(id)arg1;
- (void)removeRequestWithName:(id)arg1;
- (void)addRequest:(id)arg1 withName:(id)arg2;
- (void)cancelRequestWithName:(id)arg1;
- (void)cancelRequests;
- (void)requestCounterDidChanged;
- (void)requestNextPageWithLastId:(id)arg1 timestamp:(id)arg2;
- (SEL)selectorForEmpty;
- (void)handleEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)handleError;
- (void)modelDidRemovedFollow:(id)arg1;
- (void)modelDidChangedPushStatus:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 utilityButton:(id)arg3;
- (id)tableView:(id)arg1 utilityButtonsViewAtIndexPath:(id)arg2 forCellState:(long long)arg3;
- (void)configCell:(id)arg1 withData:(id)arg2;
- (id)tableViewCellWithIdentifier:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showSuccessHUDWithText:(id)arg1;
- (void)updateEmptyOverlay:(id)arg1;
- (void)updateErrorOverlay:(id)arg1;
- (void)showEmptyOverlay;
- (void)showErrorOverlayWithError:(id)arg1;
- (void)receiveData:(id)arg1 error:(id)arg2 showCommendHandler:(CDUnknownBlockType)arg3;
- (void)receiveData:(id)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)initWithTableViewStyle:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

