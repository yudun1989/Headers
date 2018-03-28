//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSImageAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SSBaseAlertManager, SSBaseAlertModel;

@interface SSAlertCenter : NSObject <SSImageAlertViewDelegate>
{
    _Bool _lockAlert;
    NSMutableArray *_alertViews;
    NSMutableArray *_alertManagers;
    NSTimer *_alertTimer;
    SSBaseAlertModel *_currentAlertModel;
    SSBaseAlertManager *_currentAlertManager;
}

+ (id)defaultCenter;
@property(retain, nonatomic) SSBaseAlertManager *currentAlertManager; // @synthesize currentAlertManager=_currentAlertManager;
@property(retain, nonatomic) SSBaseAlertModel *currentAlertModel; // @synthesize currentAlertModel=_currentAlertModel;
@property(retain, nonatomic) NSTimer *alertTimer; // @synthesize alertTimer=_alertTimer;
@property(retain, nonatomic) NSMutableArray *alertManagers; // @synthesize alertManagers=_alertManagers;
@property(retain, nonatomic) NSMutableArray *alertViews; // @synthesize alertViews=_alertViews;
- (void).cxx_destruct;
- (void)imageAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearAllAlerts;
- (_Bool)refresh;
- (_Bool)removeAlert:(id)arg1;
- (_Bool)addAlert:(id)arg1;
- (void)resumeAlertCenter;
- (void)pauseAlertCenter;
- (void)startTimer;
- (void)showAlert;
- (void)clearAlert;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
