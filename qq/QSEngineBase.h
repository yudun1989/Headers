//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQSEngineBase-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface QSEngineBase : NSObject <IQSEngineBase>
{
    NSMutableDictionary *_callBackDic;
    NSMutableArray *_observers;
}

- (void)notifyObserversWithSelector:(SEL)arg1 info:(id)arg2;
- (void)notifyObserversWithSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

