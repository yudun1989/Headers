//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class WBDataTransferObject;

@interface InstallWeiboAppAlert : NSObject <UIAlertViewDelegate>
{
    WBDataTransferObject *transferObject;
}

@property(retain, nonatomic) WBDataTransferObject *transferObject; // @synthesize transferObject;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertWithTransferObject:(id)arg1;
- (void)dealloc;

@end

