//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/IQSContactsEngineObserver-Protocol.h>

@class NSString;
@protocol IQSContactsEngine;

@interface QQContactsStartUsingViewController : QQViewController <IQSContactsEngineObserver>
{
    id <IQSContactsEngine> _contactsEngine;
    _Bool _waitingForFetchBegin;
    int _bindType;
}

@property(readonly, nonatomic) int bindType; // @synthesize bindType=_bindType;
- (void)notifyUploadContacts:(id)arg1;
- (void)notifyFetchContacts;
- (void)startUsingButtonPress:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithBindType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

