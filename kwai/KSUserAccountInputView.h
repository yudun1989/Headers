//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationlessLayer, KSCountryCodeSelectDataSource, KSCountryInfo, UIButton, UILabel, UITextField;

@interface KSUserAccountInputView : UIView
{
    int _type;
    UIButton *_switchCountryBtn;
    UITextField *_accountTextField;
    KSCountryInfo *_selectedCountryInfo;
    UILabel *_countryPhoneCode;
    CAAnimationlessLayer *_vLine;
    CAAnimationlessLayer *_hLine;
    UILabel *_emailLabel;
    KSCountryCodeSelectDataSource *_countryCodeSelectDatesource;
}

@property(retain, nonatomic) KSCountryCodeSelectDataSource *countryCodeSelectDatesource; // @synthesize countryCodeSelectDatesource=_countryCodeSelectDatesource;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) CAAnimationlessLayer *hLine; // @synthesize hLine=_hLine;
@property(retain, nonatomic) CAAnimationlessLayer *vLine; // @synthesize vLine=_vLine;
@property(retain, nonatomic) UILabel *countryPhoneCode; // @synthesize countryPhoneCode=_countryPhoneCode;
@property(readonly, nonatomic) KSCountryInfo *selectedCountryInfo; // @synthesize selectedCountryInfo=_selectedCountryInfo;
@property(retain, nonatomic) UITextField *accountTextField; // @synthesize accountTextField=_accountTextField;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *switchCountryBtn; // @synthesize switchCountryBtn=_switchCountryBtn;
- (void).cxx_destruct;
- (void)drawWithCountryInfo:(id)arg1;
- (id)initWithHeight:(double)arg1;
- (id)init;

@end

