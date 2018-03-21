//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CNLogisticService, CNPackageAppointmentView, CNPackageData, CNPackageInfoView, CNPackageItem, CNPackageNoContentView, CNPackageServiceCardView, CNPackageSourceView, CNPackageStationCardView, CNPackageStationServiceView, NSArray, NSString, UILabel, UITableView;

@interface CNPackageCardView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CNPackageData *_data;
    CNPackageInfoView *_infoView;
    UITableView *_traceTableView;
    UILabel *_noDataLabel;
    NSArray *_dataArray;
    CNLogisticService *_service;
    CNPackageItem *_item;
    NSArray *_fullTraceDetail;
    CNPackageStationCardView *_stationCardView;
    CNPackageServiceCardView *_serviceCardView;
    CNPackageAppointmentView *_appointmentView;
    CNPackageStationServiceView *_stationServiceView;
    CNPackageSourceView *_sourceView;
    CNPackageNoContentView *_noNoContentView;
}

@property(retain, nonatomic) CNPackageNoContentView *noNoContentView; // @synthesize noNoContentView=_noNoContentView;
@property(retain, nonatomic) CNPackageSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) CNPackageStationServiceView *stationServiceView; // @synthesize stationServiceView=_stationServiceView;
@property(retain, nonatomic) CNPackageAppointmentView *appointmentView; // @synthesize appointmentView=_appointmentView;
@property(retain, nonatomic) CNPackageServiceCardView *serviceCardView; // @synthesize serviceCardView=_serviceCardView;
@property(retain, nonatomic) CNPackageStationCardView *stationCardView; // @synthesize stationCardView=_stationCardView;
@property(retain, nonatomic) NSArray *fullTraceDetail; // @synthesize fullTraceDetail=_fullTraceDetail;
@property(retain, nonatomic) CNPackageItem *item; // @synthesize item=_item;
@property(retain, nonatomic) CNLogisticService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) UITableView *traceTableView; // @synthesize traceTableView=_traceTableView;
@property(retain, nonatomic) CNPackageInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) CNPackageData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showServiceCard:(id)arg1;
- (void)showSourceView:(id)arg1;
- (_Bool)needSourceView:(id)arg1;
- (void)setTraceTableBottom:(id)arg1;
- (void)showNoContentView;
- (void)handlerData:(id)arg1 error:(id)arg2;
- (void)loadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

