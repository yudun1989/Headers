//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransterCheckSmsController.h"

#import "AUDialogDelegate-Protocol.h"

@class NSString;

@interface ALPFundTransferOutCheckSmsViewController : TransterCheckSmsController <AUDialogDelegate>
{
    _Bool _isFromBalance;
}

@property(nonatomic) _Bool isFromBalance; // @synthesize isFromBalance=_isFromBalance;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)submitButtonClick;
- (void)sendAuthSMS;
- (void)viewDidLoad;
- (id)initWithTairKey:(id)arg1 hidedPhoneNumber:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

