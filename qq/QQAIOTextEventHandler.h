//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOBaseEventHandler.h>

#import <QQMainProject/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSString;

@interface QQAIOTextEventHandler : QQAIOBaseEventHandler <MFMailComposeViewControllerDelegate>
{
}

- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)actionLaunchEmail:(id)arg1;
- (_Bool)aioAction:(long long)arg1 object:(id)arg2 buttonIndex:(long long)arg3;
- (_Bool)AIOActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)AIOActionSheet:(id)arg1;
- (_Bool)AIOHandleTap:(id)arg1 aioCell:(id)arg2;
- (_Bool)AIOTouchesEnded:(id)arg1 withEvent:(id)arg2 aioCell:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

