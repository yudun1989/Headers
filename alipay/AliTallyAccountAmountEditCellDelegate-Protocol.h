//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AliTallyAccountAmountEditCell, NSDecimalNumber;

@protocol AliTallyAccountAmountEditCellDelegate <NSObject>
- (void)didEndEditAmountCell:(AliTallyAccountAmountEditCell *)arg1 withTag:(long long)arg2;
- (void)willBeginEditAmountCell:(AliTallyAccountAmountEditCell *)arg1 withTag:(long long)arg2;
- (void)saveEditedAmount:(NSDecimalNumber *)arg1 withTag:(long long)arg2;
- (void)closeAccountAmountForCell:(AliTallyAccountAmountEditCell *)arg1 withTag:(long long)arg2;
@end
