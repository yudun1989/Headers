//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSCountryCodeSelectViewControllerDelegate-Protocol.h"
#import "KSUserInfoSettingCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSCountryCodeSelectDataSource, KSPhoneCodeFooterView, KSPhoneCodeHeaderView, KSPhoneVerifyCodeModel, KSUserInfoSettingCell, NSArray, NSString, NSTimer, UITableView;

@interface KSPhoneCodeViewController : KSBaseViewController <KSCountryCodeSelectViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, KSUserInfoSettingCellDelegate>
{
    KSPhoneCodeHeaderView *_headerView;
    UITableView *_tableView;
    KSPhoneCodeFooterView *_footerView;
    KSUserInfoSettingCell *_phoneCell;
    KSUserInfoSettingCell *_verifyCodeCell;
    NSArray *_cells;
    NSString *_phoneNumber;
    NSString *_defaultPhoneNumber;
    KSCountryCodeSelectDataSource *_countryCodeSelectDataSource;
    NSTimer *_verifyCodeTimer;
    long long _verifyCodeTimerTick;
    KSPhoneVerifyCodeModel *_verifyCodeModel;
    NSString *_submitBtnText;
}

@property(retain, nonatomic) NSString *submitBtnText; // @synthesize submitBtnText=_submitBtnText;
@property(retain, nonatomic) KSPhoneVerifyCodeModel *verifyCodeModel; // @synthesize verifyCodeModel=_verifyCodeModel;
@property(nonatomic) long long verifyCodeTimerTick; // @synthesize verifyCodeTimerTick=_verifyCodeTimerTick;
@property(retain, nonatomic) NSTimer *verifyCodeTimer; // @synthesize verifyCodeTimer=_verifyCodeTimer;
@property(retain, nonatomic) KSCountryCodeSelectDataSource *countryCodeSelectDataSource; // @synthesize countryCodeSelectDataSource=_countryCodeSelectDataSource;
@property(retain, nonatomic) NSString *defaultPhoneNumber; // @synthesize defaultPhoneNumber=_defaultPhoneNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) KSUserInfoSettingCell *verifyCodeCell; // @synthesize verifyCodeCell=_verifyCodeCell;
@property(retain, nonatomic) KSUserInfoSettingCell *phoneCell; // @synthesize phoneCell=_phoneCell;
@property(retain, nonatomic) KSPhoneCodeFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) KSPhoneCodeHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)didChangeCellText:(id)arg1;
- (id)validatedPhoneCodeInfo;
- (void)textFieldDidTapReturnBtnWithCell:(id)arg1 textField:(id)arg2;
- (int)verifyCodeType;
- (void)didTapVerifyCodeBtn:(id)arg1;
- (void)didTapCountryCodeBtn;
- (void)sendPhoneCodeWithPhoneNumber:(id)arg1 countryCode:(id)arg2 type:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)countryCodeSelectViewController:(id)arg1 didSelectCountryInfo:(id)arg2;
- (void)stopVerifyTimer;
- (void)startVerifyTimer;
- (void)setVerifyCodeEnabled:(_Bool)arg1;
- (void)verifyTimerFired:(id)arg1;
- (_Bool)checkEmptyCellAndShowAlert;
- (void)didTapDoneButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setUpFooter:(id)arg1;
- (void)setUpHeader:(id)arg1;
- (id)setUpCells;
- (id)createNumberPadTopLine;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSubmitBtnText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

