//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKTransitPayViewDelegate-Protocol.h"

@class MBKPanelCardView, MBKTransitDetailViewModel, MBKTransitPayView, NSString, UIView;

@interface MBKTransitDetailViewController : MBKBaseViewController <MBKTransitPayViewDelegate>
{
    NSString *_orderId;
    NSString *_ticketCode;
    UIView *_backgroundView;
    MBKPanelCardView *_transitTicketDetailCardView;
    MBKTransitDetailViewModel *_transitDetailViewModel;
    MBKTransitPayView *_transitPayView;
}

+ (void)setTransitStyleShadow:(id)arg1;
+ (void)load;
@property(retain, nonatomic) MBKTransitPayView *transitPayView; // @synthesize transitPayView=_transitPayView;
@property(retain, nonatomic) MBKTransitDetailViewModel *transitDetailViewModel; // @synthesize transitDetailViewModel=_transitDetailViewModel;
@property(retain, nonatomic) MBKPanelCardView *transitTicketDetailCardView; // @synthesize transitTicketDetailCardView=_transitTicketDetailCardView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *ticketCode; // @synthesize ticketCode=_ticketCode;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)initTransitPayView;
- (void)gotoOderPaied:(id)arg1;
- (void)gotoPayWith:(id)arg1;
- (void)presentLoginViewController;
- (void)transitPayAction:(id)arg1;
- (id)transitTicketDetailView;
- (void)didReceiveMemoryWarning;
- (void)transitcardDetailViewRemake:(id)arg1;
- (void)setupViewModel;
- (void)initTransitTicketDetailCardView;
- (void)initBackgroundScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addNavigationBar;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

