//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView, UIToolbar;
@protocol TBIMOptionViewDelegate;

@interface TBIMOptionView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <TBIMOptionViewDelegate> _delegate;
    NSArray *_titlesArray;
    UIPickerView *_pickerView;
    UIToolbar *_toolBar;
    UIView *_backgrondView;
}

+ (id)optionView;
@property(nonatomic) __weak UIView *backgrondView; // @synthesize backgrondView=_backgrondView;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(nonatomic) __weak id <TBIMOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)backgroundViewDidClicked;
- (void)sureButtonClicked;
- (void)cancelButtonClicked;
- (void)remove;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

