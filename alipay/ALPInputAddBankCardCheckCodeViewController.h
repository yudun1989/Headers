//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APButton, APSmsAuthCodeBox, APWealthBaseTableView, NSMutableString, NSString, UIScrollView;

@interface ALPInputAddBankCardCheckCodeViewController : BEEBaseController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, UITextFieldDelegate>
{
    UIScrollView *_scrolleView;
    NSMutableString *_inputMobileNo;
    NSString *_signId;
    NSString *_expressCacheKey;
    APSmsAuthCodeBox *_checkCodeBox;
    APButton *_nextButton;
    NSString *_instId;
    NSString *_cardType;
    NSString *_openAppId;
    NSString *_returnUrl;
    APWealthBaseTableView *_tableView;
}

@property(retain, nonatomic) APWealthBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(retain, nonatomic) NSString *openAppId; // @synthesize openAppId=_openAppId;
@property(retain, nonatomic) NSString *expressCacheKey; // @synthesize expressCacheKey=_expressCacheKey;
@property(retain, nonatomic) NSString *signId; // @synthesize signId=_signId;
@property(retain, nonatomic) NSString *inputMobileNo; // @synthesize inputMobileNo=_inputMobileNo;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pwdContentChanged;
- (_Bool)isButtonEnabled;
- (void)viewWillDestroy;
- (void)back;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)getCheckCodeClick;
- (void)nextStepClicked;
- (void)didReceiveMemoryWarning;
- (void)initScrollView;
- (void)didClickSMSIntro:(id)arg1;
- (double)initTipLable;
- (void)initCheckCodeControl:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithInstId:(id)arg1 cardType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

