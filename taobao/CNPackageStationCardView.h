//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNNibLoadView.h"

@class CNLogisticService, CNPackageData, CNPackageItem, CNUpgradeSMSHandler, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface CNPackageStationCardView : CNNibLoadView
{
    _Bool _needUpdate;
    CNPackageData *_data;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_codeLabel;
    UILabel *_codeDecsLabel;
    UILabel *_toastLabel;
    UIView *_bottomLineView;
    NSLayoutConstraint *_bottomLineViewHeight;
    UIButton *_upgradeButton;
    CNPackageItem *_item;
    CNUpgradeSMSHandler *_upgradeSMSHandler;
    CNLogisticService *_service;
}

@property(retain, nonatomic) CNLogisticService *service; // @synthesize service=_service;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(retain, nonatomic) CNUpgradeSMSHandler *upgradeSMSHandler; // @synthesize upgradeSMSHandler=_upgradeSMSHandler;
@property(retain, nonatomic) CNPackageItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineViewHeight; // @synthesize bottomLineViewHeight=_bottomLineViewHeight;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UILabel *toastLabel; // @synthesize toastLabel=_toastLabel;
@property(nonatomic) __weak UILabel *codeDecsLabel; // @synthesize codeDecsLabel=_codeDecsLabel;
@property(nonatomic) __weak UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak CNPackageData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)dealloc;
- (double)cellHeight;
- (void)upgrade:(id)arg1;
- (void)updateData:(id)arg1;
- (void)willAppear:(id)arg1;
- (void)addtionalInitialization;
- (void)setUIStyle;

// Remaining properties
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

