//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <QQMainProject/UIPickerViewDataSource-Protocol.h>
#import <QQMainProject/UIPickerViewDelegate-Protocol.h>

@class NSMutableArray, NSString, RegionModel;
@protocol RegionPickerDelegate;

@interface RegionPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSMutableArray *_provinceArray;
    NSMutableArray *_cityArray;
    NSMutableArray *_areaArray;
    NSMutableArray *_selectNames;
    NSMutableArray *_selectCodes;
    RegionModel *_regionRoot;
    int _type;
    unsigned long long _useType;
    id <RegionPickerDelegate> _regionDelegate;
    int _provinceComponent;
    int _cityComponent;
    int _areaComponent;
    _Bool _areaPickerDisabled;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getAreaArrayWithCity:(id)arg1;
- (id)getCityArrayWithProvince:(id)arg1;
- (id)getProvinceModelWithCountry:(id)arg1;
- (void)reloadSelectDataWithRow:(long long)arg1 inComponent:(long long)arg2;
- (void)reloadDataWithRow:(long long)arg1 inComponent:(long long)arg2;
- (int)getIndexWithName:(id)arg1 atArray:(id)arg2;
- (id)isExistProvinceCityAndAreaWithCountryName:(id)arg1;
- (id)getProvinceModelWithCountry:(id)arg1 countryArray:(id)arg2;
- (void)initComponetDataWithModel:(id)arg1;
- (void)initSelectDataWithModel:(id)arg1;
- (void)reloadCustomComponent:(long long)arg1;
- (void)selectCustomRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)initDataWithModel:(id)arg1;
- (id)initWithType:(int)arg1 conditionModel:(id)arg2 useType:(unsigned long long)arg3 areaPickerDisabled:(_Bool)arg4 delegate:(id)arg5;
- (id)initWithType:(int)arg1 conditionModel:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

