//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ArticleMobileViewController.h"

@class SSThemedButton, SSThemedLabel, SSThemedTextField, SSThemedView;

@interface ArticleMobileChangeViewController : ArticleMobileViewController
{
    SSThemedLabel *_tipLabel1;
    SSThemedLabel *_tipLabel2;
    SSThemedTextField *_fromMobileNumberField;
    SSThemedTextField *_toMobileNumberField;
    SSThemedButton *_nextButton;
    SSThemedLabel *_areaLabel0;
    SSThemedLabel *_areaLabel1;
    SSThemedView *_separatorViewV0;
    SSThemedView *_separatorViewV1;
    SSThemedView *_separatorViewH;
}

+ (double)fontSizeOfTipLabel;
@property(retain, nonatomic) SSThemedView *separatorViewH; // @synthesize separatorViewH=_separatorViewH;
@property(retain, nonatomic) SSThemedView *separatorViewV1; // @synthesize separatorViewV1=_separatorViewV1;
@property(retain, nonatomic) SSThemedView *separatorViewV0; // @synthesize separatorViewV0=_separatorViewV0;
@property(retain, nonatomic) SSThemedLabel *areaLabel1; // @synthesize areaLabel1=_areaLabel1;
@property(retain, nonatomic) SSThemedLabel *areaLabel0; // @synthesize areaLabel0=_areaLabel0;
@property(retain, nonatomic) SSThemedButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) SSThemedTextField *toMobileNumberField; // @synthesize toMobileNumberField=_toMobileNumberField;
@property(retain, nonatomic) SSThemedTextField *fromMobileNumberField; // @synthesize fromMobileNumberField=_fromMobileNumberField;
@property(retain, nonatomic) SSThemedLabel *tipLabel2; // @synthesize tipLabel2=_tipLabel2;
@property(retain, nonatomic) SSThemedLabel *tipLabel1; // @synthesize tipLabel1=_tipLabel1;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)changePhoneNumber;
- (void)nextButtonActionFired:(id)arg1;
- (_Bool)isContentValid;
- (void)viewDidLayoutSubviews;
- (struct CGRect)_separatorViewHFrame;
- (struct CGRect)_fromMobileNumberFieldFrame;
- (struct CGRect)_toMobileNumberFieldFrame;
- (struct CGRect)_separatorViewV1Frame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

