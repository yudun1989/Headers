//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQWeakProxy;
@protocol QQGTTribeSelectorProtocol;

@interface QQGTTribeSelector : NSObject
{
    id <QQGTTribeSelectorProtocol> _delegate;
    QQWeakProxy *_webVCWeakProxy;
}

- (void)deInit;
- (void)cancelSelectTribe;
- (void)didSelectTribe:(id)arg1;
- (id)selectTribe:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

