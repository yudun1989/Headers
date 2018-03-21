//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MBKTimePickerConfiguration, MBKTimeSelectLineViewModel, NSDate, NSString, UILabel;

@interface MBKTimeSelectLineView : UIView <UIGestureRecognizerDelegate>
{
    MBKTimeSelectLineViewModel *_viewModel;
    NSDate *_date;
    UILabel *_timeSelectLabel;
    UIView *_bottomLineView;
    MBKTimePickerConfiguration *_timePickerConfiguration;
}

@property(retain, nonatomic) MBKTimePickerConfiguration *timePickerConfiguration; // @synthesize timePickerConfiguration=_timePickerConfiguration;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *timeSelectLabel; // @synthesize timeSelectLabel=_timeSelectLabel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) MBKTimeSelectLineViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)selectTimeView;
- (void)setBinder;
- (void)addViewsConstraints;
- (void)setupViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

