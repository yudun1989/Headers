//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BEEGridPickController, NSArray;

@protocol BEEGridPickControllerDelegate <NSObject>
- (void)gridPickView:(BEEGridPickController *)arg1 didUnpickAssets:(NSArray *)arg2;
- (void)gridPickView:(BEEGridPickController *)arg1 didPickAssets:(NSArray *)arg2;
@end

