//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBKCarHailingOrder, MBKDidaDetailInfomationFlowModel, MBKDidaDriverModel, MBKDidaPayActionModel, MBKDidaStatusShowModel, MBKPanelCardView, MBKRideStatusAlreadyPaidModel, MBKRideStatusQuestionsModel, NSMutableArray, NSString, UITableView;

@interface MBKDidaRideStatusView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    long long _type;
    MBKCarHailingOrder *_didaOrder;
    double _height;
    CDUnknownBlockType _updateHeighthandler;
    CDUnknownBlockType _callDriverHandler;
    CDUnknownBlockType _customerServicehandler;
    CDUnknownBlockType _feeDetailHandler;
    CDUnknownBlockType _payMoneyHandler;
    UITableView *_statusTableView;
    MBKPanelCardView *_panel;
    MBKDidaDriverModel *_driverModel;
    MBKDidaDetailInfomationFlowModel *_timeModel;
    MBKDidaDetailInfomationFlowModel *_startModel;
    MBKDidaDetailInfomationFlowModel *_endModel;
    MBKDidaDetailInfomationFlowModel *_partnerModel;
    MBKRideStatusAlreadyPaidModel *_alreadyPaidModel;
    MBKRideStatusQuestionsModel *_questionModel;
    MBKDidaStatusShowModel *_statusShowModel;
    MBKDidaPayActionModel *_payActionModel;
    NSMutableArray *_rideHailingInfoArray;
}

@property(retain, nonatomic) NSMutableArray *rideHailingInfoArray; // @synthesize rideHailingInfoArray=_rideHailingInfoArray;
@property(retain, nonatomic) MBKDidaPayActionModel *payActionModel; // @synthesize payActionModel=_payActionModel;
@property(retain, nonatomic) MBKDidaStatusShowModel *statusShowModel; // @synthesize statusShowModel=_statusShowModel;
@property(retain, nonatomic) MBKRideStatusQuestionsModel *questionModel; // @synthesize questionModel=_questionModel;
@property(retain, nonatomic) MBKRideStatusAlreadyPaidModel *alreadyPaidModel; // @synthesize alreadyPaidModel=_alreadyPaidModel;
@property(retain, nonatomic) MBKDidaDetailInfomationFlowModel *partnerModel; // @synthesize partnerModel=_partnerModel;
@property(retain, nonatomic) MBKDidaDetailInfomationFlowModel *endModel; // @synthesize endModel=_endModel;
@property(retain, nonatomic) MBKDidaDetailInfomationFlowModel *startModel; // @synthesize startModel=_startModel;
@property(retain, nonatomic) MBKDidaDetailInfomationFlowModel *timeModel; // @synthesize timeModel=_timeModel;
@property(retain, nonatomic) MBKDidaDriverModel *driverModel; // @synthesize driverModel=_driverModel;
@property(retain, nonatomic) MBKPanelCardView *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) UITableView *statusTableView; // @synthesize statusTableView=_statusTableView;
@property(copy, nonatomic) CDUnknownBlockType payMoneyHandler; // @synthesize payMoneyHandler=_payMoneyHandler;
@property(copy, nonatomic) CDUnknownBlockType feeDetailHandler; // @synthesize feeDetailHandler=_feeDetailHandler;
@property(copy, nonatomic) CDUnknownBlockType customerServicehandler; // @synthesize customerServicehandler=_customerServicehandler;
@property(copy, nonatomic) CDUnknownBlockType callDriverHandler; // @synthesize callDriverHandler=_callDriverHandler;
@property(copy, nonatomic) CDUnknownBlockType updateHeighthandler; // @synthesize updateHeighthandler=_updateHeighthandler;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) MBKCarHailingOrder *didaOrder; // @synthesize didaOrder=_didaOrder;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updatePayActionWithType:(unsigned long long)arg1;
- (void)updateRideHailingStatusViewWithOrderModel:(id)arg1;
- (void)payMoney;
- (void)feeDetail;
- (void)callCustomerService;
- (void)callDriver;
- (void)refreshQuestionCellModel:(_Bool)arg1 url:(id)arg2 onlyShowContactCustom:(_Bool)arg3;
- (void)refreshStatusCellModel:(_Bool)arg1 fee:(id)arg2 isCancelOrder:(_Bool)arg3;
- (void)refreshPayActionCellModel:(_Bool)arg1 driver:(id)arg2 payActionType:(unsigned long long)arg3;
- (void)refreshPayActionCellModel:(_Bool)arg1 driver:(id)arg2;
- (void)refreshAlreadyPaidCellModel:(_Bool)arg1 paid:(id)arg2;
- (void)refreshPartnerCellModel:(_Bool)arg1 driver:(id)arg2;
- (void)refreshEndAddressCellModel:(_Bool)arg1 driver:(id)arg2;
- (void)refreshStartAddressCellModel:(_Bool)arg1 driver:(id)arg2;
- (void)refreshTimeCellModel:(_Bool)arg1 driver:(id)arg2;
- (void)refreshDriverCellModel:(_Bool)arg1 driver:(id)arg2 showContact:(_Bool)arg3;
- (void)addPayActionCellModel;
- (void)addAlreadyPaidCellModel;
- (void)addQuestionCellModel;
- (void)addStatusShowCellModel;
- (void)addPartnerCellModel;
- (void)addEndCellModel;
- (void)addStartCellModel;
- (void)addTimeCellModel;
- (void)addDriverCellModel;
- (void)registerTableViewCell;
- (void)setupView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

