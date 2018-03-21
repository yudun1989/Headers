//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/IQSContactsEngineObserver-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString;
@protocol IQSContactsEngine;

@interface QQContactsCheckDetailViewController : QQViewController <QUIActionSheetDelegate, UIAlertViewDelegate, IQSContactsEngineObserver>
{
    id <IQSContactsEngine> _contactsEngine;
    int _entry;
}

@property(nonatomic) int entry; // @synthesize entry=_entry;
- (void)notifyDisableMobileBind:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightButtonPress:(id)arg1;
- (void)actionCheck:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

