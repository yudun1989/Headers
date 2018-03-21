//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFTextFieldCell.h"

@class APTextField, UIButton;

@interface TFToCardOwnerNameCell : TFTextFieldCell
{
    APTextField *_ownerNameInputBox;
    UIButton *_cardButton;
}

@property(retain, nonatomic) UIButton *cardButton; // @synthesize cardButton=_cardButton;
@property(retain, nonatomic) APTextField *ownerNameInputBox; // @synthesize ownerNameInputBox=_ownerNameInputBox;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

