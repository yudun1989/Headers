//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseTitleActionSheet.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSDateComponents, NSString, UIPickerView;

@interface MBKDatePicker : MBKBaseTitleActionSheet <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_datePicker;
    NSDateComponents *_dateComponent;
    long long _startDayIndex;
    long long _startHour;
    long long _startMinute;
    long long _lastHour;
    long long _lastMinute;
    long long _startMinuteInterval;
    long long _minuteInterval;
    long long _durtion;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long durtion; // @synthesize durtion=_durtion;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(nonatomic) long long startMinuteInterval; // @synthesize startMinuteInterval=_startMinuteInterval;
@property(nonatomic) long long lastMinute; // @synthesize lastMinute=_lastMinute;
@property(nonatomic) long long lastHour; // @synthesize lastHour=_lastHour;
@property(nonatomic) long long startMinute; // @synthesize startMinute=_startMinute;
@property(nonatomic) long long startHour; // @synthesize startHour=_startHour;
@property(nonatomic) long long startDayIndex; // @synthesize startDayIndex=_startDayIndex;
@property(retain, nonatomic) NSDateComponents *dateComponent; // @synthesize dateComponent=_dateComponent;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)addMasConstraints;
- (void)loadDateData;
- (_Bool)leapyear:(long long)arg1;
- (long long)daysOfMonth:(long long)arg1;
- (id)dateFormatForPicker:(long long)arg1;
- (void)setupDefultDate:(id)arg1;
- (void)confirmButtonAction;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDefultDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

