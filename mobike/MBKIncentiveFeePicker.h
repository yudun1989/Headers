//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseTitleActionSheet.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MBKEdgeInsetsLabel, NSArray, NSMutableArray, NSString, UIPickerView;

@interface MBKIncentiveFeePicker : MBKBaseTitleActionSheet <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSString *_subTitle;
    NSString *_bottomTitle;
    long long _maxIncentiveFee;
    long long _incentiveFeeInterval;
    NSArray *_incentiveFees;
    MBKEdgeInsetsLabel *_subTitleLabel;
    UIPickerView *_pickerView;
    MBKEdgeInsetsLabel *_bottomTitleLabel;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_displayIncentiveFees;
}

@property(retain, nonatomic) NSMutableArray *displayIncentiveFees; // @synthesize displayIncentiveFees=_displayIncentiveFees;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MBKEdgeInsetsLabel *bottomTitleLabel; // @synthesize bottomTitleLabel=_bottomTitleLabel;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MBKEdgeInsetsLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) NSArray *incentiveFees; // @synthesize incentiveFees=_incentiveFees;
@property(nonatomic) long long incentiveFeeInterval; // @synthesize incentiveFeeInterval=_incentiveFeeInterval;
@property(nonatomic) long long maxIncentiveFee; // @synthesize maxIncentiveFee=_maxIncentiveFee;
@property(copy, nonatomic) NSString *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (long long)incentiveFeeForRow:(long long)arg1;
- (void)addMasConstraints;
- (void)showCompletion:(CDUnknownBlockType)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

