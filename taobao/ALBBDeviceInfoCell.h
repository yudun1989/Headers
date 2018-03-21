//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UITableView;

@interface ALBBDeviceInfoCell : UITableViewCell
{
    int _screenWidth;
    int _screenHeight;
    UILabel *_cardNumberLabel;
    UIImageView *_quickPassLogo;
    UIImageView *_deviceLogo;
    UIImageView *_currentDeviceTip;
    UIButton *_deleteButton;
    UILabel *_deviceNameLabel;
    UILabel *_currentDeviceLabel;
    UILabel *_timeLabel;
    UIImageView *_masterDeviceMark;
    UITableView *_deviceListTable;
}

@property(nonatomic) int screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) UITableView *deviceListTable; // @synthesize deviceListTable=_deviceListTable;
@property(retain, nonatomic) UIImageView *masterDeviceMark; // @synthesize masterDeviceMark=_masterDeviceMark;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *currentDeviceLabel; // @synthesize currentDeviceLabel=_currentDeviceLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIImageView *currentDeviceTip; // @synthesize currentDeviceTip=_currentDeviceTip;
@property(retain, nonatomic) UIImageView *deviceLogo; // @synthesize deviceLogo=_deviceLogo;
@property(retain, nonatomic) UIImageView *quickPassLogo; // @synthesize quickPassLogo=_quickPassLogo;
@property(retain, nonatomic) UILabel *cardNumberLabel; // @synthesize cardNumberLabel=_cardNumberLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setResourse:(id)arg1;
- (void)onDeleteButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
