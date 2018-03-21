//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFViewController.h"

#import "PromotionCenterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CDPSpaceView, NSString, TFUnifyResultView, UIButton, UITableView, UIView;
@protocol TFUnifySucceedDelegate;

@interface TFUnifySucceedViewController : TFViewController <PromotionCenterDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <TFUnifySucceedDelegate> _delegate;
    NSString *_amountDes;
    NSString *_memo;
    UITableView *_tableView;
    TFUnifyResultView *_resultView;
    UIButton *_completeButton;
    UIView *_adDivider;
    CDPSpaceView *_spaceView;
}

@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) UIView *adDivider; // @synthesize adDivider=_adDivider;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) TFUnifyResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *amountDes; // @synthesize amountDes=_amountDes;
@property(nonatomic) __weak id <TFUnifySucceedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCompleteButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1;
- (void)viewWillDestroy;
- (void)observePromotion;
- (void)setupTableView;
- (void)initialConfig;
- (void)viewDidLoad;
- (id)initWithAmount:(id)arg1 memo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

