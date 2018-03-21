//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCPayCurrencyInputLogicDelegate-Protocol.h"

@class NSString, UILabel, UITextField, WCPayCurrencyInputLogic;
@protocol WCPayCurrencyInputViewDelegate;

@interface WCPayCurrencyInputView : UIView <WCPayCurrencyInputLogicDelegate>
{
    id <WCPayCurrencyInputViewDelegate> _m_delegate;
    WCPayCurrencyInputLogic *_m_inputlogic;
    UILabel *_m_currencyLabel;
    UITextField *_m_numberTextFiled;
    double _fontSize;
}

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UITextField *m_numberTextFiled; // @synthesize m_numberTextFiled=_m_numberTextFiled;
@property(retain, nonatomic) UILabel *m_currencyLabel; // @synthesize m_currencyLabel=_m_currencyLabel;
@property(retain, nonatomic) WCPayCurrencyInputLogic *m_inputlogic; // @synthesize m_inputlogic=_m_inputlogic;
@property(nonatomic) __weak id <WCPayCurrencyInputViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onWCPayCurrencyInputLogicStringChangeTo:(id)arg1;
- (unsigned long long)getAmount;
- (void)updateFontSize:(double)arg1;
- (void)updateCurrencyTitle:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)internalLayout;
- (void)layoutSubviews;
- (void)showKeyboard;
- (void)closeKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

