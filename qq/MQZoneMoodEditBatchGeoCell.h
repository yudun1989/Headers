//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/MQZoneLBSPOIViewControllerDelegate-Protocol.h>

@class NSString, QZGPSInfo, QZPOIInfo, QZWeatherInfo, UIButton, UIImageView, UILabel;

@interface MQZoneMoodEditBatchGeoCell : NSObject <MQZoneLBSPOIViewControllerDelegate>
{
    UIButton *_view;
    QZGPSInfo *_GPSInfo;
    QZPOIInfo *_POIInfo;
    QZWeatherInfo *_weatherInfo;
    long long _dataReportFromType;
    int _xo;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_addressLabel;
    UIImageView *_arrow;
    long long _appID;
    UIImageView *_icon;
    long long _poiReportFromType;
    CDUnknownBlockType _onPOIInfoChange;
    CDUnknownBlockType _onWeatherInfoChange;
}

+ (double)defaultViewHeight;
+ (double)activeViewHeight;
@property(copy, nonatomic) CDUnknownBlockType onWeatherInfoChange; // @synthesize onWeatherInfoChange=_onWeatherInfoChange;
@property(copy, nonatomic) CDUnknownBlockType onPOIInfoChange; // @synthesize onPOIInfoChange=_onPOIInfoChange;
@property(nonatomic) long long poiReportFromType; // @synthesize poiReportFromType=_poiReportFromType;
- (void).cxx_destruct;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationStringV2:(id)arg2 lbsPoiInfo:(id)arg3;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationString:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPositon:(id)arg2;
- (void)pushPOIInfoListFromViewController:(id)arg1;
- (id)createLBSPOIViewController;
- (long long)fromID;
@property(retain, nonatomic) QZWeatherInfo *weatherInfo; // @dynamic weatherInfo;
@property(retain, nonatomic) QZPOIInfo *POIInfo; // @dynamic POIInfo;
- (id)locationString;
- (id)weatherTextFromWeatherInfo:(id)arg1;
- (id)weatherString;
- (id)descriptionString;
- (void)refreshControls;
- (void)setupUI;
- (id)initViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) QZGPSInfo *GPSInfo; // @dynamic GPSInfo;
@property(nonatomic) long long dataReportFromType; // @dynamic dataReportFromType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIButton *view; // @dynamic view;

@end

