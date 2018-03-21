//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWTableController.h"

@class ALPFundBankCardCell, ALPFundMoneyBottomInfoCell, ALPFundMoneyCell, ALPFundTransferOutAmountSubCell, ALPFundTransferOutErrorView, APWealthFooterView, DTRpcAsyncCaller, NSArray, NSString, UIScrollView, WEALTHBankCardForTransferOutV993PB;

@interface ALPFundTransferOutBankCardV2ViewController : WWTableController
{
    NSArray *_sectionArray;
    WEALTHBankCardForTransferOutV993PB *_selectedCard;
    NSString *_bankcardNoticeId;
    APWealthFooterView *_footerView;
    ALPFundBankCardCell *_bankCardCell;
    ALPFundMoneyCell *_amountCell;
    ALPFundMoneyBottomInfoCell *_moneyBottomCell;
    ALPFundTransferOutAmountSubCell *_cardIntroCell;
    ALPFundTransferOutErrorView *_errorView;
    UIScrollView *_addCardNoticeView;
    DTRpcAsyncCaller *_startVerifyIdentityRPCCaller;
    NSString *_securityId;
    NSString *_verifyId;
}

+ (id)tableView:(id)arg1 indexPathForRow:(id)arg2;
@property(copy, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(copy, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) DTRpcAsyncCaller *startVerifyIdentityRPCCaller; // @synthesize startVerifyIdentityRPCCaller=_startVerifyIdentityRPCCaller;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)canAddNewBankCard;
- (id)buildBankCardType:(id)arg1;
- (void)didSelectBankCard:(id)arg1 controller:(id)arg2;
- (void)clickTransferOut:(id)arg1;
- (void)confirmCheckOut:(_Bool)arg1;
- (void)callbackProcess:(id)arg1;
- (void)oldVerifyIdentityProcess;
- (void)verifyIdentitySecondCheckProcess;
- (void)verifyIdentityProcess;
- (void)prepareForVerifyIdentityProcess;
- (_Bool)confirmCheckOutCheckInput:(_Bool)arg1;
- (void)didClickMoneyBottomLink;
- (void)didClickAmountIntro;
- (void)didClickFillAmount:(id)arg1;
- (void)didClickTransferIntro:(id)arg1;
- (void)gotoKuaijie;
- (void)updateChannelSelection:(_Bool)arg1;
- (id)errorTextForCurrentAmount:(id)arg1;
- (id)errorTextForSelectedChannel:(id)arg1 defaultType:(id)arg2;
- (void)updateCellHeight:(double)arg1 forIndexPath:(id)arg2 needToRefresh:(_Bool)arg3;
- (id)findDefaultChannel;
- (id)findSelectedChannel;
- (_Bool)isAllChannelUnSelected;
- (id)channelCells;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)cellsForSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createCardNoticeView:(id)arg1 action:(SEL)arg2 title:(id)arg3 subtitle:(id)arg4;
- (void)viewDidLayoutSubviews;
- (void)reloadContent;
- (id)r;
- (id)buildSections:(id)arg1;
- (void)updateRpcData:(id)arg1;
- (id)tableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

