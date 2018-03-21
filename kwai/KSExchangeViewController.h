//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSTableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class KSExchangeBtnCell, KSExchangeModel, KSExchangeZuanTextFieldCell, KSPurchaseHeader, KSTableView, NSString, UIImageView;

@interface KSExchangeViewController : KSBaseViewController <KSTableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    KSTableView *_tableView;
    UIImageView *_eventCoverView;
    KSPurchaseHeader *_purchaseHeader;
    NSString *_name;
    KSExchangeZuanTextFieldCell *_exchangeZuanTextFieldCell;
    KSExchangeBtnCell *_exchangeBtnCell;
    KSExchangeModel *_exchangeModel;
    NSString *_identifier;
}

+ (id)instanceWithName:(id)arg1;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) KSExchangeModel *exchangeModel; // @synthesize exchangeModel=_exchangeModel;
@property(retain, nonatomic) KSExchangeBtnCell *exchangeBtnCell; // @synthesize exchangeBtnCell=_exchangeBtnCell;
@property(retain, nonatomic) KSExchangeZuanTextFieldCell *exchangeZuanTextFieldCell; // @synthesize exchangeZuanTextFieldCell=_exchangeZuanTextFieldCell;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) KSPurchaseHeader *purchaseHeader; // @synthesize purchaseHeader=_purchaseHeader;
@property(retain, nonatomic) UIImageView *eventCoverView; // @synthesize eventCoverView=_eventCoverView;
@property(retain, nonatomic) KSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)changedZuan;
- (id)zuanWithKCoin:(id)arg1;
- (id)kCoinWithZuan:(id)arg1;
- (id)zuan;
- (void)reloadHeaderWithAnimation:(_Bool)arg1;
- (void)hiddenKeyboard;
- (_Bool)validate;
- (void)exchangeWithInfo:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didTextChanged:(id)arg1;
- (void)didReceiveKeyboardNotification:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableViewHeader:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)setKCoinName:(id)arg1 holderContent:(id)arg2;
- (id)setZuanName:(id)arg1 holderContent:(id)arg2;
- (id)setNavigationBarName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

