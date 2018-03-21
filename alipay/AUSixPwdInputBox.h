//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class AUTextField, NSString, UIImageView, UILabel;
@protocol AUSixPwdInputBoxDelegate;

@interface AUSixPwdInputBox : UIView <UITextFieldDelegate>
{
    UILabel *_labels[6];
    _Bool _numericPassword;
    AUTextField *_textField;
    id <AUSixPwdInputBoxDelegate> _delegate;
    UILabel *_titleLabel;
    UIImageView *_bgImageView;
    double _quadWidth;
    double _quadHeight;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) double quadHeight; // @synthesize quadHeight=_quadHeight;
@property(nonatomic) double quadWidth; // @synthesize quadWidth=_quadWidth;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isNumericPassword) _Bool numericPassword; // @synthesize numericPassword=_numericPassword;
@property(nonatomic) __weak id <AUSixPwdInputBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AUTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)updateWithText:(id)arg1;
- (void)onTextFieldTextDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)hideKeyBoard;
- (_Bool)showKeyBoard;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tapTitleLabel:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithQuadWidth:(double)arg1 quadHeight:(double)arg2 password:(id)arg3;
- (id)initWithQuadWidth:(double)arg1 quadHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

