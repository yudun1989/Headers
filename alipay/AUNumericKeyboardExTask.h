//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNumericKeyboardEx.h"

@interface AUNumericKeyboardExTask : AUNumericKeyboardEx
{
    _Bool idNumber;
    _Bool dotHidden;
    _Bool dismissHidden;
    _Bool submitEnable;
}

- (void)setSubmitEnable:(_Bool)arg1;
- (_Bool)submitEnable;
- (void)setDismissHidden:(_Bool)arg1;
- (_Bool)dismissHidden;
- (void)setDotHidden:(_Bool)arg1;
- (_Bool)dotHidden;
- (void)setIdNumber:(_Bool)arg1;
- (_Bool)idNumber;
- (CDStruct_329a2377)getButtonInfoWithIndex:(int)arg1;
- (void)createButtons;
- (void)resetButtonLayout;
- (void)configurerMembers;

@end

