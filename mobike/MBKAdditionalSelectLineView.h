//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKAdditionalSelectLineViewModel, MBKCarHailingOrder, MBKIncentiveFeePicker, MBKWhisperPicker, NSString, RACSignal, UILabel;

@interface MBKAdditionalSelectLineView : UIView
{
    NSString *_message;
    long long _thanksFee;
    long long _payForPickUp;
    RACSignal *_cancelOrderSignal;
    MBKCarHailingOrder *_order;
    unsigned long long _type;
    UILabel *_dispatchFeeLabel;
    UILabel *_meterToCatchLabel;
    UILabel *_messageLabel;
    UILabel *_cancelLabel;
    UIView *_bottomLineView;
    MBKAdditionalSelectLineViewModel *_viewModel;
    MBKWhisperPicker *_whisperPicker;
    MBKIncentiveFeePicker *_incentiveFeePicker;
}

@property(retain, nonatomic) MBKIncentiveFeePicker *incentiveFeePicker; // @synthesize incentiveFeePicker=_incentiveFeePicker;
@property(retain, nonatomic) MBKWhisperPicker *whisperPicker; // @synthesize whisperPicker=_whisperPicker;
@property(retain, nonatomic) MBKAdditionalSelectLineViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *meterToCatchLabel; // @synthesize meterToCatchLabel=_meterToCatchLabel;
@property(retain, nonatomic) UILabel *dispatchFeeLabel; // @synthesize dispatchFeeLabel=_dispatchFeeLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) MBKCarHailingOrder *order; // @synthesize order=_order;
@property(retain, nonatomic) RACSignal *cancelOrderSignal; // @synthesize cancelOrderSignal=_cancelOrderSignal;
@property(nonatomic) long long payForPickUp; // @synthesize payForPickUp=_payForPickUp;
@property(nonatomic) long long thanksFee; // @synthesize thanksFee=_thanksFee;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)configWithType:(unsigned long long)arg1;
- (void)setBinder;
- (void)layoutSubviews;
- (void)addConstraints;
- (void)setupViews;
- (id)init;

@end

